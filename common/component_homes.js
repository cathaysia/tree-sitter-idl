const { commaSep, commaSep1 } = require('./common')

exports.rules = {
  home_dcl: $ => seq($.home_header, '{', optional($.home_body), '}'),
  home_header: $ =>
    seq(
      'home',
      $.identifier,
      optional($.home_inheritance_spec),
      optional($.supported_interface_spec), // idl 7.4.10
      'manages',
      $.scoped_name,
      optional($.primary_key_spec), // idl 7.4.10
    ),
  home_inheritance_spec: $ => seq(':', $.scoped_name),
  home_body: $ => repeat1($.home_export),
  home_export: $ =>
    choice(
      $.export,
      seq(
        choice(
          $.factory_dcl,
          // $.finder_dcl, // idl 7.4.10
        ),
        ';',
      ),
    ),
  factory_dcl: $ =>
    seq(
      'factory',
      $.identifier,
      '(',
      optional($.factory_param_dcls),
      ')',
      optional($.raises_expr),
    ),
  factory_param_dcls: $ => commaSep1($.factory_param_dcl),
  factory_param_dcl: $ => seq('in', $.type_spec, $.simple_declarator),
}
