const PREC = {
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  INCLUSIVE_OR: 3,
  EXCLUSIVE_OR: 4,
  BITWISE_AND: 5,
  EQUAL: 6,
  RELATIONAL: 7,
  SHIFT: 9,
  ADD: 10,
  MULTIPLY: 11,
  UNARY: 14,
};

exports.rules = {
  positive_int_const: $ => $.const_expr,
  const_expr: $ => $.or_expr,
  or_expr: $ =>
    prec.left(
      PREC.INCLUSIVE_OR,
      choice($.xor_expr, seq($.or_expr, '|', $.xor_expr)),
    ),
  xor_expr: $ =>
    prec.left(
      PREC.EXCLUSIVE_OR,
      choice($.and_expr, seq($.xor_expr, '^', $.and_expr)),
    ),
  and_expr: $ =>
    prec.left(
      PREC.BITWISE_AND,
      choice($.shift_expr, seq($.and_expr, '&', $.shift_expr)),
    ),
  shift_expr: $ =>
    prec.left(
      PREC.SHIFT,
      choice(
        $.add_expr,
        seq($.shift_expr, '>>', $.add_expr),
        seq($.shift_expr, '<<', $.add_expr),
      ),
    ),
  add_expr: $ =>
    prec.left(
      PREC.ADD,
      choice(
        $.mult_expr,
        seq($.add_expr, '+', $.mult_expr),
        seq($.add_expr, '-', $.mult_expr),
      ),
    ),
  mult_expr: $ =>
    prec.left(
      PREC.MULTIPLY,
      choice(
        $.unary_expr,
        seq($.mult_expr, '*', $.unary_expr),
        seq($.mult_expr, '/', $.unary_expr),
        seq($.mult_expr, '%', $.unary_expr),
      ),
    ),
  unary_expr: $ =>
    choice(seq($.unary_operator, $.primary_expr), $.primary_expr),
  primary_expr: $ =>
    choice($.scoped_name, $.literal, seq('(', $.const_expr, ')')),

  unary_operator: _ => prec.left(PREC.UNARY, choice('-', '+', '~')),
};
