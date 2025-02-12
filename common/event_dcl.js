const { commaSep, commaSep1 } = require('./common')

exports.rules = {
  supported_interface_spec: $ => seq('supports', commaSep1($.scoped_name)),
  emits_dcl: $ => seq('emits', $.scoped_name, $.identifier),
  publishes_dcl: $ => seq('publishes', $.scoped_name, $.identifier),
  consumes_dcl: $ => seq('consumes', $.scoped_name, $.identifier),
  primary_key_spec: $ => seq('primarykey', $.scoped_name),
  finder_dcl: $ =>
    seq(
      'finder',
      $.identifier,
      '(',
      optional($.init_param_dcls),
      ')',
      optional($.raises_expr),
    ),
  event_dcl: $ => choice($.event_def, $.event_abs_def, $.event_forward_dcl),
  event_forward_dcl: $ => seq(optional('abstract'), 'eventtype', $.identifier),
  event_abs_def: $ =>
    seq(
      'abstract',
      'eventtype',
      $.identifier,
      optional($.value_inheritance_spec),
      '{',
      repeat($.export),
      '}',
    ),
  event_def: $ => seq($.event_header, '{', repeat($.value_element), '}'),
  event_header: $ =>
    seq(
      optional('custom'),
      'eventtype',
      $.identifier,
      optional($.value_inheritance_spec),
    ),
}
