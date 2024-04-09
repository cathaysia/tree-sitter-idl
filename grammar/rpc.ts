import { commaSep, commaSep1 } from './common'

var rules = {
  except_dcl: $ =>
    seq('exception', $.identifier, '{', repeat($.member), '}', ';'),
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
  interface_anno: $ =>
    choice($.dds_service, $.dds_request_topic, $.dds_reply_topic),
}

export default rules
