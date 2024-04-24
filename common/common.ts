/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
export function commaSep1(rule: Rule) {
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
export function commaSep(rule: Rule) {
  return optional(commaSep1(rule))
}

export function anySep1(rule: Rule, sep: string) {
  return seq(rule, repeat(seq(sep, rule)))
}

export function anySep(rule: Rule, sep: string) {
  return optional(anySep1(rule, sep))
}
