const { commaSep, commaSep1 } = require('./common/common')
const base_types = require('./common/base_types')
const expr = require('./common/expr')
const literal = require('./common/literal')
const directive = require('./common/directive')
const rpc = require('./common/rpc')
const bitmask = require('./common/bitmask')
const annotation = require('./common/annotation')
const template = require('./common/template')
const value_type = require('./common/value_type')
const typedef_dcl = require('./common/typedef_dcl')
const union_dcl = require('./common/union_dcl')

module.exports = grammar({
  name: 'idl',

  extras: $ => [/\s|\\\r?\n/, $.comment],
  inline: $ => [
    $.type_dcl,
    $.constr_type_dcl,
    $.struct_dcl,
    $.union_dcl,
    $.primary_expr,
    $.value_inheritance,
    $.value_supports,
  ],
  precedences: $ => [
    [$.annotation_appl, $.scoped_name],
    [$.simple_type_spec, $.unary_expr],
    [$.annotation_member_type, $.const_type],
  ],

  rules: {
    specification: $ => seq(repeat($.preproc_call), repeat($._definition)),
    ...base_types.rules,
    ...expr.rules,
    ...literal.rules,
    ...directive.rules,
    ...rpc.rules,
    ...bitmask.rules,
    ...annotation.rules,
    ...template.rules,
    ...value_type.rules,
    ...typedef_dcl.rules,
    ...union_dcl.rules,
    _definition: $ =>
      choice(
        $.predefine,
        seq(
          choice(
            $.module_dcl,
            $.type_dcl,
            $.const_dcl,
            $.typedef_dcl,
            $.except_dcl,
            $.interface_dcl,
            $.annotation_dcl, // 7.4.15
            $.template_module_dcl, // idl 7.4.12
            $.template_module_inst, // idl 7.4.12
            $.value_dcl, // idl 7.4.5
          ),
          ';',
        ),
      ),
    type_dcl: $ => choice($.constr_type_dcl, $.native_dcl, $.typedef_dcl),
    constr_type_dcl: $ =>
      choice(
        $.struct_dcl,
        $.union_dcl,
        $.enum_dcl,
        $.bitset_dcl, // idl 7.4.13
        $.bitmask_dcl, // idl 7.4.13
      ),
    native_dcl: $ => seq('native', $.simple_declarator),
    module_dcl: $ =>
      seq('module', $.identifier, '{', repeat($._definition), '}'),

    struct_dcl: $ => choice($.struct_forward_dcl, $.struct_def),
    struct_forward_dcl: $ => seq('struct', $.identifier),
    struct_def: $ =>
      seq(
        repeat($.annotation_appl),
        'struct',
        $.identifier,
        optional(seq(':', field('parent', $.scoped_name))),
        '{',
        repeat($.member),
        '}',
      ),
    member: $ =>
      seq(
        repeat($.annotation_appl),
        field('type', $.type_spec),
        field('identifier', $.declarators),
        optional($.default),
        ';',
      ),
    default: $ => seq('default', $.const_expr),
    predefine: $ => seq('#define', /[^\n]*/),

    const_dcl: $ => seq('const', $.const_type, $.identifier, '=', $.const_expr),
    const_type: $ =>
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
    // table 21

    identifier: _ => /\w[\w\d_]*/, // 7.2.3
    comment: $ =>
      choice(
        seq('//', repeat1($.annotation_appl), /\r?\n/),
        seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
        seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
      ),
  },
})