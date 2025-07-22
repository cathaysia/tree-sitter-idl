const { commaSep, commaSep1 } = require('./common');

exports.rules = {
  component_dcl: $ => choice($.component_def, $.component_forward_dcl),
  component_forward_dcl: $ => seq('component', $.identifier),
  component_def: $ =>
    seq($.component_header, '{', optional($.component_body), '}'),
  component_header: $ =>
    seq(
      'component',
      $.identifier,
      optional($.component_inheritance_spec),
      optional($.supported_interface_spec), // idl 7.4.10
    ),
  component_inheritance_spec: $ => seq(':', $.scoped_name),
  component_body: $ => repeat1($.component_export),
  component_export: $ =>
    seq(
      choice(
        $.provides_dcl,
        $.uses_dcl,
        $.attr_dcl,
        $.emits_dcl, // idl 7.4.10
        $.publishes_dcl, // idl 7.4.10
        $.consumes_dcl, // idl 7.4.10
        $.port_dcl, // idl 7.4.11
      ),
      ';',
    ),
  provides_dcl: $ => seq('provides', $.interface_type, $.identifier),
  interface_type: $ =>
    choice(
      $.scoped_name,
      'Object', // idl 7.4.10
    ),
  uses_dcl: $ =>
    seq(
      'uses',
      optional('multiple'), // idl 7.4.10
      $.interface_type,
      $.identifier,
    ),
};
