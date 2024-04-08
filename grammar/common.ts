declare global {
  type Rule = String | RegExp | RuleFun
  interface Rules {
    [key: string]: ($: Rules) => Rule
  }
  type RuleFun = ($: Rules) => Rule
  type Gramma = {
    name: String
    extras: ($: Rules) => Rule[]
    externals: ($: Rules) => Rule[]
    inline: ($: Rules) => Rule[]
    rules: Rules
  }
  function grammar(opts: Gramma): Object
  function optional(rule: Rule): RuleFun
  function sym(rule: Rule): RuleFun
  function token(rule: Rule): RuleFun
  function repeat(rule: Rule): RuleFun
  function repeat1(rule: Rule): RuleFun
  function seq(...rule: Rule[]): RuleFun
  function choice(...rule: Rule[]): RuleFun
  function alias(rule: Rule, name: String | Object): RuleFun
  function field(name: String, rule: Rule): RuleFun
  var prec: Prec
}

interface Prec {
  left(number: Number, rule: Rule): RuleFun
  right(number: Number, rule: Rule): RuleFun
}

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
