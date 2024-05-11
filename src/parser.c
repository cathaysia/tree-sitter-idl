#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 772
#define LARGE_STATE_COUNT 35
#define SYMBOL_COUNT 346
#define ALIAS_COUNT 0
#define TOKEN_COUNT 133
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
    anon_sym_short = 1,
    anon_sym_int16 = 2,
    anon_sym_long = 3,
    anon_sym_int32 = 4,
    anon_sym_longlong = 5,
    anon_sym_int64 = 6,
    sym_unsigned_tiny_int = 7,
    sym_boolean_type = 8,
    anon_sym_fixed = 9,
    sym_octet_type = 10,
    sym_signed_tiny_int = 11,
    anon_sym_unsignedshort = 12,
    anon_sym_uint16 = 13,
    anon_sym_unsignedlong = 14,
    anon_sym_uint32 = 15,
    anon_sym_unsignedlonglong = 16,
    anon_sym_uint64 = 17,
    anon_sym_float = 18,
    anon_sym_double = 19,
    anon_sym_longdouble = 20,
    anon_sym_char = 21,
    anon_sym_wchar = 22,
    anon_sym_COLON_COLON = 23,
    anon_sym_string = 24,
    anon_sym_wstring = 25,
    anon_sym_LT = 26,
    anon_sym_GT = 27,
    anon_sym_any = 28,
    anon_sym_COMMA = 29,
    anon_sym_sequence = 30,
    anon_sym_map = 31,
    anon_sym_PIPE = 32,
    anon_sym_CARET = 33,
    anon_sym_DOLLAR = 34,
    anon_sym_GT_GT = 35,
    anon_sym_LT_LT = 36,
    anon_sym_PLUS = 37,
    anon_sym_DASH = 38,
    anon_sym_STAR = 39,
    anon_sym_SLASH = 40,
    anon_sym_PERCENT = 41,
    anon_sym_LPAREN = 42,
    anon_sym_RPAREN = 43,
    anon_sym_TILDE = 44,
    anon_sym_L = 45,
    anon_sym_DQUOTE = 46,
    aux_sym_string_literal_token1 = 47,
    anon_sym_SQUOTE = 48,
    aux_sym_char_literal_token1 = 49,
    anon_sym_TRUE = 50,
    anon_sym_FALSE = 51,
    sym_number_literal = 52,
    aux_sym_preproc_call_token1 = 53,
    sym_preproc_directive = 54,
    sym_preproc_arg = 55,
    anon_sym_exception = 56,
    anon_sym_LBRACE = 57,
    anon_sym_RBRACE = 58,
    anon_sym_local = 59,
    anon_sym_abstract = 60,
    anon_sym_interface = 61,
    anon_sym_COLON = 62,
    anon_sym_SEMI = 63,
    anon_sym_void = 64,
    anon_sym_in = 65,
    anon_sym_out = 66,
    anon_sym_inout = 67,
    anon_sym_raises = 68,
    anon_sym_readonly = 69,
    anon_sym_attribute = 70,
    anon_sym_getraises = 71,
    anon_sym_setraises = 72,
    anon_sym_bitset = 73,
    anon_sym_bitfield = 74,
    anon_sym_bitmask = 75,
    anon_sym_ATannotation = 76,
    anon_sym_default = 77,
    anon_sym_AT = 78,
    anon_sym_EQ = 79,
    anon_sym_module = 80,
    anon_sym_typename = 81,
    anon_sym_valuetype = 82,
    anon_sym_eventtype = 83,
    anon_sym_struct = 84,
    anon_sym_union = 85,
    anon_sym_enum = 86,
    anon_sym_const = 87,
    anon_sym_alias = 88,
    anon_sym_custom = 89,
    anon_sym_truncatable = 90,
    anon_sym_supports = 91,
    anon_sym_public = 92,
    anon_sym_private = 93,
    anon_sym_factory = 94,
    anon_sym_typedef = 95,
    anon_sym_LBRACK = 96,
    anon_sym_RBRACK = 97,
    anon_sym_ATdefault_literal = 98,
    anon_sym_ATignore_literal_names = 99,
    anon_sym_switch = 100,
    anon_sym_case = 101,
    anon_sym_typeid = 102,
    anon_sym_typeprefix = 103,
    anon_sym_import = 104,
    anon_sym_Object = 105,
    anon_sym_oneway = 106,
    anon_sym_context = 107,
    sym_value_base_type = 108,
    anon_sym_component = 109,
    anon_sym_provides = 110,
    anon_sym_uses = 111,
    anon_sym_multiple = 112,
    anon_sym_home = 113,
    anon_sym_manages = 114,
    anon_sym_emits = 115,
    anon_sym_publishes = 116,
    anon_sym_consumes = 117,
    anon_sym_primarykey = 118,
    anon_sym_finder = 119,
    anon_sym_porttype = 120,
    anon_sym_port = 121,
    anon_sym_mirrorport = 122,
    anon_sym_connector = 123,
    anon_sym_native = 124,
    anon_sym_POUNDdefine = 125,
    aux_sym_predefine_token1 = 126,
    sym_identifier = 127,
    anon_sym_SLASH_SLASH = 128,
    aux_sym_comment_token1 = 129,
    aux_sym_comment_token2 = 130,
    anon_sym_SLASH_STAR = 131,
    aux_sym_comment_token3 = 132,
    sym_specification = 133,
    sym_signed_short_int = 134,
    sym_signed_long_int = 135,
    sym_signed_longlong_int = 136,
    sym_unsigned_int = 137,
    sym_fixed_pt_const_type = 138,
    sym_integer_type = 139,
    sym_signed_int = 140,
    sym_unsigned_short_int = 141,
    sym_unsigned_long_int = 142,
    sym_unsigned_longlong_int = 143,
    sym_floating_pt_type = 144,
    sym_char_type = 145,
    sym_scoped_name = 146,
    sym_string_type = 147,
    sym_type_spec = 148,
    sym_simple_type_spec = 149,
    sym_base_type_spec = 150,
    sym_any_type = 151,
    sym_fixed_pt_type = 152,
    sym_template_type_spec = 153,
    sym_sequence_type = 154,
    sym_map_type = 155,
    sym_positive_int_const = 156,
    sym_const_expr = 157,
    sym_or_expr = 158,
    sym_xor_expr = 159,
    sym_and_expr = 160,
    sym_shift_expr = 161,
    sym_add_expr = 162,
    sym_mult_expr = 163,
    sym_unary_expr = 164,
    sym_unary_operator = 165,
    sym_literal = 166,
    sym_string_literal = 167,
    sym_char_literal = 168,
    sym_boolean_literal = 169,
    sym_preproc_call = 170,
    sym_except_dcl = 171,
    sym_interface_dcl = 172,
    sym_interface_kind = 173,
    sym_interface_forward_dcl = 174,
    sym_interface_def = 175,
    sym_interface_header = 176,
    sym_interface_inheritance_spec = 177,
    sym_interface_name = 178,
    sym_interface_body = 179,
    sym_export = 180,
    sym_op_dcl = 181,
    sym_op_type_spec = 182,
    sym_parameter_dcls = 183,
    sym_param_dcl = 184,
    sym_param_attribute = 185,
    sym_raises_expr = 186,
    sym_attr_dcl = 187,
    sym_readonly_attr_spec = 188,
    sym_readonly_attr_declarator = 189,
    sym_attr_spec = 190,
    sym_attr_declarator = 191,
    sym_attr_raises_expr = 192,
    sym_get_excep_expr = 193,
    sym_set_excep_expr = 194,
    sym_exception_list = 195,
    sym_bitset_dcl = 196,
    sym_bitfield = 197,
    sym_bitfield_spec = 198,
    sym_destination_type = 199,
    sym_bitmask_dcl = 200,
    sym_bit_value = 201,
    sym_annotation_dcl = 202,
    sym_annotation_body = 203,
    sym_annotation_member = 204,
    sym_annotation_member_type = 205,
    sym_any_const_type = 206,
    sym_annotation_appl = 207,
    sym_annotation_appl_params = 208,
    sym_annotation_appl_param = 209,
    sym_template_module_dcl = 210,
    sym_formal_parameters = 211,
    sym_formal_parameter = 212,
    sym_formal_parameter_type = 213,
    sym_tpl_definition = 214,
    sym_template_module_inst = 215,
    sym_actual_parameters = 216,
    sym_actual_parameter = 217,
    sym_template_module_ref = 218,
    sym_formal_parameter_names = 219,
    sym_value_dcl = 220,
    sym_value_def = 221,
    sym_value_kind = 222,
    sym_value_header = 223,
    sym_value_inheritance_spec = 224,
    sym_value_name = 225,
    sym_value_element = 226,
    sym_state_member = 227,
    sym_init_dcl = 228,
    sym_init_param_dcls = 229,
    sym_init_param_dcl = 230,
    sym_value_forward_dcl = 231,
    sym_typedef_dcl = 232,
    sym_type_declarator = 233,
    sym_any_declarators = 234,
    sym_any_declarator = 235,
    sym_simple_declarator = 236,
    sym_declarator = 237,
    sym_declarators = 238,
    sym_array_declarator = 239,
    sym_fixed_array_size = 240,
    sym_enum_dcl = 241,
    sym_enumerator = 242,
    sym_enum_modifier = 243,
    sym_enum_anno = 244,
    sym_union_forward_dcl = 245,
    sym_union_def = 246,
    sym_case = 247,
    sym_case_label = 248,
    sym_element_spec = 249,
    sym_switch_type_spec = 250,
    sym_type_id_dcl = 251,
    sym_type_prefix_dcl = 252,
    sym_import_dcl = 253,
    sym_imported_scope = 254,
    sym_object_type = 255,
    sym_op_oneway_dcl = 256,
    sym_in_parameter_dcls = 257,
    sym_in_param_dcl = 258,
    sym_op_with_context = 259,
    sym_context_expr = 260,
    sym_value_abs_def = 261,
    sym_component_dcl = 262,
    sym_component_forward_dcl = 263,
    sym_component_def = 264,
    sym_component_header = 265,
    sym_component_inheritance_spec = 266,
    sym_component_body = 267,
    sym_component_export = 268,
    sym_provides_dcl = 269,
    sym_interface_type = 270,
    sym_uses_dcl = 271,
    sym_home_dcl = 272,
    sym_home_header = 273,
    sym_home_inheritance_spec = 274,
    sym_home_body = 275,
    sym_home_export = 276,
    sym_factory_dcl = 277,
    sym_factory_param_dcls = 278,
    sym_factory_param_dcl = 279,
    sym_supported_interface_spec = 280,
    sym_emits_dcl = 281,
    sym_publishes_dcl = 282,
    sym_consumes_dcl = 283,
    sym_primary_key_spec = 284,
    sym_event_dcl = 285,
    sym_event_forward_dcl = 286,
    sym_event_abs_def = 287,
    sym_event_def = 288,
    sym_event_header = 289,
    sym_porttype_dcl = 290,
    sym_porttype_forward_dcl = 291,
    sym_porttype_def = 292,
    sym_port_body = 293,
    sym_port_ref = 294,
    sym_port_export = 295,
    sym_port_dcl = 296,
    sym_connector_dcl = 297,
    sym_connector_header = 298,
    sym_connector_inherit_spec = 299,
    sym_connector_export = 300,
    sym__definition = 301,
    sym_native_dcl = 302,
    sym_module_dcl = 303,
    sym_struct_forward_dcl = 304,
    sym_struct_def = 305,
    sym_member = 306,
    sym_default = 307,
    sym_predefine = 308,
    sym_const_dcl = 309,
    sym_const_type = 310,
    sym_comment = 311,
    aux_sym_specification_repeat1 = 312,
    aux_sym_specification_repeat2 = 313,
    aux_sym_except_dcl_repeat1 = 314,
    aux_sym_interface_def_repeat1 = 315,
    aux_sym_interface_inheritance_spec_repeat1 = 316,
    aux_sym_interface_body_repeat1 = 317,
    aux_sym_parameter_dcls_repeat1 = 318,
    aux_sym_raises_expr_repeat1 = 319,
    aux_sym_readonly_attr_declarator_repeat1 = 320,
    aux_sym_bitset_dcl_repeat1 = 321,
    aux_sym_bitfield_repeat1 = 322,
    aux_sym_bitmask_dcl_repeat1 = 323,
    aux_sym_annotation_dcl_repeat1 = 324,
    aux_sym_annotation_appl_params_repeat1 = 325,
    aux_sym_template_module_dcl_repeat1 = 326,
    aux_sym_formal_parameters_repeat1 = 327,
    aux_sym_actual_parameters_repeat1 = 328,
    aux_sym_formal_parameter_names_repeat1 = 329,
    aux_sym_value_def_repeat1 = 330,
    aux_sym_value_inheritance_spec_repeat1 = 331,
    aux_sym_init_param_dcls_repeat1 = 332,
    aux_sym_any_declarators_repeat1 = 333,
    aux_sym_declarators_repeat1 = 334,
    aux_sym_array_declarator_repeat1 = 335,
    aux_sym_enum_dcl_repeat1 = 336,
    aux_sym_enumerator_repeat1 = 337,
    aux_sym_union_def_repeat1 = 338,
    aux_sym_in_parameter_dcls_repeat1 = 339,
    aux_sym_context_expr_repeat1 = 340,
    aux_sym_component_body_repeat1 = 341,
    aux_sym_home_body_repeat1 = 342,
    aux_sym_factory_param_dcls_repeat1 = 343,
    aux_sym_port_body_repeat1 = 344,
    aux_sym_connector_dcl_repeat1 = 345,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [anon_sym_short] = "short",
    [anon_sym_int16] = "int16",
    [anon_sym_long] = "long",
    [anon_sym_int32] = "int32",
    [anon_sym_longlong] = "long long",
    [anon_sym_int64] = "int64",
    [sym_unsigned_tiny_int] = "unsigned_tiny_int",
    [sym_boolean_type] = "boolean_type",
    [anon_sym_fixed] = "fixed",
    [sym_octet_type] = "octet_type",
    [sym_signed_tiny_int] = "signed_tiny_int",
    [anon_sym_unsignedshort] = "unsigned short",
    [anon_sym_uint16] = "uint16",
    [anon_sym_unsignedlong] = "unsigned long",
    [anon_sym_uint32] = "uint32",
    [anon_sym_unsignedlonglong] = "unsigned long long",
    [anon_sym_uint64] = "uint64",
    [anon_sym_float] = "float",
    [anon_sym_double] = "double",
    [anon_sym_longdouble] = "long double",
    [anon_sym_char] = "char",
    [anon_sym_wchar] = "wchar",
    [anon_sym_COLON_COLON] = "::",
    [anon_sym_string] = "string",
    [anon_sym_wstring] = "wstring",
    [anon_sym_LT] = "<",
    [anon_sym_GT] = ">",
    [anon_sym_any] = "any",
    [anon_sym_COMMA] = ",",
    [anon_sym_sequence] = "sequence",
    [anon_sym_map] = "map",
    [anon_sym_PIPE] = "|",
    [anon_sym_CARET] = "^",
    [anon_sym_DOLLAR] = "$",
    [anon_sym_GT_GT] = ">>",
    [anon_sym_LT_LT] = "<<",
    [anon_sym_PLUS] = "+",
    [anon_sym_DASH] = "-",
    [anon_sym_STAR] = "*",
    [anon_sym_SLASH] = "/",
    [anon_sym_PERCENT] = "%",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_TILDE] = "~",
    [anon_sym_L] = "L",
    [anon_sym_DQUOTE] = "\"",
    [aux_sym_string_literal_token1] = "string_literal_token1",
    [anon_sym_SQUOTE] = "'",
    [aux_sym_char_literal_token1] = "char_literal_token1",
    [anon_sym_TRUE] = "TRUE",
    [anon_sym_FALSE] = "FALSE",
    [sym_number_literal] = "number_literal",
    [aux_sym_preproc_call_token1] = "preproc_call_token1",
    [sym_preproc_directive] = "preproc_directive",
    [sym_preproc_arg] = "preproc_arg",
    [anon_sym_exception] = "exception",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_local] = "local",
    [anon_sym_abstract] = "abstract",
    [anon_sym_interface] = "interface",
    [anon_sym_COLON] = ":",
    [anon_sym_SEMI] = ";",
    [anon_sym_void] = "void",
    [anon_sym_in] = "in",
    [anon_sym_out] = "out",
    [anon_sym_inout] = "inout",
    [anon_sym_raises] = "raises",
    [anon_sym_readonly] = "readonly",
    [anon_sym_attribute] = "attribute",
    [anon_sym_getraises] = "getraises",
    [anon_sym_setraises] = "setraises",
    [anon_sym_bitset] = "bitset",
    [anon_sym_bitfield] = "bitfield",
    [anon_sym_bitmask] = "bitmask",
    [anon_sym_ATannotation] = "@annotation",
    [anon_sym_default] = "default",
    [anon_sym_AT] = "@",
    [anon_sym_EQ] = "=",
    [anon_sym_module] = "module",
    [anon_sym_typename] = "typename",
    [anon_sym_valuetype] = "valuetype",
    [anon_sym_eventtype] = "eventtype",
    [anon_sym_struct] = "struct",
    [anon_sym_union] = "union",
    [anon_sym_enum] = "enum",
    [anon_sym_const] = "const",
    [anon_sym_alias] = "alias",
    [anon_sym_custom] = "custom",
    [anon_sym_truncatable] = "truncatable",
    [anon_sym_supports] = "supports",
    [anon_sym_public] = "public",
    [anon_sym_private] = "private",
    [anon_sym_factory] = "factory",
    [anon_sym_typedef] = "typedef",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_ATdefault_literal] = "@default_literal",
    [anon_sym_ATignore_literal_names] = "@ignore_literal_names",
    [anon_sym_switch] = "switch",
    [anon_sym_case] = "case",
    [anon_sym_typeid] = "typeid",
    [anon_sym_typeprefix] = "typeprefix",
    [anon_sym_import] = "import",
    [anon_sym_Object] = "Object",
    [anon_sym_oneway] = "oneway",
    [anon_sym_context] = "context",
    [sym_value_base_type] = "value_base_type",
    [anon_sym_component] = "component",
    [anon_sym_provides] = "provides",
    [anon_sym_uses] = "uses",
    [anon_sym_multiple] = "multiple",
    [anon_sym_home] = "home",
    [anon_sym_manages] = "manages",
    [anon_sym_emits] = "emits",
    [anon_sym_publishes] = "publishes",
    [anon_sym_consumes] = "consumes",
    [anon_sym_primarykey] = "primarykey",
    [anon_sym_finder] = "finder",
    [anon_sym_porttype] = "porttype",
    [anon_sym_port] = "port",
    [anon_sym_mirrorport] = "mirrorport",
    [anon_sym_connector] = "connector",
    [anon_sym_native] = "native",
    [anon_sym_POUNDdefine] = "#define",
    [aux_sym_predefine_token1] = "predefine_token1",
    [sym_identifier] = "identifier",
    [anon_sym_SLASH_SLASH] = "//",
    [aux_sym_comment_token1] = "comment_token1",
    [aux_sym_comment_token2] = "comment_token2",
    [anon_sym_SLASH_STAR] = "/*",
    [aux_sym_comment_token3] = "comment_token3",
    [sym_specification] = "specification",
    [sym_signed_short_int] = "signed_short_int",
    [sym_signed_long_int] = "signed_long_int",
    [sym_signed_longlong_int] = "signed_longlong_int",
    [sym_unsigned_int] = "unsigned_int",
    [sym_fixed_pt_const_type] = "fixed_pt_const_type",
    [sym_integer_type] = "integer_type",
    [sym_signed_int] = "signed_int",
    [sym_unsigned_short_int] = "unsigned_short_int",
    [sym_unsigned_long_int] = "unsigned_long_int",
    [sym_unsigned_longlong_int] = "unsigned_longlong_int",
    [sym_floating_pt_type] = "floating_pt_type",
    [sym_char_type] = "char_type",
    [sym_scoped_name] = "scoped_name",
    [sym_string_type] = "string_type",
    [sym_type_spec] = "type_spec",
    [sym_simple_type_spec] = "simple_type_spec",
    [sym_base_type_spec] = "base_type_spec",
    [sym_any_type] = "any_type",
    [sym_fixed_pt_type] = "fixed_pt_type",
    [sym_template_type_spec] = "template_type_spec",
    [sym_sequence_type] = "sequence_type",
    [sym_map_type] = "map_type",
    [sym_positive_int_const] = "positive_int_const",
    [sym_const_expr] = "const_expr",
    [sym_or_expr] = "or_expr",
    [sym_xor_expr] = "xor_expr",
    [sym_and_expr] = "and_expr",
    [sym_shift_expr] = "shift_expr",
    [sym_add_expr] = "add_expr",
    [sym_mult_expr] = "mult_expr",
    [sym_unary_expr] = "unary_expr",
    [sym_unary_operator] = "unary_operator",
    [sym_literal] = "literal",
    [sym_string_literal] = "string_literal",
    [sym_char_literal] = "char_literal",
    [sym_boolean_literal] = "boolean_literal",
    [sym_preproc_call] = "preproc_call",
    [sym_except_dcl] = "except_dcl",
    [sym_interface_dcl] = "interface_dcl",
    [sym_interface_kind] = "interface_kind",
    [sym_interface_forward_dcl] = "interface_forward_dcl",
    [sym_interface_def] = "interface_def",
    [sym_interface_header] = "interface_header",
    [sym_interface_inheritance_spec] = "interface_inheritance_spec",
    [sym_interface_name] = "interface_name",
    [sym_interface_body] = "interface_body",
    [sym_export] = "export",
    [sym_op_dcl] = "op_dcl",
    [sym_op_type_spec] = "op_type_spec",
    [sym_parameter_dcls] = "parameter_dcls",
    [sym_param_dcl] = "param_dcl",
    [sym_param_attribute] = "param_attribute",
    [sym_raises_expr] = "raises_expr",
    [sym_attr_dcl] = "attr_dcl",
    [sym_readonly_attr_spec] = "readonly_attr_spec",
    [sym_readonly_attr_declarator] = "readonly_attr_declarator",
    [sym_attr_spec] = "attr_spec",
    [sym_attr_declarator] = "attr_declarator",
    [sym_attr_raises_expr] = "attr_raises_expr",
    [sym_get_excep_expr] = "get_excep_expr",
    [sym_set_excep_expr] = "set_excep_expr",
    [sym_exception_list] = "exception_list",
    [sym_bitset_dcl] = "bitset_dcl",
    [sym_bitfield] = "bitfield",
    [sym_bitfield_spec] = "bitfield_spec",
    [sym_destination_type] = "destination_type",
    [sym_bitmask_dcl] = "bitmask_dcl",
    [sym_bit_value] = "bit_value",
    [sym_annotation_dcl] = "annotation_dcl",
    [sym_annotation_body] = "annotation_body",
    [sym_annotation_member] = "annotation_member",
    [sym_annotation_member_type] = "annotation_member_type",
    [sym_any_const_type] = "any_const_type",
    [sym_annotation_appl] = "annotation_appl",
    [sym_annotation_appl_params] = "annotation_appl_params",
    [sym_annotation_appl_param] = "annotation_appl_param",
    [sym_template_module_dcl] = "template_module_dcl",
    [sym_formal_parameters] = "formal_parameters",
    [sym_formal_parameter] = "formal_parameter",
    [sym_formal_parameter_type] = "formal_parameter_type",
    [sym_tpl_definition] = "tpl_definition",
    [sym_template_module_inst] = "template_module_inst",
    [sym_actual_parameters] = "actual_parameters",
    [sym_actual_parameter] = "actual_parameter",
    [sym_template_module_ref] = "template_module_ref",
    [sym_formal_parameter_names] = "formal_parameter_names",
    [sym_value_dcl] = "value_dcl",
    [sym_value_def] = "value_def",
    [sym_value_kind] = "value_kind",
    [sym_value_header] = "value_header",
    [sym_value_inheritance_spec] = "value_inheritance_spec",
    [sym_value_name] = "value_name",
    [sym_value_element] = "value_element",
    [sym_state_member] = "state_member",
    [sym_init_dcl] = "init_dcl",
    [sym_init_param_dcls] = "init_param_dcls",
    [sym_init_param_dcl] = "init_param_dcl",
    [sym_value_forward_dcl] = "value_forward_dcl",
    [sym_typedef_dcl] = "typedef_dcl",
    [sym_type_declarator] = "type_declarator",
    [sym_any_declarators] = "any_declarators",
    [sym_any_declarator] = "any_declarator",
    [sym_simple_declarator] = "simple_declarator",
    [sym_declarator] = "declarator",
    [sym_declarators] = "declarators",
    [sym_array_declarator] = "array_declarator",
    [sym_fixed_array_size] = "fixed_array_size",
    [sym_enum_dcl] = "enum_dcl",
    [sym_enumerator] = "enumerator",
    [sym_enum_modifier] = "enum_modifier",
    [sym_enum_anno] = "enum_anno",
    [sym_union_forward_dcl] = "union_forward_dcl",
    [sym_union_def] = "union_def",
    [sym_case] = "case",
    [sym_case_label] = "case_label",
    [sym_element_spec] = "element_spec",
    [sym_switch_type_spec] = "switch_type_spec",
    [sym_type_id_dcl] = "type_id_dcl",
    [sym_type_prefix_dcl] = "type_prefix_dcl",
    [sym_import_dcl] = "import_dcl",
    [sym_imported_scope] = "imported_scope",
    [sym_object_type] = "object_type",
    [sym_op_oneway_dcl] = "op_oneway_dcl",
    [sym_in_parameter_dcls] = "in_parameter_dcls",
    [sym_in_param_dcl] = "in_param_dcl",
    [sym_op_with_context] = "op_with_context",
    [sym_context_expr] = "context_expr",
    [sym_value_abs_def] = "value_abs_def",
    [sym_component_dcl] = "component_dcl",
    [sym_component_forward_dcl] = "component_forward_dcl",
    [sym_component_def] = "component_def",
    [sym_component_header] = "component_header",
    [sym_component_inheritance_spec] = "component_inheritance_spec",
    [sym_component_body] = "component_body",
    [sym_component_export] = "component_export",
    [sym_provides_dcl] = "provides_dcl",
    [sym_interface_type] = "interface_type",
    [sym_uses_dcl] = "uses_dcl",
    [sym_home_dcl] = "home_dcl",
    [sym_home_header] = "home_header",
    [sym_home_inheritance_spec] = "home_inheritance_spec",
    [sym_home_body] = "home_body",
    [sym_home_export] = "home_export",
    [sym_factory_dcl] = "factory_dcl",
    [sym_factory_param_dcls] = "factory_param_dcls",
    [sym_factory_param_dcl] = "factory_param_dcl",
    [sym_supported_interface_spec] = "supported_interface_spec",
    [sym_emits_dcl] = "emits_dcl",
    [sym_publishes_dcl] = "publishes_dcl",
    [sym_consumes_dcl] = "consumes_dcl",
    [sym_primary_key_spec] = "primary_key_spec",
    [sym_event_dcl] = "event_dcl",
    [sym_event_forward_dcl] = "event_forward_dcl",
    [sym_event_abs_def] = "event_abs_def",
    [sym_event_def] = "event_def",
    [sym_event_header] = "event_header",
    [sym_porttype_dcl] = "porttype_dcl",
    [sym_porttype_forward_dcl] = "porttype_forward_dcl",
    [sym_porttype_def] = "porttype_def",
    [sym_port_body] = "port_body",
    [sym_port_ref] = "port_ref",
    [sym_port_export] = "port_export",
    [sym_port_dcl] = "port_dcl",
    [sym_connector_dcl] = "connector_dcl",
    [sym_connector_header] = "connector_header",
    [sym_connector_inherit_spec] = "connector_inherit_spec",
    [sym_connector_export] = "connector_export",
    [sym__definition] = "_definition",
    [sym_native_dcl] = "native_dcl",
    [sym_module_dcl] = "module_dcl",
    [sym_struct_forward_dcl] = "struct_forward_dcl",
    [sym_struct_def] = "struct_def",
    [sym_member] = "member",
    [sym_default] = "default",
    [sym_predefine] = "predefine",
    [sym_const_dcl] = "const_dcl",
    [sym_const_type] = "const_type",
    [sym_comment] = "comment",
    [aux_sym_specification_repeat1] = "specification_repeat1",
    [aux_sym_specification_repeat2] = "specification_repeat2",
    [aux_sym_except_dcl_repeat1] = "except_dcl_repeat1",
    [aux_sym_interface_def_repeat1] = "interface_def_repeat1",
    [aux_sym_interface_inheritance_spec_repeat1] = "interface_inheritance_spec_repeat1",
    [aux_sym_interface_body_repeat1] = "interface_body_repeat1",
    [aux_sym_parameter_dcls_repeat1] = "parameter_dcls_repeat1",
    [aux_sym_raises_expr_repeat1] = "raises_expr_repeat1",
    [aux_sym_readonly_attr_declarator_repeat1] = "readonly_attr_declarator_repeat1",
    [aux_sym_bitset_dcl_repeat1] = "bitset_dcl_repeat1",
    [aux_sym_bitfield_repeat1] = "bitfield_repeat1",
    [aux_sym_bitmask_dcl_repeat1] = "bitmask_dcl_repeat1",
    [aux_sym_annotation_dcl_repeat1] = "annotation_dcl_repeat1",
    [aux_sym_annotation_appl_params_repeat1] = "annotation_appl_params_repeat1",
    [aux_sym_template_module_dcl_repeat1] = "template_module_dcl_repeat1",
    [aux_sym_formal_parameters_repeat1] = "formal_parameters_repeat1",
    [aux_sym_actual_parameters_repeat1] = "actual_parameters_repeat1",
    [aux_sym_formal_parameter_names_repeat1] = "formal_parameter_names_repeat1",
    [aux_sym_value_def_repeat1] = "value_def_repeat1",
    [aux_sym_value_inheritance_spec_repeat1] = "value_inheritance_spec_repeat1",
    [aux_sym_init_param_dcls_repeat1] = "init_param_dcls_repeat1",
    [aux_sym_any_declarators_repeat1] = "any_declarators_repeat1",
    [aux_sym_declarators_repeat1] = "declarators_repeat1",
    [aux_sym_array_declarator_repeat1] = "array_declarator_repeat1",
    [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
    [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
    [aux_sym_union_def_repeat1] = "union_def_repeat1",
    [aux_sym_in_parameter_dcls_repeat1] = "in_parameter_dcls_repeat1",
    [aux_sym_context_expr_repeat1] = "context_expr_repeat1",
    [aux_sym_component_body_repeat1] = "component_body_repeat1",
    [aux_sym_home_body_repeat1] = "home_body_repeat1",
    [aux_sym_factory_param_dcls_repeat1] = "factory_param_dcls_repeat1",
    [aux_sym_port_body_repeat1] = "port_body_repeat1",
    [aux_sym_connector_dcl_repeat1] = "connector_dcl_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
    [ts_builtin_sym_end] = ts_builtin_sym_end,
    [anon_sym_short] = anon_sym_short,
    [anon_sym_int16] = anon_sym_int16,
    [anon_sym_long] = anon_sym_long,
    [anon_sym_int32] = anon_sym_int32,
    [anon_sym_longlong] = anon_sym_longlong,
    [anon_sym_int64] = anon_sym_int64,
    [sym_unsigned_tiny_int] = sym_unsigned_tiny_int,
    [sym_boolean_type] = sym_boolean_type,
    [anon_sym_fixed] = anon_sym_fixed,
    [sym_octet_type] = sym_octet_type,
    [sym_signed_tiny_int] = sym_signed_tiny_int,
    [anon_sym_unsignedshort] = anon_sym_unsignedshort,
    [anon_sym_uint16] = anon_sym_uint16,
    [anon_sym_unsignedlong] = anon_sym_unsignedlong,
    [anon_sym_uint32] = anon_sym_uint32,
    [anon_sym_unsignedlonglong] = anon_sym_unsignedlonglong,
    [anon_sym_uint64] = anon_sym_uint64,
    [anon_sym_float] = anon_sym_float,
    [anon_sym_double] = anon_sym_double,
    [anon_sym_longdouble] = anon_sym_longdouble,
    [anon_sym_char] = anon_sym_char,
    [anon_sym_wchar] = anon_sym_wchar,
    [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
    [anon_sym_string] = anon_sym_string,
    [anon_sym_wstring] = anon_sym_wstring,
    [anon_sym_LT] = anon_sym_LT,
    [anon_sym_GT] = anon_sym_GT,
    [anon_sym_any] = anon_sym_any,
    [anon_sym_COMMA] = anon_sym_COMMA,
    [anon_sym_sequence] = anon_sym_sequence,
    [anon_sym_map] = anon_sym_map,
    [anon_sym_PIPE] = anon_sym_PIPE,
    [anon_sym_CARET] = anon_sym_CARET,
    [anon_sym_DOLLAR] = anon_sym_DOLLAR,
    [anon_sym_GT_GT] = anon_sym_GT_GT,
    [anon_sym_LT_LT] = anon_sym_LT_LT,
    [anon_sym_PLUS] = anon_sym_PLUS,
    [anon_sym_DASH] = anon_sym_DASH,
    [anon_sym_STAR] = anon_sym_STAR,
    [anon_sym_SLASH] = anon_sym_SLASH,
    [anon_sym_PERCENT] = anon_sym_PERCENT,
    [anon_sym_LPAREN] = anon_sym_LPAREN,
    [anon_sym_RPAREN] = anon_sym_RPAREN,
    [anon_sym_TILDE] = anon_sym_TILDE,
    [anon_sym_L] = anon_sym_L,
    [anon_sym_DQUOTE] = anon_sym_DQUOTE,
    [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
    [anon_sym_SQUOTE] = anon_sym_SQUOTE,
    [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
    [anon_sym_TRUE] = anon_sym_TRUE,
    [anon_sym_FALSE] = anon_sym_FALSE,
    [sym_number_literal] = sym_number_literal,
    [aux_sym_preproc_call_token1] = aux_sym_preproc_call_token1,
    [sym_preproc_directive] = sym_preproc_directive,
    [sym_preproc_arg] = sym_preproc_arg,
    [anon_sym_exception] = anon_sym_exception,
    [anon_sym_LBRACE] = anon_sym_LBRACE,
    [anon_sym_RBRACE] = anon_sym_RBRACE,
    [anon_sym_local] = anon_sym_local,
    [anon_sym_abstract] = anon_sym_abstract,
    [anon_sym_interface] = anon_sym_interface,
    [anon_sym_COLON] = anon_sym_COLON,
    [anon_sym_SEMI] = anon_sym_SEMI,
    [anon_sym_void] = anon_sym_void,
    [anon_sym_in] = anon_sym_in,
    [anon_sym_out] = anon_sym_out,
    [anon_sym_inout] = anon_sym_inout,
    [anon_sym_raises] = anon_sym_raises,
    [anon_sym_readonly] = anon_sym_readonly,
    [anon_sym_attribute] = anon_sym_attribute,
    [anon_sym_getraises] = anon_sym_getraises,
    [anon_sym_setraises] = anon_sym_setraises,
    [anon_sym_bitset] = anon_sym_bitset,
    [anon_sym_bitfield] = anon_sym_bitfield,
    [anon_sym_bitmask] = anon_sym_bitmask,
    [anon_sym_ATannotation] = anon_sym_ATannotation,
    [anon_sym_default] = anon_sym_default,
    [anon_sym_AT] = anon_sym_AT,
    [anon_sym_EQ] = anon_sym_EQ,
    [anon_sym_module] = anon_sym_module,
    [anon_sym_typename] = anon_sym_typename,
    [anon_sym_valuetype] = anon_sym_valuetype,
    [anon_sym_eventtype] = anon_sym_eventtype,
    [anon_sym_struct] = anon_sym_struct,
    [anon_sym_union] = anon_sym_union,
    [anon_sym_enum] = anon_sym_enum,
    [anon_sym_const] = anon_sym_const,
    [anon_sym_alias] = anon_sym_alias,
    [anon_sym_custom] = anon_sym_custom,
    [anon_sym_truncatable] = anon_sym_truncatable,
    [anon_sym_supports] = anon_sym_supports,
    [anon_sym_public] = anon_sym_public,
    [anon_sym_private] = anon_sym_private,
    [anon_sym_factory] = anon_sym_factory,
    [anon_sym_typedef] = anon_sym_typedef,
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
    [anon_sym_ATdefault_literal] = anon_sym_ATdefault_literal,
    [anon_sym_ATignore_literal_names] = anon_sym_ATignore_literal_names,
    [anon_sym_switch] = anon_sym_switch,
    [anon_sym_case] = anon_sym_case,
    [anon_sym_typeid] = anon_sym_typeid,
    [anon_sym_typeprefix] = anon_sym_typeprefix,
    [anon_sym_import] = anon_sym_import,
    [anon_sym_Object] = anon_sym_Object,
    [anon_sym_oneway] = anon_sym_oneway,
    [anon_sym_context] = anon_sym_context,
    [sym_value_base_type] = sym_value_base_type,
    [anon_sym_component] = anon_sym_component,
    [anon_sym_provides] = anon_sym_provides,
    [anon_sym_uses] = anon_sym_uses,
    [anon_sym_multiple] = anon_sym_multiple,
    [anon_sym_home] = anon_sym_home,
    [anon_sym_manages] = anon_sym_manages,
    [anon_sym_emits] = anon_sym_emits,
    [anon_sym_publishes] = anon_sym_publishes,
    [anon_sym_consumes] = anon_sym_consumes,
    [anon_sym_primarykey] = anon_sym_primarykey,
    [anon_sym_finder] = anon_sym_finder,
    [anon_sym_porttype] = anon_sym_porttype,
    [anon_sym_port] = anon_sym_port,
    [anon_sym_mirrorport] = anon_sym_mirrorport,
    [anon_sym_connector] = anon_sym_connector,
    [anon_sym_native] = anon_sym_native,
    [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
    [aux_sym_predefine_token1] = aux_sym_predefine_token1,
    [sym_identifier] = sym_identifier,
    [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
    [aux_sym_comment_token1] = aux_sym_comment_token1,
    [aux_sym_comment_token2] = aux_sym_comment_token2,
    [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
    [aux_sym_comment_token3] = aux_sym_comment_token3,
    [sym_specification] = sym_specification,
    [sym_signed_short_int] = sym_signed_short_int,
    [sym_signed_long_int] = sym_signed_long_int,
    [sym_signed_longlong_int] = sym_signed_longlong_int,
    [sym_unsigned_int] = sym_unsigned_int,
    [sym_fixed_pt_const_type] = sym_fixed_pt_const_type,
    [sym_integer_type] = sym_integer_type,
    [sym_signed_int] = sym_signed_int,
    [sym_unsigned_short_int] = sym_unsigned_short_int,
    [sym_unsigned_long_int] = sym_unsigned_long_int,
    [sym_unsigned_longlong_int] = sym_unsigned_longlong_int,
    [sym_floating_pt_type] = sym_floating_pt_type,
    [sym_char_type] = sym_char_type,
    [sym_scoped_name] = sym_scoped_name,
    [sym_string_type] = sym_string_type,
    [sym_type_spec] = sym_type_spec,
    [sym_simple_type_spec] = sym_simple_type_spec,
    [sym_base_type_spec] = sym_base_type_spec,
    [sym_any_type] = sym_any_type,
    [sym_fixed_pt_type] = sym_fixed_pt_type,
    [sym_template_type_spec] = sym_template_type_spec,
    [sym_sequence_type] = sym_sequence_type,
    [sym_map_type] = sym_map_type,
    [sym_positive_int_const] = sym_positive_int_const,
    [sym_const_expr] = sym_const_expr,
    [sym_or_expr] = sym_or_expr,
    [sym_xor_expr] = sym_xor_expr,
    [sym_and_expr] = sym_and_expr,
    [sym_shift_expr] = sym_shift_expr,
    [sym_add_expr] = sym_add_expr,
    [sym_mult_expr] = sym_mult_expr,
    [sym_unary_expr] = sym_unary_expr,
    [sym_unary_operator] = sym_unary_operator,
    [sym_literal] = sym_literal,
    [sym_string_literal] = sym_string_literal,
    [sym_char_literal] = sym_char_literal,
    [sym_boolean_literal] = sym_boolean_literal,
    [sym_preproc_call] = sym_preproc_call,
    [sym_except_dcl] = sym_except_dcl,
    [sym_interface_dcl] = sym_interface_dcl,
    [sym_interface_kind] = sym_interface_kind,
    [sym_interface_forward_dcl] = sym_interface_forward_dcl,
    [sym_interface_def] = sym_interface_def,
    [sym_interface_header] = sym_interface_header,
    [sym_interface_inheritance_spec] = sym_interface_inheritance_spec,
    [sym_interface_name] = sym_interface_name,
    [sym_interface_body] = sym_interface_body,
    [sym_export] = sym_export,
    [sym_op_dcl] = sym_op_dcl,
    [sym_op_type_spec] = sym_op_type_spec,
    [sym_parameter_dcls] = sym_parameter_dcls,
    [sym_param_dcl] = sym_param_dcl,
    [sym_param_attribute] = sym_param_attribute,
    [sym_raises_expr] = sym_raises_expr,
    [sym_attr_dcl] = sym_attr_dcl,
    [sym_readonly_attr_spec] = sym_readonly_attr_spec,
    [sym_readonly_attr_declarator] = sym_readonly_attr_declarator,
    [sym_attr_spec] = sym_attr_spec,
    [sym_attr_declarator] = sym_attr_declarator,
    [sym_attr_raises_expr] = sym_attr_raises_expr,
    [sym_get_excep_expr] = sym_get_excep_expr,
    [sym_set_excep_expr] = sym_set_excep_expr,
    [sym_exception_list] = sym_exception_list,
    [sym_bitset_dcl] = sym_bitset_dcl,
    [sym_bitfield] = sym_bitfield,
    [sym_bitfield_spec] = sym_bitfield_spec,
    [sym_destination_type] = sym_destination_type,
    [sym_bitmask_dcl] = sym_bitmask_dcl,
    [sym_bit_value] = sym_bit_value,
    [sym_annotation_dcl] = sym_annotation_dcl,
    [sym_annotation_body] = sym_annotation_body,
    [sym_annotation_member] = sym_annotation_member,
    [sym_annotation_member_type] = sym_annotation_member_type,
    [sym_any_const_type] = sym_any_const_type,
    [sym_annotation_appl] = sym_annotation_appl,
    [sym_annotation_appl_params] = sym_annotation_appl_params,
    [sym_annotation_appl_param] = sym_annotation_appl_param,
    [sym_template_module_dcl] = sym_template_module_dcl,
    [sym_formal_parameters] = sym_formal_parameters,
    [sym_formal_parameter] = sym_formal_parameter,
    [sym_formal_parameter_type] = sym_formal_parameter_type,
    [sym_tpl_definition] = sym_tpl_definition,
    [sym_template_module_inst] = sym_template_module_inst,
    [sym_actual_parameters] = sym_actual_parameters,
    [sym_actual_parameter] = sym_actual_parameter,
    [sym_template_module_ref] = sym_template_module_ref,
    [sym_formal_parameter_names] = sym_formal_parameter_names,
    [sym_value_dcl] = sym_value_dcl,
    [sym_value_def] = sym_value_def,
    [sym_value_kind] = sym_value_kind,
    [sym_value_header] = sym_value_header,
    [sym_value_inheritance_spec] = sym_value_inheritance_spec,
    [sym_value_name] = sym_value_name,
    [sym_value_element] = sym_value_element,
    [sym_state_member] = sym_state_member,
    [sym_init_dcl] = sym_init_dcl,
    [sym_init_param_dcls] = sym_init_param_dcls,
    [sym_init_param_dcl] = sym_init_param_dcl,
    [sym_value_forward_dcl] = sym_value_forward_dcl,
    [sym_typedef_dcl] = sym_typedef_dcl,
    [sym_type_declarator] = sym_type_declarator,
    [sym_any_declarators] = sym_any_declarators,
    [sym_any_declarator] = sym_any_declarator,
    [sym_simple_declarator] = sym_simple_declarator,
    [sym_declarator] = sym_declarator,
    [sym_declarators] = sym_declarators,
    [sym_array_declarator] = sym_array_declarator,
    [sym_fixed_array_size] = sym_fixed_array_size,
    [sym_enum_dcl] = sym_enum_dcl,
    [sym_enumerator] = sym_enumerator,
    [sym_enum_modifier] = sym_enum_modifier,
    [sym_enum_anno] = sym_enum_anno,
    [sym_union_forward_dcl] = sym_union_forward_dcl,
    [sym_union_def] = sym_union_def,
    [sym_case] = sym_case,
    [sym_case_label] = sym_case_label,
    [sym_element_spec] = sym_element_spec,
    [sym_switch_type_spec] = sym_switch_type_spec,
    [sym_type_id_dcl] = sym_type_id_dcl,
    [sym_type_prefix_dcl] = sym_type_prefix_dcl,
    [sym_import_dcl] = sym_import_dcl,
    [sym_imported_scope] = sym_imported_scope,
    [sym_object_type] = sym_object_type,
    [sym_op_oneway_dcl] = sym_op_oneway_dcl,
    [sym_in_parameter_dcls] = sym_in_parameter_dcls,
    [sym_in_param_dcl] = sym_in_param_dcl,
    [sym_op_with_context] = sym_op_with_context,
    [sym_context_expr] = sym_context_expr,
    [sym_value_abs_def] = sym_value_abs_def,
    [sym_component_dcl] = sym_component_dcl,
    [sym_component_forward_dcl] = sym_component_forward_dcl,
    [sym_component_def] = sym_component_def,
    [sym_component_header] = sym_component_header,
    [sym_component_inheritance_spec] = sym_component_inheritance_spec,
    [sym_component_body] = sym_component_body,
    [sym_component_export] = sym_component_export,
    [sym_provides_dcl] = sym_provides_dcl,
    [sym_interface_type] = sym_interface_type,
    [sym_uses_dcl] = sym_uses_dcl,
    [sym_home_dcl] = sym_home_dcl,
    [sym_home_header] = sym_home_header,
    [sym_home_inheritance_spec] = sym_home_inheritance_spec,
    [sym_home_body] = sym_home_body,
    [sym_home_export] = sym_home_export,
    [sym_factory_dcl] = sym_factory_dcl,
    [sym_factory_param_dcls] = sym_factory_param_dcls,
    [sym_factory_param_dcl] = sym_factory_param_dcl,
    [sym_supported_interface_spec] = sym_supported_interface_spec,
    [sym_emits_dcl] = sym_emits_dcl,
    [sym_publishes_dcl] = sym_publishes_dcl,
    [sym_consumes_dcl] = sym_consumes_dcl,
    [sym_primary_key_spec] = sym_primary_key_spec,
    [sym_event_dcl] = sym_event_dcl,
    [sym_event_forward_dcl] = sym_event_forward_dcl,
    [sym_event_abs_def] = sym_event_abs_def,
    [sym_event_def] = sym_event_def,
    [sym_event_header] = sym_event_header,
    [sym_porttype_dcl] = sym_porttype_dcl,
    [sym_porttype_forward_dcl] = sym_porttype_forward_dcl,
    [sym_porttype_def] = sym_porttype_def,
    [sym_port_body] = sym_port_body,
    [sym_port_ref] = sym_port_ref,
    [sym_port_export] = sym_port_export,
    [sym_port_dcl] = sym_port_dcl,
    [sym_connector_dcl] = sym_connector_dcl,
    [sym_connector_header] = sym_connector_header,
    [sym_connector_inherit_spec] = sym_connector_inherit_spec,
    [sym_connector_export] = sym_connector_export,
    [sym__definition] = sym__definition,
    [sym_native_dcl] = sym_native_dcl,
    [sym_module_dcl] = sym_module_dcl,
    [sym_struct_forward_dcl] = sym_struct_forward_dcl,
    [sym_struct_def] = sym_struct_def,
    [sym_member] = sym_member,
    [sym_default] = sym_default,
    [sym_predefine] = sym_predefine,
    [sym_const_dcl] = sym_const_dcl,
    [sym_const_type] = sym_const_type,
    [sym_comment] = sym_comment,
    [aux_sym_specification_repeat1] = aux_sym_specification_repeat1,
    [aux_sym_specification_repeat2] = aux_sym_specification_repeat2,
    [aux_sym_except_dcl_repeat1] = aux_sym_except_dcl_repeat1,
    [aux_sym_interface_def_repeat1] = aux_sym_interface_def_repeat1,
    [aux_sym_interface_inheritance_spec_repeat1] = aux_sym_interface_inheritance_spec_repeat1,
    [aux_sym_interface_body_repeat1] = aux_sym_interface_body_repeat1,
    [aux_sym_parameter_dcls_repeat1] = aux_sym_parameter_dcls_repeat1,
    [aux_sym_raises_expr_repeat1] = aux_sym_raises_expr_repeat1,
    [aux_sym_readonly_attr_declarator_repeat1] = aux_sym_readonly_attr_declarator_repeat1,
    [aux_sym_bitset_dcl_repeat1] = aux_sym_bitset_dcl_repeat1,
    [aux_sym_bitfield_repeat1] = aux_sym_bitfield_repeat1,
    [aux_sym_bitmask_dcl_repeat1] = aux_sym_bitmask_dcl_repeat1,
    [aux_sym_annotation_dcl_repeat1] = aux_sym_annotation_dcl_repeat1,
    [aux_sym_annotation_appl_params_repeat1] = aux_sym_annotation_appl_params_repeat1,
    [aux_sym_template_module_dcl_repeat1] = aux_sym_template_module_dcl_repeat1,
    [aux_sym_formal_parameters_repeat1] = aux_sym_formal_parameters_repeat1,
    [aux_sym_actual_parameters_repeat1] = aux_sym_actual_parameters_repeat1,
    [aux_sym_formal_parameter_names_repeat1] = aux_sym_formal_parameter_names_repeat1,
    [aux_sym_value_def_repeat1] = aux_sym_value_def_repeat1,
    [aux_sym_value_inheritance_spec_repeat1] = aux_sym_value_inheritance_spec_repeat1,
    [aux_sym_init_param_dcls_repeat1] = aux_sym_init_param_dcls_repeat1,
    [aux_sym_any_declarators_repeat1] = aux_sym_any_declarators_repeat1,
    [aux_sym_declarators_repeat1] = aux_sym_declarators_repeat1,
    [aux_sym_array_declarator_repeat1] = aux_sym_array_declarator_repeat1,
    [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
    [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
    [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
    [aux_sym_in_parameter_dcls_repeat1] = aux_sym_in_parameter_dcls_repeat1,
    [aux_sym_context_expr_repeat1] = aux_sym_context_expr_repeat1,
    [aux_sym_component_body_repeat1] = aux_sym_component_body_repeat1,
    [aux_sym_home_body_repeat1] = aux_sym_home_body_repeat1,
    [aux_sym_factory_param_dcls_repeat1] = aux_sym_factory_param_dcls_repeat1,
    [aux_sym_port_body_repeat1] = aux_sym_port_body_repeat1,
    [aux_sym_connector_dcl_repeat1] = aux_sym_connector_dcl_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
    },
    [anon_sym_short] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int16] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_long] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int32] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_longlong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int64] = {
        .visible = true,
        .named = false,
    },
    [sym_unsigned_tiny_int] = {
        .visible = true,
        .named = true,
    },
    [sym_boolean_type] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_fixed] = {
        .visible = true,
        .named = false,
    },
    [sym_octet_type] = {
        .visible = true,
        .named = true,
    },
    [sym_signed_tiny_int] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_unsignedshort] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint16] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_unsignedlong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint32] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_unsignedlonglong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint64] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_float] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_double] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_longdouble] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_char] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_wchar] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COLON_COLON] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_string] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_wstring] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_GT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_any] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COMMA] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_sequence] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_map] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PIPE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_CARET] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DOLLAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_GT_GT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LT_LT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PLUS] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DASH] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_STAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_SLASH] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PERCENT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LPAREN] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RPAREN] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_TILDE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_L] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DQUOTE] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_string_literal_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_SQUOTE] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_char_literal_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_TRUE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_FALSE] = {
        .visible = true,
        .named = false,
    },
    [sym_number_literal] = {
        .visible = true,
        .named = true,
    },
    [aux_sym_preproc_call_token1] = {
        .visible = false,
        .named = false,
    },
    [sym_preproc_directive] = {
        .visible = true,
        .named = true,
    },
    [sym_preproc_arg] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_exception] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LBRACE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RBRACE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_local] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_abstract] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_interface] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COLON] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_SEMI] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_void] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_in] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_out] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_inout] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_raises] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_readonly] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_attribute] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_getraises] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_setraises] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_bitset] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_bitfield] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_bitmask] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATannotation] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_default] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_AT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_EQ] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_module] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_typename] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_valuetype] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_eventtype] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_struct] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_union] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_enum] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_const] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_alias] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_custom] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_truncatable] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_supports] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_public] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_private] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_factory] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_typedef] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATdefault_literal] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATignore_literal_names] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_switch] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_case] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_typeid] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_typeprefix] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_import] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_Object] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_oneway] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_context] = {
        .visible = true,
        .named = false,
    },
    [sym_value_base_type] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_component] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_provides] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uses] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_multiple] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_home] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_manages] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_emits] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_publishes] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_consumes] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_primarykey] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_finder] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_porttype] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_port] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_mirrorport] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_connector] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_native] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_POUNDdefine] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_predefine_token1] = {
        .visible = false,
        .named = false,
    },
    [sym_identifier] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_SLASH_SLASH] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_comment_token1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_comment_token2] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_SLASH_STAR] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_comment_token3] = {
        .visible = false,
        .named = false,
    },
    [sym_specification] = {
        .visible = true,
        .named = true,
    },
    [sym_signed_short_int] = {
        .visible = true,
        .named = true,
    },
    [sym_signed_long_int] = {
        .visible = true,
        .named = true,
    },
    [sym_signed_longlong_int] = {
        .visible = true,
        .named = true,
    },
    [sym_unsigned_int] = {
        .visible = true,
        .named = true,
    },
    [sym_fixed_pt_const_type] = {
        .visible = true,
        .named = true,
    },
    [sym_integer_type] = {
        .visible = true,
        .named = true,
    },
    [sym_signed_int] = {
        .visible = true,
        .named = true,
    },
    [sym_unsigned_short_int] = {
        .visible = true,
        .named = true,
    },
    [sym_unsigned_long_int] = {
        .visible = true,
        .named = true,
    },
    [sym_unsigned_longlong_int] = {
        .visible = true,
        .named = true,
    },
    [sym_floating_pt_type] = {
        .visible = true,
        .named = true,
    },
    [sym_char_type] = {
        .visible = true,
        .named = true,
    },
    [sym_scoped_name] = {
        .visible = true,
        .named = true,
    },
    [sym_string_type] = {
        .visible = true,
        .named = true,
    },
    [sym_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_simple_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_base_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_any_type] = {
        .visible = true,
        .named = true,
    },
    [sym_fixed_pt_type] = {
        .visible = true,
        .named = true,
    },
    [sym_template_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_sequence_type] = {
        .visible = true,
        .named = true,
    },
    [sym_map_type] = {
        .visible = true,
        .named = true,
    },
    [sym_positive_int_const] = {
        .visible = true,
        .named = true,
    },
    [sym_const_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_or_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_xor_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_and_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_shift_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_add_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_mult_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_unary_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_unary_operator] = {
        .visible = true,
        .named = true,
    },
    [sym_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_string_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_char_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_boolean_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_preproc_call] = {
        .visible = true,
        .named = true,
    },
    [sym_except_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_kind] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_def] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_header] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_inheritance_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_name] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_body] = {
        .visible = true,
        .named = true,
    },
    [sym_export] = {
        .visible = true,
        .named = true,
    },
    [sym_op_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_op_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_parameter_dcls] = {
        .visible = true,
        .named = true,
    },
    [sym_param_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_param_attribute] = {
        .visible = true,
        .named = true,
    },
    [sym_raises_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_attr_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_readonly_attr_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_readonly_attr_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_attr_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_attr_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_attr_raises_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_get_excep_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_set_excep_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_exception_list] = {
        .visible = true,
        .named = true,
    },
    [sym_bitset_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_bitfield] = {
        .visible = true,
        .named = true,
    },
    [sym_bitfield_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_destination_type] = {
        .visible = true,
        .named = true,
    },
    [sym_bitmask_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_bit_value] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_body] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_member] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_member_type] = {
        .visible = true,
        .named = true,
    },
    [sym_any_const_type] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_appl] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_appl_params] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_appl_param] = {
        .visible = true,
        .named = true,
    },
    [sym_template_module_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_formal_parameters] = {
        .visible = true,
        .named = true,
    },
    [sym_formal_parameter] = {
        .visible = true,
        .named = true,
    },
    [sym_formal_parameter_type] = {
        .visible = true,
        .named = true,
    },
    [sym_tpl_definition] = {
        .visible = true,
        .named = true,
    },
    [sym_template_module_inst] = {
        .visible = true,
        .named = true,
    },
    [sym_actual_parameters] = {
        .visible = true,
        .named = true,
    },
    [sym_actual_parameter] = {
        .visible = true,
        .named = true,
    },
    [sym_template_module_ref] = {
        .visible = true,
        .named = true,
    },
    [sym_formal_parameter_names] = {
        .visible = true,
        .named = true,
    },
    [sym_value_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_value_def] = {
        .visible = true,
        .named = true,
    },
    [sym_value_kind] = {
        .visible = true,
        .named = true,
    },
    [sym_value_header] = {
        .visible = true,
        .named = true,
    },
    [sym_value_inheritance_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_value_name] = {
        .visible = true,
        .named = true,
    },
    [sym_value_element] = {
        .visible = true,
        .named = true,
    },
    [sym_state_member] = {
        .visible = true,
        .named = true,
    },
    [sym_init_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_init_param_dcls] = {
        .visible = true,
        .named = true,
    },
    [sym_init_param_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_value_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_typedef_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_type_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_any_declarators] = {
        .visible = true,
        .named = true,
    },
    [sym_any_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_simple_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_declarators] = {
        .visible = true,
        .named = true,
    },
    [sym_array_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_fixed_array_size] = {
        .visible = true,
        .named = true,
    },
    [sym_enum_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_enumerator] = {
        .visible = true,
        .named = true,
    },
    [sym_enum_modifier] = {
        .visible = true,
        .named = true,
    },
    [sym_enum_anno] = {
        .visible = true,
        .named = true,
    },
    [sym_union_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_union_def] = {
        .visible = true,
        .named = true,
    },
    [sym_case] = {
        .visible = true,
        .named = true,
    },
    [sym_case_label] = {
        .visible = true,
        .named = true,
    },
    [sym_element_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_switch_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_type_id_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_type_prefix_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_import_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_imported_scope] = {
        .visible = true,
        .named = true,
    },
    [sym_object_type] = {
        .visible = true,
        .named = true,
    },
    [sym_op_oneway_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_in_parameter_dcls] = {
        .visible = true,
        .named = true,
    },
    [sym_in_param_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_op_with_context] = {
        .visible = true,
        .named = true,
    },
    [sym_context_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_value_abs_def] = {
        .visible = true,
        .named = true,
    },
    [sym_component_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_component_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_component_def] = {
        .visible = true,
        .named = true,
    },
    [sym_component_header] = {
        .visible = true,
        .named = true,
    },
    [sym_component_inheritance_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_component_body] = {
        .visible = true,
        .named = true,
    },
    [sym_component_export] = {
        .visible = true,
        .named = true,
    },
    [sym_provides_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_type] = {
        .visible = true,
        .named = true,
    },
    [sym_uses_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_home_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_home_header] = {
        .visible = true,
        .named = true,
    },
    [sym_home_inheritance_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_home_body] = {
        .visible = true,
        .named = true,
    },
    [sym_home_export] = {
        .visible = true,
        .named = true,
    },
    [sym_factory_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_factory_param_dcls] = {
        .visible = true,
        .named = true,
    },
    [sym_factory_param_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_supported_interface_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_emits_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_publishes_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_consumes_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_primary_key_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_event_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_event_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_event_abs_def] = {
        .visible = true,
        .named = true,
    },
    [sym_event_def] = {
        .visible = true,
        .named = true,
    },
    [sym_event_header] = {
        .visible = true,
        .named = true,
    },
    [sym_porttype_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_porttype_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_porttype_def] = {
        .visible = true,
        .named = true,
    },
    [sym_port_body] = {
        .visible = true,
        .named = true,
    },
    [sym_port_ref] = {
        .visible = true,
        .named = true,
    },
    [sym_port_export] = {
        .visible = true,
        .named = true,
    },
    [sym_port_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_connector_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_connector_header] = {
        .visible = true,
        .named = true,
    },
    [sym_connector_inherit_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_connector_export] = {
        .visible = true,
        .named = true,
    },
    [sym__definition] = {
        .visible = false,
        .named = true,
    },
    [sym_native_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_module_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_struct_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_struct_def] = {
        .visible = true,
        .named = true,
    },
    [sym_member] = {
        .visible = true,
        .named = true,
    },
    [sym_default] = {
        .visible = true,
        .named = true,
    },
    [sym_predefine] = {
        .visible = true,
        .named = true,
    },
    [sym_const_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_const_type] = {
        .visible = true,
        .named = true,
    },
    [sym_comment] = {
        .visible = true,
        .named = true,
    },
    [aux_sym_specification_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_specification_repeat2] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_except_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_inheritance_spec_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_body_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_parameter_dcls_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_raises_expr_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_readonly_attr_declarator_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_bitset_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_bitfield_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_bitmask_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_annotation_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_annotation_appl_params_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_template_module_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_formal_parameters_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_actual_parameters_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_formal_parameter_names_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_value_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_value_inheritance_spec_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_init_param_dcls_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_any_declarators_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_declarators_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_array_declarator_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_enum_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_enumerator_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_union_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_in_parameter_dcls_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_context_expr_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_component_body_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_home_body_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_factory_param_dcls_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_port_body_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_connector_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
};

enum ts_field_identifiers {
    field_argument = 1,
    field_directive = 2,
    field_identifier = 3,
    field_parent = 4,
    field_type = 5,
    field_value = 6,
};

static const char *const ts_field_names[] = {
    [0] = NULL,
    [field_argument] = "argument",
    [field_directive] = "directive",
    [field_identifier] = "identifier",
    [field_parent] = "parent",
    [field_type] = "type",
    [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
    [1] = { .index = 0, .length = 1 },
    [2] = { .index = 1, .length = 2 },
    [3] = { .index = 3, .length = 2 },
    [4] = { .index = 5, .length = 1 },
    [5] = { .index = 6, .length = 1 },
    [6] = { .index = 7, .length = 2 },
    [7] = { .index = 9, .length = 1 },
    [8] = { .index = 10, .length = 1 },
};

static const TSFieldMapEntry ts_field_map_entries[] = {
    [0] = { field_directive, 0 },
    [1] = { field_argument, 1 },
    { field_directive, 0 },
    [3] = { field_identifier, 1 },
    { field_type, 0 },
    [5] = { field_value, 1 },
    [6] = { field_parent, 3 },
    [7] = { field_identifier, 2 },
    { field_type, 1 },
    [9] = { field_value, 2 },
    [10] = { field_parent, 4 },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
};

static const uint16_t ts_non_terminal_alias_map[] = {
    0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
    [0] = 0,
    [1] = 1,
    [2] = 2,
    [3] = 3,
    [4] = 4,
    [5] = 5,
    [6] = 6,
    [7] = 7,
    [8] = 8,
    [9] = 9,
    [10] = 10,
    [11] = 11,
    [12] = 12,
    [13] = 13,
    [14] = 14,
    [15] = 15,
    [16] = 16,
    [17] = 17,
    [18] = 18,
    [19] = 19,
    [20] = 20,
    [21] = 21,
    [22] = 22,
    [23] = 23,
    [24] = 24,
    [25] = 25,
    [26] = 26,
    [27] = 27,
    [28] = 28,
    [29] = 29,
    [30] = 30,
    [31] = 31,
    [32] = 32,
    [33] = 33,
    [34] = 34,
    [35] = 35,
    [36] = 36,
    [37] = 37,
    [38] = 38,
    [39] = 39,
    [40] = 40,
    [41] = 41,
    [42] = 42,
    [43] = 43,
    [44] = 44,
    [45] = 45,
    [46] = 46,
    [47] = 47,
    [48] = 48,
    [49] = 49,
    [50] = 50,
    [51] = 51,
    [52] = 52,
    [53] = 53,
    [54] = 54,
    [55] = 55,
    [56] = 56,
    [57] = 57,
    [58] = 58,
    [59] = 59,
    [60] = 60,
    [61] = 61,
    [62] = 53,
    [63] = 63,
    [64] = 64,
    [65] = 65,
    [66] = 66,
    [67] = 67,
    [68] = 68,
    [69] = 69,
    [70] = 70,
    [71] = 71,
    [72] = 72,
    [73] = 73,
    [74] = 53,
    [75] = 75,
    [76] = 76,
    [77] = 77,
    [78] = 78,
    [79] = 79,
    [80] = 80,
    [81] = 81,
    [82] = 82,
    [83] = 83,
    [84] = 84,
    [85] = 85,
    [86] = 86,
    [87] = 87,
    [88] = 88,
    [89] = 89,
    [90] = 90,
    [91] = 91,
    [92] = 92,
    [93] = 93,
    [94] = 94,
    [95] = 95,
    [96] = 91,
    [97] = 89,
    [98] = 98,
    [99] = 99,
    [100] = 92,
    [101] = 101,
    [102] = 102,
    [103] = 103,
    [104] = 104,
    [105] = 105,
    [106] = 106,
    [107] = 107,
    [108] = 108,
    [109] = 109,
    [110] = 110,
    [111] = 111,
    [112] = 112,
    [113] = 112,
    [114] = 112,
    [115] = 112,
    [116] = 116,
    [117] = 117,
    [118] = 118,
    [119] = 119,
    [120] = 120,
    [121] = 121,
    [122] = 122,
    [123] = 123,
    [124] = 124,
    [125] = 125,
    [126] = 126,
    [127] = 127,
    [128] = 128,
    [129] = 129,
    [130] = 130,
    [131] = 131,
    [132] = 132,
    [133] = 133,
    [134] = 134,
    [135] = 135,
    [136] = 136,
    [137] = 137,
    [138] = 138,
    [139] = 139,
    [140] = 140,
    [141] = 141,
    [142] = 142,
    [143] = 143,
    [144] = 144,
    [145] = 145,
    [146] = 146,
    [147] = 147,
    [148] = 148,
    [149] = 149,
    [150] = 150,
    [151] = 151,
    [152] = 152,
    [153] = 153,
    [154] = 154,
    [155] = 155,
    [156] = 156,
    [157] = 157,
    [158] = 158,
    [159] = 159,
    [160] = 160,
    [161] = 161,
    [162] = 162,
    [163] = 163,
    [164] = 164,
    [165] = 165,
    [166] = 166,
    [167] = 167,
    [168] = 168,
    [169] = 169,
    [170] = 170,
    [171] = 171,
    [172] = 172,
    [173] = 173,
    [174] = 174,
    [175] = 175,
    [176] = 83,
    [177] = 177,
    [178] = 178,
    [179] = 179,
    [180] = 79,
    [181] = 181,
    [182] = 182,
    [183] = 183,
    [184] = 184,
    [185] = 185,
    [186] = 186,
    [187] = 187,
    [188] = 188,
    [189] = 189,
    [190] = 190,
    [191] = 191,
    [192] = 192,
    [193] = 91,
    [194] = 194,
    [195] = 195,
    [196] = 196,
    [197] = 95,
    [198] = 89,
    [199] = 92,
    [200] = 200,
    [201] = 201,
    [202] = 202,
    [203] = 203,
    [204] = 94,
    [205] = 205,
    [206] = 206,
    [207] = 207,
    [208] = 208,
    [209] = 209,
    [210] = 210,
    [211] = 211,
    [212] = 212,
    [213] = 213,
    [214] = 214,
    [215] = 215,
    [216] = 216,
    [217] = 217,
    [218] = 218,
    [219] = 219,
    [220] = 220,
    [221] = 221,
    [222] = 222,
    [223] = 223,
    [224] = 224,
    [225] = 225,
    [226] = 226,
    [227] = 227,
    [228] = 228,
    [229] = 229,
    [230] = 230,
    [231] = 231,
    [232] = 232,
    [233] = 233,
    [234] = 234,
    [235] = 235,
    [236] = 236,
    [237] = 237,
    [238] = 238,
    [239] = 239,
    [240] = 240,
    [241] = 241,
    [242] = 242,
    [243] = 243,
    [244] = 244,
    [245] = 245,
    [246] = 246,
    [247] = 83,
    [248] = 248,
    [249] = 249,
    [250] = 250,
    [251] = 251,
    [252] = 79,
    [253] = 253,
    [254] = 254,
    [255] = 255,
    [256] = 256,
    [257] = 257,
    [258] = 258,
    [259] = 89,
    [260] = 91,
    [261] = 92,
    [262] = 83,
    [263] = 263,
    [264] = 264,
    [265] = 265,
    [266] = 266,
    [267] = 267,
    [268] = 268,
    [269] = 269,
    [270] = 270,
    [271] = 271,
    [272] = 272,
    [273] = 273,
    [274] = 274,
    [275] = 275,
    [276] = 276,
    [277] = 277,
    [278] = 278,
    [279] = 79,
    [280] = 280,
    [281] = 281,
    [282] = 282,
    [283] = 283,
    [284] = 284,
    [285] = 285,
    [286] = 286,
    [287] = 287,
    [288] = 288,
    [289] = 289,
    [290] = 290,
    [291] = 291,
    [292] = 292,
    [293] = 293,
    [294] = 294,
    [295] = 295,
    [296] = 296,
    [297] = 297,
    [298] = 298,
    [299] = 299,
    [300] = 300,
    [301] = 301,
    [302] = 302,
    [303] = 303,
    [304] = 304,
    [305] = 305,
    [306] = 306,
    [307] = 307,
    [308] = 308,
    [309] = 309,
    [310] = 310,
    [311] = 311,
    [312] = 312,
    [313] = 313,
    [314] = 314,
    [315] = 306,
    [316] = 316,
    [317] = 317,
    [318] = 318,
    [319] = 308,
    [320] = 306,
    [321] = 321,
    [322] = 322,
    [323] = 323,
    [324] = 324,
    [325] = 306,
    [326] = 326,
    [327] = 327,
    [328] = 328,
    [329] = 329,
    [330] = 330,
    [331] = 331,
    [332] = 332,
    [333] = 333,
    [334] = 334,
    [335] = 335,
    [336] = 336,
    [337] = 337,
    [338] = 338,
    [339] = 339,
    [340] = 340,
    [341] = 341,
    [342] = 342,
    [343] = 343,
    [344] = 344,
    [345] = 345,
    [346] = 346,
    [347] = 347,
    [348] = 348,
    [349] = 349,
    [350] = 350,
    [351] = 351,
    [352] = 352,
    [353] = 353,
    [354] = 354,
    [355] = 355,
    [356] = 356,
    [357] = 357,
    [358] = 358,
    [359] = 359,
    [360] = 360,
    [361] = 361,
    [362] = 362,
    [363] = 363,
    [364] = 364,
    [365] = 365,
    [366] = 366,
    [367] = 367,
    [368] = 368,
    [369] = 369,
    [370] = 370,
    [371] = 371,
    [372] = 372,
    [373] = 373,
    [374] = 374,
    [375] = 375,
    [376] = 376,
    [377] = 377,
    [378] = 378,
    [379] = 379,
    [380] = 380,
    [381] = 381,
    [382] = 382,
    [383] = 383,
    [384] = 384,
    [385] = 385,
    [386] = 386,
    [387] = 387,
    [388] = 388,
    [389] = 389,
    [390] = 390,
    [391] = 391,
    [392] = 392,
    [393] = 393,
    [394] = 394,
    [395] = 395,
    [396] = 396,
    [397] = 397,
    [398] = 398,
    [399] = 399,
    [400] = 400,
    [401] = 401,
    [402] = 402,
    [403] = 403,
    [404] = 404,
    [405] = 405,
    [406] = 406,
    [407] = 407,
    [408] = 408,
    [409] = 409,
    [410] = 410,
    [411] = 411,
    [412] = 412,
    [413] = 413,
    [414] = 414,
    [415] = 415,
    [416] = 416,
    [417] = 417,
    [418] = 418,
    [419] = 419,
    [420] = 308,
    [421] = 421,
    [422] = 422,
    [423] = 423,
    [424] = 424,
    [425] = 425,
    [426] = 426,
    [427] = 427,
    [428] = 428,
    [429] = 429,
    [430] = 430,
    [431] = 431,
    [432] = 432,
    [433] = 433,
    [434] = 434,
    [435] = 435,
    [436] = 436,
    [437] = 437,
    [438] = 438,
    [439] = 439,
    [440] = 440,
    [441] = 441,
    [442] = 442,
    [443] = 443,
    [444] = 444,
    [445] = 445,
    [446] = 446,
    [447] = 447,
    [448] = 448,
    [449] = 449,
    [450] = 450,
    [451] = 451,
    [452] = 452,
    [453] = 453,
    [454] = 454,
    [455] = 455,
    [456] = 456,
    [457] = 457,
    [458] = 458,
    [459] = 459,
    [460] = 460,
    [461] = 461,
    [462] = 462,
    [463] = 463,
    [464] = 464,
    [465] = 465,
    [466] = 466,
    [467] = 467,
    [468] = 468,
    [469] = 469,
    [470] = 470,
    [471] = 471,
    [472] = 472,
    [473] = 473,
    [474] = 474,
    [475] = 475,
    [476] = 476,
    [477] = 477,
    [478] = 478,
    [479] = 479,
    [480] = 480,
    [481] = 481,
    [482] = 482,
    [483] = 483,
    [484] = 484,
    [485] = 485,
    [486] = 486,
    [487] = 487,
    [488] = 488,
    [489] = 489,
    [490] = 490,
    [491] = 491,
    [492] = 492,
    [493] = 493,
    [494] = 494,
    [495] = 495,
    [496] = 496,
    [497] = 497,
    [498] = 498,
    [499] = 499,
    [500] = 500,
    [501] = 501,
    [502] = 502,
    [503] = 503,
    [504] = 504,
    [505] = 505,
    [506] = 506,
    [507] = 94,
    [508] = 508,
    [509] = 509,
    [510] = 510,
    [511] = 95,
    [512] = 512,
    [513] = 513,
    [514] = 514,
    [515] = 94,
    [516] = 516,
    [517] = 95,
    [518] = 518,
    [519] = 519,
    [520] = 520,
    [521] = 521,
    [522] = 522,
    [523] = 523,
    [524] = 524,
    [525] = 525,
    [526] = 526,
    [527] = 527,
    [528] = 528,
    [529] = 529,
    [530] = 530,
    [531] = 531,
    [532] = 532,
    [533] = 533,
    [534] = 534,
    [535] = 286,
    [536] = 536,
    [537] = 537,
    [538] = 538,
    [539] = 539,
    [540] = 540,
    [541] = 541,
    [542] = 542,
    [543] = 543,
    [544] = 544,
    [545] = 545,
    [546] = 546,
    [547] = 547,
    [548] = 548,
    [549] = 549,
    [550] = 550,
    [551] = 551,
    [552] = 552,
    [553] = 553,
    [554] = 554,
    [555] = 555,
    [556] = 556,
    [557] = 557,
    [558] = 558,
    [559] = 559,
    [560] = 560,
    [561] = 561,
    [562] = 562,
    [563] = 563,
    [564] = 564,
    [565] = 565,
    [566] = 566,
    [567] = 567,
    [568] = 568,
    [569] = 569,
    [570] = 570,
    [571] = 571,
    [572] = 572,
    [573] = 573,
    [574] = 574,
    [575] = 575,
    [576] = 576,
    [577] = 577,
    [578] = 578,
    [579] = 579,
    [580] = 580,
    [581] = 581,
    [582] = 582,
    [583] = 583,
    [584] = 584,
    [585] = 585,
    [586] = 586,
    [587] = 587,
    [588] = 588,
    [589] = 589,
    [590] = 590,
    [591] = 591,
    [592] = 592,
    [593] = 593,
    [594] = 594,
    [595] = 595,
    [596] = 596,
    [597] = 597,
    [598] = 598,
    [599] = 599,
    [600] = 600,
    [601] = 601,
    [602] = 602,
    [603] = 603,
    [604] = 604,
    [605] = 605,
    [606] = 606,
    [607] = 607,
    [608] = 608,
    [609] = 609,
    [610] = 610,
    [611] = 611,
    [612] = 612,
    [613] = 613,
    [614] = 614,
    [615] = 615,
    [616] = 616,
    [617] = 617,
    [618] = 618,
    [619] = 619,
    [620] = 620,
    [621] = 621,
    [622] = 622,
    [623] = 623,
    [624] = 624,
    [625] = 625,
    [626] = 626,
    [627] = 627,
    [628] = 628,
    [629] = 629,
    [630] = 630,
    [631] = 631,
    [632] = 632,
    [633] = 633,
    [634] = 634,
    [635] = 635,
    [636] = 636,
    [637] = 637,
    [638] = 638,
    [639] = 639,
    [640] = 640,
    [641] = 641,
    [642] = 642,
    [643] = 643,
    [644] = 644,
    [645] = 645,
    [646] = 646,
    [647] = 647,
    [648] = 648,
    [649] = 649,
    [650] = 650,
    [651] = 651,
    [652] = 652,
    [653] = 653,
    [654] = 654,
    [655] = 655,
    [656] = 656,
    [657] = 657,
    [658] = 658,
    [659] = 659,
    [660] = 660,
    [661] = 661,
    [662] = 662,
    [663] = 663,
    [664] = 664,
    [665] = 665,
    [666] = 666,
    [667] = 667,
    [668] = 668,
    [669] = 669,
    [670] = 670,
    [671] = 671,
    [672] = 672,
    [673] = 673,
    [674] = 674,
    [675] = 675,
    [676] = 676,
    [677] = 677,
    [678] = 678,
    [679] = 679,
    [680] = 680,
    [681] = 681,
    [682] = 682,
    [683] = 683,
    [684] = 684,
    [685] = 685,
    [686] = 686,
    [687] = 687,
    [688] = 688,
    [689] = 689,
    [690] = 690,
    [691] = 691,
    [692] = 692,
    [693] = 693,
    [694] = 694,
    [695] = 695,
    [696] = 696,
    [697] = 697,
    [698] = 698,
    [699] = 699,
    [700] = 700,
    [701] = 701,
    [702] = 702,
    [703] = 703,
    [704] = 704,
    [705] = 705,
    [706] = 706,
    [707] = 707,
    [708] = 708,
    [709] = 709,
    [710] = 710,
    [711] = 711,
    [712] = 712,
    [713] = 713,
    [714] = 714,
    [715] = 715,
    [716] = 716,
    [717] = 717,
    [718] = 718,
    [719] = 719,
    [720] = 720,
    [721] = 721,
    [722] = 722,
    [723] = 723,
    [724] = 724,
    [725] = 725,
    [726] = 726,
    [727] = 727,
    [728] = 728,
    [729] = 729,
    [730] = 730,
    [731] = 731,
    [732] = 732,
    [733] = 733,
    [734] = 734,
    [735] = 735,
    [736] = 736,
    [737] = 737,
    [738] = 738,
    [739] = 739,
    [740] = 740,
    [741] = 741,
    [742] = 742,
    [743] = 743,
    [744] = 744,
    [745] = 745,
    [746] = 746,
    [747] = 747,
    [748] = 748,
    [749] = 749,
    [750] = 750,
    [751] = 751,
    [752] = 752,
    [753] = 753,
    [754] = 594,
    [755] = 561,
    [756] = 557,
    [757] = 757,
    [758] = 758,
    [759] = 759,
    [760] = 594,
    [761] = 561,
    [762] = 557,
    [763] = 763,
    [764] = 758,
    [765] = 758,
    [766] = 594,
    [767] = 758,
    [768] = 768,
    [769] = 769,
    [770] = 770,
    [771] = 771,
};

static TSCharacterRange sym_number_literal_character_set_13[] = {
    { '0', '9' },
    { 'B', 'B' },
    { 'D', 'D' },
    { 'F', 'F' },
    { 'L', 'L' },
    { 'U', 'U' },
    { 'W', 'W' },
    { 'b', 'b' },
    { 'd', 'd' },
    { 'f', 'f' },
    { 'l', 'l' },
    { 'u', 'u' },
    { 'w', 'w' },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(566);
            ADVANCE_MAP(
                '"', 641,
                '#', 169,
                '$', 626,
                '%', 635,
                '\'', 643,
                '(', 636,
                ')', 637,
                '*', 633,
                '+', 629,
                ',', 619,
                '-', 631,
                '/', 634,
                ':', 726,
                ';', 727,
                '<', 614,
                '=', 751,
                '>', 616,
                '@', 750,
                'F', 645,
                'L', 639,
                'O', 654,
                'T', 646,
                'V', 647,
                '[', 781,
            );
            if(lookahead == '\\')
                SKIP(559);
            if(lookahead == ']')
                ADVANCE(782);
            if(lookahead == '^')
                ADVANCE(625);
            if(lookahead == 'a')
                ADVANCE(655);
            if(lookahead == 'b')
                ADVANCE(662);
            if(lookahead == 'c')
                ADVANCE(649);
            if(lookahead == 'd')
                ADVANCE(658);
            if(lookahead == 'e')
                ADVANCE(664);
            if(lookahead == 'f')
                ADVANCE(650);
            if(lookahead == 'g')
                ADVANCE(660);
            if(lookahead == 'h')
                ADVANCE(665);
            if(lookahead == 'i')
                ADVANCE(663);
            if(lookahead == 'l')
                ADVANCE(666);
            if(lookahead == 'm')
                ADVANCE(648);
            if(lookahead == 'n')
                ADVANCE(652);
            if(lookahead == 'o')
                ADVANCE(657);
            if(lookahead == 'p')
                ADVANCE(667);
            if(lookahead == 'r')
                ADVANCE(651);
            if(lookahead == 's')
                ADVANCE(659);
            if(lookahead == 't')
                ADVANCE(668);
            if(lookahead == 'u')
                ADVANCE(661);
            if(lookahead == 'v')
                ADVANCE(653);
            if(lookahead == 'w')
                ADVANCE(656);
            if(lookahead == '{')
                ADVANCE(718);
            if(lookahead == '|')
                ADVANCE(624);
            if(lookahead == '}')
                ADVANCE(719);
            if(lookahead == '~')
                ADVANCE(638);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(644);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(75);
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(75);
            if(lookahead == '\r')
                SKIP(1);
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(77);
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(77);
            if(lookahead == '\r')
                SKIP(3);
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(64);
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(64);
            if(lookahead == '\r')
                SKIP(5);
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(79);
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(79);
            if(lookahead == '\r')
                SKIP(7);
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(80);
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(80);
            if(lookahead == '\r')
                SKIP(9);
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(69);
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(69);
            if(lookahead == '\r')
                SKIP(11);
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(81);
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(81);
            if(lookahead == '\r')
                SKIP(13);
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(82);
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(82);
            if(lookahead == '\r')
                SKIP(15);
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(85);
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(85);
            if(lookahead == '\r')
                SKIP(17);
            END_STATE();
        case 19:
            if(lookahead == '\n')
                SKIP(63);
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(63);
            if(lookahead == '\r')
                SKIP(19);
            END_STATE();
        case 21:
            if(lookahead == '\n')
                SKIP(86);
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(86);
            if(lookahead == '\r')
                SKIP(21);
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(65);
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(65);
            if(lookahead == '\r')
                SKIP(23);
            END_STATE();
        case 25:
            if(lookahead == '\n')
                SKIP(67);
            END_STATE();
        case 26:
            if(lookahead == '\n')
                SKIP(67);
            if(lookahead == '\r')
                SKIP(25);
            END_STATE();
        case 27:
            if(lookahead == '\n')
                SKIP(66);
            END_STATE();
        case 28:
            if(lookahead == '\n')
                SKIP(66);
            if(lookahead == '\r')
                SKIP(27);
            END_STATE();
        case 29:
            if(lookahead == '\n')
                SKIP(68);
            END_STATE();
        case 30:
            if(lookahead == '\n')
                SKIP(68);
            if(lookahead == '\r')
                SKIP(29);
            END_STATE();
        case 31:
            if(lookahead == '\n')
                SKIP(88);
            END_STATE();
        case 32:
            if(lookahead == '\n')
                SKIP(88);
            if(lookahead == '\r')
                SKIP(31);
            END_STATE();
        case 33:
            if(lookahead == '\n')
                SKIP(83);
            END_STATE();
        case 34:
            if(lookahead == '\n')
                SKIP(83);
            if(lookahead == '\r')
                SKIP(33);
            END_STATE();
        case 35:
            if(lookahead == '\n')
                SKIP(84);
            END_STATE();
        case 36:
            if(lookahead == '\n')
                SKIP(84);
            if(lookahead == '\r')
                SKIP(35);
            END_STATE();
        case 37:
            if(lookahead == '\n')
                SKIP(87);
            END_STATE();
        case 38:
            if(lookahead == '\n')
                SKIP(87);
            if(lookahead == '\r')
                SKIP(37);
            END_STATE();
        case 39:
            if(lookahead == '\n')
                SKIP(70);
            END_STATE();
        case 40:
            if(lookahead == '\n')
                SKIP(70);
            if(lookahead == '\r')
                SKIP(39);
            END_STATE();
        case 41:
            if(lookahead == '\n')
                SKIP(43);
            END_STATE();
        case 42:
            if(lookahead == '\n')
                SKIP(43);
            if(lookahead == '\r')
                SKIP(41);
            END_STATE();
        case 43:
            if(lookahead == '\n')
                ADVANCE(1101);
            if(lookahead == '\r')
                ADVANCE(43);
            if(lookahead == '(')
                ADVANCE(636);
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '@')
                ADVANCE(749);
            if(lookahead == '\\')
                SKIP(42);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(43);
            END_STATE();
        case 44:
            if(lookahead == '\n')
                ADVANCE(1105);
            if(lookahead == '\r')
                ADVANCE(1102);
            if(lookahead == '\\')
                ADVANCE(1103);
            if(lookahead != 0)
                ADVANCE(1106);
            END_STATE();
        case 45:
            if(lookahead == '\n')
                SKIP(89);
            END_STATE();
        case 46:
            if(lookahead == '\n')
                SKIP(89);
            if(lookahead == '\r')
                SKIP(45);
            END_STATE();
        case 47:
            if(lookahead == '\n')
                ADVANCE(703);
            if(lookahead == '\r')
                ADVANCE(50);
            if(lookahead == '/')
                ADVANCE(713);
            if(lookahead == '\\')
                ADVANCE(710);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(93);
            if(lookahead != 0)
                ADVANCE(714);
            END_STATE();
        case 48:
            if(lookahead == '\n')
                ADVANCE(703);
            if(lookahead == '\r')
                ADVANCE(49);
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == '\\')
                SKIP(54);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(91);
            END_STATE();
        case 49:
            if(lookahead == '\n')
                ADVANCE(703);
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == '\\')
                SKIP(54);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(91);
            END_STATE();
        case 50:
            if(lookahead == '\n')
                ADVANCE(703);
            if(lookahead == '/')
                ADVANCE(713);
            if(lookahead == '\\')
                ADVANCE(710);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(93);
            if(lookahead != 0)
                ADVANCE(714);
            END_STATE();
        case 51:
            if(lookahead == '\n')
                SKIP(90);
            END_STATE();
        case 52:
            if(lookahead == '\n')
                SKIP(90);
            if(lookahead == '\r')
                SKIP(51);
            END_STATE();
        case 53:
            if(lookahead == '\n')
                SKIP(91);
            END_STATE();
        case 54:
            if(lookahead == '\n')
                SKIP(91);
            if(lookahead == '\r')
                SKIP(53);
            END_STATE();
        case 55:
            if(lookahead == '\n')
                ADVANCE(72);
            if(lookahead == '\r')
                ADVANCE(56);
            if(lookahead == '*')
                ADVANCE(1112);
            if(lookahead != 0)
                ADVANCE(73);
            END_STATE();
        case 56:
            if(lookahead == '\n')
                ADVANCE(72);
            if(lookahead == '*')
                ADVANCE(1112);
            if(lookahead != 0)
                ADVANCE(73);
            END_STATE();
        case 57:
            if(lookahead == '\n')
                SKIP(78);
            END_STATE();
        case 58:
            if(lookahead == '\n')
                SKIP(78);
            if(lookahead == '\r')
                SKIP(57);
            END_STATE();
        case 59:
            if(lookahead == '\n')
                SKIP(92);
            END_STATE();
        case 60:
            if(lookahead == '\n')
                SKIP(92);
            if(lookahead == '\r')
                SKIP(59);
            END_STATE();
        case 61:
            if(lookahead == '\r')
                ADVANCE(1107);
            if(lookahead == '\\')
                ADVANCE(1103);
            if(lookahead != 0)
                ADVANCE(1106);
            END_STATE();
        case 62:
            if(lookahead == ' ')
                ADVANCE(320);
            END_STATE();
        case 63:
            ADVANCE_MAP(
                '"', 641,
                '$', 626,
                '%', 635,
                '(', 636,
                ')', 637,
                '*', 633,
                '+', 629,
                ',', 619,
                '-', 631,
                '/', 634,
                ':', 726,
                ';', 727,
                '<', 614,
                '>', 616,
                '@', 749,
                'L', 639,
            );
            if(lookahead == '\\')
                SKIP(20);
            if(lookahead == ']')
                ADVANCE(782);
            if(lookahead == '^')
                ADVANCE(625);
            if(lookahead == 'a')
                ADVANCE(147);
            if(lookahead == 'b')
                ADVANCE(287);
            if(lookahead == 'c')
                ADVANCE(391);
            if(lookahead == 'e')
                ADVANCE(327);
            if(lookahead == 'i')
                ADVANCE(369);
            if(lookahead == 'l')
                ADVANCE(393);
            if(lookahead == 'm')
                ADVANCE(130);
            if(lookahead == 'p')
                ADVANCE(374);
            if(lookahead == 'r')
                ADVANCE(209);
            if(lookahead == 's')
                ADVANCE(503);
            if(lookahead == 'u')
                ADVANCE(457);
            if(lookahead == '{')
                ADVANCE(718);
            if(lookahead == '|')
                ADVANCE(624);
            if(lookahead == '}')
                ADVANCE(719);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(63);
            END_STATE();
        case 64:
            ADVANCE_MAP(
                '"', 641,
                '\'', 643,
                '(', 636,
                '+', 630,
                '-', 632,
                '.', 552,
                '/', 71,
                '0', 680,
                ':', 102,
                'F', 836,
                'L', 640,
                'O', 866,
                'T', 841,
                'V', 844,
            );
            if(lookahead == '\\')
                SKIP(6);
            if(lookahead == 'a')
                ADVANCE(980);
            if(lookahead == 'b')
                ADVANCE(1001);
            if(lookahead == 'c')
                ADVANCE(938);
            if(lookahead == 'd')
                ADVANCE(997);
            if(lookahead == 'f')
                ADVANCE(941);
            if(lookahead == 'i')
                ADVANCE(984);
            if(lookahead == 'l')
                ADVANCE(999);
            if(lookahead == 'm')
                ADVANCE(848);
            if(lookahead == 'o')
                ADVANCE(878);
            if(lookahead == 's')
                ADVANCE(895);
            if(lookahead == 'u')
                ADVANCE(949);
            if(lookahead == 'w')
                ADVANCE(872);
            if(lookahead == '~')
                ADVANCE(638);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(64);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(684);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 65:
            ADVANCE_MAP(
                '"', 641,
                '\'', 643,
                '(', 636,
                '+', 630,
                '-', 632,
                '.', 552,
                '/', 71,
                '0', 680,
                ':', 102,
                'F', 836,
                'L', 640,
                'T', 841,
            );
            if(lookahead == '\\')
                SKIP(24);
            if(lookahead == '~')
                ADVANCE(638);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(65);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(684);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 66:
            if(lookahead == '"')
                ADVANCE(641);
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == 'L')
                ADVANCE(640);
            if(lookahead == '\\')
                SKIP(28);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(66);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 67:
            if(lookahead == '$')
                ADVANCE(626);
            if(lookahead == ')')
                ADVANCE(637);
            if(lookahead == ',')
                ADVANCE(619);
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(725);
            if(lookahead == ';')
                ADVANCE(727);
            if(lookahead == '>')
                ADVANCE(615);
            if(lookahead == '\\')
                SKIP(26);
            if(lookahead == ']')
                ADVANCE(782);
            if(lookahead == '^')
                ADVANCE(625);
            if(lookahead == 'i')
                ADVANCE(339);
            if(lookahead == 'o')
                ADVANCE(522);
            if(lookahead == '|')
                ADVANCE(624);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(67);
            END_STATE();
        case 68:
            ADVANCE_MAP(
                '(', 636,
                ')', 637,
                ',', 619,
                '/', 71,
                ':', 102,
                ';', 727,
                '<', 613,
                '>', 615,
                '@', 749,
            );
            if(lookahead == '\\')
                SKIP(30);
            if(lookahead == '}')
                ADVANCE(719);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(68);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 69:
            ADVANCE_MAP(
                '(', 636,
                ',', 619,
                '/', 71,
                ':', 102,
                '>', 615,
                '@', 749,
                'O', 866,
                'V', 844,
            );
            if(lookahead == '\\')
                SKIP(12);
            if(lookahead == 'a')
                ADVANCE(980);
            if(lookahead == 'b')
                ADVANCE(1001);
            if(lookahead == 'c')
                ADVANCE(938);
            if(lookahead == 'd')
                ADVANCE(997);
            if(lookahead == 'f')
                ADVANCE(941);
            if(lookahead == 'i')
                ADVANCE(984);
            if(lookahead == 'l')
                ADVANCE(999);
            if(lookahead == 'm')
                ADVANCE(848);
            if(lookahead == 'o')
                ADVANCE(878);
            if(lookahead == 's')
                ADVANCE(895);
            if(lookahead == 'u')
                ADVANCE(949);
            if(lookahead == 'w')
                ADVANCE(872);
            if(lookahead == '}')
                ADVANCE(719);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(69);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 70:
            if(lookahead == ')')
                ADVANCE(637);
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == '\\')
                SKIP(40);
            if(lookahead == 'i')
                ADVANCE(344);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(70);
            END_STATE();
        case 71:
            if(lookahead == '*')
                ADVANCE(1108);
            if(lookahead == '/')
                ADVANCE(1097);
            END_STATE();
        case 72:
            if(lookahead == '*')
                ADVANCE(1112);
            if(lookahead == '/')
                ADVANCE(74);
            if(lookahead == '\\')
                ADVANCE(55);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(72);
            if(lookahead != 0)
                ADVANCE(73);
            END_STATE();
        case 73:
            if(lookahead == '*')
                ADVANCE(1112);
            if(lookahead != 0)
                ADVANCE(73);
            END_STATE();
        case 74:
            if(lookahead == '*')
                ADVANCE(1109);
            if(lookahead == '/')
                ADVANCE(1098);
            if(lookahead != 0)
                ADVANCE(73);
            END_STATE();
        case 75:
            ADVANCE_MAP(
                ',', 619,
                '/', 71,
                ':', 102,
                '<', 613,
                '>', 615,
                '@', 749,
                'O', 866,
                'V', 844,
            );
            if(lookahead == '\\')
                SKIP(2);
            if(lookahead == ']')
                ADVANCE(782);
            if(lookahead == 'a')
                ADVANCE(867);
            if(lookahead == 'b')
                ADVANCE(943);
            if(lookahead == 'c')
                ADVANCE(936);
            if(lookahead == 'd')
                ADVANCE(997);
            if(lookahead == 'e')
                ADVANCE(982);
            if(lookahead == 'f')
                ADVANCE(847);
            if(lookahead == 'i')
                ADVANCE(971);
            if(lookahead == 'l')
                ADVANCE(999);
            if(lookahead == 'm')
                ADVANCE(848);
            if(lookahead == 'n')
                ADVANCE(853);
            if(lookahead == 'o')
                ADVANCE(877);
            if(lookahead == 'p')
                ADVANCE(1020);
            if(lookahead == 'r')
                ADVANCE(916);
            if(lookahead == 's')
                ADVANCE(893);
            if(lookahead == 't')
                ADVANCE(1090);
            if(lookahead == 'u')
                ADVANCE(948);
            if(lookahead == 'v')
                ADVANCE(864);
            if(lookahead == 'w')
                ADVANCE(872);
            if(lookahead == '{')
                ADVANCE(718);
            if(lookahead == '}')
                ADVANCE(719);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(75);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 76:
            if(lookahead == '.')
                ADVANCE(552);
            if(lookahead == '0')
                ADVANCE(677);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(679);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(693);
            END_STATE();
        case 77:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '@')
                ADVANCE(749);
            if(lookahead == 'O')
                ADVANCE(866);
            if(lookahead == 'V')
                ADVANCE(844);
            if(lookahead == '\\')
                SKIP(4);
            if(lookahead == 'a')
                ADVANCE(867);
            if(lookahead == 'b')
                ADVANCE(943);
            if(lookahead == 'c')
                ADVANCE(936);
            if(lookahead == 'd')
                ADVANCE(997);
            if(lookahead == 'e')
                ADVANCE(982);
            if(lookahead == 'f')
                ADVANCE(847);
            if(lookahead == 'i')
                ADVANCE(971);
            if(lookahead == 'l')
                ADVANCE(999);
            if(lookahead == 'm')
                ADVANCE(848);
            if(lookahead == 'n')
                ADVANCE(853);
            if(lookahead == 'o')
                ADVANCE(877);
            if(lookahead == 'r')
                ADVANCE(916);
            if(lookahead == 's')
                ADVANCE(893);
            if(lookahead == 't')
                ADVANCE(1090);
            if(lookahead == 'u')
                ADVANCE(948);
            if(lookahead == 'v')
                ADVANCE(864);
            if(lookahead == 'w')
                ADVANCE(872);
            if(lookahead == '}')
                ADVANCE(719);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(77);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 78:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '@')
                ADVANCE(749);
            if(lookahead == 'O')
                ADVANCE(866);
            if(lookahead == 'V')
                ADVANCE(844);
            if(lookahead == '\\')
                SKIP(58);
            if(lookahead == 'a')
                ADVANCE(867);
            if(lookahead == 'b')
                ADVANCE(943);
            if(lookahead == 'c')
                ADVANCE(936);
            if(lookahead == 'd')
                ADVANCE(997);
            if(lookahead == 'e')
                ADVANCE(982);
            if(lookahead == 'f')
                ADVANCE(941);
            if(lookahead == 'i')
                ADVANCE(971);
            if(lookahead == 'l')
                ADVANCE(999);
            if(lookahead == 'm')
                ADVANCE(848);
            if(lookahead == 'n')
                ADVANCE(853);
            if(lookahead == 'o')
                ADVANCE(877);
            if(lookahead == 'r')
                ADVANCE(916);
            if(lookahead == 's')
                ADVANCE(893);
            if(lookahead == 't')
                ADVANCE(1090);
            if(lookahead == 'u')
                ADVANCE(948);
            if(lookahead == 'v')
                ADVANCE(864);
            if(lookahead == 'w')
                ADVANCE(872);
            if(lookahead == '}')
                ADVANCE(719);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(78);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 79:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '@')
                ADVANCE(749);
            if(lookahead == 'O')
                ADVANCE(866);
            if(lookahead == 'V')
                ADVANCE(844);
            if(lookahead == '\\')
                SKIP(8);
            if(lookahead == 'a')
                ADVANCE(980);
            if(lookahead == 'b')
                ADVANCE(943);
            if(lookahead == 'c')
                ADVANCE(859);
            if(lookahead == 'd')
                ADVANCE(913);
            if(lookahead == 'e')
                ADVANCE(983);
            if(lookahead == 'f')
                ADVANCE(941);
            if(lookahead == 'i')
                ADVANCE(984);
            if(lookahead == 'l')
                ADVANCE(999);
            if(lookahead == 'm')
                ADVANCE(848);
            if(lookahead == 'o')
                ADVANCE(878);
            if(lookahead == 's')
                ADVANCE(893);
            if(lookahead == 'u')
                ADVANCE(948);
            if(lookahead == 'w')
                ADVANCE(872);
            if(lookahead == '}')
                ADVANCE(719);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(79);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 80:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '@')
                ADVANCE(749);
            if(lookahead == 'O')
                ADVANCE(866);
            if(lookahead == 'V')
                ADVANCE(844);
            if(lookahead == '\\')
                SKIP(10);
            if(lookahead == 'a')
                ADVANCE(980);
            if(lookahead == 'b')
                ADVANCE(943);
            if(lookahead == 'c')
                ADVANCE(938);
            if(lookahead == 'd')
                ADVANCE(997);
            if(lookahead == 'e')
                ADVANCE(983);
            if(lookahead == 'f')
                ADVANCE(941);
            if(lookahead == 'i')
                ADVANCE(984);
            if(lookahead == 'l')
                ADVANCE(999);
            if(lookahead == 'm')
                ADVANCE(848);
            if(lookahead == 'o')
                ADVANCE(878);
            if(lookahead == 's')
                ADVANCE(893);
            if(lookahead == 'u')
                ADVANCE(948);
            if(lookahead == 'w')
                ADVANCE(872);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(80);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 81:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '@')
                ADVANCE(282);
            if(lookahead == '\\')
                SKIP(14);
            if(lookahead == 'a')
                ADVANCE(980);
            if(lookahead == 'b')
                ADVANCE(1001);
            if(lookahead == 'c')
                ADVANCE(937);
            if(lookahead == 'd')
                ADVANCE(997);
            if(lookahead == 'e')
                ADVANCE(983);
            if(lookahead == 'f')
                ADVANCE(941);
            if(lookahead == 'i')
                ADVANCE(984);
            if(lookahead == 'l')
                ADVANCE(999);
            if(lookahead == 'o')
                ADVANCE(878);
            if(lookahead == 's')
                ADVANCE(895);
            if(lookahead == 't')
                ADVANCE(1092);
            if(lookahead == 'u')
                ADVANCE(949);
            if(lookahead == 'w')
                ADVANCE(872);
            if(lookahead == '}')
                ADVANCE(719);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(81);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 82:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == 'O')
                ADVANCE(866);
            if(lookahead == 'V')
                ADVANCE(844);
            if(lookahead == '\\')
                SKIP(16);
            if(lookahead == 'a')
                ADVANCE(980);
            if(lookahead == 'b')
                ADVANCE(1001);
            if(lookahead == 'c')
                ADVANCE(937);
            if(lookahead == 'd')
                ADVANCE(997);
            if(lookahead == 'e')
                ADVANCE(981);
            if(lookahead == 'f')
                ADVANCE(961);
            if(lookahead == 'i')
                ADVANCE(992);
            if(lookahead == 'l')
                ADVANCE(999);
            if(lookahead == 'o')
                ADVANCE(878);
            if(lookahead == 's')
                ADVANCE(894);
            if(lookahead == 't')
                ADVANCE(1093);
            if(lookahead == 'u')
                ADVANCE(948);
            if(lookahead == 'v')
                ADVANCE(865);
            if(lookahead == 'w')
                ADVANCE(873);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(82);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 83:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == 'O')
                ADVANCE(866);
            if(lookahead == '\\')
                SKIP(34);
            if(lookahead == 'm')
                ADVANCE(1077);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(83);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 84:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == 'O')
                ADVANCE(866);
            if(lookahead == '\\')
                SKIP(36);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(84);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 85:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '\\')
                SKIP(18);
            if(lookahead == 'b')
                ADVANCE(1001);
            if(lookahead == 'c')
                ADVANCE(938);
            if(lookahead == 'd')
                ADVANCE(997);
            if(lookahead == 'f')
                ADVANCE(941);
            if(lookahead == 'i')
                ADVANCE(984);
            if(lookahead == 'l')
                ADVANCE(999);
            if(lookahead == 'o')
                ADVANCE(878);
            if(lookahead == 's')
                ADVANCE(895);
            if(lookahead == 'u')
                ADVANCE(949);
            if(lookahead == 'w')
                ADVANCE(872);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(85);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 86:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '\\')
                SKIP(22);
            if(lookahead == 'b')
                ADVANCE(1001);
            if(lookahead == 'c')
                ADVANCE(938);
            if(lookahead == 'i')
                ADVANCE(984);
            if(lookahead == 'l')
                ADVANCE(1007);
            if(lookahead == 's')
                ADVANCE(939);
            if(lookahead == 'u')
                ADVANCE(949);
            if(lookahead == 'w')
                ADVANCE(873);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(86);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 87:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '\\')
                SKIP(38);
            if(lookahead == 't')
                ADVANCE(1028);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(87);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 88:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(725);
            if(lookahead == ';')
                ADVANCE(727);
            if(lookahead == '@')
                ADVANCE(183);
            if(lookahead == '\\')
                SKIP(32);
            if(lookahead == '{')
                ADVANCE(718);
            if(lookahead == '}')
                ADVANCE(719);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(88);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 89:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ';')
                ADVANCE(727);
            if(lookahead == '\\')
                SKIP(46);
            if(lookahead == 's')
                ADVANCE(1084);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(89);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 90:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == '\\')
                SKIP(52);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(90);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(642);
            END_STATE();
        case 91:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == '\\')
                SKIP(54);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(91);
            END_STATE();
        case 92:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == '\\')
                SKIP(60);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(92);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(644);
            END_STATE();
        case 93:
            if(lookahead == '/')
                ADVANCE(713);
            if(lookahead == '\\')
                ADVANCE(710);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(93);
            if(lookahead != 0)
                ADVANCE(714);
            END_STATE();
        case 94:
            if(lookahead == '1')
                ADVANCE(100);
            if(lookahead == '3')
                ADVANCE(96);
            if(lookahead == '6')
                ADVANCE(98);
            if(lookahead == '8')
                ADVANCE(580);
            END_STATE();
        case 95:
            if(lookahead == '1')
                ADVANCE(101);
            if(lookahead == '3')
                ADVANCE(97);
            if(lookahead == '6')
                ADVANCE(99);
            if(lookahead == '8')
                ADVANCE(588);
            if(lookahead == 'e')
                ADVANCE(439);
            END_STATE();
        case 96:
            if(lookahead == '2')
                ADVANCE(594);
            END_STATE();
        case 97:
            if(lookahead == '2')
                ADVANCE(575);
            END_STATE();
        case 98:
            if(lookahead == '4')
                ADVANCE(597);
            END_STATE();
        case 99:
            if(lookahead == '4')
                ADVANCE(578);
            END_STATE();
        case 100:
            if(lookahead == '6')
                ADVANCE(591);
            END_STATE();
        case 101:
            if(lookahead == '6')
                ADVANCE(569);
            END_STATE();
        case 102:
            if(lookahead == ':')
                ADVANCE(608);
            END_STATE();
        case 103:
            if(lookahead == '<')
                ADVANCE(628);
            END_STATE();
        case 104:
            if(lookahead == 'B')
                ADVANCE(138);
            END_STATE();
        case 105:
            if(lookahead == 'E')
                ADVANCE(669);
            END_STATE();
        case 106:
            if(lookahead == 'E')
                ADVANCE(671);
            END_STATE();
        case 107:
            if(lookahead == 'L')
                ADVANCE(108);
            END_STATE();
        case 108:
            if(lookahead == 'S')
                ADVANCE(106);
            END_STATE();
        case 109:
            if(lookahead == 'U')
                ADVANCE(105);
            END_STATE();
        case 110:
            if(lookahead == '_')
                ADVANCE(318);
            END_STATE();
        case 111:
            if(lookahead == '_')
                ADVANCE(372);
            END_STATE();
        case 112:
            if(lookahead == '_')
                ADVANCE(322);
            END_STATE();
        case 113:
            if(lookahead == 'a')
                ADVANCE(459);
            if(lookahead == 'o')
                ADVANCE(334);
            if(lookahead == 'u')
                ADVANCE(460);
            END_STATE();
        case 114:
            if(lookahead == 'a')
                ADVANCE(541);
            END_STATE();
        case 115:
            if(lookahead == 'a')
                ADVANCE(258);
            END_STATE();
        case 116:
            if(lookahead == 'a')
                ADVANCE(288);
            END_STATE();
        case 117:
            if(lookahead == 'a')
                ADVANCE(493);
            END_STATE();
        case 118:
            if(lookahead == 'a')
                ADVANCE(182);
            END_STATE();
        case 119:
            if(lookahead == 'a')
                ADVANCE(445);
            END_STATE();
        case 120:
            if(lookahead == 'a')
                ADVANCE(300);
            END_STATE();
        case 121:
            if(lookahead == 'a')
                ADVANCE(417);
            END_STATE();
        case 122:
            if(lookahead == 'a')
                ADVANCE(447);
            END_STATE();
        case 123:
            if(lookahead == 'a')
                ADVANCE(528);
            END_STATE();
        case 124:
            if(lookahead == 'a')
                ADVANCE(418);
            END_STATE();
        case 125:
            if(lookahead == 'a')
                ADVANCE(302);
            END_STATE();
        case 126:
            if(lookahead == 'a')
                ADVANCE(301);
            END_STATE();
        case 127:
            if(lookahead == 'a')
                ADVANCE(341);
            END_STATE();
        case 128:
            if(lookahead == 'a')
                ADVANCE(473);
            END_STATE();
        case 129:
            if(lookahead == 'a')
                ADVANCE(422);
            END_STATE();
        case 130:
            if(lookahead == 'a')
                ADVANCE(354);
            if(lookahead == 'i')
                ADVANCE(424);
            END_STATE();
        case 131:
            if(lookahead == 'a')
                ADVANCE(354);
            if(lookahead == 'o')
                ADVANCE(175);
            END_STATE();
        case 132:
            if(lookahead == 'a')
                ADVANCE(504);
            END_STATE();
        case 133:
            if(lookahead == 'a')
                ADVANCE(506);
            END_STATE();
        case 134:
            if(lookahead == 'a')
                ADVANCE(165);
            END_STATE();
        case 135:
            if(lookahead == 'a')
                ADVANCE(330);
            END_STATE();
        case 136:
            if(lookahead == 'a')
                ADVANCE(331);
            END_STATE();
        case 137:
            if(lookahead == 'a')
                ADVANCE(163);
            END_STATE();
        case 138:
            if(lookahead == 'a')
                ADVANCE(465);
            END_STATE();
        case 139:
            if(lookahead == 'a')
                ADVANCE(317);
            END_STATE();
        case 140:
            if(lookahead == 'a')
                ADVANCE(317);
            if(lookahead == 'o')
                ADVANCE(277);
            END_STATE();
        case 141:
            if(lookahead == 'a')
                ADVANCE(291);
            END_STATE();
        case 142:
            if(lookahead == 'a')
                ADVANCE(529);
            END_STATE();
        case 143:
            if(lookahead == 'a')
                ADVANCE(514);
            END_STATE();
        case 144:
            if(lookahead == 'a')
                ADVANCE(292);
            END_STATE();
        case 145:
            if(lookahead == 'a')
                ADVANCE(153);
            END_STATE();
        case 146:
            if(lookahead == 'b')
                ADVANCE(466);
            if(lookahead == 'l')
                ADVANCE(271);
            END_STATE();
        case 147:
            if(lookahead == 'b')
                ADVANCE(466);
            if(lookahead == 't')
                ADVANCE(491);
            END_STATE();
        case 148:
            if(lookahead == 'b')
                ADVANCE(306);
            END_STATE();
        case 149:
            if(lookahead == 'b')
                ADVANCE(532);
            END_STATE();
        case 150:
            if(lookahead == 'b')
                ADVANCE(308);
            END_STATE();
        case 151:
            if(lookahead == 'b')
                ADVANCE(309);
            END_STATE();
        case 152:
            if(lookahead == 'b')
                ADVANCE(314);
            END_STATE();
        case 153:
            if(lookahead == 'b')
                ADVANCE(315);
            END_STATE();
        case 154:
            if(lookahead == 'c')
                ADVANCE(773);
            if(lookahead == 's')
                ADVANCE(261);
            END_STATE();
        case 155:
            if(lookahead == 'c')
                ADVANCE(260);
            END_STATE();
        case 156:
            if(lookahead == 'c')
                ADVANCE(499);
            END_STATE();
        case 157:
            if(lookahead == 'c')
                ADVANCE(120);
            END_STATE();
        case 158:
            if(lookahead == 'c')
                ADVANCE(120);
            if(lookahead == 'n')
                ADVANCE(250);
            END_STATE();
        case 159:
            if(lookahead == 'c')
                ADVANCE(120);
            if(lookahead == 'n')
                ADVANCE(256);
            END_STATE();
        case 160:
            if(lookahead == 'c')
                ADVANCE(213);
            END_STATE();
        case 161:
            if(lookahead == 'c')
                ADVANCE(477);
            END_STATE();
        case 162:
            if(lookahead == 'c')
                ADVANCE(480);
            END_STATE();
        case 163:
            if(lookahead == 'c')
                ADVANCE(483);
            END_STATE();
        case 164:
            if(lookahead == 'c')
                ADVANCE(196);
            END_STATE();
        case 165:
            if(lookahead == 'c')
                ADVANCE(206);
            END_STATE();
        case 166:
            if(lookahead == 'c')
                ADVANCE(132);
            END_STATE();
        case 167:
            if(lookahead == 'c')
                ADVANCE(497);
            END_STATE();
        case 168:
            if(lookahead == 'c')
                ADVANCE(512);
            END_STATE();
        case 169:
            if(lookahead == 'd')
                ADVANCE(704);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(550);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(709);
            END_STATE();
        case 170:
            if(lookahead == 'd')
                ADVANCE(728);
            END_STATE();
        case 171:
            if(lookahead == 'd')
                ADVANCE(584);
            END_STATE();
        case 172:
            if(lookahead == 'd')
                ADVANCE(789);
            END_STATE();
        case 173:
            if(lookahead == 'd')
                ADVANCE(743);
            END_STATE();
        case 174:
            if(lookahead == 'd')
                ADVANCE(62);
            END_STATE();
        case 175:
            if(lookahead == 'd')
                ADVANCE(531);
            END_STATE();
        case 176:
            if(lookahead == 'd')
                ADVANCE(402);
            if(lookahead == 'l')
                ADVANCE(384);
            END_STATE();
        case 177:
            if(lookahead == 'd')
                ADVANCE(223);
            END_STATE();
        case 178:
            if(lookahead == 'd')
                ADVANCE(210);
            if(lookahead == 'i')
                ADVANCE(172);
            if(lookahead == 'n')
                ADVANCE(135);
            if(lookahead == 'p')
                ADVANCE(435);
            END_STATE();
        case 179:
            if(lookahead == 'd')
                ADVANCE(210);
            if(lookahead == 'i')
                ADVANCE(172);
            if(lookahead == 'p')
                ADVANCE(435);
            END_STATE();
        case 180:
            if(lookahead == 'd')
                ADVANCE(222);
            END_STATE();
        case 181:
            if(lookahead == 'd')
                ADVANCE(235);
            END_STATE();
        case 182:
            if(lookahead == 'd')
                ADVANCE(381);
            END_STATE();
        case 183:
            if(lookahead == 'd')
                ADVANCE(241);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(244);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(537);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(787);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(806);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(178);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(104);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(539);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(601);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(752);
            END_STATE();
        case 193:
            if(lookahead == 'e')
                ADVANCE(817);
            END_STATE();
        case 194:
            if(lookahead == 'e')
                ADVANCE(775);
            END_STATE();
        case 195:
            if(lookahead == 'e')
                ADVANCE(804);
            END_STATE();
        case 196:
            if(lookahead == 'e')
                ADVANCE(620);
            END_STATE();
        case 197:
            if(lookahead == 'e')
                ADVANCE(753);
            END_STATE();
        case 198:
            if(lookahead == 'e')
                ADVANCE(799);
            END_STATE();
        case 199:
            if(lookahead == 'e')
                ADVANCE(737);
            END_STATE();
        case 200:
            if(lookahead == 'e')
                ADVANCE(757);
            END_STATE();
        case 201:
            if(lookahead == 'e')
                ADVANCE(755);
            END_STATE();
        case 202:
            if(lookahead == 'e')
                ADVANCE(603);
            END_STATE();
        case 203:
            if(lookahead == 'e')
                ADVANCE(770);
            END_STATE();
        case 204:
            if(lookahead == 'e')
                ADVANCE(179);
            END_STATE();
        case 205:
            if(lookahead == 'e')
                ADVANCE(813);
            END_STATE();
        case 206:
            if(lookahead == 'e')
                ADVANCE(723);
            END_STATE();
        case 207:
            if(lookahead == 'e')
                ADVANCE(819);
            END_STATE();
        case 208:
            if(lookahead == 'e')
                ADVANCE(110);
            END_STATE();
        case 209:
            if(lookahead == 'e')
                ADVANCE(118);
            END_STATE();
        case 210:
            if(lookahead == 'e')
                ADVANCE(243);
            END_STATE();
        case 211:
            if(lookahead == 'e')
                ADVANCE(444);
            END_STATE();
        case 212:
            if(lookahead == 'e')
                ADVANCE(246);
            END_STATE();
        case 213:
            if(lookahead == 'e')
                ADVANCE(409);
            END_STATE();
        case 214:
            if(lookahead == 'e')
                ADVANCE(171);
            END_STATE();
        case 215:
            if(lookahead == 'e')
                ADVANCE(305);
            END_STATE();
        case 216:
            if(lookahead == 'e')
                ADVANCE(448);
            END_STATE();
        case 217:
            if(lookahead == 'e')
                ADVANCE(544);
            END_STATE();
        case 218:
            if(lookahead == 'e')
                ADVANCE(449);
            END_STATE();
        case 219:
            if(lookahead == 'e')
                ADVANCE(174);
            END_STATE();
        case 220:
            if(lookahead == 'e')
                ADVANCE(364);
            END_STATE();
        case 221:
            if(lookahead == 'e')
                ADVANCE(450);
            END_STATE();
        case 222:
            if(lookahead == 'e')
                ADVANCE(451);
            END_STATE();
        case 223:
            if(lookahead == 'e')
                ADVANCE(419);
            END_STATE();
        case 224:
            if(lookahead == 'e')
                ADVANCE(453);
            END_STATE();
        case 225:
            if(lookahead == 'e')
                ADVANCE(127);
            END_STATE();
        case 226:
            if(lookahead == 'e')
                ADVANCE(454);
            END_STATE();
        case 227:
            if(lookahead == 'e')
                ADVANCE(455);
            END_STATE();
        case 228:
            if(lookahead == 'e')
                ADVANCE(475);
            END_STATE();
        case 229:
            if(lookahead == 'e')
                ADVANCE(456);
            END_STATE();
        case 230:
            if(lookahead == 'e')
                ADVANCE(439);
            END_STATE();
        case 231:
            if(lookahead == 'e')
                ADVANCE(478);
            END_STATE();
        case 232:
            if(lookahead == 'e')
                ADVANCE(496);
            END_STATE();
        case 233:
            if(lookahead == 'e')
                ADVANCE(359);
            END_STATE();
        case 234:
            if(lookahead == 'e')
                ADVANCE(161);
            END_STATE();
        case 235:
            if(lookahead == 'e')
                ADVANCE(247);
            END_STATE();
        case 236:
            if(lookahead == 'e')
                ADVANCE(362);
            END_STATE();
        case 237:
            if(lookahead == 'e')
                ADVANCE(431);
            END_STATE();
        case 238:
            if(lookahead == 'e')
                ADVANCE(433);
            END_STATE();
        case 239:
            if(lookahead == 'e')
                ADVANCE(168);
            END_STATE();
        case 240:
            if(lookahead == 'e')
                ADVANCE(513);
            END_STATE();
        case 241:
            if(lookahead == 'e')
                ADVANCE(249);
            END_STATE();
        case 242:
            if(lookahead == 'e')
                ADVANCE(518);
            if(lookahead == 'h')
                ADVANCE(392);
            if(lookahead == 't')
                ADVANCE(427);
            if(lookahead == 'u')
                ADVANCE(414);
            END_STATE();
        case 243:
            if(lookahead == 'f')
                ADVANCE(779);
            END_STATE();
        case 244:
            if(lookahead == 'f')
                ADVANCE(123);
            END_STATE();
        case 245:
            if(lookahead == 'f')
                ADVANCE(284);
            if(lookahead == 'm')
                ADVANCE(122);
            if(lookahead == 's')
                ADVANCE(231);
            END_STATE();
        case 246:
            if(lookahead == 'f')
                ADVANCE(270);
            END_STATE();
        case 247:
            if(lookahead == 'f')
                ADVANCE(290);
            END_STATE();
        case 248:
            if(lookahead == 'f')
                ADVANCE(134);
            END_STATE();
        case 249:
            if(lookahead == 'f')
                ADVANCE(142);
            END_STATE();
        case 250:
            if(lookahead == 'g')
                ADVANCE(571);
            END_STATE();
        case 251:
            if(lookahead == 'g')
                ADVANCE(609);
            END_STATE();
        case 252:
            if(lookahead == 'g')
                ADVANCE(611);
            END_STATE();
        case 253:
            if(lookahead == 'g')
                ADVANCE(577);
            END_STATE();
        case 254:
            if(lookahead == 'g')
                ADVANCE(593);
            END_STATE();
        case 255:
            if(lookahead == 'g')
                ADVANCE(596);
            END_STATE();
        case 256:
            if(lookahead == 'g')
                ADVANCE(573);
            END_STATE();
        case 257:
            if(lookahead == 'g')
                ADVANCE(361);
            END_STATE();
        case 258:
            if(lookahead == 'g')
                ADVANCE(218);
            END_STATE();
        case 259:
            if(lookahead == 'g')
                ADVANCE(370);
            END_STATE();
        case 260:
            if(lookahead == 'h')
                ADVANCE(785);
            END_STATE();
        case 261:
            if(lookahead == 'h')
                ADVANCE(226);
            END_STATE();
        case 262:
            if(lookahead == 'h')
                ADVANCE(124);
            END_STATE();
        case 263:
            if(lookahead == 'h')
                ADVANCE(398);
            END_STATE();
        case 264:
            if(lookahead == 'i')
                ADVANCE(338);
            if(lookahead == 'o')
                ADVANCE(535);
            END_STATE();
        case 265:
            if(lookahead == 'i')
                ADVANCE(154);
            END_STATE();
        case 266:
            if(lookahead == 'i')
                ADVANCE(358);
            if(lookahead == 'n')
                ADVANCE(274);
            END_STATE();
        case 267:
            if(lookahead == 'i')
                ADVANCE(467);
            if(lookahead == 'o')
                ADVANCE(375);
            END_STATE();
        case 268:
            if(lookahead == 'i')
                ADVANCE(149);
            END_STATE();
        case 269:
            if(lookahead == 'i')
                ADVANCE(536);
            END_STATE();
        case 270:
            if(lookahead == 'i')
                ADVANCE(538);
            END_STATE();
        case 271:
            if(lookahead == 'i')
                ADVANCE(119);
            END_STATE();
        case 272:
            if(lookahead == 'i')
                ADVANCE(257);
            END_STATE();
        case 273:
            if(lookahead == 'i')
                ADVANCE(379);
            END_STATE();
        case 274:
            if(lookahead == 'i')
                ADVANCE(379);
            if(lookahead == 's')
                ADVANCE(272);
            END_STATE();
        case 275:
            if(lookahead == 'i')
                ADVANCE(337);
            END_STATE();
        case 276:
            if(lookahead == 'i')
                ADVANCE(337);
            if(lookahead == 'o')
                ADVANCE(535);
            END_STATE();
        case 277:
            if(lookahead == 'i')
                ADVANCE(170);
            END_STATE();
        case 278:
            if(lookahead == 'i')
                ADVANCE(349);
            if(lookahead == 'u')
                ADVANCE(162);
            END_STATE();
        case 279:
            if(lookahead == 'i')
                ADVANCE(410);
            END_STATE();
        case 280:
            if(lookahead == 'i')
                ADVANCE(492);
            END_STATE();
        case 281:
            if(lookahead == 'i')
                ADVANCE(490);
            END_STATE();
        case 282:
            if(lookahead == 'i')
                ADVANCE(259);
            END_STATE();
        case 283:
            if(lookahead == 'i')
                ADVANCE(351);
            END_STATE();
        case 284:
            if(lookahead == 'i')
                ADVANCE(215);
            END_STATE();
        case 285:
            if(lookahead == 'i')
                ADVANCE(458);
            END_STATE();
        case 286:
            if(lookahead == 'i')
                ADVANCE(488);
            END_STATE();
        case 287:
            if(lookahead == 'i')
                ADVANCE(495);
            END_STATE();
        case 288:
            if(lookahead == 'i')
                ADVANCE(462);
            END_STATE();
        case 289:
            if(lookahead == 'i')
                ADVANCE(180);
            END_STATE();
        case 290:
            if(lookahead == 'i')
                ADVANCE(363);
            END_STATE();
        case 291:
            if(lookahead == 'i')
                ADVANCE(463);
            END_STATE();
        case 292:
            if(lookahead == 'i')
                ADVANCE(464);
            END_STATE();
        case 293:
            if(lookahead == 'i')
                ADVANCE(509);
            END_STATE();
        case 294:
            if(lookahead == 'i')
                ADVANCE(385);
            END_STATE();
        case 295:
            if(lookahead == 'i')
                ADVANCE(387);
            END_STATE();
        case 296:
            if(lookahead == 'i')
                ADVANCE(515);
            END_STATE();
        case 297:
            if(lookahead == 'j')
                ADVANCE(234);
            END_STATE();
        case 298:
            if(lookahead == 'k')
                ADVANCE(744);
            END_STATE();
        case 299:
            if(lookahead == 'k')
                ADVANCE(217);
            END_STATE();
        case 300:
            if(lookahead == 'l')
                ADVANCE(720);
            END_STATE();
        case 301:
            if(lookahead == 'l')
                ADVANCE(783);
            END_STATE();
        case 302:
            if(lookahead == 'l')
                ADVANCE(111);
            END_STATE();
        case 303:
            if(lookahead == 'l')
                ADVANCE(523);
            END_STATE();
        case 304:
            if(lookahead == 'l')
                ADVANCE(543);
            END_STATE();
        case 305:
            if(lookahead == 'l')
                ADVANCE(173);
            END_STATE();
        case 306:
            if(lookahead == 'l')
                ADVANCE(265);
            END_STATE();
        case 307:
            if(lookahead == 'l')
                ADVANCE(225);
            END_STATE();
        case 308:
            if(lookahead == 'l')
                ADVANCE(191);
            END_STATE();
        case 309:
            if(lookahead == 'l')
                ADVANCE(285);
            END_STATE();
        case 310:
            if(lookahead == 'l')
                ADVANCE(192);
            END_STATE();
        case 311:
            if(lookahead == 'l')
                ADVANCE(482);
            END_STATE();
        case 312:
            if(lookahead == 'l')
                ADVANCE(195);
            END_STATE();
        case 313:
            if(lookahead == 'l')
                ADVANCE(519);
            END_STATE();
        case 314:
            if(lookahead == 'l')
                ADVANCE(202);
            END_STATE();
        case 315:
            if(lookahead == 'l')
                ADVANCE(203);
            END_STATE();
        case 316:
            if(lookahead == 'l')
                ADVANCE(498);
            END_STATE();
        case 317:
            if(lookahead == 'l')
                ADVANCE(533);
            END_STATE();
        case 318:
            if(lookahead == 'l')
                ADVANCE(293);
            END_STATE();
        case 319:
            if(lookahead == 'l')
                ADVANCE(384);
            END_STATE();
        case 320:
            if(lookahead == 'l')
                ADVANCE(388);
            if(lookahead == 's')
                ADVANCE(263);
            END_STATE();
        case 321:
            if(lookahead == 'l')
                ADVANCE(390);
            END_STATE();
        case 322:
            if(lookahead == 'l')
                ADVANCE(296);
            END_STATE();
        case 323:
            if(lookahead == 'm')
                ADVANCE(411);
            if(lookahead == 'n')
                ADVANCE(487);
            END_STATE();
        case 324:
            if(lookahead == 'm')
                ADVANCE(411);
            if(lookahead == 'n')
                ADVANCE(508);
            END_STATE();
        case 325:
            if(lookahead == 'm')
                ADVANCE(763);
            END_STATE();
        case 326:
            if(lookahead == 'm')
                ADVANCE(768);
            END_STATE();
        case 327:
            if(lookahead == 'm')
                ADVANCE(280);
            END_STATE();
        case 328:
            if(lookahead == 'm')
                ADVANCE(187);
            END_STATE();
        case 329:
            if(lookahead == 'm')
                ADVANCE(221);
            END_STATE();
        case 330:
            if(lookahead == 'm')
                ADVANCE(197);
            END_STATE();
        case 331:
            if(lookahead == 'm')
                ADVANCE(229);
            END_STATE();
        case 332:
            if(lookahead == 'm')
                ADVANCE(408);
            if(lookahead == 'n')
                ADVANCE(365);
            END_STATE();
        case 333:
            if(lookahead == 'm')
                ADVANCE(408);
            if(lookahead == 'n')
                ADVANCE(366);
            END_STATE();
        case 334:
            if(lookahead == 'm')
                ADVANCE(408);
            if(lookahead == 'n')
                ADVANCE(367);
            END_STATE();
        case 335:
            if(lookahead == 'm')
                ADVANCE(122);
            END_STATE();
        case 336:
            if(lookahead == 'm')
                ADVANCE(122);
            if(lookahead == 's')
                ADVANCE(231);
            END_STATE();
        case 337:
            if(lookahead == 'm')
                ADVANCE(129);
            END_STATE();
        case 338:
            if(lookahead == 'm')
                ADVANCE(129);
            if(lookahead == 'v')
                ADVANCE(133);
            END_STATE();
        case 339:
            if(lookahead == 'n')
                ADVANCE(731);
            END_STATE();
        case 340:
            if(lookahead == 'n')
                ADVANCE(761);
            END_STATE();
        case 341:
            if(lookahead == 'n')
                ADVANCE(582);
            END_STATE();
        case 342:
            if(lookahead == 'n')
                ADVANCE(716);
            END_STATE();
        case 343:
            if(lookahead == 'n')
                ADVANCE(746);
            END_STATE();
        case 344:
            if(lookahead == 'n')
                ADVANCE(730);
            END_STATE();
        case 345:
            if(lookahead == 'n')
                ADVANCE(520);
            if(lookahead == 'v')
                ADVANCE(233);
            if(lookahead == 'x')
                ADVANCE(160);
            END_STATE();
        case 346:
            if(lookahead == 'n')
                ADVANCE(177);
            if(lookahead == 'x')
                ADVANCE(214);
            END_STATE();
        case 347:
            if(lookahead == 'n')
                ADVANCE(350);
            END_STATE();
        case 348:
            if(lookahead == 'n')
                ADVANCE(166);
            END_STATE();
        case 349:
            if(lookahead == 'n')
                ADVANCE(251);
            END_STATE();
        case 350:
            if(lookahead == 'n')
                ADVANCE(389);
            END_STATE();
        case 351:
            if(lookahead == 'n')
                ADVANCE(252);
            END_STATE();
        case 352:
            if(lookahead == 'n')
                ADVANCE(253);
            END_STATE();
        case 353:
            if(lookahead == 'n')
                ADVANCE(304);
            END_STATE();
        case 354:
            if(lookahead == 'n')
                ADVANCE(115);
            END_STATE();
        case 355:
            if(lookahead == 'n')
                ADVANCE(115);
            if(lookahead == 'p')
                ADVANCE(622);
            END_STATE();
        case 356:
            if(lookahead == 'n')
                ADVANCE(254);
            END_STATE();
        case 357:
            if(lookahead == 'n')
                ADVANCE(255);
            END_STATE();
        case 358:
            if(lookahead == 'n')
                ADVANCE(470);
            END_STATE();
        case 359:
            if(lookahead == 'n')
                ADVANCE(505);
            END_STATE();
        case 360:
            if(lookahead == 'n')
                ADVANCE(461);
            END_STATE();
        case 361:
            if(lookahead == 'n')
                ADVANCE(219);
            END_STATE();
        case 362:
            if(lookahead == 'n')
                ADVANCE(484);
            END_STATE();
        case 363:
            if(lookahead == 'n')
                ADVANCE(207);
            END_STATE();
        case 364:
            if(lookahead == 'n')
                ADVANCE(164);
            END_STATE();
        case 365:
            if(lookahead == 'n')
                ADVANCE(239);
            if(lookahead == 's')
                ADVANCE(472);
            if(lookahead == 't')
                ADVANCE(190);
            END_STATE();
        case 366:
            if(lookahead == 'n')
                ADVANCE(239);
            if(lookahead == 's')
                ADVANCE(471);
            END_STATE();
        case 367:
            if(lookahead == 'n')
                ADVANCE(239);
            if(lookahead == 's')
                ADVANCE(471);
            if(lookahead == 't')
                ADVANCE(190);
            END_STATE();
        case 368:
            if(lookahead == 'n')
                ADVANCE(273);
            END_STATE();
        case 369:
            if(lookahead == 'n')
                ADVANCE(508);
            END_STATE();
        case 370:
            if(lookahead == 'n')
                ADVANCE(394);
            END_STATE();
        case 371:
            if(lookahead == 'n')
                ADVANCE(236);
            END_STATE();
        case 372:
            if(lookahead == 'n')
                ADVANCE(136);
            END_STATE();
        case 373:
            if(lookahead == 'o')
                ADVANCE(328);
            END_STATE();
        case 374:
            if(lookahead == 'o')
                ADVANCE(425);
            if(lookahead == 'r')
                ADVANCE(276);
            if(lookahead == 'u')
                ADVANCE(151);
            END_STATE();
        case 375:
            if(lookahead == 'o')
                ADVANCE(307);
            END_STATE();
        case 376:
            if(lookahead == 'o')
                ADVANCE(333);
            if(lookahead == 'u')
                ADVANCE(460);
            END_STATE();
        case 377:
            if(lookahead == 'o')
                ADVANCE(326);
            END_STATE();
        case 378:
            if(lookahead == 'o')
                ADVANCE(128);
            END_STATE();
        case 379:
            if(lookahead == 'o')
                ADVANCE(340);
            END_STATE();
        case 380:
            if(lookahead == 'o')
                ADVANCE(371);
            END_STATE();
        case 381:
            if(lookahead == 'o')
                ADVANCE(353);
            END_STATE();
        case 382:
            if(lookahead == 'o')
                ADVANCE(421);
            END_STATE();
        case 383:
            if(lookahead == 'o')
                ADVANCE(443);
            END_STATE();
        case 384:
            if(lookahead == 'o')
                ADVANCE(352);
            END_STATE();
        case 385:
            if(lookahead == 'o')
                ADVANCE(342);
            END_STATE();
        case 386:
            if(lookahead == 'o')
                ADVANCE(420);
            END_STATE();
        case 387:
            if(lookahead == 'o')
                ADVANCE(343);
            END_STATE();
        case 388:
            if(lookahead == 'o')
                ADVANCE(356);
            END_STATE();
        case 389:
            if(lookahead == 'o')
                ADVANCE(502);
            END_STATE();
        case 390:
            if(lookahead == 'o')
                ADVANCE(357);
            END_STATE();
        case 391:
            if(lookahead == 'o')
                ADVANCE(360);
            END_STATE();
        case 392:
            if(lookahead == 'o')
                ADVANCE(430);
            END_STATE();
        case 393:
            if(lookahead == 'o')
                ADVANCE(157);
            END_STATE();
        case 394:
            if(lookahead == 'o')
                ADVANCE(438);
            END_STATE();
        case 395:
            if(lookahead == 'o')
                ADVANCE(432);
            END_STATE();
        case 396:
            if(lookahead == 'o')
                ADVANCE(434);
            END_STATE();
        case 397:
            if(lookahead == 'o')
                ADVANCE(436);
            END_STATE();
        case 398:
            if(lookahead == 'o')
                ADVANCE(437);
            END_STATE();
        case 399:
            if(lookahead == 'o')
                ADVANCE(442);
            END_STATE();
        case 400:
            if(lookahead == 'o')
                ADVANCE(442);
            if(lookahead == 'r')
                ADVANCE(275);
            END_STATE();
        case 401:
            if(lookahead == 'o')
                ADVANCE(159);
            END_STATE();
        case 402:
            if(lookahead == 'o')
                ADVANCE(534);
            END_STATE();
        case 403:
            if(lookahead == 'p')
                ADVANCE(188);
            END_STATE();
        case 404:
            if(lookahead == 'p')
                ADVANCE(200);
            END_STATE();
        case 405:
            if(lookahead == 'p')
                ADVANCE(201);
            END_STATE();
        case 406:
            if(lookahead == 'p')
                ADVANCE(204);
            END_STATE();
        case 407:
            if(lookahead == 'p')
                ADVANCE(205);
            END_STATE();
        case 408:
            if(lookahead == 'p')
                ADVANCE(380);
            END_STATE();
        case 409:
            if(lookahead == 'p')
                ADVANCE(501);
            END_STATE();
        case 410:
            if(lookahead == 'p')
                ADVANCE(312);
            END_STATE();
        case 411:
            if(lookahead == 'p')
                ADVANCE(395);
            END_STATE();
        case 412:
            if(lookahead == 'p')
                ADVANCE(396);
            END_STATE();
        case 413:
            if(lookahead == 'p')
                ADVANCE(397);
            END_STATE();
        case 414:
            if(lookahead == 'p')
                ADVANCE(412);
            END_STATE();
        case 415:
            if(lookahead == 'q')
                ADVANCE(525);
            if(lookahead == 't')
                ADVANCE(441);
            END_STATE();
        case 416:
            if(lookahead == 'r')
                ADVANCE(278);
            END_STATE();
        case 417:
            if(lookahead == 'r')
                ADVANCE(604);
            END_STATE();
        case 418:
            if(lookahead == 'r')
                ADVANCE(606);
            END_STATE();
        case 419:
            if(lookahead == 'r')
                ADVANCE(812);
            END_STATE();
        case 420:
            if(lookahead == 'r')
                ADVANCE(816);
            END_STATE();
        case 421:
            if(lookahead == 'r')
                ADVANCE(542);
            END_STATE();
        case 422:
            if(lookahead == 'r')
                ADVANCE(545);
            END_STATE();
        case 423:
            if(lookahead == 'r')
                ADVANCE(268);
            END_STATE();
        case 424:
            if(lookahead == 'r')
                ADVANCE(440);
            END_STATE();
        case 425:
            if(lookahead == 'r')
                ADVANCE(469);
            END_STATE();
        case 426:
            if(lookahead == 'r')
                ADVANCE(141);
            END_STATE();
        case 427:
            if(lookahead == 'r')
                ADVANCE(530);
            END_STATE();
        case 428:
            if(lookahead == 'r')
                ADVANCE(137);
            END_STATE();
        case 429:
            if(lookahead == 'r')
                ADVANCE(283);
            END_STATE();
        case 430:
            if(lookahead == 'r')
                ADVANCE(476);
            END_STATE();
        case 431:
            if(lookahead == 'r')
                ADVANCE(125);
            END_STATE();
        case 432:
            if(lookahead == 'r')
                ADVANCE(479);
            END_STATE();
        case 433:
            if(lookahead == 'r')
                ADVANCE(126);
            END_STATE();
        case 434:
            if(lookahead == 'r')
                ADVANCE(500);
            END_STATE();
        case 435:
            if(lookahead == 'r')
                ADVANCE(212);
            END_STATE();
        case 436:
            if(lookahead == 'r')
                ADVANCE(485);
            END_STATE();
        case 437:
            if(lookahead == 'r')
                ADVANCE(486);
            END_STATE();
        case 438:
            if(lookahead == 'r')
                ADVANCE(208);
            END_STATE();
        case 439:
            if(lookahead == 'r')
                ADVANCE(248);
            END_STATE();
        case 440:
            if(lookahead == 'r')
                ADVANCE(383);
            END_STATE();
        case 441:
            if(lookahead == 'r')
                ADVANCE(144);
            END_STATE();
        case 442:
            if(lookahead == 'r')
                ADVANCE(516);
            END_STATE();
        case 443:
            if(lookahead == 'r')
                ADVANCE(413);
            END_STATE();
        case 444:
            if(lookahead == 's')
                ADVANCE(803);
            END_STATE();
        case 445:
            if(lookahead == 's')
                ADVANCE(767);
            END_STATE();
        case 446:
            if(lookahead == 's')
                ADVANCE(808);
            END_STATE();
        case 447:
            if(lookahead == 's')
                ADVANCE(298);
            END_STATE();
        case 448:
            if(lookahead == 's')
                ADVANCE(734);
            END_STATE();
        case 449:
            if(lookahead == 's')
                ADVANCE(807);
            END_STATE();
        case 450:
            if(lookahead == 's')
                ADVANCE(810);
            END_STATE();
        case 451:
            if(lookahead == 's')
                ADVANCE(802);
            END_STATE();
        case 452:
            if(lookahead == 's')
                ADVANCE(772);
            END_STATE();
        case 453:
            if(lookahead == 's')
                ADVANCE(739);
            END_STATE();
        case 454:
            if(lookahead == 's')
                ADVANCE(809);
            END_STATE();
        case 455:
            if(lookahead == 's')
                ADVANCE(740);
            END_STATE();
        case 456:
            if(lookahead == 's')
                ADVANCE(784);
            END_STATE();
        case 457:
            if(lookahead == 's')
                ADVANCE(211);
            END_STATE();
        case 458:
            if(lookahead == 's')
                ADVANCE(261);
            END_STATE();
        case 459:
            if(lookahead == 's')
                ADVANCE(186);
            END_STATE();
        case 460:
            if(lookahead == 's')
                ADVANCE(494);
            END_STATE();
        case 461:
            if(lookahead == 's')
                ADVANCE(526);
            END_STATE();
        case 462:
            if(lookahead == 's')
                ADVANCE(216);
            END_STATE();
        case 463:
            if(lookahead == 's')
                ADVANCE(224);
            END_STATE();
        case 464:
            if(lookahead == 's')
                ADVANCE(227);
            END_STATE();
        case 465:
            if(lookahead == 's')
                ADVANCE(198);
            END_STATE();
        case 466:
            if(lookahead == 's')
                ADVANCE(511);
            END_STATE();
        case 467:
            if(lookahead == 't')
                ADVANCE(245);
            END_STATE();
        case 468:
            if(lookahead == 't')
                ADVANCE(732);
            END_STATE();
        case 469:
            if(lookahead == 't')
                ADVANCE(814);
            END_STATE();
        case 470:
            if(lookahead == 't')
                ADVANCE(94);
            END_STATE();
        case 471:
            if(lookahead == 't')
                ADVANCE(765);
            END_STATE();
        case 472:
            if(lookahead == 't')
                ADVANCE(765);
            if(lookahead == 'u')
                ADVANCE(329);
            END_STATE();
        case 473:
            if(lookahead == 't')
                ADVANCE(599);
            END_STATE();
        case 474:
            if(lookahead == 't')
                ADVANCE(733);
            END_STATE();
        case 475:
            if(lookahead == 't')
                ADVANCE(586);
            END_STATE();
        case 476:
            if(lookahead == 't')
                ADVANCE(567);
            END_STATE();
        case 477:
            if(lookahead == 't')
                ADVANCE(794);
            END_STATE();
        case 478:
            if(lookahead == 't')
                ADVANCE(741);
            END_STATE();
        case 479:
            if(lookahead == 't')
                ADVANCE(792);
            END_STATE();
        case 480:
            if(lookahead == 't')
                ADVANCE(759);
            END_STATE();
        case 481:
            if(lookahead == 't')
                ADVANCE(798);
            END_STATE();
        case 482:
            if(lookahead == 't')
                ADVANCE(747);
            END_STATE();
        case 483:
            if(lookahead == 't')
                ADVANCE(721);
            END_STATE();
        case 484:
            if(lookahead == 't')
                ADVANCE(801);
            END_STATE();
        case 485:
            if(lookahead == 't')
                ADVANCE(815);
            END_STATE();
        case 486:
            if(lookahead == 't')
                ADVANCE(590);
            END_STATE();
        case 487:
            if(lookahead == 't')
                ADVANCE(95);
            END_STATE();
        case 488:
            if(lookahead == 't')
                ADVANCE(336);
            END_STATE();
        case 489:
            if(lookahead == 't')
                ADVANCE(546);
            END_STATE();
        case 490:
            if(lookahead == 't')
                ADVANCE(155);
            END_STATE();
        case 491:
            if(lookahead == 't')
                ADVANCE(423);
            END_STATE();
        case 492:
            if(lookahead == 't')
                ADVANCE(446);
            END_STATE();
        case 493:
            if(lookahead == 't')
                ADVANCE(269);
            END_STATE();
        case 494:
            if(lookahead == 't')
                ADVANCE(377);
            END_STATE();
        case 495:
            if(lookahead == 't')
                ADVANCE(335);
            END_STATE();
        case 496:
            if(lookahead == 't')
                ADVANCE(426);
            END_STATE();
        case 497:
            if(lookahead == 't')
                ADVANCE(382);
            END_STATE();
        case 498:
            if(lookahead == 't')
                ADVANCE(279);
            END_STATE();
        case 499:
            if(lookahead == 't')
                ADVANCE(228);
            END_STATE();
        case 500:
            if(lookahead == 't')
                ADVANCE(452);
            END_STATE();
        case 501:
            if(lookahead == 't')
                ADVANCE(294);
            END_STATE();
        case 502:
            if(lookahead == 't')
                ADVANCE(143);
            END_STATE();
        case 503:
            if(lookahead == 't')
                ADVANCE(427);
            if(lookahead == 'u')
                ADVANCE(414);
            END_STATE();
        case 504:
            if(lookahead == 't')
                ADVANCE(145);
            END_STATE();
        case 505:
            if(lookahead == 't')
                ADVANCE(489);
            END_STATE();
        case 506:
            if(lookahead == 't')
                ADVANCE(194);
            END_STATE();
        case 507:
            if(lookahead == 't')
                ADVANCE(199);
            END_STATE();
        case 508:
            if(lookahead == 't')
                ADVANCE(230);
            END_STATE();
        case 509:
            if(lookahead == 't')
                ADVANCE(237);
            END_STATE();
        case 510:
            if(lookahead == 't')
                ADVANCE(429);
            END_STATE();
        case 511:
            if(lookahead == 't')
                ADVANCE(428);
            END_STATE();
        case 512:
            if(lookahead == 't')
                ADVANCE(386);
            END_STATE();
        case 513:
            if(lookahead == 't')
                ADVANCE(547);
            END_STATE();
        case 514:
            if(lookahead == 't')
                ADVANCE(295);
            END_STATE();
        case 515:
            if(lookahead == 't')
                ADVANCE(238);
            END_STATE();
        case 516:
            if(lookahead == 't')
                ADVANCE(517);
            END_STATE();
        case 517:
            if(lookahead == 't')
                ADVANCE(549);
            END_STATE();
        case 518:
            if(lookahead == 't')
                ADVANCE(441);
            END_STATE();
        case 519:
            if(lookahead == 't')
                ADVANCE(112);
            END_STATE();
        case 520:
            if(lookahead == 'u')
                ADVANCE(325);
            END_STATE();
        case 521:
            if(lookahead == 'u')
                ADVANCE(348);
            END_STATE();
        case 522:
            if(lookahead == 'u')
                ADVANCE(468);
            END_STATE();
        case 523:
            if(lookahead == 'u')
                ADVANCE(189);
            END_STATE();
        case 524:
            if(lookahead == 'u')
                ADVANCE(474);
            END_STATE();
        case 525:
            if(lookahead == 'u')
                ADVANCE(220);
            END_STATE();
        case 526:
            if(lookahead == 'u')
                ADVANCE(329);
            END_STATE();
        case 527:
            if(lookahead == 'u')
                ADVANCE(150);
            END_STATE();
        case 528:
            if(lookahead == 'u')
                ADVANCE(311);
            END_STATE();
        case 529:
            if(lookahead == 'u')
                ADVANCE(313);
            END_STATE();
        case 530:
            if(lookahead == 'u')
                ADVANCE(162);
            END_STATE();
        case 531:
            if(lookahead == 'u')
                ADVANCE(310);
            END_STATE();
        case 532:
            if(lookahead == 'u')
                ADVANCE(507);
            END_STATE();
        case 533:
            if(lookahead == 'u')
                ADVANCE(240);
            END_STATE();
        case 534:
            if(lookahead == 'u')
                ADVANCE(152);
            END_STATE();
        case 535:
            if(lookahead == 'v')
                ADVANCE(289);
            END_STATE();
        case 536:
            if(lookahead == 'v')
                ADVANCE(193);
            END_STATE();
        case 537:
            if(lookahead == 'w')
                ADVANCE(114);
            END_STATE();
        case 538:
            if(lookahead == 'x')
                ADVANCE(791);
            END_STATE();
        case 539:
            if(lookahead == 'x')
                ADVANCE(481);
            END_STATE();
        case 540:
            if(lookahead == 'y')
                ADVANCE(617);
            END_STATE();
        case 541:
            if(lookahead == 'y')
                ADVANCE(796);
            END_STATE();
        case 542:
            if(lookahead == 'y')
                ADVANCE(777);
            END_STATE();
        case 543:
            if(lookahead == 'y')
                ADVANCE(735);
            END_STATE();
        case 544:
            if(lookahead == 'y')
                ADVANCE(811);
            END_STATE();
        case 545:
            if(lookahead == 'y')
                ADVANCE(299);
            END_STATE();
        case 546:
            if(lookahead == 'y')
                ADVANCE(404);
            END_STATE();
        case 547:
            if(lookahead == 'y')
                ADVANCE(405);
            END_STATE();
        case 548:
            if(lookahead == 'y')
                ADVANCE(406);
            END_STATE();
        case 549:
            if(lookahead == 'y')
                ADVANCE(407);
            END_STATE();
        case 550:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(550);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(709);
            END_STATE();
        case 551:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(685);
            END_STATE();
        case 552:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(673);
            END_STATE();
        case 553:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(679);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(693);
            END_STATE();
        case 554:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(687);
            END_STATE();
        case 555:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(693);
            END_STATE();
        case 556:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(675);
            END_STATE();
        case 557:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(714);
            END_STATE();
        case 558:
            if(eof)
                ADVANCE(566);
            if(lookahead == '\n')
                SKIP(0);
            END_STATE();
        case 559:
            if(eof)
                ADVANCE(566);
            if(lookahead == '\n')
                SKIP(0);
            if(lookahead == '\r')
                SKIP(558);
            END_STATE();
        case 560:
            if(eof)
                ADVANCE(566);
            if(lookahead == '\n')
                SKIP(564);
            END_STATE();
        case 561:
            if(eof)
                ADVANCE(566);
            if(lookahead == '\n')
                SKIP(564);
            if(lookahead == '\r')
                SKIP(560);
            END_STATE();
        case 562:
            if(eof)
                ADVANCE(566);
            if(lookahead == '\n')
                SKIP(565);
            END_STATE();
        case 563:
            if(eof)
                ADVANCE(566);
            if(lookahead == '\n')
                SKIP(565);
            if(lookahead == '\r')
                SKIP(562);
            END_STATE();
        case 564:
            if(eof)
                ADVANCE(566);
            ADVANCE_MAP(
                '"', 641,
                '#', 169,
                '$', 626,
                '%', 635,
                ')', 637,
                '*', 633,
                '+', 629,
                ',', 619,
                '-', 631,
                '/', 634,
                ':', 726,
                ';', 727,
                '<', 103,
                '=', 751,
                '>', 616,
                '@', 750,
                'L', 639,
                '[', 781,
            );
            if(lookahead == '\\')
                SKIP(561);
            if(lookahead == ']')
                ADVANCE(782);
            if(lookahead == '^')
                ADVANCE(625);
            if(lookahead == 'a')
                ADVANCE(147);
            if(lookahead == 'b')
                ADVANCE(267);
            if(lookahead == 'c')
                ADVANCE(113);
            if(lookahead == 'd')
                ADVANCE(184);
            if(lookahead == 'e')
                ADVANCE(345);
            if(lookahead == 'g')
                ADVANCE(232);
            if(lookahead == 'h')
                ADVANCE(373);
            if(lookahead == 'i')
                ADVANCE(323);
            if(lookahead == 'l')
                ADVANCE(401);
            if(lookahead == 'm')
                ADVANCE(131);
            if(lookahead == 'n')
                ADVANCE(117);
            if(lookahead == 'o')
                ADVANCE(156);
            if(lookahead == 'p')
                ADVANCE(400);
            if(lookahead == 'r')
                ADVANCE(116);
            if(lookahead == 's')
                ADVANCE(242);
            if(lookahead == 't')
                ADVANCE(548);
            if(lookahead == 'u')
                ADVANCE(266);
            if(lookahead == 'v')
                ADVANCE(140);
            if(lookahead == '{')
                ADVANCE(718);
            if(lookahead == '|')
                ADVANCE(624);
            if(lookahead == '}')
                ADVANCE(719);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(564);
            END_STATE();
        case 565:
            if(eof)
                ADVANCE(566);
            ADVANCE_MAP(
                '#', 181,
                '$', 626,
                '%', 635,
                ')', 637,
                '*', 633,
                '+', 629,
                ',', 619,
                '-', 631,
                '/', 634,
                ':', 725,
                ';', 727,
                '<', 103,
                '>', 616,
                '@', 750,
            );
            if(lookahead == '\\')
                SKIP(563);
            if(lookahead == ']')
                ADVANCE(782);
            if(lookahead == '^')
                ADVANCE(625);
            if(lookahead == 'a')
                ADVANCE(146);
            if(lookahead == 'b')
                ADVANCE(286);
            if(lookahead == 'c')
                ADVANCE(376);
            if(lookahead == 'e')
                ADVANCE(345);
            if(lookahead == 'h')
                ADVANCE(373);
            if(lookahead == 'i')
                ADVANCE(324);
            if(lookahead == 'l')
                ADVANCE(393);
            if(lookahead == 'm')
                ADVANCE(131);
            if(lookahead == 'n')
                ADVANCE(117);
            if(lookahead == 'p')
                ADVANCE(399);
            if(lookahead == 's')
                ADVANCE(503);
            if(lookahead == 't')
                ADVANCE(548);
            if(lookahead == 'u')
                ADVANCE(368);
            if(lookahead == 'v')
                ADVANCE(139);
            if(lookahead == '{')
                ADVANCE(718);
            if(lookahead == '|')
                ADVANCE(624);
            if(lookahead == '}')
                ADVANCE(719);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(565);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(176);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(176);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(319);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(319);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(321);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(628);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(627);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(552);
            if(lookahead == '0')
                ADVANCE(681);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(685);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(552);
            if(lookahead == '0')
                ADVANCE(681);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(685);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '*')
                ADVANCE(1108);
            if(lookahead == '/')
                ADVANCE(1097);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(642);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(107);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(109);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(303);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(355);
            if(lookahead == 'i')
                ADVANCE(424);
            if(lookahead == 'o')
                ADVANCE(175);
            if(lookahead == 'u')
                ADVANCE(316);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(459);
            if(lookahead == 'h')
                ADVANCE(121);
            if(lookahead == 'o')
                ADVANCE(332);
            if(lookahead == 'u')
                ADVANCE(460);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(167);
            if(lookahead == 'i')
                ADVANCE(346);
            if(lookahead == 'l')
                ADVANCE(378);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(288);
            if(lookahead == 'e')
                ADVANCE(118);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(493);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(317);
            if(lookahead == 'o')
                ADVANCE(277);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'b')
                ADVANCE(297);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'b')
                ADVANCE(466);
            if(lookahead == 'l')
                ADVANCE(271);
            if(lookahead == 'n')
                ADVANCE(540);
            if(lookahead == 't')
                ADVANCE(491);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(262);
            if(lookahead == 's')
                ADVANCE(510);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(499);
            if(lookahead == 'n')
                ADVANCE(185);
            if(lookahead == 'u')
                ADVANCE(468);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(244);
            if(lookahead == 'o')
                ADVANCE(527);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(415);
            if(lookahead == 'h')
                ADVANCE(392);
            if(lookahead == 't')
                ADVANCE(416);
            if(lookahead == 'u')
                ADVANCE(414);
            if(lookahead == 'w')
                ADVANCE(281);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(496);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(358);
            if(lookahead == 'n')
                ADVANCE(274);
            if(lookahead == 's')
                ADVANCE(211);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(467);
            if(lookahead == 'o')
                ADVANCE(375);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'm')
                ADVANCE(411);
            if(lookahead == 'n')
                ADVANCE(731);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'm')
                ADVANCE(280);
            if(lookahead == 'n')
                ADVANCE(520);
            if(lookahead == 'v')
                ADVANCE(233);
            if(lookahead == 'x')
                ADVANCE(160);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(328);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(158);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(425);
            if(lookahead == 'r')
                ADVANCE(264);
            if(lookahead == 'u')
                ADVANCE(148);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'r')
                ADVANCE(521);
            if(lookahead == 'y')
                ADVANCE(403);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(552);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(673);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(702);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 556,
                'B', 674,
                'D', 674,
                'F', 674,
                'b', 674,
                'd', 674,
                'f', 674,
                'L', 701,
                'U', 701,
                'W', 701,
                'l', 701,
                'u', 701,
                'w', 701,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(674);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 556,
                'B', 675,
                'D', 675,
                'F', 675,
                'b', 675,
                'd', 675,
                'f', 675,
                'L', 702,
                'U', 702,
                'W', 702,
                'l', 702,
                'u', 702,
                'w', 702,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(675);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 553,
                '.', 698,
                'B', 690,
                'b', 690,
                'E', 688,
                'e', 688,
                'P', 696,
                'p', 696,
                'X', 1095,
                'x', 1095,
                'A', 691,
                'C', 691,
                'a', 691,
                'c', 691,
                'D', 691,
                'F', 691,
                'd', 691,
                'f', 691,
                'L', 701,
                'U', 701,
                'W', 701,
                'l', 701,
                'u', 701,
                'w', 701,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(678);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 553,
                '.', 698,
                'B', 692,
                'b', 692,
                'E', 689,
                'e', 689,
                'P', 697,
                'p', 697,
                'X', 555,
                'x', 555,
                'A', 693,
                'C', 693,
                'a', 693,
                'c', 693,
                'D', 693,
                'F', 693,
                'd', 693,
                'f', 693,
                'L', 702,
                'U', 702,
                'W', 702,
                'l', 702,
                'u', 702,
                'w', 702,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(679);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 553,
                '.', 698,
                'E', 688,
                'e', 688,
                'P', 696,
                'p', 696,
                'A', 691,
                'C', 691,
                'a', 691,
                'c', 691,
                'B', 691,
                'D', 691,
                'F', 691,
                'b', 691,
                'd', 691,
                'f', 691,
                'L', 701,
                'U', 701,
                'W', 701,
                'l', 701,
                'u', 701,
                'w', 701,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(678);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 553,
                '.', 698,
                'E', 689,
                'e', 689,
                'P', 697,
                'p', 697,
                'A', 693,
                'C', 693,
                'a', 693,
                'c', 693,
                'B', 693,
                'D', 693,
                'F', 693,
                'b', 693,
                'd', 693,
                'f', 693,
                'L', 702,
                'U', 702,
                'W', 702,
                'l', 702,
                'u', 702,
                'w', 702,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(679);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 551,
                '.', 698,
                'B', 694,
                'b', 694,
                'X', 826,
                'x', 826,
                'E', 696,
                'P', 696,
                'e', 696,
                'p', 696,
                'D', 701,
                'F', 701,
                'L', 701,
                'U', 701,
                'W', 701,
                'd', 701,
                'f', 701,
                'l', 701,
                'u', 701,
                'w', 701,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(684);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 551,
                '.', 698,
                'B', 695,
                'b', 695,
                'X', 76,
                'x', 76,
                'E', 697,
                'P', 697,
                'e', 697,
                'p', 697,
                'D', 702,
                'F', 702,
                'L', 702,
                'U', 702,
                'W', 702,
                'd', 702,
                'f', 702,
                'l', 702,
                'u', 702,
                'w', 702,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(685);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 551,
                '.', 698,
                'B', 699,
                'b', 699,
                'X', 1095,
                'x', 1095,
                'E', 696,
                'P', 696,
                'e', 696,
                'p', 696,
                'D', 701,
                'F', 701,
                'L', 701,
                'U', 701,
                'W', 701,
                'd', 701,
                'f', 701,
                'l', 701,
                'u', 701,
                'w', 701,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(684);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 551,
                '.', 698,
                'B', 700,
                'b', 700,
                'X', 555,
                'x', 555,
                'E', 697,
                'P', 697,
                'e', 697,
                'p', 697,
                'D', 702,
                'F', 702,
                'L', 702,
                'U', 702,
                'W', 702,
                'd', 702,
                'f', 702,
                'l', 702,
                'u', 702,
                'w', 702,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(685);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(551);
            if(lookahead == '.')
                ADVANCE(698);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(696);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(684);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(701);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(551);
            if(lookahead == '.')
                ADVANCE(698);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(685);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(702);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 554,
                '+', 556,
                '-', 556,
                'E', 686,
                'e', 686,
                'P', 697,
                'p', 697,
                'B', 687,
                'D', 687,
                'F', 687,
                'b', 687,
                'd', 687,
                'f', 687,
                'L', 702,
                'U', 702,
                'W', 702,
                'l', 702,
                'u', 702,
                'w', 702,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(687);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 554,
                'E', 686,
                'e', 686,
                'P', 697,
                'p', 697,
                'B', 687,
                'D', 687,
                'F', 687,
                'b', 687,
                'd', 687,
                'f', 687,
                'L', 702,
                'U', 702,
                'W', 702,
                'l', 702,
                'u', 702,
                'w', 702,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(687);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 555,
                '.', 698,
                '+', 556,
                '-', 556,
                'E', 688,
                'e', 688,
                'P', 696,
                'p', 696,
                'B', 691,
                'D', 691,
                'F', 691,
                'b', 691,
                'd', 691,
                'f', 691,
                'L', 701,
                'U', 701,
                'W', 701,
                'l', 701,
                'u', 701,
                'w', 701,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(691);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 555,
                '.', 698,
                '+', 556,
                '-', 556,
                'E', 689,
                'e', 689,
                'P', 697,
                'p', 697,
                'B', 693,
                'D', 693,
                'F', 693,
                'b', 693,
                'd', 693,
                'f', 693,
                'L', 702,
                'U', 702,
                'W', 702,
                'l', 702,
                'u', 702,
                'w', 702,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(693);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 555,
                '.', 698,
                'E', 688,
                'e', 688,
                'P', 696,
                'p', 696,
                'A', 691,
                'C', 691,
                'a', 691,
                'c', 691,
                'B', 691,
                'D', 691,
                'F', 691,
                'b', 691,
                'd', 691,
                'f', 691,
                'L', 701,
                'U', 701,
                'W', 701,
                'l', 701,
                'u', 701,
                'w', 701,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(678);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 555,
                '.', 698,
                'E', 688,
                'e', 688,
                'P', 696,
                'p', 696,
                'B', 691,
                'D', 691,
                'F', 691,
                'b', 691,
                'd', 691,
                'f', 691,
                'L', 701,
                'U', 701,
                'W', 701,
                'l', 701,
                'u', 701,
                'w', 701,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(691);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 555,
                '.', 698,
                'E', 689,
                'e', 689,
                'P', 697,
                'p', 697,
                'A', 693,
                'C', 693,
                'a', 693,
                'c', 693,
                'B', 693,
                'D', 693,
                'F', 693,
                'b', 693,
                'd', 693,
                'f', 693,
                'L', 702,
                'U', 702,
                'W', 702,
                'l', 702,
                'u', 702,
                'w', 702,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(679);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 555,
                '.', 698,
                'E', 689,
                'e', 689,
                'P', 697,
                'p', 697,
                'B', 693,
                'D', 693,
                'F', 693,
                'b', 693,
                'd', 693,
                'f', 693,
                'L', 702,
                'U', 702,
                'W', 702,
                'l', 702,
                'u', 702,
                'w', 702,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(693);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(552);
            if(lookahead == '0')
                ADVANCE(682);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(684);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(701);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(552);
            if(lookahead == '0')
                ADVANCE(683);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(685);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(702);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 556,
                '-', 556,
                'B', 674,
                'D', 674,
                'F', 674,
                'b', 674,
                'd', 674,
                'f', 674,
                'L', 701,
                'U', 701,
                'W', 701,
                'l', 701,
                'u', 701,
                'w', 701,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(674);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 556,
                '-', 556,
                'B', 675,
                'D', 675,
                'F', 675,
                'b', 675,
                'd', 675,
                'f', 675,
                'L', 702,
                'U', 702,
                'W', 702,
                'l', 702,
                'u', 702,
                'w', 702,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(675);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'E', 686,
                'e', 686,
                'P', 697,
                'p', 697,
                'B', 687,
                'D', 687,
                'F', 687,
                'b', 687,
                'd', 687,
                'f', 687,
                'L', 702,
                'U', 702,
                'W', 702,
                'l', 702,
                'u', 702,
                'w', 702,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(687);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(684);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(701);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(685);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(702);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 701,
                'D', 701,
                'F', 701,
                'L', 701,
                'U', 701,
                'W', 701,
                'b', 701,
                'd', 701,
                'f', 701,
                'l', 701,
                'u', 701,
                'w', 701,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 702,
                'D', 702,
                'F', 702,
                'L', 702,
                'U', 702,
                'W', 702,
                'b', 702,
                'd', 702,
                'f', 702,
                'l', 702,
                'u', 702,
                'w', 702,
            );
            END_STATE();
        case 703:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(709);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(820);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(709);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(709);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(709);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(705);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(709);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(709);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(93);
            if(lookahead == '\r')
                ADVANCE(711);
            if(lookahead == '/')
                ADVANCE(557);
            if(lookahead == '\\')
                ADVANCE(712);
            if(lookahead != 0)
                ADVANCE(714);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(93);
            if(lookahead == '/')
                ADVANCE(557);
            if(lookahead == '\\')
                ADVANCE(712);
            if(lookahead != 0)
                ADVANCE(714);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\r')
                ADVANCE(715);
            if(lookahead == '/')
                ADVANCE(557);
            if(lookahead == '\\')
                ADVANCE(712);
            if(lookahead != 0)
                ADVANCE(714);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '*')
                ADVANCE(1108);
            if(lookahead == '/')
                ADVANCE(1097);
            if(lookahead == '\\')
                ADVANCE(712);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(714);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(557);
            if(lookahead == '\\')
                ADVANCE(712);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(714);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(557);
            if(lookahead == '\\')
                ADVANCE(712);
            if(lookahead != 0)
                ADVANCE(714);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(anon_sym_exception);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(anon_sym_abstract);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(anon_sym_abstract);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(anon_sym_interface);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(anon_sym_COLON);
            if(lookahead == ':')
                ADVANCE(608);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(anon_sym_in);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(524);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(anon_sym_bitset);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(anon_sym_bitmask);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == 'a')
                ADVANCE(347);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(anon_sym_typename);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(anon_sym_typename);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(anon_sym_valuetype);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(anon_sym_valuetype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(anon_sym_eventtype);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(anon_sym_eventtype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(anon_sym_const);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(anon_sym_alias);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(anon_sym_custom);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(anon_sym_custom);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(anon_sym_truncatable);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(anon_sym_truncatable);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(anon_sym_supports);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(anon_sym_public);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(anon_sym_public);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(anon_sym_private);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(anon_sym_private);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(anon_sym_factory);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(anon_sym_factory);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(anon_sym_case);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(anon_sym_typeid);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(anon_sym_typeid);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(anon_sym_typeprefix);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(anon_sym_import);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(anon_sym_import);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(anon_sym_Object);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(anon_sym_Object);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(anon_sym_oneway);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(anon_sym_oneway);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(anon_sym_context);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_value_base_type);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_value_base_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(anon_sym_component);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(anon_sym_provides);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(anon_sym_uses);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(anon_sym_multiple);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(anon_sym_multiple);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(anon_sym_home);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(anon_sym_manages);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(anon_sym_emits);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(anon_sym_publishes);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(anon_sym_consumes);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(anon_sym_primarykey);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(anon_sym_finder);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(anon_sym_porttype);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(anon_sym_port);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(anon_sym_mirrorport);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(anon_sym_connector);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(anon_sym_native);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(709);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(824);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(824);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '*')
                ADVANCE(1111);
            if(lookahead == '/')
                ADVANCE(1100);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(824);
            END_STATE();
        case 823:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(822);
            if(lookahead == '\\')
                ADVANCE(821);
            if(lookahead == '\t' ||
               (0x0b <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(823);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead))
                ADVANCE(824);
            END_STATE();
        case 824:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(824);
            END_STATE();
        case 825:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(320);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 826:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(552);
            if(lookahead == '0')
                ADVANCE(676);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(678);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(691);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 827:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(834);
            if(lookahead == '3')
                ADVANCE(830);
            if(lookahead == '6')
                ADVANCE(832);
            if(lookahead == '8')
                ADVANCE(589);
            if(lookahead == 'e')
                ADVANCE(1033);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 828:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(834);
            if(lookahead == '3')
                ADVANCE(830);
            if(lookahead == '6')
                ADVANCE(832);
            if(lookahead == '8')
                ADVANCE(589);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 829:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(835);
            if(lookahead == '3')
                ADVANCE(831);
            if(lookahead == '6')
                ADVANCE(833);
            if(lookahead == '8')
                ADVANCE(581);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 830:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(576);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 831:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(595);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 832:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(579);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 833:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 834:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 835:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 836:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(840);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 837:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'B')
                ADVANCE(850);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 838:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(670);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 839:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(672);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 840:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(842);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 841:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(843);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 842:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(839);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 843:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(838);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 844:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(960);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 845:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(892);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 846:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1034);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 847:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(879);
            if(lookahead == 'i')
                ADVANCE(1085);
            if(lookahead == 'l')
                ADVANCE(1008);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 848:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1010);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 849:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1087);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 850:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1038);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 851:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1022);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 852:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(975);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 853:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1066);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 854:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1072);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 855:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1023);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 856:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1044);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 857:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(978);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 858:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1064);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 859:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1039);
            if(lookahead == 'h')
                ADVANCE(851);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 860:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1063);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 861:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(884);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 862:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(871);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 863:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(883);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 864:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(970);
            if(lookahead == 'o')
                ADVANCE(946);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 865:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(970);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 866:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(958);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 867:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(1040);
            if(lookahead == 'n')
                ADVANCE(1086);
            if(lookahead == 't')
                ADVANCE(1054);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 868:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(963);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 869:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(964);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 870:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(1079);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 871:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(968);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 872:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(940);
            if(lookahead == 's')
                ADVANCE(1067);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 873:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(940);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 874:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(774);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 875:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(935);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 876:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(915);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 877:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(1058);
            if(lookahead == 'n')
                ADVANCE(896);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 878:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(1058);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 879:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(1060);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 880:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(1047);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 881:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(903);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 882:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(1050);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 883:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(1051);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 884:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(910);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 885:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(858);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 886:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(729);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 887:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(585);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 888:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 889:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(825);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 890:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(901);
            if(lookahead == 'i')
                ADVANCE(888);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 891:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(901);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 892:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(1004);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 893:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(1019);
            if(lookahead == 'h')
                ADVANCE(1002);
            if(lookahead == 't')
                ADVANCE(1021);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 894:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(1019);
            if(lookahead == 'h')
                ADVANCE(1002);
            if(lookahead == 't')
                ADVANCE(1026);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 895:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(1019);
            if(lookahead == 'h')
                ADVANCE(1002);
            if(lookahead == 't')
                ADVANCE(1029);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 896:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(1083);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 897:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(890);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 898:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(837);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 899:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 900:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(818);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 901:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(927);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 902:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(776);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 903:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(621);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 904:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(800);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 905:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(738);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 906:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 907:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(788);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 908:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(754);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 909:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 910:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(724);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 911:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(805);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 912:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 913:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(928);
            if(lookahead == 'o')
                ADVANCE(1076);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 914:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(887);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 915:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(1012);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 916:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(845);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 917:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(889);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 918:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(891);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 919:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(994);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 920:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(857);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 921:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(1045);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 922:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(1048);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 923:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(990);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 924:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(1068);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 925:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(880);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 926:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(993);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 927:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(780);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 928:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(854);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 929:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(861);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 930:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(572);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 931:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(610);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 932:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(612);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 933:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(574);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 934:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(991);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 935:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(786);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 936:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(851);
            if(lookahead == 'o')
                ADVANCE(996);
            if(lookahead == 'u')
                ADVANCE(1036);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 937:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(851);
            if(lookahead == 'o')
                ADVANCE(996);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 938:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(851);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 939:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(1002);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 940:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(855);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 941:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(1085);
            if(lookahead == 'l')
                ADVANCE(1008);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 942:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(1082);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 943:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(1041);
            if(lookahead == 'o')
                ADVANCE(998);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 944:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(934);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 945:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(1081);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 946:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(886);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 947:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(870);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 948:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(989);
            if(lookahead == 'n')
                ADVANCE(956);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 949:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(989);
            if(lookahead == 'n')
                ADVANCE(1035);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 950:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(874);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 951:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(985);
            if(lookahead == 'u')
                ADVANCE(882);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 952:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(985);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 953:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(1017);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 954:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(986);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 955:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(1059);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 956:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(1003);
            if(lookahead == 's')
                ADVANCE(944);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 957:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(1006);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 958:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'j')
                ADVANCE(925);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 959:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 960:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(1073);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 961:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(1008);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 962:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(1089);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 963:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(950);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 964:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(899);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 965:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(1052);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 966:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(1062);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 967:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(911);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 968:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(912);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 969:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(920);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 970:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(1080);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 971:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(1018);
            if(lookahead == 'n')
                ADVANCE(1042);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 972:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 973:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 974:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(846);
            if(lookahead == 's')
                ADVANCE(922);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 975:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(908);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 976:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(930);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 977:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(762);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 978:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(583);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 979:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(717);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 980:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1086);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 981:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1071);
            if(lookahead == 'v')
                ADVANCE(926);
            if(lookahead == 'x')
                ADVANCE(876);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 982:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1071);
            if(lookahead == 'x')
                ADVANCE(876);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 983:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1071);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 984:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1042);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 985:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(931);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 986:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(932);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 987:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(962);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 988:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(885);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 989:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1055);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 990:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(852);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 991:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(917);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 992:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1053);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 993:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1070);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 994:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(881);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 995:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(933);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 996:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1037);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 997:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(1076);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 998:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(969);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 999:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(976);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1000:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(973);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1001:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(998);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1002:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(1031);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1003:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(977);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1004:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(987);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1005:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(1024);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1006:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(979);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1007:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(995);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1008:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(856);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1009:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(1032);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1010:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1011:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(897);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1012:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(1061);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1013:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(906);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1014:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(918);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1015:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(923);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1016:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(909);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1017:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(967);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1018:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(1009);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1019:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(1074);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1020:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(942);
            if(lookahead == 'u')
                ADVANCE(868);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1021:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(951);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1022:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(605);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1023:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(607);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1024:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(1088);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1025:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(947);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1026:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(1078);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1027:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(954);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1028:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(1075);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1029:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(952);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1030:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(863);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1031:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(1046);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1032:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(1049);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1033:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(929);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1034:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(959);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1035:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(944);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1036:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(1057);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1037:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(1043);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1038:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(904);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1039:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(907);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1040:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(1056);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1041:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(974);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1042:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(828);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1043:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(766);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1044:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(600);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1045:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(587);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1046:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(568);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1047:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(795);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1048:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1049:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(793);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1050:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(760);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1051:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(722);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1052:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1053:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(827);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1054:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(1025);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1055:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(829);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1056:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(1030);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1057:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(1000);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1058:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(921);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1059:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(875);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1060:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(1005);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1061:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(957);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1062:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(953);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1063:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(902);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1064:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(862);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1065:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(905);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1066:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(945);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1067:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(1027);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1068:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(1091);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1069:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(1094);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1070:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(1069);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1071:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(972);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1072:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(965);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1073:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(898);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1074:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(919);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1075:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(988);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1076:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(869);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1077:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(966);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1078:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(882);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1079:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(1065);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1080:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(924);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1081:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(900);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1082:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(860);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1083:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(849);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1084:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(955);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1085:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(914);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1086:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(618);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1087:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1088:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(778);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1089:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1090:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(1011);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1091:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(1013);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1092:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(1014);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1093:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(1015);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1094:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(1016);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1095:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(691);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1096:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1096);
            END_STATE();
        case 1097:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 1098:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '*')
                ADVANCE(1112);
            if(lookahead != 0)
                ADVANCE(73);
            END_STATE();
        case 1099:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(61);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1106);
            END_STATE();
        case 1100:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(824);
            END_STATE();
        case 1101:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(1101);
            if(lookahead == '\r')
                ADVANCE(43);
            if(lookahead == '@')
                ADVANCE(749);
            END_STATE();
        case 1102:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(1105);
            if(lookahead == '\\')
                ADVANCE(61);
            if(lookahead != 0)
                ADVANCE(1106);
            END_STATE();
        case 1103:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\r')
                ADVANCE(1107);
            if(lookahead == '\\')
                ADVANCE(1103);
            if(lookahead != 0)
                ADVANCE(1106);
            END_STATE();
        case 1104:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '*')
                ADVANCE(1110);
            if(lookahead == '/')
                ADVANCE(1099);
            if(lookahead == '\\')
                ADVANCE(61);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1106);
            END_STATE();
        case 1105:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '/')
                ADVANCE(1104);
            if(lookahead == '@')
                ADVANCE(749);
            if(lookahead == '\\')
                ADVANCE(44);
            if(lookahead == '\t' ||
               (0x0b <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(1105);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead))
                ADVANCE(1106);
            END_STATE();
        case 1106:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\\')
                ADVANCE(61);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1106);
            END_STATE();
        case 1107:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\\')
                ADVANCE(61);
            if(lookahead != 0)
                ADVANCE(1106);
            END_STATE();
        case 1108:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            END_STATE();
        case 1109:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead == '*')
                ADVANCE(1112);
            if(lookahead != 0 &&
               lookahead != '/')
                ADVANCE(73);
            END_STATE();
        case 1110:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead == '\\')
                ADVANCE(61);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1106);
            END_STATE();
        case 1111:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(824);
            END_STATE();
        case 1112:
            ACCEPT_TOKEN(aux_sym_comment_token3);
            if(lookahead == '*')
                ADVANCE(1112);
            if(lookahead != 0 &&
               lookahead != '/')
                ADVANCE(73);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 564 },
    [2] = { .lex_state = 75 },
    [3] = { .lex_state = 75 },
    [4] = { .lex_state = 75 },
    [5] = { .lex_state = 75 },
    [6] = { .lex_state = 75 },
    [7] = { .lex_state = 77 },
    [8] = { .lex_state = 77 },
    [9] = { .lex_state = 77 },
    [10] = { .lex_state = 78 },
    [11] = { .lex_state = 78 },
    [12] = { .lex_state = 78 },
    [13] = { .lex_state = 78 },
    [14] = { .lex_state = 78 },
    [15] = { .lex_state = 78 },
    [16] = { .lex_state = 78 },
    [17] = { .lex_state = 78 },
    [18] = { .lex_state = 78 },
    [19] = { .lex_state = 78 },
    [20] = { .lex_state = 78 },
    [21] = { .lex_state = 78 },
    [22] = { .lex_state = 565 },
    [23] = { .lex_state = 564 },
    [24] = { .lex_state = 565 },
    [25] = { .lex_state = 565 },
    [26] = { .lex_state = 565 },
    [27] = { .lex_state = 565 },
    [28] = { .lex_state = 565 },
    [29] = { .lex_state = 565 },
    [30] = { .lex_state = 565 },
    [31] = { .lex_state = 64 },
    [32] = { .lex_state = 64 },
    [33] = { .lex_state = 79 },
    [34] = { .lex_state = 80 },
    [35] = { .lex_state = 69 },
    [36] = { .lex_state = 69 },
    [37] = { .lex_state = 69 },
    [38] = { .lex_state = 69 },
    [39] = { .lex_state = 69 },
    [40] = { .lex_state = 69 },
    [41] = { .lex_state = 69 },
    [42] = { .lex_state = 69 },
    [43] = { .lex_state = 69 },
    [44] = { .lex_state = 69 },
    [45] = { .lex_state = 69 },
    [46] = { .lex_state = 81 },
    [47] = { .lex_state = 81 },
    [48] = { .lex_state = 81 },
    [49] = { .lex_state = 69 },
    [50] = { .lex_state = 82 },
    [51] = { .lex_state = 69 },
    [52] = { .lex_state = 75 },
    [53] = { .lex_state = 75 },
    [54] = { .lex_state = 75 },
    [55] = { .lex_state = 75 },
    [56] = { .lex_state = 75 },
    [57] = { .lex_state = 75 },
    [58] = { .lex_state = 75 },
    [59] = { .lex_state = 82 },
    [60] = { .lex_state = 69 },
    [61] = { .lex_state = 77 },
    [62] = { .lex_state = 77 },
    [63] = { .lex_state = 69 },
    [64] = { .lex_state = 69 },
    [65] = { .lex_state = 69 },
    [66] = { .lex_state = 77 },
    [67] = { .lex_state = 69 },
    [68] = { .lex_state = 69 },
    [69] = { .lex_state = 69 },
    [70] = { .lex_state = 69 },
    [71] = { .lex_state = 69 },
    [72] = { .lex_state = 77 },
    [73] = { .lex_state = 78 },
    [74] = { .lex_state = 78 },
    [75] = { .lex_state = 85 },
    [76] = { .lex_state = 85 },
    [77] = { .lex_state = 79 },
    [78] = { .lex_state = 79 },
    [79] = { .lex_state = 69 },
    [80] = { .lex_state = 81 },
    [81] = { .lex_state = 69 },
    [82] = { .lex_state = 69 },
    [83] = { .lex_state = 69 },
    [84] = { .lex_state = 69 },
    [85] = { .lex_state = 69 },
    [86] = { .lex_state = 81 },
    [87] = { .lex_state = 81 },
    [88] = { .lex_state = 81 },
    [89] = { .lex_state = 69 },
    [90] = { .lex_state = 81 },
    [91] = { .lex_state = 69 },
    [92] = { .lex_state = 69 },
    [93] = { .lex_state = 69 },
    [94] = { .lex_state = 69 },
    [95] = { .lex_state = 69 },
    [96] = { .lex_state = 63 },
    [97] = { .lex_state = 63 },
    [98] = { .lex_state = 564 },
    [99] = { .lex_state = 69 },
    [100] = { .lex_state = 63 },
    [101] = { .lex_state = 86 },
    [102] = { .lex_state = 565 },
    [103] = { .lex_state = 565 },
    [104] = { .lex_state = 565 },
    [105] = { .lex_state = 565 },
    [106] = { .lex_state = 565 },
    [107] = { .lex_state = 564 },
    [108] = { .lex_state = 564 },
    [109] = { .lex_state = 564 },
    [110] = { .lex_state = 565 },
    [111] = { .lex_state = 565 },
    [112] = { .lex_state = 65 },
    [113] = { .lex_state = 65 },
    [114] = { .lex_state = 65 },
    [115] = { .lex_state = 65 },
    [116] = { .lex_state = 65 },
    [117] = { .lex_state = 65 },
    [118] = { .lex_state = 65 },
    [119] = { .lex_state = 65 },
    [120] = { .lex_state = 65 },
    [121] = { .lex_state = 65 },
    [122] = { .lex_state = 65 },
    [123] = { .lex_state = 65 },
    [124] = { .lex_state = 65 },
    [125] = { .lex_state = 65 },
    [126] = { .lex_state = 65 },
    [127] = { .lex_state = 65 },
    [128] = { .lex_state = 65 },
    [129] = { .lex_state = 564 },
    [130] = { .lex_state = 65 },
    [131] = { .lex_state = 65 },
    [132] = { .lex_state = 65 },
    [133] = { .lex_state = 65 },
    [134] = { .lex_state = 63 },
    [135] = { .lex_state = 63 },
    [136] = { .lex_state = 65 },
    [137] = { .lex_state = 63 },
    [138] = { .lex_state = 65 },
    [139] = { .lex_state = 65 },
    [140] = { .lex_state = 564 },
    [141] = { .lex_state = 564 },
    [142] = { .lex_state = 63 },
    [143] = { .lex_state = 565 },
    [144] = { .lex_state = 63 },
    [145] = { .lex_state = 565 },
    [146] = { .lex_state = 63 },
    [147] = { .lex_state = 63 },
    [148] = { .lex_state = 565 },
    [149] = { .lex_state = 565 },
    [150] = { .lex_state = 565 },
    [151] = { .lex_state = 63 },
    [152] = { .lex_state = 565 },
    [153] = { .lex_state = 565 },
    [154] = { .lex_state = 565 },
    [155] = { .lex_state = 565 },
    [156] = { .lex_state = 565 },
    [157] = { .lex_state = 565 },
    [158] = { .lex_state = 565 },
    [159] = { .lex_state = 565 },
    [160] = { .lex_state = 565 },
    [161] = { .lex_state = 63 },
    [162] = { .lex_state = 65 },
    [163] = { .lex_state = 565 },
    [164] = { .lex_state = 565 },
    [165] = { .lex_state = 564 },
    [166] = { .lex_state = 564 },
    [167] = { .lex_state = 565 },
    [168] = { .lex_state = 565 },
    [169] = { .lex_state = 63 },
    [170] = { .lex_state = 63 },
    [171] = { .lex_state = 63 },
    [172] = { .lex_state = 63 },
    [173] = { .lex_state = 67 },
    [174] = { .lex_state = 67 },
    [175] = { .lex_state = 65 },
    [176] = { .lex_state = 63 },
    [177] = { .lex_state = 564 },
    [178] = { .lex_state = 67 },
    [179] = { .lex_state = 67 },
    [180] = { .lex_state = 63 },
    [181] = { .lex_state = 63 },
    [182] = { .lex_state = 63 },
    [183] = { .lex_state = 63 },
    [184] = { .lex_state = 63 },
    [185] = { .lex_state = 63 },
    [186] = { .lex_state = 63 },
    [187] = { .lex_state = 63 },
    [188] = { .lex_state = 67 },
    [189] = { .lex_state = 564 },
    [190] = { .lex_state = 67 },
    [191] = { .lex_state = 66 },
    [192] = { .lex_state = 564 },
    [193] = { .lex_state = 68 },
    [194] = { .lex_state = 564 },
    [195] = { .lex_state = 88 },
    [196] = { .lex_state = 68 },
    [197] = { .lex_state = 63 },
    [198] = { .lex_state = 68 },
    [199] = { .lex_state = 68 },
    [200] = { .lex_state = 564 },
    [201] = { .lex_state = 68 },
    [202] = { .lex_state = 565 },
    [203] = { .lex_state = 83 },
    [204] = { .lex_state = 63 },
    [205] = { .lex_state = 564 },
    [206] = { .lex_state = 88 },
    [207] = { .lex_state = 564 },
    [208] = { .lex_state = 564 },
    [209] = { .lex_state = 84 },
    [210] = { .lex_state = 68 },
    [211] = { .lex_state = 68 },
    [212] = { .lex_state = 564 },
    [213] = { .lex_state = 564 },
    [214] = { .lex_state = 565 },
    [215] = { .lex_state = 564 },
    [216] = { .lex_state = 564 },
    [217] = { .lex_state = 68 },
    [218] = { .lex_state = 63 },
    [219] = { .lex_state = 565 },
    [220] = { .lex_state = 565 },
    [221] = { .lex_state = 68 },
    [222] = { .lex_state = 68 },
    [223] = { .lex_state = 564 },
    [224] = { .lex_state = 564 },
    [225] = { .lex_state = 565 },
    [226] = { .lex_state = 564 },
    [227] = { .lex_state = 87 },
    [228] = { .lex_state = 68 },
    [229] = { .lex_state = 68 },
    [230] = { .lex_state = 88 },
    [231] = { .lex_state = 67 },
    [232] = { .lex_state = 564 },
    [233] = { .lex_state = 84 },
    [234] = { .lex_state = 68 },
    [235] = { .lex_state = 564 },
    [236] = { .lex_state = 68 },
    [237] = { .lex_state = 68 },
    [238] = { .lex_state = 68 },
    [239] = { .lex_state = 68 },
    [240] = { .lex_state = 0 },
    [241] = { .lex_state = 564 },
    [242] = { .lex_state = 68 },
    [243] = { .lex_state = 68 },
    [244] = { .lex_state = 68 },
    [245] = { .lex_state = 0 },
    [246] = { .lex_state = 70 },
    [247] = { .lex_state = 43 },
    [248] = { .lex_state = 70 },
    [249] = { .lex_state = 564 },
    [250] = { .lex_state = 564 },
    [251] = { .lex_state = 68 },
    [252] = { .lex_state = 43 },
    [253] = { .lex_state = 68 },
    [254] = { .lex_state = 68 },
    [255] = { .lex_state = 564 },
    [256] = { .lex_state = 564 },
    [257] = { .lex_state = 564 },
    [258] = { .lex_state = 68 },
    [259] = { .lex_state = 43 },
    [260] = { .lex_state = 43 },
    [261] = { .lex_state = 43 },
    [262] = { .lex_state = 68 },
    [263] = { .lex_state = 68 },
    [264] = { .lex_state = 565 },
    [265] = { .lex_state = 68 },
    [266] = { .lex_state = 68 },
    [267] = { .lex_state = 70 },
    [268] = { .lex_state = 68 },
    [269] = { .lex_state = 68 },
    [270] = { .lex_state = 88 },
    [271] = { .lex_state = 565 },
    [272] = { .lex_state = 68 },
    [273] = { .lex_state = 564 },
    [274] = { .lex_state = 1105 },
    [275] = { .lex_state = 68 },
    [276] = { .lex_state = 564 },
    [277] = { .lex_state = 564 },
    [278] = { .lex_state = 88 },
    [279] = { .lex_state = 68 },
    [280] = { .lex_state = 564 },
    [281] = { .lex_state = 564 },
    [282] = { .lex_state = 68 },
    [283] = { .lex_state = 564 },
    [284] = { .lex_state = 564 },
    [285] = { .lex_state = 564 },
    [286] = { .lex_state = 68 },
    [287] = { .lex_state = 88 },
    [288] = { .lex_state = 564 },
    [289] = { .lex_state = 68 },
    [290] = { .lex_state = 565 },
    [291] = { .lex_state = 564 },
    [292] = { .lex_state = 564 },
    [293] = { .lex_state = 68 },
    [294] = { .lex_state = 564 },
    [295] = { .lex_state = 43 },
    [296] = { .lex_state = 564 },
    [297] = { .lex_state = 564 },
    [298] = { .lex_state = 68 },
    [299] = { .lex_state = 0 },
    [300] = { .lex_state = 0 },
    [301] = { .lex_state = 68 },
    [302] = { .lex_state = 68 },
    [303] = { .lex_state = 0 },
    [304] = { .lex_state = 75 },
    [305] = { .lex_state = 75 },
    [306] = { .lex_state = 68 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 564 },
    [309] = { .lex_state = 68 },
    [310] = { .lex_state = 68 },
    [311] = { .lex_state = 0 },
    [312] = { .lex_state = 0 },
    [313] = { .lex_state = 565 },
    [314] = { .lex_state = 0 },
    [315] = { .lex_state = 68 },
    [316] = { .lex_state = 75 },
    [317] = { .lex_state = 68 },
    [318] = { .lex_state = 68 },
    [319] = { .lex_state = 564 },
    [320] = { .lex_state = 68 },
    [321] = { .lex_state = 68 },
    [322] = { .lex_state = 564 },
    [323] = { .lex_state = 0 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 68 },
    [326] = { .lex_state = 75 },
    [327] = { .lex_state = 68 },
    [328] = { .lex_state = 0 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 0 },
    [331] = { .lex_state = 564 },
    [332] = { .lex_state = 68 },
    [333] = { .lex_state = 68 },
    [334] = { .lex_state = 564 },
    [335] = { .lex_state = 68 },
    [336] = { .lex_state = 68 },
    [337] = { .lex_state = 68 },
    [338] = { .lex_state = 75 },
    [339] = { .lex_state = 564 },
    [340] = { .lex_state = 564 },
    [341] = { .lex_state = 0 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 68 },
    [344] = { .lex_state = 68 },
    [345] = { .lex_state = 75 },
    [346] = { .lex_state = 75 },
    [347] = { .lex_state = 0 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 564 },
    [351] = { .lex_state = 75 },
    [352] = { .lex_state = 68 },
    [353] = { .lex_state = 0 },
    [354] = { .lex_state = 0 },
    [355] = { .lex_state = 564 },
    [356] = { .lex_state = 0 },
    [357] = { .lex_state = 0 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 564 },
    [360] = { .lex_state = 564 },
    [361] = { .lex_state = 68 },
    [362] = { .lex_state = 0 },
    [363] = { .lex_state = 0 },
    [364] = { .lex_state = 89 },
    [365] = { .lex_state = 564 },
    [366] = { .lex_state = 0 },
    [367] = { .lex_state = 75 },
    [368] = { .lex_state = 68 },
    [369] = { .lex_state = 0 },
    [370] = { .lex_state = 68 },
    [371] = { .lex_state = 68 },
    [372] = { .lex_state = 0 },
    [373] = { .lex_state = 68 },
    [374] = { .lex_state = 564 },
    [375] = { .lex_state = 68 },
    [376] = { .lex_state = 68 },
    [377] = { .lex_state = 0 },
    [378] = { .lex_state = 0 },
    [379] = { .lex_state = 68 },
    [380] = { .lex_state = 68 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 564 },
    [383] = { .lex_state = 565 },
    [384] = { .lex_state = 564 },
    [385] = { .lex_state = 68 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 68 },
    [388] = { .lex_state = 564 },
    [389] = { .lex_state = 0 },
    [390] = { .lex_state = 68 },
    [391] = { .lex_state = 0 },
    [392] = { .lex_state = 0 },
    [393] = { .lex_state = 68 },
    [394] = { .lex_state = 0 },
    [395] = { .lex_state = 68 },
    [396] = { .lex_state = 68 },
    [397] = { .lex_state = 68 },
    [398] = { .lex_state = 0 },
    [399] = { .lex_state = 68 },
    [400] = { .lex_state = 68 },
    [401] = { .lex_state = 68 },
    [402] = { .lex_state = 0 },
    [403] = { .lex_state = 0 },
    [404] = { .lex_state = 0 },
    [405] = { .lex_state = 0 },
    [406] = { .lex_state = 68 },
    [407] = { .lex_state = 564 },
    [408] = { .lex_state = 68 },
    [409] = { .lex_state = 0 },
    [410] = { .lex_state = 0 },
    [411] = { .lex_state = 0 },
    [412] = { .lex_state = 68 },
    [413] = { .lex_state = 68 },
    [414] = { .lex_state = 68 },
    [415] = { .lex_state = 564 },
    [416] = { .lex_state = 0 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 0 },
    [419] = { .lex_state = 564 },
    [420] = { .lex_state = 564 },
    [421] = { .lex_state = 0 },
    [422] = { .lex_state = 0 },
    [423] = { .lex_state = 75 },
    [424] = { .lex_state = 564 },
    [425] = { .lex_state = 75 },
    [426] = { .lex_state = 68 },
    [427] = { .lex_state = 564 },
    [428] = { .lex_state = 68 },
    [429] = { .lex_state = 75 },
    [430] = { .lex_state = 68 },
    [431] = { .lex_state = 68 },
    [432] = { .lex_state = 68 },
    [433] = { .lex_state = 68 },
    [434] = { .lex_state = 70 },
    [435] = { .lex_state = 70 },
    [436] = { .lex_state = 564 },
    [437] = { .lex_state = 47 },
    [438] = { .lex_state = 68 },
    [439] = { .lex_state = 68 },
    [440] = { .lex_state = 75 },
    [441] = { .lex_state = 0 },
    [442] = { .lex_state = 564 },
    [443] = { .lex_state = 68 },
    [444] = { .lex_state = 68 },
    [445] = { .lex_state = 564 },
    [446] = { .lex_state = 0 },
    [447] = { .lex_state = 564 },
    [448] = { .lex_state = 68 },
    [449] = { .lex_state = 68 },
    [450] = { .lex_state = 564 },
    [451] = { .lex_state = 0 },
    [452] = { .lex_state = 70 },
    [453] = { .lex_state = 68 },
    [454] = { .lex_state = 68 },
    [455] = { .lex_state = 564 },
    [456] = { .lex_state = 0 },
    [457] = { .lex_state = 0 },
    [458] = { .lex_state = 68 },
    [459] = { .lex_state = 564 },
    [460] = { .lex_state = 0 },
    [461] = { .lex_state = 0 },
    [462] = { .lex_state = 0 },
    [463] = { .lex_state = 565 },
    [464] = { .lex_state = 0 },
    [465] = { .lex_state = 0 },
    [466] = { .lex_state = 0 },
    [467] = { .lex_state = 68 },
    [468] = { .lex_state = 565 },
    [469] = { .lex_state = 68 },
    [470] = { .lex_state = 68 },
    [471] = { .lex_state = 68 },
    [472] = { .lex_state = 564 },
    [473] = { .lex_state = 68 },
    [474] = { .lex_state = 68 },
    [475] = { .lex_state = 0 },
    [476] = { .lex_state = 68 },
    [477] = { .lex_state = 68 },
    [478] = { .lex_state = 0 },
    [479] = { .lex_state = 75 },
    [480] = { .lex_state = 68 },
    [481] = { .lex_state = 68 },
    [482] = { .lex_state = 68 },
    [483] = { .lex_state = 68 },
    [484] = { .lex_state = 68 },
    [485] = { .lex_state = 68 },
    [486] = { .lex_state = 68 },
    [487] = { .lex_state = 0 },
    [488] = { .lex_state = 68 },
    [489] = { .lex_state = 0 },
    [490] = { .lex_state = 0 },
    [491] = { .lex_state = 0 },
    [492] = { .lex_state = 0 },
    [493] = { .lex_state = 68 },
    [494] = { .lex_state = 68 },
    [495] = { .lex_state = 564 },
    [496] = { .lex_state = 564 },
    [497] = { .lex_state = 564 },
    [498] = { .lex_state = 0 },
    [499] = { .lex_state = 75 },
    [500] = { .lex_state = 0 },
    [501] = { .lex_state = 0 },
    [502] = { .lex_state = 68 },
    [503] = { .lex_state = 75 },
    [504] = { .lex_state = 564 },
    [505] = { .lex_state = 75 },
    [506] = { .lex_state = 68 },
    [507] = { .lex_state = 43 },
    [508] = { .lex_state = 0 },
    [509] = { .lex_state = 68 },
    [510] = { .lex_state = 68 },
    [511] = { .lex_state = 43 },
    [512] = { .lex_state = 564 },
    [513] = { .lex_state = 0 },
    [514] = { .lex_state = 68 },
    [515] = { .lex_state = 68 },
    [516] = { .lex_state = 68 },
    [517] = { .lex_state = 68 },
    [518] = { .lex_state = 0 },
    [519] = { .lex_state = 0 },
    [520] = { .lex_state = 0 },
    [521] = { .lex_state = 68 },
    [522] = { .lex_state = 0 },
    [523] = { .lex_state = 68 },
    [524] = { .lex_state = 88 },
    [525] = { .lex_state = 0 },
    [526] = { .lex_state = 88 },
    [527] = { .lex_state = 0 },
    [528] = { .lex_state = 68 },
    [529] = { .lex_state = 0 },
    [530] = { .lex_state = 75 },
    [531] = { .lex_state = 0 },
    [532] = { .lex_state = 75 },
    [533] = { .lex_state = 75 },
    [534] = { .lex_state = 68 },
    [535] = { .lex_state = 0 },
    [536] = { .lex_state = 0 },
    [537] = { .lex_state = 0 },
    [538] = { .lex_state = 0 },
    [539] = { .lex_state = 68 },
    [540] = { .lex_state = 0 },
    [541] = { .lex_state = 0 },
    [542] = { .lex_state = 68 },
    [543] = { .lex_state = 0 },
    [544] = { .lex_state = 0 },
    [545] = { .lex_state = 0 },
    [546] = { .lex_state = 0 },
    [547] = { .lex_state = 0 },
    [548] = { .lex_state = 0 },
    [549] = { .lex_state = 90 },
    [550] = { .lex_state = 0 },
    [551] = { .lex_state = 0 },
    [552] = { .lex_state = 0 },
    [553] = { .lex_state = 75 },
    [554] = { .lex_state = 75 },
    [555] = { .lex_state = 0 },
    [556] = { .lex_state = 75 },
    [557] = { .lex_state = 0 },
    [558] = { .lex_state = 0 },
    [559] = { .lex_state = 0 },
    [560] = { .lex_state = 68 },
    [561] = { .lex_state = 68 },
    [562] = { .lex_state = 0 },
    [563] = { .lex_state = 0 },
    [564] = { .lex_state = 0 },
    [565] = { .lex_state = 0 },
    [566] = { .lex_state = 0 },
    [567] = { .lex_state = 0 },
    [568] = { .lex_state = 68 },
    [569] = { .lex_state = 0 },
    [570] = { .lex_state = 0 },
    [571] = { .lex_state = 68 },
    [572] = { .lex_state = 0 },
    [573] = { .lex_state = 0 },
    [574] = { .lex_state = 0 },
    [575] = { .lex_state = 75 },
    [576] = { .lex_state = 0 },
    [577] = { .lex_state = 0 },
    [578] = { .lex_state = 68 },
    [579] = { .lex_state = 0 },
    [580] = { .lex_state = 68 },
    [581] = { .lex_state = 0 },
    [582] = { .lex_state = 0 },
    [583] = { .lex_state = 0 },
    [584] = { .lex_state = 0 },
    [585] = { .lex_state = 0 },
    [586] = { .lex_state = 0 },
    [587] = { .lex_state = 0 },
    [588] = { .lex_state = 0 },
    [589] = { .lex_state = 0 },
    [590] = { .lex_state = 68 },
    [591] = { .lex_state = 0 },
    [592] = { .lex_state = 0 },
    [593] = { .lex_state = 0 },
    [594] = { .lex_state = 68 },
    [595] = { .lex_state = 0 },
    [596] = { .lex_state = 0 },
    [597] = { .lex_state = 0 },
    [598] = { .lex_state = 0 },
    [599] = { .lex_state = 0 },
    [600] = { .lex_state = 90 },
    [601] = { .lex_state = 0 },
    [602] = { .lex_state = 0 },
    [603] = { .lex_state = 0 },
    [604] = { .lex_state = 0 },
    [605] = { .lex_state = 0 },
    [606] = { .lex_state = 0 },
    [607] = { .lex_state = 0 },
    [608] = { .lex_state = 68 },
    [609] = { .lex_state = 0 },
    [610] = { .lex_state = 68 },
    [611] = { .lex_state = 68 },
    [612] = { .lex_state = 0 },
    [613] = { .lex_state = 0 },
    [614] = { .lex_state = 0 },
    [615] = { .lex_state = 0 },
    [616] = { .lex_state = 48 },
    [617] = { .lex_state = 564 },
    [618] = { .lex_state = 0 },
    [619] = { .lex_state = 0 },
    [620] = { .lex_state = 0 },
    [621] = { .lex_state = 0 },
    [622] = { .lex_state = 0 },
    [623] = { .lex_state = 0 },
    [624] = { .lex_state = 0 },
    [625] = { .lex_state = 0 },
    [626] = { .lex_state = 75 },
    [627] = { .lex_state = 0 },
    [628] = { .lex_state = 0 },
    [629] = { .lex_state = 0 },
    [630] = { .lex_state = 564 },
    [631] = { .lex_state = 68 },
    [632] = { .lex_state = 0 },
    [633] = { .lex_state = 0 },
    [634] = { .lex_state = 0 },
    [635] = { .lex_state = 0 },
    [636] = { .lex_state = 68 },
    [637] = { .lex_state = 564 },
    [638] = { .lex_state = 0 },
    [639] = { .lex_state = 0 },
    [640] = { .lex_state = 564 },
    [641] = { .lex_state = 564 },
    [642] = { .lex_state = 0 },
    [643] = { .lex_state = 0 },
    [644] = { .lex_state = 0 },
    [645] = { .lex_state = 68 },
    [646] = { .lex_state = 0 },
    [647] = { .lex_state = 0 },
    [648] = { .lex_state = 0 },
    [649] = { .lex_state = 0 },
    [650] = { .lex_state = 68 },
    [651] = { .lex_state = 68 },
    [652] = { .lex_state = 0 },
    [653] = { .lex_state = 0 },
    [654] = { .lex_state = 68 },
    [655] = { .lex_state = 68 },
    [656] = { .lex_state = 72 },
    [657] = { .lex_state = 0 },
    [658] = { .lex_state = 75 },
    [659] = { .lex_state = 75 },
    [660] = { .lex_state = 0 },
    [661] = { .lex_state = 0 },
    [662] = { .lex_state = 0 },
    [663] = { .lex_state = 0 },
    [664] = { .lex_state = 564 },
    [665] = { .lex_state = 0 },
    [666] = { .lex_state = 0 },
    [667] = { .lex_state = 92 },
    [668] = { .lex_state = 565 },
    [669] = { .lex_state = 0 },
    [670] = { .lex_state = 0 },
    [671] = { .lex_state = 68 },
    [672] = { .lex_state = 0 },
    [673] = { .lex_state = 75 },
    [674] = { .lex_state = 0 },
    [675] = { .lex_state = 0 },
    [676] = { .lex_state = 0 },
    [677] = { .lex_state = 0 },
    [678] = { .lex_state = 0 },
    [679] = { .lex_state = 68 },
    [680] = { .lex_state = 0 },
    [681] = { .lex_state = 0 },
    [682] = { .lex_state = 0 },
    [683] = { .lex_state = 0 },
    [684] = { .lex_state = 0 },
    [685] = { .lex_state = 0 },
    [686] = { .lex_state = 68 },
    [687] = { .lex_state = 0 },
    [688] = { .lex_state = 0 },
    [689] = { .lex_state = 0 },
    [690] = { .lex_state = 0 },
    [691] = { .lex_state = 0 },
    [692] = { .lex_state = 0 },
    [693] = { .lex_state = 0 },
    [694] = { .lex_state = 0 },
    [695] = { .lex_state = 0 },
    [696] = { .lex_state = 0 },
    [697] = { .lex_state = 0 },
    [698] = { .lex_state = 75 },
    [699] = { .lex_state = 0 },
    [700] = { .lex_state = 0 },
    [701] = { .lex_state = 68 },
    [702] = { .lex_state = 565 },
    [703] = { .lex_state = 0 },
    [704] = { .lex_state = 0 },
    [705] = { .lex_state = 0 },
    [706] = { .lex_state = 0 },
    [707] = { .lex_state = 0 },
    [708] = { .lex_state = 823 },
    [709] = { .lex_state = 68 },
    [710] = { .lex_state = 68 },
    [711] = { .lex_state = 68 },
    [712] = { .lex_state = 68 },
    [713] = { .lex_state = 0 },
    [714] = { .lex_state = 0 },
    [715] = { .lex_state = 0 },
    [716] = { .lex_state = 75 },
    [717] = { .lex_state = 68 },
    [718] = { .lex_state = 0 },
    [719] = { .lex_state = 0 },
    [720] = { .lex_state = 0 },
    [721] = { .lex_state = 0 },
    [722] = { .lex_state = 0 },
    [723] = { .lex_state = 68 },
    [724] = { .lex_state = 0 },
    [725] = { .lex_state = 68 },
    [726] = { .lex_state = 68 },
    [727] = { .lex_state = 75 },
    [728] = { .lex_state = 0 },
    [729] = { .lex_state = 0 },
    [730] = { .lex_state = 0 },
    [731] = { .lex_state = 68 },
    [732] = { .lex_state = 68 },
    [733] = { .lex_state = 68 },
    [734] = { .lex_state = 564 },
    [735] = { .lex_state = 68 },
    [736] = { .lex_state = 564 },
    [737] = { .lex_state = 0 },
    [738] = { .lex_state = 0 },
    [739] = { .lex_state = 68 },
    [740] = { .lex_state = 68 },
    [741] = { .lex_state = 68 },
    [742] = { .lex_state = 68 },
    [743] = { .lex_state = 68 },
    [744] = { .lex_state = 0 },
    [745] = { .lex_state = 68 },
    [746] = { .lex_state = 75 },
    [747] = { .lex_state = 68 },
    [748] = { .lex_state = 68 },
    [749] = { .lex_state = 68 },
    [750] = { .lex_state = 68 },
    [751] = { .lex_state = 0 },
    [752] = { .lex_state = 0 },
    [753] = { .lex_state = 0 },
    [754] = { .lex_state = 68 },
    [755] = { .lex_state = 68 },
    [756] = { .lex_state = 0 },
    [757] = { .lex_state = 68 },
    [758] = { .lex_state = 0 },
    [759] = { .lex_state = 75 },
    [760] = { .lex_state = 68 },
    [761] = { .lex_state = 68 },
    [762] = { .lex_state = 0 },
    [763] = { .lex_state = 75 },
    [764] = { .lex_state = 0 },
    [765] = { .lex_state = 0 },
    [766] = { .lex_state = 68 },
    [767] = { .lex_state = 0 },
    [768] = { .lex_state = 92 },
    [769] = { .lex_state = 564 },
    [770] = { (TSStateId)(-1) },
    [771] = { (TSStateId)(-1) },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_comment] = STATE(0),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_short] = ACTIONS(1),
        [anon_sym_long] = ACTIONS(1),
        [anon_sym_longlong] = ACTIONS(1),
        [sym_unsigned_tiny_int] = ACTIONS(1),
        [sym_boolean_type] = ACTIONS(1),
        [anon_sym_fixed] = ACTIONS(1),
        [sym_octet_type] = ACTIONS(1),
        [anon_sym_unsignedshort] = ACTIONS(1),
        [anon_sym_uint16] = ACTIONS(1),
        [anon_sym_unsignedlong] = ACTIONS(1),
        [anon_sym_uint32] = ACTIONS(1),
        [anon_sym_unsignedlonglong] = ACTIONS(1),
        [anon_sym_uint64] = ACTIONS(1),
        [anon_sym_float] = ACTIONS(1),
        [anon_sym_double] = ACTIONS(1),
        [anon_sym_longdouble] = ACTIONS(1),
        [anon_sym_char] = ACTIONS(1),
        [anon_sym_wchar] = ACTIONS(1),
        [anon_sym_COLON_COLON] = ACTIONS(1),
        [anon_sym_string] = ACTIONS(1),
        [anon_sym_wstring] = ACTIONS(1),
        [anon_sym_LT] = ACTIONS(1),
        [anon_sym_GT] = ACTIONS(1),
        [anon_sym_any] = ACTIONS(1),
        [anon_sym_COMMA] = ACTIONS(1),
        [anon_sym_sequence] = ACTIONS(1),
        [anon_sym_map] = ACTIONS(1),
        [anon_sym_PIPE] = ACTIONS(1),
        [anon_sym_CARET] = ACTIONS(1),
        [anon_sym_DOLLAR] = ACTIONS(1),
        [anon_sym_GT_GT] = ACTIONS(1),
        [anon_sym_LT_LT] = ACTIONS(1),
        [anon_sym_PLUS] = ACTIONS(1),
        [anon_sym_DASH] = ACTIONS(1),
        [anon_sym_STAR] = ACTIONS(1),
        [anon_sym_SLASH] = ACTIONS(1),
        [anon_sym_PERCENT] = ACTIONS(1),
        [anon_sym_LPAREN] = ACTIONS(1),
        [anon_sym_RPAREN] = ACTIONS(1),
        [anon_sym_TILDE] = ACTIONS(1),
        [anon_sym_L] = ACTIONS(1),
        [anon_sym_DQUOTE] = ACTIONS(1),
        [anon_sym_SQUOTE] = ACTIONS(1),
        [aux_sym_char_literal_token1] = ACTIONS(1),
        [anon_sym_TRUE] = ACTIONS(1),
        [anon_sym_FALSE] = ACTIONS(1),
        [sym_preproc_directive] = ACTIONS(1),
        [anon_sym_exception] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(1),
        [anon_sym_RBRACE] = ACTIONS(1),
        [anon_sym_local] = ACTIONS(1),
        [anon_sym_abstract] = ACTIONS(1),
        [anon_sym_COLON] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(1),
        [anon_sym_void] = ACTIONS(1),
        [anon_sym_in] = ACTIONS(1),
        [anon_sym_out] = ACTIONS(1),
        [anon_sym_inout] = ACTIONS(1),
        [anon_sym_raises] = ACTIONS(1),
        [anon_sym_readonly] = ACTIONS(1),
        [anon_sym_attribute] = ACTIONS(1),
        [anon_sym_getraises] = ACTIONS(1),
        [anon_sym_setraises] = ACTIONS(1),
        [anon_sym_bitset] = ACTIONS(1),
        [anon_sym_bitfield] = ACTIONS(1),
        [anon_sym_bitmask] = ACTIONS(1),
        [anon_sym_ATannotation] = ACTIONS(1),
        [anon_sym_default] = ACTIONS(1),
        [anon_sym_AT] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [anon_sym_module] = ACTIONS(1),
        [anon_sym_typename] = ACTIONS(1),
        [anon_sym_valuetype] = ACTIONS(1),
        [anon_sym_eventtype] = ACTIONS(1),
        [anon_sym_struct] = ACTIONS(1),
        [anon_sym_union] = ACTIONS(1),
        [anon_sym_enum] = ACTIONS(1),
        [anon_sym_const] = ACTIONS(1),
        [anon_sym_alias] = ACTIONS(1),
        [anon_sym_custom] = ACTIONS(1),
        [anon_sym_truncatable] = ACTIONS(1),
        [anon_sym_supports] = ACTIONS(1),
        [anon_sym_public] = ACTIONS(1),
        [anon_sym_private] = ACTIONS(1),
        [anon_sym_factory] = ACTIONS(1),
        [anon_sym_typedef] = ACTIONS(1),
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_ATdefault_literal] = ACTIONS(1),
        [anon_sym_ATignore_literal_names] = ACTIONS(1),
        [anon_sym_switch] = ACTIONS(1),
        [anon_sym_case] = ACTIONS(1),
        [anon_sym_typeid] = ACTIONS(1),
        [anon_sym_typeprefix] = ACTIONS(1),
        [anon_sym_import] = ACTIONS(1),
        [anon_sym_Object] = ACTIONS(1),
        [anon_sym_oneway] = ACTIONS(1),
        [anon_sym_context] = ACTIONS(1),
        [sym_value_base_type] = ACTIONS(1),
        [anon_sym_component] = ACTIONS(1),
        [anon_sym_provides] = ACTIONS(1),
        [anon_sym_uses] = ACTIONS(1),
        [anon_sym_multiple] = ACTIONS(1),
        [anon_sym_home] = ACTIONS(1),
        [anon_sym_manages] = ACTIONS(1),
        [anon_sym_emits] = ACTIONS(1),
        [anon_sym_publishes] = ACTIONS(1),
        [anon_sym_consumes] = ACTIONS(1),
        [anon_sym_primarykey] = ACTIONS(1),
        [anon_sym_finder] = ACTIONS(1),
        [anon_sym_port] = ACTIONS(1),
        [anon_sym_mirrorport] = ACTIONS(1),
        [anon_sym_connector] = ACTIONS(1),
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [1] = {
        [sym_specification] = STATE(706),
        [sym_preproc_call] = STATE(108),
        [sym_except_dcl] = STATE(703),
        [sym_interface_dcl] = STATE(703),
        [sym_interface_kind] = STATE(701),
        [sym_interface_forward_dcl] = STATE(687),
        [sym_interface_def] = STATE(687),
        [sym_interface_header] = STATE(675),
        [sym_bitset_dcl] = STATE(703),
        [sym_bitmask_dcl] = STATE(703),
        [sym_annotation_dcl] = STATE(703),
        [sym_annotation_appl] = STATE(204),
        [sym_template_module_dcl] = STATE(703),
        [sym_template_module_inst] = STATE(703),
        [sym_value_dcl] = STATE(703),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(703),
        [sym_enum_dcl] = STATE(703),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(703),
        [sym_union_def] = STATE(703),
        [sym_type_id_dcl] = STATE(703),
        [sym_type_prefix_dcl] = STATE(703),
        [sym_import_dcl] = STATE(703),
        [sym_value_abs_def] = STATE(672),
        [sym_component_dcl] = STATE(703),
        [sym_component_forward_dcl] = STATE(662),
        [sym_component_def] = STATE(662),
        [sym_component_header] = STATE(660),
        [sym_home_dcl] = STATE(703),
        [sym_home_header] = STATE(657),
        [sym_event_dcl] = STATE(703),
        [sym_event_forward_dcl] = STATE(541),
        [sym_event_abs_def] = STATE(541),
        [sym_event_def] = STATE(541),
        [sym_event_header] = STATE(642),
        [sym_porttype_dcl] = STATE(703),
        [sym_porttype_forward_dcl] = STATE(639),
        [sym_porttype_def] = STATE(639),
        [sym_connector_dcl] = STATE(703),
        [sym_connector_header] = STATE(638),
        [sym__definition] = STATE(106),
        [sym_native_dcl] = STATE(703),
        [sym_module_dcl] = STATE(703),
        [sym_struct_forward_dcl] = STATE(703),
        [sym_struct_def] = STATE(703),
        [sym_predefine] = STATE(102),
        [sym_const_dcl] = STATE(703),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(23),
        [aux_sym_specification_repeat2] = STATE(30),
        [aux_sym_interface_def_repeat1] = STATE(169),
        [ts_builtin_sym_end] = ACTIONS(7),
        [sym_preproc_directive] = ACTIONS(9),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_eventtype] = ACTIONS(31),
        [anon_sym_struct] = ACTIONS(33),
        [anon_sym_union] = ACTIONS(35),
        [anon_sym_enum] = ACTIONS(37),
        [anon_sym_const] = ACTIONS(39),
        [anon_sym_custom] = ACTIONS(41),
        [anon_sym_typedef] = ACTIONS(43),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(47),
        [anon_sym_typeprefix] = ACTIONS(49),
        [anon_sym_import] = ACTIONS(51),
        [anon_sym_component] = ACTIONS(53),
        [anon_sym_home] = ACTIONS(55),
        [anon_sym_porttype] = ACTIONS(57),
        [anon_sym_connector] = ACTIONS(59),
        [anon_sym_native] = ACTIONS(61),
        [anon_sym_POUNDdefine] = ACTIONS(63),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [2] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(756),
        [sym_export] = STATE(57),
        [sym_op_dcl] = STATE(319),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(756),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(756),
        [sym_bitmask_dcl] = STATE(756),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(756),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_element] = STATE(56),
        [sym_state_member] = STATE(57),
        [sym_init_dcl] = STATE(57),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(756),
        [sym_enum_dcl] = STATE(756),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(756),
        [sym_union_def] = STATE(756),
        [sym_type_id_dcl] = STATE(756),
        [sym_import_dcl] = STATE(756),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(319),
        [sym_op_with_context] = STATE(756),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(756),
        [sym_struct_forward_dcl] = STATE(756),
        [sym_struct_def] = STATE(756),
        [sym_const_dcl] = STATE(756),
        [sym_comment] = STATE(2),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_value_def_repeat1] = STATE(6),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(109),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_public] = ACTIONS(137),
        [anon_sym_private] = ACTIONS(137),
        [anon_sym_factory] = ACTIONS(139),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [3] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(756),
        [sym_export] = STATE(57),
        [sym_op_dcl] = STATE(319),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(756),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(756),
        [sym_bitmask_dcl] = STATE(756),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(756),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_element] = STATE(56),
        [sym_state_member] = STATE(57),
        [sym_init_dcl] = STATE(57),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(756),
        [sym_enum_dcl] = STATE(756),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(756),
        [sym_union_def] = STATE(756),
        [sym_type_id_dcl] = STATE(756),
        [sym_import_dcl] = STATE(756),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(319),
        [sym_op_with_context] = STATE(756),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(756),
        [sym_struct_forward_dcl] = STATE(756),
        [sym_struct_def] = STATE(756),
        [sym_const_dcl] = STATE(756),
        [sym_comment] = STATE(3),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_value_def_repeat1] = STATE(6),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(155),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_public] = ACTIONS(137),
        [anon_sym_private] = ACTIONS(137),
        [anon_sym_factory] = ACTIONS(139),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [4] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(756),
        [sym_export] = STATE(57),
        [sym_op_dcl] = STATE(319),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(756),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(756),
        [sym_bitmask_dcl] = STATE(756),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(756),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_element] = STATE(56),
        [sym_state_member] = STATE(57),
        [sym_init_dcl] = STATE(57),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(756),
        [sym_enum_dcl] = STATE(756),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(756),
        [sym_union_def] = STATE(756),
        [sym_type_id_dcl] = STATE(756),
        [sym_import_dcl] = STATE(756),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(319),
        [sym_op_with_context] = STATE(756),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(756),
        [sym_struct_forward_dcl] = STATE(756),
        [sym_struct_def] = STATE(756),
        [sym_const_dcl] = STATE(756),
        [sym_comment] = STATE(4),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_value_def_repeat1] = STATE(3),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(157),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_public] = ACTIONS(137),
        [anon_sym_private] = ACTIONS(137),
        [anon_sym_factory] = ACTIONS(139),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [5] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(756),
        [sym_export] = STATE(57),
        [sym_op_dcl] = STATE(319),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(756),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(756),
        [sym_bitmask_dcl] = STATE(756),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(756),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_element] = STATE(56),
        [sym_state_member] = STATE(57),
        [sym_init_dcl] = STATE(57),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(756),
        [sym_enum_dcl] = STATE(756),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(756),
        [sym_union_def] = STATE(756),
        [sym_type_id_dcl] = STATE(756),
        [sym_import_dcl] = STATE(756),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(319),
        [sym_op_with_context] = STATE(756),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(756),
        [sym_struct_forward_dcl] = STATE(756),
        [sym_struct_def] = STATE(756),
        [sym_const_dcl] = STATE(756),
        [sym_comment] = STATE(5),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_value_def_repeat1] = STATE(2),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(159),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_public] = ACTIONS(137),
        [anon_sym_private] = ACTIONS(137),
        [anon_sym_factory] = ACTIONS(139),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [6] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(756),
        [sym_export] = STATE(57),
        [sym_op_dcl] = STATE(319),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(756),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(756),
        [sym_bitmask_dcl] = STATE(756),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(756),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_element] = STATE(56),
        [sym_state_member] = STATE(57),
        [sym_init_dcl] = STATE(57),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(756),
        [sym_enum_dcl] = STATE(756),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(756),
        [sym_union_def] = STATE(756),
        [sym_type_id_dcl] = STATE(756),
        [sym_import_dcl] = STATE(756),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(319),
        [sym_op_with_context] = STATE(756),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(756),
        [sym_struct_forward_dcl] = STATE(756),
        [sym_struct_def] = STATE(756),
        [sym_const_dcl] = STATE(756),
        [sym_comment] = STATE(6),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_value_def_repeat1] = STATE(6),
        [anon_sym_short] = ACTIONS(161),
        [anon_sym_int16] = ACTIONS(161),
        [anon_sym_long] = ACTIONS(164),
        [anon_sym_int32] = ACTIONS(164),
        [anon_sym_longlong] = ACTIONS(167),
        [anon_sym_int64] = ACTIONS(170),
        [sym_unsigned_tiny_int] = ACTIONS(173),
        [sym_boolean_type] = ACTIONS(176),
        [anon_sym_fixed] = ACTIONS(179),
        [sym_octet_type] = ACTIONS(176),
        [sym_signed_tiny_int] = ACTIONS(182),
        [anon_sym_unsignedshort] = ACTIONS(185),
        [anon_sym_uint16] = ACTIONS(188),
        [anon_sym_unsignedlong] = ACTIONS(191),
        [anon_sym_uint32] = ACTIONS(191),
        [anon_sym_unsignedlonglong] = ACTIONS(194),
        [anon_sym_uint64] = ACTIONS(197),
        [anon_sym_float] = ACTIONS(200),
        [anon_sym_double] = ACTIONS(200),
        [anon_sym_longdouble] = ACTIONS(203),
        [anon_sym_char] = ACTIONS(206),
        [anon_sym_wchar] = ACTIONS(206),
        [anon_sym_COLON_COLON] = ACTIONS(209),
        [anon_sym_string] = ACTIONS(212),
        [anon_sym_wstring] = ACTIONS(212),
        [anon_sym_any] = ACTIONS(215),
        [anon_sym_sequence] = ACTIONS(218),
        [anon_sym_map] = ACTIONS(221),
        [anon_sym_exception] = ACTIONS(224),
        [anon_sym_RBRACE] = ACTIONS(227),
        [anon_sym_abstract] = ACTIONS(229),
        [anon_sym_void] = ACTIONS(232),
        [anon_sym_readonly] = ACTIONS(235),
        [anon_sym_attribute] = ACTIONS(238),
        [anon_sym_bitset] = ACTIONS(241),
        [anon_sym_bitmask] = ACTIONS(244),
        [anon_sym_AT] = ACTIONS(247),
        [anon_sym_valuetype] = ACTIONS(250),
        [anon_sym_struct] = ACTIONS(253),
        [anon_sym_union] = ACTIONS(256),
        [anon_sym_enum] = ACTIONS(259),
        [anon_sym_const] = ACTIONS(262),
        [anon_sym_custom] = ACTIONS(265),
        [anon_sym_public] = ACTIONS(268),
        [anon_sym_private] = ACTIONS(268),
        [anon_sym_factory] = ACTIONS(271),
        [anon_sym_typedef] = ACTIONS(274),
        [anon_sym_ATignore_literal_names] = ACTIONS(277),
        [anon_sym_typeid] = ACTIONS(280),
        [anon_sym_import] = ACTIONS(283),
        [anon_sym_Object] = ACTIONS(286),
        [anon_sym_oneway] = ACTIONS(289),
        [sym_value_base_type] = ACTIONS(176),
        [anon_sym_native] = ACTIONS(292),
        [sym_identifier] = ACTIONS(295),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [7] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(762),
        [sym_export] = STATE(66),
        [sym_op_dcl] = STATE(308),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(762),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(762),
        [sym_bitmask_dcl] = STATE(762),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(762),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(762),
        [sym_enum_dcl] = STATE(762),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(762),
        [sym_union_def] = STATE(762),
        [sym_type_id_dcl] = STATE(762),
        [sym_import_dcl] = STATE(762),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(308),
        [sym_op_with_context] = STATE(762),
        [sym_value_abs_def] = STATE(672),
        [sym_home_body] = STATE(680),
        [sym_home_export] = STATE(61),
        [sym_factory_dcl] = STATE(682),
        [sym_native_dcl] = STATE(762),
        [sym_struct_forward_dcl] = STATE(762),
        [sym_struct_def] = STATE(762),
        [sym_const_dcl] = STATE(762),
        [sym_comment] = STATE(7),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_home_body_repeat1] = STATE(9),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(298),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_factory] = ACTIONS(300),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [8] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(762),
        [sym_export] = STATE(66),
        [sym_op_dcl] = STATE(308),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(762),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(762),
        [sym_bitmask_dcl] = STATE(762),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(762),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(762),
        [sym_enum_dcl] = STATE(762),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(762),
        [sym_union_def] = STATE(762),
        [sym_type_id_dcl] = STATE(762),
        [sym_import_dcl] = STATE(762),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(308),
        [sym_op_with_context] = STATE(762),
        [sym_value_abs_def] = STATE(672),
        [sym_home_export] = STATE(61),
        [sym_factory_dcl] = STATE(682),
        [sym_native_dcl] = STATE(762),
        [sym_struct_forward_dcl] = STATE(762),
        [sym_struct_def] = STATE(762),
        [sym_const_dcl] = STATE(762),
        [sym_comment] = STATE(8),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_home_body_repeat1] = STATE(8),
        [anon_sym_short] = ACTIONS(302),
        [anon_sym_int16] = ACTIONS(302),
        [anon_sym_long] = ACTIONS(305),
        [anon_sym_int32] = ACTIONS(305),
        [anon_sym_longlong] = ACTIONS(308),
        [anon_sym_int64] = ACTIONS(311),
        [sym_unsigned_tiny_int] = ACTIONS(314),
        [sym_boolean_type] = ACTIONS(317),
        [anon_sym_fixed] = ACTIONS(320),
        [sym_octet_type] = ACTIONS(317),
        [sym_signed_tiny_int] = ACTIONS(323),
        [anon_sym_unsignedshort] = ACTIONS(326),
        [anon_sym_uint16] = ACTIONS(329),
        [anon_sym_unsignedlong] = ACTIONS(332),
        [anon_sym_uint32] = ACTIONS(332),
        [anon_sym_unsignedlonglong] = ACTIONS(335),
        [anon_sym_uint64] = ACTIONS(338),
        [anon_sym_float] = ACTIONS(341),
        [anon_sym_double] = ACTIONS(341),
        [anon_sym_longdouble] = ACTIONS(344),
        [anon_sym_char] = ACTIONS(347),
        [anon_sym_wchar] = ACTIONS(347),
        [anon_sym_COLON_COLON] = ACTIONS(350),
        [anon_sym_string] = ACTIONS(353),
        [anon_sym_wstring] = ACTIONS(353),
        [anon_sym_any] = ACTIONS(356),
        [anon_sym_sequence] = ACTIONS(359),
        [anon_sym_map] = ACTIONS(362),
        [anon_sym_exception] = ACTIONS(365),
        [anon_sym_RBRACE] = ACTIONS(368),
        [anon_sym_abstract] = ACTIONS(370),
        [anon_sym_void] = ACTIONS(373),
        [anon_sym_readonly] = ACTIONS(376),
        [anon_sym_attribute] = ACTIONS(379),
        [anon_sym_bitset] = ACTIONS(382),
        [anon_sym_bitmask] = ACTIONS(385),
        [anon_sym_AT] = ACTIONS(388),
        [anon_sym_valuetype] = ACTIONS(391),
        [anon_sym_struct] = ACTIONS(394),
        [anon_sym_union] = ACTIONS(397),
        [anon_sym_enum] = ACTIONS(400),
        [anon_sym_const] = ACTIONS(403),
        [anon_sym_custom] = ACTIONS(406),
        [anon_sym_factory] = ACTIONS(409),
        [anon_sym_typedef] = ACTIONS(412),
        [anon_sym_ATignore_literal_names] = ACTIONS(415),
        [anon_sym_typeid] = ACTIONS(418),
        [anon_sym_import] = ACTIONS(421),
        [anon_sym_Object] = ACTIONS(424),
        [anon_sym_oneway] = ACTIONS(427),
        [sym_value_base_type] = ACTIONS(317),
        [anon_sym_native] = ACTIONS(430),
        [sym_identifier] = ACTIONS(433),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [9] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(762),
        [sym_export] = STATE(66),
        [sym_op_dcl] = STATE(308),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(762),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(762),
        [sym_bitmask_dcl] = STATE(762),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(762),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(762),
        [sym_enum_dcl] = STATE(762),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(762),
        [sym_union_def] = STATE(762),
        [sym_type_id_dcl] = STATE(762),
        [sym_import_dcl] = STATE(762),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(308),
        [sym_op_with_context] = STATE(762),
        [sym_value_abs_def] = STATE(672),
        [sym_home_export] = STATE(61),
        [sym_factory_dcl] = STATE(682),
        [sym_native_dcl] = STATE(762),
        [sym_struct_forward_dcl] = STATE(762),
        [sym_struct_def] = STATE(762),
        [sym_const_dcl] = STATE(762),
        [sym_comment] = STATE(9),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_home_body_repeat1] = STATE(8),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(436),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_factory] = ACTIONS(300),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [10] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(557),
        [sym_interface_body] = STATE(647),
        [sym_export] = STATE(73),
        [sym_op_dcl] = STATE(420),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(557),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(557),
        [sym_bitmask_dcl] = STATE(557),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(557),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(557),
        [sym_enum_dcl] = STATE(557),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(557),
        [sym_union_def] = STATE(557),
        [sym_type_id_dcl] = STATE(557),
        [sym_import_dcl] = STATE(557),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(420),
        [sym_op_with_context] = STATE(557),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(557),
        [sym_struct_forward_dcl] = STATE(557),
        [sym_struct_def] = STATE(557),
        [sym_const_dcl] = STATE(557),
        [sym_comment] = STATE(10),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_interface_body_repeat1] = STATE(13),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(438),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [11] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(557),
        [sym_interface_body] = STATE(692),
        [sym_export] = STATE(73),
        [sym_op_dcl] = STATE(420),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(557),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(557),
        [sym_bitmask_dcl] = STATE(557),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(557),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(557),
        [sym_enum_dcl] = STATE(557),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(557),
        [sym_union_def] = STATE(557),
        [sym_type_id_dcl] = STATE(557),
        [sym_import_dcl] = STATE(557),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(420),
        [sym_op_with_context] = STATE(557),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(557),
        [sym_struct_forward_dcl] = STATE(557),
        [sym_struct_def] = STATE(557),
        [sym_const_dcl] = STATE(557),
        [sym_comment] = STATE(11),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_interface_body_repeat1] = STATE(13),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(440),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [12] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(557),
        [sym_export] = STATE(73),
        [sym_op_dcl] = STATE(420),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(557),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(557),
        [sym_bitmask_dcl] = STATE(557),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(557),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(557),
        [sym_enum_dcl] = STATE(557),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(557),
        [sym_union_def] = STATE(557),
        [sym_type_id_dcl] = STATE(557),
        [sym_import_dcl] = STATE(557),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(420),
        [sym_op_with_context] = STATE(557),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(557),
        [sym_struct_forward_dcl] = STATE(557),
        [sym_struct_def] = STATE(557),
        [sym_const_dcl] = STATE(557),
        [sym_comment] = STATE(12),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_interface_body_repeat1] = STATE(16),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(442),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [13] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(557),
        [sym_export] = STATE(73),
        [sym_op_dcl] = STATE(420),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(557),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(557),
        [sym_bitmask_dcl] = STATE(557),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(557),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(557),
        [sym_enum_dcl] = STATE(557),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(557),
        [sym_union_def] = STATE(557),
        [sym_type_id_dcl] = STATE(557),
        [sym_import_dcl] = STATE(557),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(420),
        [sym_op_with_context] = STATE(557),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(557),
        [sym_struct_forward_dcl] = STATE(557),
        [sym_struct_def] = STATE(557),
        [sym_const_dcl] = STATE(557),
        [sym_comment] = STATE(13),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_interface_body_repeat1] = STATE(16),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(444),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [14] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(557),
        [sym_export] = STATE(73),
        [sym_op_dcl] = STATE(420),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(557),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(557),
        [sym_bitmask_dcl] = STATE(557),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(557),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(557),
        [sym_enum_dcl] = STATE(557),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(557),
        [sym_union_def] = STATE(557),
        [sym_type_id_dcl] = STATE(557),
        [sym_import_dcl] = STATE(557),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(420),
        [sym_op_with_context] = STATE(557),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(557),
        [sym_struct_forward_dcl] = STATE(557),
        [sym_struct_def] = STATE(557),
        [sym_const_dcl] = STATE(557),
        [sym_comment] = STATE(14),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_interface_body_repeat1] = STATE(18),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(442),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [15] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(557),
        [sym_export] = STATE(73),
        [sym_op_dcl] = STATE(420),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(557),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(557),
        [sym_bitmask_dcl] = STATE(557),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(557),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(557),
        [sym_enum_dcl] = STATE(557),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(557),
        [sym_union_def] = STATE(557),
        [sym_type_id_dcl] = STATE(557),
        [sym_import_dcl] = STATE(557),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(420),
        [sym_op_with_context] = STATE(557),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(557),
        [sym_struct_forward_dcl] = STATE(557),
        [sym_struct_def] = STATE(557),
        [sym_const_dcl] = STATE(557),
        [sym_comment] = STATE(15),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_interface_body_repeat1] = STATE(16),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(446),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [16] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(557),
        [sym_export] = STATE(73),
        [sym_op_dcl] = STATE(420),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(557),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(557),
        [sym_bitmask_dcl] = STATE(557),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(557),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(557),
        [sym_enum_dcl] = STATE(557),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(557),
        [sym_union_def] = STATE(557),
        [sym_type_id_dcl] = STATE(557),
        [sym_import_dcl] = STATE(557),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(420),
        [sym_op_with_context] = STATE(557),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(557),
        [sym_struct_forward_dcl] = STATE(557),
        [sym_struct_def] = STATE(557),
        [sym_const_dcl] = STATE(557),
        [sym_comment] = STATE(16),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_interface_body_repeat1] = STATE(16),
        [anon_sym_short] = ACTIONS(448),
        [anon_sym_int16] = ACTIONS(448),
        [anon_sym_long] = ACTIONS(451),
        [anon_sym_int32] = ACTIONS(451),
        [anon_sym_longlong] = ACTIONS(454),
        [anon_sym_int64] = ACTIONS(457),
        [sym_unsigned_tiny_int] = ACTIONS(460),
        [sym_boolean_type] = ACTIONS(463),
        [anon_sym_fixed] = ACTIONS(466),
        [sym_octet_type] = ACTIONS(463),
        [sym_signed_tiny_int] = ACTIONS(469),
        [anon_sym_unsignedshort] = ACTIONS(472),
        [anon_sym_uint16] = ACTIONS(475),
        [anon_sym_unsignedlong] = ACTIONS(478),
        [anon_sym_uint32] = ACTIONS(478),
        [anon_sym_unsignedlonglong] = ACTIONS(481),
        [anon_sym_uint64] = ACTIONS(484),
        [anon_sym_float] = ACTIONS(487),
        [anon_sym_double] = ACTIONS(487),
        [anon_sym_longdouble] = ACTIONS(490),
        [anon_sym_char] = ACTIONS(493),
        [anon_sym_wchar] = ACTIONS(493),
        [anon_sym_COLON_COLON] = ACTIONS(496),
        [anon_sym_string] = ACTIONS(499),
        [anon_sym_wstring] = ACTIONS(499),
        [anon_sym_any] = ACTIONS(502),
        [anon_sym_sequence] = ACTIONS(505),
        [anon_sym_map] = ACTIONS(508),
        [anon_sym_exception] = ACTIONS(511),
        [anon_sym_RBRACE] = ACTIONS(514),
        [anon_sym_abstract] = ACTIONS(516),
        [anon_sym_void] = ACTIONS(519),
        [anon_sym_readonly] = ACTIONS(522),
        [anon_sym_attribute] = ACTIONS(525),
        [anon_sym_bitset] = ACTIONS(528),
        [anon_sym_bitmask] = ACTIONS(531),
        [anon_sym_AT] = ACTIONS(534),
        [anon_sym_valuetype] = ACTIONS(537),
        [anon_sym_struct] = ACTIONS(540),
        [anon_sym_union] = ACTIONS(543),
        [anon_sym_enum] = ACTIONS(546),
        [anon_sym_const] = ACTIONS(549),
        [anon_sym_custom] = ACTIONS(552),
        [anon_sym_typedef] = ACTIONS(555),
        [anon_sym_ATignore_literal_names] = ACTIONS(558),
        [anon_sym_typeid] = ACTIONS(561),
        [anon_sym_import] = ACTIONS(564),
        [anon_sym_Object] = ACTIONS(567),
        [anon_sym_oneway] = ACTIONS(570),
        [sym_value_base_type] = ACTIONS(463),
        [anon_sym_native] = ACTIONS(573),
        [sym_identifier] = ACTIONS(576),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [17] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(557),
        [sym_export] = STATE(73),
        [sym_op_dcl] = STATE(420),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(557),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(557),
        [sym_bitmask_dcl] = STATE(557),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(557),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(557),
        [sym_enum_dcl] = STATE(557),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(557),
        [sym_union_def] = STATE(557),
        [sym_type_id_dcl] = STATE(557),
        [sym_import_dcl] = STATE(557),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(420),
        [sym_op_with_context] = STATE(557),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(557),
        [sym_struct_forward_dcl] = STATE(557),
        [sym_struct_def] = STATE(557),
        [sym_const_dcl] = STATE(557),
        [sym_comment] = STATE(17),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_interface_body_repeat1] = STATE(16),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(579),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [18] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(557),
        [sym_export] = STATE(73),
        [sym_op_dcl] = STATE(420),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(557),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(557),
        [sym_bitmask_dcl] = STATE(557),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(557),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(557),
        [sym_enum_dcl] = STATE(557),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(557),
        [sym_union_def] = STATE(557),
        [sym_type_id_dcl] = STATE(557),
        [sym_import_dcl] = STATE(557),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(420),
        [sym_op_with_context] = STATE(557),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(557),
        [sym_struct_forward_dcl] = STATE(557),
        [sym_struct_def] = STATE(557),
        [sym_const_dcl] = STATE(557),
        [sym_comment] = STATE(18),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_interface_body_repeat1] = STATE(16),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(581),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [19] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(557),
        [sym_export] = STATE(73),
        [sym_op_dcl] = STATE(420),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(557),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(557),
        [sym_bitmask_dcl] = STATE(557),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(557),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(557),
        [sym_enum_dcl] = STATE(557),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(557),
        [sym_union_def] = STATE(557),
        [sym_type_id_dcl] = STATE(557),
        [sym_import_dcl] = STATE(557),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(420),
        [sym_op_with_context] = STATE(557),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(557),
        [sym_struct_forward_dcl] = STATE(557),
        [sym_struct_def] = STATE(557),
        [sym_const_dcl] = STATE(557),
        [sym_comment] = STATE(19),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_interface_body_repeat1] = STATE(15),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(579),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [20] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(557),
        [sym_export] = STATE(73),
        [sym_op_dcl] = STATE(420),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(557),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(557),
        [sym_bitmask_dcl] = STATE(557),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(557),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(557),
        [sym_enum_dcl] = STATE(557),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(557),
        [sym_union_def] = STATE(557),
        [sym_type_id_dcl] = STATE(557),
        [sym_import_dcl] = STATE(557),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(420),
        [sym_op_with_context] = STATE(557),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(557),
        [sym_struct_forward_dcl] = STATE(557),
        [sym_struct_def] = STATE(557),
        [sym_const_dcl] = STATE(557),
        [sym_comment] = STATE(20),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_interface_body_repeat1] = STATE(12),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(583),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [21] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(636),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_except_dcl] = STATE(557),
        [sym_export] = STATE(73),
        [sym_op_dcl] = STATE(420),
        [sym_op_type_spec] = STATE(651),
        [sym_attr_dcl] = STATE(557),
        [sym_readonly_attr_spec] = STATE(652),
        [sym_attr_spec] = STATE(652),
        [sym_bitset_dcl] = STATE(557),
        [sym_bitmask_dcl] = STATE(557),
        [sym_annotation_appl] = STATE(204),
        [sym_value_dcl] = STATE(557),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(557),
        [sym_enum_dcl] = STATE(557),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(557),
        [sym_union_def] = STATE(557),
        [sym_type_id_dcl] = STATE(557),
        [sym_import_dcl] = STATE(557),
        [sym_object_type] = STATE(309),
        [sym_op_oneway_dcl] = STATE(420),
        [sym_op_with_context] = STATE(557),
        [sym_value_abs_def] = STATE(672),
        [sym_native_dcl] = STATE(557),
        [sym_struct_forward_dcl] = STATE(557),
        [sym_struct_def] = STATE(557),
        [sym_const_dcl] = STATE(557),
        [sym_comment] = STATE(21),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [aux_sym_interface_body_repeat1] = STATE(17),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_exception] = ACTIONS(107),
        [anon_sym_RBRACE] = ACTIONS(585),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_void] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(115),
        [anon_sym_attribute] = ACTIONS(117),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_valuetype] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_const] = ACTIONS(133),
        [anon_sym_custom] = ACTIONS(135),
        [anon_sym_typedef] = ACTIONS(141),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(143),
        [anon_sym_import] = ACTIONS(145),
        [anon_sym_Object] = ACTIONS(147),
        [anon_sym_oneway] = ACTIONS(149),
        [sym_value_base_type] = ACTIONS(75),
        [anon_sym_native] = ACTIONS(151),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [22] = {
        [sym_except_dcl] = STATE(703),
        [sym_interface_dcl] = STATE(703),
        [sym_interface_kind] = STATE(701),
        [sym_interface_forward_dcl] = STATE(687),
        [sym_interface_def] = STATE(687),
        [sym_interface_header] = STATE(675),
        [sym_bitset_dcl] = STATE(703),
        [sym_bitmask_dcl] = STATE(703),
        [sym_annotation_dcl] = STATE(703),
        [sym_annotation_appl] = STATE(204),
        [sym_template_module_dcl] = STATE(703),
        [sym_tpl_definition] = STATE(110),
        [sym_template_module_inst] = STATE(703),
        [sym_template_module_ref] = STATE(609),
        [sym_value_dcl] = STATE(703),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(703),
        [sym_enum_dcl] = STATE(703),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(703),
        [sym_union_def] = STATE(703),
        [sym_type_id_dcl] = STATE(703),
        [sym_type_prefix_dcl] = STATE(703),
        [sym_import_dcl] = STATE(703),
        [sym_value_abs_def] = STATE(672),
        [sym_component_dcl] = STATE(703),
        [sym_component_forward_dcl] = STATE(662),
        [sym_component_def] = STATE(662),
        [sym_component_header] = STATE(660),
        [sym_home_dcl] = STATE(703),
        [sym_home_header] = STATE(657),
        [sym_event_dcl] = STATE(703),
        [sym_event_forward_dcl] = STATE(541),
        [sym_event_abs_def] = STATE(541),
        [sym_event_def] = STATE(541),
        [sym_event_header] = STATE(642),
        [sym_porttype_dcl] = STATE(703),
        [sym_porttype_forward_dcl] = STATE(639),
        [sym_porttype_def] = STATE(639),
        [sym_connector_dcl] = STATE(703),
        [sym_connector_header] = STATE(638),
        [sym__definition] = STATE(105),
        [sym_native_dcl] = STATE(703),
        [sym_module_dcl] = STATE(703),
        [sym_struct_forward_dcl] = STATE(703),
        [sym_struct_def] = STATE(703),
        [sym_predefine] = STATE(102),
        [sym_const_dcl] = STATE(703),
        [sym_comment] = STATE(22),
        [aux_sym_interface_def_repeat1] = STATE(169),
        [aux_sym_template_module_dcl_repeat1] = STATE(24),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(587),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_eventtype] = ACTIONS(31),
        [anon_sym_struct] = ACTIONS(33),
        [anon_sym_union] = ACTIONS(35),
        [anon_sym_enum] = ACTIONS(37),
        [anon_sym_const] = ACTIONS(39),
        [anon_sym_alias] = ACTIONS(589),
        [anon_sym_custom] = ACTIONS(41),
        [anon_sym_typedef] = ACTIONS(43),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(47),
        [anon_sym_typeprefix] = ACTIONS(49),
        [anon_sym_import] = ACTIONS(51),
        [anon_sym_component] = ACTIONS(53),
        [anon_sym_home] = ACTIONS(55),
        [anon_sym_porttype] = ACTIONS(57),
        [anon_sym_connector] = ACTIONS(59),
        [anon_sym_native] = ACTIONS(61),
        [anon_sym_POUNDdefine] = ACTIONS(591),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [23] = {
        [sym_preproc_call] = STATE(108),
        [sym_except_dcl] = STATE(703),
        [sym_interface_dcl] = STATE(703),
        [sym_interface_kind] = STATE(701),
        [sym_interface_forward_dcl] = STATE(687),
        [sym_interface_def] = STATE(687),
        [sym_interface_header] = STATE(675),
        [sym_bitset_dcl] = STATE(703),
        [sym_bitmask_dcl] = STATE(703),
        [sym_annotation_dcl] = STATE(703),
        [sym_annotation_appl] = STATE(204),
        [sym_template_module_dcl] = STATE(703),
        [sym_template_module_inst] = STATE(703),
        [sym_value_dcl] = STATE(703),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(703),
        [sym_enum_dcl] = STATE(703),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(703),
        [sym_union_def] = STATE(703),
        [sym_type_id_dcl] = STATE(703),
        [sym_type_prefix_dcl] = STATE(703),
        [sym_import_dcl] = STATE(703),
        [sym_value_abs_def] = STATE(672),
        [sym_component_dcl] = STATE(703),
        [sym_component_forward_dcl] = STATE(662),
        [sym_component_def] = STATE(662),
        [sym_component_header] = STATE(660),
        [sym_home_dcl] = STATE(703),
        [sym_home_header] = STATE(657),
        [sym_event_dcl] = STATE(703),
        [sym_event_forward_dcl] = STATE(541),
        [sym_event_abs_def] = STATE(541),
        [sym_event_def] = STATE(541),
        [sym_event_header] = STATE(642),
        [sym_porttype_dcl] = STATE(703),
        [sym_porttype_forward_dcl] = STATE(639),
        [sym_porttype_def] = STATE(639),
        [sym_connector_dcl] = STATE(703),
        [sym_connector_header] = STATE(638),
        [sym__definition] = STATE(106),
        [sym_native_dcl] = STATE(703),
        [sym_module_dcl] = STATE(703),
        [sym_struct_forward_dcl] = STATE(703),
        [sym_struct_def] = STATE(703),
        [sym_predefine] = STATE(102),
        [sym_const_dcl] = STATE(703),
        [sym_comment] = STATE(23),
        [aux_sym_specification_repeat1] = STATE(98),
        [aux_sym_specification_repeat2] = STATE(28),
        [aux_sym_interface_def_repeat1] = STATE(169),
        [ts_builtin_sym_end] = ACTIONS(593),
        [sym_preproc_directive] = ACTIONS(9),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_eventtype] = ACTIONS(31),
        [anon_sym_struct] = ACTIONS(33),
        [anon_sym_union] = ACTIONS(35),
        [anon_sym_enum] = ACTIONS(37),
        [anon_sym_const] = ACTIONS(39),
        [anon_sym_custom] = ACTIONS(41),
        [anon_sym_typedef] = ACTIONS(43),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(47),
        [anon_sym_typeprefix] = ACTIONS(49),
        [anon_sym_import] = ACTIONS(51),
        [anon_sym_component] = ACTIONS(53),
        [anon_sym_home] = ACTIONS(55),
        [anon_sym_porttype] = ACTIONS(57),
        [anon_sym_connector] = ACTIONS(59),
        [anon_sym_native] = ACTIONS(61),
        [anon_sym_POUNDdefine] = ACTIONS(63),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [24] = {
        [sym_except_dcl] = STATE(703),
        [sym_interface_dcl] = STATE(703),
        [sym_interface_kind] = STATE(701),
        [sym_interface_forward_dcl] = STATE(687),
        [sym_interface_def] = STATE(687),
        [sym_interface_header] = STATE(675),
        [sym_bitset_dcl] = STATE(703),
        [sym_bitmask_dcl] = STATE(703),
        [sym_annotation_dcl] = STATE(703),
        [sym_annotation_appl] = STATE(204),
        [sym_template_module_dcl] = STATE(703),
        [sym_tpl_definition] = STATE(110),
        [sym_template_module_inst] = STATE(703),
        [sym_template_module_ref] = STATE(609),
        [sym_value_dcl] = STATE(703),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(703),
        [sym_enum_dcl] = STATE(703),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(703),
        [sym_union_def] = STATE(703),
        [sym_type_id_dcl] = STATE(703),
        [sym_type_prefix_dcl] = STATE(703),
        [sym_import_dcl] = STATE(703),
        [sym_value_abs_def] = STATE(672),
        [sym_component_dcl] = STATE(703),
        [sym_component_forward_dcl] = STATE(662),
        [sym_component_def] = STATE(662),
        [sym_component_header] = STATE(660),
        [sym_home_dcl] = STATE(703),
        [sym_home_header] = STATE(657),
        [sym_event_dcl] = STATE(703),
        [sym_event_forward_dcl] = STATE(541),
        [sym_event_abs_def] = STATE(541),
        [sym_event_def] = STATE(541),
        [sym_event_header] = STATE(642),
        [sym_porttype_dcl] = STATE(703),
        [sym_porttype_forward_dcl] = STATE(639),
        [sym_porttype_def] = STATE(639),
        [sym_connector_dcl] = STATE(703),
        [sym_connector_header] = STATE(638),
        [sym__definition] = STATE(105),
        [sym_native_dcl] = STATE(703),
        [sym_module_dcl] = STATE(703),
        [sym_struct_forward_dcl] = STATE(703),
        [sym_struct_def] = STATE(703),
        [sym_predefine] = STATE(102),
        [sym_const_dcl] = STATE(703),
        [sym_comment] = STATE(24),
        [aux_sym_interface_def_repeat1] = STATE(169),
        [aux_sym_template_module_dcl_repeat1] = STATE(24),
        [anon_sym_exception] = ACTIONS(595),
        [anon_sym_RBRACE] = ACTIONS(598),
        [anon_sym_local] = ACTIONS(600),
        [anon_sym_abstract] = ACTIONS(603),
        [anon_sym_interface] = ACTIONS(606),
        [anon_sym_bitset] = ACTIONS(609),
        [anon_sym_bitmask] = ACTIONS(612),
        [anon_sym_ATannotation] = ACTIONS(615),
        [anon_sym_AT] = ACTIONS(618),
        [anon_sym_module] = ACTIONS(621),
        [anon_sym_valuetype] = ACTIONS(624),
        [anon_sym_eventtype] = ACTIONS(627),
        [anon_sym_struct] = ACTIONS(630),
        [anon_sym_union] = ACTIONS(633),
        [anon_sym_enum] = ACTIONS(636),
        [anon_sym_const] = ACTIONS(639),
        [anon_sym_alias] = ACTIONS(642),
        [anon_sym_custom] = ACTIONS(645),
        [anon_sym_typedef] = ACTIONS(648),
        [anon_sym_ATignore_literal_names] = ACTIONS(651),
        [anon_sym_typeid] = ACTIONS(654),
        [anon_sym_typeprefix] = ACTIONS(657),
        [anon_sym_import] = ACTIONS(660),
        [anon_sym_component] = ACTIONS(663),
        [anon_sym_home] = ACTIONS(666),
        [anon_sym_porttype] = ACTIONS(669),
        [anon_sym_connector] = ACTIONS(672),
        [anon_sym_native] = ACTIONS(675),
        [anon_sym_POUNDdefine] = ACTIONS(678),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [25] = {
        [sym_except_dcl] = STATE(703),
        [sym_interface_dcl] = STATE(703),
        [sym_interface_kind] = STATE(701),
        [sym_interface_forward_dcl] = STATE(687),
        [sym_interface_def] = STATE(687),
        [sym_interface_header] = STATE(675),
        [sym_bitset_dcl] = STATE(703),
        [sym_bitmask_dcl] = STATE(703),
        [sym_annotation_dcl] = STATE(703),
        [sym_annotation_appl] = STATE(204),
        [sym_template_module_dcl] = STATE(703),
        [sym_tpl_definition] = STATE(110),
        [sym_template_module_inst] = STATE(703),
        [sym_template_module_ref] = STATE(609),
        [sym_value_dcl] = STATE(703),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(703),
        [sym_enum_dcl] = STATE(703),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(703),
        [sym_union_def] = STATE(703),
        [sym_type_id_dcl] = STATE(703),
        [sym_type_prefix_dcl] = STATE(703),
        [sym_import_dcl] = STATE(703),
        [sym_value_abs_def] = STATE(672),
        [sym_component_dcl] = STATE(703),
        [sym_component_forward_dcl] = STATE(662),
        [sym_component_def] = STATE(662),
        [sym_component_header] = STATE(660),
        [sym_home_dcl] = STATE(703),
        [sym_home_header] = STATE(657),
        [sym_event_dcl] = STATE(703),
        [sym_event_forward_dcl] = STATE(541),
        [sym_event_abs_def] = STATE(541),
        [sym_event_def] = STATE(541),
        [sym_event_header] = STATE(642),
        [sym_porttype_dcl] = STATE(703),
        [sym_porttype_forward_dcl] = STATE(639),
        [sym_porttype_def] = STATE(639),
        [sym_connector_dcl] = STATE(703),
        [sym_connector_header] = STATE(638),
        [sym__definition] = STATE(105),
        [sym_native_dcl] = STATE(703),
        [sym_module_dcl] = STATE(703),
        [sym_struct_forward_dcl] = STATE(703),
        [sym_struct_def] = STATE(703),
        [sym_predefine] = STATE(102),
        [sym_const_dcl] = STATE(703),
        [sym_comment] = STATE(25),
        [aux_sym_interface_def_repeat1] = STATE(169),
        [aux_sym_template_module_dcl_repeat1] = STATE(22),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(681),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_eventtype] = ACTIONS(31),
        [anon_sym_struct] = ACTIONS(33),
        [anon_sym_union] = ACTIONS(35),
        [anon_sym_enum] = ACTIONS(37),
        [anon_sym_const] = ACTIONS(39),
        [anon_sym_alias] = ACTIONS(589),
        [anon_sym_custom] = ACTIONS(41),
        [anon_sym_typedef] = ACTIONS(43),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(47),
        [anon_sym_typeprefix] = ACTIONS(49),
        [anon_sym_import] = ACTIONS(51),
        [anon_sym_component] = ACTIONS(53),
        [anon_sym_home] = ACTIONS(55),
        [anon_sym_porttype] = ACTIONS(57),
        [anon_sym_connector] = ACTIONS(59),
        [anon_sym_native] = ACTIONS(61),
        [anon_sym_POUNDdefine] = ACTIONS(591),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [26] = {
        [sym_except_dcl] = STATE(703),
        [sym_interface_dcl] = STATE(703),
        [sym_interface_kind] = STATE(701),
        [sym_interface_forward_dcl] = STATE(687),
        [sym_interface_def] = STATE(687),
        [sym_interface_header] = STATE(675),
        [sym_bitset_dcl] = STATE(703),
        [sym_bitmask_dcl] = STATE(703),
        [sym_annotation_dcl] = STATE(703),
        [sym_annotation_appl] = STATE(204),
        [sym_template_module_dcl] = STATE(703),
        [sym_template_module_inst] = STATE(703),
        [sym_value_dcl] = STATE(703),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(703),
        [sym_enum_dcl] = STATE(703),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(703),
        [sym_union_def] = STATE(703),
        [sym_type_id_dcl] = STATE(703),
        [sym_type_prefix_dcl] = STATE(703),
        [sym_import_dcl] = STATE(703),
        [sym_value_abs_def] = STATE(672),
        [sym_component_dcl] = STATE(703),
        [sym_component_forward_dcl] = STATE(662),
        [sym_component_def] = STATE(662),
        [sym_component_header] = STATE(660),
        [sym_home_dcl] = STATE(703),
        [sym_home_header] = STATE(657),
        [sym_event_dcl] = STATE(703),
        [sym_event_forward_dcl] = STATE(541),
        [sym_event_abs_def] = STATE(541),
        [sym_event_def] = STATE(541),
        [sym_event_header] = STATE(642),
        [sym_porttype_dcl] = STATE(703),
        [sym_porttype_forward_dcl] = STATE(639),
        [sym_porttype_def] = STATE(639),
        [sym_connector_dcl] = STATE(703),
        [sym_connector_header] = STATE(638),
        [sym__definition] = STATE(106),
        [sym_native_dcl] = STATE(703),
        [sym_module_dcl] = STATE(703),
        [sym_struct_forward_dcl] = STATE(703),
        [sym_struct_def] = STATE(703),
        [sym_predefine] = STATE(102),
        [sym_const_dcl] = STATE(703),
        [sym_comment] = STATE(26),
        [aux_sym_specification_repeat2] = STATE(26),
        [aux_sym_interface_def_repeat1] = STATE(169),
        [ts_builtin_sym_end] = ACTIONS(683),
        [anon_sym_exception] = ACTIONS(685),
        [anon_sym_RBRACE] = ACTIONS(683),
        [anon_sym_local] = ACTIONS(688),
        [anon_sym_abstract] = ACTIONS(691),
        [anon_sym_interface] = ACTIONS(694),
        [anon_sym_bitset] = ACTIONS(697),
        [anon_sym_bitmask] = ACTIONS(700),
        [anon_sym_ATannotation] = ACTIONS(703),
        [anon_sym_AT] = ACTIONS(706),
        [anon_sym_module] = ACTIONS(709),
        [anon_sym_valuetype] = ACTIONS(712),
        [anon_sym_eventtype] = ACTIONS(715),
        [anon_sym_struct] = ACTIONS(718),
        [anon_sym_union] = ACTIONS(721),
        [anon_sym_enum] = ACTIONS(724),
        [anon_sym_const] = ACTIONS(727),
        [anon_sym_custom] = ACTIONS(730),
        [anon_sym_typedef] = ACTIONS(733),
        [anon_sym_ATignore_literal_names] = ACTIONS(736),
        [anon_sym_typeid] = ACTIONS(739),
        [anon_sym_typeprefix] = ACTIONS(742),
        [anon_sym_import] = ACTIONS(745),
        [anon_sym_component] = ACTIONS(748),
        [anon_sym_home] = ACTIONS(751),
        [anon_sym_porttype] = ACTIONS(754),
        [anon_sym_connector] = ACTIONS(757),
        [anon_sym_native] = ACTIONS(760),
        [anon_sym_POUNDdefine] = ACTIONS(763),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [27] = {
        [sym_except_dcl] = STATE(703),
        [sym_interface_dcl] = STATE(703),
        [sym_interface_kind] = STATE(701),
        [sym_interface_forward_dcl] = STATE(687),
        [sym_interface_def] = STATE(687),
        [sym_interface_header] = STATE(675),
        [sym_bitset_dcl] = STATE(703),
        [sym_bitmask_dcl] = STATE(703),
        [sym_annotation_dcl] = STATE(703),
        [sym_annotation_appl] = STATE(204),
        [sym_template_module_dcl] = STATE(703),
        [sym_template_module_inst] = STATE(703),
        [sym_value_dcl] = STATE(703),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(703),
        [sym_enum_dcl] = STATE(703),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(703),
        [sym_union_def] = STATE(703),
        [sym_type_id_dcl] = STATE(703),
        [sym_type_prefix_dcl] = STATE(703),
        [sym_import_dcl] = STATE(703),
        [sym_value_abs_def] = STATE(672),
        [sym_component_dcl] = STATE(703),
        [sym_component_forward_dcl] = STATE(662),
        [sym_component_def] = STATE(662),
        [sym_component_header] = STATE(660),
        [sym_home_dcl] = STATE(703),
        [sym_home_header] = STATE(657),
        [sym_event_dcl] = STATE(703),
        [sym_event_forward_dcl] = STATE(541),
        [sym_event_abs_def] = STATE(541),
        [sym_event_def] = STATE(541),
        [sym_event_header] = STATE(642),
        [sym_porttype_dcl] = STATE(703),
        [sym_porttype_forward_dcl] = STATE(639),
        [sym_porttype_def] = STATE(639),
        [sym_connector_dcl] = STATE(703),
        [sym_connector_header] = STATE(638),
        [sym__definition] = STATE(106),
        [sym_native_dcl] = STATE(703),
        [sym_module_dcl] = STATE(703),
        [sym_struct_forward_dcl] = STATE(703),
        [sym_struct_def] = STATE(703),
        [sym_predefine] = STATE(102),
        [sym_const_dcl] = STATE(703),
        [sym_comment] = STATE(27),
        [aux_sym_specification_repeat2] = STATE(29),
        [aux_sym_interface_def_repeat1] = STATE(169),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(766),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_eventtype] = ACTIONS(31),
        [anon_sym_struct] = ACTIONS(33),
        [anon_sym_union] = ACTIONS(35),
        [anon_sym_enum] = ACTIONS(37),
        [anon_sym_const] = ACTIONS(39),
        [anon_sym_custom] = ACTIONS(41),
        [anon_sym_typedef] = ACTIONS(43),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(47),
        [anon_sym_typeprefix] = ACTIONS(49),
        [anon_sym_import] = ACTIONS(51),
        [anon_sym_component] = ACTIONS(53),
        [anon_sym_home] = ACTIONS(55),
        [anon_sym_porttype] = ACTIONS(57),
        [anon_sym_connector] = ACTIONS(59),
        [anon_sym_native] = ACTIONS(61),
        [anon_sym_POUNDdefine] = ACTIONS(591),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [28] = {
        [sym_except_dcl] = STATE(703),
        [sym_interface_dcl] = STATE(703),
        [sym_interface_kind] = STATE(701),
        [sym_interface_forward_dcl] = STATE(687),
        [sym_interface_def] = STATE(687),
        [sym_interface_header] = STATE(675),
        [sym_bitset_dcl] = STATE(703),
        [sym_bitmask_dcl] = STATE(703),
        [sym_annotation_dcl] = STATE(703),
        [sym_annotation_appl] = STATE(204),
        [sym_template_module_dcl] = STATE(703),
        [sym_template_module_inst] = STATE(703),
        [sym_value_dcl] = STATE(703),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(703),
        [sym_enum_dcl] = STATE(703),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(703),
        [sym_union_def] = STATE(703),
        [sym_type_id_dcl] = STATE(703),
        [sym_type_prefix_dcl] = STATE(703),
        [sym_import_dcl] = STATE(703),
        [sym_value_abs_def] = STATE(672),
        [sym_component_dcl] = STATE(703),
        [sym_component_forward_dcl] = STATE(662),
        [sym_component_def] = STATE(662),
        [sym_component_header] = STATE(660),
        [sym_home_dcl] = STATE(703),
        [sym_home_header] = STATE(657),
        [sym_event_dcl] = STATE(703),
        [sym_event_forward_dcl] = STATE(541),
        [sym_event_abs_def] = STATE(541),
        [sym_event_def] = STATE(541),
        [sym_event_header] = STATE(642),
        [sym_porttype_dcl] = STATE(703),
        [sym_porttype_forward_dcl] = STATE(639),
        [sym_porttype_def] = STATE(639),
        [sym_connector_dcl] = STATE(703),
        [sym_connector_header] = STATE(638),
        [sym__definition] = STATE(106),
        [sym_native_dcl] = STATE(703),
        [sym_module_dcl] = STATE(703),
        [sym_struct_forward_dcl] = STATE(703),
        [sym_struct_def] = STATE(703),
        [sym_predefine] = STATE(102),
        [sym_const_dcl] = STATE(703),
        [sym_comment] = STATE(28),
        [aux_sym_specification_repeat2] = STATE(26),
        [aux_sym_interface_def_repeat1] = STATE(169),
        [ts_builtin_sym_end] = ACTIONS(768),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_eventtype] = ACTIONS(31),
        [anon_sym_struct] = ACTIONS(33),
        [anon_sym_union] = ACTIONS(35),
        [anon_sym_enum] = ACTIONS(37),
        [anon_sym_const] = ACTIONS(39),
        [anon_sym_custom] = ACTIONS(41),
        [anon_sym_typedef] = ACTIONS(43),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(47),
        [anon_sym_typeprefix] = ACTIONS(49),
        [anon_sym_import] = ACTIONS(51),
        [anon_sym_component] = ACTIONS(53),
        [anon_sym_home] = ACTIONS(55),
        [anon_sym_porttype] = ACTIONS(57),
        [anon_sym_connector] = ACTIONS(59),
        [anon_sym_native] = ACTIONS(61),
        [anon_sym_POUNDdefine] = ACTIONS(591),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [29] = {
        [sym_except_dcl] = STATE(703),
        [sym_interface_dcl] = STATE(703),
        [sym_interface_kind] = STATE(701),
        [sym_interface_forward_dcl] = STATE(687),
        [sym_interface_def] = STATE(687),
        [sym_interface_header] = STATE(675),
        [sym_bitset_dcl] = STATE(703),
        [sym_bitmask_dcl] = STATE(703),
        [sym_annotation_dcl] = STATE(703),
        [sym_annotation_appl] = STATE(204),
        [sym_template_module_dcl] = STATE(703),
        [sym_template_module_inst] = STATE(703),
        [sym_value_dcl] = STATE(703),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(703),
        [sym_enum_dcl] = STATE(703),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(703),
        [sym_union_def] = STATE(703),
        [sym_type_id_dcl] = STATE(703),
        [sym_type_prefix_dcl] = STATE(703),
        [sym_import_dcl] = STATE(703),
        [sym_value_abs_def] = STATE(672),
        [sym_component_dcl] = STATE(703),
        [sym_component_forward_dcl] = STATE(662),
        [sym_component_def] = STATE(662),
        [sym_component_header] = STATE(660),
        [sym_home_dcl] = STATE(703),
        [sym_home_header] = STATE(657),
        [sym_event_dcl] = STATE(703),
        [sym_event_forward_dcl] = STATE(541),
        [sym_event_abs_def] = STATE(541),
        [sym_event_def] = STATE(541),
        [sym_event_header] = STATE(642),
        [sym_porttype_dcl] = STATE(703),
        [sym_porttype_forward_dcl] = STATE(639),
        [sym_porttype_def] = STATE(639),
        [sym_connector_dcl] = STATE(703),
        [sym_connector_header] = STATE(638),
        [sym__definition] = STATE(106),
        [sym_native_dcl] = STATE(703),
        [sym_module_dcl] = STATE(703),
        [sym_struct_forward_dcl] = STATE(703),
        [sym_struct_def] = STATE(703),
        [sym_predefine] = STATE(102),
        [sym_const_dcl] = STATE(703),
        [sym_comment] = STATE(29),
        [aux_sym_specification_repeat2] = STATE(26),
        [aux_sym_interface_def_repeat1] = STATE(169),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(770),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_eventtype] = ACTIONS(31),
        [anon_sym_struct] = ACTIONS(33),
        [anon_sym_union] = ACTIONS(35),
        [anon_sym_enum] = ACTIONS(37),
        [anon_sym_const] = ACTIONS(39),
        [anon_sym_custom] = ACTIONS(41),
        [anon_sym_typedef] = ACTIONS(43),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(47),
        [anon_sym_typeprefix] = ACTIONS(49),
        [anon_sym_import] = ACTIONS(51),
        [anon_sym_component] = ACTIONS(53),
        [anon_sym_home] = ACTIONS(55),
        [anon_sym_porttype] = ACTIONS(57),
        [anon_sym_connector] = ACTIONS(59),
        [anon_sym_native] = ACTIONS(61),
        [anon_sym_POUNDdefine] = ACTIONS(591),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [30] = {
        [sym_except_dcl] = STATE(703),
        [sym_interface_dcl] = STATE(703),
        [sym_interface_kind] = STATE(701),
        [sym_interface_forward_dcl] = STATE(687),
        [sym_interface_def] = STATE(687),
        [sym_interface_header] = STATE(675),
        [sym_bitset_dcl] = STATE(703),
        [sym_bitmask_dcl] = STATE(703),
        [sym_annotation_dcl] = STATE(703),
        [sym_annotation_appl] = STATE(204),
        [sym_template_module_dcl] = STATE(703),
        [sym_template_module_inst] = STATE(703),
        [sym_value_dcl] = STATE(703),
        [sym_value_def] = STATE(672),
        [sym_value_kind] = STATE(671),
        [sym_value_header] = STATE(669),
        [sym_value_forward_dcl] = STATE(672),
        [sym_typedef_dcl] = STATE(703),
        [sym_enum_dcl] = STATE(703),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(703),
        [sym_union_def] = STATE(703),
        [sym_type_id_dcl] = STATE(703),
        [sym_type_prefix_dcl] = STATE(703),
        [sym_import_dcl] = STATE(703),
        [sym_value_abs_def] = STATE(672),
        [sym_component_dcl] = STATE(703),
        [sym_component_forward_dcl] = STATE(662),
        [sym_component_def] = STATE(662),
        [sym_component_header] = STATE(660),
        [sym_home_dcl] = STATE(703),
        [sym_home_header] = STATE(657),
        [sym_event_dcl] = STATE(703),
        [sym_event_forward_dcl] = STATE(541),
        [sym_event_abs_def] = STATE(541),
        [sym_event_def] = STATE(541),
        [sym_event_header] = STATE(642),
        [sym_porttype_dcl] = STATE(703),
        [sym_porttype_forward_dcl] = STATE(639),
        [sym_porttype_def] = STATE(639),
        [sym_connector_dcl] = STATE(703),
        [sym_connector_header] = STATE(638),
        [sym__definition] = STATE(106),
        [sym_native_dcl] = STATE(703),
        [sym_module_dcl] = STATE(703),
        [sym_struct_forward_dcl] = STATE(703),
        [sym_struct_def] = STATE(703),
        [sym_predefine] = STATE(102),
        [sym_const_dcl] = STATE(703),
        [sym_comment] = STATE(30),
        [aux_sym_specification_repeat2] = STATE(26),
        [aux_sym_interface_def_repeat1] = STATE(169),
        [ts_builtin_sym_end] = ACTIONS(593),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_eventtype] = ACTIONS(31),
        [anon_sym_struct] = ACTIONS(33),
        [anon_sym_union] = ACTIONS(35),
        [anon_sym_enum] = ACTIONS(37),
        [anon_sym_const] = ACTIONS(39),
        [anon_sym_custom] = ACTIONS(41),
        [anon_sym_typedef] = ACTIONS(43),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_typeid] = ACTIONS(47),
        [anon_sym_typeprefix] = ACTIONS(49),
        [anon_sym_import] = ACTIONS(51),
        [anon_sym_component] = ACTIONS(53),
        [anon_sym_home] = ACTIONS(55),
        [anon_sym_porttype] = ACTIONS(57),
        [anon_sym_connector] = ACTIONS(59),
        [anon_sym_native] = ACTIONS(61),
        [anon_sym_POUNDdefine] = ACTIONS(591),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [31] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(165),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(499),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_const_expr] = STATE(499),
        [sym_or_expr] = STATE(190),
        [sym_xor_expr] = STATE(178),
        [sym_and_expr] = STATE(173),
        [sym_shift_expr] = STATE(167),
        [sym_add_expr] = STATE(164),
        [sym_mult_expr] = STATE(160),
        [sym_unary_expr] = STATE(152),
        [sym_unary_operator] = STATE(162),
        [sym_literal] = STATE(150),
        [sym_string_literal] = STATE(158),
        [sym_char_literal] = STATE(158),
        [sym_boolean_literal] = STATE(158),
        [sym_actual_parameters] = STATE(727),
        [sym_actual_parameter] = STATE(346),
        [sym_object_type] = STATE(309),
        [sym_comment] = STATE(31),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(772),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_PLUS] = ACTIONS(774),
        [anon_sym_DASH] = ACTIONS(774),
        [anon_sym_LPAREN] = ACTIONS(776),
        [anon_sym_TILDE] = ACTIONS(778),
        [anon_sym_L] = ACTIONS(780),
        [anon_sym_DQUOTE] = ACTIONS(782),
        [anon_sym_SQUOTE] = ACTIONS(784),
        [anon_sym_TRUE] = ACTIONS(786),
        [anon_sym_FALSE] = ACTIONS(786),
        [sym_number_literal] = ACTIONS(788),
        [anon_sym_Object] = ACTIONS(147),
        [sym_value_base_type] = ACTIONS(75),
        [sym_identifier] = ACTIONS(790),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [32] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(165),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(499),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_const_expr] = STATE(499),
        [sym_or_expr] = STATE(190),
        [sym_xor_expr] = STATE(178),
        [sym_and_expr] = STATE(173),
        [sym_shift_expr] = STATE(167),
        [sym_add_expr] = STATE(164),
        [sym_mult_expr] = STATE(160),
        [sym_unary_expr] = STATE(152),
        [sym_unary_operator] = STATE(162),
        [sym_literal] = STATE(150),
        [sym_string_literal] = STATE(158),
        [sym_char_literal] = STATE(158),
        [sym_boolean_literal] = STATE(158),
        [sym_actual_parameter] = STATE(533),
        [sym_object_type] = STATE(309),
        [sym_comment] = STATE(32),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(772),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_PLUS] = ACTIONS(774),
        [anon_sym_DASH] = ACTIONS(774),
        [anon_sym_LPAREN] = ACTIONS(776),
        [anon_sym_TILDE] = ACTIONS(778),
        [anon_sym_L] = ACTIONS(780),
        [anon_sym_DQUOTE] = ACTIONS(782),
        [anon_sym_SQUOTE] = ACTIONS(784),
        [anon_sym_TRUE] = ACTIONS(786),
        [anon_sym_FALSE] = ACTIONS(786),
        [sym_number_literal] = ACTIONS(788),
        [anon_sym_Object] = ACTIONS(147),
        [sym_value_base_type] = ACTIONS(75),
        [sym_identifier] = ACTIONS(790),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [33] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_type_spec] = STATE(243),
        [sym_simple_type_spec] = STATE(426),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(426),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_bitset_dcl] = STATE(243),
        [sym_bitmask_dcl] = STATE(243),
        [sym_annotation_appl] = STATE(204),
        [sym_enum_dcl] = STATE(243),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(243),
        [sym_union_def] = STATE(243),
        [sym_element_spec] = STATE(704),
        [sym_object_type] = STATE(309),
        [sym_struct_forward_dcl] = STATE(243),
        [sym_struct_def] = STATE(243),
        [sym_comment] = STATE(33),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_RBRACE] = ACTIONS(792),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_default] = ACTIONS(794),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_case] = ACTIONS(794),
        [anon_sym_Object] = ACTIONS(147),
        [sym_value_base_type] = ACTIONS(75),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [34] = {
        [sym_signed_short_int] = STATE(236),
        [sym_signed_long_int] = STATE(236),
        [sym_signed_longlong_int] = STATE(236),
        [sym_unsigned_int] = STATE(268),
        [sym_integer_type] = STATE(309),
        [sym_signed_int] = STATE(268),
        [sym_unsigned_short_int] = STATE(258),
        [sym_unsigned_long_int] = STATE(258),
        [sym_unsigned_longlong_int] = STATE(258),
        [sym_floating_pt_type] = STATE(309),
        [sym_char_type] = STATE(309),
        [sym_scoped_name] = STATE(286),
        [sym_string_type] = STATE(302),
        [sym_simple_type_spec] = STATE(217),
        [sym_base_type_spec] = STATE(318),
        [sym_any_type] = STATE(309),
        [sym_fixed_pt_type] = STATE(302),
        [sym_template_type_spec] = STATE(217),
        [sym_sequence_type] = STATE(302),
        [sym_map_type] = STATE(302),
        [sym_bitset_dcl] = STATE(217),
        [sym_bitmask_dcl] = STATE(217),
        [sym_annotation_appl] = STATE(204),
        [sym_type_declarator] = STATE(551),
        [sym_enum_dcl] = STATE(217),
        [sym_enum_anno] = STATE(664),
        [sym_union_forward_dcl] = STATE(217),
        [sym_union_def] = STATE(217),
        [sym_object_type] = STATE(309),
        [sym_struct_forward_dcl] = STATE(217),
        [sym_struct_def] = STATE(217),
        [sym_comment] = STATE(34),
        [aux_sym_interface_def_repeat1] = STATE(218),
        [anon_sym_short] = ACTIONS(65),
        [anon_sym_int16] = ACTIONS(65),
        [anon_sym_long] = ACTIONS(67),
        [anon_sym_int32] = ACTIONS(67),
        [anon_sym_longlong] = ACTIONS(69),
        [anon_sym_int64] = ACTIONS(71),
        [sym_unsigned_tiny_int] = ACTIONS(73),
        [sym_boolean_type] = ACTIONS(75),
        [anon_sym_fixed] = ACTIONS(77),
        [sym_octet_type] = ACTIONS(75),
        [sym_signed_tiny_int] = ACTIONS(79),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(83),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(87),
        [anon_sym_uint64] = ACTIONS(89),
        [anon_sym_float] = ACTIONS(91),
        [anon_sym_double] = ACTIONS(91),
        [anon_sym_longdouble] = ACTIONS(93),
        [anon_sym_char] = ACTIONS(95),
        [anon_sym_wchar] = ACTIONS(95),
        [anon_sym_COLON_COLON] = ACTIONS(97),
        [anon_sym_string] = ACTIONS(99),
        [anon_sym_wstring] = ACTIONS(99),
        [anon_sym_any] = ACTIONS(101),
        [anon_sym_sequence] = ACTIONS(103),
        [anon_sym_map] = ACTIONS(105),
        [anon_sym_bitset] = ACTIONS(119),
        [anon_sym_bitmask] = ACTIONS(121),
        [anon_sym_AT] = ACTIONS(123),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_union] = ACTIONS(129),
        [anon_sym_enum] = ACTIONS(131),
        [anon_sym_ATignore_literal_names] = ACTIONS(45),
        [anon_sym_Object] = ACTIONS(147),
        [sym_value_base_type] = ACTIONS(75),
        [sym_identifier] = ACTIONS(153),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(796),
    1,
    anon_sym_RBRACE,
    ACTIONS(798),
    1,
    anon_sym_AT,
    STATE(35),
    1,
    sym_comment,
    STATE(41),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(49),
    1,
    aux_sym_interface_def_repeat1,
    STATE(82),
    1,
    sym_member,
    STATE(94),
    1,
    sym_annotation_appl,
    STATE(210),
    1,
    sym_type_spec,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [145] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(798),
    1,
    anon_sym_AT,
    ACTIONS(800),
    1,
    anon_sym_RBRACE,
    STATE(36),
    1,
    sym_comment,
    STATE(38),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(49),
    1,
    aux_sym_interface_def_repeat1,
    STATE(82),
    1,
    sym_member,
    STATE(94),
    1,
    sym_annotation_appl,
    STATE(210),
    1,
    sym_type_spec,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [290] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(808),
    1,
    anon_sym_longlong,
    ACTIONS(811),
    1,
    anon_sym_int64,
    ACTIONS(814),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(820),
    1,
    anon_sym_fixed,
    ACTIONS(823),
    1,
    sym_signed_tiny_int,
    ACTIONS(826),
    1,
    anon_sym_unsignedshort,
    ACTIONS(829),
    1,
    anon_sym_uint16,
    ACTIONS(835),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(838),
    1,
    anon_sym_uint64,
    ACTIONS(844),
    1,
    anon_sym_longdouble,
    ACTIONS(850),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(856),
    1,
    anon_sym_any,
    ACTIONS(859),
    1,
    anon_sym_sequence,
    ACTIONS(862),
    1,
    anon_sym_map,
    ACTIONS(865),
    1,
    anon_sym_RBRACE,
    ACTIONS(867),
    1,
    anon_sym_AT,
    ACTIONS(870),
    1,
    anon_sym_Object,
    ACTIONS(873),
    1,
    sym_identifier,
    STATE(49),
    1,
    aux_sym_interface_def_repeat1,
    STATE(82),
    1,
    sym_member,
    STATE(94),
    1,
    sym_annotation_appl,
    STATE(210),
    1,
    sym_type_spec,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    ACTIONS(802),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(805),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(832),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(841),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(847),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(853),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(37),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(817),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [433] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(798),
    1,
    anon_sym_AT,
    ACTIONS(876),
    1,
    anon_sym_RBRACE,
    STATE(37),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(38),
    1,
    sym_comment,
    STATE(49),
    1,
    aux_sym_interface_def_repeat1,
    STATE(82),
    1,
    sym_member,
    STATE(94),
    1,
    sym_annotation_appl,
    STATE(210),
    1,
    sym_type_spec,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [578] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(798),
    1,
    anon_sym_AT,
    ACTIONS(878),
    1,
    anon_sym_RBRACE,
    STATE(39),
    1,
    sym_comment,
    STATE(42),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(49),
    1,
    aux_sym_interface_def_repeat1,
    STATE(82),
    1,
    sym_member,
    STATE(94),
    1,
    sym_annotation_appl,
    STATE(210),
    1,
    sym_type_spec,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [723] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(798),
    1,
    anon_sym_AT,
    ACTIONS(880),
    1,
    anon_sym_RBRACE,
    STATE(40),
    1,
    sym_comment,
    STATE(43),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(49),
    1,
    aux_sym_interface_def_repeat1,
    STATE(82),
    1,
    sym_member,
    STATE(94),
    1,
    sym_annotation_appl,
    STATE(210),
    1,
    sym_type_spec,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [868] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(798),
    1,
    anon_sym_AT,
    ACTIONS(882),
    1,
    anon_sym_RBRACE,
    STATE(37),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(41),
    1,
    sym_comment,
    STATE(49),
    1,
    aux_sym_interface_def_repeat1,
    STATE(82),
    1,
    sym_member,
    STATE(94),
    1,
    sym_annotation_appl,
    STATE(210),
    1,
    sym_type_spec,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [1013] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(798),
    1,
    anon_sym_AT,
    ACTIONS(884),
    1,
    anon_sym_RBRACE,
    STATE(37),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(42),
    1,
    sym_comment,
    STATE(49),
    1,
    aux_sym_interface_def_repeat1,
    STATE(82),
    1,
    sym_member,
    STATE(94),
    1,
    sym_annotation_appl,
    STATE(210),
    1,
    sym_type_spec,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [1158] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(798),
    1,
    anon_sym_AT,
    ACTIONS(886),
    1,
    anon_sym_RBRACE,
    STATE(37),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    1,
    sym_comment,
    STATE(49),
    1,
    aux_sym_interface_def_repeat1,
    STATE(82),
    1,
    sym_member,
    STATE(94),
    1,
    sym_annotation_appl,
    STATE(210),
    1,
    sym_type_spec,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [1303] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(798),
    1,
    anon_sym_AT,
    ACTIONS(800),
    1,
    anon_sym_RBRACE,
    STATE(37),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(44),
    1,
    sym_comment,
    STATE(49),
    1,
    aux_sym_interface_def_repeat1,
    STATE(82),
    1,
    sym_member,
    STATE(94),
    1,
    sym_annotation_appl,
    STATE(210),
    1,
    sym_type_spec,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [1448] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(798),
    1,
    anon_sym_AT,
    ACTIONS(888),
    1,
    anon_sym_RBRACE,
    STATE(44),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(45),
    1,
    sym_comment,
    STATE(49),
    1,
    aux_sym_interface_def_repeat1,
    STATE(82),
    1,
    sym_member,
    STATE(94),
    1,
    sym_annotation_appl,
    STATE(210),
    1,
    sym_type_spec,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [1593] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(896),
    1,
    anon_sym_longlong,
    ACTIONS(899),
    1,
    anon_sym_int64,
    ACTIONS(902),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(908),
    1,
    anon_sym_fixed,
    ACTIONS(911),
    1,
    sym_signed_tiny_int,
    ACTIONS(914),
    1,
    anon_sym_unsignedshort,
    ACTIONS(917),
    1,
    anon_sym_uint16,
    ACTIONS(923),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(926),
    1,
    anon_sym_uint64,
    ACTIONS(932),
    1,
    anon_sym_longdouble,
    ACTIONS(938),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(944),
    1,
    anon_sym_any,
    ACTIONS(947),
    1,
    anon_sym_sequence,
    ACTIONS(950),
    1,
    anon_sym_RBRACE,
    ACTIONS(952),
    1,
    anon_sym_enum,
    ACTIONS(955),
    1,
    anon_sym_const,
    ACTIONS(958),
    1,
    anon_sym_typedef,
    ACTIONS(961),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(964),
    1,
    sym_identifier,
    STATE(86),
    1,
    sym_annotation_body,
    STATE(90),
    1,
    sym_annotation_member,
    STATE(509),
    1,
    sym_annotation_member_type,
    STATE(514),
    1,
    sym_scoped_name,
    STATE(664),
    1,
    sym_enum_anno,
    ACTIONS(890),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(893),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(905),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(920),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(929),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(935),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(941),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(46),
    2,
    sym_comment,
    aux_sym_annotation_dcl_repeat1,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(735),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(538),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(580),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [1735] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(131),
    1,
    anon_sym_enum,
    ACTIONS(133),
    1,
    anon_sym_const,
    ACTIONS(141),
    1,
    anon_sym_typedef,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(969),
    1,
    anon_sym_fixed,
    ACTIONS(971),
    1,
    anon_sym_any,
    ACTIONS(973),
    1,
    anon_sym_RBRACE,
    ACTIONS(975),
    1,
    anon_sym_ATignore_literal_names,
    STATE(46),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(47),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_annotation_body,
    STATE(90),
    1,
    sym_annotation_member,
    STATE(509),
    1,
    sym_annotation_member_type,
    STATE(514),
    1,
    sym_scoped_name,
    STATE(664),
    1,
    sym_enum_anno,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(967),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(735),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(538),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(580),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [1879] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(131),
    1,
    anon_sym_enum,
    ACTIONS(133),
    1,
    anon_sym_const,
    ACTIONS(141),
    1,
    anon_sym_typedef,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(969),
    1,
    anon_sym_fixed,
    ACTIONS(971),
    1,
    anon_sym_any,
    ACTIONS(975),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(977),
    1,
    anon_sym_RBRACE,
    STATE(47),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(48),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_annotation_body,
    STATE(90),
    1,
    sym_annotation_member,
    STATE(509),
    1,
    sym_annotation_member_type,
    STATE(514),
    1,
    sym_scoped_name,
    STATE(664),
    1,
    sym_enum_anno,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(967),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(735),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(538),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(580),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2023] = 38,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(798),
    1,
    anon_sym_AT,
    STATE(49),
    1,
    sym_comment,
    STATE(79),
    1,
    aux_sym_interface_def_repeat1,
    STATE(94),
    1,
    sym_annotation_appl,
    STATE(234),
    1,
    sym_type_spec,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [2159] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(979),
    1,
    anon_sym_sequence,
    ACTIONS(983),
    1,
    anon_sym_const,
    STATE(50),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    STATE(326),
    1,
    sym_formal_parameter,
    STATE(745),
    1,
    sym_formal_parameter_type,
    STATE(746),
    1,
    sym_formal_parameters,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(757),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    ACTIONS(981),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [2289] = 37,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(985),
    1,
    anon_sym_GT,
    ACTIONS(987),
    1,
    anon_sym_COMMA,
    STATE(51),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    STATE(759),
    1,
    sym_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [2422] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(52),
    1,
    sym_comment,
    ACTIONS(991),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(989),
    48,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    anon_sym_Object,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2491] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(53),
    1,
    sym_comment,
    ACTIONS(995),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(993),
    48,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    anon_sym_Object,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2560] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(54),
    1,
    sym_comment,
    ACTIONS(999),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(997),
    48,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    anon_sym_Object,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2629] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(55),
    1,
    sym_comment,
    ACTIONS(1003),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1001),
    48,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    anon_sym_Object,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2698] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(56),
    1,
    sym_comment,
    ACTIONS(1007),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1005),
    48,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    anon_sym_Object,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2767] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(57),
    1,
    sym_comment,
    ACTIONS(1011),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1009),
    48,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    anon_sym_Object,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2836] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(58),
    1,
    sym_comment,
    ACTIONS(1015),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1013),
    48,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    anon_sym_Object,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2905] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(979),
    1,
    anon_sym_sequence,
    ACTIONS(983),
    1,
    anon_sym_const,
    STATE(59),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    STATE(530),
    1,
    sym_formal_parameter,
    STATE(745),
    1,
    sym_formal_parameter_type,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(757),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    ACTIONS(981),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [3032] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    STATE(60),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    STATE(344),
    1,
    sym_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [3159] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(61),
    1,
    sym_comment,
    ACTIONS(1019),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1017),
    46,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    anon_sym_Object,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [3226] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(62),
    1,
    sym_comment,
    ACTIONS(995),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(993),
    46,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    anon_sym_Object,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [3293] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    STATE(63),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    STATE(432),
    1,
    sym_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [3420] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    STATE(64),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    STATE(449),
    1,
    sym_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [3547] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    STATE(65),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    STATE(532),
    1,
    sym_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [3674] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(66),
    1,
    sym_comment,
    ACTIONS(1023),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1021),
    46,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    anon_sym_Object,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [3741] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(67),
    1,
    sym_comment,
    STATE(318),
    1,
    sym_base_type_spec,
    STATE(535),
    1,
    sym_scoped_name,
    STATE(751),
    1,
    sym_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [3868] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    STATE(68),
    1,
    sym_comment,
    STATE(228),
    1,
    sym_type_spec,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [3995] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    STATE(69),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    STATE(431),
    1,
    sym_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [4122] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    STATE(70),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    STATE(430),
    1,
    sym_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [4249] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(77),
    1,
    anon_sym_fixed,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(101),
    1,
    anon_sym_any,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(105),
    1,
    anon_sym_map,
    ACTIONS(147),
    1,
    anon_sym_Object,
    ACTIONS(153),
    1,
    sym_identifier,
    STATE(71),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_scoped_name,
    STATE(318),
    1,
    sym_base_type_spec,
    STATE(370),
    1,
    sym_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(426),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(75),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(302),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(309),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [4376] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(72),
    1,
    sym_comment,
    ACTIONS(1027),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1025),
    46,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    anon_sym_Object,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [4443] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(1031),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1029),
    45,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    anon_sym_Object,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [4509] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(995),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(993),
    45,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    anon_sym_Object,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [4575] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(969),
    1,
    anon_sym_fixed,
    STATE(75),
    1,
    sym_comment,
    STATE(494),
    1,
    sym_scoped_name,
    STATE(571),
    1,
    sym_const_type,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(967),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(580),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [4680] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(93),
    1,
    anon_sym_longdouble,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    anon_sym_sequence,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(969),
    1,
    anon_sym_fixed,
    STATE(76),
    1,
    sym_comment,
    STATE(494),
    1,
    sym_scoped_name,
    STATE(650),
    1,
    sym_const_type,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(91),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(99),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(967),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(580),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [4785] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(1035),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1033),
    34,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_default,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_case,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [4840] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(1039),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1037),
    34,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_default,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_case,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [4895] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1045),
    1,
    anon_sym_AT,
    STATE(94),
    1,
    sym_annotation_appl,
    STATE(79),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    ACTIONS(1043),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(1041),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [4947] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(1050),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(1048),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [4994] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(1054),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1052),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [5041] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(1058),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1056),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [5088] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1064),
    1,
    anon_sym_LPAREN,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(1062),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
    ACTIONS(1060),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [5137] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(84),
    1,
    sym_comment,
    ACTIONS(1068),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1066),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [5184] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(85),
    1,
    sym_comment,
    ACTIONS(1072),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1070),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [5231] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(1076),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(1074),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [5278] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(87),
    1,
    sym_comment,
    ACTIONS(1080),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(1078),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [5325] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(88),
    1,
    sym_comment,
    ACTIONS(1084),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(1082),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [5372] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(89),
    1,
    sym_comment,
    ACTIONS(1088),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(1086),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [5419] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(90),
    1,
    sym_comment,
    ACTIONS(1092),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(1090),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [5466] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(1096),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(1094),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [5513] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(1100),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(1098),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [5560] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(1104),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1102),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [5607] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(1108),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
    ACTIONS(1106),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [5653] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(1112),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
    ACTIONS(1110),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [5699] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(96),
    1,
    sym_comment,
    ACTIONS(1094),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(1096),
    27,
    anon_sym_COLON_COLON,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_L,
    anon_sym_DQUOTE,
    anon_sym_LBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_SEMI,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_supports,
    anon_sym_RBRACK,
    anon_sym_manages,
    anon_sym_primarykey,
    [5744] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(1086),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(1088),
    27,
    anon_sym_COLON_COLON,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_L,
    anon_sym_DQUOTE,
    anon_sym_LBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_SEMI,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_supports,
    anon_sym_RBRACK,
    anon_sym_manages,
    anon_sym_primarykey,
    [5789] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1116),
    1,
    sym_preproc_directive,
    STATE(108),
    1,
    sym_preproc_call,
    STATE(98),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(1119),
    3,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(1114),
    25,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_home,
    anon_sym_porttype,
    anon_sym_connector,
    anon_sym_native,
    [5838] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(99),
    1,
    sym_comment,
    ACTIONS(1123),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(1121),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [5883] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(100),
    1,
    sym_comment,
    ACTIONS(1098),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(1100),
    27,
    anon_sym_COLON_COLON,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_L,
    anon_sym_DQUOTE,
    anon_sym_LBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_SEMI,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_supports,
    anon_sym_RBRACK,
    anon_sym_manages,
    anon_sym_primarykey,
    [5928] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(69),
    1,
    anon_sym_longlong,
    ACTIONS(71),
    1,
    anon_sym_int64,
    ACTIONS(73),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(79),
    1,
    sym_signed_tiny_int,
    ACTIONS(81),
    1,
    anon_sym_unsignedshort,
    ACTIONS(83),
    1,
    anon_sym_uint16,
    ACTIONS(87),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(89),
    1,
    anon_sym_uint64,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(790),
    1,
    sym_identifier,
    ACTIONS(1125),
    1,
    sym_boolean_type,
    STATE(101),
    1,
    sym_comment,
    STATE(441),
    1,
    sym_scoped_name,
    STATE(633),
    1,
    sym_switch_type_spec,
    ACTIONS(65),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(67),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(85),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(95),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(634),
    2,
    sym_integer_type,
    sym_char_type,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    [6011] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(102),
    1,
    sym_comment,
    ACTIONS(1129),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1127),
    28,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_home,
    anon_sym_porttype,
    anon_sym_connector,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [6055] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(103),
    1,
    sym_comment,
    ACTIONS(1133),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1131),
    28,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_home,
    anon_sym_porttype,
    anon_sym_connector,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [6099] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(1137),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1135),
    28,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_home,
    anon_sym_porttype,
    anon_sym_connector,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [6143] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(105),
    1,
    sym_comment,
    ACTIONS(1141),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1139),
    27,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_home,
    anon_sym_porttype,
    anon_sym_connector,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [6186] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(106),
    1,
    sym_comment,
    ACTIONS(1145),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1143),
    27,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_home,
    anon_sym_porttype,
    anon_sym_connector,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [6229] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(1149),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(1147),
    25,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_home,
    anon_sym_porttype,
    anon_sym_connector,
    anon_sym_native,
    [6272] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(1153),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(1151),
    25,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_home,
    anon_sym_porttype,
    anon_sym_connector,
    anon_sym_native,
    [6315] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(1157),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(1155),
    25,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_home,
    anon_sym_porttype,
    anon_sym_connector,
    anon_sym_native,
    [6358] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(1161),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1159),
    27,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_home,
    anon_sym_porttype,
    anon_sym_connector,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [6401] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(111),
    1,
    sym_comment,
    ACTIONS(1165),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1163),
    27,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_home,
    anon_sym_porttype,
    anon_sym_connector,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [6444] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(1167),
    1,
    sym_identifier,
    STATE(112),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(314),
    1,
    sym_annotation_appl_param,
    STATE(646),
    1,
    sym_const_expr,
    STATE(767),
    1,
    sym_annotation_appl_params,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6530] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(1167),
    1,
    sym_identifier,
    STATE(113),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(314),
    1,
    sym_annotation_appl_param,
    STATE(646),
    1,
    sym_const_expr,
    STATE(758),
    1,
    sym_annotation_appl_params,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6616] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(1167),
    1,
    sym_identifier,
    STATE(114),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(314),
    1,
    sym_annotation_appl_param,
    STATE(646),
    1,
    sym_const_expr,
    STATE(764),
    1,
    sym_annotation_appl_params,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6702] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(1167),
    1,
    sym_identifier,
    STATE(115),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(314),
    1,
    sym_annotation_appl_param,
    STATE(646),
    1,
    sym_const_expr,
    STATE(765),
    1,
    sym_annotation_appl_params,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6788] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(116),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(316),
    1,
    sym_const_expr,
    STATE(626),
    1,
    sym_positive_int_const,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6871] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(117),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(316),
    1,
    sym_const_expr,
    STATE(503),
    1,
    sym_positive_int_const,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6954] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(118),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(316),
    1,
    sym_const_expr,
    STATE(673),
    1,
    sym_positive_int_const,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7037] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(119),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(316),
    1,
    sym_const_expr,
    STATE(763),
    1,
    sym_positive_int_const,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7120] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(120),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(316),
    1,
    sym_const_expr,
    STATE(553),
    1,
    sym_positive_int_const,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7203] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(121),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(316),
    1,
    sym_const_expr,
    STATE(752),
    1,
    sym_positive_int_const,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7286] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(122),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(316),
    1,
    sym_const_expr,
    STATE(618),
    1,
    sym_positive_int_const,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7369] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(123),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(625),
    1,
    sym_const_expr,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7449] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(124),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(546),
    1,
    sym_const_expr,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7529] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(125),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(592),
    1,
    sym_const_expr,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7609] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(126),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(702),
    1,
    sym_const_expr,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7689] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(127),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(518),
    1,
    sym_const_expr,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7769] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(128),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(603),
    1,
    sym_const_expr,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7849] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(67),
    1,
    anon_sym_long,
    ACTIONS(85),
    1,
    anon_sym_unsignedlong,
    ACTIONS(1171),
    1,
    anon_sym_int32,
    ACTIONS(1173),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(1177),
    1,
    sym_signed_tiny_int,
    ACTIONS(1179),
    1,
    anon_sym_uint32,
    STATE(129),
    1,
    sym_comment,
    STATE(658),
    1,
    sym_integer_type,
    STATE(659),
    1,
    sym_destination_type,
    ACTIONS(69),
    2,
    anon_sym_longlong,
    anon_sym_int64,
    ACTIONS(81),
    2,
    anon_sym_unsignedshort,
    anon_sym_uint16,
    ACTIONS(87),
    2,
    anon_sym_unsignedlonglong,
    anon_sym_uint64,
    ACTIONS(1169),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(1175),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(268),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(258),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    [7917] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(130),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(178),
    1,
    sym_xor_expr,
    STATE(190),
    1,
    sym_or_expr,
    STATE(670),
    1,
    sym_const_expr,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7997] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(131),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(173),
    1,
    sym_and_expr,
    STATE(179),
    1,
    sym_xor_expr,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8071] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(132),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(167),
    1,
    sym_shift_expr,
    STATE(174),
    1,
    sym_and_expr,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8142] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(133),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(164),
    1,
    sym_add_expr,
    STATE(168),
    1,
    sym_shift_expr,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8210] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1181),
    1,
    anon_sym_RBRACE,
    ACTIONS(1183),
    1,
    anon_sym_readonly,
    ACTIONS(1185),
    1,
    anon_sym_attribute,
    ACTIONS(1187),
    1,
    anon_sym_provides,
    ACTIONS(1189),
    1,
    anon_sym_uses,
    ACTIONS(1191),
    1,
    anon_sym_emits,
    ACTIONS(1193),
    1,
    anon_sym_publishes,
    ACTIONS(1195),
    1,
    anon_sym_consumes,
    STATE(134),
    1,
    sym_comment,
    STATE(137),
    1,
    aux_sym_component_body_repeat1,
    STATE(170),
    1,
    sym_component_export,
    STATE(677),
    1,
    sym_component_body,
    ACTIONS(1197),
    2,
    anon_sym_port,
    anon_sym_mirrorport,
    STATE(652),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(676),
    7,
    sym_attr_dcl,
    sym_provides_dcl,
    sym_uses_dcl,
    sym_emits_dcl,
    sym_publishes_dcl,
    sym_consumes_dcl,
    sym_port_dcl,
    [8270] = 15,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1199),
    1,
    anon_sym_RBRACE,
    ACTIONS(1201),
    1,
    anon_sym_readonly,
    ACTIONS(1204),
    1,
    anon_sym_attribute,
    ACTIONS(1207),
    1,
    anon_sym_provides,
    ACTIONS(1210),
    1,
    anon_sym_uses,
    ACTIONS(1213),
    1,
    anon_sym_emits,
    ACTIONS(1216),
    1,
    anon_sym_publishes,
    ACTIONS(1219),
    1,
    anon_sym_consumes,
    STATE(170),
    1,
    sym_component_export,
    ACTIONS(1222),
    2,
    anon_sym_port,
    anon_sym_mirrorport,
    STATE(135),
    2,
    sym_comment,
    aux_sym_component_body_repeat1,
    STATE(652),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(676),
    7,
    sym_attr_dcl,
    sym_provides_dcl,
    sym_uses_dcl,
    sym_emits_dcl,
    sym_publishes_dcl,
    sym_consumes_dcl,
    sym_port_dcl,
    [8325] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(136),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(160),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    STATE(163),
    1,
    sym_add_expr,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8390] = 16,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1183),
    1,
    anon_sym_readonly,
    ACTIONS(1185),
    1,
    anon_sym_attribute,
    ACTIONS(1187),
    1,
    anon_sym_provides,
    ACTIONS(1189),
    1,
    anon_sym_uses,
    ACTIONS(1191),
    1,
    anon_sym_emits,
    ACTIONS(1193),
    1,
    anon_sym_publishes,
    ACTIONS(1195),
    1,
    anon_sym_consumes,
    ACTIONS(1225),
    1,
    anon_sym_RBRACE,
    STATE(135),
    1,
    aux_sym_component_body_repeat1,
    STATE(137),
    1,
    sym_comment,
    STATE(170),
    1,
    sym_component_export,
    ACTIONS(1197),
    2,
    anon_sym_port,
    anon_sym_mirrorport,
    STATE(652),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(676),
    7,
    sym_attr_dcl,
    sym_provides_dcl,
    sym_uses_dcl,
    sym_emits_dcl,
    sym_publishes_dcl,
    sym_consumes_dcl,
    sym_port_dcl,
    [8447] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(138),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(152),
    1,
    sym_unary_expr,
    STATE(156),
    1,
    sym_mult_expr,
    STATE(162),
    1,
    sym_unary_operator,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8509] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(776),
    1,
    anon_sym_LPAREN,
    ACTIONS(778),
    1,
    anon_sym_TILDE,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    STATE(139),
    1,
    sym_comment,
    STATE(141),
    1,
    sym_scoped_name,
    STATE(150),
    1,
    sym_literal,
    STATE(157),
    1,
    sym_unary_expr,
    STATE(162),
    1,
    sym_unary_operator,
    ACTIONS(774),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8568] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    STATE(140),
    1,
    sym_comment,
    ACTIONS(1229),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(1231),
    13,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8601] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    STATE(141),
    1,
    sym_comment,
    ACTIONS(1233),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(1235),
    13,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8634] = 15,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1183),
    1,
    anon_sym_readonly,
    ACTIONS(1185),
    1,
    anon_sym_attribute,
    ACTIONS(1187),
    1,
    anon_sym_provides,
    ACTIONS(1189),
    1,
    anon_sym_uses,
    ACTIONS(1237),
    1,
    anon_sym_RBRACE,
    STATE(142),
    1,
    sym_comment,
    STATE(147),
    1,
    aux_sym_port_body_repeat1,
    STATE(184),
    1,
    sym_port_export,
    STATE(185),
    1,
    sym_port_ref,
    STATE(612),
    1,
    sym_attr_dcl,
    ACTIONS(1197),
    2,
    anon_sym_port,
    anon_sym_mirrorport,
    STATE(652),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(715),
    3,
    sym_provides_dcl,
    sym_uses_dcl,
    sym_port_dcl,
    [8684] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(143),
    1,
    sym_comment,
    ACTIONS(1239),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1241),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8714] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1243),
    1,
    anon_sym_RBRACE,
    ACTIONS(1245),
    1,
    anon_sym_readonly,
    ACTIONS(1248),
    1,
    anon_sym_attribute,
    ACTIONS(1251),
    1,
    anon_sym_provides,
    ACTIONS(1254),
    1,
    anon_sym_uses,
    STATE(186),
    1,
    sym_connector_export,
    STATE(187),
    1,
    sym_port_ref,
    STATE(685),
    1,
    sym_attr_dcl,
    ACTIONS(1257),
    2,
    anon_sym_port,
    anon_sym_mirrorport,
    STATE(144),
    2,
    sym_comment,
    aux_sym_connector_dcl_repeat1,
    STATE(652),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(715),
    3,
    sym_provides_dcl,
    sym_uses_dcl,
    sym_port_dcl,
    [8762] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(145),
    1,
    sym_comment,
    ACTIONS(1260),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1262),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8792] = 15,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1183),
    1,
    anon_sym_readonly,
    ACTIONS(1185),
    1,
    anon_sym_attribute,
    ACTIONS(1187),
    1,
    anon_sym_provides,
    ACTIONS(1189),
    1,
    anon_sym_uses,
    ACTIONS(1264),
    1,
    anon_sym_RBRACE,
    STATE(144),
    1,
    aux_sym_connector_dcl_repeat1,
    STATE(146),
    1,
    sym_comment,
    STATE(186),
    1,
    sym_connector_export,
    STATE(187),
    1,
    sym_port_ref,
    STATE(685),
    1,
    sym_attr_dcl,
    ACTIONS(1197),
    2,
    anon_sym_port,
    anon_sym_mirrorport,
    STATE(652),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(715),
    3,
    sym_provides_dcl,
    sym_uses_dcl,
    sym_port_dcl,
    [8842] = 15,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1183),
    1,
    anon_sym_readonly,
    ACTIONS(1185),
    1,
    anon_sym_attribute,
    ACTIONS(1187),
    1,
    anon_sym_provides,
    ACTIONS(1189),
    1,
    anon_sym_uses,
    ACTIONS(1266),
    1,
    anon_sym_RBRACE,
    STATE(147),
    1,
    sym_comment,
    STATE(151),
    1,
    aux_sym_port_body_repeat1,
    STATE(184),
    1,
    sym_port_export,
    STATE(185),
    1,
    sym_port_ref,
    STATE(612),
    1,
    sym_attr_dcl,
    ACTIONS(1197),
    2,
    anon_sym_port,
    anon_sym_mirrorport,
    STATE(652),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(715),
    3,
    sym_provides_dcl,
    sym_uses_dcl,
    sym_port_dcl,
    [8892] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(148),
    1,
    sym_comment,
    ACTIONS(1229),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1231),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8922] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(149),
    1,
    sym_comment,
    ACTIONS(1268),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1270),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8952] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(150),
    1,
    sym_comment,
    ACTIONS(1233),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1235),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8982] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1272),
    1,
    anon_sym_RBRACE,
    ACTIONS(1274),
    1,
    anon_sym_readonly,
    ACTIONS(1277),
    1,
    anon_sym_attribute,
    ACTIONS(1280),
    1,
    anon_sym_provides,
    ACTIONS(1283),
    1,
    anon_sym_uses,
    STATE(184),
    1,
    sym_port_export,
    STATE(185),
    1,
    sym_port_ref,
    STATE(612),
    1,
    sym_attr_dcl,
    ACTIONS(1286),
    2,
    anon_sym_port,
    anon_sym_mirrorport,
    STATE(151),
    2,
    sym_comment,
    aux_sym_port_body_repeat1,
    STATE(652),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(715),
    3,
    sym_provides_dcl,
    sym_uses_dcl,
    sym_port_dcl,
    [9030] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(152),
    1,
    sym_comment,
    ACTIONS(1289),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1291),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9060] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(153),
    1,
    sym_comment,
    ACTIONS(1293),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1295),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9090] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(154),
    1,
    sym_comment,
    ACTIONS(1297),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1299),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9120] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(155),
    1,
    sym_comment,
    ACTIONS(1301),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1303),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9150] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1305),
    1,
    anon_sym_GT,
    ACTIONS(1311),
    1,
    anon_sym_SLASH,
    STATE(156),
    1,
    sym_comment,
    ACTIONS(1309),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(1307),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9184] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(157),
    1,
    sym_comment,
    ACTIONS(1313),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1315),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9214] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(158),
    1,
    sym_comment,
    ACTIONS(1317),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1319),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9244] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(159),
    1,
    sym_comment,
    ACTIONS(1321),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1323),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9274] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1311),
    1,
    anon_sym_SLASH,
    ACTIONS(1325),
    1,
    anon_sym_GT,
    STATE(160),
    1,
    sym_comment,
    ACTIONS(1309),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(1327),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9308] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1183),
    1,
    anon_sym_readonly,
    ACTIONS(1185),
    1,
    anon_sym_attribute,
    ACTIONS(1187),
    1,
    anon_sym_provides,
    ACTIONS(1189),
    1,
    anon_sym_uses,
    STATE(146),
    1,
    aux_sym_connector_dcl_repeat1,
    STATE(161),
    1,
    sym_comment,
    STATE(186),
    1,
    sym_connector_export,
    STATE(187),
    1,
    sym_port_ref,
    STATE(685),
    1,
    sym_attr_dcl,
    ACTIONS(1197),
    2,
    anon_sym_port,
    anon_sym_mirrorport,
    STATE(652),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(715),
    3,
    sym_provides_dcl,
    sym_uses_dcl,
    sym_port_dcl,
    [9355] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(780),
    1,
    anon_sym_L,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(784),
    1,
    anon_sym_SQUOTE,
    ACTIONS(788),
    1,
    sym_number_literal,
    ACTIONS(790),
    1,
    sym_identifier,
    ACTIONS(1329),
    1,
    anon_sym_LPAREN,
    STATE(140),
    1,
    sym_scoped_name,
    STATE(148),
    1,
    sym_literal,
    STATE(162),
    1,
    sym_comment,
    ACTIONS(786),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(158),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [9401] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1331),
    1,
    anon_sym_GT,
    STATE(163),
    1,
    sym_comment,
    ACTIONS(1335),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(1333),
    10,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9430] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1337),
    1,
    anon_sym_GT,
    STATE(164),
    1,
    sym_comment,
    ACTIONS(1335),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(1339),
    10,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9459] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1233),
    1,
    anon_sym_SLASH,
    ACTIONS(1341),
    1,
    anon_sym_GT,
    ACTIONS(1343),
    1,
    anon_sym_COMMA,
    STATE(165),
    1,
    sym_comment,
    ACTIONS(1235),
    9,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    [9492] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1086),
    1,
    anon_sym_SLASH,
    ACTIONS(1345),
    1,
    anon_sym_EQ,
    STATE(166),
    1,
    sym_comment,
    ACTIONS(1088),
    11,
    anon_sym_COLON_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [9521] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1347),
    1,
    anon_sym_GT,
    STATE(167),
    1,
    sym_comment,
    ACTIONS(1351),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(1349),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9548] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1353),
    1,
    anon_sym_GT,
    STATE(168),
    1,
    sym_comment,
    ACTIONS(1351),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(1355),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9575] = 12,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(17),
    1,
    anon_sym_interface,
    ACTIONS(123),
    1,
    anon_sym_AT,
    ACTIONS(1357),
    1,
    anon_sym_bitmask,
    ACTIONS(1359),
    1,
    anon_sym_struct,
    STATE(169),
    1,
    sym_comment,
    STATE(180),
    1,
    aux_sym_interface_def_repeat1,
    STATE(204),
    1,
    sym_annotation_appl,
    STATE(558),
    1,
    sym_interface_header,
    STATE(654),
    1,
    sym_interface_kind,
    ACTIONS(13),
    2,
    anon_sym_local,
    anon_sym_abstract,
    [9613] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(170),
    1,
    sym_comment,
    ACTIONS(1361),
    10,
    anon_sym_RBRACE,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_provides,
    anon_sym_uses,
    anon_sym_emits,
    anon_sym_publishes,
    anon_sym_consumes,
    anon_sym_port,
    anon_sym_mirrorport,
    [9635] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1187),
    1,
    anon_sym_provides,
    ACTIONS(1189),
    1,
    anon_sym_uses,
    ACTIONS(1363),
    1,
    anon_sym_RBRACE,
    STATE(142),
    1,
    sym_port_ref,
    STATE(171),
    1,
    sym_comment,
    STATE(728),
    1,
    sym_port_body,
    ACTIONS(1197),
    2,
    anon_sym_port,
    anon_sym_mirrorport,
    STATE(715),
    3,
    sym_provides_dcl,
    sym_uses_dcl,
    sym_port_dcl,
    [9669] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(172),
    1,
    sym_comment,
    ACTIONS(1365),
    10,
    anon_sym_RBRACE,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_provides,
    anon_sym_uses,
    anon_sym_emits,
    anon_sym_publishes,
    anon_sym_consumes,
    anon_sym_port,
    anon_sym_mirrorport,
    [9691] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1369),
    1,
    anon_sym_DOLLAR,
    STATE(173),
    1,
    sym_comment,
    ACTIONS(1367),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9714] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1369),
    1,
    anon_sym_DOLLAR,
    STATE(174),
    1,
    sym_comment,
    ACTIONS(1371),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9737] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(175),
    1,
    sym_comment,
    ACTIONS(1373),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(1375),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [9760] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1377),
    1,
    anon_sym_LPAREN,
    STATE(176),
    1,
    sym_comment,
    ACTIONS(1062),
    6,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [9784] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1379),
    1,
    anon_sym_COMMA,
    ACTIONS(1381),
    1,
    anon_sym_SEMI,
    ACTIONS(1383),
    1,
    anon_sym_getraises,
    ACTIONS(1385),
    1,
    anon_sym_setraises,
    STATE(177),
    1,
    sym_comment,
    STATE(339),
    1,
    sym_get_excep_expr,
    STATE(341),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(563),
    1,
    sym_attr_raises_expr,
    STATE(565),
    1,
    sym_set_excep_expr,
    [9818] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1389),
    1,
    anon_sym_CARET,
    STATE(178),
    1,
    sym_comment,
    ACTIONS(1387),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9840] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1389),
    1,
    anon_sym_CARET,
    STATE(179),
    1,
    sym_comment,
    ACTIONS(1391),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9862] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1393),
    1,
    anon_sym_AT,
    STATE(204),
    1,
    sym_annotation_appl,
    STATE(180),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    ACTIONS(1043),
    5,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_struct,
    [9886] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(181),
    1,
    sym_comment,
    ACTIONS(1396),
    7,
    anon_sym_RBRACE,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_provides,
    anon_sym_uses,
    anon_sym_port,
    anon_sym_mirrorport,
    [9905] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(182),
    1,
    sym_comment,
    ACTIONS(1398),
    7,
    anon_sym_RBRACE,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_provides,
    anon_sym_uses,
    anon_sym_port,
    anon_sym_mirrorport,
    [9924] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(183),
    1,
    sym_comment,
    ACTIONS(1400),
    7,
    anon_sym_RBRACE,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_provides,
    anon_sym_uses,
    anon_sym_port,
    anon_sym_mirrorport,
    [9943] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(184),
    1,
    sym_comment,
    ACTIONS(1402),
    7,
    anon_sym_RBRACE,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_provides,
    anon_sym_uses,
    anon_sym_port,
    anon_sym_mirrorport,
    [9962] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(185),
    1,
    sym_comment,
    ACTIONS(1404),
    7,
    anon_sym_RBRACE,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_provides,
    anon_sym_uses,
    anon_sym_port,
    anon_sym_mirrorport,
    [9981] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(186),
    1,
    sym_comment,
    ACTIONS(1406),
    7,
    anon_sym_RBRACE,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_provides,
    anon_sym_uses,
    anon_sym_port,
    anon_sym_mirrorport,
    [10000] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(187),
    1,
    sym_comment,
    ACTIONS(1408),
    7,
    anon_sym_RBRACE,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_provides,
    anon_sym_uses,
    anon_sym_port,
    anon_sym_mirrorport,
    [10019] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1410),
    1,
    anon_sym_RPAREN,
    ACTIONS(1412),
    1,
    anon_sym_in,
    STATE(63),
    1,
    sym_param_attribute,
    STATE(188),
    1,
    sym_comment,
    STATE(349),
    1,
    sym_param_dcl,
    STATE(573),
    1,
    sym_parameter_dcls,
    ACTIONS(1414),
    2,
    anon_sym_out,
    anon_sym_inout,
    [10048] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(189),
    1,
    sym_comment,
    ACTIONS(1416),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [10067] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1420),
    1,
    anon_sym_PIPE,
    STATE(190),
    1,
    sym_comment,
    ACTIONS(1418),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [10088] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(790),
    1,
    sym_identifier,
    ACTIONS(1422),
    1,
    anon_sym_L,
    STATE(191),
    1,
    sym_comment,
    STATE(529),
    1,
    sym_scoped_name,
    STATE(544),
    1,
    sym_imported_scope,
    STATE(545),
    1,
    sym_string_literal,
    [10119] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1426),
    1,
    anon_sym_LBRACK,
    STATE(291),
    1,
    sym_fixed_array_size,
    STATE(192),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(1424),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [10141] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(193),
    1,
    sym_comment,
    ACTIONS(1096),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [10159] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1431),
    1,
    anon_sym_LBRACK,
    STATE(192),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(194),
    1,
    sym_comment,
    STATE(291),
    1,
    sym_fixed_array_size,
    ACTIONS(1429),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [10183] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1433),
    1,
    anon_sym_RBRACE,
    ACTIONS(1435),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1437),
    1,
    sym_identifier,
    STATE(195),
    1,
    sym_comment,
    STATE(287),
    1,
    aux_sym_enumerator_repeat1,
    STATE(366),
    1,
    sym_enumerator,
    STATE(524),
    1,
    sym_enum_modifier,
    [10211] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1439),
    1,
    anon_sym_RBRACE,
    ACTIONS(1441),
    1,
    anon_sym_AT,
    ACTIONS(1443),
    1,
    sym_identifier,
    STATE(196),
    1,
    sym_comment,
    STATE(229),
    1,
    aux_sym_interface_def_repeat1,
    STATE(356),
    1,
    sym_bit_value,
    STATE(515),
    1,
    sym_annotation_appl,
    [10239] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(197),
    1,
    sym_comment,
    ACTIONS(1112),
    6,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [10257] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(198),
    1,
    sym_comment,
    ACTIONS(1088),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [10275] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(199),
    1,
    sym_comment,
    ACTIONS(1100),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [10293] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1445),
    1,
    anon_sym_RBRACE,
    ACTIONS(1447),
    1,
    anon_sym_default,
    ACTIONS(1450),
    1,
    anon_sym_case,
    STATE(33),
    1,
    sym_case_label,
    STATE(407),
    1,
    sym_case,
    STATE(200),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [10319] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1441),
    1,
    anon_sym_AT,
    ACTIONS(1443),
    1,
    sym_identifier,
    ACTIONS(1453),
    1,
    anon_sym_RBRACE,
    STATE(201),
    1,
    sym_comment,
    STATE(211),
    1,
    aux_sym_interface_def_repeat1,
    STATE(404),
    1,
    sym_bit_value,
    STATE(515),
    1,
    sym_annotation_appl,
    [10347] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1455),
    1,
    anon_sym_LBRACE,
    ACTIONS(1457),
    1,
    anon_sym_COLON,
    ACTIONS(1459),
    1,
    anon_sym_SEMI,
    ACTIONS(1461),
    1,
    anon_sym_supports,
    STATE(202),
    1,
    sym_comment,
    STATE(374),
    1,
    sym_component_inheritance_spec,
    STATE(607),
    1,
    sym_supported_interface_spec,
    [10375] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(1463),
    1,
    anon_sym_Object,
    ACTIONS(1465),
    1,
    anon_sym_multiple,
    STATE(203),
    1,
    sym_comment,
    STATE(488),
    1,
    sym_scoped_name,
    STATE(709),
    1,
    sym_interface_type,
    [10403] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(204),
    1,
    sym_comment,
    ACTIONS(1108),
    6,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [10421] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1431),
    1,
    anon_sym_LBRACK,
    STATE(194),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(205),
    1,
    sym_comment,
    STATE(291),
    1,
    sym_fixed_array_size,
    ACTIONS(1416),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [10445] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1435),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1437),
    1,
    sym_identifier,
    ACTIONS(1467),
    1,
    anon_sym_RBRACE,
    STATE(206),
    1,
    sym_comment,
    STATE(287),
    1,
    aux_sym_enumerator_repeat1,
    STATE(312),
    1,
    sym_enumerator,
    STATE(524),
    1,
    sym_enum_modifier,
    [10473] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1469),
    1,
    anon_sym_RBRACE,
    ACTIONS(1471),
    1,
    anon_sym_default,
    ACTIONS(1473),
    1,
    anon_sym_case,
    STATE(33),
    1,
    sym_case_label,
    STATE(207),
    1,
    sym_comment,
    STATE(208),
    1,
    aux_sym_union_def_repeat1,
    STATE(407),
    1,
    sym_case,
    [10501] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1471),
    1,
    anon_sym_default,
    ACTIONS(1473),
    1,
    anon_sym_case,
    ACTIONS(1475),
    1,
    anon_sym_RBRACE,
    STATE(33),
    1,
    sym_case_label,
    STATE(200),
    1,
    aux_sym_union_def_repeat1,
    STATE(208),
    1,
    sym_comment,
    STATE(407),
    1,
    sym_case,
    [10529] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(1463),
    1,
    anon_sym_Object,
    STATE(209),
    1,
    sym_comment,
    STATE(488),
    1,
    sym_scoped_name,
    STATE(710),
    1,
    sym_interface_type,
    [10554] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1477),
    1,
    sym_identifier,
    STATE(210),
    1,
    sym_comment,
    STATE(241),
    1,
    sym_declarator,
    STATE(384),
    1,
    sym_declarators,
    STATE(382),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10577] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1441),
    1,
    anon_sym_AT,
    ACTIONS(1443),
    1,
    sym_identifier,
    STATE(211),
    1,
    sym_comment,
    STATE(279),
    1,
    aux_sym_interface_def_repeat1,
    STATE(363),
    1,
    sym_bit_value,
    STATE(515),
    1,
    sym_annotation_appl,
    [10602] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1379),
    1,
    anon_sym_COMMA,
    ACTIONS(1479),
    1,
    anon_sym_SEMI,
    ACTIONS(1481),
    1,
    anon_sym_raises,
    STATE(212),
    1,
    sym_comment,
    STATE(398),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(622),
    1,
    sym_raises_expr,
    [10627] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1483),
    1,
    anon_sym_COMMA,
    STATE(213),
    1,
    sym_comment,
    STATE(292),
    1,
    aux_sym_raises_expr_repeat1,
    ACTIONS(1485),
    2,
    anon_sym_LBRACE,
    anon_sym_manages,
    [10650] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1487),
    1,
    anon_sym_LBRACE,
    ACTIONS(1489),
    1,
    anon_sym_COLON,
    ACTIONS(1491),
    1,
    anon_sym_SEMI,
    ACTIONS(1493),
    1,
    anon_sym_supports,
    STATE(214),
    1,
    sym_comment,
    STATE(564),
    1,
    sym_value_inheritance_spec,
    [10675] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1495),
    1,
    anon_sym_COMMA,
    STATE(215),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    ACTIONS(1498),
    3,
    anon_sym_RPAREN,
    anon_sym_LBRACE,
    anon_sym_manages,
    [10694] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    STATE(216),
    1,
    sym_comment,
    ACTIONS(1498),
    4,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_LBRACE,
    anon_sym_manages,
    [10713] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1477),
    1,
    sym_identifier,
    STATE(217),
    1,
    sym_comment,
    STATE(354),
    1,
    sym_any_declarator,
    STATE(576),
    1,
    sym_any_declarators,
    STATE(489),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10736] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(123),
    1,
    anon_sym_AT,
    ACTIONS(1357),
    1,
    anon_sym_bitmask,
    ACTIONS(1359),
    1,
    anon_sym_struct,
    STATE(180),
    1,
    aux_sym_interface_def_repeat1,
    STATE(204),
    1,
    sym_annotation_appl,
    STATE(218),
    1,
    sym_comment,
    [10761] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1461),
    1,
    anon_sym_supports,
    ACTIONS(1500),
    1,
    anon_sym_COLON,
    ACTIONS(1502),
    1,
    anon_sym_manages,
    STATE(219),
    1,
    sym_comment,
    STATE(388),
    1,
    sym_home_inheritance_spec,
    STATE(617),
    1,
    sym_supported_interface_spec,
    [10786] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1489),
    1,
    anon_sym_COLON,
    ACTIONS(1493),
    1,
    anon_sym_supports,
    ACTIONS(1504),
    1,
    anon_sym_LBRACE,
    ACTIONS(1506),
    1,
    anon_sym_SEMI,
    STATE(220),
    1,
    sym_comment,
    STATE(653),
    1,
    sym_value_inheritance_spec,
    [10811] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1441),
    1,
    anon_sym_AT,
    ACTIONS(1443),
    1,
    sym_identifier,
    STATE(221),
    1,
    sym_comment,
    STATE(279),
    1,
    aux_sym_interface_def_repeat1,
    STATE(475),
    1,
    sym_bit_value,
    STATE(515),
    1,
    sym_annotation_appl,
    [10836] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1441),
    1,
    anon_sym_AT,
    ACTIONS(1443),
    1,
    sym_identifier,
    STATE(221),
    1,
    aux_sym_interface_def_repeat1,
    STATE(222),
    1,
    sym_comment,
    STATE(508),
    1,
    sym_bit_value,
    STATE(515),
    1,
    sym_annotation_appl,
    [10861] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1508),
    1,
    anon_sym_RBRACE,
    ACTIONS(1510),
    1,
    anon_sym_bitfield,
    STATE(223),
    1,
    sym_comment,
    STATE(224),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(371),
    1,
    sym_bitfield_spec,
    STATE(472),
    1,
    sym_bitfield,
    [10886] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1510),
    1,
    anon_sym_bitfield,
    ACTIONS(1512),
    1,
    anon_sym_RBRACE,
    STATE(224),
    1,
    sym_comment,
    STATE(226),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(371),
    1,
    sym_bitfield_spec,
    STATE(472),
    1,
    sym_bitfield,
    [10911] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1489),
    1,
    anon_sym_COLON,
    ACTIONS(1493),
    1,
    anon_sym_supports,
    ACTIONS(1514),
    1,
    anon_sym_LBRACE,
    ACTIONS(1516),
    1,
    anon_sym_SEMI,
    STATE(225),
    1,
    sym_comment,
    STATE(696),
    1,
    sym_value_inheritance_spec,
    [10936] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1518),
    1,
    anon_sym_RBRACE,
    ACTIONS(1520),
    1,
    anon_sym_bitfield,
    STATE(371),
    1,
    sym_bitfield_spec,
    STATE(472),
    1,
    sym_bitfield,
    STATE(226),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [10959] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(790),
    1,
    sym_identifier,
    ACTIONS(1523),
    1,
    anon_sym_truncatable,
    STATE(227),
    1,
    sym_comment,
    STATE(283),
    1,
    sym_scoped_name,
    STATE(284),
    1,
    sym_value_name,
    [10984] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1477),
    1,
    sym_identifier,
    STATE(228),
    1,
    sym_comment,
    STATE(241),
    1,
    sym_declarator,
    STATE(598),
    1,
    sym_declarators,
    STATE(382),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [11007] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1441),
    1,
    anon_sym_AT,
    ACTIONS(1443),
    1,
    sym_identifier,
    STATE(229),
    1,
    sym_comment,
    STATE(279),
    1,
    aux_sym_interface_def_repeat1,
    STATE(404),
    1,
    sym_bit_value,
    STATE(515),
    1,
    sym_annotation_appl,
    [11032] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1435),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1437),
    1,
    sym_identifier,
    STATE(230),
    1,
    sym_comment,
    STATE(287),
    1,
    aux_sym_enumerator_repeat1,
    STATE(520),
    1,
    sym_enumerator,
    STATE(524),
    1,
    sym_enum_modifier,
    [11057] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1412),
    1,
    anon_sym_in,
    STATE(63),
    1,
    sym_param_attribute,
    STATE(231),
    1,
    sym_comment,
    STATE(460),
    1,
    sym_param_dcl,
    ACTIONS(1414),
    2,
    anon_sym_out,
    anon_sym_inout,
    [11080] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1510),
    1,
    anon_sym_bitfield,
    ACTIONS(1525),
    1,
    anon_sym_RBRACE,
    STATE(232),
    1,
    sym_comment,
    STATE(235),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(371),
    1,
    sym_bitfield_spec,
    STATE(472),
    1,
    sym_bitfield,
    [11105] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(153),
    1,
    sym_identifier,
    ACTIONS(1463),
    1,
    anon_sym_Object,
    STATE(233),
    1,
    sym_comment,
    STATE(488),
    1,
    sym_scoped_name,
    STATE(590),
    1,
    sym_interface_type,
    [11130] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1477),
    1,
    sym_identifier,
    STATE(234),
    1,
    sym_comment,
    STATE(241),
    1,
    sym_declarator,
    STATE(340),
    1,
    sym_declarators,
    STATE(382),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [11153] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1510),
    1,
    anon_sym_bitfield,
    ACTIONS(1527),
    1,
    anon_sym_RBRACE,
    STATE(226),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(235),
    1,
    sym_comment,
    STATE(371),
    1,
    sym_bitfield_spec,
    STATE(472),
    1,
    sym_bitfield,
    [11178] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(236),
    1,
    sym_comment,
    ACTIONS(1529),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11194] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(1531),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11210] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(238),
    1,
    sym_comment,
    ACTIONS(1533),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11226] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(239),
    1,
    sym_comment,
    ACTIONS(1535),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11242] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1483),
    1,
    anon_sym_COMMA,
    ACTIONS(1537),
    1,
    anon_sym_RPAREN,
    STATE(240),
    1,
    sym_comment,
    STATE(357),
    1,
    aux_sym_raises_expr_repeat1,
    [11264] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1539),
    1,
    anon_sym_COMMA,
    STATE(241),
    1,
    sym_comment,
    STATE(273),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(1541),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [11284] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(242),
    1,
    sym_comment,
    ACTIONS(1543),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11300] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1477),
    1,
    sym_identifier,
    STATE(243),
    1,
    sym_comment,
    STATE(718),
    1,
    sym_declarator,
    STATE(382),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [11320] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(244),
    1,
    sym_comment,
    STATE(303),
    1,
    sym_scoped_name,
    STATE(513),
    1,
    sym_interface_name,
    [11342] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1483),
    1,
    anon_sym_COMMA,
    ACTIONS(1547),
    1,
    anon_sym_RPAREN,
    STATE(245),
    1,
    sym_comment,
    STATE(348),
    1,
    aux_sym_raises_expr_repeat1,
    [11364] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1549),
    1,
    anon_sym_RPAREN,
    ACTIONS(1551),
    1,
    anon_sym_in,
    STATE(246),
    1,
    sym_comment,
    STATE(299),
    1,
    sym_init_param_dcl,
    STATE(579),
    1,
    sym_init_param_dcls,
    [11386] = 6,
    ACTIONS(1553),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1555),
    1,
    anon_sym_LPAREN,
    ACTIONS(1557),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_SLASH_STAR,
    STATE(247),
    1,
    sym_comment,
    ACTIONS(1060),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [11406] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1561),
    1,
    anon_sym_RPAREN,
    ACTIONS(1563),
    1,
    anon_sym_in,
    STATE(248),
    1,
    sym_comment,
    STATE(409),
    1,
    sym_in_param_dcl,
    STATE(632),
    1,
    sym_in_parameter_dcls,
    [11428] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1565),
    1,
    anon_sym_COMMA,
    ACTIONS(1567),
    1,
    anon_sym_LBRACE,
    ACTIONS(1569),
    1,
    anon_sym_supports,
    STATE(249),
    1,
    sym_comment,
    STATE(280),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    [11450] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1481),
    1,
    anon_sym_raises,
    STATE(250),
    1,
    sym_comment,
    STATE(436),
    1,
    sym_raises_expr,
    ACTIONS(1571),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [11470] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(251),
    1,
    sym_comment,
    STATE(283),
    1,
    sym_scoped_name,
    STATE(359),
    1,
    sym_value_name,
    [11492] = 6,
    ACTIONS(1041),
    1,
    aux_sym_comment_token1,
    ACTIONS(1557),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1573),
    1,
    anon_sym_AT,
    STATE(507),
    1,
    sym_annotation_appl,
    STATE(252),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    [11512] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(253),
    1,
    sym_comment,
    STATE(303),
    1,
    sym_scoped_name,
    STATE(323),
    1,
    sym_interface_name,
    [11534] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(254),
    1,
    sym_comment,
    ACTIONS(1576),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11550] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1565),
    1,
    anon_sym_COMMA,
    ACTIONS(1567),
    1,
    anon_sym_LBRACE,
    ACTIONS(1569),
    1,
    anon_sym_supports,
    STATE(255),
    1,
    sym_comment,
    STATE(281),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    [11572] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1578),
    1,
    anon_sym_COMMA,
    ACTIONS(1581),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(256),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [11590] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1481),
    1,
    anon_sym_raises,
    STATE(257),
    1,
    sym_comment,
    STATE(459),
    1,
    sym_raises_expr,
    ACTIONS(1583),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [11610] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(258),
    1,
    sym_comment,
    ACTIONS(1585),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11626] = 4,
    ACTIONS(1557),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_SLASH_STAR,
    STATE(259),
    1,
    sym_comment,
    ACTIONS(1086),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [11642] = 4,
    ACTIONS(1557),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_SLASH_STAR,
    STATE(260),
    1,
    sym_comment,
    ACTIONS(1094),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [11658] = 4,
    ACTIONS(1557),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_SLASH_STAR,
    STATE(261),
    1,
    sym_comment,
    ACTIONS(1098),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [11674] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1587),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1589),
    1,
    anon_sym_LPAREN,
    STATE(262),
    1,
    sym_comment,
    ACTIONS(1062),
    2,
    anon_sym_AT,
    sym_identifier,
    [11694] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(263),
    1,
    sym_comment,
    ACTIONS(1591),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11710] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1489),
    1,
    anon_sym_COLON,
    ACTIONS(1493),
    1,
    anon_sym_supports,
    ACTIONS(1593),
    1,
    anon_sym_LBRACE,
    STATE(264),
    1,
    sym_comment,
    STATE(695),
    1,
    sym_value_inheritance_spec,
    [11732] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1595),
    1,
    anon_sym_LT,
    STATE(265),
    1,
    sym_comment,
    ACTIONS(1597),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11750] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(266),
    1,
    sym_comment,
    STATE(303),
    1,
    sym_scoped_name,
    STATE(566),
    1,
    sym_interface_name,
    [11772] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1599),
    1,
    anon_sym_RPAREN,
    ACTIONS(1601),
    1,
    anon_sym_in,
    STATE(267),
    1,
    sym_comment,
    STATE(300),
    1,
    sym_factory_param_dcl,
    STATE(585),
    1,
    sym_factory_param_dcls,
    [11794] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(268),
    1,
    sym_comment,
    ACTIONS(1603),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11810] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(269),
    1,
    sym_comment,
    ACTIONS(1605),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11826] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1607),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1610),
    1,
    sym_identifier,
    STATE(524),
    1,
    sym_enum_modifier,
    STATE(270),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [11846] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1612),
    1,
    anon_sym_LBRACE,
    ACTIONS(1614),
    1,
    anon_sym_COLON,
    ACTIONS(1616),
    1,
    anon_sym_SEMI,
    STATE(271),
    1,
    sym_comment,
    STATE(624),
    1,
    sym_interface_inheritance_spec,
    [11868] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(272),
    1,
    sym_comment,
    STATE(303),
    1,
    sym_scoped_name,
    STATE(342),
    1,
    sym_interface_name,
    [11890] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1539),
    1,
    anon_sym_COMMA,
    STATE(256),
    1,
    aux_sym_declarators_repeat1,
    STATE(273),
    1,
    sym_comment,
    ACTIONS(1618),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [11910] = 7,
    ACTIONS(1557),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1620),
    1,
    anon_sym_AT,
    ACTIONS(1622),
    1,
    aux_sym_comment_token2,
    STATE(274),
    1,
    sym_comment,
    STATE(295),
    1,
    aux_sym_interface_def_repeat1,
    STATE(507),
    1,
    sym_annotation_appl,
    [11932] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(275),
    1,
    sym_comment,
    STATE(303),
    1,
    sym_scoped_name,
    STATE(378),
    1,
    sym_interface_name,
    [11954] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1624),
    1,
    anon_sym_L,
    STATE(276),
    1,
    sym_comment,
    STATE(593),
    1,
    sym_string_literal,
    [11976] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1624),
    1,
    anon_sym_L,
    STATE(277),
    1,
    sym_comment,
    STATE(581),
    1,
    sym_string_literal,
    [11998] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1626),
    1,
    anon_sym_LBRACE,
    ACTIONS(1628),
    1,
    anon_sym_COLON,
    STATE(278),
    1,
    sym_comment,
    ACTIONS(1630),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12018] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1043),
    1,
    sym_identifier,
    ACTIONS(1632),
    1,
    anon_sym_AT,
    STATE(515),
    1,
    sym_annotation_appl,
    STATE(279),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    [12038] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1565),
    1,
    anon_sym_COMMA,
    ACTIONS(1635),
    1,
    anon_sym_LBRACE,
    ACTIONS(1637),
    1,
    anon_sym_supports,
    STATE(280),
    1,
    sym_comment,
    STATE(281),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    [12060] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1639),
    1,
    anon_sym_COMMA,
    ACTIONS(1642),
    2,
    anon_sym_LBRACE,
    anon_sym_supports,
    STATE(281),
    2,
    sym_comment,
    aux_sym_value_inheritance_spec_repeat1,
    [12078] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(249),
    1,
    sym_value_name,
    STATE(282),
    1,
    sym_comment,
    STATE(283),
    1,
    sym_scoped_name,
    [12100] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    STATE(283),
    1,
    sym_comment,
    ACTIONS(1644),
    3,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    anon_sym_supports,
    [12118] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1565),
    1,
    anon_sym_COMMA,
    ACTIONS(1646),
    1,
    anon_sym_LBRACE,
    ACTIONS(1648),
    1,
    anon_sym_supports,
    STATE(255),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    STATE(284),
    1,
    sym_comment,
    [12140] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1624),
    1,
    anon_sym_L,
    ACTIONS(1650),
    1,
    anon_sym_RPAREN,
    STATE(285),
    1,
    sym_comment,
    STATE(347),
    1,
    sym_string_literal,
    [12162] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1587),
    1,
    anon_sym_COLON_COLON,
    STATE(286),
    1,
    sym_comment,
    ACTIONS(1343),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12180] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1435),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1652),
    1,
    sym_identifier,
    STATE(270),
    1,
    aux_sym_enumerator_repeat1,
    STATE(287),
    1,
    sym_comment,
    STATE(524),
    1,
    sym_enum_modifier,
    [12202] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(288),
    1,
    sym_comment,
    ACTIONS(1654),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [12218] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1477),
    1,
    sym_identifier,
    STATE(289),
    1,
    sym_comment,
    STATE(365),
    1,
    sym_declarator,
    STATE(382),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [12238] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1489),
    1,
    anon_sym_COLON,
    ACTIONS(1493),
    1,
    anon_sym_supports,
    ACTIONS(1656),
    1,
    anon_sym_LBRACE,
    STATE(290),
    1,
    sym_comment,
    STATE(753),
    1,
    sym_value_inheritance_spec,
    [12260] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(291),
    1,
    sym_comment,
    ACTIONS(1658),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [12276] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1483),
    1,
    anon_sym_COMMA,
    STATE(215),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(292),
    1,
    sym_comment,
    ACTIONS(1660),
    2,
    anon_sym_LBRACE,
    anon_sym_manages,
    [12296] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1477),
    1,
    sym_identifier,
    STATE(293),
    1,
    sym_comment,
    STATE(456),
    1,
    sym_any_declarator,
    STATE(489),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [12316] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1662),
    1,
    anon_sym_LBRACE,
    ACTIONS(1664),
    1,
    anon_sym_primarykey,
    STATE(294),
    1,
    sym_comment,
    STATE(620),
    1,
    sym_primary_key_spec,
    [12338] = 7,
    ACTIONS(1557),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1620),
    1,
    anon_sym_AT,
    ACTIONS(1666),
    1,
    aux_sym_comment_token1,
    STATE(252),
    1,
    aux_sym_interface_def_repeat1,
    STATE(295),
    1,
    sym_comment,
    STATE(507),
    1,
    sym_annotation_appl,
    [12360] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1664),
    1,
    anon_sym_primarykey,
    ACTIONS(1668),
    1,
    anon_sym_LBRACE,
    STATE(296),
    1,
    sym_comment,
    STATE(615),
    1,
    sym_primary_key_spec,
    [12382] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1664),
    1,
    anon_sym_primarykey,
    ACTIONS(1670),
    1,
    anon_sym_LBRACE,
    STATE(297),
    1,
    sym_comment,
    STATE(555),
    1,
    sym_primary_key_spec,
    [12404] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(298),
    1,
    sym_comment,
    STATE(303),
    1,
    sym_scoped_name,
    STATE(410),
    1,
    sym_interface_name,
    [12426] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1672),
    1,
    anon_sym_COMMA,
    ACTIONS(1674),
    1,
    anon_sym_RPAREN,
    STATE(299),
    1,
    sym_comment,
    STATE(422),
    1,
    aux_sym_init_param_dcls_repeat1,
    [12445] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1676),
    1,
    anon_sym_COMMA,
    ACTIONS(1678),
    1,
    anon_sym_RPAREN,
    STATE(300),
    1,
    sym_comment,
    STATE(418),
    1,
    aux_sym_factory_param_dcls_repeat1,
    [12464] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(301),
    1,
    sym_comment,
    ACTIONS(1680),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12479] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(302),
    1,
    sym_comment,
    ACTIONS(1682),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12494] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    STATE(303),
    1,
    sym_comment,
    ACTIONS(1684),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [12511] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1686),
    1,
    anon_sym_GT,
    ACTIONS(1688),
    1,
    anon_sym_COMMA,
    STATE(304),
    2,
    sym_comment,
    aux_sym_actual_parameters_repeat1,
    [12528] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1691),
    1,
    anon_sym_GT,
    ACTIONS(1693),
    1,
    anon_sym_COMMA,
    STATE(305),
    2,
    sym_comment,
    aux_sym_formal_parameters_repeat1,
    [12545] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1696),
    1,
    sym_identifier,
    STATE(262),
    1,
    sym_scoped_name,
    STATE(306),
    1,
    sym_comment,
    [12564] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1698),
    1,
    anon_sym_COMMA,
    ACTIONS(1701),
    1,
    anon_sym_RPAREN,
    STATE(307),
    2,
    sym_comment,
    aux_sym_annotation_appl_params_repeat1,
    [12581] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1703),
    1,
    anon_sym_SEMI,
    ACTIONS(1705),
    1,
    anon_sym_context,
    STATE(308),
    1,
    sym_comment,
    STATE(721),
    1,
    sym_context_expr,
    [12600] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(309),
    1,
    sym_comment,
    ACTIONS(1707),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12615] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(310),
    1,
    sym_comment,
    ACTIONS(1709),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12630] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1711),
    1,
    anon_sym_COMMA,
    ACTIONS(1714),
    1,
    anon_sym_RBRACE,
    STATE(311),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [12647] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1433),
    1,
    anon_sym_RBRACE,
    ACTIONS(1716),
    1,
    anon_sym_COMMA,
    STATE(312),
    1,
    sym_comment,
    STATE(402),
    1,
    aux_sym_enum_dcl_repeat1,
    [12666] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1718),
    1,
    anon_sym_LBRACE,
    ACTIONS(1720),
    1,
    anon_sym_COLON,
    STATE(313),
    1,
    sym_comment,
    STATE(623),
    1,
    sym_connector_inherit_spec,
    [12685] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1722),
    1,
    anon_sym_COMMA,
    ACTIONS(1724),
    1,
    anon_sym_RPAREN,
    STATE(314),
    1,
    sym_comment,
    STATE(421),
    1,
    aux_sym_annotation_appl_params_repeat1,
    [12704] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1726),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1728),
    1,
    sym_identifier,
    STATE(83),
    1,
    sym_scoped_name,
    STATE(315),
    1,
    sym_comment,
    [12723] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(316),
    1,
    sym_comment,
    ACTIONS(1730),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [12738] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(317),
    1,
    sym_comment,
    ACTIONS(1732),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12753] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(318),
    1,
    sym_comment,
    ACTIONS(1343),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12768] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1705),
    1,
    anon_sym_context,
    ACTIONS(1734),
    1,
    anon_sym_SEMI,
    STATE(319),
    1,
    sym_comment,
    STATE(721),
    1,
    sym_context_expr,
    [12787] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1736),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1738),
    1,
    sym_identifier,
    STATE(247),
    1,
    sym_scoped_name,
    STATE(320),
    1,
    sym_comment,
    [12806] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(321),
    1,
    sym_comment,
    ACTIONS(1740),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12821] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1742),
    1,
    anon_sym_interface,
    ACTIONS(1744),
    1,
    anon_sym_valuetype,
    ACTIONS(1746),
    1,
    anon_sym_eventtype,
    STATE(322),
    1,
    sym_comment,
    [12840] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1635),
    1,
    anon_sym_LBRACE,
    ACTIONS(1748),
    1,
    anon_sym_COMMA,
    STATE(323),
    1,
    sym_comment,
    STATE(386),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [12859] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1750),
    1,
    anon_sym_COMMA,
    ACTIONS(1752),
    1,
    anon_sym_RBRACE,
    STATE(324),
    1,
    sym_comment,
    STATE(329),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [12878] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(176),
    1,
    sym_scoped_name,
    STATE(325),
    1,
    sym_comment,
    [12897] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1754),
    1,
    anon_sym_GT,
    ACTIONS(1756),
    1,
    anon_sym_COMMA,
    STATE(326),
    1,
    sym_comment,
    STATE(423),
    1,
    aux_sym_formal_parameters_repeat1,
    [12916] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1758),
    1,
    sym_identifier,
    STATE(327),
    1,
    sym_comment,
    STATE(479),
    1,
    sym_scoped_name,
    [12935] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1760),
    1,
    anon_sym_COMMA,
    ACTIONS(1762),
    1,
    anon_sym_SEMI,
    STATE(328),
    1,
    sym_comment,
    STATE(391),
    1,
    aux_sym_any_declarators_repeat1,
    [12954] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1764),
    1,
    anon_sym_COMMA,
    ACTIONS(1767),
    1,
    anon_sym_RBRACE,
    STATE(329),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [12971] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1769),
    1,
    anon_sym_COMMA,
    ACTIONS(1772),
    1,
    anon_sym_LBRACE,
    STATE(330),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [12988] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    STATE(331),
    1,
    sym_comment,
    ACTIONS(1774),
    2,
    anon_sym_LBRACE,
    anon_sym_supports,
    [13005] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(332),
    1,
    sym_comment,
    STATE(478),
    1,
    sym_scoped_name,
    [13024] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(277),
    1,
    sym_scoped_name,
    STATE(333),
    1,
    sym_comment,
    [13043] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    STATE(334),
    1,
    sym_comment,
    ACTIONS(1776),
    2,
    anon_sym_supports,
    anon_sym_manages,
    [13060] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(276),
    1,
    sym_scoped_name,
    STATE(335),
    1,
    sym_comment,
    [13079] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(297),
    1,
    sym_scoped_name,
    STATE(336),
    1,
    sym_comment,
    [13098] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1778),
    1,
    anon_sym_SEMI,
    ACTIONS(1780),
    1,
    sym_identifier,
    STATE(337),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [13115] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1783),
    1,
    anon_sym_GT,
    ACTIONS(1785),
    1,
    anon_sym_COMMA,
    STATE(338),
    2,
    sym_comment,
    aux_sym_formal_parameter_names_repeat1,
    [13132] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1385),
    1,
    anon_sym_setraises,
    ACTIONS(1788),
    1,
    anon_sym_SEMI,
    STATE(339),
    1,
    sym_comment,
    STATE(628),
    1,
    sym_set_excep_expr,
    [13151] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1790),
    1,
    anon_sym_SEMI,
    ACTIONS(1792),
    1,
    anon_sym_default,
    STATE(340),
    1,
    sym_comment,
    STATE(595),
    1,
    sym_default,
    [13170] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1379),
    1,
    anon_sym_COMMA,
    ACTIONS(1794),
    1,
    anon_sym_SEMI,
    STATE(341),
    1,
    sym_comment,
    STATE(405),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [13189] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1748),
    1,
    anon_sym_COMMA,
    ACTIONS(1796),
    1,
    anon_sym_LBRACE,
    STATE(342),
    1,
    sym_comment,
    STATE(372),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [13208] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(343),
    1,
    sym_comment,
    STATE(531),
    1,
    sym_scoped_name,
    [13227] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1798),
    1,
    sym_identifier,
    STATE(177),
    1,
    sym_simple_declarator,
    STATE(344),
    1,
    sym_comment,
    STATE(605),
    1,
    sym_attr_declarator,
    [13246] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1800),
    1,
    anon_sym_GT,
    ACTIONS(1802),
    1,
    anon_sym_COMMA,
    STATE(338),
    1,
    aux_sym_formal_parameter_names_repeat1,
    STATE(345),
    1,
    sym_comment,
    [13265] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1804),
    1,
    anon_sym_GT,
    ACTIONS(1806),
    1,
    anon_sym_COMMA,
    STATE(346),
    1,
    sym_comment,
    STATE(425),
    1,
    aux_sym_actual_parameters_repeat1,
    [13284] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1808),
    1,
    anon_sym_COMMA,
    ACTIONS(1810),
    1,
    anon_sym_RPAREN,
    STATE(347),
    1,
    sym_comment,
    STATE(416),
    1,
    aux_sym_context_expr_repeat1,
    [13303] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1483),
    1,
    anon_sym_COMMA,
    ACTIONS(1812),
    1,
    anon_sym_RPAREN,
    STATE(215),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(348),
    1,
    sym_comment,
    [13322] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1814),
    1,
    anon_sym_COMMA,
    ACTIONS(1816),
    1,
    anon_sym_RPAREN,
    STATE(349),
    1,
    sym_comment,
    STATE(362),
    1,
    aux_sym_parameter_dcls_repeat1,
    [13341] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(350),
    1,
    sym_comment,
    ACTIONS(1818),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [13356] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1802),
    1,
    anon_sym_COMMA,
    ACTIONS(1820),
    1,
    anon_sym_GT,
    STATE(345),
    1,
    aux_sym_formal_parameter_names_repeat1,
    STATE(351),
    1,
    sym_comment,
    [13375] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(352),
    1,
    sym_comment,
    ACTIONS(1822),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13390] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1824),
    1,
    anon_sym_COMMA,
    ACTIONS(1827),
    1,
    anon_sym_RPAREN,
    STATE(353),
    2,
    sym_comment,
    aux_sym_in_parameter_dcls_repeat1,
    [13407] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1760),
    1,
    anon_sym_COMMA,
    ACTIONS(1829),
    1,
    anon_sym_SEMI,
    STATE(328),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(354),
    1,
    sym_comment,
    [13426] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1481),
    1,
    anon_sym_raises,
    ACTIONS(1831),
    1,
    anon_sym_SEMI,
    STATE(355),
    1,
    sym_comment,
    STATE(643),
    1,
    sym_raises_expr,
    [13445] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1453),
    1,
    anon_sym_RBRACE,
    ACTIONS(1750),
    1,
    anon_sym_COMMA,
    STATE(356),
    1,
    sym_comment,
    STATE(403),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [13464] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1483),
    1,
    anon_sym_COMMA,
    ACTIONS(1833),
    1,
    anon_sym_RPAREN,
    STATE(215),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(357),
    1,
    sym_comment,
    [13483] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1716),
    1,
    anon_sym_COMMA,
    ACTIONS(1835),
    1,
    anon_sym_RBRACE,
    STATE(311),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(358),
    1,
    sym_comment,
    [13502] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(359),
    1,
    sym_comment,
    ACTIONS(1642),
    3,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    anon_sym_supports,
    [13517] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1481),
    1,
    anon_sym_raises,
    ACTIONS(1837),
    1,
    anon_sym_SEMI,
    STATE(360),
    1,
    sym_comment,
    STATE(649),
    1,
    sym_raises_expr,
    [13536] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(361),
    1,
    sym_comment,
    ACTIONS(1839),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13551] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1814),
    1,
    anon_sym_COMMA,
    ACTIONS(1841),
    1,
    anon_sym_RPAREN,
    STATE(362),
    1,
    sym_comment,
    STATE(389),
    1,
    aux_sym_parameter_dcls_repeat1,
    [13570] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1750),
    1,
    anon_sym_COMMA,
    ACTIONS(1752),
    1,
    anon_sym_RBRACE,
    STATE(363),
    1,
    sym_comment,
    STATE(417),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [13589] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1843),
    1,
    anon_sym_SEMI,
    ACTIONS(1845),
    1,
    anon_sym_switch,
    ACTIONS(1847),
    1,
    sym_identifier,
    STATE(364),
    1,
    sym_comment,
    [13608] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(365),
    1,
    sym_comment,
    ACTIONS(1581),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [13623] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1716),
    1,
    anon_sym_COMMA,
    ACTIONS(1849),
    1,
    anon_sym_RBRACE,
    STATE(358),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(366),
    1,
    sym_comment,
    [13642] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1088),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1851),
    1,
    anon_sym_LT,
    ACTIONS(1853),
    1,
    anon_sym_LBRACE,
    STATE(367),
    1,
    sym_comment,
    [13661] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(331),
    1,
    sym_scoped_name,
    STATE(368),
    1,
    sym_comment,
    [13680] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1748),
    1,
    anon_sym_COMMA,
    ACTIONS(1855),
    1,
    anon_sym_LBRACE,
    STATE(330),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(369),
    1,
    sym_comment,
    [13699] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1798),
    1,
    sym_identifier,
    STATE(212),
    1,
    sym_simple_declarator,
    STATE(370),
    1,
    sym_comment,
    STATE(559),
    1,
    sym_readonly_attr_declarator,
    [13718] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1857),
    1,
    anon_sym_SEMI,
    ACTIONS(1859),
    1,
    sym_identifier,
    STATE(371),
    1,
    sym_comment,
    STATE(397),
    1,
    aux_sym_bitfield_repeat1,
    [13737] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1748),
    1,
    anon_sym_COMMA,
    ACTIONS(1861),
    1,
    anon_sym_LBRACE,
    STATE(330),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(372),
    1,
    sym_comment,
    [13756] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(213),
    1,
    sym_scoped_name,
    STATE(373),
    1,
    sym_comment,
    [13775] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1461),
    1,
    anon_sym_supports,
    ACTIONS(1863),
    1,
    anon_sym_LBRACE,
    STATE(374),
    1,
    sym_comment,
    STATE(737),
    1,
    sym_supported_interface_spec,
    [13794] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(334),
    1,
    sym_scoped_name,
    STATE(375),
    1,
    sym_comment,
    [13813] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(376),
    1,
    sym_comment,
    STATE(440),
    1,
    sym_scoped_name,
    [13832] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1865),
    1,
    anon_sym_COMMA,
    ACTIONS(1868),
    1,
    anon_sym_RPAREN,
    STATE(377),
    2,
    sym_comment,
    aux_sym_factory_param_dcls_repeat1,
    [13849] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1748),
    1,
    anon_sym_COMMA,
    ACTIONS(1870),
    1,
    anon_sym_LBRACE,
    STATE(378),
    1,
    sym_comment,
    STATE(411),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [13868] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(294),
    1,
    sym_scoped_name,
    STATE(379),
    1,
    sym_comment,
    [13887] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(380),
    1,
    sym_comment,
    STATE(491),
    1,
    sym_scoped_name,
    [13906] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1872),
    1,
    anon_sym_COMMA,
    ACTIONS(1875),
    1,
    anon_sym_RPAREN,
    STATE(381),
    2,
    sym_comment,
    aux_sym_init_param_dcls_repeat1,
    [13923] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(382),
    1,
    sym_comment,
    ACTIONS(1877),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [13938] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1612),
    1,
    anon_sym_LBRACE,
    ACTIONS(1614),
    1,
    anon_sym_COLON,
    STATE(383),
    1,
    sym_comment,
    STATE(624),
    1,
    sym_interface_inheritance_spec,
    [13957] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1792),
    1,
    anon_sym_default,
    ACTIONS(1879),
    1,
    anon_sym_SEMI,
    STATE(384),
    1,
    sym_comment,
    STATE(570),
    1,
    sym_default,
    [13976] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(296),
    1,
    sym_scoped_name,
    STATE(385),
    1,
    sym_comment,
    [13995] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1748),
    1,
    anon_sym_COMMA,
    ACTIONS(1870),
    1,
    anon_sym_LBRACE,
    STATE(330),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(386),
    1,
    sym_comment,
    [14014] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(387),
    1,
    sym_comment,
    STATE(519),
    1,
    sym_scoped_name,
    [14033] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1461),
    1,
    anon_sym_supports,
    ACTIONS(1881),
    1,
    anon_sym_manages,
    STATE(388),
    1,
    sym_comment,
    STATE(734),
    1,
    sym_supported_interface_spec,
    [14052] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1883),
    1,
    anon_sym_COMMA,
    ACTIONS(1886),
    1,
    anon_sym_RPAREN,
    STATE(389),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [14069] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(216),
    1,
    sym_scoped_name,
    STATE(390),
    1,
    sym_comment,
    [14088] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1888),
    1,
    anon_sym_COMMA,
    ACTIONS(1891),
    1,
    anon_sym_SEMI,
    STATE(391),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [14105] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1893),
    1,
    anon_sym_COMMA,
    ACTIONS(1896),
    1,
    anon_sym_RPAREN,
    STATE(392),
    2,
    sym_comment,
    aux_sym_context_expr_repeat1,
    [14122] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(393),
    1,
    sym_comment,
    STATE(498),
    1,
    sym_scoped_name,
    [14141] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1898),
    1,
    anon_sym_COMMA,
    ACTIONS(1900),
    1,
    anon_sym_RPAREN,
    STATE(353),
    1,
    aux_sym_in_parameter_dcls_repeat1,
    STATE(394),
    1,
    sym_comment,
    [14160] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(395),
    1,
    sym_comment,
    ACTIONS(1902),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [14175] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(396),
    1,
    sym_comment,
    ACTIONS(1904),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [14190] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1859),
    1,
    sym_identifier,
    ACTIONS(1906),
    1,
    anon_sym_SEMI,
    STATE(337),
    1,
    aux_sym_bitfield_repeat1,
    STATE(397),
    1,
    sym_comment,
    [14209] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1379),
    1,
    anon_sym_COMMA,
    ACTIONS(1908),
    1,
    anon_sym_SEMI,
    STATE(398),
    1,
    sym_comment,
    STATE(405),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [14228] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(399),
    1,
    sym_comment,
    ACTIONS(1910),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [14243] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(240),
    1,
    sym_scoped_name,
    STATE(400),
    1,
    sym_comment,
    [14262] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(401),
    1,
    sym_comment,
    ACTIONS(1912),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [14277] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1716),
    1,
    anon_sym_COMMA,
    ACTIONS(1849),
    1,
    anon_sym_RBRACE,
    STATE(311),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(402),
    1,
    sym_comment,
    [14296] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1750),
    1,
    anon_sym_COMMA,
    ACTIONS(1914),
    1,
    anon_sym_RBRACE,
    STATE(329),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(403),
    1,
    sym_comment,
    [14315] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1750),
    1,
    anon_sym_COMMA,
    ACTIONS(1914),
    1,
    anon_sym_RBRACE,
    STATE(324),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(404),
    1,
    sym_comment,
    [14334] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1916),
    1,
    anon_sym_COMMA,
    ACTIONS(1919),
    1,
    anon_sym_SEMI,
    STATE(405),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [14351] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(772),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(245),
    1,
    sym_scoped_name,
    STATE(406),
    1,
    sym_comment,
    [14370] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(407),
    1,
    sym_comment,
    ACTIONS(1921),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [14385] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1696),
    1,
    sym_identifier,
    STATE(408),
    1,
    sym_comment,
    STATE(482),
    1,
    sym_scoped_name,
    [14404] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1898),
    1,
    anon_sym_COMMA,
    ACTIONS(1923),
    1,
    anon_sym_RPAREN,
    STATE(394),
    1,
    aux_sym_in_parameter_dcls_repeat1,
    STATE(409),
    1,
    sym_comment,
    [14423] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1748),
    1,
    anon_sym_COMMA,
    ACTIONS(1925),
    1,
    anon_sym_LBRACE,
    STATE(369),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(410),
    1,
    sym_comment,
    [14442] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1748),
    1,
    anon_sym_COMMA,
    ACTIONS(1925),
    1,
    anon_sym_LBRACE,
    STATE(330),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(411),
    1,
    sym_comment,
    [14461] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1696),
    1,
    sym_identifier,
    STATE(412),
    1,
    sym_comment,
    STATE(484),
    1,
    sym_scoped_name,
    [14480] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1696),
    1,
    sym_identifier,
    STATE(413),
    1,
    sym_comment,
    STATE(485),
    1,
    sym_scoped_name,
    [14499] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(97),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1696),
    1,
    sym_identifier,
    STATE(414),
    1,
    sym_comment,
    STATE(486),
    1,
    sym_scoped_name,
    [14518] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(782),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1624),
    1,
    anon_sym_L,
    STATE(415),
    1,
    sym_comment,
    STATE(457),
    1,
    sym_string_literal,
    [14537] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1808),
    1,
    anon_sym_COMMA,
    ACTIONS(1927),
    1,
    anon_sym_RPAREN,
    STATE(392),
    1,
    aux_sym_context_expr_repeat1,
    STATE(416),
    1,
    sym_comment,
    [14556] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1750),
    1,
    anon_sym_COMMA,
    ACTIONS(1929),
    1,
    anon_sym_RBRACE,
    STATE(329),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(417),
    1,
    sym_comment,
    [14575] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1676),
    1,
    anon_sym_COMMA,
    ACTIONS(1931),
    1,
    anon_sym_RPAREN,
    STATE(377),
    1,
    aux_sym_factory_param_dcls_repeat1,
    STATE(418),
    1,
    sym_comment,
    [14594] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1481),
    1,
    anon_sym_raises,
    ACTIONS(1933),
    1,
    anon_sym_SEMI,
    STATE(419),
    1,
    sym_comment,
    STATE(693),
    1,
    sym_raises_expr,
    [14613] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1705),
    1,
    anon_sym_context,
    ACTIONS(1935),
    1,
    anon_sym_SEMI,
    STATE(420),
    1,
    sym_comment,
    STATE(721),
    1,
    sym_context_expr,
    [14632] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1722),
    1,
    anon_sym_COMMA,
    ACTIONS(1937),
    1,
    anon_sym_RPAREN,
    STATE(307),
    1,
    aux_sym_annotation_appl_params_repeat1,
    STATE(421),
    1,
    sym_comment,
    [14651] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1672),
    1,
    anon_sym_COMMA,
    ACTIONS(1939),
    1,
    anon_sym_RPAREN,
    STATE(381),
    1,
    aux_sym_init_param_dcls_repeat1,
    STATE(422),
    1,
    sym_comment,
    [14670] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1756),
    1,
    anon_sym_COMMA,
    ACTIONS(1941),
    1,
    anon_sym_GT,
    STATE(305),
    1,
    aux_sym_formal_parameters_repeat1,
    STATE(423),
    1,
    sym_comment,
    [14689] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1481),
    1,
    anon_sym_raises,
    ACTIONS(1943),
    1,
    anon_sym_SEMI,
    STATE(424),
    1,
    sym_comment,
    STATE(689),
    1,
    sym_raises_expr,
    [14708] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1806),
    1,
    anon_sym_COMMA,
    ACTIONS(1945),
    1,
    anon_sym_GT,
    STATE(304),
    1,
    aux_sym_actual_parameters_repeat1,
    STATE(425),
    1,
    sym_comment,
    [14727] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(426),
    1,
    sym_comment,
    ACTIONS(1947),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [14742] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(427),
    1,
    sym_comment,
    ACTIONS(1949),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [14756] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1951),
    1,
    sym_identifier,
    STATE(428),
    1,
    sym_comment,
    STATE(527),
    1,
    sym_annotation_appl_param,
    [14772] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(429),
    1,
    sym_comment,
    ACTIONS(1953),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14786] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1798),
    1,
    sym_identifier,
    STATE(430),
    1,
    sym_comment,
    STATE(465),
    1,
    sym_simple_declarator,
    [14802] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1798),
    1,
    sym_identifier,
    STATE(431),
    1,
    sym_comment,
    STATE(462),
    1,
    sym_simple_declarator,
    [14818] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1798),
    1,
    sym_identifier,
    STATE(432),
    1,
    sym_comment,
    STATE(461),
    1,
    sym_simple_declarator,
    [14834] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(433),
    1,
    sym_comment,
    ACTIONS(1955),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14848] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1601),
    1,
    anon_sym_in,
    STATE(434),
    1,
    sym_comment,
    STATE(466),
    1,
    sym_factory_param_dcl,
    [14864] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1551),
    1,
    anon_sym_in,
    STATE(435),
    1,
    sym_comment,
    STATE(464),
    1,
    sym_init_param_dcl,
    [14880] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(436),
    1,
    sym_comment,
    ACTIONS(1583),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14894] = 5,
    ACTIONS(1557),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1957),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(1959),
    1,
    sym_preproc_arg,
    STATE(437),
    1,
    sym_comment,
    [14910] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(438),
    1,
    sym_comment,
    ACTIONS(1961),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14924] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(439),
    1,
    sym_comment,
    ACTIONS(1963),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14938] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1965),
    1,
    anon_sym_LT,
    STATE(440),
    1,
    sym_comment,
    [14954] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1967),
    1,
    anon_sym_RPAREN,
    STATE(441),
    1,
    sym_comment,
    [14970] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(442),
    1,
    sym_comment,
    ACTIONS(1969),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14984] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(443),
    1,
    sym_comment,
    ACTIONS(1971),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14998] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(444),
    1,
    sym_comment,
    ACTIONS(1973),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15012] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1975),
    1,
    anon_sym_SEMI,
    ACTIONS(1977),
    1,
    anon_sym_default,
    STATE(445),
    1,
    sym_comment,
    [15028] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(446),
    1,
    sym_comment,
    ACTIONS(1979),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [15042] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(447),
    1,
    sym_comment,
    ACTIONS(1981),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [15056] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(448),
    1,
    sym_comment,
    ACTIONS(1983),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15070] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1798),
    1,
    sym_identifier,
    STATE(449),
    1,
    sym_comment,
    STATE(490),
    1,
    sym_simple_declarator,
    [15086] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(450),
    1,
    sym_comment,
    ACTIONS(1985),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [15100] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(451),
    1,
    sym_comment,
    ACTIONS(1919),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [15114] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1563),
    1,
    anon_sym_in,
    STATE(452),
    1,
    sym_comment,
    STATE(492),
    1,
    sym_in_param_dcl,
    [15130] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(453),
    1,
    sym_comment,
    ACTIONS(1987),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15144] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(454),
    1,
    sym_comment,
    ACTIONS(1989),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15158] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(455),
    1,
    sym_comment,
    ACTIONS(1991),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [15172] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(456),
    1,
    sym_comment,
    ACTIONS(1891),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [15186] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(457),
    1,
    sym_comment,
    ACTIONS(1896),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15200] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(458),
    1,
    sym_comment,
    ACTIONS(1993),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15214] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(459),
    1,
    sym_comment,
    ACTIONS(1995),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [15228] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(460),
    1,
    sym_comment,
    ACTIONS(1886),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15242] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(461),
    1,
    sym_comment,
    ACTIONS(1997),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15256] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(462),
    1,
    sym_comment,
    ACTIONS(1999),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15270] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2001),
    1,
    anon_sym_LBRACE,
    ACTIONS(2003),
    1,
    anon_sym_COLON,
    STATE(463),
    1,
    sym_comment,
    [15286] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(464),
    1,
    sym_comment,
    ACTIONS(1875),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15300] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(465),
    1,
    sym_comment,
    ACTIONS(2005),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15314] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(466),
    1,
    sym_comment,
    ACTIONS(1868),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15328] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(467),
    1,
    sym_comment,
    ACTIONS(2007),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15342] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2009),
    1,
    anon_sym_LBRACE,
    ACTIONS(2011),
    1,
    anon_sym_COLON,
    STATE(468),
    1,
    sym_comment,
    [15358] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(469),
    1,
    sym_comment,
    ACTIONS(2013),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15372] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(470),
    1,
    sym_comment,
    ACTIONS(2015),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15386] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(471),
    1,
    sym_comment,
    ACTIONS(2017),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15400] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(472),
    1,
    sym_comment,
    ACTIONS(2019),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [15414] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(473),
    1,
    sym_comment,
    ACTIONS(2021),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15428] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2023),
    1,
    sym_identifier,
    STATE(474),
    1,
    sym_comment,
    STATE(716),
    1,
    sym_formal_parameter_names,
    [15444] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(475),
    1,
    sym_comment,
    ACTIONS(2025),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [15458] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(476),
    1,
    sym_comment,
    ACTIONS(2027),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15472] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(477),
    1,
    sym_comment,
    ACTIONS(2029),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15486] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(2031),
    1,
    anon_sym_LBRACE,
    STATE(478),
    1,
    sym_comment,
    [15502] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(2033),
    1,
    anon_sym_LT,
    STATE(479),
    1,
    sym_comment,
    [15518] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(480),
    1,
    sym_comment,
    ACTIONS(2035),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15532] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(481),
    1,
    sym_comment,
    ACTIONS(2037),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15546] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1587),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(2039),
    1,
    sym_identifier,
    STATE(482),
    1,
    sym_comment,
    [15562] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(483),
    1,
    sym_comment,
    ACTIONS(2041),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15576] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1587),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(2043),
    1,
    sym_identifier,
    STATE(484),
    1,
    sym_comment,
    [15592] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1587),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(2045),
    1,
    sym_identifier,
    STATE(485),
    1,
    sym_comment,
    [15608] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1587),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(2047),
    1,
    sym_identifier,
    STATE(486),
    1,
    sym_comment,
    [15624] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(487),
    1,
    sym_comment,
    ACTIONS(2049),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [15638] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1587),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(2051),
    1,
    sym_identifier,
    STATE(488),
    1,
    sym_comment,
    [15654] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(489),
    1,
    sym_comment,
    ACTIONS(2053),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [15668] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(490),
    1,
    sym_comment,
    ACTIONS(2055),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15682] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(2057),
    1,
    anon_sym_LBRACE,
    STATE(491),
    1,
    sym_comment,
    [15698] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(492),
    1,
    sym_comment,
    ACTIONS(1827),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15712] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1798),
    1,
    sym_identifier,
    STATE(493),
    1,
    sym_comment,
    STATE(543),
    1,
    sym_simple_declarator,
    [15728] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1587),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(2059),
    1,
    sym_identifier,
    STATE(494),
    1,
    sym_comment,
    [15744] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(495),
    1,
    sym_comment,
    ACTIONS(2061),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [15758] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(496),
    1,
    sym_comment,
    ACTIONS(2063),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [15772] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(497),
    1,
    sym_comment,
    ACTIONS(2065),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [15786] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(2067),
    1,
    anon_sym_LBRACE,
    STATE(498),
    1,
    sym_comment,
    [15802] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(499),
    1,
    sym_comment,
    ACTIONS(2069),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [15816] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2071),
    1,
    anon_sym_LPAREN,
    STATE(500),
    1,
    sym_comment,
    STATE(627),
    1,
    sym_exception_list,
    [15832] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2071),
    1,
    anon_sym_LPAREN,
    STATE(447),
    1,
    sym_exception_list,
    STATE(501),
    1,
    sym_comment,
    [15848] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1798),
    1,
    sym_identifier,
    STATE(451),
    1,
    sym_simple_declarator,
    STATE(502),
    1,
    sym_comment,
    [15864] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2073),
    1,
    anon_sym_GT,
    ACTIONS(2075),
    1,
    anon_sym_COMMA,
    STATE(503),
    1,
    sym_comment,
    [15880] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(504),
    1,
    sym_comment,
    ACTIONS(2077),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [15894] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(505),
    1,
    sym_comment,
    ACTIONS(1783),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [15908] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(506),
    1,
    sym_comment,
    ACTIONS(2079),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15922] = 4,
    ACTIONS(1557),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_SLASH_STAR,
    STATE(507),
    1,
    sym_comment,
    ACTIONS(1106),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [15936] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(508),
    1,
    sym_comment,
    ACTIONS(1767),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [15950] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1798),
    1,
    sym_identifier,
    STATE(445),
    1,
    sym_simple_declarator,
    STATE(509),
    1,
    sym_comment,
    [15966] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(510),
    1,
    sym_comment,
    ACTIONS(2081),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15980] = 4,
    ACTIONS(1557),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_SLASH_STAR,
    STATE(511),
    1,
    sym_comment,
    ACTIONS(1110),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [15994] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2083),
    1,
    anon_sym_valuetype,
    ACTIONS(2085),
    1,
    anon_sym_eventtype,
    STATE(512),
    1,
    sym_comment,
    [16010] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(513),
    1,
    sym_comment,
    ACTIONS(1772),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [16024] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1587),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(2087),
    1,
    sym_identifier,
    STATE(514),
    1,
    sym_comment,
    [16040] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(515),
    1,
    sym_comment,
    ACTIONS(1108),
    2,
    anon_sym_AT,
    sym_identifier,
    [16054] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(516),
    1,
    sym_comment,
    ACTIONS(2089),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [16068] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(517),
    1,
    sym_comment,
    ACTIONS(1112),
    2,
    anon_sym_AT,
    sym_identifier,
    [16082] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(518),
    1,
    sym_comment,
    ACTIONS(2091),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [16096] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(2093),
    1,
    anon_sym_LBRACE,
    STATE(519),
    1,
    sym_comment,
    [16112] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(520),
    1,
    sym_comment,
    ACTIONS(1714),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [16126] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2095),
    1,
    anon_sym_LT,
    ACTIONS(2097),
    1,
    sym_identifier,
    STATE(521),
    1,
    sym_comment,
    [16142] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2099),
    1,
    anon_sym_LBRACE,
    ACTIONS(2101),
    1,
    anon_sym_SEMI,
    STATE(522),
    1,
    sym_comment,
    [16158] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(523),
    1,
    sym_comment,
    ACTIONS(2103),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [16172] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(524),
    1,
    sym_comment,
    ACTIONS(2105),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [16186] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(525),
    1,
    sym_comment,
    ACTIONS(2107),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [16200] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(526),
    1,
    sym_comment,
    ACTIONS(2109),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [16214] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(527),
    1,
    sym_comment,
    ACTIONS(1701),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [16228] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(528),
    1,
    sym_comment,
    ACTIONS(2111),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [16242] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(2113),
    1,
    anon_sym_SEMI,
    STATE(529),
    1,
    sym_comment,
    [16258] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(530),
    1,
    sym_comment,
    ACTIONS(1691),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [16272] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(2115),
    1,
    anon_sym_LBRACE,
    STATE(531),
    1,
    sym_comment,
    [16288] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2117),
    1,
    anon_sym_GT,
    ACTIONS(2119),
    1,
    anon_sym_COMMA,
    STATE(532),
    1,
    sym_comment,
    [16304] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(533),
    1,
    sym_comment,
    ACTIONS(1686),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [16318] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(534),
    1,
    sym_comment,
    ACTIONS(2121),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [16332] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1227),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1343),
    1,
    anon_sym_COMMA,
    STATE(535),
    1,
    sym_comment,
    [16348] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2123),
    1,
    anon_sym_DQUOTE,
    ACTIONS(2125),
    1,
    anon_sym_SQUOTE,
    STATE(536),
    1,
    sym_comment,
    [16364] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2127),
    1,
    anon_sym_SEMI,
    STATE(537),
    1,
    sym_comment,
    [16377] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2129),
    1,
    anon_sym_SEMI,
    STATE(538),
    1,
    sym_comment,
    [16390] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2131),
    1,
    sym_identifier,
    STATE(539),
    1,
    sym_comment,
    [16403] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2133),
    1,
    anon_sym_SQUOTE,
    STATE(540),
    1,
    sym_comment,
    [16416] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2135),
    1,
    anon_sym_SEMI,
    STATE(541),
    1,
    sym_comment,
    [16429] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2137),
    1,
    sym_identifier,
    STATE(542),
    1,
    sym_comment,
    [16442] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2139),
    1,
    anon_sym_SEMI,
    STATE(543),
    1,
    sym_comment,
    [16455] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2141),
    1,
    anon_sym_SEMI,
    STATE(544),
    1,
    sym_comment,
    [16468] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2113),
    1,
    anon_sym_SEMI,
    STATE(545),
    1,
    sym_comment,
    [16481] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2143),
    1,
    anon_sym_RPAREN,
    STATE(546),
    1,
    sym_comment,
    [16494] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1345),
    1,
    anon_sym_EQ,
    STATE(547),
    1,
    sym_comment,
    [16507] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2145),
    1,
    anon_sym_SEMI,
    STATE(548),
    1,
    sym_comment,
    [16520] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2147),
    1,
    aux_sym_string_literal_token1,
    STATE(549),
    1,
    sym_comment,
    [16533] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2123),
    1,
    anon_sym_DQUOTE,
    STATE(550),
    1,
    sym_comment,
    [16546] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2149),
    1,
    anon_sym_SEMI,
    STATE(551),
    1,
    sym_comment,
    [16559] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2151),
    1,
    anon_sym_LBRACE,
    STATE(552),
    1,
    sym_comment,
    [16572] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2153),
    1,
    anon_sym_GT,
    STATE(553),
    1,
    sym_comment,
    [16585] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2155),
    1,
    anon_sym_LT,
    STATE(554),
    1,
    sym_comment,
    [16598] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1662),
    1,
    anon_sym_LBRACE,
    STATE(555),
    1,
    sym_comment,
    [16611] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2157),
    1,
    anon_sym_LT,
    STATE(556),
    1,
    sym_comment,
    [16624] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1935),
    1,
    anon_sym_SEMI,
    STATE(557),
    1,
    sym_comment,
    [16637] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2159),
    1,
    anon_sym_LBRACE,
    STATE(558),
    1,
    sym_comment,
    [16650] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2161),
    1,
    anon_sym_SEMI,
    STATE(559),
    1,
    sym_comment,
    [16663] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2163),
    1,
    sym_identifier,
    STATE(560),
    1,
    sym_comment,
    [16676] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2165),
    1,
    sym_identifier,
    STATE(561),
    1,
    sym_comment,
    [16689] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2167),
    1,
    anon_sym_SEMI,
    STATE(562),
    1,
    sym_comment,
    [16702] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1794),
    1,
    anon_sym_SEMI,
    STATE(563),
    1,
    sym_comment,
    [16715] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1656),
    1,
    anon_sym_LBRACE,
    STATE(564),
    1,
    sym_comment,
    [16728] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1788),
    1,
    anon_sym_SEMI,
    STATE(565),
    1,
    sym_comment,
    [16741] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1646),
    1,
    anon_sym_LBRACE,
    STATE(566),
    1,
    sym_comment,
    [16754] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2169),
    1,
    anon_sym_SEMI,
    STATE(567),
    1,
    sym_comment,
    [16767] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2171),
    1,
    sym_identifier,
    STATE(568),
    1,
    sym_comment,
    [16780] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2173),
    1,
    anon_sym_SEMI,
    STATE(569),
    1,
    sym_comment,
    [16793] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2175),
    1,
    anon_sym_SEMI,
    STATE(570),
    1,
    sym_comment,
    [16806] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2177),
    1,
    sym_identifier,
    STATE(571),
    1,
    sym_comment,
    [16819] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2179),
    1,
    anon_sym_LPAREN,
    STATE(572),
    1,
    sym_comment,
    [16832] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2181),
    1,
    anon_sym_RPAREN,
    STATE(573),
    1,
    sym_comment,
    [16845] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2183),
    1,
    anon_sym_EQ,
    STATE(574),
    1,
    sym_comment,
    [16858] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2095),
    1,
    anon_sym_LT,
    STATE(575),
    1,
    sym_comment,
    [16871] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2185),
    1,
    anon_sym_SEMI,
    STATE(576),
    1,
    sym_comment,
    [16884] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2187),
    1,
    anon_sym_SEMI,
    STATE(577),
    1,
    sym_comment,
    [16897] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2189),
    1,
    sym_identifier,
    STATE(578),
    1,
    sym_comment,
    [16910] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2191),
    1,
    anon_sym_RPAREN,
    STATE(579),
    1,
    sym_comment,
    [16923] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2059),
    1,
    sym_identifier,
    STATE(580),
    1,
    sym_comment,
    [16936] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2193),
    1,
    anon_sym_SEMI,
    STATE(581),
    1,
    sym_comment,
    [16949] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2195),
    1,
    anon_sym_SEMI,
    STATE(582),
    1,
    sym_comment,
    [16962] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2197),
    1,
    anon_sym_SEMI,
    STATE(583),
    1,
    sym_comment,
    [16975] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2199),
    1,
    anon_sym_LBRACE,
    STATE(584),
    1,
    sym_comment,
    [16988] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2201),
    1,
    anon_sym_RPAREN,
    STATE(585),
    1,
    sym_comment,
    [17001] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2203),
    1,
    anon_sym_SEMI,
    STATE(586),
    1,
    sym_comment,
    [17014] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2205),
    1,
    anon_sym_SEMI,
    STATE(587),
    1,
    sym_comment,
    [17027] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2207),
    1,
    anon_sym_SEMI,
    STATE(588),
    1,
    sym_comment,
    [17040] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2209),
    1,
    anon_sym_SEMI,
    STATE(589),
    1,
    sym_comment,
    [17053] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2211),
    1,
    sym_identifier,
    STATE(590),
    1,
    sym_comment,
    [17066] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2213),
    1,
    anon_sym_SEMI,
    STATE(591),
    1,
    sym_comment,
    [17079] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2215),
    1,
    anon_sym_SEMI,
    STATE(592),
    1,
    sym_comment,
    [17092] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2217),
    1,
    anon_sym_SEMI,
    STATE(593),
    1,
    sym_comment,
    [17105] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2219),
    1,
    sym_identifier,
    STATE(594),
    1,
    sym_comment,
    [17118] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2221),
    1,
    anon_sym_SEMI,
    STATE(595),
    1,
    sym_comment,
    [17131] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2223),
    1,
    anon_sym_SEMI,
    STATE(596),
    1,
    sym_comment,
    [17144] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2225),
    1,
    anon_sym_SEMI,
    STATE(597),
    1,
    sym_comment,
    [17157] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2227),
    1,
    anon_sym_SEMI,
    STATE(598),
    1,
    sym_comment,
    [17170] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2229),
    1,
    anon_sym_LBRACE,
    STATE(599),
    1,
    sym_comment,
    [17183] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2231),
    1,
    aux_sym_string_literal_token1,
    STATE(600),
    1,
    sym_comment,
    [17196] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2233),
    1,
    anon_sym_DQUOTE,
    STATE(601),
    1,
    sym_comment,
    [17209] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2235),
    1,
    anon_sym_LPAREN,
    STATE(602),
    1,
    sym_comment,
    [17222] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2237),
    1,
    anon_sym_SEMI,
    STATE(603),
    1,
    sym_comment,
    [17235] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2239),
    1,
    anon_sym_LBRACE,
    STATE(604),
    1,
    sym_comment,
    [17248] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2241),
    1,
    anon_sym_SEMI,
    STATE(605),
    1,
    sym_comment,
    [17261] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2243),
    1,
    anon_sym_SEMI,
    STATE(606),
    1,
    sym_comment,
    [17274] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1863),
    1,
    anon_sym_LBRACE,
    STATE(607),
    1,
    sym_comment,
    [17287] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2245),
    1,
    sym_identifier,
    STATE(608),
    1,
    sym_comment,
    [17300] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2247),
    1,
    anon_sym_SEMI,
    STATE(609),
    1,
    sym_comment,
    [17313] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2249),
    1,
    sym_identifier,
    STATE(610),
    1,
    sym_comment,
    [17326] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2251),
    1,
    sym_identifier,
    STATE(611),
    1,
    sym_comment,
    [17339] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2253),
    1,
    anon_sym_SEMI,
    STATE(612),
    1,
    sym_comment,
    [17352] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2255),
    1,
    anon_sym_LBRACE,
    STATE(613),
    1,
    sym_comment,
    [17365] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2257),
    1,
    anon_sym_SEMI,
    STATE(614),
    1,
    sym_comment,
    [17378] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1670),
    1,
    anon_sym_LBRACE,
    STATE(615),
    1,
    sym_comment,
    [17391] = 4,
    ACTIONS(1557),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2259),
    1,
    aux_sym_preproc_call_token1,
    STATE(616),
    1,
    sym_comment,
    [17404] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1881),
    1,
    anon_sym_manages,
    STATE(617),
    1,
    sym_comment,
    [17417] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2261),
    1,
    anon_sym_RBRACK,
    STATE(618),
    1,
    sym_comment,
    [17430] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1666),
    1,
    anon_sym_SLASH,
    STATE(619),
    1,
    sym_comment,
    [17443] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2263),
    1,
    anon_sym_LBRACE,
    STATE(620),
    1,
    sym_comment,
    [17456] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2265),
    1,
    anon_sym_LPAREN,
    STATE(621),
    1,
    sym_comment,
    [17469] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1908),
    1,
    anon_sym_SEMI,
    STATE(622),
    1,
    sym_comment,
    [17482] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2267),
    1,
    anon_sym_LBRACE,
    STATE(623),
    1,
    sym_comment,
    [17495] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2269),
    1,
    anon_sym_LBRACE,
    STATE(624),
    1,
    sym_comment,
    [17508] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2271),
    1,
    anon_sym_SEMI,
    STATE(625),
    1,
    sym_comment,
    [17521] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2273),
    1,
    anon_sym_GT,
    STATE(626),
    1,
    sym_comment,
    [17534] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2275),
    1,
    anon_sym_SEMI,
    STATE(627),
    1,
    sym_comment,
    [17547] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2277),
    1,
    anon_sym_SEMI,
    STATE(628),
    1,
    sym_comment,
    [17560] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2279),
    1,
    anon_sym_SEMI,
    STATE(629),
    1,
    sym_comment,
    [17573] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1744),
    1,
    anon_sym_valuetype,
    STATE(630),
    1,
    sym_comment,
    [17586] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2281),
    1,
    sym_identifier,
    STATE(631),
    1,
    sym_comment,
    [17599] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2283),
    1,
    anon_sym_RPAREN,
    STATE(632),
    1,
    sym_comment,
    [17612] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2285),
    1,
    anon_sym_RPAREN,
    STATE(633),
    1,
    sym_comment,
    [17625] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1967),
    1,
    anon_sym_RPAREN,
    STATE(634),
    1,
    sym_comment,
    [17638] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2287),
    1,
    anon_sym_SEMI,
    STATE(635),
    1,
    sym_comment,
    [17651] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2289),
    1,
    sym_identifier,
    STATE(636),
    1,
    sym_comment,
    [17664] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2291),
    1,
    anon_sym_attribute,
    STATE(637),
    1,
    sym_comment,
    [17677] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2293),
    1,
    anon_sym_LBRACE,
    STATE(638),
    1,
    sym_comment,
    [17690] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2295),
    1,
    anon_sym_SEMI,
    STATE(639),
    1,
    sym_comment,
    [17703] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2083),
    1,
    anon_sym_valuetype,
    STATE(640),
    1,
    sym_comment,
    [17716] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2297),
    1,
    anon_sym_void,
    STATE(641),
    1,
    sym_comment,
    [17729] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2299),
    1,
    anon_sym_LBRACE,
    STATE(642),
    1,
    sym_comment,
    [17742] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1943),
    1,
    anon_sym_SEMI,
    STATE(643),
    1,
    sym_comment,
    [17755] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2301),
    1,
    anon_sym_SEMI,
    STATE(644),
    1,
    sym_comment,
    [17768] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2303),
    1,
    sym_identifier,
    STATE(645),
    1,
    sym_comment,
    [17781] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1724),
    1,
    anon_sym_RPAREN,
    STATE(646),
    1,
    sym_comment,
    [17794] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(440),
    1,
    anon_sym_RBRACE,
    STATE(647),
    1,
    sym_comment,
    [17807] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2305),
    1,
    anon_sym_LBRACE,
    STATE(648),
    1,
    sym_comment,
    [17820] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1933),
    1,
    anon_sym_SEMI,
    STATE(649),
    1,
    sym_comment,
    [17833] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2307),
    1,
    sym_identifier,
    STATE(650),
    1,
    sym_comment,
    [17846] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2309),
    1,
    sym_identifier,
    STATE(651),
    1,
    sym_comment,
    [17859] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2311),
    1,
    anon_sym_SEMI,
    STATE(652),
    1,
    sym_comment,
    [17872] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2313),
    1,
    anon_sym_LBRACE,
    STATE(653),
    1,
    sym_comment,
    [17885] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2315),
    1,
    sym_identifier,
    STATE(654),
    1,
    sym_comment,
    [17898] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2317),
    1,
    sym_identifier,
    STATE(655),
    1,
    sym_comment,
    [17911] = 4,
    ACTIONS(1557),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2319),
    1,
    aux_sym_comment_token3,
    STATE(656),
    1,
    sym_comment,
    [17924] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2321),
    1,
    anon_sym_LBRACE,
    STATE(657),
    1,
    sym_comment,
    [17937] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2323),
    1,
    anon_sym_GT,
    STATE(658),
    1,
    sym_comment,
    [17950] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2325),
    1,
    anon_sym_GT,
    STATE(659),
    1,
    sym_comment,
    [17963] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2327),
    1,
    anon_sym_LBRACE,
    STATE(660),
    1,
    sym_comment,
    [17976] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2329),
    1,
    anon_sym_LBRACE,
    STATE(661),
    1,
    sym_comment,
    [17989] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2331),
    1,
    anon_sym_SEMI,
    STATE(662),
    1,
    sym_comment,
    [18002] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2333),
    1,
    anon_sym_SEMI,
    STATE(663),
    1,
    sym_comment,
    [18015] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2335),
    1,
    anon_sym_enum,
    STATE(664),
    1,
    sym_comment,
    [18028] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2337),
    1,
    anon_sym_SEMI,
    STATE(665),
    1,
    sym_comment,
    [18041] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2339),
    1,
    anon_sym_SQUOTE,
    STATE(666),
    1,
    sym_comment,
    [18054] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2341),
    1,
    aux_sym_char_literal_token1,
    STATE(667),
    1,
    sym_comment,
    [18067] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2343),
    1,
    anon_sym_COLON,
    STATE(668),
    1,
    sym_comment,
    [18080] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2345),
    1,
    anon_sym_LBRACE,
    STATE(669),
    1,
    sym_comment,
    [18093] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2347),
    1,
    anon_sym_RPAREN,
    STATE(670),
    1,
    sym_comment,
    [18106] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2349),
    1,
    sym_identifier,
    STATE(671),
    1,
    sym_comment,
    [18119] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2351),
    1,
    anon_sym_SEMI,
    STATE(672),
    1,
    sym_comment,
    [18132] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2353),
    1,
    anon_sym_GT,
    STATE(673),
    1,
    sym_comment,
    [18145] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2355),
    1,
    anon_sym_SEMI,
    STATE(674),
    1,
    sym_comment,
    [18158] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2357),
    1,
    anon_sym_LBRACE,
    STATE(675),
    1,
    sym_comment,
    [18171] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2359),
    1,
    anon_sym_SEMI,
    STATE(676),
    1,
    sym_comment,
    [18184] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2361),
    1,
    anon_sym_RBRACE,
    STATE(677),
    1,
    sym_comment,
    [18197] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2363),
    1,
    anon_sym_SEMI,
    STATE(678),
    1,
    sym_comment,
    [18210] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2365),
    1,
    sym_identifier,
    STATE(679),
    1,
    sym_comment,
    [18223] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2367),
    1,
    anon_sym_RBRACE,
    STATE(680),
    1,
    sym_comment,
    [18236] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2369),
    1,
    anon_sym_SEMI,
    STATE(681),
    1,
    sym_comment,
    [18249] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2371),
    1,
    anon_sym_SEMI,
    STATE(682),
    1,
    sym_comment,
    [18262] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2373),
    1,
    anon_sym_SEMI,
    STATE(683),
    1,
    sym_comment,
    [18275] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2375),
    1,
    anon_sym_SEMI,
    STATE(684),
    1,
    sym_comment,
    [18288] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2377),
    1,
    anon_sym_SEMI,
    STATE(685),
    1,
    sym_comment,
    [18301] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2379),
    1,
    sym_identifier,
    STATE(686),
    1,
    sym_comment,
    [18314] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2381),
    1,
    anon_sym_SEMI,
    STATE(687),
    1,
    sym_comment,
    [18327] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2383),
    1,
    anon_sym_SEMI,
    STATE(688),
    1,
    sym_comment,
    [18340] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2385),
    1,
    anon_sym_SEMI,
    STATE(689),
    1,
    sym_comment,
    [18353] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2387),
    1,
    anon_sym_LBRACE,
    STATE(690),
    1,
    sym_comment,
    [18366] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2389),
    1,
    anon_sym_SEMI,
    STATE(691),
    1,
    sym_comment,
    [18379] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2391),
    1,
    anon_sym_RBRACE,
    STATE(692),
    1,
    sym_comment,
    [18392] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2393),
    1,
    anon_sym_SEMI,
    STATE(693),
    1,
    sym_comment,
    [18405] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2395),
    1,
    anon_sym_SEMI,
    STATE(694),
    1,
    sym_comment,
    [18418] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2397),
    1,
    anon_sym_LBRACE,
    STATE(695),
    1,
    sym_comment,
    [18431] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2399),
    1,
    anon_sym_LBRACE,
    STATE(696),
    1,
    sym_comment,
    [18444] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2401),
    1,
    anon_sym_SEMI,
    STATE(697),
    1,
    sym_comment,
    [18457] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2403),
    1,
    anon_sym_LT,
    STATE(698),
    1,
    sym_comment,
    [18470] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2405),
    1,
    anon_sym_SEMI,
    STATE(699),
    1,
    sym_comment,
    [18483] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2407),
    1,
    anon_sym_SEMI,
    STATE(700),
    1,
    sym_comment,
    [18496] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2409),
    1,
    sym_identifier,
    STATE(701),
    1,
    sym_comment,
    [18509] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2411),
    1,
    anon_sym_COLON,
    STATE(702),
    1,
    sym_comment,
    [18522] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2413),
    1,
    anon_sym_SEMI,
    STATE(703),
    1,
    sym_comment,
    [18535] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2415),
    1,
    anon_sym_SEMI,
    STATE(704),
    1,
    sym_comment,
    [18548] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2417),
    1,
    anon_sym_LPAREN,
    STATE(705),
    1,
    sym_comment,
    [18561] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2419),
    1,
    ts_builtin_sym_end,
    STATE(706),
    1,
    sym_comment,
    [18574] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2421),
    1,
    anon_sym_SEMI,
    STATE(707),
    1,
    sym_comment,
    [18587] = 4,
    ACTIONS(1557),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2423),
    1,
    aux_sym_predefine_token1,
    STATE(708),
    1,
    sym_comment,
    [18600] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2425),
    1,
    sym_identifier,
    STATE(709),
    1,
    sym_comment,
    [18613] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2427),
    1,
    sym_identifier,
    STATE(710),
    1,
    sym_comment,
    [18626] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2051),
    1,
    sym_identifier,
    STATE(711),
    1,
    sym_comment,
    [18639] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2429),
    1,
    sym_identifier,
    STATE(712),
    1,
    sym_comment,
    [18652] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2431),
    1,
    anon_sym_SEMI,
    STATE(713),
    1,
    sym_comment,
    [18665] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2433),
    1,
    anon_sym_LPAREN,
    STATE(714),
    1,
    sym_comment,
    [18678] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2435),
    1,
    anon_sym_SEMI,
    STATE(715),
    1,
    sym_comment,
    [18691] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2437),
    1,
    anon_sym_GT,
    STATE(716),
    1,
    sym_comment,
    [18704] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2439),
    1,
    sym_identifier,
    STATE(717),
    1,
    sym_comment,
    [18717] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2441),
    1,
    anon_sym_SEMI,
    STATE(718),
    1,
    sym_comment,
    [18730] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2443),
    1,
    anon_sym_SEMI,
    STATE(719),
    1,
    sym_comment,
    [18743] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2445),
    1,
    anon_sym_LPAREN,
    STATE(720),
    1,
    sym_comment,
    [18756] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2447),
    1,
    anon_sym_SEMI,
    STATE(721),
    1,
    sym_comment,
    [18769] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2449),
    1,
    anon_sym_LPAREN,
    STATE(722),
    1,
    sym_comment,
    [18782] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2451),
    1,
    sym_identifier,
    STATE(723),
    1,
    sym_comment,
    [18795] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2453),
    1,
    anon_sym_SEMI,
    STATE(724),
    1,
    sym_comment,
    [18808] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2455),
    1,
    sym_identifier,
    STATE(725),
    1,
    sym_comment,
    [18821] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2457),
    1,
    sym_identifier,
    STATE(726),
    1,
    sym_comment,
    [18834] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2459),
    1,
    anon_sym_GT,
    STATE(727),
    1,
    sym_comment,
    [18847] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2461),
    1,
    anon_sym_RBRACE,
    STATE(728),
    1,
    sym_comment,
    [18860] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2463),
    1,
    anon_sym_SEMI,
    STATE(729),
    1,
    sym_comment,
    [18873] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2465),
    1,
    anon_sym_SEMI,
    STATE(730),
    1,
    sym_comment,
    [18886] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2467),
    1,
    sym_identifier,
    STATE(731),
    1,
    sym_comment,
    [18899] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2469),
    1,
    sym_identifier,
    STATE(732),
    1,
    sym_comment,
    [18912] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2471),
    1,
    sym_identifier,
    STATE(733),
    1,
    sym_comment,
    [18925] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2473),
    1,
    anon_sym_manages,
    STATE(734),
    1,
    sym_comment,
    [18938] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2087),
    1,
    sym_identifier,
    STATE(735),
    1,
    sym_comment,
    [18951] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2475),
    1,
    anon_sym_enum,
    STATE(736),
    1,
    sym_comment,
    [18964] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2477),
    1,
    anon_sym_LBRACE,
    STATE(737),
    1,
    sym_comment,
    [18977] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2479),
    1,
    anon_sym_SEMI,
    STATE(738),
    1,
    sym_comment,
    [18990] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2481),
    1,
    sym_identifier,
    STATE(739),
    1,
    sym_comment,
    [19003] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2483),
    1,
    sym_identifier,
    STATE(740),
    1,
    sym_comment,
    [19016] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2485),
    1,
    sym_identifier,
    STATE(741),
    1,
    sym_comment,
    [19029] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2487),
    1,
    sym_identifier,
    STATE(742),
    1,
    sym_comment,
    [19042] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2489),
    1,
    sym_identifier,
    STATE(743),
    1,
    sym_comment,
    [19055] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2491),
    1,
    anon_sym_DQUOTE,
    STATE(744),
    1,
    sym_comment,
    [19068] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2493),
    1,
    sym_identifier,
    STATE(745),
    1,
    sym_comment,
    [19081] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2495),
    1,
    anon_sym_GT,
    STATE(746),
    1,
    sym_comment,
    [19094] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2497),
    1,
    sym_identifier,
    STATE(747),
    1,
    sym_comment,
    [19107] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2499),
    1,
    sym_identifier,
    STATE(748),
    1,
    sym_comment,
    [19120] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2501),
    1,
    sym_identifier,
    STATE(749),
    1,
    sym_comment,
    [19133] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2503),
    1,
    sym_identifier,
    STATE(750),
    1,
    sym_comment,
    [19146] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2505),
    1,
    anon_sym_COMMA,
    STATE(751),
    1,
    sym_comment,
    [19159] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2507),
    1,
    anon_sym_COMMA,
    STATE(752),
    1,
    sym_comment,
    [19172] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2509),
    1,
    anon_sym_LBRACE,
    STATE(753),
    1,
    sym_comment,
    [19185] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2511),
    1,
    sym_identifier,
    STATE(754),
    1,
    sym_comment,
    [19198] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2513),
    1,
    sym_identifier,
    STATE(755),
    1,
    sym_comment,
    [19211] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1734),
    1,
    anon_sym_SEMI,
    STATE(756),
    1,
    sym_comment,
    [19224] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2097),
    1,
    sym_identifier,
    STATE(757),
    1,
    sym_comment,
    [19237] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2515),
    1,
    anon_sym_RPAREN,
    STATE(758),
    1,
    sym_comment,
    [19250] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2517),
    1,
    anon_sym_GT,
    STATE(759),
    1,
    sym_comment,
    [19263] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2519),
    1,
    sym_identifier,
    STATE(760),
    1,
    sym_comment,
    [19276] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2521),
    1,
    sym_identifier,
    STATE(761),
    1,
    sym_comment,
    [19289] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1703),
    1,
    anon_sym_SEMI,
    STATE(762),
    1,
    sym_comment,
    [19302] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2523),
    1,
    anon_sym_GT,
    STATE(763),
    1,
    sym_comment,
    [19315] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2525),
    1,
    anon_sym_RPAREN,
    STATE(764),
    1,
    sym_comment,
    [19328] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2527),
    1,
    anon_sym_RPAREN,
    STATE(765),
    1,
    sym_comment,
    [19341] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2529),
    1,
    sym_identifier,
    STATE(766),
    1,
    sym_comment,
    [19354] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2531),
    1,
    anon_sym_RPAREN,
    STATE(767),
    1,
    sym_comment,
    [19367] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2533),
    1,
    aux_sym_char_literal_token1,
    STATE(768),
    1,
    sym_comment,
    [19380] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1742),
    1,
    anon_sym_interface,
    STATE(769),
    1,
    sym_comment,
    [19393] = 1,
    ACTIONS(2535),
    1,
    ts_builtin_sym_end,
    [19397] = 1,
    ACTIONS(2537),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(35)] = 0,
    [SMALL_STATE(36)] = 145,
    [SMALL_STATE(37)] = 290,
    [SMALL_STATE(38)] = 433,
    [SMALL_STATE(39)] = 578,
    [SMALL_STATE(40)] = 723,
    [SMALL_STATE(41)] = 868,
    [SMALL_STATE(42)] = 1013,
    [SMALL_STATE(43)] = 1158,
    [SMALL_STATE(44)] = 1303,
    [SMALL_STATE(45)] = 1448,
    [SMALL_STATE(46)] = 1593,
    [SMALL_STATE(47)] = 1735,
    [SMALL_STATE(48)] = 1879,
    [SMALL_STATE(49)] = 2023,
    [SMALL_STATE(50)] = 2159,
    [SMALL_STATE(51)] = 2289,
    [SMALL_STATE(52)] = 2422,
    [SMALL_STATE(53)] = 2491,
    [SMALL_STATE(54)] = 2560,
    [SMALL_STATE(55)] = 2629,
    [SMALL_STATE(56)] = 2698,
    [SMALL_STATE(57)] = 2767,
    [SMALL_STATE(58)] = 2836,
    [SMALL_STATE(59)] = 2905,
    [SMALL_STATE(60)] = 3032,
    [SMALL_STATE(61)] = 3159,
    [SMALL_STATE(62)] = 3226,
    [SMALL_STATE(63)] = 3293,
    [SMALL_STATE(64)] = 3420,
    [SMALL_STATE(65)] = 3547,
    [SMALL_STATE(66)] = 3674,
    [SMALL_STATE(67)] = 3741,
    [SMALL_STATE(68)] = 3868,
    [SMALL_STATE(69)] = 3995,
    [SMALL_STATE(70)] = 4122,
    [SMALL_STATE(71)] = 4249,
    [SMALL_STATE(72)] = 4376,
    [SMALL_STATE(73)] = 4443,
    [SMALL_STATE(74)] = 4509,
    [SMALL_STATE(75)] = 4575,
    [SMALL_STATE(76)] = 4680,
    [SMALL_STATE(77)] = 4785,
    [SMALL_STATE(78)] = 4840,
    [SMALL_STATE(79)] = 4895,
    [SMALL_STATE(80)] = 4947,
    [SMALL_STATE(81)] = 4994,
    [SMALL_STATE(82)] = 5041,
    [SMALL_STATE(83)] = 5088,
    [SMALL_STATE(84)] = 5137,
    [SMALL_STATE(85)] = 5184,
    [SMALL_STATE(86)] = 5231,
    [SMALL_STATE(87)] = 5278,
    [SMALL_STATE(88)] = 5325,
    [SMALL_STATE(89)] = 5372,
    [SMALL_STATE(90)] = 5419,
    [SMALL_STATE(91)] = 5466,
    [SMALL_STATE(92)] = 5513,
    [SMALL_STATE(93)] = 5560,
    [SMALL_STATE(94)] = 5607,
    [SMALL_STATE(95)] = 5653,
    [SMALL_STATE(96)] = 5699,
    [SMALL_STATE(97)] = 5744,
    [SMALL_STATE(98)] = 5789,
    [SMALL_STATE(99)] = 5838,
    [SMALL_STATE(100)] = 5883,
    [SMALL_STATE(101)] = 5928,
    [SMALL_STATE(102)] = 6011,
    [SMALL_STATE(103)] = 6055,
    [SMALL_STATE(104)] = 6099,
    [SMALL_STATE(105)] = 6143,
    [SMALL_STATE(106)] = 6186,
    [SMALL_STATE(107)] = 6229,
    [SMALL_STATE(108)] = 6272,
    [SMALL_STATE(109)] = 6315,
    [SMALL_STATE(110)] = 6358,
    [SMALL_STATE(111)] = 6401,
    [SMALL_STATE(112)] = 6444,
    [SMALL_STATE(113)] = 6530,
    [SMALL_STATE(114)] = 6616,
    [SMALL_STATE(115)] = 6702,
    [SMALL_STATE(116)] = 6788,
    [SMALL_STATE(117)] = 6871,
    [SMALL_STATE(118)] = 6954,
    [SMALL_STATE(119)] = 7037,
    [SMALL_STATE(120)] = 7120,
    [SMALL_STATE(121)] = 7203,
    [SMALL_STATE(122)] = 7286,
    [SMALL_STATE(123)] = 7369,
    [SMALL_STATE(124)] = 7449,
    [SMALL_STATE(125)] = 7529,
    [SMALL_STATE(126)] = 7609,
    [SMALL_STATE(127)] = 7689,
    [SMALL_STATE(128)] = 7769,
    [SMALL_STATE(129)] = 7849,
    [SMALL_STATE(130)] = 7917,
    [SMALL_STATE(131)] = 7997,
    [SMALL_STATE(132)] = 8071,
    [SMALL_STATE(133)] = 8142,
    [SMALL_STATE(134)] = 8210,
    [SMALL_STATE(135)] = 8270,
    [SMALL_STATE(136)] = 8325,
    [SMALL_STATE(137)] = 8390,
    [SMALL_STATE(138)] = 8447,
    [SMALL_STATE(139)] = 8509,
    [SMALL_STATE(140)] = 8568,
    [SMALL_STATE(141)] = 8601,
    [SMALL_STATE(142)] = 8634,
    [SMALL_STATE(143)] = 8684,
    [SMALL_STATE(144)] = 8714,
    [SMALL_STATE(145)] = 8762,
    [SMALL_STATE(146)] = 8792,
    [SMALL_STATE(147)] = 8842,
    [SMALL_STATE(148)] = 8892,
    [SMALL_STATE(149)] = 8922,
    [SMALL_STATE(150)] = 8952,
    [SMALL_STATE(151)] = 8982,
    [SMALL_STATE(152)] = 9030,
    [SMALL_STATE(153)] = 9060,
    [SMALL_STATE(154)] = 9090,
    [SMALL_STATE(155)] = 9120,
    [SMALL_STATE(156)] = 9150,
    [SMALL_STATE(157)] = 9184,
    [SMALL_STATE(158)] = 9214,
    [SMALL_STATE(159)] = 9244,
    [SMALL_STATE(160)] = 9274,
    [SMALL_STATE(161)] = 9308,
    [SMALL_STATE(162)] = 9355,
    [SMALL_STATE(163)] = 9401,
    [SMALL_STATE(164)] = 9430,
    [SMALL_STATE(165)] = 9459,
    [SMALL_STATE(166)] = 9492,
    [SMALL_STATE(167)] = 9521,
    [SMALL_STATE(168)] = 9548,
    [SMALL_STATE(169)] = 9575,
    [SMALL_STATE(170)] = 9613,
    [SMALL_STATE(171)] = 9635,
    [SMALL_STATE(172)] = 9669,
    [SMALL_STATE(173)] = 9691,
    [SMALL_STATE(174)] = 9714,
    [SMALL_STATE(175)] = 9737,
    [SMALL_STATE(176)] = 9760,
    [SMALL_STATE(177)] = 9784,
    [SMALL_STATE(178)] = 9818,
    [SMALL_STATE(179)] = 9840,
    [SMALL_STATE(180)] = 9862,
    [SMALL_STATE(181)] = 9886,
    [SMALL_STATE(182)] = 9905,
    [SMALL_STATE(183)] = 9924,
    [SMALL_STATE(184)] = 9943,
    [SMALL_STATE(185)] = 9962,
    [SMALL_STATE(186)] = 9981,
    [SMALL_STATE(187)] = 10000,
    [SMALL_STATE(188)] = 10019,
    [SMALL_STATE(189)] = 10048,
    [SMALL_STATE(190)] = 10067,
    [SMALL_STATE(191)] = 10088,
    [SMALL_STATE(192)] = 10119,
    [SMALL_STATE(193)] = 10141,
    [SMALL_STATE(194)] = 10159,
    [SMALL_STATE(195)] = 10183,
    [SMALL_STATE(196)] = 10211,
    [SMALL_STATE(197)] = 10239,
    [SMALL_STATE(198)] = 10257,
    [SMALL_STATE(199)] = 10275,
    [SMALL_STATE(200)] = 10293,
    [SMALL_STATE(201)] = 10319,
    [SMALL_STATE(202)] = 10347,
    [SMALL_STATE(203)] = 10375,
    [SMALL_STATE(204)] = 10403,
    [SMALL_STATE(205)] = 10421,
    [SMALL_STATE(206)] = 10445,
    [SMALL_STATE(207)] = 10473,
    [SMALL_STATE(208)] = 10501,
    [SMALL_STATE(209)] = 10529,
    [SMALL_STATE(210)] = 10554,
    [SMALL_STATE(211)] = 10577,
    [SMALL_STATE(212)] = 10602,
    [SMALL_STATE(213)] = 10627,
    [SMALL_STATE(214)] = 10650,
    [SMALL_STATE(215)] = 10675,
    [SMALL_STATE(216)] = 10694,
    [SMALL_STATE(217)] = 10713,
    [SMALL_STATE(218)] = 10736,
    [SMALL_STATE(219)] = 10761,
    [SMALL_STATE(220)] = 10786,
    [SMALL_STATE(221)] = 10811,
    [SMALL_STATE(222)] = 10836,
    [SMALL_STATE(223)] = 10861,
    [SMALL_STATE(224)] = 10886,
    [SMALL_STATE(225)] = 10911,
    [SMALL_STATE(226)] = 10936,
    [SMALL_STATE(227)] = 10959,
    [SMALL_STATE(228)] = 10984,
    [SMALL_STATE(229)] = 11007,
    [SMALL_STATE(230)] = 11032,
    [SMALL_STATE(231)] = 11057,
    [SMALL_STATE(232)] = 11080,
    [SMALL_STATE(233)] = 11105,
    [SMALL_STATE(234)] = 11130,
    [SMALL_STATE(235)] = 11153,
    [SMALL_STATE(236)] = 11178,
    [SMALL_STATE(237)] = 11194,
    [SMALL_STATE(238)] = 11210,
    [SMALL_STATE(239)] = 11226,
    [SMALL_STATE(240)] = 11242,
    [SMALL_STATE(241)] = 11264,
    [SMALL_STATE(242)] = 11284,
    [SMALL_STATE(243)] = 11300,
    [SMALL_STATE(244)] = 11320,
    [SMALL_STATE(245)] = 11342,
    [SMALL_STATE(246)] = 11364,
    [SMALL_STATE(247)] = 11386,
    [SMALL_STATE(248)] = 11406,
    [SMALL_STATE(249)] = 11428,
    [SMALL_STATE(250)] = 11450,
    [SMALL_STATE(251)] = 11470,
    [SMALL_STATE(252)] = 11492,
    [SMALL_STATE(253)] = 11512,
    [SMALL_STATE(254)] = 11534,
    [SMALL_STATE(255)] = 11550,
    [SMALL_STATE(256)] = 11572,
    [SMALL_STATE(257)] = 11590,
    [SMALL_STATE(258)] = 11610,
    [SMALL_STATE(259)] = 11626,
    [SMALL_STATE(260)] = 11642,
    [SMALL_STATE(261)] = 11658,
    [SMALL_STATE(262)] = 11674,
    [SMALL_STATE(263)] = 11694,
    [SMALL_STATE(264)] = 11710,
    [SMALL_STATE(265)] = 11732,
    [SMALL_STATE(266)] = 11750,
    [SMALL_STATE(267)] = 11772,
    [SMALL_STATE(268)] = 11794,
    [SMALL_STATE(269)] = 11810,
    [SMALL_STATE(270)] = 11826,
    [SMALL_STATE(271)] = 11846,
    [SMALL_STATE(272)] = 11868,
    [SMALL_STATE(273)] = 11890,
    [SMALL_STATE(274)] = 11910,
    [SMALL_STATE(275)] = 11932,
    [SMALL_STATE(276)] = 11954,
    [SMALL_STATE(277)] = 11976,
    [SMALL_STATE(278)] = 11998,
    [SMALL_STATE(279)] = 12018,
    [SMALL_STATE(280)] = 12038,
    [SMALL_STATE(281)] = 12060,
    [SMALL_STATE(282)] = 12078,
    [SMALL_STATE(283)] = 12100,
    [SMALL_STATE(284)] = 12118,
    [SMALL_STATE(285)] = 12140,
    [SMALL_STATE(286)] = 12162,
    [SMALL_STATE(287)] = 12180,
    [SMALL_STATE(288)] = 12202,
    [SMALL_STATE(289)] = 12218,
    [SMALL_STATE(290)] = 12238,
    [SMALL_STATE(291)] = 12260,
    [SMALL_STATE(292)] = 12276,
    [SMALL_STATE(293)] = 12296,
    [SMALL_STATE(294)] = 12316,
    [SMALL_STATE(295)] = 12338,
    [SMALL_STATE(296)] = 12360,
    [SMALL_STATE(297)] = 12382,
    [SMALL_STATE(298)] = 12404,
    [SMALL_STATE(299)] = 12426,
    [SMALL_STATE(300)] = 12445,
    [SMALL_STATE(301)] = 12464,
    [SMALL_STATE(302)] = 12479,
    [SMALL_STATE(303)] = 12494,
    [SMALL_STATE(304)] = 12511,
    [SMALL_STATE(305)] = 12528,
    [SMALL_STATE(306)] = 12545,
    [SMALL_STATE(307)] = 12564,
    [SMALL_STATE(308)] = 12581,
    [SMALL_STATE(309)] = 12600,
    [SMALL_STATE(310)] = 12615,
    [SMALL_STATE(311)] = 12630,
    [SMALL_STATE(312)] = 12647,
    [SMALL_STATE(313)] = 12666,
    [SMALL_STATE(314)] = 12685,
    [SMALL_STATE(315)] = 12704,
    [SMALL_STATE(316)] = 12723,
    [SMALL_STATE(317)] = 12738,
    [SMALL_STATE(318)] = 12753,
    [SMALL_STATE(319)] = 12768,
    [SMALL_STATE(320)] = 12787,
    [SMALL_STATE(321)] = 12806,
    [SMALL_STATE(322)] = 12821,
    [SMALL_STATE(323)] = 12840,
    [SMALL_STATE(324)] = 12859,
    [SMALL_STATE(325)] = 12878,
    [SMALL_STATE(326)] = 12897,
    [SMALL_STATE(327)] = 12916,
    [SMALL_STATE(328)] = 12935,
    [SMALL_STATE(329)] = 12954,
    [SMALL_STATE(330)] = 12971,
    [SMALL_STATE(331)] = 12988,
    [SMALL_STATE(332)] = 13005,
    [SMALL_STATE(333)] = 13024,
    [SMALL_STATE(334)] = 13043,
    [SMALL_STATE(335)] = 13060,
    [SMALL_STATE(336)] = 13079,
    [SMALL_STATE(337)] = 13098,
    [SMALL_STATE(338)] = 13115,
    [SMALL_STATE(339)] = 13132,
    [SMALL_STATE(340)] = 13151,
    [SMALL_STATE(341)] = 13170,
    [SMALL_STATE(342)] = 13189,
    [SMALL_STATE(343)] = 13208,
    [SMALL_STATE(344)] = 13227,
    [SMALL_STATE(345)] = 13246,
    [SMALL_STATE(346)] = 13265,
    [SMALL_STATE(347)] = 13284,
    [SMALL_STATE(348)] = 13303,
    [SMALL_STATE(349)] = 13322,
    [SMALL_STATE(350)] = 13341,
    [SMALL_STATE(351)] = 13356,
    [SMALL_STATE(352)] = 13375,
    [SMALL_STATE(353)] = 13390,
    [SMALL_STATE(354)] = 13407,
    [SMALL_STATE(355)] = 13426,
    [SMALL_STATE(356)] = 13445,
    [SMALL_STATE(357)] = 13464,
    [SMALL_STATE(358)] = 13483,
    [SMALL_STATE(359)] = 13502,
    [SMALL_STATE(360)] = 13517,
    [SMALL_STATE(361)] = 13536,
    [SMALL_STATE(362)] = 13551,
    [SMALL_STATE(363)] = 13570,
    [SMALL_STATE(364)] = 13589,
    [SMALL_STATE(365)] = 13608,
    [SMALL_STATE(366)] = 13623,
    [SMALL_STATE(367)] = 13642,
    [SMALL_STATE(368)] = 13661,
    [SMALL_STATE(369)] = 13680,
    [SMALL_STATE(370)] = 13699,
    [SMALL_STATE(371)] = 13718,
    [SMALL_STATE(372)] = 13737,
    [SMALL_STATE(373)] = 13756,
    [SMALL_STATE(374)] = 13775,
    [SMALL_STATE(375)] = 13794,
    [SMALL_STATE(376)] = 13813,
    [SMALL_STATE(377)] = 13832,
    [SMALL_STATE(378)] = 13849,
    [SMALL_STATE(379)] = 13868,
    [SMALL_STATE(380)] = 13887,
    [SMALL_STATE(381)] = 13906,
    [SMALL_STATE(382)] = 13923,
    [SMALL_STATE(383)] = 13938,
    [SMALL_STATE(384)] = 13957,
    [SMALL_STATE(385)] = 13976,
    [SMALL_STATE(386)] = 13995,
    [SMALL_STATE(387)] = 14014,
    [SMALL_STATE(388)] = 14033,
    [SMALL_STATE(389)] = 14052,
    [SMALL_STATE(390)] = 14069,
    [SMALL_STATE(391)] = 14088,
    [SMALL_STATE(392)] = 14105,
    [SMALL_STATE(393)] = 14122,
    [SMALL_STATE(394)] = 14141,
    [SMALL_STATE(395)] = 14160,
    [SMALL_STATE(396)] = 14175,
    [SMALL_STATE(397)] = 14190,
    [SMALL_STATE(398)] = 14209,
    [SMALL_STATE(399)] = 14228,
    [SMALL_STATE(400)] = 14243,
    [SMALL_STATE(401)] = 14262,
    [SMALL_STATE(402)] = 14277,
    [SMALL_STATE(403)] = 14296,
    [SMALL_STATE(404)] = 14315,
    [SMALL_STATE(405)] = 14334,
    [SMALL_STATE(406)] = 14351,
    [SMALL_STATE(407)] = 14370,
    [SMALL_STATE(408)] = 14385,
    [SMALL_STATE(409)] = 14404,
    [SMALL_STATE(410)] = 14423,
    [SMALL_STATE(411)] = 14442,
    [SMALL_STATE(412)] = 14461,
    [SMALL_STATE(413)] = 14480,
    [SMALL_STATE(414)] = 14499,
    [SMALL_STATE(415)] = 14518,
    [SMALL_STATE(416)] = 14537,
    [SMALL_STATE(417)] = 14556,
    [SMALL_STATE(418)] = 14575,
    [SMALL_STATE(419)] = 14594,
    [SMALL_STATE(420)] = 14613,
    [SMALL_STATE(421)] = 14632,
    [SMALL_STATE(422)] = 14651,
    [SMALL_STATE(423)] = 14670,
    [SMALL_STATE(424)] = 14689,
    [SMALL_STATE(425)] = 14708,
    [SMALL_STATE(426)] = 14727,
    [SMALL_STATE(427)] = 14742,
    [SMALL_STATE(428)] = 14756,
    [SMALL_STATE(429)] = 14772,
    [SMALL_STATE(430)] = 14786,
    [SMALL_STATE(431)] = 14802,
    [SMALL_STATE(432)] = 14818,
    [SMALL_STATE(433)] = 14834,
    [SMALL_STATE(434)] = 14848,
    [SMALL_STATE(435)] = 14864,
    [SMALL_STATE(436)] = 14880,
    [SMALL_STATE(437)] = 14894,
    [SMALL_STATE(438)] = 14910,
    [SMALL_STATE(439)] = 14924,
    [SMALL_STATE(440)] = 14938,
    [SMALL_STATE(441)] = 14954,
    [SMALL_STATE(442)] = 14970,
    [SMALL_STATE(443)] = 14984,
    [SMALL_STATE(444)] = 14998,
    [SMALL_STATE(445)] = 15012,
    [SMALL_STATE(446)] = 15028,
    [SMALL_STATE(447)] = 15042,
    [SMALL_STATE(448)] = 15056,
    [SMALL_STATE(449)] = 15070,
    [SMALL_STATE(450)] = 15086,
    [SMALL_STATE(451)] = 15100,
    [SMALL_STATE(452)] = 15114,
    [SMALL_STATE(453)] = 15130,
    [SMALL_STATE(454)] = 15144,
    [SMALL_STATE(455)] = 15158,
    [SMALL_STATE(456)] = 15172,
    [SMALL_STATE(457)] = 15186,
    [SMALL_STATE(458)] = 15200,
    [SMALL_STATE(459)] = 15214,
    [SMALL_STATE(460)] = 15228,
    [SMALL_STATE(461)] = 15242,
    [SMALL_STATE(462)] = 15256,
    [SMALL_STATE(463)] = 15270,
    [SMALL_STATE(464)] = 15286,
    [SMALL_STATE(465)] = 15300,
    [SMALL_STATE(466)] = 15314,
    [SMALL_STATE(467)] = 15328,
    [SMALL_STATE(468)] = 15342,
    [SMALL_STATE(469)] = 15358,
    [SMALL_STATE(470)] = 15372,
    [SMALL_STATE(471)] = 15386,
    [SMALL_STATE(472)] = 15400,
    [SMALL_STATE(473)] = 15414,
    [SMALL_STATE(474)] = 15428,
    [SMALL_STATE(475)] = 15444,
    [SMALL_STATE(476)] = 15458,
    [SMALL_STATE(477)] = 15472,
    [SMALL_STATE(478)] = 15486,
    [SMALL_STATE(479)] = 15502,
    [SMALL_STATE(480)] = 15518,
    [SMALL_STATE(481)] = 15532,
    [SMALL_STATE(482)] = 15546,
    [SMALL_STATE(483)] = 15562,
    [SMALL_STATE(484)] = 15576,
    [SMALL_STATE(485)] = 15592,
    [SMALL_STATE(486)] = 15608,
    [SMALL_STATE(487)] = 15624,
    [SMALL_STATE(488)] = 15638,
    [SMALL_STATE(489)] = 15654,
    [SMALL_STATE(490)] = 15668,
    [SMALL_STATE(491)] = 15682,
    [SMALL_STATE(492)] = 15698,
    [SMALL_STATE(493)] = 15712,
    [SMALL_STATE(494)] = 15728,
    [SMALL_STATE(495)] = 15744,
    [SMALL_STATE(496)] = 15758,
    [SMALL_STATE(497)] = 15772,
    [SMALL_STATE(498)] = 15786,
    [SMALL_STATE(499)] = 15802,
    [SMALL_STATE(500)] = 15816,
    [SMALL_STATE(501)] = 15832,
    [SMALL_STATE(502)] = 15848,
    [SMALL_STATE(503)] = 15864,
    [SMALL_STATE(504)] = 15880,
    [SMALL_STATE(505)] = 15894,
    [SMALL_STATE(506)] = 15908,
    [SMALL_STATE(507)] = 15922,
    [SMALL_STATE(508)] = 15936,
    [SMALL_STATE(509)] = 15950,
    [SMALL_STATE(510)] = 15966,
    [SMALL_STATE(511)] = 15980,
    [SMALL_STATE(512)] = 15994,
    [SMALL_STATE(513)] = 16010,
    [SMALL_STATE(514)] = 16024,
    [SMALL_STATE(515)] = 16040,
    [SMALL_STATE(516)] = 16054,
    [SMALL_STATE(517)] = 16068,
    [SMALL_STATE(518)] = 16082,
    [SMALL_STATE(519)] = 16096,
    [SMALL_STATE(520)] = 16112,
    [SMALL_STATE(521)] = 16126,
    [SMALL_STATE(522)] = 16142,
    [SMALL_STATE(523)] = 16158,
    [SMALL_STATE(524)] = 16172,
    [SMALL_STATE(525)] = 16186,
    [SMALL_STATE(526)] = 16200,
    [SMALL_STATE(527)] = 16214,
    [SMALL_STATE(528)] = 16228,
    [SMALL_STATE(529)] = 16242,
    [SMALL_STATE(530)] = 16258,
    [SMALL_STATE(531)] = 16272,
    [SMALL_STATE(532)] = 16288,
    [SMALL_STATE(533)] = 16304,
    [SMALL_STATE(534)] = 16318,
    [SMALL_STATE(535)] = 16332,
    [SMALL_STATE(536)] = 16348,
    [SMALL_STATE(537)] = 16364,
    [SMALL_STATE(538)] = 16377,
    [SMALL_STATE(539)] = 16390,
    [SMALL_STATE(540)] = 16403,
    [SMALL_STATE(541)] = 16416,
    [SMALL_STATE(542)] = 16429,
    [SMALL_STATE(543)] = 16442,
    [SMALL_STATE(544)] = 16455,
    [SMALL_STATE(545)] = 16468,
    [SMALL_STATE(546)] = 16481,
    [SMALL_STATE(547)] = 16494,
    [SMALL_STATE(548)] = 16507,
    [SMALL_STATE(549)] = 16520,
    [SMALL_STATE(550)] = 16533,
    [SMALL_STATE(551)] = 16546,
    [SMALL_STATE(552)] = 16559,
    [SMALL_STATE(553)] = 16572,
    [SMALL_STATE(554)] = 16585,
    [SMALL_STATE(555)] = 16598,
    [SMALL_STATE(556)] = 16611,
    [SMALL_STATE(557)] = 16624,
    [SMALL_STATE(558)] = 16637,
    [SMALL_STATE(559)] = 16650,
    [SMALL_STATE(560)] = 16663,
    [SMALL_STATE(561)] = 16676,
    [SMALL_STATE(562)] = 16689,
    [SMALL_STATE(563)] = 16702,
    [SMALL_STATE(564)] = 16715,
    [SMALL_STATE(565)] = 16728,
    [SMALL_STATE(566)] = 16741,
    [SMALL_STATE(567)] = 16754,
    [SMALL_STATE(568)] = 16767,
    [SMALL_STATE(569)] = 16780,
    [SMALL_STATE(570)] = 16793,
    [SMALL_STATE(571)] = 16806,
    [SMALL_STATE(572)] = 16819,
    [SMALL_STATE(573)] = 16832,
    [SMALL_STATE(574)] = 16845,
    [SMALL_STATE(575)] = 16858,
    [SMALL_STATE(576)] = 16871,
    [SMALL_STATE(577)] = 16884,
    [SMALL_STATE(578)] = 16897,
    [SMALL_STATE(579)] = 16910,
    [SMALL_STATE(580)] = 16923,
    [SMALL_STATE(581)] = 16936,
    [SMALL_STATE(582)] = 16949,
    [SMALL_STATE(583)] = 16962,
    [SMALL_STATE(584)] = 16975,
    [SMALL_STATE(585)] = 16988,
    [SMALL_STATE(586)] = 17001,
    [SMALL_STATE(587)] = 17014,
    [SMALL_STATE(588)] = 17027,
    [SMALL_STATE(589)] = 17040,
    [SMALL_STATE(590)] = 17053,
    [SMALL_STATE(591)] = 17066,
    [SMALL_STATE(592)] = 17079,
    [SMALL_STATE(593)] = 17092,
    [SMALL_STATE(594)] = 17105,
    [SMALL_STATE(595)] = 17118,
    [SMALL_STATE(596)] = 17131,
    [SMALL_STATE(597)] = 17144,
    [SMALL_STATE(598)] = 17157,
    [SMALL_STATE(599)] = 17170,
    [SMALL_STATE(600)] = 17183,
    [SMALL_STATE(601)] = 17196,
    [SMALL_STATE(602)] = 17209,
    [SMALL_STATE(603)] = 17222,
    [SMALL_STATE(604)] = 17235,
    [SMALL_STATE(605)] = 17248,
    [SMALL_STATE(606)] = 17261,
    [SMALL_STATE(607)] = 17274,
    [SMALL_STATE(608)] = 17287,
    [SMALL_STATE(609)] = 17300,
    [SMALL_STATE(610)] = 17313,
    [SMALL_STATE(611)] = 17326,
    [SMALL_STATE(612)] = 17339,
    [SMALL_STATE(613)] = 17352,
    [SMALL_STATE(614)] = 17365,
    [SMALL_STATE(615)] = 17378,
    [SMALL_STATE(616)] = 17391,
    [SMALL_STATE(617)] = 17404,
    [SMALL_STATE(618)] = 17417,
    [SMALL_STATE(619)] = 17430,
    [SMALL_STATE(620)] = 17443,
    [SMALL_STATE(621)] = 17456,
    [SMALL_STATE(622)] = 17469,
    [SMALL_STATE(623)] = 17482,
    [SMALL_STATE(624)] = 17495,
    [SMALL_STATE(625)] = 17508,
    [SMALL_STATE(626)] = 17521,
    [SMALL_STATE(627)] = 17534,
    [SMALL_STATE(628)] = 17547,
    [SMALL_STATE(629)] = 17560,
    [SMALL_STATE(630)] = 17573,
    [SMALL_STATE(631)] = 17586,
    [SMALL_STATE(632)] = 17599,
    [SMALL_STATE(633)] = 17612,
    [SMALL_STATE(634)] = 17625,
    [SMALL_STATE(635)] = 17638,
    [SMALL_STATE(636)] = 17651,
    [SMALL_STATE(637)] = 17664,
    [SMALL_STATE(638)] = 17677,
    [SMALL_STATE(639)] = 17690,
    [SMALL_STATE(640)] = 17703,
    [SMALL_STATE(641)] = 17716,
    [SMALL_STATE(642)] = 17729,
    [SMALL_STATE(643)] = 17742,
    [SMALL_STATE(644)] = 17755,
    [SMALL_STATE(645)] = 17768,
    [SMALL_STATE(646)] = 17781,
    [SMALL_STATE(647)] = 17794,
    [SMALL_STATE(648)] = 17807,
    [SMALL_STATE(649)] = 17820,
    [SMALL_STATE(650)] = 17833,
    [SMALL_STATE(651)] = 17846,
    [SMALL_STATE(652)] = 17859,
    [SMALL_STATE(653)] = 17872,
    [SMALL_STATE(654)] = 17885,
    [SMALL_STATE(655)] = 17898,
    [SMALL_STATE(656)] = 17911,
    [SMALL_STATE(657)] = 17924,
    [SMALL_STATE(658)] = 17937,
    [SMALL_STATE(659)] = 17950,
    [SMALL_STATE(660)] = 17963,
    [SMALL_STATE(661)] = 17976,
    [SMALL_STATE(662)] = 17989,
    [SMALL_STATE(663)] = 18002,
    [SMALL_STATE(664)] = 18015,
    [SMALL_STATE(665)] = 18028,
    [SMALL_STATE(666)] = 18041,
    [SMALL_STATE(667)] = 18054,
    [SMALL_STATE(668)] = 18067,
    [SMALL_STATE(669)] = 18080,
    [SMALL_STATE(670)] = 18093,
    [SMALL_STATE(671)] = 18106,
    [SMALL_STATE(672)] = 18119,
    [SMALL_STATE(673)] = 18132,
    [SMALL_STATE(674)] = 18145,
    [SMALL_STATE(675)] = 18158,
    [SMALL_STATE(676)] = 18171,
    [SMALL_STATE(677)] = 18184,
    [SMALL_STATE(678)] = 18197,
    [SMALL_STATE(679)] = 18210,
    [SMALL_STATE(680)] = 18223,
    [SMALL_STATE(681)] = 18236,
    [SMALL_STATE(682)] = 18249,
    [SMALL_STATE(683)] = 18262,
    [SMALL_STATE(684)] = 18275,
    [SMALL_STATE(685)] = 18288,
    [SMALL_STATE(686)] = 18301,
    [SMALL_STATE(687)] = 18314,
    [SMALL_STATE(688)] = 18327,
    [SMALL_STATE(689)] = 18340,
    [SMALL_STATE(690)] = 18353,
    [SMALL_STATE(691)] = 18366,
    [SMALL_STATE(692)] = 18379,
    [SMALL_STATE(693)] = 18392,
    [SMALL_STATE(694)] = 18405,
    [SMALL_STATE(695)] = 18418,
    [SMALL_STATE(696)] = 18431,
    [SMALL_STATE(697)] = 18444,
    [SMALL_STATE(698)] = 18457,
    [SMALL_STATE(699)] = 18470,
    [SMALL_STATE(700)] = 18483,
    [SMALL_STATE(701)] = 18496,
    [SMALL_STATE(702)] = 18509,
    [SMALL_STATE(703)] = 18522,
    [SMALL_STATE(704)] = 18535,
    [SMALL_STATE(705)] = 18548,
    [SMALL_STATE(706)] = 18561,
    [SMALL_STATE(707)] = 18574,
    [SMALL_STATE(708)] = 18587,
    [SMALL_STATE(709)] = 18600,
    [SMALL_STATE(710)] = 18613,
    [SMALL_STATE(711)] = 18626,
    [SMALL_STATE(712)] = 18639,
    [SMALL_STATE(713)] = 18652,
    [SMALL_STATE(714)] = 18665,
    [SMALL_STATE(715)] = 18678,
    [SMALL_STATE(716)] = 18691,
    [SMALL_STATE(717)] = 18704,
    [SMALL_STATE(718)] = 18717,
    [SMALL_STATE(719)] = 18730,
    [SMALL_STATE(720)] = 18743,
    [SMALL_STATE(721)] = 18756,
    [SMALL_STATE(722)] = 18769,
    [SMALL_STATE(723)] = 18782,
    [SMALL_STATE(724)] = 18795,
    [SMALL_STATE(725)] = 18808,
    [SMALL_STATE(726)] = 18821,
    [SMALL_STATE(727)] = 18834,
    [SMALL_STATE(728)] = 18847,
    [SMALL_STATE(729)] = 18860,
    [SMALL_STATE(730)] = 18873,
    [SMALL_STATE(731)] = 18886,
    [SMALL_STATE(732)] = 18899,
    [SMALL_STATE(733)] = 18912,
    [SMALL_STATE(734)] = 18925,
    [SMALL_STATE(735)] = 18938,
    [SMALL_STATE(736)] = 18951,
    [SMALL_STATE(737)] = 18964,
    [SMALL_STATE(738)] = 18977,
    [SMALL_STATE(739)] = 18990,
    [SMALL_STATE(740)] = 19003,
    [SMALL_STATE(741)] = 19016,
    [SMALL_STATE(742)] = 19029,
    [SMALL_STATE(743)] = 19042,
    [SMALL_STATE(744)] = 19055,
    [SMALL_STATE(745)] = 19068,
    [SMALL_STATE(746)] = 19081,
    [SMALL_STATE(747)] = 19094,
    [SMALL_STATE(748)] = 19107,
    [SMALL_STATE(749)] = 19120,
    [SMALL_STATE(750)] = 19133,
    [SMALL_STATE(751)] = 19146,
    [SMALL_STATE(752)] = 19159,
    [SMALL_STATE(753)] = 19172,
    [SMALL_STATE(754)] = 19185,
    [SMALL_STATE(755)] = 19198,
    [SMALL_STATE(756)] = 19211,
    [SMALL_STATE(757)] = 19224,
    [SMALL_STATE(758)] = 19237,
    [SMALL_STATE(759)] = 19250,
    [SMALL_STATE(760)] = 19263,
    [SMALL_STATE(761)] = 19276,
    [SMALL_STATE(762)] = 19289,
    [SMALL_STATE(763)] = 19302,
    [SMALL_STATE(764)] = 19315,
    [SMALL_STATE(765)] = 19328,
    [SMALL_STATE(766)] = 19341,
    [SMALL_STATE(767)] = 19354,
    [SMALL_STATE(768)] = 19367,
    [SMALL_STATE(769)] = 19380,
    [SMALL_STATE(770)] = 19393,
    [SMALL_STATE(771)] = 19397,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(274),
    [5] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(656),
    [7] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0, 0, 0),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(437),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(631),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(769),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(322),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(750),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(749),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(748),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(747),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(325),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(327),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(743),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(742),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(741),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(740),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(739),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(512),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [45] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(736),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(333),
    [49] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(335),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(191),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(733),
    [55] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(732),
    [57] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(731),
    [59] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(717),
    [61] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(493),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(708),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(269),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(237),
    [69] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(263),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(263),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(258),
    [75] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(309),
    [77] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(556),
    [79] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(236),
    [81] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [83] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(238),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(239),
    [87] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(242),
    [89] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(242),
    [91] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(352),
    [93] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(352),
    [95] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(254),
    [97] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(754),
    [99] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(265),
    [101] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(321),
    [103] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(575),
    [105] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(554),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(631),
    [109] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(713),
    [111] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(630),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(636),
    [115] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(637),
    [117] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [119] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(749),
    [121] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(748),
    [123] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(325),
    [125] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(743),
    [127] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(741),
    [129] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(740),
    [131] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(739),
    [133] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(75),
    [135] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(640),
    [137] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(68),
    [139] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(655),
    [141] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(34),
    [143] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(333),
    [145] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(191),
    [147] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(301),
    [149] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(641),
    [151] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(493),
    [153] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(198),
    [155] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(699),
    [157] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(683),
    [159] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(537),
    [161] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(269),
    [164] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(237),
    [167] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [170] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [173] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(258),
    [176] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(309),
    [179] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(556),
    [182] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(236),
    [185] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(238),
    [188] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(238),
    [191] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(239),
    [194] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [197] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [200] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(352),
    [203] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(352),
    [206] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(254),
    [209] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(754),
    [212] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(265),
    [215] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(321),
    [218] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(575),
    [221] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(554),
    [224] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(631),
    [227] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    [229] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(630),
    [232] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(636),
    [235] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(637),
    [238] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(60),
    [241] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(749),
    [244] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(748),
    [247] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(325),
    [250] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(743),
    [253] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(741),
    [256] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(740),
    [259] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(739),
    [262] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(75),
    [265] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(640),
    [268] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(68),
    [271] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(655),
    [274] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(34),
    [277] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(736),
    [280] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(333),
    [283] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(191),
    [286] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(301),
    [289] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(641),
    [292] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(493),
    [295] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(198),
    [298] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(678),
    [300] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(679),
    [302] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(269),
    [305] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(237),
    [308] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [311] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [314] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(258),
    [317] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(309),
    [320] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(556),
    [323] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(236),
    [326] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(238),
    [329] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(238),
    [332] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(239),
    [335] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [338] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [341] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(352),
    [344] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(352),
    [347] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(254),
    [350] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(754),
    [353] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(265),
    [356] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(321),
    [359] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(575),
    [362] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(554),
    [365] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(631),
    [368] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    [370] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(630),
    [373] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(636),
    [376] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(637),
    [379] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(60),
    [382] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(749),
    [385] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(748),
    [388] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(325),
    [391] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(743),
    [394] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(741),
    [397] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(740),
    [400] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(739),
    [403] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(75),
    [406] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(640),
    [409] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(679),
    [412] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(34),
    [415] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(736),
    [418] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(333),
    [421] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(191),
    [424] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(301),
    [427] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(641),
    [430] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(493),
    [433] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(198),
    [436] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_body, 1, 0, 0),
    [438] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(629),
    [440] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(724),
    [442] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(567),
    [444] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1, 0, 0),
    [446] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(597),
    [448] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(269),
    [451] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(237),
    [454] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [457] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [460] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(258),
    [463] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(309),
    [466] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(556),
    [469] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(236),
    [472] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(238),
    [475] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(238),
    [478] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(239),
    [481] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [484] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [487] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(352),
    [490] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(352),
    [493] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(254),
    [496] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(754),
    [499] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(265),
    [502] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(321),
    [505] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(575),
    [508] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(554),
    [511] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(631),
    [514] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    [516] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(630),
    [519] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(636),
    [522] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(637),
    [525] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(60),
    [528] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(749),
    [531] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(748),
    [534] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(325),
    [537] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(743),
    [540] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(741),
    [543] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(740),
    [546] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(739),
    [549] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(75),
    [552] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(640),
    [555] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(34),
    [558] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(736),
    [561] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(333),
    [564] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(191),
    [567] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(301),
    [570] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(641),
    [573] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(493),
    [576] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(198),
    [579] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(562),
    [581] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(596),
    [583] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(688),
    [585] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(684),
    [587] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(663),
    [589] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(376),
    [591] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(708),
    [593] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1, 0, 0),
    [595] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(631),
    [598] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    [600] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(769),
    [603] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(322),
    [606] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(750),
    [609] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(749),
    [612] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(748),
    [615] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(747),
    [618] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(325),
    [621] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(327),
    [624] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(743),
    [627] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(742),
    [630] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(741),
    [633] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(740),
    [636] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(739),
    [639] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(75),
    [642] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(376),
    [645] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(512),
    [648] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(34),
    [651] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(736),
    [654] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(333),
    [657] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(335),
    [660] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(191),
    [663] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(733),
    [666] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(732),
    [669] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(731),
    [672] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(717),
    [675] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(493),
    [678] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(708),
    [681] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(606),
    [683] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    [685] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(631),
    [688] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(769),
    [691] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(322),
    [694] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(750),
    [697] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(749),
    [700] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(748),
    [703] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(747),
    [706] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(325),
    [709] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(327),
    [712] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(743),
    [715] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(742),
    [718] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(741),
    [721] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(740),
    [724] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(739),
    [727] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(75),
    [730] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(512),
    [733] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(34),
    [736] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(736),
    [739] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(333),
    [742] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(335),
    [745] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(191),
    [748] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(733),
    [751] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(732),
    [754] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(731),
    [757] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(717),
    [760] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(493),
    [763] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(708),
    [766] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(738),
    [768] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2, 0, 0),
    [770] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(644),
    [772] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(594),
    [774] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(175),
    [776] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [778] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(175),
    [780] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(536),
    [782] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(549),
    [784] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(768),
    [786] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(154),
    [788] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(158),
    [790] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(97),
    [792] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 1, 0, 0),
    [794] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case, 1, 0, 0),
    [796] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(516),
    [798] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(315),
    [800] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(438),
    [802] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(269),
    [805] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(237),
    [808] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [811] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [814] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(258),
    [817] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(309),
    [820] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(556),
    [823] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(236),
    [826] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(238),
    [829] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(238),
    [832] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(239),
    [835] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [838] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [841] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(352),
    [844] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(352),
    [847] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(254),
    [850] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(754),
    [853] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(265),
    [856] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(321),
    [859] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(575),
    [862] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(554),
    [865] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    [867] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(315),
    [870] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(301),
    [873] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(198),
    [876] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(483),
    [878] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(694),
    [880] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(439),
    [882] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(458),
    [884] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(691),
    [886] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(470),
    [888] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(534),
    [890] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(269),
    [893] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(237),
    [896] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [899] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [902] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(258),
    [905] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(580),
    [908] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(578),
    [911] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(236),
    [914] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(238),
    [917] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(238),
    [920] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(239),
    [923] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [926] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [929] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(352),
    [932] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(352),
    [935] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(254),
    [938] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(754),
    [941] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(265),
    [944] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(712),
    [947] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(575),
    [950] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    [952] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(739),
    [955] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(75),
    [958] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(34),
    [961] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(736),
    [964] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(198),
    [967] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(580),
    [969] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(578),
    [971] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(712),
    [973] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(674),
    [975] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(736),
    [977] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(719),
    [979] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(521),
    [981] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(757),
    [983] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(76),
    [985] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(317),
    [987] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(116),
    [989] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 5, 0, 0),
    [991] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 5, 0, 0),
    [993] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_export, 2, 0, 0),
    [995] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2, 0, 0),
    [997] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 7, 0, 0),
    [999] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 7, 0, 0),
    [1001] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_state_member, 4, 0, 0),
    [1003] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_state_member, 4, 0, 0),
    [1005] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 1, 0, 0),
    [1007] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 1, 0, 0),
    [1009] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_value_element, 1, 0, 0),
    [1011] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_element, 1, 0, 0),
    [1013] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 6, 0, 0),
    [1015] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 6, 0, 0),
    [1017] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 1, 0, 0),
    [1019] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 1, 0, 0),
    [1021] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_home_export, 1, 0, 0),
    [1023] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_export, 1, 0, 0),
    [1025] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_home_export, 2, 0, 0),
    [1027] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_export, 2, 0, 0),
    [1029] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 1, 0, 0),
    [1031] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 1, 0, 0),
    [1033] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2, 0, 0),
    [1035] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2, 0, 0),
    [1037] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3, 0, 0),
    [1039] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3, 0, 0),
    [1041] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    [1043] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    [1045] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(315),
    [1048] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 2, 0, 0),
    [1050] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 2, 0, 0),
    [1052] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, 0, 3),
    [1054] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, 0, 3),
    [1056] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1, 0, 0),
    [1058] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1, 0, 0),
    [1060] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 2, 0, 0),
    [1062] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 2, 0, 0),
    [1064] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [1066] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, 0, 3),
    [1068] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, 0, 3),
    [1070] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, 0, 6),
    [1072] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, 0, 6),
    [1074] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1, 0, 0),
    [1076] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1, 0, 0),
    [1078] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3, 0, 0),
    [1080] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3, 0, 0),
    [1082] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5, 0, 0),
    [1084] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5, 0, 0),
    [1086] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [1088] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [1090] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 1, 0, 0),
    [1092] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1, 0, 0),
    [1094] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [1096] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [1098] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [1100] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [1102] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, 0, 6),
    [1104] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, 0, 6),
    [1106] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 1, 0, 0),
    [1108] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1, 0, 0),
    [1110] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 5, 0, 0),
    [1112] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 5, 0, 0),
    [1114] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    [1116] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    SHIFT_REPEAT(437),
    [1119] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    [1121] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1, 0, 0),
    [1123] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1, 0, 0),
    [1125] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(634),
    [1127] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1, 0, 0),
    [1129] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__definition, 1, 0, 0),
    [1131] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2, 0, 0),
    [1133] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__definition, 2, 0, 0),
    [1135] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2, 0, 0),
    [1137] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_predefine, 2, 0, 0),
    [1139] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 1, 0, 0),
    [1141] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 1, 0, 0),
    [1143] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1, 0, 0),
    [1145] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 1, 0, 0),
    [1147] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, 0, 2),
    [1149] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, 0, 2),
    [1151] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1, 0, 0),
    [1153] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1, 0, 0),
    [1155] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, 0, 1),
    [1157] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, 0, 1),
    [1159] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1, 0, 0),
    [1161] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1, 0, 0),
    [1163] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 2, 0, 0),
    [1165] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 2, 0, 0),
    [1167] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(166),
    [1169] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(269),
    [1171] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(237),
    [1173] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [1175] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(658),
    [1177] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [1179] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(239),
    [1181] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(665),
    [1183] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(637),
    [1185] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [1187] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(209),
    [1189] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [1191] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(414),
    [1193] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(413),
    [1195] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(412),
    [1197] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(408),
    [1199] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    [1201] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(637),
    [1204] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(60),
    [1207] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(209),
    [1210] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(203),
    [1213] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(414),
    [1216] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(413),
    [1219] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(412),
    [1222] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(408),
    [1225] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_body, 1, 0, 0),
    [1227] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(561),
    [1229] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2, 0, 0),
    [1231] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2, 0, 0),
    [1233] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1, 0, 0),
    [1235] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1, 0, 0),
    [1237] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_port_body, 1, 0, 0),
    [1239] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, 0, 7),
    [1241] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, 0, 7),
    [1243] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_connector_dcl_repeat1, 2, 0, 0),
    [1245] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_connector_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(637),
    [1248] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_connector_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(60),
    [1251] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_connector_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(209),
    [1254] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_connector_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(203),
    [1257] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_connector_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(408),
    [1260] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [1262] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [1264] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(697),
    [1266] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_port_body, 2, 0, 0),
    [1268] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, 0, 4),
    [1270] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, 0, 4),
    [1272] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_port_body_repeat1, 2, 0, 0),
    [1274] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_port_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(637),
    [1277] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_port_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(60),
    [1280] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_port_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(209),
    [1283] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_port_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(203),
    [1286] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_port_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(408),
    [1289] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1, 0, 0),
    [1291] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1, 0, 0),
    [1293] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4, 0, 0),
    [1295] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4, 0, 0),
    [1297] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [1299] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [1301] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3, 0, 0),
    [1303] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3, 0, 0),
    [1305] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3, 0, 0),
    [1307] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3, 0, 0),
    [1309] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [1311] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(139),
    [1313] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3, 0, 0),
    [1315] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3, 0, 0),
    [1317] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1, 0, 0),
    [1319] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1, 0, 0),
    [1321] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4, 0, 0),
    [1323] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4, 0, 0),
    [1325] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1, 0, 0),
    [1327] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1, 0, 0),
    [1329] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [1331] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3, 0, 0),
    [1333] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3, 0, 0),
    [1335] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [1337] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1, 0, 0),
    [1339] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1, 0, 0),
    [1341] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_simple_type_spec, 1, 0, 0),
    [1343] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1, 0, 0),
    [1345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(127),
    [1347] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1, 0, 0),
    [1349] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1, 0, 0),
    [1351] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(136),
    [1353] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3, 0, 0),
    [1355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3, 0, 0),
    [1357] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(686),
    [1359] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(539),
    [1361] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 1, 0, 0),
    [1363] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(730),
    [1365] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_export, 2, 0, 0),
    [1367] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1, 0, 0),
    [1369] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(133),
    [1371] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3, 0, 0),
    [1373] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [1375] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [1377] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(115),
    [1379] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(502),
    [1381] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1, 0, 0),
    [1383] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(501),
    [1385] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(500),
    [1387] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1, 0, 0),
    [1389] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(132),
    [1391] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3, 0, 0),
    [1393] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(325),
    [1396] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_port_ref, 2, 0, 0),
    [1398] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_connector_export, 2, 0, 0),
    [1400] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_port_export, 2, 0, 0),
    [1402] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_port_body_repeat1, 1, 0, 0),
    [1404] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_port_export, 1, 0, 0),
    [1406] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_connector_dcl_repeat1, 1, 0, 0),
    [1408] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_connector_export, 1, 0, 0),
    [1410] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [1412] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [1414] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [1416] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1, 0, 0),
    [1418] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1, 0, 0),
    [1420] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(131),
    [1422] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(550),
    [1424] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2, 0, 0),
    [1426] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(122),
    [1429] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2, 0, 0),
    [1431] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(122),
    [1433] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(444),
    [1435] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(526),
    [1437] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(525),
    [1439] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(481),
    [1441] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(306),
    [1443] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(487),
    [1445] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    [1447] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(668),
    [1450] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(126),
    [1453] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(448),
    [1455] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_header, 2, 0, 0),
    [1457] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(368),
    [1459] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_forward_dcl, 2, 0, 0),
    [1461] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(373),
    [1463] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(711),
    [1465] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(233),
    [1467] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(528),
    [1469] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(443),
    [1471] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(668),
    [1473] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(126),
    [1475] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(480),
    [1477] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(205),
    [1479] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1, 0, 0),
    [1481] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(621),
    [1483] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(390),
    [1485] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_supported_interface_spec, 2, 0, 0),
    [1487] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_event_header, 2, 0, 0),
    [1489] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(227),
    [1491] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_event_forward_dcl, 2, 0, 0),
    [1493] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(266),
    [1495] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2, 0, 0),
    SHIFT_REPEAT(390),
    [1498] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2, 0, 0),
    [1500] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(375),
    [1502] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(385),
    [1504] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 2, 0, 0),
    [1506] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_forward_dcl, 2, 0, 0),
    [1508] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(506),
    [1510] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(698),
    [1512] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(476),
    [1514] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [1516] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_event_forward_dcl, 3, 0, 0),
    [1518] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2, 0, 0),
    [1520] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(698),
    [1523] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(282),
    [1525] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(469),
    [1527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(453),
    [1529] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1, 0, 0),
    [1531] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_long_int, 1, 0, 0),
    [1533] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_short_int, 1, 0, 0),
    [1535] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_long_int, 1, 0, 0),
    [1537] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(427),
    [1539] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(289),
    [1541] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1, 0, 0),
    [1543] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_longlong_int, 1, 0, 0),
    [1545] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [1547] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(495),
    [1549] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(355),
    [1551] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [1553] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(761),
    [1555] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(113),
    [1557] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(274),
    [1559] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(656),
    [1561] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(442),
    [1563] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [1565] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(251),
    [1567] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 3, 0, 0),
    [1569] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(275),
    [1571] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4, 0, 0),
    [1573] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(320),
    [1576] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1, 0, 0),
    [1578] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2, 0, 0),
    SHIFT_REPEAT(289),
    [1581] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2, 0, 0),
    [1583] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5, 0, 0),
    [1585] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1, 0, 0),
    [1587] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(755),
    [1589] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(112),
    [1591] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_longlong_int, 1, 0, 0),
    [1593] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [1595] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(119),
    [1597] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1, 0, 0),
    [1599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [1601] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [1603] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1, 0, 0),
    [1605] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_short_int, 1, 0, 0),
    [1607] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(526),
    [1610] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2, 0, 0),
    [1612] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2, 0, 0),
    [1614] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(272),
    [1616] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2, 0, 0),
    [1618] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2, 0, 0),
    [1620] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(320),
    [1622] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(770),
    [1624] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(550),
    [1626] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [1628] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(343),
    [1630] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2, 0, 0),
    [1632] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(306),
    [1635] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 4, 0, 0),
    [1637] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(298),
    [1639] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_inheritance_spec_repeat1, 2, 0, 0),
    SHIFT_REPEAT(251),
    [1642] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_inheritance_spec_repeat1, 2, 0, 0),
    [1644] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_name, 1, 0, 0),
    [1646] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 2, 0, 0),
    [1648] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(253),
    [1650] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(569),
    [1652] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(446),
    [1654] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3, 0, 0),
    [1656] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_event_header, 3, 0, 0),
    [1658] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1, 0, 0),
    [1660] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_supported_interface_spec, 3, 0, 0),
    [1662] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_header, 6, 0, 0),
    [1664] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(387),
    [1666] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(771),
    [1668] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_header, 4, 0, 0),
    [1670] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_header, 5, 0, 0),
    [1672] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(435),
    [1674] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 1, 0, 0),
    [1676] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(434),
    [1678] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_param_dcls, 1, 0, 0),
    [1680] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_object_type, 1, 0, 0),
    [1682] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1, 0, 0),
    [1684] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1, 0, 0),
    [1686] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2, 0, 0),
    [1688] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2, 0, 0),
    SHIFT_REPEAT(32),
    [1691] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0),
    [1693] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0),
    SHIFT_REPEAT(59),
    [1696] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(198),
    [1698] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    SHIFT_REPEAT(428),
    [1701] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    [1703] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [1705] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(722),
    [1707] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1, 0, 0),
    [1709] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5, 0, 0),
    [1711] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(230),
    [1714] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2, 0, 0),
    [1716] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(230),
    [1718] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_connector_header, 2, 0, 0),
    [1720] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(393),
    [1722] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(428),
    [1724] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 1, 0, 0),
    [1726] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(766),
    [1728] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [1730] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1, 0, 0),
    [1732] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3, 0, 0),
    [1734] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [1736] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(760),
    [1738] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [1740] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1, 0, 0),
    [1742] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(611),
    [1744] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(610),
    [1746] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(608),
    [1748] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(244),
    [1750] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(222),
    [1752] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(473),
    [1754] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 1, 0, 0),
    [1756] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [1758] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(367),
    [1760] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [1762] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2, 0, 0),
    [1764] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(222),
    [1767] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2, 0, 0),
    [1769] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [1772] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2, 0, 0),
    [1774] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_inheritance_spec, 2, 0, 0),
    [1776] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_inheritance_spec, 2, 0, 0),
    [1778] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2, 0, 0),
    [1780] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2, 0, 0),
    SHIFT_REPEAT(454),
    [1783] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2, 0, 0),
    [1785] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2, 0, 0),
    SHIFT_REPEAT(723),
    [1788] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1, 0, 0),
    [1790] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [1792] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(125),
    [1794] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2, 0, 0),
    [1796] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2, 0, 0),
    [1798] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(189),
    [1800] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 2, 0, 0),
    [1802] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(723),
    [1804] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 1, 0, 0),
    [1806] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [1808] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(415),
    [1810] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(635),
    [1812] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(497),
    [1814] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(231),
    [1816] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1, 0, 0),
    [1818] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3, 0, 0),
    [1820] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 1, 0, 0),
    [1822] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1, 0, 0),
    [1824] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_in_parameter_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(452),
    [1827] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_in_parameter_dcls_repeat1, 2, 0, 0),
    [1829] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1, 0, 0),
    [1831] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [1833] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(496),
    [1835] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(433),
    [1837] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_dcl, 4, 0, 0),
    [1839] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8, 0, 0),
    [1841] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2, 0, 0),
    [1843] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2, 0, 0),
    [1845] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(572),
    [1847] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2, 0, 0),
    [1849] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(523),
    [1851] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [1853] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [1855] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 7, 0, 0),
    [1857] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(455),
    [1859] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(454),
    [1861] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3, 0, 0),
    [1863] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_header, 3, 0, 0),
    [1865] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_factory_param_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(434),
    [1868] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_factory_param_dcls_repeat1, 2, 0, 0),
    [1870] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 5, 0, 0),
    [1872] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(435),
    [1875] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2, 0, 0),
    [1877] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1, 0, 0),
    [1879] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [1881] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(336),
    [1883] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(231),
    [1886] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2, 0, 0),
    [1888] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2, 0, 0),
    SHIFT_REPEAT(293),
    [1891] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2, 0, 0),
    [1893] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_context_expr_repeat1, 2, 0, 0),
    SHIFT_REPEAT(415),
    [1896] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_context_expr_repeat1, 2, 0, 0),
    [1898] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(452),
    [1900] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_parameter_dcls, 2, 0, 0),
    [1902] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6, 0, 0),
    [1904] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6, 0, 0),
    [1906] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(504),
    [1908] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2, 0, 0),
    [1910] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4, 0, 0),
    [1912] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4, 0, 0),
    [1914] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(510),
    [1916] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(502),
    [1919] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2, 0, 0),
    [1921] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1, 0, 0),
    [1923] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_parameter_dcls, 1, 0, 0),
    [1925] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 6, 0, 0),
    [1927] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(681),
    [1929] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(467),
    [1931] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_param_dcls, 2, 0, 0),
    [1933] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_dcl, 5, 0, 0),
    [1935] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [1937] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 2, 0, 0),
    [1939] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 2, 0, 0),
    [1941] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 2, 0, 0),
    [1943] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [1945] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 2, 0, 0),
    [1947] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1, 0, 0),
    [1949] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3, 0, 0),
    [1951] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(547),
    [1953] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter, 2, 0, 0),
    [1955] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7, 0, 0),
    [1957] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(109),
    [1959] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(616),
    [1961] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5, 0, 0),
    [1963] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, 0, 8),
    [1965] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(474),
    [1967] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1, 0, 0),
    [1969] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_oneway_dcl, 5, 0, 0),
    [1971] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8, 0, 0),
    [1973] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5, 0, 0),
    [1975] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [1977] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(128),
    [1979] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2, 0, 0),
    [1981] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2, 0, 0),
    [1983] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5, 0, 0),
    [1985] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_oneway_dcl, 6, 0, 0),
    [1987] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5, 0, 0),
    [1989] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1, 0, 0),
    [1991] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2, 0, 0),
    [1993] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, 0, 5),
    [1995] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6, 0, 0),
    [1997] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3, 0, 0),
    [1999] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcl, 3, 0, 0),
    [2001] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [2003] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(380),
    [2005] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_param_dcl, 3, 0, 0),
    [2007] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 8, 0, 0),
    [2009] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(232),
    [2011] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(332),
    [2013] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4, 0, 0),
    [2015] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, 0, 8),
    [2017] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6, 0, 0),
    [2019] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1, 0, 0),
    [2021] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 7, 0, 0),
    [2023] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [2025] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 3, 0, 0),
    [2027] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7, 0, 0),
    [2029] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4, 0, 0),
    [2031] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(223),
    [2033] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [2035] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9, 0, 0),
    [2037] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4, 0, 0),
    [2039] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(583),
    [2041] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, 0, 0),
    [2043] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(586),
    [2045] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(587),
    [2047] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(588),
    [2049] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1, 0, 0),
    [2051] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_type, 1, 0, 0),
    [2053] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1, 0, 0),
    [2055] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_param_dcl, 3, 0, 0),
    [2057] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [2059] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1, 0, 0),
    [2061] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4, 0, 0),
    [2063] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4, 0, 0),
    [2065] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5, 0, 0),
    [2067] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_connector_inherit_spec, 2, 0, 0),
    [2069] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameter, 1, 0, 0),
    [2071] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(400),
    [2073] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(477),
    [2075] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(129),
    [2077] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3, 0, 0),
    [2079] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6, 0, 0),
    [2081] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6, 0, 0),
    [2083] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(568),
    [2085] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(560),
    [2087] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1, 0, 0),
    [2089] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, 0, 5),
    [2091] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_param, 3, 0, 0),
    [2093] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_primary_key_spec, 2, 0, 0),
    [2095] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [2097] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 1, 0, 0),
    [2099] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [2101] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_porttype_forward_dcl, 2, 0, 0),
    [2103] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6, 0, 0),
    [2105] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1, 0, 0),
    [2107] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1, 0, 0),
    [2109] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1, 0, 0),
    [2111] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4, 0, 0),
    [2113] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_imported_scope, 1, 0, 0),
    [2115] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [2117] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(396),
    [2119] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(118),
    [2121] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4, 0, 0),
    [2123] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(600),
    [2125] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(667),
    [2127] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 3, 0, 0),
    [2129] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [2131] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(463),
    [2133] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(143),
    [2135] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_event_dcl, 1, 0, 0),
    [2137] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(661),
    [2139] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2, 0, 0),
    [2141] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_dcl, 2, 0, 0),
    [2143] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [2145] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_inst, 6, 0, 0),
    [2147] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(601),
    [2149] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2, 0, 0),
    [2151] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(207),
    [2153] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(395),
    [2155] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [2157] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [2159] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [2161] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4, 0, 0),
    [2163] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(290),
    [2165] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [2167] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_event_abs_def, 6, 0, 0),
    [2169] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_abs_def, 6, 0, 0),
    [2171] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_kind, 2, 0, 0),
    [2173] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 3, 0, 0),
    [2175] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [2177] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(574),
    [2179] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [2181] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(257),
    [2183] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(123),
    [2185] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2, 0, 0),
    [2187] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5, 0, 0),
    [2189] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1, 0, 0),
    [2191] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(424),
    [2193] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_id_dcl, 3, 0, 0),
    [2195] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_uses_dcl, 4, 0, 0),
    [2197] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_port_dcl, 3, 0, 0),
    [2199] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(206),
    [2201] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(419),
    [2203] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_consumes_dcl, 3, 0, 0),
    [2205] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_publishes_dcl, 3, 0, 0),
    [2207] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emits_dcl, 3, 0, 0),
    [2209] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_uses_dcl, 3, 0, 0),
    [2211] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(582),
    [2213] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_provides_dcl, 3, 0, 0),
    [2215] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2, 0, 0),
    [2217] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_prefix_dcl, 3, 0, 0),
    [2219] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [2221] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [2223] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_abs_def, 7, 0, 0),
    [2225] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_event_abs_def, 7, 0, 0),
    [2227] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [2229] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [2231] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(744),
    [2233] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [2235] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(248),
    [2237] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [2239] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [2241] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3, 0, 0),
    [2243] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 7, 0, 0),
    [2245] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(225),
    [2247] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(111),
    [2249] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(264),
    [2251] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_kind, 2, 0, 0),
    [2253] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [2255] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [2257] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_porttype_def, 5, 0, 0),
    [2259] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(107),
    [2261] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(288),
    [2263] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_header, 7, 0, 0),
    [2265] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(406),
    [2267] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_connector_header, 3, 0, 0),
    [2269] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3, 0, 0),
    [2271] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5, 0, 0),
    [2273] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(310),
    [2275] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2, 0, 0),
    [2277] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2, 0, 0),
    [2279] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3, 0, 0),
    [2281] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(613),
    [2283] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(450),
    [2285] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(552),
    [2287] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 4, 0, 0),
    [2289] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1, 0, 0),
    [2291] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [2293] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [2295] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_porttype_dcl, 1, 0, 0),
    [2297] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(726),
    [2299] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [2301] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5, 0, 0),
    [2303] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(548),
    [2305] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [2307] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 2, 0, 0),
    [2309] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(720),
    [2311] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1, 0, 0),
    [2313] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 3, 0, 0),
    [2315] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(383),
    [2317] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(714),
    [2319] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(619),
    [2321] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [2323] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1, 0, 0),
    [2325] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(471),
    [2327] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(134),
    [2329] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [2331] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_dcl, 1, 0, 0),
    [2333] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 8, 0, 0),
    [2335] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(542),
    [2337] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_def, 3, 0, 0),
    [2339] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [2341] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(540),
    [2343] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [2345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [2347] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [2349] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(220),
    [2351] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_dcl, 1, 0, 0),
    [2353] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(361),
    [2355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5, 0, 0),
    [2357] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [2359] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(172),
    [2361] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(707),
    [2363] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_dcl, 3, 0, 0),
    [2365] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(705),
    [2367] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(700),
    [2369] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 5, 0, 0),
    [2371] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [2373] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_event_def, 3, 0, 0),
    [2375] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_event_abs_def, 5, 0, 0),
    [2377] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [2379] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(690),
    [2381] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1, 0, 0),
    [2383] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_abs_def, 5, 0, 0),
    [2385] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [2387] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [2389] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5, 0, 0),
    [2391] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(577),
    [2393] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_dcl, 6, 0, 0),
    [2395] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 4, 0, 0),
    [2397] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [2399] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [2401] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_connector_dcl, 4, 0, 0),
    [2403] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(117),
    [2405] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_event_def, 4, 0, 0),
    [2407] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_dcl, 4, 0, 0),
    [2409] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(271),
    [2411] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [2413] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [2415] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [2417] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(267),
    [2419] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [2421] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_def, 4, 0, 0),
    [2423] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(104),
    [2425] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(589),
    [2427] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(591),
    [2429] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1, 0, 0),
    [2431] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 4, 0, 0),
    [2433] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(246),
    [2435] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [2437] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(725),
    [2439] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [2441] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2, 0, 0),
    [2443] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4, 0, 0),
    [2445] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(188),
    [2447] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_with_context, 2, 0, 0),
    [2449] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(285),
    [2451] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(505),
    [2453] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4, 0, 0),
    [2455] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(729),
    [2457] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(602),
    [2459] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(645),
    [2461] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(614),
    [2463] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_ref, 6, 0, 0),
    [2465] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_porttype_def, 4, 0, 0),
    [2467] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(522),
    [2469] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(219),
    [2471] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(202),
    [2473] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(379),
    [2475] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1, 0, 0),
    [2477] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_header, 4, 0, 0),
    [2479] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4, 0, 0),
    [2481] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(584),
    [2483] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(364),
    [2485] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(278),
    [2487] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(214),
    [2489] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_kind, 1, 0, 0),
    [2491] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(159),
    [2493] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(429),
    [2495] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(648),
    [2497] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(599),
    [2499] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(604),
    [2501] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(468),
    [2503] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_kind, 1, 0, 0),
    [2505] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [2507] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(120),
    [2509] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_event_header, 4, 0, 0),
    [2511] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [2513] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [2515] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(511),
    [2517] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(399),
    [2519] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(260),
    [2521] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [2523] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(401),
    [2525] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [2527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(197),
    [2529] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [2531] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(517),
    [2533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(666),
    [2535] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_comment, 2, 0, 0),
    [2537] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_comment, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_idl(void) {
    static const TSLanguage language = {
        .version = LANGUAGE_VERSION,
        .symbol_count = SYMBOL_COUNT,
        .alias_count = ALIAS_COUNT,
        .token_count = TOKEN_COUNT,
        .external_token_count = EXTERNAL_TOKEN_COUNT,
        .state_count = STATE_COUNT,
        .large_state_count = LARGE_STATE_COUNT,
        .production_id_count = PRODUCTION_ID_COUNT,
        .field_count = FIELD_COUNT,
        .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
        .parse_table = &ts_parse_table[0][0],
        .small_parse_table = ts_small_parse_table,
        .small_parse_table_map = ts_small_parse_table_map,
        .parse_actions = ts_parse_actions,
        .symbol_names = ts_symbol_names,
        .field_names = ts_field_names,
        .field_map_slices = ts_field_map_slices,
        .field_map_entries = ts_field_map_entries,
        .symbol_metadata = ts_symbol_metadata,
        .public_symbol_map = ts_symbol_map,
        .alias_map = ts_non_terminal_alias_map,
        .alias_sequences = &ts_alias_sequences[0][0],
        .lex_modes = ts_lex_modes,
        .lex_fn = ts_lex,
        .primary_state_ids = ts_primary_state_ids,
    };
    return &language;
}
#ifdef __cplusplus
}
#endif
