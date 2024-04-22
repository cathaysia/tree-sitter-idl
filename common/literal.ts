const rules = {
  literal: $ =>
    choice(
      $.number_literal,
      $.char_literal,
      $.string_literal,
      $.boolean_literal,
    ),
  string_literal: $ => seq(optional('L'), '"', /\w+/, '"'),
  char_literal: $ => seq(optional('L'), "'", field('value', /\w/), "'"),
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

export default {
  rules: rules,
}
