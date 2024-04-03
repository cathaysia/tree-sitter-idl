const PREC = {
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  INCLUSIVE_OR: 3,
  EXCLUSIVE_OR: 4,
  BITWISE_AND: 5,
  EQUAL: 6,
  RELATIONAL: 7,
  SHIFT: 9,
  ADD: 10,
  MULTIPLY: 11,
  UNARY: 14,
}

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
    _definition: $ =>
      choice(
        $.predefine,
        seq(choice($.module_dcl, $.type_dcl, $.const_dcl, $.typedef_dcl), ';'),
      ),
    type_dcl: $ =>
      choice(
        $.annotation,
        $.bitmask,
        $.interface,
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
    inherit: $ =>
      seq(
        ':',
        repeat(field('parent', $.identifier, ',')),
        field('parent', $.identifier),
      ),
    member: $ =>
      seq(
        repeat($.struct_modifier),
        field('type', $.type_spec),
        field('identifier', $.declarators),
        optional($.default),
        ';',
      ),

    or_expr: $ =>
      prec.left(
        PREC.INCLUSIVE_OR,
        choice($.xor_expr, seq($.or_expr, '|', $.xor_expr)),
      ),
    xor_expr: $ =>
      prec.left(
        PREC.EXCLUSIVE_OR,
        choice($.and_expr, seq($.xor_expr, '^', $.and_expr)),
      ),
    and_expr: $ =>
      prec.left(
        PREC.BITWISE_AND,
        choice($.shift_expr, seq($.and_expr, '$', $.shift_expr)),
      ),
    shift_expr: $ =>
      prec.left(
        PREC.SHIFT,
        choice(
          $.add_expr,
          seq($.shift_expr, '>>', $.add_expr),
          seq($.shift_expr, '<<', $.add_expr),
        ),
      ),
    add_expr: $ =>
      prec.left(
        PREC.ADD,
        choice(
          $.mult_expr,
          seq($.add_expr, '+', $.mult_expr),
          seq($.add_expr, '-', $.mult_expr),
        ),
      ),
    mult_expr: $ =>
      prec.left(
        PREC.MULTIPLY,
        choice(
          $.unary_expr,
          seq($.mult_expr, '*', $.unary_expr),
          seq($.mult_expr, '/', $.unary_expr),
          seq($.mult_expr, '%', $.unary_expr),
        ),
      ),
    unary_expr: $ =>
      choice(seq($.unary_operator, $.primary_expr), $.primary_expr),
    unary_operator: _ =>prec.left(PREC.UNARY, choice('-', '+', '~')),
    primary_expr: $ =>
      choice($.scoped_name, $.literal, seq('(', $.const_expr, ')')),
    char_literal: $ => seq("'", field('value', /\w+/), "'"),
    wchar_literal: $ => seq('L', "'", field('value', /\w+/), "'"),
    literal: $ => choice($.number_literal, $.char_literal, $.wchar_literal),

    default: $ => seq('default', $.const_expr),

    enum_dcl: $ =>
      seq(
        optional($.enum_anno),
        'enum',
        $.identifier,
        '{',
        seq(repeat(seq($.enumerator, ',')), $.enumerator),
        '}',
      ),
    enumerator: $ => seq(repeat($.enum_modifier), $.identifier),
    enum_modifier: $ => choice('@default_literal'),
    enum_anno: $ => choice('@ignore_literal_names'),

    annotation: $ =>
      seq('@annotation', $.identifier, '{', repeat($.annotation_field), '}'),
    annotation_field: $ =>
      seq($.scoped_name, $.identifier, optional($.default), ';'),

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
    switch_type_spec: $ => choice($.primitive_type, $.scoped_name),

    bitmask: $ =>
      seq(optional($.bit_bound), 'bitmask', '{', repeat($.bitmask_field), '}'),
    bitmask_field: $ => seq(optional($.position), $.identifier, optional(',')),

    typedef_dcl: $ => seq('typedef', $.type_declarator),

    predefine: $ => seq('#define', /[^\n]*/),
    interface: $ =>
      seq(
        repeat($.interface_anno),
        optional('local'),
        'interface',
        $.identifier,
        optional($.inherit),
        '{',
        repeat($.interface_attribute),
        repeat($.interface_function),
        '}',
      ),
    dds_service: _ => '@DDSService',
    dds_request_topic: $ =>
      seq('@DDSRequestTopic', '(', 'name', '=', /\w+/, ')'),
    dds_reply_topic: $ => seq('@DDSReplyTopic', '(', 'name', '=', /\w+/, ')'),

    interface_anno: $ =>
      choice($.dds_service, $.dds_request_topic, $.dds_reply_topic),
    interface_attribute: $ => seq('attribute', $.type_spec, $.identifier),
    interface_function: $ =>
      seq(
        $.scoped_name,
        $.identifier,
        '(',
        repeat($.function_arg),
        ')',
        optional($.interface_except),
        ';',
      ),
    interface_except: $ => seq('raises', '(', $.scoped_name, ')'),
    interface_modifier: _ => choice('in', 'out', 'inout'),
    function_arg: $ =>
      seq(optional($.interface_modifier), $.scoped_name, /\w+/, optional(',')),

    const_dcl: $ => seq('const', $.const_type, $.identifier, '=', $.const_expr),
    const_type: $ =>
      prec.left(1, choice($.primitive_type, $.sequence_type, $.scoped_name)),
    const_expr: $ => $.or_expr,
    number_literal: _ => {
      const separator = "'"
      const hex = /[0-9a-fA-F]/
      const decimal = /[0-9]/
      const hexDigits = seq(repeat1(hex), repeat(seq(separator, repeat1(hex))))
      const decimalDigits = seq(
        repeat1(decimal),
        repeat(seq(separator, repeat1(decimal))),
      )
      return token(
        seq(
          optional(/[-\+]/),
          optional(choice(/0[xX]/, /0[bB]/)),
          choice(
            seq(
              choice(
                decimalDigits,
                seq(/0[bB]/, decimalDigits),
                seq(/0[xX]/, hexDigits),
              ),
              optional(seq('.', optional(hexDigits))),
            ),
            seq('.', decimalDigits),
          ),
          optional(seq(/[eEpP]/, optional(seq(optional(/[-\+]/), hexDigits)))),
          /[uUlLwWfFbBdD]*/,
        ),
      )
    },

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
    bit_bound: $ => seq('@bit_bound', '(', alias(/\d+/, $.bistmask_bound), ')'),
    extensibility: _ => '@extensibility',
    mutable: _ => '@mutable',
    appendable: _ => '@appendable',
    final: _ => '@final',
    nested: _ => '@nested',
    default_literal: _ => '@default_literal',
    value: _ => '@value',
    position: $ => seq('@position', '(', alias(/\d+/, $.position), ')'),
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

    primitive_type: _ =>
      prec.left(
        1,
        choice(
          'true',
          'false',
          'void',

          'float',
          'double',
          'short',
          'long',
          'long double',
          'unsigned short',
          'char',
          'wchar',
          'long long',
          'octet',
          'unsigned long',
          'unsigned long long',

          'int',
          'int8',
          'int16',
          'int32',
          'int64',
          'uint8',
          'uint16',
          'uint32',
          'uint64',
          'float32',
          'float64',
          'float128',
          'byte',
          'boolean',
          'char8',
          'char16',
        ),
      ),

    scoped_name: $ =>
      choice(
        $.identifier,
        seq('::', $.identifier),
        seq($.scoped_name, $.identifier),
      ),
    simple_type_spec: $ =>
      prec.left(1, choice($.primitive_type, $.scoped_name)),
    type_spec: $ => choice($.simple_type_spec, $.template_type_spec),
    identifier: _ => /\w[\w\d_]*/, // 7.2.3
    simple_declarator: $ => $.identifier,
    declarator: $ => choice($.simple_declarator, $.array_declarator),
    declarators: $ => seq($.declarator, repeat(seq(',', $.declarator))),
    array_declarator: $ => seq($.identifier, repeat1($.fixed_array_size)),
    positive_int_const: $ => $.const_expr,
    fixed_array_size: $ => seq('[', $.positive_int_const, ']'),
    sequence_type: $ =>
      seq(
        'sequence',
        '<',
        choice($.type_spec, optional(seq(',', $.positive_int_const))),
        '>',
      ),
    string_type: $ =>
      seq(
        choice('string', 'wstring'),
        optional(seq('<', $.positive_int_const, '>')),
      ),
    fixed_pt_type: $ =>
      seq('fixed', '<', $.positive_int_const, ',', $.positive_int_const, '>'),
    template_type_spec: $ =>
      choice($.sequence_type, $.string_type, $.fixed_pt_type),
    type_declarator: $ =>
      seq(
        choice($.simple_type_spec, $.template_type_spec, $.constr_type_dcl),
        $.any_declarators,
      ),
    any_declarators: $ =>
      seq($.any_declarator, repeat(seq(',', $.any_declarator))),
    any_declarator: $ => choice($.simple_declarator, $.array_declarator),
    comment: _ => seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
  },
})
