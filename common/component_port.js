const { commaSep, commaSep1 } = require('./common')

exports.rules = {
  porttype_dcl: $ => choice($.porttype_def, $.porttype_forward_dcl),
  porttype_forward_dcl: $ => seq('porttype', $.identifier),
  porttype_def: $ =>
    seq('porttype', $.identifier, '{', optional($.port_body), '}'),
  port_body: $ => seq($.port_ref, repeat($.port_export)),
  port_ref: $ => seq(choice($.provides_dcl, $.uses_dcl, $.port_dcl), ';'),
  port_export: $ => choice($.port_ref, seq($.attr_dcl, ';')),
  port_dcl: $ => seq(choice('port', 'mirrorport'), $.scoped_name, $.identifier),
  connector_dcl: $ =>
    seq($.connector_header, '{', repeat1($.connector_export), '}'),
  connector_header: $ =>
    seq('connector', $.identifier, optional($.connector_inherit_spec)),
  connector_inherit_spec: $ => seq(':', $.scoped_name),
  connector_export: $ => choice($.port_ref, seq($.attr_dcl, ';')),
}
