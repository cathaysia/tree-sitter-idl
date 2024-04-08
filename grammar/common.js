/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
exports.commaSep1 = function (rule) {
  return seq(rule, repeat(seq(',', rule)))
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
exports.commaSep = function (rule) {
  return optional(exports.commaSep1(rule))
}
