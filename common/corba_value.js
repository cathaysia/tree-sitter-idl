const { commaSep, commaSep1 } = require('./common')

exports.rules = {
  value_box_def: $ => seq('valuetype', $.identifier, $.type_spec),
  value_abs_def: $ =>
    seq(
      'abstract',
      'valuetype',
      $.identifier,
      optional($.value_inheritance_spec),
      '{',
      repeat($.export),
      '}',
    ),
  value_base_type: _ => 'ValueBase',
}
