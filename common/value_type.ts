import { commaSep, commaSep1 } from './common'

const rules = {
  value_dcl: $ => choice($.value_def, $.value_forward_dcl),
  value_def: $ => seq($.value_header, '{', repeat($.value_element), '}'),
  value_header: $ =>
    seq('valuetype', $.identifier, optional($.value_inheritance_spec)),
  value_inheritance_spec: $ =>
    choice(
      $.value_inheritance,
      $.value_supports,
      seq($.value_inheritance, $.value_supports),
    ),
  value_inheritance: $ => seq(':', $.value_name),
  value_supports: $ => seq('supports', $.interface_name),

  value_name: $ => $.scoped_name,
  value_element: $ => choice($.export, $.state_member, $.init_dcl),
  state_member: $ =>
    seq(choice('public', 'private'), $.type_spec, $.declarators, ';'),
  init_dcl: $ =>
    seq(
      'factory',
      $.identifier,
      '(',
      optional($.init_param_dcls),
      ')',
      optional($.raises_expr),
      ';',
    ),
  init_param_dcls: $ => commaSep1($.init_param_dcl),
  init_param_dcl: $ => seq('in', $.type_spec, $.simple_declarator),
  value_forward_dcl: $ => seq('valuetype', $.identifier),
}

export default {
  rules: rules,
}
