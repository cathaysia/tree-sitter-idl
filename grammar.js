const base_types = require('./grammar/base_types.js')
const expr = require('./grammar/expr.js')
const literal = require('./grammar/literal.js')

module.exports = grammar({
  name: 'idl',

  extras: $ => [/\s|\\\r?\n/, $.comment],
  externals: $ => [$._eof],
  inline: $ => [
    $.type_dcl,
    $.constr_type_dcl,
    $.struct_dcl,
    $.union_dcl,
    $.primary_expr,
  ],

  rules: {
    specification: $ => repeat($._definition),
    ...base_types.rules,
    ...expr.rules,
    ...literal.rules,
    _definition: $ =>
      choice(
        $.predefine,
        seq(choice($.module_dcl, $.type_dcl, $.const_dcl, $.typedef_dcl), ';'),
        $.except_dcl,
      ),
    except_dcl: $ =>
      seq('exception', $.identifier, '{', repeat($.member), '}', ';'),
    type_dcl: $ =>
      choice(
        $.annotation_dcl,
        $.bitset_dcl,
        $.bitmask_dcl,
        $.interface_dcl,
        $.native_dcl,
        $.constr_type_dcl,
      ),
    constr_type_dcl: $ => choice($.struct_dcl, $.union_dcl, $.enum_dcl),
    native_dcl: $ => seq('native', $.simple_declarator),
    module_dcl: $ =>
      seq('module', $.identifier, '{', repeat($._definition), '}'),

    struct_dcl: $ => choice($.struct_forward_dcl, $.struct_def),
    struct_forward_dcl: $ => prec.left(1, seq('struct', $.identifier)),
    struct_def: $ =>
      prec.left(
        2,
        seq(
          repeat(choice($.data_representation, $.final)),
          'struct',
          $.identifier,
          optional(seq(':', field('parent', $.scoped_name))),
          '{',
          repeat($.member),
          '}',
        ),
      ),
    member: $ =>
      seq(
        repeat($.struct_modifier),
        field('type', $.type_spec),
        field('identifier', $.declarators),
        optional($.default),
        ';',
      ),

    default: $ => seq('default', $.const_expr),

    enum_dcl: $ =>
      seq(
        optional($.enum_anno),
        'enum',
        $.identifier,
        '{',
        commaSep($.enumerator),
        '}',
      ),
    enumerator: $ => seq(repeat($.enum_modifier), $.identifier),
    enum_modifier: $ => choice('@default_literal'),
    enum_anno: $ => choice('@ignore_literal_names'),

    annotation_dcl: $ =>
      seq('@annotation', $.identifier, '{', optional($.annotation_body), '}'),
    annotation_body: $ =>
      repeat1(
        choice(
          $.annotation_member,
          choice(seq($.enum_dcl, $.const_dcl, $.typedef_dcl, ';')),
        ),
      ),
    annotation_member: $ =>
      seq(
        $.annotation_member_type,
        $.simple_declarator,
        optional(seq('default', $.const_expr)),
        ';',
      ),
    annotation_member_type: $ =>
      choice($.const_type, $.any_const_type, $.scoped_name),
    any_const_type: _ => 'any',
    annotation_appl: $ =>
      seq(
        '@',
        $.scoped_name,
        optional(seq('[', $.annotation_appl_params, ']')),
      ),
    annotation_appl_params: $ =>
      choice($.const_expr, commaSep1($.annotation_appl_param)),
    annotation_appl_param: $ => seq($.identifier, '=', $.const_expr),

    union_dcl: $ => choice($.union_def, $.union_forward_dcl),
    union_forward_dcl: $ => seq('union', $.identifier),
    union_def: $ =>
      seq(
        'union',
        $.identifier,
        'switch',
        '(',
        $.switch_type_spec,
        ')',
        '{',
        repeat($.case),
        '}',
      ),
    case: $ => seq($.case_label, $.element_spec, ';'),
    case_label: $ => seq(choice(seq('case', $.const_expr), 'default'), ':'),
    element_spec: $ => seq($.type_spec, $.declarator),
    switch_type_spec: $ =>
      choice($.integer_type, $.char_type, $.boolean_type, $.scoped_name),

    bitset_dcl: $ =>
      seq(
        'bitset',
        $.identifier,
        optional(seq(':', $.scoped_name)),
        '{',
        repeat($.bitfield),
        '}',
      ),
    bitfield: $ => seq($.bitfield_spec, repeat($.identifier), ';'),
    bitfield_spec: $ =>
      seq(
        'bitfield',
        '<',
        $.positive_int_const,
        optional(seq(',', $.destination_type)),
        '>',
      ),
    destination_type: $ => choice($.boolean_type, $.octet_type, $.integer_type),

    bitmask_dcl: $ =>
      seq('bitmask', $.identifier, '{', commaSep($.bit_value), '}'),
    bit_value: $ => $.identifier,

    typedef_dcl: $ => seq('typedef', $.type_declarator),

    predefine: $ => seq('#define', /[^\n]*/),
    interface_dcl: $ => choice($.interface_def, $.interface_forward_dcl),
    interface_forward_dcl: $ => seq('interface', $.identifier),
    interface_def: $ =>
      seq(
        repeat($.interface_anno),
        optional('local'),
        $.interface_header,
        '{',
        optional($.interface_body),
        '}',
      ),
    interface_header: $ =>
      seq('interface', $.identifier, optional($.interface_inheritance_spec)),
    interface_inheritance_spec: $ => seq(':', commaSep1($.interface_name)),
    interface_name: $ => $.scoped_name,
    interface_body: $ => commaSep1($.export),
    export: $ => seq(choice($.op_dcl, $.attr_dcl), ';'),
    op_dcl: $ =>
      seq(
        $.op_type_spec,
        $.identifier,
        '(',
        optional($.parameter_dcls),
        ')',
        optional($.raises_expr),
      ),
    op_type_spec: $ => choice($.type_spec, 'void'),
    parameter_dcls: $ => commaSep1($.param_dcl),
    param_dcl: $ => seq($.param_attribute, $.type_spec, $.simple_declarator),
    param_attribute: $ => choice('in', 'out', 'inout'),
    raises_expr: $ => seq('raises', '(', commaSep($.scoped_name), ')'),
    attr_dcl: $ => choice($.readonly_attr_spec, $.attr_spec),
    readonly_attr_spec: $ =>
      seq('readonly', 'attribute', $.type_spec, $.readonly_attr_declarator),
    readonly_attr_declarator: $ =>
      choice(
        seq($.simple_declarator, $.raises_expr),
        commaSep1($.simple_declarator),
      ),
    attr_spec: $ => seq('attribute', $.type_spec, $.attr_declarator),
    attr_declarator: $ =>
      choice(
        seq($.simple_declarator, $.attr_raises_expr),
        commaSep1($.simple_declarator),
      ),
    attr_raises_expr: $ =>
      choice(seq($.get_excep_expr, repeat($.set_excep_expr)), $.set_excep_expr),
    get_excep_expr: $ => seq('getraises', $.exception_list),
    set_excep_expr: $ => seq('setraises', $.exception_list),
    exception_list: $ => seq('(', commaSep($.scoped_name), ')'),

    dds_service: _ => '@DDSService',
    dds_request_topic: $ =>
      seq('@DDSRequestTopic', '(', 'name', '=', /\w+/, ')'),
    dds_reply_topic: $ => seq('@DDSReplyTopic', '(', 'name', '=', /\w+/, ')'),

    interface_anno: $ =>
      choice($.dds_service, $.dds_request_topic, $.dds_reply_topic),

    const_dcl: $ => seq('const', $.const_type, $.identifier, '=', $.const_expr),
    const_type: $ =>
      prec.left(
        1,
        choice(
          $.integer_type,
          $.floating_pt_type,
          $.fixed_pt_const_type,
          $.char_type,
          $.boolean_type,
          $.octet_type,
          $.string_type,
          $.scoped_name,
          $.sequence_type,
        ),
      ),
    // table 21
    optional: _ => '@optional',
    key: _ => '@key',
    must_understand: _ => '@must_understand',
    non_serialized: _ => '@non_serialized',
    id: _ => '@id',
    external: _ => '@external',
    hashid: $ => seq('@hashid', '("', alias($.identifier, $.hashid_value), '"'),
    try_construct: $ =>
      seq('@try_construct', alias($.identifier, $.try_construct_value)),
    extensibility: _ => '@extensibility',
    mutable: _ => '@mutable',
    appendable: _ => '@appendable',
    final: _ => '@final',
    nested: _ => '@nested',
    default_literal: _ => '@default_literal',
    value: _ => '@value',
    autoid: _ => '@autoid',
    verbatim: _ => '@verbatim',
    data_representation: $ =>
      seq(
        '@data_representation',
        '(',
        alias(repeat1(choice('XCDR', 'XCDR2')), $.data_rep),
        ')',
      ),

    struct_modifier: $ =>
      choice(
        $.optional,
        $.must_understand,
        $.non_serialized,
        $.id,
        $.hashid,
        $.external,
        $.try_construct,
        $.key,
      ),

    identifier: _ => /\w[\w\d_]*/, // 7.2.3
    simple_declarator: $ => $.identifier,
    declarator: $ => choice($.simple_declarator, $.array_declarator),
    declarators: $ => commaSep1($.declarator),
    array_declarator: $ => seq($.identifier, repeat1($.fixed_array_size)),
    positive_int_const: $ => $.const_expr,
    fixed_array_size: $ => seq('[', $.positive_int_const, ']'),
    type_declarator: $ =>
      seq(
        choice($.simple_type_spec, $.template_type_spec, $.constr_type_dcl),
        $.any_declarators,
      ),
    any_declarators: $ => commaSep1($.any_declarator),
    any_declarator: $ => choice($.simple_declarator, $.array_declarator),
    comment: _ => seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
  },
})

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule))
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}
