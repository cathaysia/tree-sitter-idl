((comment) @injection.content
  (#lua-match? @injection.content "//@[a-zA-Z]")
  (#set! injection.language "idl_annotation"))
