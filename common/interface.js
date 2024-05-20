const { commaSep1 } = require('./common')

exports.rules = {
  except_dcl: $ => seq('exception', $.identifier, '{', repeat($.member), '}'),
  interface_dcl: $ => choice($.interface_def, $.interface_forward_dcl),
  interface_kind: _ =>
    seq(
      optional(
        choice(
          'local', // IDL 7.4.6
          'abstract', // IDL 7.4.7
        ),
      ),
      'interface',
    ),
  interface_forward_dcl: $ => seq($.interface_kind, $.identifier),
  interface_def: $ =>
    seq(
      repeat($.annotation_appl),
      $.interface_header,
      '{',
      optional($.interface_body),
      '}',
    ),
  interface_header: $ =>
    seq($.interface_kind, $.identifier, optional($.interface_inheritance_spec)),
  interface_inheritance_spec: $ => seq(':', commaSep1($.interface_name)),
  interface_name: $ => $.scoped_name,
  interface_body: $ => repeat1($.export),
  export: $ =>
    seq(
      choice(
        $.op_dcl,
        $.attr_dcl,
        $.type_dcl, // idl 7.4.4
        $.const_dcl, // idl 7.4.4
        $.except_dcl, // idl 7.4.4
        $.value_dcl, // idl 7.4.5
        $.type_id_dcl, // idl 7.4.6
        $.import_dcl, // idl_7.4.6
        $.op_oneway_dcl, // idl 7.4.6
        $.op_with_context, // idl 7.4.6
      ),
      ';',
    ),
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
  raises_expr: $ => seq('raises', '(', commaSep1($.scoped_name), ')'),
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
    choice(seq($.get_excep_expr, optional($.set_excep_expr)), $.set_excep_expr),
  get_excep_expr: $ => seq('getraises', $.exception_list),
  set_excep_expr: $ => seq('setraises', $.exception_list),
  exception_list: $ => seq('(', commaSep1($.scoped_name), ')'),
}
