exports.rules = {
  literal: $ =>
    choice(
      $.number_literal,
      $.char_literal,
      $.string_literal,
      $.boolean_literal,
    ),
  escape_sequence: _ =>
    token(
      prec(
        1,
        seq(
          '\\',
          choice(
            /[^xuU]/,
            /\d{2,3}/,
            /x[0-9a-fA-F]{2,}/,
            /u[0-9a-fA-F]{4}/,
            /U[0-9a-fA-F]{8}/,
          ),
        ),
      ),
    ),

  string_literal: $ =>
    seq(
      optional('L'),
      '"',
      repeat(
        choice(
          alias(token.immediate(prec(1, /[^\\"\n]+/)), $.string_content),
          $.escape_sequence,
        ),
      ),
      '"',
    ),
  char_literal: $ =>
    seq(
      optional('L'),
      "'",
      repeat1(
        choice(
          $.escape_sequence,
          alias(token.immediate(/[^\n']/), $.character),
        ),
      ),
      "'",
    ),
  boolean_literal: _ => choice('TRUE', 'FALSE'),
  number_literal: _ => {
    const separator = "'"
    const hex = /[0-9a-fA-F]/
    const decimal = /[0-9]/
    const hexDigits = seq(repeat1(hex), repeat(seq(separator, repeat1(hex))))
    const decimalDigits = seq(
      repeat1(decimal),
      repeat(seq(separator, repeat1(decimal))),
    )
    return token(
      seq(
        optional(/[-\+]/),
        optional(choice(/0[xX]/, /0[bB]/)),
        choice(
          seq(
            choice(
              decimalDigits,
              seq(/0[bB]/, decimalDigits),
              seq(/0[xX]/, hexDigits),
            ),
            optional(seq('.', optional(hexDigits))),
          ),
          seq('.', decimalDigits),
        ),
        optional(seq(/[eEpP]/, optional(seq(optional(/[-\+]/), hexDigits)))),
        /[uUlLwWfFbBdD]*/,
      ),
    )
  },
}
