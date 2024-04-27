((comment) @injection.content
  (#lua-match? @injection.content "/[*\/][!*\/]<?[^a-zA-Z]")
  (#set! injection.language "doxygen"))

((comment) @injection.content
  (#lua-match? @injection.content "//@[a-zA-Z]")
  (#set! injection.language "idl_annotation"))

((comment) @injection.content
  (#not-lua-match? @injection.content "/[*\/][!*\/]<?[^a-zA-Z]")
  (#not-lua-match? @injection.content "//@[a-zA-Z]")
  (#set! injection.language "comment"))
