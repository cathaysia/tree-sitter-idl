const { commaSep, commaSep1 } = require('./common')

exports.rules = {
  component_dcl: $ => choice($.component_def, $.component_forward_dcl),
  component_forward_dcl: $ => seq('component', $.identifier),
  component_def: $ =>
    seq($.component_header, '{', optional($.component_body), '}'),
  component_header: $ =>
    seq('component', $.identifier, optional($.component_inheritance_spec)),
  component_inheritance_spec: $ => seq(':', $.scoped_name),
  component_body: $ => repeat1($.component_export),
  component_export: $ =>
    seq(choice($.provides_dcl, $.uses_dcl, $.attr_dcl), ';'),
  provides_dcl: $ => seq('provides', $.interface_type, $.identifier),
  interface_type: $ => $.scoped_name,
  uses_dcl: $ => seq('uses', $.interface_type, $.identifier),
}
