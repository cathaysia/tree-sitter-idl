const { commaSep, commaSep1 } = require('./common')

exports.rules = {
  annotation_dcl: $ =>
    seq(
      token(prec(2, '@annotation')),
      $.identifier,
      '{',
      repeat($.annotation_body),
      '}',
    ),
  annotation_body: $ =>
    choice(
      $.annotation_member,
      seq(choice($.enum_dcl, $.const_dcl, $.typedef_dcl), ';'),
    ),
  annotation_member: $ =>
    seq(
      $.annotation_member_type,
      $.simple_declarator,
      optional(seq('default', $.const_expr)),
      ';',
    ),
  annotation_member_type: $ =>
    choice($.const_type, $.any_const_type, $.scoped_name),
  any_const_type: _ => 'any',
  annotation_appl: $ =>
    seq(
      token(prec(1, '@')),
      $.scoped_name,
      optional(seq('(', $.annotation_appl_params, ')')),
    ),
  annotation_appl_params: $ =>
    choice($.const_expr, commaSep1($.annotation_appl_param)),
  annotation_appl_param: $ => seq($.identifier, '=', $.const_expr),
}
