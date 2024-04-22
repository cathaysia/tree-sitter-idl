import { commaSep, commaSep1 } from '../common/common'
import base_types from '../common/base_types'
import expr from '../common/expr'
import literal from '../common/literal'
import directive from '../common/directive'
import rpc from '../common/rpc'
import bitmask from '../common/bitmask'
import annotation from '../common/annotation'
import template from '../common/template'
import value_type from '../common/value_type'
import typedef_dcl from '../common/typedef_dcl'
import union_dcl from '../common/union_dcl'

declare var module: any

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
    $.value_inheritance,
    $.value_supports,
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
    struct_forward_dcl: $ => prec.left(1, seq('struct', $.identifier)),
    struct_def: $ =>
      prec.left(
        2,
        seq(
          repeat($.annotation_appl),
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

    identifier: _ => /\w[\w\d_]*/, // 7.2.3
    comment: _ =>
      token(
        choice(
          seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
          seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
        ),
      ),
  },
})
