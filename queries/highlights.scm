(comment) @comment

[
  "enum"
  "struct"
  "union"
  "switch"
  "default"
  "const"
  "interface"
  "@annotation"
  "in"
  "out"
  "inout"
  "void"
  "raises"
  (struct_modifier)
  (primitive_type)
] @keyword

[ "(" ")" "[" "[" "<" ">" "{" "}" ] @punctuation.bracket

[ "-" "*" "+" "<" ">" ] @operator

[ "::" ";" ] @delimiter

(enum_dcl
  (enumerator (identifier)@constant)
)
(case_label
  (const_expr)@constant
)

[
  "case"
  "switch"
] @keyword.conditional
