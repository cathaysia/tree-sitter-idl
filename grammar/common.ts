declare function ts_immediate(value: Rule): RuleFun

interface TsToken {
  (rule: Rule): RuleFun
  immediate: typeof ts_immediate
}

declare global {
  type Rule = String | RegExp | RuleFun
  interface Rules {
    [key: string]: ($: Rules) => Rule
  }
  type RuleFun = ($: Rules) => Rule
  type Gramma = {
    name: String
    extras?: ($: Rules) => Rule[]
    inline?: ($: Rules) => Rule[]
    conflicts?: ($: Rules) => Rule[]
    externals?: ($: Rules) => Rule[]
    precedences?: ($: Rules) => Rule[]
    word?: ($: Rules) => Rule[]
    supertypes?: ($: Rules) => Rule[]
    rules: Rules
  }
  function grammar(opts: Gramma): Object
  function optional(rule: Rule): RuleFun
  function sym(rule: Rule): RuleFun
  function repeat(rule: Rule): RuleFun
  function repeat1(rule: Rule): RuleFun
  function seq(...rule: Rule[]): RuleFun
  function choice(...rule: Rule[]): RuleFun
  function alias(rule: Rule, name: String | Object): RuleFun
  function field(name: String, rule: Rule): RuleFun
  var prec: Prec
  var token: TsToken
}

interface Prec {
  (number: Number, rule: Rule): RuleFun
  left(number: Number, rule: Rule): RuleFun
  right(number: Number, rule: Rule): RuleFun
  dynamic(number: Number, rule: Rule): RuleFun
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

export function anySep1(rule: Rule, sep: String) {
  return seq(rule, repeat(seq(sep, rule)))
}

export function anySep(rule: Rule, sep: String) {
  return optional(anySep1(rule, sep))
}
