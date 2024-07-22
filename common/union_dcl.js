const { commaSep } = require('./common')

exports.rules = {
  enum_dcl: $ => seq('enum', $.identifier, '{', commaSep($.enumerator), '}'),
  enumerator: $ => seq(repeat($.annotation_appl), $.identifier),

  union_dcl: $ => choice($.union_def, $.union_forward_dcl),
  union_forward_dcl: $ => seq('union', $.identifier),
  union_def: $ =>
    seq(
      'union',
      $.identifier,
      'switch',
      '(',
      $.switch_type_spec,
      ')',
      '{',
      repeat($.case),
      '}',
    ),
  case: $ => seq(repeat1($.case_label), seq($.element_spec, ';')),
  case_label: $ => seq(choice(seq('case', $.const_expr), 'default'), ':'),
  element_spec: $ =>
    seq(
      choice(
        seq(repeat($.annotation_appl), $.type_spec),
        $.constr_type_dcl, // additional
      ),
      $.declarator,
    ),
  switch_type_spec: $ =>
    choice(
      $.integer_type,
      $.char_type,
      $.wide_char_type,
      $.boolean_type,
      $.scoped_name,
      $.octet_type,
    ),
}
