(comment) @comment

[
  "enum"
  "struct"
  "union"
  "bitmask"
  "bitset"
  "exception"
  "switch"
  "default"
  "const"
  "interface"
  "@annotation"
  "void"
  "raises"
  "typedef"
  (struct_modifier)
  (preproc_directive)
] @keyword

(preproc_call
  directive: (preproc_directive) @keyword.directive
  argument: (_) @constant
)


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

(annotation_dcl
  (identifier) @type
)

(struct_def
  (identifier) @type
)

(bitmask_dcl
  (identifier) @type
)

(bitset_dcl
  (identifier) @type
)

(enum_dcl
  (identifier) @type
)

(union_forward_dcl
  (identifier) @type
)

(union_def
  (identifier) @type
  (switch_type_spec) @type
)

(except_dcl
  (identifier) @type
)

[
 (type_spec)
 (annotation_member_type)
] @type
