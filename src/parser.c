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
#define STATE_COUNT 716
#define LARGE_STATE_COUNT 29
#define SYMBOL_COUNT 324
#define ALIAS_COUNT 0
#define TOKEN_COUNT 129
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
    anon_sym_native = 120,
    anon_sym_POUNDdefine = 121,
    aux_sym_predefine_token1 = 122,
    sym_identifier = 123,
    anon_sym_SLASH_SLASH = 124,
    aux_sym_comment_token1 = 125,
    aux_sym_comment_token2 = 126,
    anon_sym_SLASH_STAR = 127,
    aux_sym_comment_token3 = 128,
    sym_specification = 129,
    sym_signed_short_int = 130,
    sym_signed_long_int = 131,
    sym_signed_longlong_int = 132,
    sym_unsigned_int = 133,
    sym_fixed_pt_const_type = 134,
    sym_integer_type = 135,
    sym_signed_int = 136,
    sym_unsigned_short_int = 137,
    sym_unsigned_long_int = 138,
    sym_unsigned_longlong_int = 139,
    sym_floating_pt_type = 140,
    sym_char_type = 141,
    sym_scoped_name = 142,
    sym_string_type = 143,
    sym_type_spec = 144,
    sym_simple_type_spec = 145,
    sym_base_type_spec = 146,
    sym_any_type = 147,
    sym_fixed_pt_type = 148,
    sym_template_type_spec = 149,
    sym_sequence_type = 150,
    sym_map_type = 151,
    sym_positive_int_const = 152,
    sym_const_expr = 153,
    sym_or_expr = 154,
    sym_xor_expr = 155,
    sym_and_expr = 156,
    sym_shift_expr = 157,
    sym_add_expr = 158,
    sym_mult_expr = 159,
    sym_unary_expr = 160,
    sym_unary_operator = 161,
    sym_literal = 162,
    sym_string_literal = 163,
    sym_char_literal = 164,
    sym_boolean_literal = 165,
    sym_preproc_call = 166,
    sym_except_dcl = 167,
    sym_interface_dcl = 168,
    sym_interface_kind = 169,
    sym_interface_forward_dcl = 170,
    sym_interface_def = 171,
    sym_interface_header = 172,
    sym_interface_inheritance_spec = 173,
    sym_interface_name = 174,
    sym_interface_body = 175,
    sym_export = 176,
    sym_op_dcl = 177,
    sym_op_type_spec = 178,
    sym_parameter_dcls = 179,
    sym_param_dcl = 180,
    sym_param_attribute = 181,
    sym_raises_expr = 182,
    sym_attr_dcl = 183,
    sym_readonly_attr_spec = 184,
    sym_readonly_attr_declarator = 185,
    sym_attr_spec = 186,
    sym_attr_declarator = 187,
    sym_attr_raises_expr = 188,
    sym_get_excep_expr = 189,
    sym_set_excep_expr = 190,
    sym_exception_list = 191,
    sym_bitset_dcl = 192,
    sym_bitfield = 193,
    sym_bitfield_spec = 194,
    sym_destination_type = 195,
    sym_bitmask_dcl = 196,
    sym_bit_value = 197,
    sym_annotation_dcl = 198,
    sym_annotation_body = 199,
    sym_annotation_member = 200,
    sym_annotation_member_type = 201,
    sym_any_const_type = 202,
    sym_annotation_appl = 203,
    sym_annotation_appl_params = 204,
    sym_annotation_appl_param = 205,
    sym_template_module_dcl = 206,
    sym_formal_parameters = 207,
    sym_formal_parameter = 208,
    sym_formal_parameter_type = 209,
    sym_tpl_definition = 210,
    sym_template_module_inst = 211,
    sym_actual_parameters = 212,
    sym_actual_parameter = 213,
    sym_template_module_ref = 214,
    sym_formal_parameter_names = 215,
    sym_value_dcl = 216,
    sym_value_def = 217,
    sym_value_kind = 218,
    sym_value_header = 219,
    sym_value_inheritance_spec = 220,
    sym_value_name = 221,
    sym_value_element = 222,
    sym_state_member = 223,
    sym_init_dcl = 224,
    sym_init_param_dcls = 225,
    sym_init_param_dcl = 226,
    sym_value_forward_dcl = 227,
    sym_typedef_dcl = 228,
    sym_type_declarator = 229,
    sym_any_declarators = 230,
    sym_any_declarator = 231,
    sym_simple_declarator = 232,
    sym_declarator = 233,
    sym_declarators = 234,
    sym_array_declarator = 235,
    sym_fixed_array_size = 236,
    sym_enum_dcl = 237,
    sym_enumerator = 238,
    sym_enum_modifier = 239,
    sym_enum_anno = 240,
    sym_union_forward_dcl = 241,
    sym_union_def = 242,
    sym_case = 243,
    sym_case_label = 244,
    sym_element_spec = 245,
    sym_switch_type_spec = 246,
    sym_type_id_dcl = 247,
    sym_type_prefix_dcl = 248,
    sym_import_dcl = 249,
    sym_imported_scope = 250,
    sym_object_type = 251,
    sym_op_oneway_dcl = 252,
    sym_in_parameter_dcls = 253,
    sym_in_param_dcl = 254,
    sym_op_with_context = 255,
    sym_context_expr = 256,
    sym_value_abs_def = 257,
    sym_component_dcl = 258,
    sym_component_forward_dcl = 259,
    sym_component_def = 260,
    sym_component_header = 261,
    sym_component_inheritance_spec = 262,
    sym_component_body = 263,
    sym_component_export = 264,
    sym_provides_dcl = 265,
    sym_interface_type = 266,
    sym_uses_dcl = 267,
    sym_home_dcl = 268,
    sym_home_header = 269,
    sym_home_inheritance_spec = 270,
    sym_home_body = 271,
    sym_home_export = 272,
    sym_factory_dcl = 273,
    sym_factory_param_dcls = 274,
    sym_factory_param_dcl = 275,
    sym_supported_interface_spec = 276,
    sym_emits_dcl = 277,
    sym_publishes_dcl = 278,
    sym_consumes_dcl = 279,
    sym_primary_key_spec = 280,
    sym__definition = 281,
    sym_native_dcl = 282,
    sym_module_dcl = 283,
    sym_struct_forward_dcl = 284,
    sym_struct_def = 285,
    sym_member = 286,
    sym_default = 287,
    sym_predefine = 288,
    sym_const_dcl = 289,
    sym_const_type = 290,
    sym_comment = 291,
    aux_sym_specification_repeat1 = 292,
    aux_sym_specification_repeat2 = 293,
    aux_sym_except_dcl_repeat1 = 294,
    aux_sym_interface_def_repeat1 = 295,
    aux_sym_interface_inheritance_spec_repeat1 = 296,
    aux_sym_interface_body_repeat1 = 297,
    aux_sym_parameter_dcls_repeat1 = 298,
    aux_sym_raises_expr_repeat1 = 299,
    aux_sym_readonly_attr_declarator_repeat1 = 300,
    aux_sym_bitset_dcl_repeat1 = 301,
    aux_sym_bitfield_repeat1 = 302,
    aux_sym_bitmask_dcl_repeat1 = 303,
    aux_sym_annotation_dcl_repeat1 = 304,
    aux_sym_annotation_appl_params_repeat1 = 305,
    aux_sym_template_module_dcl_repeat1 = 306,
    aux_sym_formal_parameters_repeat1 = 307,
    aux_sym_actual_parameters_repeat1 = 308,
    aux_sym_formal_parameter_names_repeat1 = 309,
    aux_sym_value_def_repeat1 = 310,
    aux_sym_value_inheritance_spec_repeat1 = 311,
    aux_sym_init_param_dcls_repeat1 = 312,
    aux_sym_any_declarators_repeat1 = 313,
    aux_sym_declarators_repeat1 = 314,
    aux_sym_array_declarator_repeat1 = 315,
    aux_sym_enum_dcl_repeat1 = 316,
    aux_sym_enumerator_repeat1 = 317,
    aux_sym_union_def_repeat1 = 318,
    aux_sym_in_parameter_dcls_repeat1 = 319,
    aux_sym_context_expr_repeat1 = 320,
    aux_sym_component_body_repeat1 = 321,
    aux_sym_home_body_repeat1 = 322,
    aux_sym_factory_param_dcls_repeat1 = 323,
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
    [62] = 62,
    [63] = 63,
    [64] = 50,
    [65] = 65,
    [66] = 66,
    [67] = 50,
    [68] = 68,
    [69] = 69,
    [70] = 70,
    [71] = 71,
    [72] = 72,
    [73] = 73,
    [74] = 74,
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
    [91] = 82,
    [92] = 81,
    [93] = 80,
    [94] = 94,
    [95] = 95,
    [96] = 96,
    [97] = 96,
    [98] = 96,
    [99] = 96,
    [100] = 100,
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
    [113] = 113,
    [114] = 114,
    [115] = 115,
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
    [161] = 87,
    [162] = 162,
    [163] = 163,
    [164] = 164,
    [165] = 165,
    [166] = 73,
    [167] = 167,
    [168] = 168,
    [169] = 169,
    [170] = 170,
    [171] = 171,
    [172] = 80,
    [173] = 173,
    [174] = 88,
    [175] = 175,
    [176] = 176,
    [177] = 89,
    [178] = 82,
    [179] = 179,
    [180] = 180,
    [181] = 181,
    [182] = 182,
    [183] = 81,
    [184] = 184,
    [185] = 185,
    [186] = 186,
    [187] = 187,
    [188] = 188,
    [189] = 189,
    [190] = 190,
    [191] = 191,
    [192] = 192,
    [193] = 193,
    [194] = 194,
    [195] = 195,
    [196] = 196,
    [197] = 197,
    [198] = 198,
    [199] = 199,
    [200] = 200,
    [201] = 201,
    [202] = 202,
    [203] = 203,
    [204] = 204,
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
    [216] = 73,
    [217] = 87,
    [218] = 218,
    [219] = 80,
    [220] = 81,
    [221] = 82,
    [222] = 73,
    [223] = 87,
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
    [247] = 247,
    [248] = 248,
    [249] = 249,
    [250] = 250,
    [251] = 251,
    [252] = 252,
    [253] = 253,
    [254] = 254,
    [255] = 255,
    [256] = 256,
    [257] = 257,
    [258] = 258,
    [259] = 259,
    [260] = 260,
    [261] = 261,
    [262] = 262,
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
    [279] = 279,
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
    [292] = 290,
    [293] = 291,
    [294] = 290,
    [295] = 295,
    [296] = 296,
    [297] = 297,
    [298] = 298,
    [299] = 290,
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
    [315] = 315,
    [316] = 316,
    [317] = 317,
    [318] = 318,
    [319] = 319,
    [320] = 320,
    [321] = 321,
    [322] = 322,
    [323] = 323,
    [324] = 324,
    [325] = 325,
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
    [341] = 291,
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
    [420] = 420,
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
    [488] = 88,
    [489] = 89,
    [490] = 490,
    [491] = 88,
    [492] = 492,
    [493] = 89,
    [494] = 261,
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
    [507] = 507,
    [508] = 508,
    [509] = 509,
    [510] = 510,
    [511] = 511,
    [512] = 512,
    [513] = 513,
    [514] = 514,
    [515] = 515,
    [516] = 516,
    [517] = 517,
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
    [535] = 535,
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
    [698] = 530,
    [699] = 652,
    [700] = 618,
    [701] = 701,
    [702] = 582,
    [703] = 703,
    [704] = 530,
    [705] = 652,
    [706] = 618,
    [707] = 707,
    [708] = 582,
    [709] = 709,
    [710] = 530,
    [711] = 582,
    [712] = 712,
    [713] = 713,
    [714] = 714,
    [715] = 715,
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
                ADVANCE(537);
            ADVANCE_MAP(
                '"', 612,
                '#', 169,
                '$', 597,
                '%', 606,
                '\'', 614,
                '(', 607,
                ')', 608,
                '*', 604,
                '+', 600,
                ',', 590,
                '-', 602,
                '/', 605,
                ':', 697,
                ';', 698,
                '<', 585,
                '=', 722,
                '>', 587,
                '@', 721,
                'F', 616,
                'L', 610,
                'O', 625,
                'T', 617,
                'V', 618,
                '[', 752,
            );
            if(lookahead == '\\')
                SKIP(530);
            if(lookahead == ']')
                ADVANCE(753);
            if(lookahead == '^')
                ADVANCE(596);
            if(lookahead == 'a')
                ADVANCE(626);
            if(lookahead == 'b')
                ADVANCE(633);
            if(lookahead == 'c')
                ADVANCE(620);
            if(lookahead == 'd')
                ADVANCE(629);
            if(lookahead == 'e')
                ADVANCE(635);
            if(lookahead == 'f')
                ADVANCE(621);
            if(lookahead == 'g')
                ADVANCE(631);
            if(lookahead == 'h')
                ADVANCE(636);
            if(lookahead == 'i')
                ADVANCE(634);
            if(lookahead == 'l')
                ADVANCE(637);
            if(lookahead == 'm')
                ADVANCE(619);
            if(lookahead == 'n')
                ADVANCE(623);
            if(lookahead == 'o')
                ADVANCE(628);
            if(lookahead == 'p')
                ADVANCE(638);
            if(lookahead == 'r')
                ADVANCE(622);
            if(lookahead == 's')
                ADVANCE(630);
            if(lookahead == 't')
                ADVANCE(639);
            if(lookahead == 'u')
                ADVANCE(632);
            if(lookahead == 'v')
                ADVANCE(624);
            if(lookahead == 'w')
                ADVANCE(627);
            if(lookahead == '{')
                ADVANCE(689);
            if(lookahead == '|')
                ADVANCE(595);
            if(lookahead == '}')
                ADVANCE(690);
            if(lookahead == '~')
                ADVANCE(609);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(615);
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
                SKIP(86);
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(86);
            if(lookahead == '\r')
                SKIP(19);
            END_STATE();
        case 21:
            if(lookahead == '\n')
                SKIP(63);
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(63);
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
                SKIP(41);
            END_STATE();
        case 40:
            if(lookahead == '\n')
                SKIP(41);
            if(lookahead == '\r')
                SKIP(39);
            END_STATE();
        case 41:
            if(lookahead == '\n')
                ADVANCE(1068);
            if(lookahead == '\r')
                ADVANCE(41);
            if(lookahead == '(')
                ADVANCE(607);
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '@')
                ADVANCE(720);
            if(lookahead == '\\')
                SKIP(40);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(41);
            END_STATE();
        case 42:
            if(lookahead == '\n')
                ADVANCE(1072);
            if(lookahead == '\r')
                ADVANCE(1069);
            if(lookahead == '\\')
                ADVANCE(1070);
            if(lookahead != 0)
                ADVANCE(1073);
            END_STATE();
        case 43:
            if(lookahead == '\n')
                SKIP(70);
            END_STATE();
        case 44:
            if(lookahead == '\n')
                SKIP(70);
            if(lookahead == '\r')
                SKIP(43);
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
                ADVANCE(674);
            if(lookahead == '\r')
                ADVANCE(50);
            if(lookahead == '/')
                ADVANCE(684);
            if(lookahead == '\\')
                ADVANCE(681);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(93);
            if(lookahead != 0)
                ADVANCE(685);
            END_STATE();
        case 48:
            if(lookahead == '\n')
                ADVANCE(674);
            if(lookahead == '\r')
                ADVANCE(49);
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == '\\')
                SKIP(52);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(90);
            END_STATE();
        case 49:
            if(lookahead == '\n')
                ADVANCE(674);
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == '\\')
                SKIP(52);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(90);
            END_STATE();
        case 50:
            if(lookahead == '\n')
                ADVANCE(674);
            if(lookahead == '/')
                ADVANCE(684);
            if(lookahead == '\\')
                ADVANCE(681);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(93);
            if(lookahead != 0)
                ADVANCE(685);
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
                ADVANCE(72);
            if(lookahead == '\r')
                ADVANCE(54);
            if(lookahead == '*')
                ADVANCE(1079);
            if(lookahead != 0)
                ADVANCE(73);
            END_STATE();
        case 54:
            if(lookahead == '\n')
                ADVANCE(72);
            if(lookahead == '*')
                ADVANCE(1079);
            if(lookahead != 0)
                ADVANCE(73);
            END_STATE();
        case 55:
            if(lookahead == '\n')
                SKIP(91);
            END_STATE();
        case 56:
            if(lookahead == '\n')
                SKIP(91);
            if(lookahead == '\r')
                SKIP(55);
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
                ADVANCE(1074);
            if(lookahead == '\\')
                ADVANCE(1070);
            if(lookahead != 0)
                ADVANCE(1073);
            END_STATE();
        case 62:
            if(lookahead == ' ')
                ADVANCE(317);
            END_STATE();
        case 63:
            ADVANCE_MAP(
                '"', 612,
                '$', 597,
                '%', 606,
                '(', 607,
                ')', 608,
                '*', 604,
                '+', 600,
                ',', 590,
                '-', 602,
                '/', 605,
                ':', 697,
                ';', 698,
                '<', 585,
                '>', 587,
                '@', 720,
                'L', 610,
            );
            if(lookahead == '\\')
                SKIP(22);
            if(lookahead == ']')
                ADVANCE(753);
            if(lookahead == '^')
                ADVANCE(596);
            if(lookahead == 'a')
                ADVANCE(146);
            if(lookahead == 'b')
                ADVANCE(284);
            if(lookahead == 'i')
                ADVANCE(362);
            if(lookahead == 'l')
                ADVANCE(381);
            if(lookahead == 'm')
                ADVANCE(130);
            if(lookahead == 'p')
                ADVANCE(412);
            if(lookahead == 's')
                ADVANCE(476);
            if(lookahead == '{')
                ADVANCE(689);
            if(lookahead == '|')
                ADVANCE(595);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(63);
            END_STATE();
        case 64:
            ADVANCE_MAP(
                '"', 612,
                '\'', 614,
                '(', 607,
                '+', 601,
                '-', 603,
                '.', 523,
                '/', 71,
                '0', 651,
                ':', 102,
                'F', 803,
                'L', 611,
                'O', 833,
                'T', 808,
                'V', 811,
            );
            if(lookahead == '\\')
                SKIP(6);
            if(lookahead == 'a')
                ADVANCE(947);
            if(lookahead == 'b')
                ADVANCE(968);
            if(lookahead == 'c')
                ADVANCE(905);
            if(lookahead == 'd')
                ADVANCE(964);
            if(lookahead == 'f')
                ADVANCE(908);
            if(lookahead == 'i')
                ADVANCE(951);
            if(lookahead == 'l')
                ADVANCE(966);
            if(lookahead == 'm')
                ADVANCE(815);
            if(lookahead == 'o')
                ADVANCE(845);
            if(lookahead == 's')
                ADVANCE(862);
            if(lookahead == 'u')
                ADVANCE(916);
            if(lookahead == 'w')
                ADVANCE(839);
            if(lookahead == '~')
                ADVANCE(609);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(64);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(655);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 65:
            ADVANCE_MAP(
                '"', 612,
                '\'', 614,
                '(', 607,
                '+', 601,
                '-', 603,
                '.', 523,
                '/', 71,
                '0', 651,
                ':', 102,
                'F', 803,
                'L', 611,
                'T', 808,
            );
            if(lookahead == '\\')
                SKIP(24);
            if(lookahead == '~')
                ADVANCE(609);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(65);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(655);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 66:
            if(lookahead == '"')
                ADVANCE(612);
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == 'L')
                ADVANCE(611);
            if(lookahead == '\\')
                SKIP(28);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(66);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 67:
            if(lookahead == '$')
                ADVANCE(597);
            if(lookahead == ')')
                ADVANCE(608);
            if(lookahead == ',')
                ADVANCE(590);
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(696);
            if(lookahead == ';')
                ADVANCE(698);
            if(lookahead == '>')
                ADVANCE(586);
            if(lookahead == '\\')
                SKIP(26);
            if(lookahead == ']')
                ADVANCE(753);
            if(lookahead == '^')
                ADVANCE(596);
            if(lookahead == 'i')
                ADVANCE(335);
            if(lookahead == 'o')
                ADVANCE(495);
            if(lookahead == '|')
                ADVANCE(595);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(67);
            END_STATE();
        case 68:
            ADVANCE_MAP(
                '(', 607,
                ')', 608,
                ',', 590,
                '/', 71,
                ':', 102,
                ';', 698,
                '<', 584,
                '>', 586,
                '@', 720,
            );
            if(lookahead == '\\')
                SKIP(30);
            if(lookahead == '}')
                ADVANCE(690);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(68);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 69:
            ADVANCE_MAP(
                '(', 607,
                ',', 590,
                '/', 71,
                ':', 102,
                '>', 586,
                '@', 720,
                'O', 833,
                'V', 811,
            );
            if(lookahead == '\\')
                SKIP(12);
            if(lookahead == 'a')
                ADVANCE(947);
            if(lookahead == 'b')
                ADVANCE(968);
            if(lookahead == 'c')
                ADVANCE(905);
            if(lookahead == 'd')
                ADVANCE(964);
            if(lookahead == 'f')
                ADVANCE(908);
            if(lookahead == 'i')
                ADVANCE(951);
            if(lookahead == 'l')
                ADVANCE(966);
            if(lookahead == 'm')
                ADVANCE(815);
            if(lookahead == 'o')
                ADVANCE(845);
            if(lookahead == 's')
                ADVANCE(862);
            if(lookahead == 'u')
                ADVANCE(916);
            if(lookahead == 'w')
                ADVANCE(839);
            if(lookahead == '}')
                ADVANCE(690);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(69);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 70:
            if(lookahead == ')')
                ADVANCE(608);
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == '\\')
                SKIP(44);
            if(lookahead == 'i')
                ADVANCE(340);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(70);
            END_STATE();
        case 71:
            if(lookahead == '*')
                ADVANCE(1075);
            if(lookahead == '/')
                ADVANCE(1064);
            END_STATE();
        case 72:
            if(lookahead == '*')
                ADVANCE(1079);
            if(lookahead == '/')
                ADVANCE(74);
            if(lookahead == '\\')
                ADVANCE(53);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(72);
            if(lookahead != 0)
                ADVANCE(73);
            END_STATE();
        case 73:
            if(lookahead == '*')
                ADVANCE(1079);
            if(lookahead != 0)
                ADVANCE(73);
            END_STATE();
        case 74:
            if(lookahead == '*')
                ADVANCE(1076);
            if(lookahead == '/')
                ADVANCE(1065);
            if(lookahead != 0)
                ADVANCE(73);
            END_STATE();
        case 75:
            ADVANCE_MAP(
                ',', 590,
                '/', 71,
                ':', 102,
                '<', 584,
                '>', 586,
                '@', 720,
                'O', 833,
                'V', 811,
            );
            if(lookahead == '\\')
                SKIP(2);
            if(lookahead == ']')
                ADVANCE(753);
            if(lookahead == 'a')
                ADVANCE(834);
            if(lookahead == 'b')
                ADVANCE(910);
            if(lookahead == 'c')
                ADVANCE(903);
            if(lookahead == 'd')
                ADVANCE(964);
            if(lookahead == 'e')
                ADVANCE(949);
            if(lookahead == 'f')
                ADVANCE(814);
            if(lookahead == 'i')
                ADVANCE(938);
            if(lookahead == 'l')
                ADVANCE(966);
            if(lookahead == 'm')
                ADVANCE(815);
            if(lookahead == 'n')
                ADVANCE(820);
            if(lookahead == 'o')
                ADVANCE(844);
            if(lookahead == 'p')
                ADVANCE(987);
            if(lookahead == 'r')
                ADVANCE(883);
            if(lookahead == 's')
                ADVANCE(860);
            if(lookahead == 't')
                ADVANCE(1057);
            if(lookahead == 'u')
                ADVANCE(915);
            if(lookahead == 'v')
                ADVANCE(831);
            if(lookahead == 'w')
                ADVANCE(839);
            if(lookahead == '{')
                ADVANCE(689);
            if(lookahead == '}')
                ADVANCE(690);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(75);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 76:
            if(lookahead == '.')
                ADVANCE(523);
            if(lookahead == '0')
                ADVANCE(648);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(650);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(664);
            END_STATE();
        case 77:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '@')
                ADVANCE(720);
            if(lookahead == 'O')
                ADVANCE(833);
            if(lookahead == 'V')
                ADVANCE(811);
            if(lookahead == '\\')
                SKIP(4);
            if(lookahead == 'a')
                ADVANCE(834);
            if(lookahead == 'b')
                ADVANCE(910);
            if(lookahead == 'c')
                ADVANCE(903);
            if(lookahead == 'd')
                ADVANCE(964);
            if(lookahead == 'e')
                ADVANCE(949);
            if(lookahead == 'f')
                ADVANCE(814);
            if(lookahead == 'i')
                ADVANCE(938);
            if(lookahead == 'l')
                ADVANCE(966);
            if(lookahead == 'm')
                ADVANCE(815);
            if(lookahead == 'n')
                ADVANCE(820);
            if(lookahead == 'o')
                ADVANCE(844);
            if(lookahead == 'r')
                ADVANCE(883);
            if(lookahead == 's')
                ADVANCE(860);
            if(lookahead == 't')
                ADVANCE(1057);
            if(lookahead == 'u')
                ADVANCE(915);
            if(lookahead == 'v')
                ADVANCE(831);
            if(lookahead == 'w')
                ADVANCE(839);
            if(lookahead == '}')
                ADVANCE(690);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(77);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 78:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '@')
                ADVANCE(720);
            if(lookahead == 'O')
                ADVANCE(833);
            if(lookahead == 'V')
                ADVANCE(811);
            if(lookahead == '\\')
                SKIP(58);
            if(lookahead == 'a')
                ADVANCE(834);
            if(lookahead == 'b')
                ADVANCE(910);
            if(lookahead == 'c')
                ADVANCE(903);
            if(lookahead == 'd')
                ADVANCE(964);
            if(lookahead == 'e')
                ADVANCE(949);
            if(lookahead == 'f')
                ADVANCE(908);
            if(lookahead == 'i')
                ADVANCE(938);
            if(lookahead == 'l')
                ADVANCE(966);
            if(lookahead == 'm')
                ADVANCE(815);
            if(lookahead == 'n')
                ADVANCE(820);
            if(lookahead == 'o')
                ADVANCE(844);
            if(lookahead == 'r')
                ADVANCE(883);
            if(lookahead == 's')
                ADVANCE(860);
            if(lookahead == 't')
                ADVANCE(1057);
            if(lookahead == 'u')
                ADVANCE(915);
            if(lookahead == 'v')
                ADVANCE(831);
            if(lookahead == 'w')
                ADVANCE(839);
            if(lookahead == '}')
                ADVANCE(690);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(78);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 79:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '@')
                ADVANCE(720);
            if(lookahead == 'O')
                ADVANCE(833);
            if(lookahead == 'V')
                ADVANCE(811);
            if(lookahead == '\\')
                SKIP(8);
            if(lookahead == 'a')
                ADVANCE(947);
            if(lookahead == 'b')
                ADVANCE(910);
            if(lookahead == 'c')
                ADVANCE(826);
            if(lookahead == 'd')
                ADVANCE(880);
            if(lookahead == 'e')
                ADVANCE(950);
            if(lookahead == 'f')
                ADVANCE(908);
            if(lookahead == 'i')
                ADVANCE(951);
            if(lookahead == 'l')
                ADVANCE(966);
            if(lookahead == 'm')
                ADVANCE(815);
            if(lookahead == 'o')
                ADVANCE(845);
            if(lookahead == 's')
                ADVANCE(860);
            if(lookahead == 'u')
                ADVANCE(915);
            if(lookahead == 'w')
                ADVANCE(839);
            if(lookahead == '}')
                ADVANCE(690);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(79);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 80:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '@')
                ADVANCE(720);
            if(lookahead == 'O')
                ADVANCE(833);
            if(lookahead == 'V')
                ADVANCE(811);
            if(lookahead == '\\')
                SKIP(10);
            if(lookahead == 'a')
                ADVANCE(947);
            if(lookahead == 'b')
                ADVANCE(910);
            if(lookahead == 'c')
                ADVANCE(905);
            if(lookahead == 'd')
                ADVANCE(964);
            if(lookahead == 'e')
                ADVANCE(950);
            if(lookahead == 'f')
                ADVANCE(908);
            if(lookahead == 'i')
                ADVANCE(951);
            if(lookahead == 'l')
                ADVANCE(966);
            if(lookahead == 'm')
                ADVANCE(815);
            if(lookahead == 'o')
                ADVANCE(845);
            if(lookahead == 's')
                ADVANCE(860);
            if(lookahead == 'u')
                ADVANCE(915);
            if(lookahead == 'w')
                ADVANCE(839);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(80);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 81:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '@')
                ADVANCE(279);
            if(lookahead == '\\')
                SKIP(14);
            if(lookahead == 'a')
                ADVANCE(947);
            if(lookahead == 'b')
                ADVANCE(968);
            if(lookahead == 'c')
                ADVANCE(904);
            if(lookahead == 'd')
                ADVANCE(964);
            if(lookahead == 'e')
                ADVANCE(950);
            if(lookahead == 'f')
                ADVANCE(908);
            if(lookahead == 'i')
                ADVANCE(951);
            if(lookahead == 'l')
                ADVANCE(966);
            if(lookahead == 'o')
                ADVANCE(845);
            if(lookahead == 's')
                ADVANCE(862);
            if(lookahead == 't')
                ADVANCE(1059);
            if(lookahead == 'u')
                ADVANCE(916);
            if(lookahead == 'w')
                ADVANCE(839);
            if(lookahead == '}')
                ADVANCE(690);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(81);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 82:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == 'O')
                ADVANCE(833);
            if(lookahead == 'V')
                ADVANCE(811);
            if(lookahead == '\\')
                SKIP(16);
            if(lookahead == 'a')
                ADVANCE(947);
            if(lookahead == 'b')
                ADVANCE(968);
            if(lookahead == 'c')
                ADVANCE(904);
            if(lookahead == 'd')
                ADVANCE(964);
            if(lookahead == 'e')
                ADVANCE(948);
            if(lookahead == 'f')
                ADVANCE(928);
            if(lookahead == 'i')
                ADVANCE(959);
            if(lookahead == 'l')
                ADVANCE(966);
            if(lookahead == 'o')
                ADVANCE(845);
            if(lookahead == 's')
                ADVANCE(861);
            if(lookahead == 't')
                ADVANCE(1060);
            if(lookahead == 'u')
                ADVANCE(915);
            if(lookahead == 'v')
                ADVANCE(832);
            if(lookahead == 'w')
                ADVANCE(840);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(82);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 83:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == 'O')
                ADVANCE(833);
            if(lookahead == '\\')
                SKIP(34);
            if(lookahead == 'm')
                ADVANCE(1044);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(83);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 84:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == 'O')
                ADVANCE(833);
            if(lookahead == '\\')
                SKIP(36);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(84);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 85:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '\\')
                SKIP(18);
            if(lookahead == 'b')
                ADVANCE(968);
            if(lookahead == 'c')
                ADVANCE(905);
            if(lookahead == 'd')
                ADVANCE(964);
            if(lookahead == 'f')
                ADVANCE(908);
            if(lookahead == 'i')
                ADVANCE(951);
            if(lookahead == 'l')
                ADVANCE(966);
            if(lookahead == 'o')
                ADVANCE(845);
            if(lookahead == 's')
                ADVANCE(862);
            if(lookahead == 'u')
                ADVANCE(916);
            if(lookahead == 'w')
                ADVANCE(839);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(85);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 86:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '\\')
                SKIP(20);
            if(lookahead == 'b')
                ADVANCE(968);
            if(lookahead == 'c')
                ADVANCE(905);
            if(lookahead == 'i')
                ADVANCE(951);
            if(lookahead == 'l')
                ADVANCE(974);
            if(lookahead == 's')
                ADVANCE(906);
            if(lookahead == 'u')
                ADVANCE(916);
            if(lookahead == 'w')
                ADVANCE(840);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(86);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 87:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(102);
            if(lookahead == '\\')
                SKIP(38);
            if(lookahead == 't')
                ADVANCE(995);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(87);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 88:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ':')
                ADVANCE(696);
            if(lookahead == ';')
                ADVANCE(698);
            if(lookahead == '@')
                ADVANCE(183);
            if(lookahead == '\\')
                SKIP(32);
            if(lookahead == '{')
                ADVANCE(689);
            if(lookahead == '}')
                ADVANCE(690);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(88);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 89:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == ';')
                ADVANCE(698);
            if(lookahead == '\\')
                SKIP(46);
            if(lookahead == 's')
                ADVANCE(1051);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(89);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 90:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == '\\')
                SKIP(52);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(90);
            END_STATE();
        case 91:
            if(lookahead == '/')
                ADVANCE(71);
            if(lookahead == '\\')
                SKIP(56);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(91);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(615);
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
                ADVANCE(613);
            END_STATE();
        case 93:
            if(lookahead == '/')
                ADVANCE(684);
            if(lookahead == '\\')
                ADVANCE(681);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(93);
            if(lookahead != 0)
                ADVANCE(685);
            END_STATE();
        case 94:
            if(lookahead == '1')
                ADVANCE(100);
            if(lookahead == '3')
                ADVANCE(96);
            if(lookahead == '6')
                ADVANCE(98);
            if(lookahead == '8')
                ADVANCE(551);
            END_STATE();
        case 95:
            if(lookahead == '1')
                ADVANCE(101);
            if(lookahead == '3')
                ADVANCE(97);
            if(lookahead == '6')
                ADVANCE(99);
            if(lookahead == '8')
                ADVANCE(559);
            if(lookahead == 'e')
                ADVANCE(420);
            END_STATE();
        case 96:
            if(lookahead == '2')
                ADVANCE(565);
            END_STATE();
        case 97:
            if(lookahead == '2')
                ADVANCE(546);
            END_STATE();
        case 98:
            if(lookahead == '4')
                ADVANCE(568);
            END_STATE();
        case 99:
            if(lookahead == '4')
                ADVANCE(549);
            END_STATE();
        case 100:
            if(lookahead == '6')
                ADVANCE(562);
            END_STATE();
        case 101:
            if(lookahead == '6')
                ADVANCE(540);
            END_STATE();
        case 102:
            if(lookahead == ':')
                ADVANCE(579);
            END_STATE();
        case 103:
            if(lookahead == '<')
                ADVANCE(599);
            END_STATE();
        case 104:
            if(lookahead == 'B')
                ADVANCE(138);
            END_STATE();
        case 105:
            if(lookahead == 'E')
                ADVANCE(640);
            END_STATE();
        case 106:
            if(lookahead == 'E')
                ADVANCE(642);
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
                ADVANCE(315);
            END_STATE();
        case 111:
            if(lookahead == '_')
                ADVANCE(364);
            END_STATE();
        case 112:
            if(lookahead == '_')
                ADVANCE(319);
            END_STATE();
        case 113:
            if(lookahead == 'a')
                ADVANCE(437);
            if(lookahead == 'o')
                ADVANCE(329);
            if(lookahead == 'u')
                ADVANCE(438);
            END_STATE();
        case 114:
            if(lookahead == 'a')
                ADVANCE(513);
            END_STATE();
        case 115:
            if(lookahead == 'a')
                ADVANCE(255);
            END_STATE();
        case 116:
            if(lookahead == 'a')
                ADVANCE(285);
            if(lookahead == 'e')
                ADVANCE(118);
            END_STATE();
        case 117:
            if(lookahead == 'a')
                ADVANCE(470);
            END_STATE();
        case 118:
            if(lookahead == 'a')
                ADVANCE(182);
            END_STATE();
        case 119:
            if(lookahead == 'a')
                ADVANCE(400);
            END_STATE();
        case 120:
            if(lookahead == 'a')
                ADVANCE(424);
            END_STATE();
        case 121:
            if(lookahead == 'a')
                ADVANCE(297);
            END_STATE();
        case 122:
            if(lookahead == 'a')
                ADVANCE(426);
            END_STATE();
        case 123:
            if(lookahead == 'a')
                ADVANCE(401);
            END_STATE();
        case 124:
            if(lookahead == 'a')
                ADVANCE(500);
            END_STATE();
        case 125:
            if(lookahead == 'a')
                ADVANCE(405);
            END_STATE();
        case 126:
            if(lookahead == 'a')
                ADVANCE(299);
            END_STATE();
        case 127:
            if(lookahead == 'a')
                ADVANCE(298);
            END_STATE();
        case 128:
            if(lookahead == 'a')
                ADVANCE(337);
            END_STATE();
        case 129:
            if(lookahead == 'a')
                ADVANCE(450);
            END_STATE();
        case 130:
            if(lookahead == 'a')
                ADVANCE(350);
            END_STATE();
        case 131:
            if(lookahead == 'a')
                ADVANCE(350);
            if(lookahead == 'o')
                ADVANCE(175);
            END_STATE();
        case 132:
            if(lookahead == 'a')
                ADVANCE(479);
            END_STATE();
        case 133:
            if(lookahead == 'a')
                ADVANCE(481);
            END_STATE();
        case 134:
            if(lookahead == 'a')
                ADVANCE(167);
            END_STATE();
        case 135:
            if(lookahead == 'a')
                ADVANCE(327);
            END_STATE();
        case 136:
            if(lookahead == 'a')
                ADVANCE(328);
            END_STATE();
        case 137:
            if(lookahead == 'a')
                ADVANCE(165);
            END_STATE();
        case 138:
            if(lookahead == 'a')
                ADVANCE(443);
            END_STATE();
        case 139:
            if(lookahead == 'a')
                ADVANCE(314);
            END_STATE();
        case 140:
            if(lookahead == 'a')
                ADVANCE(314);
            if(lookahead == 'o')
                ADVANCE(274);
            END_STATE();
        case 141:
            if(lookahead == 'a')
                ADVANCE(288);
            END_STATE();
        case 142:
            if(lookahead == 'a')
                ADVANCE(501);
            END_STATE();
        case 143:
            if(lookahead == 'a')
                ADVANCE(489);
            END_STATE();
        case 144:
            if(lookahead == 'a')
                ADVANCE(289);
            END_STATE();
        case 145:
            if(lookahead == 'a')
                ADVANCE(154);
            END_STATE();
        case 146:
            if(lookahead == 'b')
                ADVANCE(444);
            END_STATE();
        case 147:
            if(lookahead == 'b')
                ADVANCE(444);
            if(lookahead == 'l')
                ADVANCE(268);
            END_STATE();
        case 148:
            if(lookahead == 'b')
                ADVANCE(444);
            if(lookahead == 't')
                ADVANCE(465);
            END_STATE();
        case 149:
            if(lookahead == 'b')
                ADVANCE(303);
            END_STATE();
        case 150:
            if(lookahead == 'b')
                ADVANCE(504);
            END_STATE();
        case 151:
            if(lookahead == 'b')
                ADVANCE(306);
            END_STATE();
        case 152:
            if(lookahead == 'b')
                ADVANCE(305);
            END_STATE();
        case 153:
            if(lookahead == 'b')
                ADVANCE(311);
            END_STATE();
        case 154:
            if(lookahead == 'b')
                ADVANCE(312);
            END_STATE();
        case 155:
            if(lookahead == 'c')
                ADVANCE(744);
            if(lookahead == 's')
                ADVANCE(258);
            END_STATE();
        case 156:
            if(lookahead == 'c')
                ADVANCE(257);
            END_STATE();
        case 157:
            if(lookahead == 'c')
                ADVANCE(474);
            END_STATE();
        case 158:
            if(lookahead == 'c')
                ADVANCE(121);
            END_STATE();
        case 159:
            if(lookahead == 'c')
                ADVANCE(121);
            if(lookahead == 'n')
                ADVANCE(247);
            END_STATE();
        case 160:
            if(lookahead == 'c')
                ADVANCE(121);
            if(lookahead == 'n')
                ADVANCE(253);
            END_STATE();
        case 161:
            if(lookahead == 'c')
                ADVANCE(211);
            END_STATE();
        case 162:
            if(lookahead == 'c')
                ADVANCE(486);
            END_STATE();
        case 163:
            if(lookahead == 'c')
                ADVANCE(454);
            END_STATE();
        case 164:
            if(lookahead == 'c')
                ADVANCE(457);
            END_STATE();
        case 165:
            if(lookahead == 'c')
                ADVANCE(460);
            END_STATE();
        case 166:
            if(lookahead == 'c')
                ADVANCE(196);
            END_STATE();
        case 167:
            if(lookahead == 'c')
                ADVANCE(205);
            END_STATE();
        case 168:
            if(lookahead == 'c')
                ADVANCE(132);
            END_STATE();
        case 169:
            if(lookahead == 'd')
                ADVANCE(675);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(521);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(680);
            END_STATE();
        case 170:
            if(lookahead == 'd')
                ADVANCE(699);
            END_STATE();
        case 171:
            if(lookahead == 'd')
                ADVANCE(555);
            END_STATE();
        case 172:
            if(lookahead == 'd')
                ADVANCE(760);
            END_STATE();
        case 173:
            if(lookahead == 'd')
                ADVANCE(714);
            END_STATE();
        case 174:
            if(lookahead == 'd')
                ADVANCE(62);
            END_STATE();
        case 175:
            if(lookahead == 'd')
                ADVANCE(503);
            END_STATE();
        case 176:
            if(lookahead == 'd')
                ADVANCE(387);
            if(lookahead == 'l')
                ADVANCE(375);
            END_STATE();
        case 177:
            if(lookahead == 'd')
                ADVANCE(218);
            END_STATE();
        case 178:
            if(lookahead == 'd')
                ADVANCE(208);
            if(lookahead == 'i')
                ADVANCE(172);
            if(lookahead == 'n')
                ADVANCE(135);
            if(lookahead == 'p')
                ADVANCE(417);
            END_STATE();
        case 179:
            if(lookahead == 'd')
                ADVANCE(208);
            if(lookahead == 'i')
                ADVANCE(172);
            if(lookahead == 'p')
                ADVANCE(417);
            END_STATE();
        case 180:
            if(lookahead == 'd')
                ADVANCE(221);
            END_STATE();
        case 181:
            if(lookahead == 'd')
                ADVANCE(233);
            END_STATE();
        case 182:
            if(lookahead == 'd')
                ADVANCE(374);
            END_STATE();
        case 183:
            if(lookahead == 'd')
                ADVANCE(238);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(241);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(509);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(758);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(777);
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
                ADVANCE(511);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(572);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(723);
            END_STATE();
        case 193:
            if(lookahead == 'e')
                ADVANCE(784);
            END_STATE();
        case 194:
            if(lookahead == 'e')
                ADVANCE(746);
            END_STATE();
        case 195:
            if(lookahead == 'e')
                ADVANCE(775);
            END_STATE();
        case 196:
            if(lookahead == 'e')
                ADVANCE(591);
            END_STATE();
        case 197:
            if(lookahead == 'e')
                ADVANCE(724);
            END_STATE();
        case 198:
            if(lookahead == 'e')
                ADVANCE(770);
            END_STATE();
        case 199:
            if(lookahead == 'e')
                ADVANCE(708);
            END_STATE();
        case 200:
            if(lookahead == 'e')
                ADVANCE(728);
            END_STATE();
        case 201:
            if(lookahead == 'e')
                ADVANCE(726);
            END_STATE();
        case 202:
            if(lookahead == 'e')
                ADVANCE(574);
            END_STATE();
        case 203:
            if(lookahead == 'e')
                ADVANCE(741);
            END_STATE();
        case 204:
            if(lookahead == 'e')
                ADVANCE(179);
            END_STATE();
        case 205:
            if(lookahead == 'e')
                ADVANCE(694);
            END_STATE();
        case 206:
            if(lookahead == 'e')
                ADVANCE(786);
            END_STATE();
        case 207:
            if(lookahead == 'e')
                ADVANCE(110);
            END_STATE();
        case 208:
            if(lookahead == 'e')
                ADVANCE(240);
            END_STATE();
        case 209:
            if(lookahead == 'e')
                ADVANCE(423);
            END_STATE();
        case 210:
            if(lookahead == 'e')
                ADVANCE(243);
            END_STATE();
        case 211:
            if(lookahead == 'e')
                ADVANCE(393);
            END_STATE();
        case 212:
            if(lookahead == 'e')
                ADVANCE(171);
            END_STATE();
        case 213:
            if(lookahead == 'e')
                ADVANCE(302);
            END_STATE();
        case 214:
            if(lookahead == 'e')
                ADVANCE(427);
            END_STATE();
        case 215:
            if(lookahead == 'e')
                ADVANCE(516);
            END_STATE();
        case 216:
            if(lookahead == 'e')
                ADVANCE(428);
            END_STATE();
        case 217:
            if(lookahead == 'e')
                ADVANCE(174);
            END_STATE();
        case 218:
            if(lookahead == 'e')
                ADVANCE(402);
            END_STATE();
        case 219:
            if(lookahead == 'e')
                ADVANCE(359);
            END_STATE();
        case 220:
            if(lookahead == 'e')
                ADVANCE(429);
            END_STATE();
        case 221:
            if(lookahead == 'e')
                ADVANCE(430);
            END_STATE();
        case 222:
            if(lookahead == 'e')
                ADVANCE(432);
            END_STATE();
        case 223:
            if(lookahead == 'e')
                ADVANCE(128);
            END_STATE();
        case 224:
            if(lookahead == 'e')
                ADVANCE(420);
            END_STATE();
        case 225:
            if(lookahead == 'e')
                ADVANCE(433);
            END_STATE();
        case 226:
            if(lookahead == 'e')
                ADVANCE(434);
            END_STATE();
        case 227:
            if(lookahead == 'e')
                ADVANCE(452);
            END_STATE();
        case 228:
            if(lookahead == 'e')
                ADVANCE(435);
            END_STATE();
        case 229:
            if(lookahead == 'e')
                ADVANCE(455);
            END_STATE();
        case 230:
            if(lookahead == 'e')
                ADVANCE(468);
            END_STATE();
        case 231:
            if(lookahead == 'e')
                ADVANCE(355);
            END_STATE();
        case 232:
            if(lookahead == 'e')
                ADVANCE(163);
            END_STATE();
        case 233:
            if(lookahead == 'e')
                ADVANCE(244);
            END_STATE();
        case 234:
            if(lookahead == 'e')
                ADVANCE(357);
            END_STATE();
        case 235:
            if(lookahead == 'e')
                ADVANCE(413);
            END_STATE();
        case 236:
            if(lookahead == 'e')
                ADVANCE(415);
            END_STATE();
        case 237:
            if(lookahead == 'e')
                ADVANCE(488);
            END_STATE();
        case 238:
            if(lookahead == 'e')
                ADVANCE(246);
            END_STATE();
        case 239:
            if(lookahead == 'e')
                ADVANCE(491);
            if(lookahead == 'h')
                ADVANCE(370);
            if(lookahead == 't')
                ADVANCE(408);
            if(lookahead == 'u')
                ADVANCE(397);
            END_STATE();
        case 240:
            if(lookahead == 'f')
                ADVANCE(750);
            END_STATE();
        case 241:
            if(lookahead == 'f')
                ADVANCE(124);
            END_STATE();
        case 242:
            if(lookahead == 'f')
                ADVANCE(282);
            if(lookahead == 'm')
                ADVANCE(122);
            if(lookahead == 's')
                ADVANCE(229);
            END_STATE();
        case 243:
            if(lookahead == 'f')
                ADVANCE(267);
            END_STATE();
        case 244:
            if(lookahead == 'f')
                ADVANCE(287);
            END_STATE();
        case 245:
            if(lookahead == 'f')
                ADVANCE(134);
            END_STATE();
        case 246:
            if(lookahead == 'f')
                ADVANCE(142);
            END_STATE();
        case 247:
            if(lookahead == 'g')
                ADVANCE(542);
            END_STATE();
        case 248:
            if(lookahead == 'g')
                ADVANCE(580);
            END_STATE();
        case 249:
            if(lookahead == 'g')
                ADVANCE(582);
            END_STATE();
        case 250:
            if(lookahead == 'g')
                ADVANCE(548);
            END_STATE();
        case 251:
            if(lookahead == 'g')
                ADVANCE(564);
            END_STATE();
        case 252:
            if(lookahead == 'g')
                ADVANCE(567);
            END_STATE();
        case 253:
            if(lookahead == 'g')
                ADVANCE(544);
            END_STATE();
        case 254:
            if(lookahead == 'g')
                ADVANCE(356);
            END_STATE();
        case 255:
            if(lookahead == 'g')
                ADVANCE(216);
            END_STATE();
        case 256:
            if(lookahead == 'g')
                ADVANCE(361);
            END_STATE();
        case 257:
            if(lookahead == 'h')
                ADVANCE(756);
            END_STATE();
        case 258:
            if(lookahead == 'h')
                ADVANCE(225);
            END_STATE();
        case 259:
            if(lookahead == 'h')
                ADVANCE(123);
            END_STATE();
        case 260:
            if(lookahead == 'h')
                ADVANCE(385);
            END_STATE();
        case 261:
            if(lookahead == 'i')
                ADVANCE(334);
            if(lookahead == 'o')
                ADVANCE(507);
            END_STATE();
        case 262:
            if(lookahead == 'i')
                ADVANCE(155);
            END_STATE();
        case 263:
            if(lookahead == 'i')
                ADVANCE(354);
            if(lookahead == 'n')
                ADVANCE(271);
            if(lookahead == 's')
                ADVANCE(209);
            END_STATE();
        case 264:
            if(lookahead == 'i')
                ADVANCE(445);
            if(lookahead == 'o')
                ADVANCE(366);
            END_STATE();
        case 265:
            if(lookahead == 'i')
                ADVANCE(150);
            END_STATE();
        case 266:
            if(lookahead == 'i')
                ADVANCE(508);
            END_STATE();
        case 267:
            if(lookahead == 'i')
                ADVANCE(510);
            END_STATE();
        case 268:
            if(lookahead == 'i')
                ADVANCE(120);
            END_STATE();
        case 269:
            if(lookahead == 'i')
                ADVANCE(254);
            END_STATE();
        case 270:
            if(lookahead == 'i')
                ADVANCE(371);
            END_STATE();
        case 271:
            if(lookahead == 'i')
                ADVANCE(371);
            if(lookahead == 's')
                ADVANCE(269);
            END_STATE();
        case 272:
            if(lookahead == 'i')
                ADVANCE(333);
            END_STATE();
        case 273:
            if(lookahead == 'i')
                ADVANCE(333);
            if(lookahead == 'o')
                ADVANCE(507);
            END_STATE();
        case 274:
            if(lookahead == 'i')
                ADVANCE(170);
            END_STATE();
        case 275:
            if(lookahead == 'i')
                ADVANCE(345);
            if(lookahead == 'u')
                ADVANCE(164);
            END_STATE();
        case 276:
            if(lookahead == 'i')
                ADVANCE(394);
            END_STATE();
        case 277:
            if(lookahead == 'i')
                ADVANCE(469);
            END_STATE();
        case 278:
            if(lookahead == 'i')
                ADVANCE(467);
            END_STATE();
        case 279:
            if(lookahead == 'i')
                ADVANCE(256);
            END_STATE();
        case 280:
            if(lookahead == 'i')
                ADVANCE(347);
            END_STATE();
        case 281:
            if(lookahead == 'i')
                ADVANCE(436);
            END_STATE();
        case 282:
            if(lookahead == 'i')
                ADVANCE(213);
            END_STATE();
        case 283:
            if(lookahead == 'i')
                ADVANCE(464);
            END_STATE();
        case 284:
            if(lookahead == 'i')
                ADVANCE(471);
            END_STATE();
        case 285:
            if(lookahead == 'i')
                ADVANCE(439);
            END_STATE();
        case 286:
            if(lookahead == 'i')
                ADVANCE(180);
            END_STATE();
        case 287:
            if(lookahead == 'i')
                ADVANCE(358);
            END_STATE();
        case 288:
            if(lookahead == 'i')
                ADVANCE(440);
            END_STATE();
        case 289:
            if(lookahead == 'i')
                ADVANCE(442);
            END_STATE();
        case 290:
            if(lookahead == 'i')
                ADVANCE(484);
            END_STATE();
        case 291:
            if(lookahead == 'i')
                ADVANCE(376);
            END_STATE();
        case 292:
            if(lookahead == 'i')
                ADVANCE(377);
            END_STATE();
        case 293:
            if(lookahead == 'i')
                ADVANCE(490);
            END_STATE();
        case 294:
            if(lookahead == 'j')
                ADVANCE(232);
            END_STATE();
        case 295:
            if(lookahead == 'k')
                ADVANCE(715);
            END_STATE();
        case 296:
            if(lookahead == 'k')
                ADVANCE(215);
            END_STATE();
        case 297:
            if(lookahead == 'l')
                ADVANCE(691);
            END_STATE();
        case 298:
            if(lookahead == 'l')
                ADVANCE(754);
            END_STATE();
        case 299:
            if(lookahead == 'l')
                ADVANCE(111);
            END_STATE();
        case 300:
            if(lookahead == 'l')
                ADVANCE(496);
            END_STATE();
        case 301:
            if(lookahead == 'l')
                ADVANCE(515);
            END_STATE();
        case 302:
            if(lookahead == 'l')
                ADVANCE(173);
            END_STATE();
        case 303:
            if(lookahead == 'l')
                ADVANCE(262);
            END_STATE();
        case 304:
            if(lookahead == 'l')
                ADVANCE(223);
            END_STATE();
        case 305:
            if(lookahead == 'l')
                ADVANCE(281);
            END_STATE();
        case 306:
            if(lookahead == 'l')
                ADVANCE(191);
            END_STATE();
        case 307:
            if(lookahead == 'l')
                ADVANCE(192);
            END_STATE();
        case 308:
            if(lookahead == 'l')
                ADVANCE(459);
            END_STATE();
        case 309:
            if(lookahead == 'l')
                ADVANCE(195);
            END_STATE();
        case 310:
            if(lookahead == 'l')
                ADVANCE(492);
            END_STATE();
        case 311:
            if(lookahead == 'l')
                ADVANCE(202);
            END_STATE();
        case 312:
            if(lookahead == 'l')
                ADVANCE(203);
            END_STATE();
        case 313:
            if(lookahead == 'l')
                ADVANCE(473);
            END_STATE();
        case 314:
            if(lookahead == 'l')
                ADVANCE(505);
            END_STATE();
        case 315:
            if(lookahead == 'l')
                ADVANCE(290);
            END_STATE();
        case 316:
            if(lookahead == 'l')
                ADVANCE(375);
            END_STATE();
        case 317:
            if(lookahead == 'l')
                ADVANCE(378);
            if(lookahead == 's')
                ADVANCE(260);
            END_STATE();
        case 318:
            if(lookahead == 'l')
                ADVANCE(380);
            END_STATE();
        case 319:
            if(lookahead == 'l')
                ADVANCE(293);
            END_STATE();
        case 320:
            if(lookahead == 'm')
                ADVANCE(395);
            if(lookahead == 'n')
                ADVANCE(463);
            END_STATE();
        case 321:
            if(lookahead == 'm')
                ADVANCE(395);
            if(lookahead == 'n')
                ADVANCE(483);
            END_STATE();
        case 322:
            if(lookahead == 'm')
                ADVANCE(734);
            END_STATE();
        case 323:
            if(lookahead == 'm')
                ADVANCE(739);
            END_STATE();
        case 324:
            if(lookahead == 'm')
                ADVANCE(277);
            if(lookahead == 'n')
                ADVANCE(493);
            if(lookahead == 'x')
                ADVANCE(161);
            END_STATE();
        case 325:
            if(lookahead == 'm')
                ADVANCE(187);
            END_STATE();
        case 326:
            if(lookahead == 'm')
                ADVANCE(220);
            END_STATE();
        case 327:
            if(lookahead == 'm')
                ADVANCE(197);
            END_STATE();
        case 328:
            if(lookahead == 'm')
                ADVANCE(228);
            END_STATE();
        case 329:
            if(lookahead == 'm')
                ADVANCE(392);
            if(lookahead == 'n')
                ADVANCE(422);
            END_STATE();
        case 330:
            if(lookahead == 'm')
                ADVANCE(392);
            if(lookahead == 'n')
                ADVANCE(441);
            END_STATE();
        case 331:
            if(lookahead == 'm')
                ADVANCE(122);
            END_STATE();
        case 332:
            if(lookahead == 'm')
                ADVANCE(122);
            if(lookahead == 's')
                ADVANCE(229);
            END_STATE();
        case 333:
            if(lookahead == 'm')
                ADVANCE(125);
            END_STATE();
        case 334:
            if(lookahead == 'm')
                ADVANCE(125);
            if(lookahead == 'v')
                ADVANCE(133);
            END_STATE();
        case 335:
            if(lookahead == 'n')
                ADVANCE(702);
            END_STATE();
        case 336:
            if(lookahead == 'n')
                ADVANCE(732);
            END_STATE();
        case 337:
            if(lookahead == 'n')
                ADVANCE(553);
            END_STATE();
        case 338:
            if(lookahead == 'n')
                ADVANCE(687);
            END_STATE();
        case 339:
            if(lookahead == 'n')
                ADVANCE(717);
            END_STATE();
        case 340:
            if(lookahead == 'n')
                ADVANCE(701);
            END_STATE();
        case 341:
            if(lookahead == 'n')
                ADVANCE(493);
            if(lookahead == 'x')
                ADVANCE(161);
            END_STATE();
        case 342:
            if(lookahead == 'n')
                ADVANCE(177);
            if(lookahead == 'x')
                ADVANCE(212);
            END_STATE();
        case 343:
            if(lookahead == 'n')
                ADVANCE(346);
            END_STATE();
        case 344:
            if(lookahead == 'n')
                ADVANCE(168);
            END_STATE();
        case 345:
            if(lookahead == 'n')
                ADVANCE(248);
            END_STATE();
        case 346:
            if(lookahead == 'n')
                ADVANCE(379);
            END_STATE();
        case 347:
            if(lookahead == 'n')
                ADVANCE(249);
            END_STATE();
        case 348:
            if(lookahead == 'n')
                ADVANCE(250);
            END_STATE();
        case 349:
            if(lookahead == 'n')
                ADVANCE(301);
            END_STATE();
        case 350:
            if(lookahead == 'n')
                ADVANCE(115);
            END_STATE();
        case 351:
            if(lookahead == 'n')
                ADVANCE(115);
            if(lookahead == 'p')
                ADVANCE(593);
            END_STATE();
        case 352:
            if(lookahead == 'n')
                ADVANCE(251);
            END_STATE();
        case 353:
            if(lookahead == 'n')
                ADVANCE(252);
            END_STATE();
        case 354:
            if(lookahead == 'n')
                ADVANCE(447);
            END_STATE();
        case 355:
            if(lookahead == 'n')
                ADVANCE(480);
            END_STATE();
        case 356:
            if(lookahead == 'n')
                ADVANCE(217);
            END_STATE();
        case 357:
            if(lookahead == 'n')
                ADVANCE(461);
            END_STATE();
        case 358:
            if(lookahead == 'n')
                ADVANCE(206);
            END_STATE();
        case 359:
            if(lookahead == 'n')
                ADVANCE(166);
            END_STATE();
        case 360:
            if(lookahead == 'n')
                ADVANCE(270);
            END_STATE();
        case 361:
            if(lookahead == 'n')
                ADVANCE(383);
            END_STATE();
        case 362:
            if(lookahead == 'n')
                ADVANCE(483);
            END_STATE();
        case 363:
            if(lookahead == 'n')
                ADVANCE(234);
            END_STATE();
        case 364:
            if(lookahead == 'n')
                ADVANCE(136);
            END_STATE();
        case 365:
            if(lookahead == 'o')
                ADVANCE(325);
            END_STATE();
        case 366:
            if(lookahead == 'o')
                ADVANCE(304);
            END_STATE();
        case 367:
            if(lookahead == 'o')
                ADVANCE(330);
            if(lookahead == 'u')
                ADVANCE(438);
            END_STATE();
        case 368:
            if(lookahead == 'o')
                ADVANCE(323);
            END_STATE();
        case 369:
            if(lookahead == 'o')
                ADVANCE(129);
            END_STATE();
        case 370:
            if(lookahead == 'o')
                ADVANCE(411);
            END_STATE();
        case 371:
            if(lookahead == 'o')
                ADVANCE(336);
            END_STATE();
        case 372:
            if(lookahead == 'o')
                ADVANCE(363);
            END_STATE();
        case 373:
            if(lookahead == 'o')
                ADVANCE(404);
            END_STATE();
        case 374:
            if(lookahead == 'o')
                ADVANCE(349);
            END_STATE();
        case 375:
            if(lookahead == 'o')
                ADVANCE(348);
            END_STATE();
        case 376:
            if(lookahead == 'o')
                ADVANCE(338);
            END_STATE();
        case 377:
            if(lookahead == 'o')
                ADVANCE(339);
            END_STATE();
        case 378:
            if(lookahead == 'o')
                ADVANCE(352);
            END_STATE();
        case 379:
            if(lookahead == 'o')
                ADVANCE(478);
            END_STATE();
        case 380:
            if(lookahead == 'o')
                ADVANCE(353);
            END_STATE();
        case 381:
            if(lookahead == 'o')
                ADVANCE(158);
            END_STATE();
        case 382:
            if(lookahead == 'o')
                ADVANCE(414);
            END_STATE();
        case 383:
            if(lookahead == 'o')
                ADVANCE(419);
            END_STATE();
        case 384:
            if(lookahead == 'o')
                ADVANCE(416);
            END_STATE();
        case 385:
            if(lookahead == 'o')
                ADVANCE(418);
            END_STATE();
        case 386:
            if(lookahead == 'o')
                ADVANCE(160);
            END_STATE();
        case 387:
            if(lookahead == 'o')
                ADVANCE(506);
            END_STATE();
        case 388:
            if(lookahead == 'p')
                ADVANCE(188);
            END_STATE();
        case 389:
            if(lookahead == 'p')
                ADVANCE(200);
            END_STATE();
        case 390:
            if(lookahead == 'p')
                ADVANCE(201);
            END_STATE();
        case 391:
            if(lookahead == 'p')
                ADVANCE(204);
            END_STATE();
        case 392:
            if(lookahead == 'p')
                ADVANCE(372);
            END_STATE();
        case 393:
            if(lookahead == 'p')
                ADVANCE(477);
            END_STATE();
        case 394:
            if(lookahead == 'p')
                ADVANCE(309);
            END_STATE();
        case 395:
            if(lookahead == 'p')
                ADVANCE(382);
            END_STATE();
        case 396:
            if(lookahead == 'p')
                ADVANCE(384);
            END_STATE();
        case 397:
            if(lookahead == 'p')
                ADVANCE(396);
            END_STATE();
        case 398:
            if(lookahead == 'q')
                ADVANCE(498);
            if(lookahead == 't')
                ADVANCE(421);
            END_STATE();
        case 399:
            if(lookahead == 'r')
                ADVANCE(275);
            END_STATE();
        case 400:
            if(lookahead == 'r')
                ADVANCE(575);
            END_STATE();
        case 401:
            if(lookahead == 'r')
                ADVANCE(577);
            END_STATE();
        case 402:
            if(lookahead == 'r')
                ADVANCE(783);
            END_STATE();
        case 403:
            if(lookahead == 'r')
                ADVANCE(273);
            if(lookahead == 'u')
                ADVANCE(152);
            END_STATE();
        case 404:
            if(lookahead == 'r')
                ADVANCE(514);
            END_STATE();
        case 405:
            if(lookahead == 'r')
                ADVANCE(517);
            END_STATE();
        case 406:
            if(lookahead == 'r')
                ADVANCE(265);
            END_STATE();
        case 407:
            if(lookahead == 'r')
                ADVANCE(141);
            END_STATE();
        case 408:
            if(lookahead == 'r')
                ADVANCE(502);
            END_STATE();
        case 409:
            if(lookahead == 'r')
                ADVANCE(137);
            END_STATE();
        case 410:
            if(lookahead == 'r')
                ADVANCE(280);
            END_STATE();
        case 411:
            if(lookahead == 'r')
                ADVANCE(453);
            END_STATE();
        case 412:
            if(lookahead == 'r')
                ADVANCE(272);
            END_STATE();
        case 413:
            if(lookahead == 'r')
                ADVANCE(126);
            END_STATE();
        case 414:
            if(lookahead == 'r')
                ADVANCE(456);
            END_STATE();
        case 415:
            if(lookahead == 'r')
                ADVANCE(127);
            END_STATE();
        case 416:
            if(lookahead == 'r')
                ADVANCE(475);
            END_STATE();
        case 417:
            if(lookahead == 'r')
                ADVANCE(210);
            END_STATE();
        case 418:
            if(lookahead == 'r')
                ADVANCE(462);
            END_STATE();
        case 419:
            if(lookahead == 'r')
                ADVANCE(207);
            END_STATE();
        case 420:
            if(lookahead == 'r')
                ADVANCE(245);
            END_STATE();
        case 421:
            if(lookahead == 'r')
                ADVANCE(144);
            END_STATE();
        case 422:
            if(lookahead == 's')
                ADVANCE(449);
            if(lookahead == 't')
                ADVANCE(190);
            END_STATE();
        case 423:
            if(lookahead == 's')
                ADVANCE(774);
            END_STATE();
        case 424:
            if(lookahead == 's')
                ADVANCE(738);
            END_STATE();
        case 425:
            if(lookahead == 's')
                ADVANCE(779);
            END_STATE();
        case 426:
            if(lookahead == 's')
                ADVANCE(295);
            END_STATE();
        case 427:
            if(lookahead == 's')
                ADVANCE(705);
            END_STATE();
        case 428:
            if(lookahead == 's')
                ADVANCE(778);
            END_STATE();
        case 429:
            if(lookahead == 's')
                ADVANCE(781);
            END_STATE();
        case 430:
            if(lookahead == 's')
                ADVANCE(773);
            END_STATE();
        case 431:
            if(lookahead == 's')
                ADVANCE(743);
            END_STATE();
        case 432:
            if(lookahead == 's')
                ADVANCE(710);
            END_STATE();
        case 433:
            if(lookahead == 's')
                ADVANCE(780);
            END_STATE();
        case 434:
            if(lookahead == 's')
                ADVANCE(711);
            END_STATE();
        case 435:
            if(lookahead == 's')
                ADVANCE(755);
            END_STATE();
        case 436:
            if(lookahead == 's')
                ADVANCE(258);
            END_STATE();
        case 437:
            if(lookahead == 's')
                ADVANCE(186);
            END_STATE();
        case 438:
            if(lookahead == 's')
                ADVANCE(472);
            END_STATE();
        case 439:
            if(lookahead == 's')
                ADVANCE(214);
            END_STATE();
        case 440:
            if(lookahead == 's')
                ADVANCE(222);
            END_STATE();
        case 441:
            if(lookahead == 's')
                ADVANCE(448);
            END_STATE();
        case 442:
            if(lookahead == 's')
                ADVANCE(226);
            END_STATE();
        case 443:
            if(lookahead == 's')
                ADVANCE(198);
            END_STATE();
        case 444:
            if(lookahead == 's')
                ADVANCE(487);
            END_STATE();
        case 445:
            if(lookahead == 't')
                ADVANCE(242);
            END_STATE();
        case 446:
            if(lookahead == 't')
                ADVANCE(703);
            END_STATE();
        case 447:
            if(lookahead == 't')
                ADVANCE(94);
            END_STATE();
        case 448:
            if(lookahead == 't')
                ADVANCE(736);
            END_STATE();
        case 449:
            if(lookahead == 't')
                ADVANCE(736);
            if(lookahead == 'u')
                ADVANCE(326);
            END_STATE();
        case 450:
            if(lookahead == 't')
                ADVANCE(570);
            END_STATE();
        case 451:
            if(lookahead == 't')
                ADVANCE(704);
            END_STATE();
        case 452:
            if(lookahead == 't')
                ADVANCE(557);
            END_STATE();
        case 453:
            if(lookahead == 't')
                ADVANCE(538);
            END_STATE();
        case 454:
            if(lookahead == 't')
                ADVANCE(765);
            END_STATE();
        case 455:
            if(lookahead == 't')
                ADVANCE(712);
            END_STATE();
        case 456:
            if(lookahead == 't')
                ADVANCE(763);
            END_STATE();
        case 457:
            if(lookahead == 't')
                ADVANCE(730);
            END_STATE();
        case 458:
            if(lookahead == 't')
                ADVANCE(769);
            END_STATE();
        case 459:
            if(lookahead == 't')
                ADVANCE(718);
            END_STATE();
        case 460:
            if(lookahead == 't')
                ADVANCE(692);
            END_STATE();
        case 461:
            if(lookahead == 't')
                ADVANCE(772);
            END_STATE();
        case 462:
            if(lookahead == 't')
                ADVANCE(561);
            END_STATE();
        case 463:
            if(lookahead == 't')
                ADVANCE(95);
            END_STATE();
        case 464:
            if(lookahead == 't')
                ADVANCE(332);
            END_STATE();
        case 465:
            if(lookahead == 't')
                ADVANCE(406);
            END_STATE();
        case 466:
            if(lookahead == 't')
                ADVANCE(518);
            END_STATE();
        case 467:
            if(lookahead == 't')
                ADVANCE(156);
            END_STATE();
        case 468:
            if(lookahead == 't')
                ADVANCE(407);
            END_STATE();
        case 469:
            if(lookahead == 't')
                ADVANCE(425);
            END_STATE();
        case 470:
            if(lookahead == 't')
                ADVANCE(266);
            END_STATE();
        case 471:
            if(lookahead == 't')
                ADVANCE(331);
            END_STATE();
        case 472:
            if(lookahead == 't')
                ADVANCE(368);
            END_STATE();
        case 473:
            if(lookahead == 't')
                ADVANCE(276);
            END_STATE();
        case 474:
            if(lookahead == 't')
                ADVANCE(227);
            END_STATE();
        case 475:
            if(lookahead == 't')
                ADVANCE(431);
            END_STATE();
        case 476:
            if(lookahead == 't')
                ADVANCE(408);
            if(lookahead == 'u')
                ADVANCE(397);
            END_STATE();
        case 477:
            if(lookahead == 't')
                ADVANCE(291);
            END_STATE();
        case 478:
            if(lookahead == 't')
                ADVANCE(143);
            END_STATE();
        case 479:
            if(lookahead == 't')
                ADVANCE(145);
            END_STATE();
        case 480:
            if(lookahead == 't')
                ADVANCE(466);
            END_STATE();
        case 481:
            if(lookahead == 't')
                ADVANCE(194);
            END_STATE();
        case 482:
            if(lookahead == 't')
                ADVANCE(199);
            END_STATE();
        case 483:
            if(lookahead == 't')
                ADVANCE(224);
            END_STATE();
        case 484:
            if(lookahead == 't')
                ADVANCE(235);
            END_STATE();
        case 485:
            if(lookahead == 't')
                ADVANCE(410);
            END_STATE();
        case 486:
            if(lookahead == 't')
                ADVANCE(373);
            END_STATE();
        case 487:
            if(lookahead == 't')
                ADVANCE(409);
            END_STATE();
        case 488:
            if(lookahead == 't')
                ADVANCE(519);
            END_STATE();
        case 489:
            if(lookahead == 't')
                ADVANCE(292);
            END_STATE();
        case 490:
            if(lookahead == 't')
                ADVANCE(236);
            END_STATE();
        case 491:
            if(lookahead == 't')
                ADVANCE(421);
            END_STATE();
        case 492:
            if(lookahead == 't')
                ADVANCE(112);
            END_STATE();
        case 493:
            if(lookahead == 'u')
                ADVANCE(322);
            END_STATE();
        case 494:
            if(lookahead == 'u')
                ADVANCE(344);
            END_STATE();
        case 495:
            if(lookahead == 'u')
                ADVANCE(446);
            END_STATE();
        case 496:
            if(lookahead == 'u')
                ADVANCE(189);
            END_STATE();
        case 497:
            if(lookahead == 'u')
                ADVANCE(451);
            END_STATE();
        case 498:
            if(lookahead == 'u')
                ADVANCE(219);
            END_STATE();
        case 499:
            if(lookahead == 'u')
                ADVANCE(151);
            END_STATE();
        case 500:
            if(lookahead == 'u')
                ADVANCE(308);
            END_STATE();
        case 501:
            if(lookahead == 'u')
                ADVANCE(310);
            END_STATE();
        case 502:
            if(lookahead == 'u')
                ADVANCE(164);
            END_STATE();
        case 503:
            if(lookahead == 'u')
                ADVANCE(307);
            END_STATE();
        case 504:
            if(lookahead == 'u')
                ADVANCE(482);
            END_STATE();
        case 505:
            if(lookahead == 'u')
                ADVANCE(237);
            END_STATE();
        case 506:
            if(lookahead == 'u')
                ADVANCE(153);
            END_STATE();
        case 507:
            if(lookahead == 'v')
                ADVANCE(286);
            END_STATE();
        case 508:
            if(lookahead == 'v')
                ADVANCE(193);
            END_STATE();
        case 509:
            if(lookahead == 'w')
                ADVANCE(114);
            END_STATE();
        case 510:
            if(lookahead == 'x')
                ADVANCE(762);
            END_STATE();
        case 511:
            if(lookahead == 'x')
                ADVANCE(458);
            END_STATE();
        case 512:
            if(lookahead == 'y')
                ADVANCE(588);
            END_STATE();
        case 513:
            if(lookahead == 'y')
                ADVANCE(767);
            END_STATE();
        case 514:
            if(lookahead == 'y')
                ADVANCE(748);
            END_STATE();
        case 515:
            if(lookahead == 'y')
                ADVANCE(706);
            END_STATE();
        case 516:
            if(lookahead == 'y')
                ADVANCE(782);
            END_STATE();
        case 517:
            if(lookahead == 'y')
                ADVANCE(296);
            END_STATE();
        case 518:
            if(lookahead == 'y')
                ADVANCE(389);
            END_STATE();
        case 519:
            if(lookahead == 'y')
                ADVANCE(390);
            END_STATE();
        case 520:
            if(lookahead == 'y')
                ADVANCE(391);
            END_STATE();
        case 521:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(521);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(680);
            END_STATE();
        case 522:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(656);
            END_STATE();
        case 523:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(644);
            END_STATE();
        case 524:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(650);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(664);
            END_STATE();
        case 525:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(658);
            END_STATE();
        case 526:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(664);
            END_STATE();
        case 527:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(646);
            END_STATE();
        case 528:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(685);
            END_STATE();
        case 529:
            if(eof)
                ADVANCE(537);
            if(lookahead == '\n')
                SKIP(0);
            END_STATE();
        case 530:
            if(eof)
                ADVANCE(537);
            if(lookahead == '\n')
                SKIP(0);
            if(lookahead == '\r')
                SKIP(529);
            END_STATE();
        case 531:
            if(eof)
                ADVANCE(537);
            if(lookahead == '\n')
                SKIP(535);
            END_STATE();
        case 532:
            if(eof)
                ADVANCE(537);
            if(lookahead == '\n')
                SKIP(535);
            if(lookahead == '\r')
                SKIP(531);
            END_STATE();
        case 533:
            if(eof)
                ADVANCE(537);
            if(lookahead == '\n')
                SKIP(536);
            END_STATE();
        case 534:
            if(eof)
                ADVANCE(537);
            if(lookahead == '\n')
                SKIP(536);
            if(lookahead == '\r')
                SKIP(533);
            END_STATE();
        case 535:
            if(eof)
                ADVANCE(537);
            ADVANCE_MAP(
                '"', 612,
                '#', 169,
                '$', 597,
                '%', 606,
                ')', 608,
                '*', 604,
                '+', 600,
                ',', 590,
                '-', 602,
                '/', 605,
                ':', 697,
                ';', 698,
                '<', 103,
                '=', 722,
                '>', 587,
                '@', 721,
                'L', 610,
                '[', 752,
            );
            if(lookahead == '\\')
                SKIP(532);
            if(lookahead == ']')
                ADVANCE(753);
            if(lookahead == '^')
                ADVANCE(596);
            if(lookahead == 'a')
                ADVANCE(148);
            if(lookahead == 'b')
                ADVANCE(264);
            if(lookahead == 'c')
                ADVANCE(113);
            if(lookahead == 'd')
                ADVANCE(184);
            if(lookahead == 'e')
                ADVANCE(324);
            if(lookahead == 'g')
                ADVANCE(230);
            if(lookahead == 'h')
                ADVANCE(365);
            if(lookahead == 'i')
                ADVANCE(320);
            if(lookahead == 'l')
                ADVANCE(386);
            if(lookahead == 'm')
                ADVANCE(131);
            if(lookahead == 'n')
                ADVANCE(117);
            if(lookahead == 'o')
                ADVANCE(157);
            if(lookahead == 'p')
                ADVANCE(403);
            if(lookahead == 'r')
                ADVANCE(116);
            if(lookahead == 's')
                ADVANCE(239);
            if(lookahead == 't')
                ADVANCE(520);
            if(lookahead == 'u')
                ADVANCE(263);
            if(lookahead == 'v')
                ADVANCE(140);
            if(lookahead == '{')
                ADVANCE(689);
            if(lookahead == '|')
                ADVANCE(595);
            if(lookahead == '}')
                ADVANCE(690);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(535);
            END_STATE();
        case 536:
            if(eof)
                ADVANCE(537);
            ADVANCE_MAP(
                '#', 181,
                '$', 597,
                '%', 606,
                ')', 608,
                '*', 604,
                '+', 600,
                ',', 590,
                '-', 602,
                '/', 605,
                ':', 696,
                ';', 698,
                '<', 103,
                '>', 587,
                '@', 721,
            );
            if(lookahead == '\\')
                SKIP(534);
            if(lookahead == ']')
                ADVANCE(753);
            if(lookahead == '^')
                ADVANCE(596);
            if(lookahead == 'a')
                ADVANCE(147);
            if(lookahead == 'b')
                ADVANCE(283);
            if(lookahead == 'c')
                ADVANCE(367);
            if(lookahead == 'e')
                ADVANCE(341);
            if(lookahead == 'h')
                ADVANCE(365);
            if(lookahead == 'i')
                ADVANCE(321);
            if(lookahead == 'l')
                ADVANCE(381);
            if(lookahead == 'm')
                ADVANCE(131);
            if(lookahead == 'n')
                ADVANCE(117);
            if(lookahead == 's')
                ADVANCE(476);
            if(lookahead == 't')
                ADVANCE(520);
            if(lookahead == 'u')
                ADVANCE(360);
            if(lookahead == 'v')
                ADVANCE(139);
            if(lookahead == '{')
                ADVANCE(689);
            if(lookahead == '|')
                ADVANCE(595);
            if(lookahead == '}')
                ADVANCE(690);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(536);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(176);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(176);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(316);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(316);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(318);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(599);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(598);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(523);
            if(lookahead == '0')
                ADVANCE(652);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(656);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(523);
            if(lookahead == '0')
                ADVANCE(652);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(656);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '*')
                ADVANCE(1075);
            if(lookahead == '/')
                ADVANCE(1064);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(613);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(107);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(109);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(300);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(351);
            if(lookahead == 'o')
                ADVANCE(175);
            if(lookahead == 'u')
                ADVANCE(313);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(437);
            if(lookahead == 'h')
                ADVANCE(119);
            if(lookahead == 'o')
                ADVANCE(329);
            if(lookahead == 'u')
                ADVANCE(438);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(162);
            if(lookahead == 'i')
                ADVANCE(342);
            if(lookahead == 'l')
                ADVANCE(369);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(285);
            if(lookahead == 'e')
                ADVANCE(118);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(470);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(314);
            if(lookahead == 'o')
                ADVANCE(274);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'b')
                ADVANCE(294);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'b')
                ADVANCE(444);
            if(lookahead == 'l')
                ADVANCE(268);
            if(lookahead == 'n')
                ADVANCE(512);
            if(lookahead == 't')
                ADVANCE(465);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(259);
            if(lookahead == 's')
                ADVANCE(485);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(474);
            if(lookahead == 'n')
                ADVANCE(185);
            if(lookahead == 'u')
                ADVANCE(446);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(241);
            if(lookahead == 'o')
                ADVANCE(499);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(398);
            if(lookahead == 'h')
                ADVANCE(370);
            if(lookahead == 't')
                ADVANCE(399);
            if(lookahead == 'u')
                ADVANCE(397);
            if(lookahead == 'w')
                ADVANCE(278);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(468);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(354);
            if(lookahead == 'n')
                ADVANCE(271);
            if(lookahead == 's')
                ADVANCE(209);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(445);
            if(lookahead == 'o')
                ADVANCE(366);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'm')
                ADVANCE(395);
            if(lookahead == 'n')
                ADVANCE(702);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'm')
                ADVANCE(277);
            if(lookahead == 'n')
                ADVANCE(493);
            if(lookahead == 'v')
                ADVANCE(231);
            if(lookahead == 'x')
                ADVANCE(161);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(325);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(159);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'r')
                ADVANCE(261);
            if(lookahead == 'u')
                ADVANCE(149);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'r')
                ADVANCE(494);
            if(lookahead == 'y')
                ADVANCE(388);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(523);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(668);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(644);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(673);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 527,
                'B', 645,
                'D', 645,
                'F', 645,
                'b', 645,
                'd', 645,
                'f', 645,
                'L', 672,
                'U', 672,
                'W', 672,
                'l', 672,
                'u', 672,
                'w', 672,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(645);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 527,
                'B', 646,
                'D', 646,
                'F', 646,
                'b', 646,
                'd', 646,
                'f', 646,
                'L', 673,
                'U', 673,
                'W', 673,
                'l', 673,
                'u', 673,
                'w', 673,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(646);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 524,
                '.', 669,
                'B', 661,
                'b', 661,
                'E', 659,
                'e', 659,
                'P', 667,
                'p', 667,
                'X', 1062,
                'x', 1062,
                'A', 662,
                'C', 662,
                'a', 662,
                'c', 662,
                'D', 662,
                'F', 662,
                'd', 662,
                'f', 662,
                'L', 672,
                'U', 672,
                'W', 672,
                'l', 672,
                'u', 672,
                'w', 672,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(649);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 524,
                '.', 669,
                'B', 663,
                'b', 663,
                'E', 660,
                'e', 660,
                'P', 668,
                'p', 668,
                'X', 526,
                'x', 526,
                'A', 664,
                'C', 664,
                'a', 664,
                'c', 664,
                'D', 664,
                'F', 664,
                'd', 664,
                'f', 664,
                'L', 673,
                'U', 673,
                'W', 673,
                'l', 673,
                'u', 673,
                'w', 673,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(650);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 524,
                '.', 669,
                'E', 659,
                'e', 659,
                'P', 667,
                'p', 667,
                'A', 662,
                'C', 662,
                'a', 662,
                'c', 662,
                'B', 662,
                'D', 662,
                'F', 662,
                'b', 662,
                'd', 662,
                'f', 662,
                'L', 672,
                'U', 672,
                'W', 672,
                'l', 672,
                'u', 672,
                'w', 672,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(649);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 524,
                '.', 669,
                'E', 660,
                'e', 660,
                'P', 668,
                'p', 668,
                'A', 664,
                'C', 664,
                'a', 664,
                'c', 664,
                'B', 664,
                'D', 664,
                'F', 664,
                'b', 664,
                'd', 664,
                'f', 664,
                'L', 673,
                'U', 673,
                'W', 673,
                'l', 673,
                'u', 673,
                'w', 673,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(650);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 522,
                '.', 669,
                'B', 665,
                'b', 665,
                'X', 793,
                'x', 793,
                'E', 667,
                'P', 667,
                'e', 667,
                'p', 667,
                'D', 672,
                'F', 672,
                'L', 672,
                'U', 672,
                'W', 672,
                'd', 672,
                'f', 672,
                'l', 672,
                'u', 672,
                'w', 672,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(655);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 522,
                '.', 669,
                'B', 666,
                'b', 666,
                'X', 76,
                'x', 76,
                'E', 668,
                'P', 668,
                'e', 668,
                'p', 668,
                'D', 673,
                'F', 673,
                'L', 673,
                'U', 673,
                'W', 673,
                'd', 673,
                'f', 673,
                'l', 673,
                'u', 673,
                'w', 673,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(656);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 522,
                '.', 669,
                'B', 670,
                'b', 670,
                'X', 1062,
                'x', 1062,
                'E', 667,
                'P', 667,
                'e', 667,
                'p', 667,
                'D', 672,
                'F', 672,
                'L', 672,
                'U', 672,
                'W', 672,
                'd', 672,
                'f', 672,
                'l', 672,
                'u', 672,
                'w', 672,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(655);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 522,
                '.', 669,
                'B', 671,
                'b', 671,
                'X', 526,
                'x', 526,
                'E', 668,
                'P', 668,
                'e', 668,
                'p', 668,
                'D', 673,
                'F', 673,
                'L', 673,
                'U', 673,
                'W', 673,
                'd', 673,
                'f', 673,
                'l', 673,
                'u', 673,
                'w', 673,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(656);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(522);
            if(lookahead == '.')
                ADVANCE(669);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(667);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(655);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(672);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(522);
            if(lookahead == '.')
                ADVANCE(669);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(668);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(656);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(673);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 525,
                '+', 527,
                '-', 527,
                'E', 657,
                'e', 657,
                'P', 668,
                'p', 668,
                'B', 658,
                'D', 658,
                'F', 658,
                'b', 658,
                'd', 658,
                'f', 658,
                'L', 673,
                'U', 673,
                'W', 673,
                'l', 673,
                'u', 673,
                'w', 673,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(658);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 525,
                'E', 657,
                'e', 657,
                'P', 668,
                'p', 668,
                'B', 658,
                'D', 658,
                'F', 658,
                'b', 658,
                'd', 658,
                'f', 658,
                'L', 673,
                'U', 673,
                'W', 673,
                'l', 673,
                'u', 673,
                'w', 673,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(658);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 526,
                '.', 669,
                '+', 527,
                '-', 527,
                'E', 659,
                'e', 659,
                'P', 667,
                'p', 667,
                'B', 662,
                'D', 662,
                'F', 662,
                'b', 662,
                'd', 662,
                'f', 662,
                'L', 672,
                'U', 672,
                'W', 672,
                'l', 672,
                'u', 672,
                'w', 672,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(662);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 526,
                '.', 669,
                '+', 527,
                '-', 527,
                'E', 660,
                'e', 660,
                'P', 668,
                'p', 668,
                'B', 664,
                'D', 664,
                'F', 664,
                'b', 664,
                'd', 664,
                'f', 664,
                'L', 673,
                'U', 673,
                'W', 673,
                'l', 673,
                'u', 673,
                'w', 673,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(664);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 526,
                '.', 669,
                'E', 659,
                'e', 659,
                'P', 667,
                'p', 667,
                'A', 662,
                'C', 662,
                'a', 662,
                'c', 662,
                'B', 662,
                'D', 662,
                'F', 662,
                'b', 662,
                'd', 662,
                'f', 662,
                'L', 672,
                'U', 672,
                'W', 672,
                'l', 672,
                'u', 672,
                'w', 672,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(649);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 526,
                '.', 669,
                'E', 659,
                'e', 659,
                'P', 667,
                'p', 667,
                'B', 662,
                'D', 662,
                'F', 662,
                'b', 662,
                'd', 662,
                'f', 662,
                'L', 672,
                'U', 672,
                'W', 672,
                'l', 672,
                'u', 672,
                'w', 672,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(662);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 526,
                '.', 669,
                'E', 660,
                'e', 660,
                'P', 668,
                'p', 668,
                'A', 664,
                'C', 664,
                'a', 664,
                'c', 664,
                'B', 664,
                'D', 664,
                'F', 664,
                'b', 664,
                'd', 664,
                'f', 664,
                'L', 673,
                'U', 673,
                'W', 673,
                'l', 673,
                'u', 673,
                'w', 673,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(650);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 526,
                '.', 669,
                'E', 660,
                'e', 660,
                'P', 668,
                'p', 668,
                'B', 664,
                'D', 664,
                'F', 664,
                'b', 664,
                'd', 664,
                'f', 664,
                'L', 673,
                'U', 673,
                'W', 673,
                'l', 673,
                'u', 673,
                'w', 673,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(664);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(523);
            if(lookahead == '0')
                ADVANCE(653);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(655);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(672);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(523);
            if(lookahead == '0')
                ADVANCE(654);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(656);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(673);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 527,
                '-', 527,
                'B', 645,
                'D', 645,
                'F', 645,
                'b', 645,
                'd', 645,
                'f', 645,
                'L', 672,
                'U', 672,
                'W', 672,
                'l', 672,
                'u', 672,
                'w', 672,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(645);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 527,
                '-', 527,
                'B', 646,
                'D', 646,
                'F', 646,
                'b', 646,
                'd', 646,
                'f', 646,
                'L', 673,
                'U', 673,
                'W', 673,
                'l', 673,
                'u', 673,
                'w', 673,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(646);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'E', 657,
                'e', 657,
                'P', 668,
                'p', 668,
                'B', 658,
                'D', 658,
                'F', 658,
                'b', 658,
                'd', 658,
                'f', 658,
                'L', 673,
                'U', 673,
                'W', 673,
                'l', 673,
                'u', 673,
                'w', 673,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(658);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(655);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(672);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(656);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(673);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 672,
                'D', 672,
                'F', 672,
                'L', 672,
                'U', 672,
                'W', 672,
                'b', 672,
                'd', 672,
                'f', 672,
                'l', 672,
                'u', 672,
                'w', 672,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 673,
                'D', 673,
                'F', 673,
                'L', 673,
                'U', 673,
                'W', 673,
                'b', 673,
                'd', 673,
                'f', 673,
                'l', 673,
                'u', 673,
                'w', 673,
            );
            END_STATE();
        case 674:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(677);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(680);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(787);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(680);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(680);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(679);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(680);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(676);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(680);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(680);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(93);
            if(lookahead == '\r')
                ADVANCE(682);
            if(lookahead == '/')
                ADVANCE(528);
            if(lookahead == '\\')
                ADVANCE(683);
            if(lookahead != 0)
                ADVANCE(685);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(93);
            if(lookahead == '/')
                ADVANCE(528);
            if(lookahead == '\\')
                ADVANCE(683);
            if(lookahead != 0)
                ADVANCE(685);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\r')
                ADVANCE(686);
            if(lookahead == '/')
                ADVANCE(528);
            if(lookahead == '\\')
                ADVANCE(683);
            if(lookahead != 0)
                ADVANCE(685);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '*')
                ADVANCE(1075);
            if(lookahead == '/')
                ADVANCE(1064);
            if(lookahead == '\\')
                ADVANCE(683);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(685);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(528);
            if(lookahead == '\\')
                ADVANCE(683);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(685);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(528);
            if(lookahead == '\\')
                ADVANCE(683);
            if(lookahead != 0)
                ADVANCE(685);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(anon_sym_exception);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(anon_sym_abstract);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(anon_sym_abstract);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(anon_sym_interface);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(anon_sym_COLON);
            if(lookahead == ':')
                ADVANCE(579);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(anon_sym_in);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(497);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(anon_sym_bitset);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(anon_sym_bitmask);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == 'a')
                ADVANCE(343);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(anon_sym_typename);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(anon_sym_typename);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(anon_sym_valuetype);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(anon_sym_valuetype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(anon_sym_eventtype);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(anon_sym_eventtype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(anon_sym_const);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(anon_sym_alias);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(anon_sym_custom);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(anon_sym_custom);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(anon_sym_truncatable);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(anon_sym_truncatable);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(anon_sym_supports);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(anon_sym_public);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(anon_sym_public);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(anon_sym_private);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(anon_sym_private);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(anon_sym_factory);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(anon_sym_factory);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(anon_sym_case);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(anon_sym_typeid);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(anon_sym_typeid);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(anon_sym_typeprefix);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(anon_sym_import);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(anon_sym_import);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(anon_sym_Object);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(anon_sym_Object);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(anon_sym_oneway);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(anon_sym_oneway);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(anon_sym_context);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_value_base_type);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_value_base_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(anon_sym_component);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(anon_sym_provides);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(anon_sym_uses);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(anon_sym_multiple);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(anon_sym_multiple);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(anon_sym_home);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(anon_sym_manages);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(anon_sym_emits);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(anon_sym_publishes);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(anon_sym_consumes);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(anon_sym_primarykey);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(anon_sym_finder);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(anon_sym_native);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(680);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(791);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(791);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '*')
                ADVANCE(1078);
            if(lookahead == '/')
                ADVANCE(1067);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(791);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(789);
            if(lookahead == '\\')
                ADVANCE(788);
            if(lookahead == '\t' ||
               (0x0b <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(790);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead))
                ADVANCE(791);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(791);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(317);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(523);
            if(lookahead == '0')
                ADVANCE(647);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(649);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(662);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(801);
            if(lookahead == '3')
                ADVANCE(797);
            if(lookahead == '6')
                ADVANCE(799);
            if(lookahead == '8')
                ADVANCE(560);
            if(lookahead == 'e')
                ADVANCE(1000);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(801);
            if(lookahead == '3')
                ADVANCE(797);
            if(lookahead == '6')
                ADVANCE(799);
            if(lookahead == '8')
                ADVANCE(560);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(802);
            if(lookahead == '3')
                ADVANCE(798);
            if(lookahead == '6')
                ADVANCE(800);
            if(lookahead == '8')
                ADVANCE(552);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(547);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(550);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(563);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(807);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'B')
                ADVANCE(817);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(641);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(643);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(809);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(810);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(806);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(805);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(927);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(859);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1001);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(846);
            if(lookahead == 'i')
                ADVANCE(1052);
            if(lookahead == 'l')
                ADVANCE(975);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(977);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1054);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1005);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(989);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(942);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1033);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1039);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(990);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 823:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1011);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 824:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(945);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 825:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1031);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 826:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1006);
            if(lookahead == 'h')
                ADVANCE(818);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 827:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1030);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 828:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(851);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 829:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(838);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 830:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(850);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 831:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(937);
            if(lookahead == 'o')
                ADVANCE(913);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 832:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(937);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 833:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(925);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 834:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(1007);
            if(lookahead == 'n')
                ADVANCE(1053);
            if(lookahead == 't')
                ADVANCE(1021);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 835:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(930);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 836:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(931);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 837:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(1046);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 838:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(935);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 839:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(907);
            if(lookahead == 's')
                ADVANCE(1034);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 840:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(907);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 841:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 842:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(902);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 843:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(882);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 844:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(1025);
            if(lookahead == 'n')
                ADVANCE(863);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 845:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(1025);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 846:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(1027);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 847:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(1014);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 848:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(870);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 849:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(1017);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 850:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(1018);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 851:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(877);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 852:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(825);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 853:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 854:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(556);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 855:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 856:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(792);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 857:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(868);
            if(lookahead == 'i')
                ADVANCE(855);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 858:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(868);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 859:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(971);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 860:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(986);
            if(lookahead == 'h')
                ADVANCE(969);
            if(lookahead == 't')
                ADVANCE(988);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 861:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(986);
            if(lookahead == 'h')
                ADVANCE(969);
            if(lookahead == 't')
                ADVANCE(993);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 862:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(986);
            if(lookahead == 'h')
                ADVANCE(969);
            if(lookahead == 't')
                ADVANCE(996);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 863:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(1050);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 864:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(857);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 865:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(804);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 866:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 867:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(785);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 868:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(894);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 869:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(747);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 870:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 871:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 872:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(709);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 873:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(727);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 874:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 875:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 876:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(729);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 877:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 878:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(776);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 879:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 880:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(895);
            if(lookahead == 'o')
                ADVANCE(1043);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 881:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(854);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 882:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(979);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 883:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(812);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 884:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(856);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 885:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(858);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 886:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(961);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 887:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(824);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 888:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(1012);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 889:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(1015);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 890:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(957);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 891:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(1035);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 892:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(847);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 893:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(960);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 894:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 895:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(821);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 896:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(828);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 897:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(543);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 898:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(581);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 899:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(583);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 900:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(545);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 901:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(958);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 902:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(757);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 903:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(818);
            if(lookahead == 'o')
                ADVANCE(963);
            if(lookahead == 'u')
                ADVANCE(1003);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 904:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(818);
            if(lookahead == 'o')
                ADVANCE(963);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 905:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(818);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 906:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(969);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 907:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(822);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 908:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(1052);
            if(lookahead == 'l')
                ADVANCE(975);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 909:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(1049);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 910:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(1008);
            if(lookahead == 'o')
                ADVANCE(965);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 911:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(901);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 912:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(1048);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 913:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(853);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 914:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(837);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 915:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(956);
            if(lookahead == 'n')
                ADVANCE(923);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 916:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(956);
            if(lookahead == 'n')
                ADVANCE(1002);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 917:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(841);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 918:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(952);
            if(lookahead == 'u')
                ADVANCE(849);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 919:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(952);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 920:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(984);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 921:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(953);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 922:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(1026);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 923:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(970);
            if(lookahead == 's')
                ADVANCE(911);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 924:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(973);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 925:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'j')
                ADVANCE(892);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 926:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 927:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(1040);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 928:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(975);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 929:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(1056);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 930:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(917);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 931:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(866);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 932:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(1019);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 933:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(1029);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 934:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(878);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 935:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(879);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 936:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(887);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 937:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(1047);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 938:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(985);
            if(lookahead == 'n')
                ADVANCE(1009);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 939:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(735);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 940:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(740);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 941:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(813);
            if(lookahead == 's')
                ADVANCE(889);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 942:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(875);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 943:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(897);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 944:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 945:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(554);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 946:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 947:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1053);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 948:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1038);
            if(lookahead == 'v')
                ADVANCE(893);
            if(lookahead == 'x')
                ADVANCE(843);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 949:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1038);
            if(lookahead == 'x')
                ADVANCE(843);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 950:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1038);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 951:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1009);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 952:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(898);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 953:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(899);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 954:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(929);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 955:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(852);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 956:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1022);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 957:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(819);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 958:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(884);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 959:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1020);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 960:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1037);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 961:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(848);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 962:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(900);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 963:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1004);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 964:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(1043);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 965:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(936);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 966:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(943);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 967:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(940);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 968:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(965);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 969:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(998);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 970:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(944);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 971:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(954);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 972:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(991);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 973:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(946);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 974:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(962);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 975:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(823);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 976:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(999);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 977:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 978:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(864);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 979:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(1028);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 980:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(873);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 981:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(885);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 982:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(890);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 983:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(876);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 984:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(934);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 985:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(976);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 986:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(1041);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 987:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(909);
            if(lookahead == 'u')
                ADVANCE(835);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 988:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(918);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 989:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(576);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 990:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(578);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 991:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(1055);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 992:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(914);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 993:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(1045);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 994:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(921);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 995:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(1042);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 996:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(919);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 997:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(830);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 998:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(1013);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 999:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(1016);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1000:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(896);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1001:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(926);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1002:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(911);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1003:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(1024);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1004:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(1010);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1005:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(871);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1006:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(874);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1007:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(1023);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1008:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(941);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1009:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(795);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1010:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(737);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1011:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(571);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1012:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(558);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1013:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(539);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1014:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(766);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1015:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(713);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1016:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1017:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1018:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(693);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1019:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(719);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1020:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(794);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1021:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(992);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1022:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(796);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1023:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(997);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1024:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(967);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1025:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(888);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1026:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(842);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1027:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(972);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1028:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(924);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1029:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(920);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1030:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(869);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1031:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(829);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1032:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(872);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1033:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(912);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1034:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(994);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1035:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(1058);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1036:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(1061);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1037:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(1036);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1038:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(939);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1039:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(932);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1040:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(865);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1041:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(886);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1042:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(955);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1043:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(836);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1044:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(933);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1045:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(849);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1046:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(1032);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1047:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(891);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1048:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(867);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1049:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(827);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1050:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(816);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1051:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(922);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1052:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(881);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1053:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(589);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1054:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(768);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1055:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1056:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1057:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(978);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1058:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(980);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1059:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(981);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1060:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(982);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1061:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(983);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1062:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(662);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1063:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1063);
            END_STATE();
        case 1064:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 1065:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '*')
                ADVANCE(1079);
            if(lookahead != 0)
                ADVANCE(73);
            END_STATE();
        case 1066:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(61);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1073);
            END_STATE();
        case 1067:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(791);
            END_STATE();
        case 1068:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(1068);
            if(lookahead == '\r')
                ADVANCE(41);
            if(lookahead == '@')
                ADVANCE(720);
            END_STATE();
        case 1069:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(1072);
            if(lookahead == '\\')
                ADVANCE(61);
            if(lookahead != 0)
                ADVANCE(1073);
            END_STATE();
        case 1070:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\r')
                ADVANCE(1074);
            if(lookahead == '\\')
                ADVANCE(1070);
            if(lookahead != 0)
                ADVANCE(1073);
            END_STATE();
        case 1071:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '*')
                ADVANCE(1077);
            if(lookahead == '/')
                ADVANCE(1066);
            if(lookahead == '\\')
                ADVANCE(61);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1073);
            END_STATE();
        case 1072:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '/')
                ADVANCE(1071);
            if(lookahead == '@')
                ADVANCE(720);
            if(lookahead == '\\')
                ADVANCE(42);
            if(lookahead == '\t' ||
               (0x0b <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(1072);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead))
                ADVANCE(1073);
            END_STATE();
        case 1073:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\\')
                ADVANCE(61);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1073);
            END_STATE();
        case 1074:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\\')
                ADVANCE(61);
            if(lookahead != 0)
                ADVANCE(1073);
            END_STATE();
        case 1075:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            END_STATE();
        case 1076:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead == '*')
                ADVANCE(1079);
            if(lookahead != 0 &&
               lookahead != '/')
                ADVANCE(73);
            END_STATE();
        case 1077:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead == '\\')
                ADVANCE(61);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1073);
            END_STATE();
        case 1078:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(791);
            END_STATE();
        case 1079:
            ACCEPT_TOKEN(aux_sym_comment_token3);
            if(lookahead == '*')
                ADVANCE(1079);
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
    [1] = { .lex_state = 535 },
    [2] = { .lex_state = 75 },
    [3] = { .lex_state = 75 },
    [4] = { .lex_state = 75 },
    [5] = { .lex_state = 77 },
    [6] = { .lex_state = 77 },
    [7] = { .lex_state = 77 },
    [8] = { .lex_state = 78 },
    [9] = { .lex_state = 78 },
    [10] = { .lex_state = 78 },
    [11] = { .lex_state = 78 },
    [12] = { .lex_state = 78 },
    [13] = { .lex_state = 78 },
    [14] = { .lex_state = 78 },
    [15] = { .lex_state = 78 },
    [16] = { .lex_state = 64 },
    [17] = { .lex_state = 64 },
    [18] = { .lex_state = 79 },
    [19] = { .lex_state = 80 },
    [20] = { .lex_state = 535 },
    [21] = { .lex_state = 536 },
    [22] = { .lex_state = 536 },
    [23] = { .lex_state = 536 },
    [24] = { .lex_state = 536 },
    [25] = { .lex_state = 536 },
    [26] = { .lex_state = 536 },
    [27] = { .lex_state = 536 },
    [28] = { .lex_state = 536 },
    [29] = { .lex_state = 69 },
    [30] = { .lex_state = 69 },
    [31] = { .lex_state = 69 },
    [32] = { .lex_state = 69 },
    [33] = { .lex_state = 69 },
    [34] = { .lex_state = 69 },
    [35] = { .lex_state = 69 },
    [36] = { .lex_state = 69 },
    [37] = { .lex_state = 69 },
    [38] = { .lex_state = 69 },
    [39] = { .lex_state = 69 },
    [40] = { .lex_state = 81 },
    [41] = { .lex_state = 81 },
    [42] = { .lex_state = 81 },
    [43] = { .lex_state = 69 },
    [44] = { .lex_state = 82 },
    [45] = { .lex_state = 69 },
    [46] = { .lex_state = 75 },
    [47] = { .lex_state = 75 },
    [48] = { .lex_state = 82 },
    [49] = { .lex_state = 75 },
    [50] = { .lex_state = 75 },
    [51] = { .lex_state = 75 },
    [52] = { .lex_state = 75 },
    [53] = { .lex_state = 75 },
    [54] = { .lex_state = 77 },
    [55] = { .lex_state = 69 },
    [56] = { .lex_state = 69 },
    [57] = { .lex_state = 69 },
    [58] = { .lex_state = 77 },
    [59] = { .lex_state = 69 },
    [60] = { .lex_state = 69 },
    [61] = { .lex_state = 69 },
    [62] = { .lex_state = 69 },
    [63] = { .lex_state = 69 },
    [64] = { .lex_state = 77 },
    [65] = { .lex_state = 77 },
    [66] = { .lex_state = 69 },
    [67] = { .lex_state = 78 },
    [68] = { .lex_state = 78 },
    [69] = { .lex_state = 85 },
    [70] = { .lex_state = 85 },
    [71] = { .lex_state = 79 },
    [72] = { .lex_state = 79 },
    [73] = { .lex_state = 69 },
    [74] = { .lex_state = 69 },
    [75] = { .lex_state = 69 },
    [76] = { .lex_state = 81 },
    [77] = { .lex_state = 69 },
    [78] = { .lex_state = 69 },
    [79] = { .lex_state = 69 },
    [80] = { .lex_state = 69 },
    [81] = { .lex_state = 69 },
    [82] = { .lex_state = 69 },
    [83] = { .lex_state = 81 },
    [84] = { .lex_state = 81 },
    [85] = { .lex_state = 81 },
    [86] = { .lex_state = 81 },
    [87] = { .lex_state = 69 },
    [88] = { .lex_state = 69 },
    [89] = { .lex_state = 69 },
    [90] = { .lex_state = 86 },
    [91] = { .lex_state = 63 },
    [92] = { .lex_state = 63 },
    [93] = { .lex_state = 63 },
    [94] = { .lex_state = 69 },
    [95] = { .lex_state = 535 },
    [96] = { .lex_state = 65 },
    [97] = { .lex_state = 65 },
    [98] = { .lex_state = 65 },
    [99] = { .lex_state = 65 },
    [100] = { .lex_state = 536 },
    [101] = { .lex_state = 65 },
    [102] = { .lex_state = 65 },
    [103] = { .lex_state = 65 },
    [104] = { .lex_state = 536 },
    [105] = { .lex_state = 536 },
    [106] = { .lex_state = 65 },
    [107] = { .lex_state = 65 },
    [108] = { .lex_state = 65 },
    [109] = { .lex_state = 65 },
    [110] = { .lex_state = 65 },
    [111] = { .lex_state = 65 },
    [112] = { .lex_state = 535 },
    [113] = { .lex_state = 535 },
    [114] = { .lex_state = 535 },
    [115] = { .lex_state = 65 },
    [116] = { .lex_state = 535 },
    [117] = { .lex_state = 65 },
    [118] = { .lex_state = 536 },
    [119] = { .lex_state = 536 },
    [120] = { .lex_state = 536 },
    [121] = { .lex_state = 65 },
    [122] = { .lex_state = 65 },
    [123] = { .lex_state = 536 },
    [124] = { .lex_state = 65 },
    [125] = { .lex_state = 65 },
    [126] = { .lex_state = 65 },
    [127] = { .lex_state = 65 },
    [128] = { .lex_state = 65 },
    [129] = { .lex_state = 65 },
    [130] = { .lex_state = 535 },
    [131] = { .lex_state = 65 },
    [132] = { .lex_state = 535 },
    [133] = { .lex_state = 535 },
    [134] = { .lex_state = 535 },
    [135] = { .lex_state = 535 },
    [136] = { .lex_state = 536 },
    [137] = { .lex_state = 536 },
    [138] = { .lex_state = 536 },
    [139] = { .lex_state = 536 },
    [140] = { .lex_state = 536 },
    [141] = { .lex_state = 536 },
    [142] = { .lex_state = 536 },
    [143] = { .lex_state = 536 },
    [144] = { .lex_state = 536 },
    [145] = { .lex_state = 536 },
    [146] = { .lex_state = 536 },
    [147] = { .lex_state = 536 },
    [148] = { .lex_state = 536 },
    [149] = { .lex_state = 536 },
    [150] = { .lex_state = 65 },
    [151] = { .lex_state = 535 },
    [152] = { .lex_state = 536 },
    [153] = { .lex_state = 536 },
    [154] = { .lex_state = 535 },
    [155] = { .lex_state = 536 },
    [156] = { .lex_state = 536 },
    [157] = { .lex_state = 63 },
    [158] = { .lex_state = 67 },
    [159] = { .lex_state = 67 },
    [160] = { .lex_state = 65 },
    [161] = { .lex_state = 63 },
    [162] = { .lex_state = 535 },
    [163] = { .lex_state = 535 },
    [164] = { .lex_state = 67 },
    [165] = { .lex_state = 67 },
    [166] = { .lex_state = 63 },
    [167] = { .lex_state = 535 },
    [168] = { .lex_state = 535 },
    [169] = { .lex_state = 67 },
    [170] = { .lex_state = 66 },
    [171] = { .lex_state = 67 },
    [172] = { .lex_state = 68 },
    [173] = { .lex_state = 68 },
    [174] = { .lex_state = 63 },
    [175] = { .lex_state = 535 },
    [176] = { .lex_state = 535 },
    [177] = { .lex_state = 63 },
    [178] = { .lex_state = 68 },
    [179] = { .lex_state = 536 },
    [180] = { .lex_state = 535 },
    [181] = { .lex_state = 68 },
    [182] = { .lex_state = 88 },
    [183] = { .lex_state = 68 },
    [184] = { .lex_state = 535 },
    [185] = { .lex_state = 83 },
    [186] = { .lex_state = 88 },
    [187] = { .lex_state = 535 },
    [188] = { .lex_state = 535 },
    [189] = { .lex_state = 68 },
    [190] = { .lex_state = 535 },
    [191] = { .lex_state = 67 },
    [192] = { .lex_state = 84 },
    [193] = { .lex_state = 84 },
    [194] = { .lex_state = 68 },
    [195] = { .lex_state = 68 },
    [196] = { .lex_state = 88 },
    [197] = { .lex_state = 535 },
    [198] = { .lex_state = 535 },
    [199] = { .lex_state = 535 },
    [200] = { .lex_state = 68 },
    [201] = { .lex_state = 68 },
    [202] = { .lex_state = 535 },
    [203] = { .lex_state = 68 },
    [204] = { .lex_state = 535 },
    [205] = { .lex_state = 535 },
    [206] = { .lex_state = 535 },
    [207] = { .lex_state = 536 },
    [208] = { .lex_state = 536 },
    [209] = { .lex_state = 535 },
    [210] = { .lex_state = 87 },
    [211] = { .lex_state = 68 },
    [212] = { .lex_state = 63 },
    [213] = { .lex_state = 68 },
    [214] = { .lex_state = 535 },
    [215] = { .lex_state = 535 },
    [216] = { .lex_state = 68 },
    [217] = { .lex_state = 68 },
    [218] = { .lex_state = 68 },
    [219] = { .lex_state = 41 },
    [220] = { .lex_state = 41 },
    [221] = { .lex_state = 41 },
    [222] = { .lex_state = 41 },
    [223] = { .lex_state = 41 },
    [224] = { .lex_state = 0 },
    [225] = { .lex_state = 68 },
    [226] = { .lex_state = 0 },
    [227] = { .lex_state = 1072 },
    [228] = { .lex_state = 68 },
    [229] = { .lex_state = 535 },
    [230] = { .lex_state = 41 },
    [231] = { .lex_state = 535 },
    [232] = { .lex_state = 535 },
    [233] = { .lex_state = 68 },
    [234] = { .lex_state = 535 },
    [235] = { .lex_state = 70 },
    [236] = { .lex_state = 88 },
    [237] = { .lex_state = 535 },
    [238] = { .lex_state = 535 },
    [239] = { .lex_state = 68 },
    [240] = { .lex_state = 68 },
    [241] = { .lex_state = 68 },
    [242] = { .lex_state = 68 },
    [243] = { .lex_state = 68 },
    [244] = { .lex_state = 68 },
    [245] = { .lex_state = 68 },
    [246] = { .lex_state = 68 },
    [247] = { .lex_state = 68 },
    [248] = { .lex_state = 68 },
    [249] = { .lex_state = 535 },
    [250] = { .lex_state = 68 },
    [251] = { .lex_state = 70 },
    [252] = { .lex_state = 70 },
    [253] = { .lex_state = 535 },
    [254] = { .lex_state = 68 },
    [255] = { .lex_state = 68 },
    [256] = { .lex_state = 535 },
    [257] = { .lex_state = 535 },
    [258] = { .lex_state = 68 },
    [259] = { .lex_state = 535 },
    [260] = { .lex_state = 535 },
    [261] = { .lex_state = 68 },
    [262] = { .lex_state = 88 },
    [263] = { .lex_state = 535 },
    [264] = { .lex_state = 535 },
    [265] = { .lex_state = 536 },
    [266] = { .lex_state = 536 },
    [267] = { .lex_state = 68 },
    [268] = { .lex_state = 68 },
    [269] = { .lex_state = 88 },
    [270] = { .lex_state = 68 },
    [271] = { .lex_state = 535 },
    [272] = { .lex_state = 535 },
    [273] = { .lex_state = 68 },
    [274] = { .lex_state = 535 },
    [275] = { .lex_state = 535 },
    [276] = { .lex_state = 535 },
    [277] = { .lex_state = 68 },
    [278] = { .lex_state = 0 },
    [279] = { .lex_state = 68 },
    [280] = { .lex_state = 535 },
    [281] = { .lex_state = 0 },
    [282] = { .lex_state = 535 },
    [283] = { .lex_state = 535 },
    [284] = { .lex_state = 0 },
    [285] = { .lex_state = 0 },
    [286] = { .lex_state = 75 },
    [287] = { .lex_state = 89 },
    [288] = { .lex_state = 75 },
    [289] = { .lex_state = 68 },
    [290] = { .lex_state = 68 },
    [291] = { .lex_state = 535 },
    [292] = { .lex_state = 68 },
    [293] = { .lex_state = 535 },
    [294] = { .lex_state = 68 },
    [295] = { .lex_state = 0 },
    [296] = { .lex_state = 535 },
    [297] = { .lex_state = 0 },
    [298] = { .lex_state = 535 },
    [299] = { .lex_state = 68 },
    [300] = { .lex_state = 535 },
    [301] = { .lex_state = 68 },
    [302] = { .lex_state = 535 },
    [303] = { .lex_state = 68 },
    [304] = { .lex_state = 68 },
    [305] = { .lex_state = 0 },
    [306] = { .lex_state = 0 },
    [307] = { .lex_state = 68 },
    [308] = { .lex_state = 68 },
    [309] = { .lex_state = 0 },
    [310] = { .lex_state = 535 },
    [311] = { .lex_state = 75 },
    [312] = { .lex_state = 75 },
    [313] = { .lex_state = 75 },
    [314] = { .lex_state = 75 },
    [315] = { .lex_state = 68 },
    [316] = { .lex_state = 75 },
    [317] = { .lex_state = 68 },
    [318] = { .lex_state = 0 },
    [319] = { .lex_state = 68 },
    [320] = { .lex_state = 535 },
    [321] = { .lex_state = 535 },
    [322] = { .lex_state = 75 },
    [323] = { .lex_state = 0 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 68 },
    [326] = { .lex_state = 0 },
    [327] = { .lex_state = 0 },
    [328] = { .lex_state = 536 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 68 },
    [331] = { .lex_state = 0 },
    [332] = { .lex_state = 0 },
    [333] = { .lex_state = 0 },
    [334] = { .lex_state = 0 },
    [335] = { .lex_state = 68 },
    [336] = { .lex_state = 68 },
    [337] = { .lex_state = 68 },
    [338] = { .lex_state = 68 },
    [339] = { .lex_state = 68 },
    [340] = { .lex_state = 0 },
    [341] = { .lex_state = 535 },
    [342] = { .lex_state = 535 },
    [343] = { .lex_state = 68 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 68 },
    [346] = { .lex_state = 0 },
    [347] = { .lex_state = 68 },
    [348] = { .lex_state = 535 },
    [349] = { .lex_state = 68 },
    [350] = { .lex_state = 68 },
    [351] = { .lex_state = 68 },
    [352] = { .lex_state = 68 },
    [353] = { .lex_state = 68 },
    [354] = { .lex_state = 0 },
    [355] = { .lex_state = 68 },
    [356] = { .lex_state = 0 },
    [357] = { .lex_state = 68 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 0 },
    [360] = { .lex_state = 68 },
    [361] = { .lex_state = 0 },
    [362] = { .lex_state = 0 },
    [363] = { .lex_state = 0 },
    [364] = { .lex_state = 0 },
    [365] = { .lex_state = 535 },
    [366] = { .lex_state = 0 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 0 },
    [369] = { .lex_state = 0 },
    [370] = { .lex_state = 0 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 0 },
    [373] = { .lex_state = 0 },
    [374] = { .lex_state = 0 },
    [375] = { .lex_state = 68 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 68 },
    [378] = { .lex_state = 0 },
    [379] = { .lex_state = 0 },
    [380] = { .lex_state = 535 },
    [381] = { .lex_state = 68 },
    [382] = { .lex_state = 68 },
    [383] = { .lex_state = 75 },
    [384] = { .lex_state = 0 },
    [385] = { .lex_state = 68 },
    [386] = { .lex_state = 535 },
    [387] = { .lex_state = 75 },
    [388] = { .lex_state = 75 },
    [389] = { .lex_state = 68 },
    [390] = { .lex_state = 0 },
    [391] = { .lex_state = 0 },
    [392] = { .lex_state = 68 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 0 },
    [395] = { .lex_state = 68 },
    [396] = { .lex_state = 0 },
    [397] = { .lex_state = 68 },
    [398] = { .lex_state = 68 },
    [399] = { .lex_state = 535 },
    [400] = { .lex_state = 68 },
    [401] = { .lex_state = 0 },
    [402] = { .lex_state = 70 },
    [403] = { .lex_state = 0 },
    [404] = { .lex_state = 68 },
    [405] = { .lex_state = 68 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 0 },
    [408] = { .lex_state = 68 },
    [409] = { .lex_state = 68 },
    [410] = { .lex_state = 75 },
    [411] = { .lex_state = 68 },
    [412] = { .lex_state = 68 },
    [413] = { .lex_state = 68 },
    [414] = { .lex_state = 70 },
    [415] = { .lex_state = 75 },
    [416] = { .lex_state = 68 },
    [417] = { .lex_state = 535 },
    [418] = { .lex_state = 68 },
    [419] = { .lex_state = 68 },
    [420] = { .lex_state = 70 },
    [421] = { .lex_state = 0 },
    [422] = { .lex_state = 0 },
    [423] = { .lex_state = 68 },
    [424] = { .lex_state = 68 },
    [425] = { .lex_state = 535 },
    [426] = { .lex_state = 75 },
    [427] = { .lex_state = 535 },
    [428] = { .lex_state = 0 },
    [429] = { .lex_state = 0 },
    [430] = { .lex_state = 0 },
    [431] = { .lex_state = 0 },
    [432] = { .lex_state = 535 },
    [433] = { .lex_state = 0 },
    [434] = { .lex_state = 535 },
    [435] = { .lex_state = 0 },
    [436] = { .lex_state = 0 },
    [437] = { .lex_state = 0 },
    [438] = { .lex_state = 535 },
    [439] = { .lex_state = 68 },
    [440] = { .lex_state = 0 },
    [441] = { .lex_state = 68 },
    [442] = { .lex_state = 68 },
    [443] = { .lex_state = 68 },
    [444] = { .lex_state = 68 },
    [445] = { .lex_state = 68 },
    [446] = { .lex_state = 68 },
    [447] = { .lex_state = 535 },
    [448] = { .lex_state = 0 },
    [449] = { .lex_state = 68 },
    [450] = { .lex_state = 75 },
    [451] = { .lex_state = 535 },
    [452] = { .lex_state = 68 },
    [453] = { .lex_state = 68 },
    [454] = { .lex_state = 68 },
    [455] = { .lex_state = 0 },
    [456] = { .lex_state = 68 },
    [457] = { .lex_state = 68 },
    [458] = { .lex_state = 68 },
    [459] = { .lex_state = 68 },
    [460] = { .lex_state = 68 },
    [461] = { .lex_state = 68 },
    [462] = { .lex_state = 0 },
    [463] = { .lex_state = 535 },
    [464] = { .lex_state = 0 },
    [465] = { .lex_state = 0 },
    [466] = { .lex_state = 0 },
    [467] = { .lex_state = 0 },
    [468] = { .lex_state = 68 },
    [469] = { .lex_state = 75 },
    [470] = { .lex_state = 68 },
    [471] = { .lex_state = 0 },
    [472] = { .lex_state = 68 },
    [473] = { .lex_state = 68 },
    [474] = { .lex_state = 0 },
    [475] = { .lex_state = 68 },
    [476] = { .lex_state = 68 },
    [477] = { .lex_state = 75 },
    [478] = { .lex_state = 535 },
    [479] = { .lex_state = 535 },
    [480] = { .lex_state = 75 },
    [481] = { .lex_state = 535 },
    [482] = { .lex_state = 68 },
    [483] = { .lex_state = 535 },
    [484] = { .lex_state = 536 },
    [485] = { .lex_state = 0 },
    [486] = { .lex_state = 68 },
    [487] = { .lex_state = 75 },
    [488] = { .lex_state = 41 },
    [489] = { .lex_state = 41 },
    [490] = { .lex_state = 75 },
    [491] = { .lex_state = 68 },
    [492] = { .lex_state = 535 },
    [493] = { .lex_state = 68 },
    [494] = { .lex_state = 0 },
    [495] = { .lex_state = 536 },
    [496] = { .lex_state = 68 },
    [497] = { .lex_state = 0 },
    [498] = { .lex_state = 88 },
    [499] = { .lex_state = 0 },
    [500] = { .lex_state = 88 },
    [501] = { .lex_state = 68 },
    [502] = { .lex_state = 0 },
    [503] = { .lex_state = 0 },
    [504] = { .lex_state = 68 },
    [505] = { .lex_state = 47 },
    [506] = { .lex_state = 0 },
    [507] = { .lex_state = 0 },
    [508] = { .lex_state = 0 },
    [509] = { .lex_state = 0 },
    [510] = { .lex_state = 68 },
    [511] = { .lex_state = 68 },
    [512] = { .lex_state = 68 },
    [513] = { .lex_state = 0 },
    [514] = { .lex_state = 0 },
    [515] = { .lex_state = 0 },
    [516] = { .lex_state = 0 },
    [517] = { .lex_state = 75 },
    [518] = { .lex_state = 75 },
    [519] = { .lex_state = 0 },
    [520] = { .lex_state = 0 },
    [521] = { .lex_state = 0 },
    [522] = { .lex_state = 0 },
    [523] = { .lex_state = 0 },
    [524] = { .lex_state = 0 },
    [525] = { .lex_state = 0 },
    [526] = { .lex_state = 0 },
    [527] = { .lex_state = 0 },
    [528] = { .lex_state = 0 },
    [529] = { .lex_state = 0 },
    [530] = { .lex_state = 68 },
    [531] = { .lex_state = 0 },
    [532] = { .lex_state = 0 },
    [533] = { .lex_state = 0 },
    [534] = { .lex_state = 0 },
    [535] = { .lex_state = 0 },
    [536] = { .lex_state = 68 },
    [537] = { .lex_state = 0 },
    [538] = { .lex_state = 68 },
    [539] = { .lex_state = 0 },
    [540] = { .lex_state = 0 },
    [541] = { .lex_state = 0 },
    [542] = { .lex_state = 0 },
    [543] = { .lex_state = 48 },
    [544] = { .lex_state = 0 },
    [545] = { .lex_state = 75 },
    [546] = { .lex_state = 0 },
    [547] = { .lex_state = 0 },
    [548] = { .lex_state = 0 },
    [549] = { .lex_state = 0 },
    [550] = { .lex_state = 0 },
    [551] = { .lex_state = 0 },
    [552] = { .lex_state = 0 },
    [553] = { .lex_state = 0 },
    [554] = { .lex_state = 0 },
    [555] = { .lex_state = 68 },
    [556] = { .lex_state = 0 },
    [557] = { .lex_state = 72 },
    [558] = { .lex_state = 68 },
    [559] = { .lex_state = 68 },
    [560] = { .lex_state = 535 },
    [561] = { .lex_state = 0 },
    [562] = { .lex_state = 0 },
    [563] = { .lex_state = 0 },
    [564] = { .lex_state = 0 },
    [565] = { .lex_state = 68 },
    [566] = { .lex_state = 0 },
    [567] = { .lex_state = 0 },
    [568] = { .lex_state = 0 },
    [569] = { .lex_state = 0 },
    [570] = { .lex_state = 0 },
    [571] = { .lex_state = 0 },
    [572] = { .lex_state = 0 },
    [573] = { .lex_state = 0 },
    [574] = { .lex_state = 68 },
    [575] = { .lex_state = 0 },
    [576] = { .lex_state = 0 },
    [577] = { .lex_state = 91 },
    [578] = { .lex_state = 0 },
    [579] = { .lex_state = 68 },
    [580] = { .lex_state = 68 },
    [581] = { .lex_state = 0 },
    [582] = { .lex_state = 0 },
    [583] = { .lex_state = 75 },
    [584] = { .lex_state = 0 },
    [585] = { .lex_state = 68 },
    [586] = { .lex_state = 0 },
    [587] = { .lex_state = 0 },
    [588] = { .lex_state = 75 },
    [589] = { .lex_state = 0 },
    [590] = { .lex_state = 92 },
    [591] = { .lex_state = 75 },
    [592] = { .lex_state = 0 },
    [593] = { .lex_state = 0 },
    [594] = { .lex_state = 535 },
    [595] = { .lex_state = 0 },
    [596] = { .lex_state = 68 },
    [597] = { .lex_state = 0 },
    [598] = { .lex_state = 75 },
    [599] = { .lex_state = 0 },
    [600] = { .lex_state = 0 },
    [601] = { .lex_state = 0 },
    [602] = { .lex_state = 75 },
    [603] = { .lex_state = 75 },
    [604] = { .lex_state = 68 },
    [605] = { .lex_state = 0 },
    [606] = { .lex_state = 0 },
    [607] = { .lex_state = 0 },
    [608] = { .lex_state = 0 },
    [609] = { .lex_state = 0 },
    [610] = { .lex_state = 536 },
    [611] = { .lex_state = 790 },
    [612] = { .lex_state = 0 },
    [613] = { .lex_state = 68 },
    [614] = { .lex_state = 68 },
    [615] = { .lex_state = 75 },
    [616] = { .lex_state = 0 },
    [617] = { .lex_state = 0 },
    [618] = { .lex_state = 0 },
    [619] = { .lex_state = 0 },
    [620] = { .lex_state = 68 },
    [621] = { .lex_state = 0 },
    [622] = { .lex_state = 92 },
    [623] = { .lex_state = 0 },
    [624] = { .lex_state = 0 },
    [625] = { .lex_state = 0 },
    [626] = { .lex_state = 0 },
    [627] = { .lex_state = 68 },
    [628] = { .lex_state = 68 },
    [629] = { .lex_state = 68 },
    [630] = { .lex_state = 68 },
    [631] = { .lex_state = 68 },
    [632] = { .lex_state = 0 },
    [633] = { .lex_state = 0 },
    [634] = { .lex_state = 91 },
    [635] = { .lex_state = 0 },
    [636] = { .lex_state = 0 },
    [637] = { .lex_state = 0 },
    [638] = { .lex_state = 0 },
    [639] = { .lex_state = 75 },
    [640] = { .lex_state = 75 },
    [641] = { .lex_state = 0 },
    [642] = { .lex_state = 0 },
    [643] = { .lex_state = 0 },
    [644] = { .lex_state = 0 },
    [645] = { .lex_state = 536 },
    [646] = { .lex_state = 0 },
    [647] = { .lex_state = 0 },
    [648] = { .lex_state = 0 },
    [649] = { .lex_state = 0 },
    [650] = { .lex_state = 0 },
    [651] = { .lex_state = 0 },
    [652] = { .lex_state = 68 },
    [653] = { .lex_state = 0 },
    [654] = { .lex_state = 0 },
    [655] = { .lex_state = 0 },
    [656] = { .lex_state = 0 },
    [657] = { .lex_state = 68 },
    [658] = { .lex_state = 535 },
    [659] = { .lex_state = 68 },
    [660] = { .lex_state = 75 },
    [661] = { .lex_state = 535 },
    [662] = { .lex_state = 0 },
    [663] = { .lex_state = 68 },
    [664] = { .lex_state = 0 },
    [665] = { .lex_state = 0 },
    [666] = { .lex_state = 0 },
    [667] = { .lex_state = 68 },
    [668] = { .lex_state = 0 },
    [669] = { .lex_state = 68 },
    [670] = { .lex_state = 0 },
    [671] = { .lex_state = 0 },
    [672] = { .lex_state = 0 },
    [673] = { .lex_state = 0 },
    [674] = { .lex_state = 0 },
    [675] = { .lex_state = 68 },
    [676] = { .lex_state = 68 },
    [677] = { .lex_state = 0 },
    [678] = { .lex_state = 68 },
    [679] = { .lex_state = 68 },
    [680] = { .lex_state = 68 },
    [681] = { .lex_state = 535 },
    [682] = { .lex_state = 535 },
    [683] = { .lex_state = 0 },
    [684] = { .lex_state = 0 },
    [685] = { .lex_state = 68 },
    [686] = { .lex_state = 68 },
    [687] = { .lex_state = 0 },
    [688] = { .lex_state = 68 },
    [689] = { .lex_state = 68 },
    [690] = { .lex_state = 0 },
    [691] = { .lex_state = 68 },
    [692] = { .lex_state = 0 },
    [693] = { .lex_state = 0 },
    [694] = { .lex_state = 0 },
    [695] = { .lex_state = 535 },
    [696] = { .lex_state = 0 },
    [697] = { .lex_state = 535 },
    [698] = { .lex_state = 68 },
    [699] = { .lex_state = 68 },
    [700] = { .lex_state = 0 },
    [701] = { .lex_state = 0 },
    [702] = { .lex_state = 0 },
    [703] = { .lex_state = 0 },
    [704] = { .lex_state = 68 },
    [705] = { .lex_state = 68 },
    [706] = { .lex_state = 0 },
    [707] = { .lex_state = 68 },
    [708] = { .lex_state = 0 },
    [709] = { .lex_state = 75 },
    [710] = { .lex_state = 68 },
    [711] = { .lex_state = 0 },
    [712] = { .lex_state = 535 },
    [713] = { .lex_state = 68 },
    [714] = { (TSStateId)(-1) },
    [715] = { (TSStateId)(-1) },
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
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [1] = {
        [sym_specification] = STATE(608),
        [sym_preproc_call] = STATE(116),
        [sym_except_dcl] = STATE(606),
        [sym_interface_dcl] = STATE(606),
        [sym_interface_kind] = STATE(604),
        [sym_interface_forward_dcl] = STATE(601),
        [sym_interface_def] = STATE(601),
        [sym_interface_header] = STATE(544),
        [sym_bitset_dcl] = STATE(606),
        [sym_bitmask_dcl] = STATE(606),
        [sym_annotation_dcl] = STATE(606),
        [sym_annotation_appl] = STATE(174),
        [sym_template_module_dcl] = STATE(606),
        [sym_template_module_inst] = STATE(606),
        [sym_value_dcl] = STATE(606),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(606),
        [sym_enum_dcl] = STATE(606),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(606),
        [sym_union_def] = STATE(606),
        [sym_type_id_dcl] = STATE(606),
        [sym_type_prefix_dcl] = STATE(606),
        [sym_import_dcl] = STATE(606),
        [sym_value_abs_def] = STATE(586),
        [sym_component_dcl] = STATE(606),
        [sym_component_forward_dcl] = STATE(556),
        [sym_component_def] = STATE(556),
        [sym_component_header] = STATE(554),
        [sym_home_dcl] = STATE(606),
        [sym_home_header] = STATE(553),
        [sym__definition] = STATE(123),
        [sym_native_dcl] = STATE(606),
        [sym_module_dcl] = STATE(606),
        [sym_struct_forward_dcl] = STATE(606),
        [sym_struct_def] = STATE(606),
        [sym_predefine] = STATE(100),
        [sym_const_dcl] = STATE(606),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(20),
        [aux_sym_specification_repeat2] = STATE(28),
        [aux_sym_interface_def_repeat1] = STATE(157),
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
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_home] = ACTIONS(53),
        [anon_sym_native] = ACTIONS(55),
        [anon_sym_POUNDdefine] = ACTIONS(57),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [2] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(707),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_except_dcl] = STATE(700),
        [sym_export] = STATE(49),
        [sym_op_dcl] = STATE(293),
        [sym_op_type_spec] = STATE(579),
        [sym_attr_dcl] = STATE(700),
        [sym_readonly_attr_spec] = STATE(693),
        [sym_attr_spec] = STATE(693),
        [sym_bitset_dcl] = STATE(700),
        [sym_bitmask_dcl] = STATE(700),
        [sym_annotation_appl] = STATE(174),
        [sym_value_dcl] = STATE(700),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_element] = STATE(46),
        [sym_state_member] = STATE(49),
        [sym_init_dcl] = STATE(49),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(700),
        [sym_enum_dcl] = STATE(700),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(700),
        [sym_union_def] = STATE(700),
        [sym_type_id_dcl] = STATE(700),
        [sym_import_dcl] = STATE(700),
        [sym_object_type] = STATE(357),
        [sym_op_oneway_dcl] = STATE(293),
        [sym_op_with_context] = STATE(700),
        [sym_value_abs_def] = STATE(586),
        [sym_native_dcl] = STATE(700),
        [sym_struct_forward_dcl] = STATE(700),
        [sym_struct_def] = STATE(700),
        [sym_const_dcl] = STATE(700),
        [sym_comment] = STATE(2),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [aux_sym_value_def_repeat1] = STATE(4),
        [anon_sym_short] = ACTIONS(59),
        [anon_sym_int16] = ACTIONS(59),
        [anon_sym_long] = ACTIONS(61),
        [anon_sym_int32] = ACTIONS(61),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(65),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(69),
        [anon_sym_fixed] = ACTIONS(71),
        [sym_octet_type] = ACTIONS(69),
        [sym_signed_tiny_int] = ACTIONS(73),
        [anon_sym_unsignedshort] = ACTIONS(75),
        [anon_sym_uint16] = ACTIONS(77),
        [anon_sym_unsignedlong] = ACTIONS(79),
        [anon_sym_uint32] = ACTIONS(79),
        [anon_sym_unsignedlonglong] = ACTIONS(81),
        [anon_sym_uint64] = ACTIONS(83),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_longdouble] = ACTIONS(87),
        [anon_sym_char] = ACTIONS(89),
        [anon_sym_wchar] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(91),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_exception] = ACTIONS(101),
        [anon_sym_RBRACE] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_void] = ACTIONS(107),
        [anon_sym_readonly] = ACTIONS(109),
        [anon_sym_attribute] = ACTIONS(111),
        [anon_sym_bitset] = ACTIONS(113),
        [anon_sym_bitmask] = ACTIONS(115),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_valuetype] = ACTIONS(119),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_union] = ACTIONS(123),
        [anon_sym_enum] = ACTIONS(125),
        [anon_sym_const] = ACTIONS(127),
        [anon_sym_custom] = ACTIONS(129),
        [anon_sym_public] = ACTIONS(131),
        [anon_sym_private] = ACTIONS(131),
        [anon_sym_factory] = ACTIONS(133),
        [anon_sym_typedef] = ACTIONS(135),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(137),
        [anon_sym_import] = ACTIONS(139),
        [anon_sym_Object] = ACTIONS(141),
        [anon_sym_oneway] = ACTIONS(143),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [3] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(707),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_except_dcl] = STATE(700),
        [sym_export] = STATE(49),
        [sym_op_dcl] = STATE(293),
        [sym_op_type_spec] = STATE(579),
        [sym_attr_dcl] = STATE(700),
        [sym_readonly_attr_spec] = STATE(693),
        [sym_attr_spec] = STATE(693),
        [sym_bitset_dcl] = STATE(700),
        [sym_bitmask_dcl] = STATE(700),
        [sym_annotation_appl] = STATE(174),
        [sym_value_dcl] = STATE(700),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_element] = STATE(46),
        [sym_state_member] = STATE(49),
        [sym_init_dcl] = STATE(49),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(700),
        [sym_enum_dcl] = STATE(700),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(700),
        [sym_union_def] = STATE(700),
        [sym_type_id_dcl] = STATE(700),
        [sym_import_dcl] = STATE(700),
        [sym_object_type] = STATE(357),
        [sym_op_oneway_dcl] = STATE(293),
        [sym_op_with_context] = STATE(700),
        [sym_value_abs_def] = STATE(586),
        [sym_native_dcl] = STATE(700),
        [sym_struct_forward_dcl] = STATE(700),
        [sym_struct_def] = STATE(700),
        [sym_const_dcl] = STATE(700),
        [sym_comment] = STATE(3),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [aux_sym_value_def_repeat1] = STATE(2),
        [anon_sym_short] = ACTIONS(59),
        [anon_sym_int16] = ACTIONS(59),
        [anon_sym_long] = ACTIONS(61),
        [anon_sym_int32] = ACTIONS(61),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(65),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(69),
        [anon_sym_fixed] = ACTIONS(71),
        [sym_octet_type] = ACTIONS(69),
        [sym_signed_tiny_int] = ACTIONS(73),
        [anon_sym_unsignedshort] = ACTIONS(75),
        [anon_sym_uint16] = ACTIONS(77),
        [anon_sym_unsignedlong] = ACTIONS(79),
        [anon_sym_uint32] = ACTIONS(79),
        [anon_sym_unsignedlonglong] = ACTIONS(81),
        [anon_sym_uint64] = ACTIONS(83),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_longdouble] = ACTIONS(87),
        [anon_sym_char] = ACTIONS(89),
        [anon_sym_wchar] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(91),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_exception] = ACTIONS(101),
        [anon_sym_RBRACE] = ACTIONS(149),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_void] = ACTIONS(107),
        [anon_sym_readonly] = ACTIONS(109),
        [anon_sym_attribute] = ACTIONS(111),
        [anon_sym_bitset] = ACTIONS(113),
        [anon_sym_bitmask] = ACTIONS(115),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_valuetype] = ACTIONS(119),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_union] = ACTIONS(123),
        [anon_sym_enum] = ACTIONS(125),
        [anon_sym_const] = ACTIONS(127),
        [anon_sym_custom] = ACTIONS(129),
        [anon_sym_public] = ACTIONS(131),
        [anon_sym_private] = ACTIONS(131),
        [anon_sym_factory] = ACTIONS(133),
        [anon_sym_typedef] = ACTIONS(135),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(137),
        [anon_sym_import] = ACTIONS(139),
        [anon_sym_Object] = ACTIONS(141),
        [anon_sym_oneway] = ACTIONS(143),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [4] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(707),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_except_dcl] = STATE(700),
        [sym_export] = STATE(49),
        [sym_op_dcl] = STATE(293),
        [sym_op_type_spec] = STATE(579),
        [sym_attr_dcl] = STATE(700),
        [sym_readonly_attr_spec] = STATE(693),
        [sym_attr_spec] = STATE(693),
        [sym_bitset_dcl] = STATE(700),
        [sym_bitmask_dcl] = STATE(700),
        [sym_annotation_appl] = STATE(174),
        [sym_value_dcl] = STATE(700),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_element] = STATE(46),
        [sym_state_member] = STATE(49),
        [sym_init_dcl] = STATE(49),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(700),
        [sym_enum_dcl] = STATE(700),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(700),
        [sym_union_def] = STATE(700),
        [sym_type_id_dcl] = STATE(700),
        [sym_import_dcl] = STATE(700),
        [sym_object_type] = STATE(357),
        [sym_op_oneway_dcl] = STATE(293),
        [sym_op_with_context] = STATE(700),
        [sym_value_abs_def] = STATE(586),
        [sym_native_dcl] = STATE(700),
        [sym_struct_forward_dcl] = STATE(700),
        [sym_struct_def] = STATE(700),
        [sym_const_dcl] = STATE(700),
        [sym_comment] = STATE(4),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [aux_sym_value_def_repeat1] = STATE(4),
        [anon_sym_short] = ACTIONS(151),
        [anon_sym_int16] = ACTIONS(151),
        [anon_sym_long] = ACTIONS(154),
        [anon_sym_int32] = ACTIONS(154),
        [anon_sym_longlong] = ACTIONS(157),
        [anon_sym_int64] = ACTIONS(160),
        [sym_unsigned_tiny_int] = ACTIONS(163),
        [sym_boolean_type] = ACTIONS(166),
        [anon_sym_fixed] = ACTIONS(169),
        [sym_octet_type] = ACTIONS(166),
        [sym_signed_tiny_int] = ACTIONS(172),
        [anon_sym_unsignedshort] = ACTIONS(175),
        [anon_sym_uint16] = ACTIONS(178),
        [anon_sym_unsignedlong] = ACTIONS(181),
        [anon_sym_uint32] = ACTIONS(181),
        [anon_sym_unsignedlonglong] = ACTIONS(184),
        [anon_sym_uint64] = ACTIONS(187),
        [anon_sym_float] = ACTIONS(190),
        [anon_sym_double] = ACTIONS(190),
        [anon_sym_longdouble] = ACTIONS(193),
        [anon_sym_char] = ACTIONS(196),
        [anon_sym_wchar] = ACTIONS(196),
        [anon_sym_COLON_COLON] = ACTIONS(199),
        [anon_sym_string] = ACTIONS(202),
        [anon_sym_wstring] = ACTIONS(202),
        [anon_sym_any] = ACTIONS(205),
        [anon_sym_sequence] = ACTIONS(208),
        [anon_sym_map] = ACTIONS(211),
        [anon_sym_exception] = ACTIONS(214),
        [anon_sym_RBRACE] = ACTIONS(217),
        [anon_sym_abstract] = ACTIONS(219),
        [anon_sym_void] = ACTIONS(222),
        [anon_sym_readonly] = ACTIONS(225),
        [anon_sym_attribute] = ACTIONS(228),
        [anon_sym_bitset] = ACTIONS(231),
        [anon_sym_bitmask] = ACTIONS(234),
        [anon_sym_AT] = ACTIONS(237),
        [anon_sym_valuetype] = ACTIONS(240),
        [anon_sym_struct] = ACTIONS(243),
        [anon_sym_union] = ACTIONS(246),
        [anon_sym_enum] = ACTIONS(249),
        [anon_sym_const] = ACTIONS(252),
        [anon_sym_custom] = ACTIONS(255),
        [anon_sym_public] = ACTIONS(258),
        [anon_sym_private] = ACTIONS(258),
        [anon_sym_factory] = ACTIONS(261),
        [anon_sym_typedef] = ACTIONS(264),
        [anon_sym_ATignore_literal_names] = ACTIONS(267),
        [anon_sym_typeid] = ACTIONS(270),
        [anon_sym_import] = ACTIONS(273),
        [anon_sym_Object] = ACTIONS(276),
        [anon_sym_oneway] = ACTIONS(279),
        [sym_value_base_type] = ACTIONS(166),
        [anon_sym_native] = ACTIONS(282),
        [sym_identifier] = ACTIONS(285),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [5] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(707),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_except_dcl] = STATE(706),
        [sym_export] = STATE(65),
        [sym_op_dcl] = STATE(291),
        [sym_op_type_spec] = STATE(579),
        [sym_attr_dcl] = STATE(706),
        [sym_readonly_attr_spec] = STATE(693),
        [sym_attr_spec] = STATE(693),
        [sym_bitset_dcl] = STATE(706),
        [sym_bitmask_dcl] = STATE(706),
        [sym_annotation_appl] = STATE(174),
        [sym_value_dcl] = STATE(706),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(706),
        [sym_enum_dcl] = STATE(706),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(706),
        [sym_union_def] = STATE(706),
        [sym_type_id_dcl] = STATE(706),
        [sym_import_dcl] = STATE(706),
        [sym_object_type] = STATE(357),
        [sym_op_oneway_dcl] = STATE(291),
        [sym_op_with_context] = STATE(706),
        [sym_value_abs_def] = STATE(586),
        [sym_home_body] = STATE(549),
        [sym_home_export] = STATE(58),
        [sym_factory_dcl] = STATE(529),
        [sym_native_dcl] = STATE(706),
        [sym_struct_forward_dcl] = STATE(706),
        [sym_struct_def] = STATE(706),
        [sym_const_dcl] = STATE(706),
        [sym_comment] = STATE(5),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [aux_sym_home_body_repeat1] = STATE(7),
        [anon_sym_short] = ACTIONS(59),
        [anon_sym_int16] = ACTIONS(59),
        [anon_sym_long] = ACTIONS(61),
        [anon_sym_int32] = ACTIONS(61),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(65),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(69),
        [anon_sym_fixed] = ACTIONS(71),
        [sym_octet_type] = ACTIONS(69),
        [sym_signed_tiny_int] = ACTIONS(73),
        [anon_sym_unsignedshort] = ACTIONS(75),
        [anon_sym_uint16] = ACTIONS(77),
        [anon_sym_unsignedlong] = ACTIONS(79),
        [anon_sym_uint32] = ACTIONS(79),
        [anon_sym_unsignedlonglong] = ACTIONS(81),
        [anon_sym_uint64] = ACTIONS(83),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_longdouble] = ACTIONS(87),
        [anon_sym_char] = ACTIONS(89),
        [anon_sym_wchar] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(91),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_exception] = ACTIONS(101),
        [anon_sym_RBRACE] = ACTIONS(288),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_void] = ACTIONS(107),
        [anon_sym_readonly] = ACTIONS(109),
        [anon_sym_attribute] = ACTIONS(111),
        [anon_sym_bitset] = ACTIONS(113),
        [anon_sym_bitmask] = ACTIONS(115),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_valuetype] = ACTIONS(119),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_union] = ACTIONS(123),
        [anon_sym_enum] = ACTIONS(125),
        [anon_sym_const] = ACTIONS(127),
        [anon_sym_custom] = ACTIONS(129),
        [anon_sym_factory] = ACTIONS(290),
        [anon_sym_typedef] = ACTIONS(135),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(137),
        [anon_sym_import] = ACTIONS(139),
        [anon_sym_Object] = ACTIONS(141),
        [anon_sym_oneway] = ACTIONS(143),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [6] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(707),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_except_dcl] = STATE(706),
        [sym_export] = STATE(65),
        [sym_op_dcl] = STATE(291),
        [sym_op_type_spec] = STATE(579),
        [sym_attr_dcl] = STATE(706),
        [sym_readonly_attr_spec] = STATE(693),
        [sym_attr_spec] = STATE(693),
        [sym_bitset_dcl] = STATE(706),
        [sym_bitmask_dcl] = STATE(706),
        [sym_annotation_appl] = STATE(174),
        [sym_value_dcl] = STATE(706),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(706),
        [sym_enum_dcl] = STATE(706),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(706),
        [sym_union_def] = STATE(706),
        [sym_type_id_dcl] = STATE(706),
        [sym_import_dcl] = STATE(706),
        [sym_object_type] = STATE(357),
        [sym_op_oneway_dcl] = STATE(291),
        [sym_op_with_context] = STATE(706),
        [sym_value_abs_def] = STATE(586),
        [sym_home_export] = STATE(58),
        [sym_factory_dcl] = STATE(529),
        [sym_native_dcl] = STATE(706),
        [sym_struct_forward_dcl] = STATE(706),
        [sym_struct_def] = STATE(706),
        [sym_const_dcl] = STATE(706),
        [sym_comment] = STATE(6),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [aux_sym_home_body_repeat1] = STATE(6),
        [anon_sym_short] = ACTIONS(292),
        [anon_sym_int16] = ACTIONS(292),
        [anon_sym_long] = ACTIONS(295),
        [anon_sym_int32] = ACTIONS(295),
        [anon_sym_longlong] = ACTIONS(298),
        [anon_sym_int64] = ACTIONS(301),
        [sym_unsigned_tiny_int] = ACTIONS(304),
        [sym_boolean_type] = ACTIONS(307),
        [anon_sym_fixed] = ACTIONS(310),
        [sym_octet_type] = ACTIONS(307),
        [sym_signed_tiny_int] = ACTIONS(313),
        [anon_sym_unsignedshort] = ACTIONS(316),
        [anon_sym_uint16] = ACTIONS(319),
        [anon_sym_unsignedlong] = ACTIONS(322),
        [anon_sym_uint32] = ACTIONS(322),
        [anon_sym_unsignedlonglong] = ACTIONS(325),
        [anon_sym_uint64] = ACTIONS(328),
        [anon_sym_float] = ACTIONS(331),
        [anon_sym_double] = ACTIONS(331),
        [anon_sym_longdouble] = ACTIONS(334),
        [anon_sym_char] = ACTIONS(337),
        [anon_sym_wchar] = ACTIONS(337),
        [anon_sym_COLON_COLON] = ACTIONS(340),
        [anon_sym_string] = ACTIONS(343),
        [anon_sym_wstring] = ACTIONS(343),
        [anon_sym_any] = ACTIONS(346),
        [anon_sym_sequence] = ACTIONS(349),
        [anon_sym_map] = ACTIONS(352),
        [anon_sym_exception] = ACTIONS(355),
        [anon_sym_RBRACE] = ACTIONS(358),
        [anon_sym_abstract] = ACTIONS(360),
        [anon_sym_void] = ACTIONS(363),
        [anon_sym_readonly] = ACTIONS(366),
        [anon_sym_attribute] = ACTIONS(369),
        [anon_sym_bitset] = ACTIONS(372),
        [anon_sym_bitmask] = ACTIONS(375),
        [anon_sym_AT] = ACTIONS(378),
        [anon_sym_valuetype] = ACTIONS(381),
        [anon_sym_struct] = ACTIONS(384),
        [anon_sym_union] = ACTIONS(387),
        [anon_sym_enum] = ACTIONS(390),
        [anon_sym_const] = ACTIONS(393),
        [anon_sym_custom] = ACTIONS(396),
        [anon_sym_factory] = ACTIONS(399),
        [anon_sym_typedef] = ACTIONS(402),
        [anon_sym_ATignore_literal_names] = ACTIONS(405),
        [anon_sym_typeid] = ACTIONS(408),
        [anon_sym_import] = ACTIONS(411),
        [anon_sym_Object] = ACTIONS(414),
        [anon_sym_oneway] = ACTIONS(417),
        [sym_value_base_type] = ACTIONS(307),
        [anon_sym_native] = ACTIONS(420),
        [sym_identifier] = ACTIONS(423),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [7] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(707),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_except_dcl] = STATE(706),
        [sym_export] = STATE(65),
        [sym_op_dcl] = STATE(291),
        [sym_op_type_spec] = STATE(579),
        [sym_attr_dcl] = STATE(706),
        [sym_readonly_attr_spec] = STATE(693),
        [sym_attr_spec] = STATE(693),
        [sym_bitset_dcl] = STATE(706),
        [sym_bitmask_dcl] = STATE(706),
        [sym_annotation_appl] = STATE(174),
        [sym_value_dcl] = STATE(706),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(706),
        [sym_enum_dcl] = STATE(706),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(706),
        [sym_union_def] = STATE(706),
        [sym_type_id_dcl] = STATE(706),
        [sym_import_dcl] = STATE(706),
        [sym_object_type] = STATE(357),
        [sym_op_oneway_dcl] = STATE(291),
        [sym_op_with_context] = STATE(706),
        [sym_value_abs_def] = STATE(586),
        [sym_home_export] = STATE(58),
        [sym_factory_dcl] = STATE(529),
        [sym_native_dcl] = STATE(706),
        [sym_struct_forward_dcl] = STATE(706),
        [sym_struct_def] = STATE(706),
        [sym_const_dcl] = STATE(706),
        [sym_comment] = STATE(7),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [aux_sym_home_body_repeat1] = STATE(6),
        [anon_sym_short] = ACTIONS(59),
        [anon_sym_int16] = ACTIONS(59),
        [anon_sym_long] = ACTIONS(61),
        [anon_sym_int32] = ACTIONS(61),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(65),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(69),
        [anon_sym_fixed] = ACTIONS(71),
        [sym_octet_type] = ACTIONS(69),
        [sym_signed_tiny_int] = ACTIONS(73),
        [anon_sym_unsignedshort] = ACTIONS(75),
        [anon_sym_uint16] = ACTIONS(77),
        [anon_sym_unsignedlong] = ACTIONS(79),
        [anon_sym_uint32] = ACTIONS(79),
        [anon_sym_unsignedlonglong] = ACTIONS(81),
        [anon_sym_uint64] = ACTIONS(83),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_longdouble] = ACTIONS(87),
        [anon_sym_char] = ACTIONS(89),
        [anon_sym_wchar] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(91),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_exception] = ACTIONS(101),
        [anon_sym_RBRACE] = ACTIONS(426),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_void] = ACTIONS(107),
        [anon_sym_readonly] = ACTIONS(109),
        [anon_sym_attribute] = ACTIONS(111),
        [anon_sym_bitset] = ACTIONS(113),
        [anon_sym_bitmask] = ACTIONS(115),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_valuetype] = ACTIONS(119),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_union] = ACTIONS(123),
        [anon_sym_enum] = ACTIONS(125),
        [anon_sym_const] = ACTIONS(127),
        [anon_sym_custom] = ACTIONS(129),
        [anon_sym_factory] = ACTIONS(290),
        [anon_sym_typedef] = ACTIONS(135),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(137),
        [anon_sym_import] = ACTIONS(139),
        [anon_sym_Object] = ACTIONS(141),
        [anon_sym_oneway] = ACTIONS(143),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [8] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(707),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_except_dcl] = STATE(618),
        [sym_interface_body] = STATE(508),
        [sym_export] = STATE(68),
        [sym_op_dcl] = STATE(341),
        [sym_op_type_spec] = STATE(579),
        [sym_attr_dcl] = STATE(618),
        [sym_readonly_attr_spec] = STATE(693),
        [sym_attr_spec] = STATE(693),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(174),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_object_type] = STATE(357),
        [sym_op_oneway_dcl] = STATE(341),
        [sym_op_with_context] = STATE(618),
        [sym_value_abs_def] = STATE(586),
        [sym_native_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(8),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [aux_sym_interface_body_repeat1] = STATE(13),
        [anon_sym_short] = ACTIONS(59),
        [anon_sym_int16] = ACTIONS(59),
        [anon_sym_long] = ACTIONS(61),
        [anon_sym_int32] = ACTIONS(61),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(65),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(69),
        [anon_sym_fixed] = ACTIONS(71),
        [sym_octet_type] = ACTIONS(69),
        [sym_signed_tiny_int] = ACTIONS(73),
        [anon_sym_unsignedshort] = ACTIONS(75),
        [anon_sym_uint16] = ACTIONS(77),
        [anon_sym_unsignedlong] = ACTIONS(79),
        [anon_sym_uint32] = ACTIONS(79),
        [anon_sym_unsignedlonglong] = ACTIONS(81),
        [anon_sym_uint64] = ACTIONS(83),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_longdouble] = ACTIONS(87),
        [anon_sym_char] = ACTIONS(89),
        [anon_sym_wchar] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(91),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_exception] = ACTIONS(101),
        [anon_sym_RBRACE] = ACTIONS(428),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_void] = ACTIONS(107),
        [anon_sym_readonly] = ACTIONS(109),
        [anon_sym_attribute] = ACTIONS(111),
        [anon_sym_bitset] = ACTIONS(113),
        [anon_sym_bitmask] = ACTIONS(115),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_valuetype] = ACTIONS(119),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_union] = ACTIONS(123),
        [anon_sym_enum] = ACTIONS(125),
        [anon_sym_const] = ACTIONS(127),
        [anon_sym_custom] = ACTIONS(129),
        [anon_sym_typedef] = ACTIONS(135),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(137),
        [anon_sym_import] = ACTIONS(139),
        [anon_sym_Object] = ACTIONS(141),
        [anon_sym_oneway] = ACTIONS(143),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [9] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(707),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_except_dcl] = STATE(618),
        [sym_interface_body] = STATE(649),
        [sym_export] = STATE(68),
        [sym_op_dcl] = STATE(341),
        [sym_op_type_spec] = STATE(579),
        [sym_attr_dcl] = STATE(618),
        [sym_readonly_attr_spec] = STATE(693),
        [sym_attr_spec] = STATE(693),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(174),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_object_type] = STATE(357),
        [sym_op_oneway_dcl] = STATE(341),
        [sym_op_with_context] = STATE(618),
        [sym_value_abs_def] = STATE(586),
        [sym_native_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(9),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [aux_sym_interface_body_repeat1] = STATE(13),
        [anon_sym_short] = ACTIONS(59),
        [anon_sym_int16] = ACTIONS(59),
        [anon_sym_long] = ACTIONS(61),
        [anon_sym_int32] = ACTIONS(61),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(65),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(69),
        [anon_sym_fixed] = ACTIONS(71),
        [sym_octet_type] = ACTIONS(69),
        [sym_signed_tiny_int] = ACTIONS(73),
        [anon_sym_unsignedshort] = ACTIONS(75),
        [anon_sym_uint16] = ACTIONS(77),
        [anon_sym_unsignedlong] = ACTIONS(79),
        [anon_sym_uint32] = ACTIONS(79),
        [anon_sym_unsignedlonglong] = ACTIONS(81),
        [anon_sym_uint64] = ACTIONS(83),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_longdouble] = ACTIONS(87),
        [anon_sym_char] = ACTIONS(89),
        [anon_sym_wchar] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(91),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_exception] = ACTIONS(101),
        [anon_sym_RBRACE] = ACTIONS(430),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_void] = ACTIONS(107),
        [anon_sym_readonly] = ACTIONS(109),
        [anon_sym_attribute] = ACTIONS(111),
        [anon_sym_bitset] = ACTIONS(113),
        [anon_sym_bitmask] = ACTIONS(115),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_valuetype] = ACTIONS(119),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_union] = ACTIONS(123),
        [anon_sym_enum] = ACTIONS(125),
        [anon_sym_const] = ACTIONS(127),
        [anon_sym_custom] = ACTIONS(129),
        [anon_sym_typedef] = ACTIONS(135),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(137),
        [anon_sym_import] = ACTIONS(139),
        [anon_sym_Object] = ACTIONS(141),
        [anon_sym_oneway] = ACTIONS(143),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [10] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(707),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_except_dcl] = STATE(618),
        [sym_export] = STATE(68),
        [sym_op_dcl] = STATE(341),
        [sym_op_type_spec] = STATE(579),
        [sym_attr_dcl] = STATE(618),
        [sym_readonly_attr_spec] = STATE(693),
        [sym_attr_spec] = STATE(693),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(174),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_object_type] = STATE(357),
        [sym_op_oneway_dcl] = STATE(341),
        [sym_op_with_context] = STATE(618),
        [sym_value_abs_def] = STATE(586),
        [sym_native_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(10),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [aux_sym_interface_body_repeat1] = STATE(12),
        [anon_sym_short] = ACTIONS(59),
        [anon_sym_int16] = ACTIONS(59),
        [anon_sym_long] = ACTIONS(61),
        [anon_sym_int32] = ACTIONS(61),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(65),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(69),
        [anon_sym_fixed] = ACTIONS(71),
        [sym_octet_type] = ACTIONS(69),
        [sym_signed_tiny_int] = ACTIONS(73),
        [anon_sym_unsignedshort] = ACTIONS(75),
        [anon_sym_uint16] = ACTIONS(77),
        [anon_sym_unsignedlong] = ACTIONS(79),
        [anon_sym_uint32] = ACTIONS(79),
        [anon_sym_unsignedlonglong] = ACTIONS(81),
        [anon_sym_uint64] = ACTIONS(83),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_longdouble] = ACTIONS(87),
        [anon_sym_char] = ACTIONS(89),
        [anon_sym_wchar] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(91),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_exception] = ACTIONS(101),
        [anon_sym_RBRACE] = ACTIONS(432),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_void] = ACTIONS(107),
        [anon_sym_readonly] = ACTIONS(109),
        [anon_sym_attribute] = ACTIONS(111),
        [anon_sym_bitset] = ACTIONS(113),
        [anon_sym_bitmask] = ACTIONS(115),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_valuetype] = ACTIONS(119),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_union] = ACTIONS(123),
        [anon_sym_enum] = ACTIONS(125),
        [anon_sym_const] = ACTIONS(127),
        [anon_sym_custom] = ACTIONS(129),
        [anon_sym_typedef] = ACTIONS(135),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(137),
        [anon_sym_import] = ACTIONS(139),
        [anon_sym_Object] = ACTIONS(141),
        [anon_sym_oneway] = ACTIONS(143),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [11] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(707),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_except_dcl] = STATE(618),
        [sym_export] = STATE(68),
        [sym_op_dcl] = STATE(341),
        [sym_op_type_spec] = STATE(579),
        [sym_attr_dcl] = STATE(618),
        [sym_readonly_attr_spec] = STATE(693),
        [sym_attr_spec] = STATE(693),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(174),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_object_type] = STATE(357),
        [sym_op_oneway_dcl] = STATE(341),
        [sym_op_with_context] = STATE(618),
        [sym_value_abs_def] = STATE(586),
        [sym_native_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(11),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [aux_sym_interface_body_repeat1] = STATE(15),
        [anon_sym_short] = ACTIONS(59),
        [anon_sym_int16] = ACTIONS(59),
        [anon_sym_long] = ACTIONS(61),
        [anon_sym_int32] = ACTIONS(61),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(65),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(69),
        [anon_sym_fixed] = ACTIONS(71),
        [sym_octet_type] = ACTIONS(69),
        [sym_signed_tiny_int] = ACTIONS(73),
        [anon_sym_unsignedshort] = ACTIONS(75),
        [anon_sym_uint16] = ACTIONS(77),
        [anon_sym_unsignedlong] = ACTIONS(79),
        [anon_sym_uint32] = ACTIONS(79),
        [anon_sym_unsignedlonglong] = ACTIONS(81),
        [anon_sym_uint64] = ACTIONS(83),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_longdouble] = ACTIONS(87),
        [anon_sym_char] = ACTIONS(89),
        [anon_sym_wchar] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(91),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_exception] = ACTIONS(101),
        [anon_sym_RBRACE] = ACTIONS(432),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_void] = ACTIONS(107),
        [anon_sym_readonly] = ACTIONS(109),
        [anon_sym_attribute] = ACTIONS(111),
        [anon_sym_bitset] = ACTIONS(113),
        [anon_sym_bitmask] = ACTIONS(115),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_valuetype] = ACTIONS(119),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_union] = ACTIONS(123),
        [anon_sym_enum] = ACTIONS(125),
        [anon_sym_const] = ACTIONS(127),
        [anon_sym_custom] = ACTIONS(129),
        [anon_sym_typedef] = ACTIONS(135),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(137),
        [anon_sym_import] = ACTIONS(139),
        [anon_sym_Object] = ACTIONS(141),
        [anon_sym_oneway] = ACTIONS(143),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [12] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(707),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_except_dcl] = STATE(618),
        [sym_export] = STATE(68),
        [sym_op_dcl] = STATE(341),
        [sym_op_type_spec] = STATE(579),
        [sym_attr_dcl] = STATE(618),
        [sym_readonly_attr_spec] = STATE(693),
        [sym_attr_spec] = STATE(693),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(174),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_object_type] = STATE(357),
        [sym_op_oneway_dcl] = STATE(341),
        [sym_op_with_context] = STATE(618),
        [sym_value_abs_def] = STATE(586),
        [sym_native_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(12),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [aux_sym_interface_body_repeat1] = STATE(15),
        [anon_sym_short] = ACTIONS(59),
        [anon_sym_int16] = ACTIONS(59),
        [anon_sym_long] = ACTIONS(61),
        [anon_sym_int32] = ACTIONS(61),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(65),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(69),
        [anon_sym_fixed] = ACTIONS(71),
        [sym_octet_type] = ACTIONS(69),
        [sym_signed_tiny_int] = ACTIONS(73),
        [anon_sym_unsignedshort] = ACTIONS(75),
        [anon_sym_uint16] = ACTIONS(77),
        [anon_sym_unsignedlong] = ACTIONS(79),
        [anon_sym_uint32] = ACTIONS(79),
        [anon_sym_unsignedlonglong] = ACTIONS(81),
        [anon_sym_uint64] = ACTIONS(83),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_longdouble] = ACTIONS(87),
        [anon_sym_char] = ACTIONS(89),
        [anon_sym_wchar] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(91),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_exception] = ACTIONS(101),
        [anon_sym_RBRACE] = ACTIONS(434),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_void] = ACTIONS(107),
        [anon_sym_readonly] = ACTIONS(109),
        [anon_sym_attribute] = ACTIONS(111),
        [anon_sym_bitset] = ACTIONS(113),
        [anon_sym_bitmask] = ACTIONS(115),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_valuetype] = ACTIONS(119),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_union] = ACTIONS(123),
        [anon_sym_enum] = ACTIONS(125),
        [anon_sym_const] = ACTIONS(127),
        [anon_sym_custom] = ACTIONS(129),
        [anon_sym_typedef] = ACTIONS(135),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(137),
        [anon_sym_import] = ACTIONS(139),
        [anon_sym_Object] = ACTIONS(141),
        [anon_sym_oneway] = ACTIONS(143),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [13] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(707),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_except_dcl] = STATE(618),
        [sym_export] = STATE(68),
        [sym_op_dcl] = STATE(341),
        [sym_op_type_spec] = STATE(579),
        [sym_attr_dcl] = STATE(618),
        [sym_readonly_attr_spec] = STATE(693),
        [sym_attr_spec] = STATE(693),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(174),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_object_type] = STATE(357),
        [sym_op_oneway_dcl] = STATE(341),
        [sym_op_with_context] = STATE(618),
        [sym_value_abs_def] = STATE(586),
        [sym_native_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(13),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [aux_sym_interface_body_repeat1] = STATE(15),
        [anon_sym_short] = ACTIONS(59),
        [anon_sym_int16] = ACTIONS(59),
        [anon_sym_long] = ACTIONS(61),
        [anon_sym_int32] = ACTIONS(61),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(65),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(69),
        [anon_sym_fixed] = ACTIONS(71),
        [sym_octet_type] = ACTIONS(69),
        [sym_signed_tiny_int] = ACTIONS(73),
        [anon_sym_unsignedshort] = ACTIONS(75),
        [anon_sym_uint16] = ACTIONS(77),
        [anon_sym_unsignedlong] = ACTIONS(79),
        [anon_sym_uint32] = ACTIONS(79),
        [anon_sym_unsignedlonglong] = ACTIONS(81),
        [anon_sym_uint64] = ACTIONS(83),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_longdouble] = ACTIONS(87),
        [anon_sym_char] = ACTIONS(89),
        [anon_sym_wchar] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(91),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_exception] = ACTIONS(101),
        [anon_sym_RBRACE] = ACTIONS(436),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_void] = ACTIONS(107),
        [anon_sym_readonly] = ACTIONS(109),
        [anon_sym_attribute] = ACTIONS(111),
        [anon_sym_bitset] = ACTIONS(113),
        [anon_sym_bitmask] = ACTIONS(115),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_valuetype] = ACTIONS(119),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_union] = ACTIONS(123),
        [anon_sym_enum] = ACTIONS(125),
        [anon_sym_const] = ACTIONS(127),
        [anon_sym_custom] = ACTIONS(129),
        [anon_sym_typedef] = ACTIONS(135),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(137),
        [anon_sym_import] = ACTIONS(139),
        [anon_sym_Object] = ACTIONS(141),
        [anon_sym_oneway] = ACTIONS(143),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [14] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(707),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_except_dcl] = STATE(618),
        [sym_export] = STATE(68),
        [sym_op_dcl] = STATE(341),
        [sym_op_type_spec] = STATE(579),
        [sym_attr_dcl] = STATE(618),
        [sym_readonly_attr_spec] = STATE(693),
        [sym_attr_spec] = STATE(693),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(174),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_object_type] = STATE(357),
        [sym_op_oneway_dcl] = STATE(341),
        [sym_op_with_context] = STATE(618),
        [sym_value_abs_def] = STATE(586),
        [sym_native_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(14),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [aux_sym_interface_body_repeat1] = STATE(11),
        [anon_sym_short] = ACTIONS(59),
        [anon_sym_int16] = ACTIONS(59),
        [anon_sym_long] = ACTIONS(61),
        [anon_sym_int32] = ACTIONS(61),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(65),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(69),
        [anon_sym_fixed] = ACTIONS(71),
        [sym_octet_type] = ACTIONS(69),
        [sym_signed_tiny_int] = ACTIONS(73),
        [anon_sym_unsignedshort] = ACTIONS(75),
        [anon_sym_uint16] = ACTIONS(77),
        [anon_sym_unsignedlong] = ACTIONS(79),
        [anon_sym_uint32] = ACTIONS(79),
        [anon_sym_unsignedlonglong] = ACTIONS(81),
        [anon_sym_uint64] = ACTIONS(83),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_longdouble] = ACTIONS(87),
        [anon_sym_char] = ACTIONS(89),
        [anon_sym_wchar] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(91),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_exception] = ACTIONS(101),
        [anon_sym_RBRACE] = ACTIONS(438),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_void] = ACTIONS(107),
        [anon_sym_readonly] = ACTIONS(109),
        [anon_sym_attribute] = ACTIONS(111),
        [anon_sym_bitset] = ACTIONS(113),
        [anon_sym_bitmask] = ACTIONS(115),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_valuetype] = ACTIONS(119),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_union] = ACTIONS(123),
        [anon_sym_enum] = ACTIONS(125),
        [anon_sym_const] = ACTIONS(127),
        [anon_sym_custom] = ACTIONS(129),
        [anon_sym_typedef] = ACTIONS(135),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(137),
        [anon_sym_import] = ACTIONS(139),
        [anon_sym_Object] = ACTIONS(141),
        [anon_sym_oneway] = ACTIONS(143),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(145),
        [sym_identifier] = ACTIONS(147),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [15] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(707),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_except_dcl] = STATE(618),
        [sym_export] = STATE(68),
        [sym_op_dcl] = STATE(341),
        [sym_op_type_spec] = STATE(579),
        [sym_attr_dcl] = STATE(618),
        [sym_readonly_attr_spec] = STATE(693),
        [sym_attr_spec] = STATE(693),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(174),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_object_type] = STATE(357),
        [sym_op_oneway_dcl] = STATE(341),
        [sym_op_with_context] = STATE(618),
        [sym_value_abs_def] = STATE(586),
        [sym_native_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(15),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [aux_sym_interface_body_repeat1] = STATE(15),
        [anon_sym_short] = ACTIONS(440),
        [anon_sym_int16] = ACTIONS(440),
        [anon_sym_long] = ACTIONS(443),
        [anon_sym_int32] = ACTIONS(443),
        [anon_sym_longlong] = ACTIONS(446),
        [anon_sym_int64] = ACTIONS(449),
        [sym_unsigned_tiny_int] = ACTIONS(452),
        [sym_boolean_type] = ACTIONS(455),
        [anon_sym_fixed] = ACTIONS(458),
        [sym_octet_type] = ACTIONS(455),
        [sym_signed_tiny_int] = ACTIONS(461),
        [anon_sym_unsignedshort] = ACTIONS(464),
        [anon_sym_uint16] = ACTIONS(467),
        [anon_sym_unsignedlong] = ACTIONS(470),
        [anon_sym_uint32] = ACTIONS(470),
        [anon_sym_unsignedlonglong] = ACTIONS(473),
        [anon_sym_uint64] = ACTIONS(476),
        [anon_sym_float] = ACTIONS(479),
        [anon_sym_double] = ACTIONS(479),
        [anon_sym_longdouble] = ACTIONS(482),
        [anon_sym_char] = ACTIONS(485),
        [anon_sym_wchar] = ACTIONS(485),
        [anon_sym_COLON_COLON] = ACTIONS(488),
        [anon_sym_string] = ACTIONS(491),
        [anon_sym_wstring] = ACTIONS(491),
        [anon_sym_any] = ACTIONS(494),
        [anon_sym_sequence] = ACTIONS(497),
        [anon_sym_map] = ACTIONS(500),
        [anon_sym_exception] = ACTIONS(503),
        [anon_sym_RBRACE] = ACTIONS(506),
        [anon_sym_abstract] = ACTIONS(508),
        [anon_sym_void] = ACTIONS(511),
        [anon_sym_readonly] = ACTIONS(514),
        [anon_sym_attribute] = ACTIONS(517),
        [anon_sym_bitset] = ACTIONS(520),
        [anon_sym_bitmask] = ACTIONS(523),
        [anon_sym_AT] = ACTIONS(526),
        [anon_sym_valuetype] = ACTIONS(529),
        [anon_sym_struct] = ACTIONS(532),
        [anon_sym_union] = ACTIONS(535),
        [anon_sym_enum] = ACTIONS(538),
        [anon_sym_const] = ACTIONS(541),
        [anon_sym_custom] = ACTIONS(544),
        [anon_sym_typedef] = ACTIONS(547),
        [anon_sym_ATignore_literal_names] = ACTIONS(550),
        [anon_sym_typeid] = ACTIONS(553),
        [anon_sym_import] = ACTIONS(556),
        [anon_sym_Object] = ACTIONS(559),
        [anon_sym_oneway] = ACTIONS(562),
        [sym_value_base_type] = ACTIONS(455),
        [anon_sym_native] = ACTIONS(565),
        [sym_identifier] = ACTIONS(568),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [16] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(154),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(426),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_const_expr] = STATE(426),
        [sym_or_expr] = STATE(171),
        [sym_xor_expr] = STATE(164),
        [sym_and_expr] = STATE(159),
        [sym_shift_expr] = STATE(155),
        [sym_add_expr] = STATE(152),
        [sym_mult_expr] = STATE(142),
        [sym_unary_expr] = STATE(136),
        [sym_unary_operator] = STATE(150),
        [sym_literal] = STATE(141),
        [sym_string_literal] = STATE(148),
        [sym_char_literal] = STATE(148),
        [sym_boolean_literal] = STATE(148),
        [sym_actual_parameters] = STATE(640),
        [sym_actual_parameter] = STATE(286),
        [sym_object_type] = STATE(357),
        [sym_comment] = STATE(16),
        [anon_sym_short] = ACTIONS(59),
        [anon_sym_int16] = ACTIONS(59),
        [anon_sym_long] = ACTIONS(61),
        [anon_sym_int32] = ACTIONS(61),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(65),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(69),
        [anon_sym_fixed] = ACTIONS(71),
        [sym_octet_type] = ACTIONS(69),
        [sym_signed_tiny_int] = ACTIONS(73),
        [anon_sym_unsignedshort] = ACTIONS(75),
        [anon_sym_uint16] = ACTIONS(77),
        [anon_sym_unsignedlong] = ACTIONS(79),
        [anon_sym_uint32] = ACTIONS(79),
        [anon_sym_unsignedlonglong] = ACTIONS(81),
        [anon_sym_uint64] = ACTIONS(83),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_longdouble] = ACTIONS(87),
        [anon_sym_char] = ACTIONS(89),
        [anon_sym_wchar] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(571),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_PLUS] = ACTIONS(573),
        [anon_sym_DASH] = ACTIONS(573),
        [anon_sym_LPAREN] = ACTIONS(575),
        [anon_sym_TILDE] = ACTIONS(577),
        [anon_sym_L] = ACTIONS(579),
        [anon_sym_DQUOTE] = ACTIONS(581),
        [anon_sym_SQUOTE] = ACTIONS(583),
        [anon_sym_TRUE] = ACTIONS(585),
        [anon_sym_FALSE] = ACTIONS(585),
        [sym_number_literal] = ACTIONS(587),
        [anon_sym_Object] = ACTIONS(141),
        [sym_value_base_type] = ACTIONS(69),
        [sym_identifier] = ACTIONS(589),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [17] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(154),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(426),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_const_expr] = STATE(426),
        [sym_or_expr] = STATE(171),
        [sym_xor_expr] = STATE(164),
        [sym_and_expr] = STATE(159),
        [sym_shift_expr] = STATE(155),
        [sym_add_expr] = STATE(152),
        [sym_mult_expr] = STATE(142),
        [sym_unary_expr] = STATE(136),
        [sym_unary_operator] = STATE(150),
        [sym_literal] = STATE(141),
        [sym_string_literal] = STATE(148),
        [sym_char_literal] = STATE(148),
        [sym_boolean_literal] = STATE(148),
        [sym_actual_parameter] = STATE(480),
        [sym_object_type] = STATE(357),
        [sym_comment] = STATE(17),
        [anon_sym_short] = ACTIONS(59),
        [anon_sym_int16] = ACTIONS(59),
        [anon_sym_long] = ACTIONS(61),
        [anon_sym_int32] = ACTIONS(61),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(65),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(69),
        [anon_sym_fixed] = ACTIONS(71),
        [sym_octet_type] = ACTIONS(69),
        [sym_signed_tiny_int] = ACTIONS(73),
        [anon_sym_unsignedshort] = ACTIONS(75),
        [anon_sym_uint16] = ACTIONS(77),
        [anon_sym_unsignedlong] = ACTIONS(79),
        [anon_sym_uint32] = ACTIONS(79),
        [anon_sym_unsignedlonglong] = ACTIONS(81),
        [anon_sym_uint64] = ACTIONS(83),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_longdouble] = ACTIONS(87),
        [anon_sym_char] = ACTIONS(89),
        [anon_sym_wchar] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(571),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_PLUS] = ACTIONS(573),
        [anon_sym_DASH] = ACTIONS(573),
        [anon_sym_LPAREN] = ACTIONS(575),
        [anon_sym_TILDE] = ACTIONS(577),
        [anon_sym_L] = ACTIONS(579),
        [anon_sym_DQUOTE] = ACTIONS(581),
        [anon_sym_SQUOTE] = ACTIONS(583),
        [anon_sym_TRUE] = ACTIONS(585),
        [anon_sym_FALSE] = ACTIONS(585),
        [sym_number_literal] = ACTIONS(587),
        [anon_sym_Object] = ACTIONS(141),
        [sym_value_base_type] = ACTIONS(69),
        [sym_identifier] = ACTIONS(589),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [18] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_type_spec] = STATE(225),
        [sym_simple_type_spec] = STATE(279),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(279),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_bitset_dcl] = STATE(225),
        [sym_bitmask_dcl] = STATE(225),
        [sym_annotation_appl] = STATE(174),
        [sym_enum_dcl] = STATE(225),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(225),
        [sym_union_def] = STATE(225),
        [sym_element_spec] = STATE(647),
        [sym_object_type] = STATE(357),
        [sym_struct_forward_dcl] = STATE(225),
        [sym_struct_def] = STATE(225),
        [sym_comment] = STATE(18),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [anon_sym_short] = ACTIONS(59),
        [anon_sym_int16] = ACTIONS(59),
        [anon_sym_long] = ACTIONS(61),
        [anon_sym_int32] = ACTIONS(61),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(65),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(69),
        [anon_sym_fixed] = ACTIONS(71),
        [sym_octet_type] = ACTIONS(69),
        [sym_signed_tiny_int] = ACTIONS(73),
        [anon_sym_unsignedshort] = ACTIONS(75),
        [anon_sym_uint16] = ACTIONS(77),
        [anon_sym_unsignedlong] = ACTIONS(79),
        [anon_sym_uint32] = ACTIONS(79),
        [anon_sym_unsignedlonglong] = ACTIONS(81),
        [anon_sym_uint64] = ACTIONS(83),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_longdouble] = ACTIONS(87),
        [anon_sym_char] = ACTIONS(89),
        [anon_sym_wchar] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(91),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_RBRACE] = ACTIONS(591),
        [anon_sym_bitset] = ACTIONS(113),
        [anon_sym_bitmask] = ACTIONS(115),
        [anon_sym_default] = ACTIONS(593),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_union] = ACTIONS(123),
        [anon_sym_enum] = ACTIONS(125),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_case] = ACTIONS(593),
        [anon_sym_Object] = ACTIONS(141),
        [sym_value_base_type] = ACTIONS(69),
        [sym_identifier] = ACTIONS(147),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [19] = {
        [sym_signed_short_int] = STATE(243),
        [sym_signed_long_int] = STATE(243),
        [sym_signed_longlong_int] = STATE(243),
        [sym_unsigned_int] = STATE(248),
        [sym_integer_type] = STATE(357),
        [sym_signed_int] = STATE(248),
        [sym_unsigned_short_int] = STATE(242),
        [sym_unsigned_long_int] = STATE(242),
        [sym_unsigned_longlong_int] = STATE(242),
        [sym_floating_pt_type] = STATE(357),
        [sym_char_type] = STATE(357),
        [sym_scoped_name] = STATE(261),
        [sym_string_type] = STATE(398),
        [sym_simple_type_spec] = STATE(213),
        [sym_base_type_spec] = STATE(392),
        [sym_any_type] = STATE(357),
        [sym_fixed_pt_type] = STATE(398),
        [sym_template_type_spec] = STATE(213),
        [sym_sequence_type] = STATE(398),
        [sym_map_type] = STATE(398),
        [sym_bitset_dcl] = STATE(213),
        [sym_bitmask_dcl] = STATE(213),
        [sym_annotation_appl] = STATE(174),
        [sym_type_declarator] = STATE(609),
        [sym_enum_dcl] = STATE(213),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(213),
        [sym_union_def] = STATE(213),
        [sym_object_type] = STATE(357),
        [sym_struct_forward_dcl] = STATE(213),
        [sym_struct_def] = STATE(213),
        [sym_comment] = STATE(19),
        [aux_sym_interface_def_repeat1] = STATE(212),
        [anon_sym_short] = ACTIONS(59),
        [anon_sym_int16] = ACTIONS(59),
        [anon_sym_long] = ACTIONS(61),
        [anon_sym_int32] = ACTIONS(61),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(65),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(69),
        [anon_sym_fixed] = ACTIONS(71),
        [sym_octet_type] = ACTIONS(69),
        [sym_signed_tiny_int] = ACTIONS(73),
        [anon_sym_unsignedshort] = ACTIONS(75),
        [anon_sym_uint16] = ACTIONS(77),
        [anon_sym_unsignedlong] = ACTIONS(79),
        [anon_sym_uint32] = ACTIONS(79),
        [anon_sym_unsignedlonglong] = ACTIONS(81),
        [anon_sym_uint64] = ACTIONS(83),
        [anon_sym_float] = ACTIONS(85),
        [anon_sym_double] = ACTIONS(85),
        [anon_sym_longdouble] = ACTIONS(87),
        [anon_sym_char] = ACTIONS(89),
        [anon_sym_wchar] = ACTIONS(89),
        [anon_sym_COLON_COLON] = ACTIONS(91),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_bitset] = ACTIONS(113),
        [anon_sym_bitmask] = ACTIONS(115),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_union] = ACTIONS(123),
        [anon_sym_enum] = ACTIONS(125),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_Object] = ACTIONS(141),
        [sym_value_base_type] = ACTIONS(69),
        [sym_identifier] = ACTIONS(147),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [20] = {
        [sym_preproc_call] = STATE(116),
        [sym_except_dcl] = STATE(606),
        [sym_interface_dcl] = STATE(606),
        [sym_interface_kind] = STATE(604),
        [sym_interface_forward_dcl] = STATE(601),
        [sym_interface_def] = STATE(601),
        [sym_interface_header] = STATE(544),
        [sym_bitset_dcl] = STATE(606),
        [sym_bitmask_dcl] = STATE(606),
        [sym_annotation_dcl] = STATE(606),
        [sym_annotation_appl] = STATE(174),
        [sym_template_module_dcl] = STATE(606),
        [sym_template_module_inst] = STATE(606),
        [sym_value_dcl] = STATE(606),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(606),
        [sym_enum_dcl] = STATE(606),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(606),
        [sym_union_def] = STATE(606),
        [sym_type_id_dcl] = STATE(606),
        [sym_type_prefix_dcl] = STATE(606),
        [sym_import_dcl] = STATE(606),
        [sym_value_abs_def] = STATE(586),
        [sym_component_dcl] = STATE(606),
        [sym_component_forward_dcl] = STATE(556),
        [sym_component_def] = STATE(556),
        [sym_component_header] = STATE(554),
        [sym_home_dcl] = STATE(606),
        [sym_home_header] = STATE(553),
        [sym__definition] = STATE(123),
        [sym_native_dcl] = STATE(606),
        [sym_module_dcl] = STATE(606),
        [sym_struct_forward_dcl] = STATE(606),
        [sym_struct_def] = STATE(606),
        [sym_predefine] = STATE(100),
        [sym_const_dcl] = STATE(606),
        [sym_comment] = STATE(20),
        [aux_sym_specification_repeat1] = STATE(95),
        [aux_sym_specification_repeat2] = STATE(26),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [ts_builtin_sym_end] = ACTIONS(595),
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
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_home] = ACTIONS(53),
        [anon_sym_native] = ACTIONS(55),
        [anon_sym_POUNDdefine] = ACTIONS(57),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [21] = {
        [sym_except_dcl] = STATE(606),
        [sym_interface_dcl] = STATE(606),
        [sym_interface_kind] = STATE(604),
        [sym_interface_forward_dcl] = STATE(601),
        [sym_interface_def] = STATE(601),
        [sym_interface_header] = STATE(544),
        [sym_bitset_dcl] = STATE(606),
        [sym_bitmask_dcl] = STATE(606),
        [sym_annotation_dcl] = STATE(606),
        [sym_annotation_appl] = STATE(174),
        [sym_template_module_dcl] = STATE(606),
        [sym_tpl_definition] = STATE(119),
        [sym_template_module_inst] = STATE(606),
        [sym_template_module_ref] = STATE(552),
        [sym_value_dcl] = STATE(606),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(606),
        [sym_enum_dcl] = STATE(606),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(606),
        [sym_union_def] = STATE(606),
        [sym_type_id_dcl] = STATE(606),
        [sym_type_prefix_dcl] = STATE(606),
        [sym_import_dcl] = STATE(606),
        [sym_value_abs_def] = STATE(586),
        [sym_component_dcl] = STATE(606),
        [sym_component_forward_dcl] = STATE(556),
        [sym_component_def] = STATE(556),
        [sym_component_header] = STATE(554),
        [sym_home_dcl] = STATE(606),
        [sym_home_header] = STATE(553),
        [sym__definition] = STATE(118),
        [sym_native_dcl] = STATE(606),
        [sym_module_dcl] = STATE(606),
        [sym_struct_forward_dcl] = STATE(606),
        [sym_struct_def] = STATE(606),
        [sym_predefine] = STATE(100),
        [sym_const_dcl] = STATE(606),
        [sym_comment] = STATE(21),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [aux_sym_template_module_dcl_repeat1] = STATE(23),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(597),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_alias] = ACTIONS(599),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_home] = ACTIONS(53),
        [anon_sym_native] = ACTIONS(55),
        [anon_sym_POUNDdefine] = ACTIONS(601),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [22] = {
        [sym_except_dcl] = STATE(606),
        [sym_interface_dcl] = STATE(606),
        [sym_interface_kind] = STATE(604),
        [sym_interface_forward_dcl] = STATE(601),
        [sym_interface_def] = STATE(601),
        [sym_interface_header] = STATE(544),
        [sym_bitset_dcl] = STATE(606),
        [sym_bitmask_dcl] = STATE(606),
        [sym_annotation_dcl] = STATE(606),
        [sym_annotation_appl] = STATE(174),
        [sym_template_module_dcl] = STATE(606),
        [sym_tpl_definition] = STATE(119),
        [sym_template_module_inst] = STATE(606),
        [sym_template_module_ref] = STATE(552),
        [sym_value_dcl] = STATE(606),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(606),
        [sym_enum_dcl] = STATE(606),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(606),
        [sym_union_def] = STATE(606),
        [sym_type_id_dcl] = STATE(606),
        [sym_type_prefix_dcl] = STATE(606),
        [sym_import_dcl] = STATE(606),
        [sym_value_abs_def] = STATE(586),
        [sym_component_dcl] = STATE(606),
        [sym_component_forward_dcl] = STATE(556),
        [sym_component_def] = STATE(556),
        [sym_component_header] = STATE(554),
        [sym_home_dcl] = STATE(606),
        [sym_home_header] = STATE(553),
        [sym__definition] = STATE(118),
        [sym_native_dcl] = STATE(606),
        [sym_module_dcl] = STATE(606),
        [sym_struct_forward_dcl] = STATE(606),
        [sym_struct_def] = STATE(606),
        [sym_predefine] = STATE(100),
        [sym_const_dcl] = STATE(606),
        [sym_comment] = STATE(22),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [aux_sym_template_module_dcl_repeat1] = STATE(21),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(603),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_alias] = ACTIONS(599),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_home] = ACTIONS(53),
        [anon_sym_native] = ACTIONS(55),
        [anon_sym_POUNDdefine] = ACTIONS(601),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [23] = {
        [sym_except_dcl] = STATE(606),
        [sym_interface_dcl] = STATE(606),
        [sym_interface_kind] = STATE(604),
        [sym_interface_forward_dcl] = STATE(601),
        [sym_interface_def] = STATE(601),
        [sym_interface_header] = STATE(544),
        [sym_bitset_dcl] = STATE(606),
        [sym_bitmask_dcl] = STATE(606),
        [sym_annotation_dcl] = STATE(606),
        [sym_annotation_appl] = STATE(174),
        [sym_template_module_dcl] = STATE(606),
        [sym_tpl_definition] = STATE(119),
        [sym_template_module_inst] = STATE(606),
        [sym_template_module_ref] = STATE(552),
        [sym_value_dcl] = STATE(606),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(606),
        [sym_enum_dcl] = STATE(606),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(606),
        [sym_union_def] = STATE(606),
        [sym_type_id_dcl] = STATE(606),
        [sym_type_prefix_dcl] = STATE(606),
        [sym_import_dcl] = STATE(606),
        [sym_value_abs_def] = STATE(586),
        [sym_component_dcl] = STATE(606),
        [sym_component_forward_dcl] = STATE(556),
        [sym_component_def] = STATE(556),
        [sym_component_header] = STATE(554),
        [sym_home_dcl] = STATE(606),
        [sym_home_header] = STATE(553),
        [sym__definition] = STATE(118),
        [sym_native_dcl] = STATE(606),
        [sym_module_dcl] = STATE(606),
        [sym_struct_forward_dcl] = STATE(606),
        [sym_struct_def] = STATE(606),
        [sym_predefine] = STATE(100),
        [sym_const_dcl] = STATE(606),
        [sym_comment] = STATE(23),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [aux_sym_template_module_dcl_repeat1] = STATE(23),
        [anon_sym_exception] = ACTIONS(605),
        [anon_sym_RBRACE] = ACTIONS(608),
        [anon_sym_local] = ACTIONS(610),
        [anon_sym_abstract] = ACTIONS(613),
        [anon_sym_interface] = ACTIONS(616),
        [anon_sym_bitset] = ACTIONS(619),
        [anon_sym_bitmask] = ACTIONS(622),
        [anon_sym_ATannotation] = ACTIONS(625),
        [anon_sym_AT] = ACTIONS(628),
        [anon_sym_module] = ACTIONS(631),
        [anon_sym_valuetype] = ACTIONS(634),
        [anon_sym_struct] = ACTIONS(637),
        [anon_sym_union] = ACTIONS(640),
        [anon_sym_enum] = ACTIONS(643),
        [anon_sym_const] = ACTIONS(646),
        [anon_sym_alias] = ACTIONS(649),
        [anon_sym_custom] = ACTIONS(652),
        [anon_sym_typedef] = ACTIONS(655),
        [anon_sym_ATignore_literal_names] = ACTIONS(658),
        [anon_sym_typeid] = ACTIONS(661),
        [anon_sym_typeprefix] = ACTIONS(664),
        [anon_sym_import] = ACTIONS(667),
        [anon_sym_component] = ACTIONS(670),
        [anon_sym_home] = ACTIONS(673),
        [anon_sym_native] = ACTIONS(676),
        [anon_sym_POUNDdefine] = ACTIONS(679),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [24] = {
        [sym_except_dcl] = STATE(606),
        [sym_interface_dcl] = STATE(606),
        [sym_interface_kind] = STATE(604),
        [sym_interface_forward_dcl] = STATE(601),
        [sym_interface_def] = STATE(601),
        [sym_interface_header] = STATE(544),
        [sym_bitset_dcl] = STATE(606),
        [sym_bitmask_dcl] = STATE(606),
        [sym_annotation_dcl] = STATE(606),
        [sym_annotation_appl] = STATE(174),
        [sym_template_module_dcl] = STATE(606),
        [sym_template_module_inst] = STATE(606),
        [sym_value_dcl] = STATE(606),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(606),
        [sym_enum_dcl] = STATE(606),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(606),
        [sym_union_def] = STATE(606),
        [sym_type_id_dcl] = STATE(606),
        [sym_type_prefix_dcl] = STATE(606),
        [sym_import_dcl] = STATE(606),
        [sym_value_abs_def] = STATE(586),
        [sym_component_dcl] = STATE(606),
        [sym_component_forward_dcl] = STATE(556),
        [sym_component_def] = STATE(556),
        [sym_component_header] = STATE(554),
        [sym_home_dcl] = STATE(606),
        [sym_home_header] = STATE(553),
        [sym__definition] = STATE(123),
        [sym_native_dcl] = STATE(606),
        [sym_module_dcl] = STATE(606),
        [sym_struct_forward_dcl] = STATE(606),
        [sym_struct_def] = STATE(606),
        [sym_predefine] = STATE(100),
        [sym_const_dcl] = STATE(606),
        [sym_comment] = STATE(24),
        [aux_sym_specification_repeat2] = STATE(24),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [ts_builtin_sym_end] = ACTIONS(682),
        [anon_sym_exception] = ACTIONS(684),
        [anon_sym_RBRACE] = ACTIONS(682),
        [anon_sym_local] = ACTIONS(687),
        [anon_sym_abstract] = ACTIONS(690),
        [anon_sym_interface] = ACTIONS(693),
        [anon_sym_bitset] = ACTIONS(696),
        [anon_sym_bitmask] = ACTIONS(699),
        [anon_sym_ATannotation] = ACTIONS(702),
        [anon_sym_AT] = ACTIONS(705),
        [anon_sym_module] = ACTIONS(708),
        [anon_sym_valuetype] = ACTIONS(711),
        [anon_sym_struct] = ACTIONS(714),
        [anon_sym_union] = ACTIONS(717),
        [anon_sym_enum] = ACTIONS(720),
        [anon_sym_const] = ACTIONS(723),
        [anon_sym_custom] = ACTIONS(726),
        [anon_sym_typedef] = ACTIONS(729),
        [anon_sym_ATignore_literal_names] = ACTIONS(732),
        [anon_sym_typeid] = ACTIONS(735),
        [anon_sym_typeprefix] = ACTIONS(738),
        [anon_sym_import] = ACTIONS(741),
        [anon_sym_component] = ACTIONS(744),
        [anon_sym_home] = ACTIONS(747),
        [anon_sym_native] = ACTIONS(750),
        [anon_sym_POUNDdefine] = ACTIONS(753),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [25] = {
        [sym_except_dcl] = STATE(606),
        [sym_interface_dcl] = STATE(606),
        [sym_interface_kind] = STATE(604),
        [sym_interface_forward_dcl] = STATE(601),
        [sym_interface_def] = STATE(601),
        [sym_interface_header] = STATE(544),
        [sym_bitset_dcl] = STATE(606),
        [sym_bitmask_dcl] = STATE(606),
        [sym_annotation_dcl] = STATE(606),
        [sym_annotation_appl] = STATE(174),
        [sym_template_module_dcl] = STATE(606),
        [sym_template_module_inst] = STATE(606),
        [sym_value_dcl] = STATE(606),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(606),
        [sym_enum_dcl] = STATE(606),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(606),
        [sym_union_def] = STATE(606),
        [sym_type_id_dcl] = STATE(606),
        [sym_type_prefix_dcl] = STATE(606),
        [sym_import_dcl] = STATE(606),
        [sym_value_abs_def] = STATE(586),
        [sym_component_dcl] = STATE(606),
        [sym_component_forward_dcl] = STATE(556),
        [sym_component_def] = STATE(556),
        [sym_component_header] = STATE(554),
        [sym_home_dcl] = STATE(606),
        [sym_home_header] = STATE(553),
        [sym__definition] = STATE(123),
        [sym_native_dcl] = STATE(606),
        [sym_module_dcl] = STATE(606),
        [sym_struct_forward_dcl] = STATE(606),
        [sym_struct_def] = STATE(606),
        [sym_predefine] = STATE(100),
        [sym_const_dcl] = STATE(606),
        [sym_comment] = STATE(25),
        [aux_sym_specification_repeat2] = STATE(24),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(756),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_home] = ACTIONS(53),
        [anon_sym_native] = ACTIONS(55),
        [anon_sym_POUNDdefine] = ACTIONS(601),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [26] = {
        [sym_except_dcl] = STATE(606),
        [sym_interface_dcl] = STATE(606),
        [sym_interface_kind] = STATE(604),
        [sym_interface_forward_dcl] = STATE(601),
        [sym_interface_def] = STATE(601),
        [sym_interface_header] = STATE(544),
        [sym_bitset_dcl] = STATE(606),
        [sym_bitmask_dcl] = STATE(606),
        [sym_annotation_dcl] = STATE(606),
        [sym_annotation_appl] = STATE(174),
        [sym_template_module_dcl] = STATE(606),
        [sym_template_module_inst] = STATE(606),
        [sym_value_dcl] = STATE(606),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(606),
        [sym_enum_dcl] = STATE(606),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(606),
        [sym_union_def] = STATE(606),
        [sym_type_id_dcl] = STATE(606),
        [sym_type_prefix_dcl] = STATE(606),
        [sym_import_dcl] = STATE(606),
        [sym_value_abs_def] = STATE(586),
        [sym_component_dcl] = STATE(606),
        [sym_component_forward_dcl] = STATE(556),
        [sym_component_def] = STATE(556),
        [sym_component_header] = STATE(554),
        [sym_home_dcl] = STATE(606),
        [sym_home_header] = STATE(553),
        [sym__definition] = STATE(123),
        [sym_native_dcl] = STATE(606),
        [sym_module_dcl] = STATE(606),
        [sym_struct_forward_dcl] = STATE(606),
        [sym_struct_def] = STATE(606),
        [sym_predefine] = STATE(100),
        [sym_const_dcl] = STATE(606),
        [sym_comment] = STATE(26),
        [aux_sym_specification_repeat2] = STATE(24),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [ts_builtin_sym_end] = ACTIONS(758),
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
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_home] = ACTIONS(53),
        [anon_sym_native] = ACTIONS(55),
        [anon_sym_POUNDdefine] = ACTIONS(601),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [27] = {
        [sym_except_dcl] = STATE(606),
        [sym_interface_dcl] = STATE(606),
        [sym_interface_kind] = STATE(604),
        [sym_interface_forward_dcl] = STATE(601),
        [sym_interface_def] = STATE(601),
        [sym_interface_header] = STATE(544),
        [sym_bitset_dcl] = STATE(606),
        [sym_bitmask_dcl] = STATE(606),
        [sym_annotation_dcl] = STATE(606),
        [sym_annotation_appl] = STATE(174),
        [sym_template_module_dcl] = STATE(606),
        [sym_template_module_inst] = STATE(606),
        [sym_value_dcl] = STATE(606),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(606),
        [sym_enum_dcl] = STATE(606),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(606),
        [sym_union_def] = STATE(606),
        [sym_type_id_dcl] = STATE(606),
        [sym_type_prefix_dcl] = STATE(606),
        [sym_import_dcl] = STATE(606),
        [sym_value_abs_def] = STATE(586),
        [sym_component_dcl] = STATE(606),
        [sym_component_forward_dcl] = STATE(556),
        [sym_component_def] = STATE(556),
        [sym_component_header] = STATE(554),
        [sym_home_dcl] = STATE(606),
        [sym_home_header] = STATE(553),
        [sym__definition] = STATE(123),
        [sym_native_dcl] = STATE(606),
        [sym_module_dcl] = STATE(606),
        [sym_struct_forward_dcl] = STATE(606),
        [sym_struct_def] = STATE(606),
        [sym_predefine] = STATE(100),
        [sym_const_dcl] = STATE(606),
        [sym_comment] = STATE(27),
        [aux_sym_specification_repeat2] = STATE(25),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(760),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_home] = ACTIONS(53),
        [anon_sym_native] = ACTIONS(55),
        [anon_sym_POUNDdefine] = ACTIONS(601),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [28] = {
        [sym_except_dcl] = STATE(606),
        [sym_interface_dcl] = STATE(606),
        [sym_interface_kind] = STATE(604),
        [sym_interface_forward_dcl] = STATE(601),
        [sym_interface_def] = STATE(601),
        [sym_interface_header] = STATE(544),
        [sym_bitset_dcl] = STATE(606),
        [sym_bitmask_dcl] = STATE(606),
        [sym_annotation_dcl] = STATE(606),
        [sym_annotation_appl] = STATE(174),
        [sym_template_module_dcl] = STATE(606),
        [sym_template_module_inst] = STATE(606),
        [sym_value_dcl] = STATE(606),
        [sym_value_def] = STATE(586),
        [sym_value_kind] = STATE(580),
        [sym_value_header] = STATE(572),
        [sym_value_forward_dcl] = STATE(586),
        [sym_typedef_dcl] = STATE(606),
        [sym_enum_dcl] = STATE(606),
        [sym_enum_anno] = STATE(560),
        [sym_union_forward_dcl] = STATE(606),
        [sym_union_def] = STATE(606),
        [sym_type_id_dcl] = STATE(606),
        [sym_type_prefix_dcl] = STATE(606),
        [sym_import_dcl] = STATE(606),
        [sym_value_abs_def] = STATE(586),
        [sym_component_dcl] = STATE(606),
        [sym_component_forward_dcl] = STATE(556),
        [sym_component_def] = STATE(556),
        [sym_component_header] = STATE(554),
        [sym_home_dcl] = STATE(606),
        [sym_home_header] = STATE(553),
        [sym__definition] = STATE(123),
        [sym_native_dcl] = STATE(606),
        [sym_module_dcl] = STATE(606),
        [sym_struct_forward_dcl] = STATE(606),
        [sym_struct_def] = STATE(606),
        [sym_predefine] = STATE(100),
        [sym_const_dcl] = STATE(606),
        [sym_comment] = STATE(28),
        [aux_sym_specification_repeat2] = STATE(24),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [ts_builtin_sym_end] = ACTIONS(595),
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
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_home] = ACTIONS(53),
        [anon_sym_native] = ACTIONS(55),
        [anon_sym_POUNDdefine] = ACTIONS(601),
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
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(762),
    1,
    anon_sym_RBRACE,
    ACTIONS(764),
    1,
    anon_sym_AT,
    STATE(29),
    1,
    sym_comment,
    STATE(39),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(77),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(211),
    1,
    sym_type_spec,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
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
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(764),
    1,
    anon_sym_AT,
    ACTIONS(766),
    1,
    anon_sym_RBRACE,
    STATE(30),
    1,
    sym_comment,
    STATE(37),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(77),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(211),
    1,
    sym_type_spec,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [290] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(764),
    1,
    anon_sym_AT,
    ACTIONS(768),
    1,
    anon_sym_RBRACE,
    STATE(31),
    1,
    sym_comment,
    STATE(34),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(77),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(211),
    1,
    sym_type_spec,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [435] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(764),
    1,
    anon_sym_AT,
    ACTIONS(770),
    1,
    anon_sym_RBRACE,
    STATE(32),
    1,
    sym_comment,
    STATE(37),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(77),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(211),
    1,
    sym_type_spec,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [580] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(764),
    1,
    anon_sym_AT,
    ACTIONS(772),
    1,
    anon_sym_RBRACE,
    STATE(33),
    1,
    sym_comment,
    STATE(37),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(77),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(211),
    1,
    sym_type_spec,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [725] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(764),
    1,
    anon_sym_AT,
    ACTIONS(774),
    1,
    anon_sym_RBRACE,
    STATE(34),
    1,
    sym_comment,
    STATE(37),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(77),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(211),
    1,
    sym_type_spec,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [870] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(764),
    1,
    anon_sym_AT,
    ACTIONS(776),
    1,
    anon_sym_RBRACE,
    STATE(30),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(35),
    1,
    sym_comment,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(77),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(211),
    1,
    sym_type_spec,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [1015] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(764),
    1,
    anon_sym_AT,
    ACTIONS(778),
    1,
    anon_sym_RBRACE,
    STATE(32),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(36),
    1,
    sym_comment,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(77),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(211),
    1,
    sym_type_spec,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [1160] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(786),
    1,
    anon_sym_longlong,
    ACTIONS(789),
    1,
    anon_sym_int64,
    ACTIONS(792),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(798),
    1,
    anon_sym_fixed,
    ACTIONS(801),
    1,
    sym_signed_tiny_int,
    ACTIONS(804),
    1,
    anon_sym_unsignedshort,
    ACTIONS(807),
    1,
    anon_sym_uint16,
    ACTIONS(813),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(816),
    1,
    anon_sym_uint64,
    ACTIONS(822),
    1,
    anon_sym_longdouble,
    ACTIONS(828),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(834),
    1,
    anon_sym_any,
    ACTIONS(837),
    1,
    anon_sym_sequence,
    ACTIONS(840),
    1,
    anon_sym_map,
    ACTIONS(843),
    1,
    anon_sym_RBRACE,
    ACTIONS(845),
    1,
    anon_sym_AT,
    ACTIONS(848),
    1,
    anon_sym_Object,
    ACTIONS(851),
    1,
    sym_identifier,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(77),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(211),
    1,
    sym_type_spec,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    ACTIONS(780),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(783),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(810),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(819),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(825),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(831),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(37),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(795),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
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
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(764),
    1,
    anon_sym_AT,
    ACTIONS(854),
    1,
    anon_sym_RBRACE,
    STATE(33),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(38),
    1,
    sym_comment,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(77),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(211),
    1,
    sym_type_spec,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
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
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(764),
    1,
    anon_sym_AT,
    ACTIONS(776),
    1,
    anon_sym_RBRACE,
    STATE(37),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(39),
    1,
    sym_comment,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(77),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(211),
    1,
    sym_type_spec,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [1593] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(125),
    1,
    anon_sym_enum,
    ACTIONS(127),
    1,
    anon_sym_const,
    ACTIONS(135),
    1,
    anon_sym_typedef,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(858),
    1,
    anon_sym_fixed,
    ACTIONS(860),
    1,
    anon_sym_any,
    ACTIONS(862),
    1,
    anon_sym_RBRACE,
    ACTIONS(864),
    1,
    anon_sym_ATignore_literal_names,
    STATE(40),
    1,
    sym_comment,
    STATE(42),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(84),
    1,
    sym_annotation_member,
    STATE(86),
    1,
    sym_annotation_body,
    STATE(449),
    1,
    sym_annotation_member_type,
    STATE(456),
    1,
    sym_scoped_name,
    STATE(560),
    1,
    sym_enum_anno,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(856),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(558),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(641),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(512),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [1737] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(125),
    1,
    anon_sym_enum,
    ACTIONS(127),
    1,
    anon_sym_const,
    ACTIONS(135),
    1,
    anon_sym_typedef,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(858),
    1,
    anon_sym_fixed,
    ACTIONS(860),
    1,
    anon_sym_any,
    ACTIONS(864),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(866),
    1,
    anon_sym_RBRACE,
    STATE(40),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(41),
    1,
    sym_comment,
    STATE(84),
    1,
    sym_annotation_member,
    STATE(86),
    1,
    sym_annotation_body,
    STATE(449),
    1,
    sym_annotation_member_type,
    STATE(456),
    1,
    sym_scoped_name,
    STATE(560),
    1,
    sym_enum_anno,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(856),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(558),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(641),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(512),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [1881] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(874),
    1,
    anon_sym_longlong,
    ACTIONS(877),
    1,
    anon_sym_int64,
    ACTIONS(880),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(886),
    1,
    anon_sym_fixed,
    ACTIONS(889),
    1,
    sym_signed_tiny_int,
    ACTIONS(892),
    1,
    anon_sym_unsignedshort,
    ACTIONS(895),
    1,
    anon_sym_uint16,
    ACTIONS(901),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(904),
    1,
    anon_sym_uint64,
    ACTIONS(910),
    1,
    anon_sym_longdouble,
    ACTIONS(916),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(922),
    1,
    anon_sym_any,
    ACTIONS(925),
    1,
    anon_sym_sequence,
    ACTIONS(928),
    1,
    anon_sym_RBRACE,
    ACTIONS(930),
    1,
    anon_sym_enum,
    ACTIONS(933),
    1,
    anon_sym_const,
    ACTIONS(936),
    1,
    anon_sym_typedef,
    ACTIONS(939),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(942),
    1,
    sym_identifier,
    STATE(84),
    1,
    sym_annotation_member,
    STATE(86),
    1,
    sym_annotation_body,
    STATE(449),
    1,
    sym_annotation_member_type,
    STATE(456),
    1,
    sym_scoped_name,
    STATE(560),
    1,
    sym_enum_anno,
    ACTIONS(868),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(871),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(883),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(898),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(907),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(913),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(919),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(42),
    2,
    sym_comment,
    aux_sym_annotation_dcl_repeat1,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(558),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(641),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(512),
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
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(764),
    1,
    anon_sym_AT,
    STATE(43),
    1,
    sym_comment,
    STATE(73),
    1,
    aux_sym_interface_def_repeat1,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(189),
    1,
    sym_type_spec,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
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
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(945),
    1,
    anon_sym_sequence,
    ACTIONS(949),
    1,
    anon_sym_const,
    STATE(44),
    1,
    sym_comment,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(387),
    1,
    sym_formal_parameter,
    STATE(392),
    1,
    sym_base_type_spec,
    STATE(591),
    1,
    sym_formal_parameters,
    STATE(596),
    1,
    sym_formal_parameter_type,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(585),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    ACTIONS(947),
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
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(951),
    1,
    anon_sym_GT,
    ACTIONS(953),
    1,
    anon_sym_COMMA,
    STATE(45),
    1,
    sym_comment,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    STATE(709),
    1,
    sym_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
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
    STATE(46),
    1,
    sym_comment,
    ACTIONS(957),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(955),
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
    STATE(47),
    1,
    sym_comment,
    ACTIONS(961),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(959),
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
    [2560] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(945),
    1,
    anon_sym_sequence,
    ACTIONS(949),
    1,
    anon_sym_const,
    STATE(48),
    1,
    sym_comment,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    STATE(477),
    1,
    sym_formal_parameter,
    STATE(596),
    1,
    sym_formal_parameter_type,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(585),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    ACTIONS(947),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [2687] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(49),
    1,
    sym_comment,
    ACTIONS(965),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(963),
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
    [2756] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(50),
    1,
    sym_comment,
    ACTIONS(969),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(967),
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
    [2825] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(51),
    1,
    sym_comment,
    ACTIONS(973),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(971),
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
    [2894] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(52),
    1,
    sym_comment,
    ACTIONS(977),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(975),
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
    [2963] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(53),
    1,
    sym_comment,
    ACTIONS(981),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(979),
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
    [3032] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(54),
    1,
    sym_comment,
    ACTIONS(985),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(983),
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
    [3099] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(55),
    1,
    sym_comment,
    STATE(392),
    1,
    sym_base_type_spec,
    STATE(494),
    1,
    sym_scoped_name,
    STATE(701),
    1,
    sym_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [3226] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    STATE(56),
    1,
    sym_comment,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    STATE(405),
    1,
    sym_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [3353] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    STATE(57),
    1,
    sym_comment,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    STATE(419),
    1,
    sym_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [3480] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(58),
    1,
    sym_comment,
    ACTIONS(989),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(987),
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
    [3547] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    STATE(59),
    1,
    sym_comment,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    STATE(423),
    1,
    sym_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [3674] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    STATE(60),
    1,
    sym_comment,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    STATE(416),
    1,
    sym_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [3801] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    STATE(61),
    1,
    sym_comment,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(377),
    1,
    sym_type_spec,
    STATE(392),
    1,
    sym_base_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [3928] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    STATE(62),
    1,
    sym_comment,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(308),
    1,
    sym_type_spec,
    STATE(392),
    1,
    sym_base_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [4055] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    STATE(63),
    1,
    sym_comment,
    STATE(195),
    1,
    sym_type_spec,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [4182] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(64),
    1,
    sym_comment,
    ACTIONS(969),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(967),
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
    [4249] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(65),
    1,
    sym_comment,
    ACTIONS(993),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(991),
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
    [4316] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(71),
    1,
    anon_sym_fixed,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    anon_sym_any,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(99),
    1,
    anon_sym_map,
    ACTIONS(141),
    1,
    anon_sym_Object,
    ACTIONS(147),
    1,
    sym_identifier,
    STATE(66),
    1,
    sym_comment,
    STATE(261),
    1,
    sym_scoped_name,
    STATE(392),
    1,
    sym_base_type_spec,
    STATE(490),
    1,
    sym_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(279),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(69),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_value_base_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(398),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(357),
    5,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    sym_object_type,
    [4443] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(67),
    1,
    sym_comment,
    ACTIONS(969),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(967),
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
    STATE(68),
    1,
    sym_comment,
    ACTIONS(997),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(995),
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
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(858),
    1,
    anon_sym_fixed,
    STATE(69),
    1,
    sym_comment,
    STATE(445),
    1,
    sym_scoped_name,
    STATE(620),
    1,
    sym_const_type,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(856),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(512),
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
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(87),
    1,
    anon_sym_longdouble,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(97),
    1,
    anon_sym_sequence,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(858),
    1,
    anon_sym_fixed,
    STATE(70),
    1,
    sym_comment,
    STATE(445),
    1,
    sym_scoped_name,
    STATE(555),
    1,
    sym_const_type,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(85),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(93),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(856),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(512),
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
    STATE(71),
    1,
    sym_comment,
    ACTIONS(1001),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(999),
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
    STATE(72),
    1,
    sym_comment,
    ACTIONS(1005),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1003),
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
    ACTIONS(1011),
    1,
    anon_sym_AT,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(73),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    ACTIONS(1009),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(1007),
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
    STATE(74),
    1,
    sym_comment,
    ACTIONS(1016),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1014),
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
    [4994] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(75),
    1,
    sym_comment,
    ACTIONS(1020),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1018),
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
    STATE(76),
    1,
    sym_comment,
    ACTIONS(1024),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(1022),
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
    [5088] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(1028),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1026),
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
    [5135] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(1032),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1030),
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
    [5182] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(1036),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1034),
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
    [5229] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(1040),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(1038),
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
    [5276] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(1044),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(1042),
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
    [5323] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(1048),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(1046),
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
    [5370] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(1052),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(1050),
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
    [5417] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(84),
    1,
    sym_comment,
    ACTIONS(1056),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(1054),
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
    [5464] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(85),
    1,
    sym_comment,
    ACTIONS(1060),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(1058),
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
    [5511] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(1064),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(1062),
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
    [5558] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1070),
    1,
    anon_sym_LPAREN,
    STATE(87),
    1,
    sym_comment,
    ACTIONS(1068),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
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
    [5607] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(88),
    1,
    sym_comment,
    ACTIONS(1074),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
    ACTIONS(1072),
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
    STATE(89),
    1,
    sym_comment,
    ACTIONS(1078),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
    ACTIONS(1076),
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
    [5699] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(63),
    1,
    anon_sym_longlong,
    ACTIONS(65),
    1,
    anon_sym_int64,
    ACTIONS(67),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(73),
    1,
    sym_signed_tiny_int,
    ACTIONS(75),
    1,
    anon_sym_unsignedshort,
    ACTIONS(77),
    1,
    anon_sym_uint16,
    ACTIONS(81),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(83),
    1,
    anon_sym_uint64,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(589),
    1,
    sym_identifier,
    ACTIONS(1080),
    1,
    sym_boolean_type,
    STATE(90),
    1,
    sym_comment,
    STATE(403),
    1,
    sym_scoped_name,
    STATE(507),
    1,
    sym_switch_type_spec,
    ACTIONS(59),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(61),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(79),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(89),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(605),
    2,
    sym_integer_type,
    sym_char_type,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [5782] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(1046),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(1048),
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
    [5827] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(1042),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(1044),
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
    [5872] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(1038),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(1040),
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
    [5917] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(1084),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
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
    anon_sym_map,
    anon_sym_Object,
    sym_value_base_type,
    sym_identifier,
    [5962] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1088),
    1,
    sym_preproc_directive,
    STATE(116),
    1,
    sym_preproc_call,
    STATE(95),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(1091),
    3,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(1086),
    22,
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
    anon_sym_native,
    [6008] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(1093),
    1,
    sym_identifier,
    STATE(96),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(371),
    1,
    sym_annotation_appl_param,
    STATE(581),
    1,
    sym_const_expr,
    STATE(702),
    1,
    sym_annotation_appl_params,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6094] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(1093),
    1,
    sym_identifier,
    STATE(97),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(371),
    1,
    sym_annotation_appl_param,
    STATE(581),
    1,
    sym_const_expr,
    STATE(711),
    1,
    sym_annotation_appl_params,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6180] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(1093),
    1,
    sym_identifier,
    STATE(98),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(371),
    1,
    sym_annotation_appl_param,
    STATE(581),
    1,
    sym_const_expr,
    STATE(582),
    1,
    sym_annotation_appl_params,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6266] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(1093),
    1,
    sym_identifier,
    STATE(99),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(371),
    1,
    sym_annotation_appl_param,
    STATE(581),
    1,
    sym_const_expr,
    STATE(708),
    1,
    sym_annotation_appl_params,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6352] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(100),
    1,
    sym_comment,
    ACTIONS(1097),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1095),
    25,
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
    anon_sym_native,
    anon_sym_POUNDdefine,
    [6393] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(101),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(288),
    1,
    sym_const_expr,
    STATE(615),
    1,
    sym_positive_int_const,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6476] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(102),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(288),
    1,
    sym_const_expr,
    STATE(639),
    1,
    sym_positive_int_const,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6559] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(103),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(288),
    1,
    sym_const_expr,
    STATE(703),
    1,
    sym_positive_int_const,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6642] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(1101),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1099),
    25,
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
    anon_sym_native,
    anon_sym_POUNDdefine,
    [6683] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(105),
    1,
    sym_comment,
    ACTIONS(1105),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1103),
    25,
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
    anon_sym_native,
    anon_sym_POUNDdefine,
    [6724] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(106),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(288),
    1,
    sym_const_expr,
    STATE(598),
    1,
    sym_positive_int_const,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6807] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(107),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(288),
    1,
    sym_const_expr,
    STATE(595),
    1,
    sym_positive_int_const,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6890] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(108),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(288),
    1,
    sym_const_expr,
    STATE(450),
    1,
    sym_positive_int_const,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6973] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(109),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(288),
    1,
    sym_const_expr,
    STATE(517),
    1,
    sym_positive_int_const,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7056] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(110),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(513),
    1,
    sym_const_expr,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7136] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(111),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(465),
    1,
    sym_const_expr,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7216] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(1109),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(1107),
    22,
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
    anon_sym_native,
    [7256] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(61),
    1,
    anon_sym_long,
    ACTIONS(79),
    1,
    anon_sym_unsignedlong,
    ACTIONS(1113),
    1,
    anon_sym_int32,
    ACTIONS(1115),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(1119),
    1,
    sym_signed_tiny_int,
    ACTIONS(1121),
    1,
    anon_sym_uint32,
    STATE(113),
    1,
    sym_comment,
    STATE(602),
    1,
    sym_integer_type,
    STATE(603),
    1,
    sym_destination_type,
    ACTIONS(63),
    2,
    anon_sym_longlong,
    anon_sym_int64,
    ACTIONS(75),
    2,
    anon_sym_unsignedshort,
    anon_sym_uint16,
    ACTIONS(81),
    2,
    anon_sym_unsignedlonglong,
    anon_sym_uint64,
    ACTIONS(1111),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(1117),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(248),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(242),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(243),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [7324] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(1125),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(1123),
    22,
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
    anon_sym_native,
    [7364] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(115),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(635),
    1,
    sym_const_expr,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7444] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(1129),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(1127),
    22,
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
    anon_sym_native,
    [7484] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(117),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(645),
    1,
    sym_const_expr,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7564] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(118),
    1,
    sym_comment,
    ACTIONS(1133),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1131),
    24,
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
    anon_sym_native,
    anon_sym_POUNDdefine,
    [7604] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(1137),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1135),
    24,
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
    anon_sym_native,
    anon_sym_POUNDdefine,
    [7644] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(1141),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1139),
    24,
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
    anon_sym_native,
    anon_sym_POUNDdefine,
    [7684] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(121),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(597),
    1,
    sym_const_expr,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7764] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(122),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(547),
    1,
    sym_const_expr,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7844] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(123),
    1,
    sym_comment,
    ACTIONS(1145),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1143),
    24,
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
    anon_sym_native,
    anon_sym_POUNDdefine,
    [7884] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(124),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    STATE(171),
    1,
    sym_or_expr,
    STATE(537),
    1,
    sym_const_expr,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7964] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(125),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8038] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(126),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    STATE(158),
    1,
    sym_and_expr,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8109] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(127),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(152),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8177] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(128),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(142),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    STATE(153),
    1,
    sym_add_expr,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8242] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(129),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(141),
    1,
    sym_literal,
    STATE(143),
    1,
    sym_mult_expr,
    STATE(150),
    1,
    sym_unary_operator,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8304] = 16,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1147),
    1,
    anon_sym_RBRACE,
    ACTIONS(1149),
    1,
    anon_sym_readonly,
    ACTIONS(1151),
    1,
    anon_sym_attribute,
    ACTIONS(1153),
    1,
    anon_sym_provides,
    ACTIONS(1155),
    1,
    anon_sym_uses,
    ACTIONS(1157),
    1,
    anon_sym_emits,
    ACTIONS(1159),
    1,
    anon_sym_publishes,
    ACTIONS(1161),
    1,
    anon_sym_consumes,
    STATE(130),
    1,
    sym_comment,
    STATE(133),
    1,
    aux_sym_component_body_repeat1,
    STATE(167),
    1,
    sym_component_export,
    STATE(600),
    1,
    sym_component_body,
    STATE(693),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(617),
    6,
    sym_attr_dcl,
    sym_provides_dcl,
    sym_uses_dcl,
    sym_emits_dcl,
    sym_publishes_dcl,
    sym_consumes_dcl,
    [8359] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(575),
    1,
    anon_sym_LPAREN,
    ACTIONS(577),
    1,
    anon_sym_TILDE,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    STATE(131),
    1,
    sym_comment,
    STATE(135),
    1,
    sym_scoped_name,
    STATE(141),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_expr,
    STATE(150),
    1,
    sym_unary_operator,
    ACTIONS(573),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8418] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1163),
    1,
    anon_sym_RBRACE,
    ACTIONS(1165),
    1,
    anon_sym_readonly,
    ACTIONS(1168),
    1,
    anon_sym_attribute,
    ACTIONS(1171),
    1,
    anon_sym_provides,
    ACTIONS(1174),
    1,
    anon_sym_uses,
    ACTIONS(1177),
    1,
    anon_sym_emits,
    ACTIONS(1180),
    1,
    anon_sym_publishes,
    ACTIONS(1183),
    1,
    anon_sym_consumes,
    STATE(167),
    1,
    sym_component_export,
    STATE(132),
    2,
    sym_comment,
    aux_sym_component_body_repeat1,
    STATE(693),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(617),
    6,
    sym_attr_dcl,
    sym_provides_dcl,
    sym_uses_dcl,
    sym_emits_dcl,
    sym_publishes_dcl,
    sym_consumes_dcl,
    [8468] = 15,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1149),
    1,
    anon_sym_readonly,
    ACTIONS(1151),
    1,
    anon_sym_attribute,
    ACTIONS(1153),
    1,
    anon_sym_provides,
    ACTIONS(1155),
    1,
    anon_sym_uses,
    ACTIONS(1157),
    1,
    anon_sym_emits,
    ACTIONS(1159),
    1,
    anon_sym_publishes,
    ACTIONS(1161),
    1,
    anon_sym_consumes,
    ACTIONS(1186),
    1,
    anon_sym_RBRACE,
    STATE(132),
    1,
    aux_sym_component_body_repeat1,
    STATE(133),
    1,
    sym_comment,
    STATE(167),
    1,
    sym_component_export,
    STATE(693),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(617),
    6,
    sym_attr_dcl,
    sym_provides_dcl,
    sym_uses_dcl,
    sym_emits_dcl,
    sym_publishes_dcl,
    sym_consumes_dcl,
    [8520] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    STATE(134),
    1,
    sym_comment,
    ACTIONS(1190),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(1192),
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
    [8553] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    STATE(135),
    1,
    sym_comment,
    ACTIONS(1194),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(1196),
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
    [8586] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(136),
    1,
    sym_comment,
    ACTIONS(1198),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1200),
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
    [8616] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(137),
    1,
    sym_comment,
    ACTIONS(1202),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1204),
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
    [8646] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(138),
    1,
    sym_comment,
    ACTIONS(1206),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1208),
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
    [8676] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(139),
    1,
    sym_comment,
    ACTIONS(1210),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1212),
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
    [8706] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(140),
    1,
    sym_comment,
    ACTIONS(1214),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1216),
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
    [8736] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(141),
    1,
    sym_comment,
    ACTIONS(1194),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1196),
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
    [8766] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1218),
    1,
    anon_sym_GT,
    ACTIONS(1224),
    1,
    anon_sym_SLASH,
    STATE(142),
    1,
    sym_comment,
    ACTIONS(1222),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(1220),
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
    [8800] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1224),
    1,
    anon_sym_SLASH,
    ACTIONS(1226),
    1,
    anon_sym_GT,
    STATE(143),
    1,
    sym_comment,
    ACTIONS(1222),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(1228),
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
    [8834] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(144),
    1,
    sym_comment,
    ACTIONS(1230),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1232),
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
    [8864] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(145),
    1,
    sym_comment,
    ACTIONS(1234),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1236),
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
    [8894] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(146),
    1,
    sym_comment,
    ACTIONS(1190),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1192),
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
    [8924] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(147),
    1,
    sym_comment,
    ACTIONS(1238),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1240),
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
    [8954] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(148),
    1,
    sym_comment,
    ACTIONS(1242),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1244),
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
    [8984] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(149),
    1,
    sym_comment,
    ACTIONS(1246),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1248),
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
    [9014] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(579),
    1,
    anon_sym_L,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(583),
    1,
    anon_sym_SQUOTE,
    ACTIONS(587),
    1,
    sym_number_literal,
    ACTIONS(589),
    1,
    sym_identifier,
    ACTIONS(1250),
    1,
    anon_sym_LPAREN,
    STATE(134),
    1,
    sym_scoped_name,
    STATE(146),
    1,
    sym_literal,
    STATE(150),
    1,
    sym_comment,
    ACTIONS(585),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(148),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [9060] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1046),
    1,
    anon_sym_SLASH,
    ACTIONS(1252),
    1,
    anon_sym_EQ,
    STATE(151),
    1,
    sym_comment,
    ACTIONS(1048),
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
    [9089] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1254),
    1,
    anon_sym_GT,
    STATE(152),
    1,
    sym_comment,
    ACTIONS(1258),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(1256),
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
    [9118] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1260),
    1,
    anon_sym_GT,
    STATE(153),
    1,
    sym_comment,
    ACTIONS(1258),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(1262),
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
    [9147] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1194),
    1,
    anon_sym_SLASH,
    ACTIONS(1264),
    1,
    anon_sym_GT,
    ACTIONS(1266),
    1,
    anon_sym_COMMA,
    STATE(154),
    1,
    sym_comment,
    ACTIONS(1196),
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
    [9180] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1268),
    1,
    anon_sym_GT,
    STATE(155),
    1,
    sym_comment,
    ACTIONS(1272),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(1270),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9207] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1274),
    1,
    anon_sym_GT,
    STATE(156),
    1,
    sym_comment,
    ACTIONS(1272),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(1276),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9234] = 12,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(17),
    1,
    anon_sym_interface,
    ACTIONS(117),
    1,
    anon_sym_AT,
    ACTIONS(1278),
    1,
    anon_sym_bitmask,
    ACTIONS(1280),
    1,
    anon_sym_struct,
    STATE(157),
    1,
    sym_comment,
    STATE(166),
    1,
    aux_sym_interface_def_repeat1,
    STATE(174),
    1,
    sym_annotation_appl,
    STATE(630),
    1,
    sym_interface_kind,
    STATE(636),
    1,
    sym_interface_header,
    ACTIONS(13),
    2,
    anon_sym_local,
    anon_sym_abstract,
    [9272] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1284),
    1,
    anon_sym_DOLLAR,
    STATE(158),
    1,
    sym_comment,
    ACTIONS(1282),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9295] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1284),
    1,
    anon_sym_DOLLAR,
    STATE(159),
    1,
    sym_comment,
    ACTIONS(1286),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9318] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(160),
    1,
    sym_comment,
    ACTIONS(1288),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(1290),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [9341] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1292),
    1,
    anon_sym_LPAREN,
    STATE(161),
    1,
    sym_comment,
    ACTIONS(1068),
    6,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [9365] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(162),
    1,
    sym_comment,
    ACTIONS(1294),
    8,
    anon_sym_RBRACE,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_provides,
    anon_sym_uses,
    anon_sym_emits,
    anon_sym_publishes,
    anon_sym_consumes,
    [9385] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1296),
    1,
    anon_sym_COMMA,
    ACTIONS(1298),
    1,
    anon_sym_SEMI,
    ACTIONS(1300),
    1,
    anon_sym_getraises,
    ACTIONS(1302),
    1,
    anon_sym_setraises,
    STATE(163),
    1,
    sym_comment,
    STATE(280),
    1,
    sym_get_excep_expr,
    STATE(391),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(523),
    1,
    sym_attr_raises_expr,
    STATE(524),
    1,
    sym_set_excep_expr,
    [9419] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1306),
    1,
    anon_sym_CARET,
    STATE(164),
    1,
    sym_comment,
    ACTIONS(1304),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9441] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1306),
    1,
    anon_sym_CARET,
    STATE(165),
    1,
    sym_comment,
    ACTIONS(1308),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9463] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1310),
    1,
    anon_sym_AT,
    STATE(174),
    1,
    sym_annotation_appl,
    STATE(166),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    ACTIONS(1009),
    5,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_struct,
    [9487] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(167),
    1,
    sym_comment,
    ACTIONS(1313),
    8,
    anon_sym_RBRACE,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_provides,
    anon_sym_uses,
    anon_sym_emits,
    anon_sym_publishes,
    anon_sym_consumes,
    [9507] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(168),
    1,
    sym_comment,
    ACTIONS(1315),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [9526] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1317),
    1,
    anon_sym_RPAREN,
    ACTIONS(1319),
    1,
    anon_sym_in,
    STATE(59),
    1,
    sym_param_attribute,
    STATE(169),
    1,
    sym_comment,
    STATE(327),
    1,
    sym_param_dcl,
    STATE(527),
    1,
    sym_parameter_dcls,
    ACTIONS(1321),
    2,
    anon_sym_out,
    anon_sym_inout,
    [9555] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(589),
    1,
    sym_identifier,
    ACTIONS(1323),
    1,
    anon_sym_L,
    STATE(170),
    1,
    sym_comment,
    STATE(421),
    1,
    sym_scoped_name,
    STATE(624),
    1,
    sym_string_literal,
    STATE(625),
    1,
    sym_imported_scope,
    [9586] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1327),
    1,
    anon_sym_PIPE,
    STATE(171),
    1,
    sym_comment,
    ACTIONS(1325),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9607] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(172),
    1,
    sym_comment,
    ACTIONS(1040),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [9625] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1329),
    1,
    anon_sym_RBRACE,
    ACTIONS(1331),
    1,
    anon_sym_AT,
    ACTIONS(1333),
    1,
    sym_identifier,
    STATE(173),
    1,
    sym_comment,
    STATE(200),
    1,
    aux_sym_interface_def_repeat1,
    STATE(359),
    1,
    sym_bit_value,
    STATE(491),
    1,
    sym_annotation_appl,
    [9653] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(174),
    1,
    sym_comment,
    ACTIONS(1074),
    6,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [9671] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1335),
    1,
    anon_sym_RBRACE,
    ACTIONS(1337),
    1,
    anon_sym_default,
    ACTIONS(1340),
    1,
    anon_sym_case,
    STATE(18),
    1,
    sym_case_label,
    STATE(386),
    1,
    sym_case,
    STATE(175),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [9697] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1345),
    1,
    anon_sym_LBRACK,
    STATE(176),
    1,
    sym_comment,
    STATE(180),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(271),
    1,
    sym_fixed_array_size,
    ACTIONS(1343),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9721] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(177),
    1,
    sym_comment,
    ACTIONS(1078),
    6,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [9739] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(178),
    1,
    sym_comment,
    ACTIONS(1048),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [9757] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1347),
    1,
    anon_sym_LBRACE,
    ACTIONS(1349),
    1,
    anon_sym_COLON,
    ACTIONS(1351),
    1,
    anon_sym_SEMI,
    ACTIONS(1353),
    1,
    anon_sym_supports,
    STATE(179),
    1,
    sym_comment,
    STATE(321),
    1,
    sym_component_inheritance_spec,
    STATE(664),
    1,
    sym_supported_interface_spec,
    [9785] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1357),
    1,
    anon_sym_LBRACK,
    STATE(271),
    1,
    sym_fixed_array_size,
    STATE(180),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(1355),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9807] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1331),
    1,
    anon_sym_AT,
    ACTIONS(1333),
    1,
    sym_identifier,
    ACTIONS(1360),
    1,
    anon_sym_RBRACE,
    STATE(181),
    1,
    sym_comment,
    STATE(194),
    1,
    aux_sym_interface_def_repeat1,
    STATE(329),
    1,
    sym_bit_value,
    STATE(491),
    1,
    sym_annotation_appl,
    [9835] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1362),
    1,
    anon_sym_RBRACE,
    ACTIONS(1364),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1366),
    1,
    sym_identifier,
    STATE(182),
    1,
    sym_comment,
    STATE(269),
    1,
    aux_sym_enumerator_repeat1,
    STATE(285),
    1,
    sym_enumerator,
    STATE(498),
    1,
    sym_enum_modifier,
    [9863] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(183),
    1,
    sym_comment,
    ACTIONS(1044),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [9881] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1368),
    1,
    anon_sym_RBRACE,
    ACTIONS(1370),
    1,
    anon_sym_default,
    ACTIONS(1372),
    1,
    anon_sym_case,
    STATE(18),
    1,
    sym_case_label,
    STATE(175),
    1,
    aux_sym_union_def_repeat1,
    STATE(184),
    1,
    sym_comment,
    STATE(386),
    1,
    sym_case,
    [9909] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(1374),
    1,
    anon_sym_Object,
    ACTIONS(1376),
    1,
    anon_sym_multiple,
    STATE(185),
    1,
    sym_comment,
    STATE(476),
    1,
    sym_scoped_name,
    STATE(657),
    1,
    sym_interface_type,
    [9937] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1364),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1366),
    1,
    sym_identifier,
    ACTIONS(1378),
    1,
    anon_sym_RBRACE,
    STATE(186),
    1,
    sym_comment,
    STATE(269),
    1,
    aux_sym_enumerator_repeat1,
    STATE(364),
    1,
    sym_enumerator,
    STATE(498),
    1,
    sym_enum_modifier,
    [9965] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1345),
    1,
    anon_sym_LBRACK,
    STATE(176),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(187),
    1,
    sym_comment,
    STATE(271),
    1,
    sym_fixed_array_size,
    ACTIONS(1315),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9989] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1370),
    1,
    anon_sym_default,
    ACTIONS(1372),
    1,
    anon_sym_case,
    ACTIONS(1380),
    1,
    anon_sym_RBRACE,
    STATE(18),
    1,
    sym_case_label,
    STATE(184),
    1,
    aux_sym_union_def_repeat1,
    STATE(188),
    1,
    sym_comment,
    STATE(386),
    1,
    sym_case,
    [10017] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1382),
    1,
    sym_identifier,
    STATE(189),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_declarator,
    STATE(348),
    1,
    sym_declarators,
    STATE(276),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10040] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1384),
    1,
    anon_sym_RBRACE,
    ACTIONS(1386),
    1,
    anon_sym_bitfield,
    STATE(190),
    1,
    sym_comment,
    STATE(197),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(319),
    1,
    sym_bitfield_spec,
    STATE(483),
    1,
    sym_bitfield,
    [10065] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1319),
    1,
    anon_sym_in,
    STATE(59),
    1,
    sym_param_attribute,
    STATE(191),
    1,
    sym_comment,
    STATE(428),
    1,
    sym_param_dcl,
    ACTIONS(1321),
    2,
    anon_sym_out,
    anon_sym_inout,
    [10088] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(1374),
    1,
    anon_sym_Object,
    STATE(192),
    1,
    sym_comment,
    STATE(476),
    1,
    sym_scoped_name,
    STATE(574),
    1,
    sym_interface_type,
    [10113] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(147),
    1,
    sym_identifier,
    ACTIONS(1374),
    1,
    anon_sym_Object,
    STATE(193),
    1,
    sym_comment,
    STATE(476),
    1,
    sym_scoped_name,
    STATE(659),
    1,
    sym_interface_type,
    [10138] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1331),
    1,
    anon_sym_AT,
    ACTIONS(1333),
    1,
    sym_identifier,
    STATE(194),
    1,
    sym_comment,
    STATE(216),
    1,
    aux_sym_interface_def_repeat1,
    STATE(359),
    1,
    sym_bit_value,
    STATE(491),
    1,
    sym_annotation_appl,
    [10163] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1382),
    1,
    sym_identifier,
    STATE(195),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_declarator,
    STATE(578),
    1,
    sym_declarators,
    STATE(276),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10186] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1364),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1366),
    1,
    sym_identifier,
    STATE(196),
    1,
    sym_comment,
    STATE(269),
    1,
    aux_sym_enumerator_repeat1,
    STATE(485),
    1,
    sym_enumerator,
    STATE(498),
    1,
    sym_enum_modifier,
    [10211] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1388),
    1,
    anon_sym_RBRACE,
    ACTIONS(1390),
    1,
    anon_sym_bitfield,
    STATE(319),
    1,
    sym_bitfield_spec,
    STATE(483),
    1,
    sym_bitfield,
    STATE(197),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [10234] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1386),
    1,
    anon_sym_bitfield,
    ACTIONS(1393),
    1,
    anon_sym_RBRACE,
    STATE(198),
    1,
    sym_comment,
    STATE(202),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(319),
    1,
    sym_bitfield_spec,
    STATE(483),
    1,
    sym_bitfield,
    [10259] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1386),
    1,
    anon_sym_bitfield,
    ACTIONS(1395),
    1,
    anon_sym_RBRACE,
    STATE(190),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(199),
    1,
    sym_comment,
    STATE(319),
    1,
    sym_bitfield_spec,
    STATE(483),
    1,
    sym_bitfield,
    [10284] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1331),
    1,
    anon_sym_AT,
    ACTIONS(1333),
    1,
    sym_identifier,
    STATE(200),
    1,
    sym_comment,
    STATE(216),
    1,
    aux_sym_interface_def_repeat1,
    STATE(278),
    1,
    sym_bit_value,
    STATE(491),
    1,
    sym_annotation_appl,
    [10309] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1331),
    1,
    anon_sym_AT,
    ACTIONS(1333),
    1,
    sym_identifier,
    STATE(201),
    1,
    sym_comment,
    STATE(203),
    1,
    aux_sym_interface_def_repeat1,
    STATE(455),
    1,
    sym_bit_value,
    STATE(491),
    1,
    sym_annotation_appl,
    [10334] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1386),
    1,
    anon_sym_bitfield,
    ACTIONS(1397),
    1,
    anon_sym_RBRACE,
    STATE(197),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(202),
    1,
    sym_comment,
    STATE(319),
    1,
    sym_bitfield_spec,
    STATE(483),
    1,
    sym_bitfield,
    [10359] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1331),
    1,
    anon_sym_AT,
    ACTIONS(1333),
    1,
    sym_identifier,
    STATE(203),
    1,
    sym_comment,
    STATE(216),
    1,
    aux_sym_interface_def_repeat1,
    STATE(448),
    1,
    sym_bit_value,
    STATE(491),
    1,
    sym_annotation_appl,
    [10384] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1296),
    1,
    anon_sym_COMMA,
    ACTIONS(1399),
    1,
    anon_sym_SEMI,
    ACTIONS(1401),
    1,
    anon_sym_raises,
    STATE(204),
    1,
    sym_comment,
    STATE(354),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(563),
    1,
    sym_raises_expr,
    [10409] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1403),
    1,
    anon_sym_COMMA,
    STATE(205),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    ACTIONS(1406),
    3,
    anon_sym_RPAREN,
    anon_sym_LBRACE,
    anon_sym_manages,
    [10428] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    STATE(206),
    1,
    sym_comment,
    ACTIONS(1406),
    4,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_LBRACE,
    anon_sym_manages,
    [10447] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1408),
    1,
    anon_sym_LBRACE,
    ACTIONS(1410),
    1,
    anon_sym_COLON,
    ACTIONS(1412),
    1,
    anon_sym_SEMI,
    ACTIONS(1414),
    1,
    anon_sym_supports,
    STATE(207),
    1,
    sym_comment,
    STATE(692),
    1,
    sym_value_inheritance_spec,
    [10472] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1353),
    1,
    anon_sym_supports,
    ACTIONS(1416),
    1,
    anon_sym_COLON,
    ACTIONS(1418),
    1,
    anon_sym_manages,
    STATE(208),
    1,
    sym_comment,
    STATE(310),
    1,
    sym_home_inheritance_spec,
    STATE(681),
    1,
    sym_supported_interface_spec,
    [10497] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1420),
    1,
    anon_sym_COMMA,
    STATE(209),
    1,
    sym_comment,
    STATE(260),
    1,
    aux_sym_raises_expr_repeat1,
    ACTIONS(1422),
    2,
    anon_sym_LBRACE,
    anon_sym_manages,
    [10520] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(589),
    1,
    sym_identifier,
    ACTIONS(1424),
    1,
    anon_sym_truncatable,
    STATE(210),
    1,
    sym_comment,
    STATE(272),
    1,
    sym_scoped_name,
    STATE(274),
    1,
    sym_value_name,
    [10545] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1382),
    1,
    sym_identifier,
    STATE(211),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_declarator,
    STATE(342),
    1,
    sym_declarators,
    STATE(276),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10568] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(117),
    1,
    anon_sym_AT,
    ACTIONS(1278),
    1,
    anon_sym_bitmask,
    ACTIONS(1280),
    1,
    anon_sym_struct,
    STATE(166),
    1,
    aux_sym_interface_def_repeat1,
    STATE(174),
    1,
    sym_annotation_appl,
    STATE(212),
    1,
    sym_comment,
    [10593] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1382),
    1,
    sym_identifier,
    STATE(213),
    1,
    sym_comment,
    STATE(344),
    1,
    sym_any_declarator,
    STATE(646),
    1,
    sym_any_declarators,
    STATE(462),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10616] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1426),
    1,
    anon_sym_COMMA,
    ACTIONS(1429),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(214),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [10634] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1431),
    1,
    anon_sym_COMMA,
    STATE(215),
    1,
    sym_comment,
    STATE(249),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(1433),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [10654] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1009),
    1,
    sym_identifier,
    ACTIONS(1435),
    1,
    anon_sym_AT,
    STATE(491),
    1,
    sym_annotation_appl,
    STATE(216),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    [10674] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1438),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1440),
    1,
    anon_sym_LPAREN,
    STATE(217),
    1,
    sym_comment,
    ACTIONS(1068),
    2,
    anon_sym_AT,
    sym_identifier,
    [10694] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(218),
    1,
    sym_comment,
    STATE(305),
    1,
    sym_scoped_name,
    STATE(668),
    1,
    sym_interface_name,
    [10716] = 4,
    ACTIONS(1444),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1446),
    1,
    anon_sym_SLASH_STAR,
    STATE(219),
    1,
    sym_comment,
    ACTIONS(1038),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [10732] = 4,
    ACTIONS(1444),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1446),
    1,
    anon_sym_SLASH_STAR,
    STATE(220),
    1,
    sym_comment,
    ACTIONS(1042),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [10748] = 4,
    ACTIONS(1444),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1446),
    1,
    anon_sym_SLASH_STAR,
    STATE(221),
    1,
    sym_comment,
    ACTIONS(1046),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [10764] = 6,
    ACTIONS(1007),
    1,
    aux_sym_comment_token1,
    ACTIONS(1444),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1446),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1448),
    1,
    anon_sym_AT,
    STATE(488),
    1,
    sym_annotation_appl,
    STATE(222),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    [10784] = 6,
    ACTIONS(1444),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1446),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1451),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1453),
    1,
    anon_sym_LPAREN,
    STATE(223),
    1,
    sym_comment,
    ACTIONS(1066),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [10804] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1420),
    1,
    anon_sym_COMMA,
    ACTIONS(1455),
    1,
    anon_sym_RPAREN,
    STATE(224),
    1,
    sym_comment,
    STATE(318),
    1,
    aux_sym_raises_expr_repeat1,
    [10826] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1382),
    1,
    sym_identifier,
    STATE(225),
    1,
    sym_comment,
    STATE(662),
    1,
    sym_declarator,
    STATE(276),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10846] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1420),
    1,
    anon_sym_COMMA,
    ACTIONS(1457),
    1,
    anon_sym_RPAREN,
    STATE(226),
    1,
    sym_comment,
    STATE(333),
    1,
    aux_sym_raises_expr_repeat1,
    [10868] = 7,
    ACTIONS(1444),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1446),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1459),
    1,
    anon_sym_AT,
    ACTIONS(1461),
    1,
    aux_sym_comment_token2,
    STATE(227),
    1,
    sym_comment,
    STATE(230),
    1,
    aux_sym_interface_def_repeat1,
    STATE(488),
    1,
    sym_annotation_appl,
    [10890] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(228),
    1,
    sym_comment,
    STATE(305),
    1,
    sym_scoped_name,
    STATE(366),
    1,
    sym_interface_name,
    [10912] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1401),
    1,
    anon_sym_raises,
    STATE(229),
    1,
    sym_comment,
    STATE(425),
    1,
    sym_raises_expr,
    ACTIONS(1463),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [10932] = 7,
    ACTIONS(1444),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1446),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1459),
    1,
    anon_sym_AT,
    ACTIONS(1465),
    1,
    aux_sym_comment_token1,
    STATE(222),
    1,
    aux_sym_interface_def_repeat1,
    STATE(230),
    1,
    sym_comment,
    STATE(488),
    1,
    sym_annotation_appl,
    [10954] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1467),
    1,
    anon_sym_COMMA,
    ACTIONS(1470),
    2,
    anon_sym_LBRACE,
    anon_sym_supports,
    STATE(231),
    2,
    sym_comment,
    aux_sym_value_inheritance_spec_repeat1,
    [10972] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1472),
    1,
    anon_sym_COMMA,
    ACTIONS(1474),
    1,
    anon_sym_LBRACE,
    ACTIONS(1476),
    1,
    anon_sym_supports,
    STATE(231),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    STATE(232),
    1,
    sym_comment,
    [10994] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(233),
    1,
    sym_comment,
    STATE(305),
    1,
    sym_scoped_name,
    STATE(372),
    1,
    sym_interface_name,
    [11016] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1401),
    1,
    anon_sym_raises,
    STATE(234),
    1,
    sym_comment,
    STATE(427),
    1,
    sym_raises_expr,
    ACTIONS(1478),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [11036] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1480),
    1,
    anon_sym_RPAREN,
    ACTIONS(1482),
    1,
    anon_sym_in,
    STATE(235),
    1,
    sym_comment,
    STATE(362),
    1,
    sym_in_param_dcl,
    STATE(573),
    1,
    sym_in_parameter_dcls,
    [11058] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1484),
    1,
    anon_sym_LBRACE,
    ACTIONS(1486),
    1,
    anon_sym_COLON,
    STATE(236),
    1,
    sym_comment,
    ACTIONS(1488),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [11078] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1490),
    1,
    anon_sym_LBRACE,
    ACTIONS(1492),
    1,
    anon_sym_primarykey,
    STATE(237),
    1,
    sym_comment,
    STATE(561),
    1,
    sym_primary_key_spec,
    [11100] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(238),
    1,
    sym_comment,
    ACTIONS(1494),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [11116] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(239),
    1,
    sym_comment,
    ACTIONS(1496),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11132] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(240),
    1,
    sym_comment,
    ACTIONS(1498),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11148] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(241),
    1,
    sym_comment,
    ACTIONS(1500),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11164] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(242),
    1,
    sym_comment,
    ACTIONS(1502),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11180] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(243),
    1,
    sym_comment,
    ACTIONS(1504),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11196] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(244),
    1,
    sym_comment,
    ACTIONS(1506),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11212] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(245),
    1,
    sym_comment,
    ACTIONS(1508),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11228] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(246),
    1,
    sym_comment,
    ACTIONS(1510),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11244] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1512),
    1,
    anon_sym_LT,
    STATE(247),
    1,
    sym_comment,
    ACTIONS(1514),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11262] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(248),
    1,
    sym_comment,
    ACTIONS(1516),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11278] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1431),
    1,
    anon_sym_COMMA,
    STATE(214),
    1,
    aux_sym_declarators_repeat1,
    STATE(249),
    1,
    sym_comment,
    ACTIONS(1518),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [11298] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1382),
    1,
    sym_identifier,
    STATE(250),
    1,
    sym_comment,
    STATE(283),
    1,
    sym_declarator,
    STATE(276),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [11318] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1520),
    1,
    anon_sym_RPAREN,
    ACTIONS(1522),
    1,
    anon_sym_in,
    STATE(251),
    1,
    sym_comment,
    STATE(281),
    1,
    sym_factory_param_dcl,
    STATE(535),
    1,
    sym_factory_param_dcls,
    [11340] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1524),
    1,
    anon_sym_RPAREN,
    ACTIONS(1526),
    1,
    anon_sym_in,
    STATE(252),
    1,
    sym_comment,
    STATE(334),
    1,
    sym_init_param_dcl,
    STATE(532),
    1,
    sym_init_param_dcls,
    [11362] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1472),
    1,
    anon_sym_COMMA,
    ACTIONS(1528),
    1,
    anon_sym_LBRACE,
    ACTIONS(1530),
    1,
    anon_sym_supports,
    STATE(231),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    STATE(253),
    1,
    sym_comment,
    [11384] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(254),
    1,
    sym_comment,
    STATE(295),
    1,
    sym_interface_name,
    STATE(305),
    1,
    sym_scoped_name,
    [11406] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(255),
    1,
    sym_comment,
    STATE(272),
    1,
    sym_scoped_name,
    STATE(296),
    1,
    sym_value_name,
    [11428] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1472),
    1,
    anon_sym_COMMA,
    ACTIONS(1528),
    1,
    anon_sym_LBRACE,
    ACTIONS(1530),
    1,
    anon_sym_supports,
    STATE(232),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    STATE(256),
    1,
    sym_comment,
    [11450] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1532),
    1,
    anon_sym_RPAREN,
    ACTIONS(1534),
    1,
    anon_sym_L,
    STATE(257),
    1,
    sym_comment,
    STATE(331),
    1,
    sym_string_literal,
    [11472] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(258),
    1,
    sym_comment,
    STATE(305),
    1,
    sym_scoped_name,
    STATE(497),
    1,
    sym_interface_name,
    [11494] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1492),
    1,
    anon_sym_primarykey,
    ACTIONS(1536),
    1,
    anon_sym_LBRACE,
    STATE(259),
    1,
    sym_comment,
    STATE(616),
    1,
    sym_primary_key_spec,
    [11516] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1420),
    1,
    anon_sym_COMMA,
    STATE(205),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(260),
    1,
    sym_comment,
    ACTIONS(1538),
    2,
    anon_sym_LBRACE,
    anon_sym_manages,
    [11536] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1438),
    1,
    anon_sym_COLON_COLON,
    STATE(261),
    1,
    sym_comment,
    ACTIONS(1266),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11554] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1540),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1543),
    1,
    sym_identifier,
    STATE(498),
    1,
    sym_enum_modifier,
    STATE(262),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [11574] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1534),
    1,
    anon_sym_L,
    STATE(263),
    1,
    sym_comment,
    STATE(650),
    1,
    sym_string_literal,
    [11596] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1534),
    1,
    anon_sym_L,
    STATE(264),
    1,
    sym_comment,
    STATE(651),
    1,
    sym_string_literal,
    [11618] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1545),
    1,
    anon_sym_LBRACE,
    ACTIONS(1547),
    1,
    anon_sym_COLON,
    ACTIONS(1549),
    1,
    anon_sym_SEMI,
    STATE(265),
    1,
    sym_comment,
    STATE(690),
    1,
    sym_interface_inheritance_spec,
    [11640] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1410),
    1,
    anon_sym_COLON,
    ACTIONS(1414),
    1,
    anon_sym_supports,
    ACTIONS(1551),
    1,
    anon_sym_LBRACE,
    STATE(266),
    1,
    sym_comment,
    STATE(522),
    1,
    sym_value_inheritance_spec,
    [11662] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(267),
    1,
    sym_comment,
    ACTIONS(1553),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11678] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(256),
    1,
    sym_value_name,
    STATE(268),
    1,
    sym_comment,
    STATE(272),
    1,
    sym_scoped_name,
    [11700] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1364),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1555),
    1,
    sym_identifier,
    STATE(262),
    1,
    aux_sym_enumerator_repeat1,
    STATE(269),
    1,
    sym_comment,
    STATE(498),
    1,
    sym_enum_modifier,
    [11722] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(270),
    1,
    sym_comment,
    STATE(305),
    1,
    sym_scoped_name,
    STATE(306),
    1,
    sym_interface_name,
    [11744] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(271),
    1,
    sym_comment,
    ACTIONS(1557),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [11760] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    STATE(272),
    1,
    sym_comment,
    ACTIONS(1559),
    3,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    anon_sym_supports,
    [11778] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1382),
    1,
    sym_identifier,
    STATE(273),
    1,
    sym_comment,
    STATE(407),
    1,
    sym_any_declarator,
    STATE(462),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [11798] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1472),
    1,
    anon_sym_COMMA,
    ACTIONS(1561),
    1,
    anon_sym_LBRACE,
    ACTIONS(1563),
    1,
    anon_sym_supports,
    STATE(253),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    STATE(274),
    1,
    sym_comment,
    [11820] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1492),
    1,
    anon_sym_primarykey,
    ACTIONS(1565),
    1,
    anon_sym_LBRACE,
    STATE(275),
    1,
    sym_comment,
    STATE(592),
    1,
    sym_primary_key_spec,
    [11842] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(276),
    1,
    sym_comment,
    ACTIONS(1567),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [11857] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(263),
    1,
    sym_scoped_name,
    STATE(277),
    1,
    sym_comment,
    [11876] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1569),
    1,
    anon_sym_COMMA,
    ACTIONS(1571),
    1,
    anon_sym_RBRACE,
    STATE(278),
    1,
    sym_comment,
    STATE(394),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [11895] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(279),
    1,
    sym_comment,
    ACTIONS(1573),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11910] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1302),
    1,
    anon_sym_setraises,
    ACTIONS(1575),
    1,
    anon_sym_SEMI,
    STATE(280),
    1,
    sym_comment,
    STATE(569),
    1,
    sym_set_excep_expr,
    [11929] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1577),
    1,
    anon_sym_COMMA,
    ACTIONS(1579),
    1,
    anon_sym_RPAREN,
    STATE(281),
    1,
    sym_comment,
    STATE(396),
    1,
    aux_sym_factory_param_dcls_repeat1,
    [11948] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1401),
    1,
    anon_sym_raises,
    ACTIONS(1581),
    1,
    anon_sym_SEMI,
    STATE(282),
    1,
    sym_comment,
    STATE(587),
    1,
    sym_raises_expr,
    [11967] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(283),
    1,
    sym_comment,
    ACTIONS(1429),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [11982] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1583),
    1,
    anon_sym_COMMA,
    ACTIONS(1586),
    1,
    anon_sym_LBRACE,
    STATE(284),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [11999] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1378),
    1,
    anon_sym_RBRACE,
    ACTIONS(1588),
    1,
    anon_sym_COMMA,
    STATE(285),
    1,
    sym_comment,
    STATE(393),
    1,
    aux_sym_enum_dcl_repeat1,
    [12018] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1590),
    1,
    anon_sym_GT,
    ACTIONS(1592),
    1,
    anon_sym_COMMA,
    STATE(286),
    1,
    sym_comment,
    STATE(388),
    1,
    aux_sym_actual_parameters_repeat1,
    [12037] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1594),
    1,
    anon_sym_SEMI,
    ACTIONS(1596),
    1,
    anon_sym_switch,
    ACTIONS(1598),
    1,
    sym_identifier,
    STATE(287),
    1,
    sym_comment,
    [12056] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(288),
    1,
    sym_comment,
    ACTIONS(1600),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [12071] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(289),
    1,
    sym_comment,
    ACTIONS(1602),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12086] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1604),
    1,
    sym_identifier,
    STATE(217),
    1,
    sym_scoped_name,
    STATE(290),
    1,
    sym_comment,
    [12105] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1606),
    1,
    anon_sym_SEMI,
    ACTIONS(1608),
    1,
    anon_sym_context,
    STATE(291),
    1,
    sym_comment,
    STATE(671),
    1,
    sym_context_expr,
    [12124] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1610),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1612),
    1,
    sym_identifier,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(292),
    1,
    sym_comment,
    [12143] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1608),
    1,
    anon_sym_context,
    ACTIONS(1614),
    1,
    anon_sym_SEMI,
    STATE(293),
    1,
    sym_comment,
    STATE(671),
    1,
    sym_context_expr,
    [12162] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1616),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1618),
    1,
    sym_identifier,
    STATE(223),
    1,
    sym_scoped_name,
    STATE(294),
    1,
    sym_comment,
    [12181] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1474),
    1,
    anon_sym_LBRACE,
    ACTIONS(1620),
    1,
    anon_sym_COMMA,
    STATE(295),
    1,
    sym_comment,
    STATE(374),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [12200] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(296),
    1,
    sym_comment,
    ACTIONS(1470),
    3,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    anon_sym_supports,
    [12215] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1622),
    1,
    anon_sym_COMMA,
    ACTIONS(1624),
    1,
    anon_sym_SEMI,
    STATE(297),
    1,
    sym_comment,
    STATE(390),
    1,
    aux_sym_any_declarators_repeat1,
    [12234] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1401),
    1,
    anon_sym_raises,
    ACTIONS(1626),
    1,
    anon_sym_SEMI,
    STATE(298),
    1,
    sym_comment,
    STATE(593),
    1,
    sym_raises_expr,
    [12253] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(161),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_comment,
    [12272] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    STATE(300),
    1,
    sym_comment,
    ACTIONS(1628),
    2,
    anon_sym_LBRACE,
    anon_sym_supports,
    [12289] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1630),
    1,
    sym_identifier,
    STATE(301),
    1,
    sym_comment,
    STATE(469),
    1,
    sym_scoped_name,
    [12308] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    STATE(302),
    1,
    sym_comment,
    ACTIONS(1632),
    2,
    anon_sym_supports,
    anon_sym_manages,
    [12325] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(259),
    1,
    sym_scoped_name,
    STATE(303),
    1,
    sym_comment,
    [12344] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(304),
    1,
    sym_comment,
    ACTIONS(1634),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12359] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    STATE(305),
    1,
    sym_comment,
    ACTIONS(1636),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [12376] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1620),
    1,
    anon_sym_COMMA,
    ACTIONS(1638),
    1,
    anon_sym_LBRACE,
    STATE(306),
    1,
    sym_comment,
    STATE(378),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [12395] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1604),
    1,
    sym_identifier,
    STATE(307),
    1,
    sym_comment,
    STATE(475),
    1,
    sym_scoped_name,
    [12414] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1640),
    1,
    sym_identifier,
    STATE(163),
    1,
    sym_simple_declarator,
    STATE(308),
    1,
    sym_comment,
    STATE(589),
    1,
    sym_attr_declarator,
    [12433] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1642),
    1,
    anon_sym_COMMA,
    ACTIONS(1645),
    1,
    anon_sym_RBRACE,
    STATE(309),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [12450] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1353),
    1,
    anon_sym_supports,
    ACTIONS(1647),
    1,
    anon_sym_manages,
    STATE(310),
    1,
    sym_comment,
    STATE(682),
    1,
    sym_supported_interface_spec,
    [12469] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1649),
    1,
    anon_sym_GT,
    ACTIONS(1651),
    1,
    anon_sym_COMMA,
    STATE(311),
    2,
    sym_comment,
    aux_sym_formal_parameter_names_repeat1,
    [12486] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1654),
    1,
    anon_sym_GT,
    ACTIONS(1656),
    1,
    anon_sym_COMMA,
    STATE(312),
    2,
    sym_comment,
    aux_sym_actual_parameters_repeat1,
    [12503] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1048),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1659),
    1,
    anon_sym_LT,
    ACTIONS(1661),
    1,
    anon_sym_LBRACE,
    STATE(313),
    1,
    sym_comment,
    [12522] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1663),
    1,
    anon_sym_GT,
    ACTIONS(1665),
    1,
    anon_sym_COMMA,
    STATE(311),
    1,
    aux_sym_formal_parameter_names_repeat1,
    STATE(314),
    1,
    sym_comment,
    [12541] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(275),
    1,
    sym_scoped_name,
    STATE(315),
    1,
    sym_comment,
    [12560] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1667),
    1,
    anon_sym_GT,
    ACTIONS(1669),
    1,
    anon_sym_COMMA,
    STATE(316),
    2,
    sym_comment,
    aux_sym_formal_parameters_repeat1,
    [12577] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(302),
    1,
    sym_scoped_name,
    STATE(317),
    1,
    sym_comment,
    [12596] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1420),
    1,
    anon_sym_COMMA,
    ACTIONS(1672),
    1,
    anon_sym_RPAREN,
    STATE(205),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(318),
    1,
    sym_comment,
    [12615] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1674),
    1,
    anon_sym_SEMI,
    ACTIONS(1676),
    1,
    sym_identifier,
    STATE(319),
    1,
    sym_comment,
    STATE(352),
    1,
    aux_sym_bitfield_repeat1,
    [12634] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(320),
    1,
    sym_comment,
    ACTIONS(1678),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [12649] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1353),
    1,
    anon_sym_supports,
    ACTIONS(1680),
    1,
    anon_sym_LBRACE,
    STATE(321),
    1,
    sym_comment,
    STATE(684),
    1,
    sym_supported_interface_spec,
    [12668] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1665),
    1,
    anon_sym_COMMA,
    ACTIONS(1682),
    1,
    anon_sym_GT,
    STATE(314),
    1,
    aux_sym_formal_parameter_names_repeat1,
    STATE(322),
    1,
    sym_comment,
    [12687] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1684),
    1,
    anon_sym_COMMA,
    ACTIONS(1687),
    1,
    anon_sym_RPAREN,
    STATE(323),
    2,
    sym_comment,
    aux_sym_annotation_appl_params_repeat1,
    [12704] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1620),
    1,
    anon_sym_COMMA,
    ACTIONS(1689),
    1,
    anon_sym_LBRACE,
    STATE(284),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(324),
    1,
    sym_comment,
    [12723] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(209),
    1,
    sym_scoped_name,
    STATE(325),
    1,
    sym_comment,
    [12742] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1691),
    1,
    anon_sym_COMMA,
    ACTIONS(1694),
    1,
    anon_sym_RPAREN,
    STATE(326),
    2,
    sym_comment,
    aux_sym_in_parameter_dcls_repeat1,
    [12759] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1696),
    1,
    anon_sym_COMMA,
    ACTIONS(1698),
    1,
    anon_sym_RPAREN,
    STATE(327),
    1,
    sym_comment,
    STATE(370),
    1,
    aux_sym_parameter_dcls_repeat1,
    [12778] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1545),
    1,
    anon_sym_LBRACE,
    ACTIONS(1547),
    1,
    anon_sym_COLON,
    STATE(328),
    1,
    sym_comment,
    STATE(690),
    1,
    sym_interface_inheritance_spec,
    [12797] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1329),
    1,
    anon_sym_RBRACE,
    ACTIONS(1569),
    1,
    anon_sym_COMMA,
    STATE(329),
    1,
    sym_comment,
    STATE(358),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [12816] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(300),
    1,
    sym_scoped_name,
    STATE(330),
    1,
    sym_comment,
    [12835] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1700),
    1,
    anon_sym_COMMA,
    ACTIONS(1702),
    1,
    anon_sym_RPAREN,
    STATE(331),
    1,
    sym_comment,
    STATE(368),
    1,
    aux_sym_context_expr_repeat1,
    [12854] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1588),
    1,
    anon_sym_COMMA,
    ACTIONS(1704),
    1,
    anon_sym_RBRACE,
    STATE(309),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(332),
    1,
    sym_comment,
    [12873] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1420),
    1,
    anon_sym_COMMA,
    ACTIONS(1706),
    1,
    anon_sym_RPAREN,
    STATE(205),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(333),
    1,
    sym_comment,
    [12892] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1708),
    1,
    anon_sym_COMMA,
    ACTIONS(1710),
    1,
    anon_sym_RPAREN,
    STATE(334),
    1,
    sym_comment,
    STATE(384),
    1,
    aux_sym_init_param_dcls_repeat1,
    [12911] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1604),
    1,
    sym_identifier,
    STATE(335),
    1,
    sym_comment,
    STATE(473),
    1,
    sym_scoped_name,
    [12930] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(336),
    1,
    sym_comment,
    ACTIONS(1712),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12945] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(337),
    1,
    sym_comment,
    ACTIONS(1714),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12960] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(338),
    1,
    sym_comment,
    ACTIONS(1716),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12975] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(339),
    1,
    sym_comment,
    STATE(440),
    1,
    sym_scoped_name,
    [12994] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1569),
    1,
    anon_sym_COMMA,
    ACTIONS(1571),
    1,
    anon_sym_RBRACE,
    STATE(340),
    1,
    sym_comment,
    STATE(346),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [13013] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1608),
    1,
    anon_sym_context,
    ACTIONS(1718),
    1,
    anon_sym_SEMI,
    STATE(341),
    1,
    sym_comment,
    STATE(671),
    1,
    sym_context_expr,
    [13032] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1720),
    1,
    anon_sym_SEMI,
    ACTIONS(1722),
    1,
    anon_sym_default,
    STATE(342),
    1,
    sym_comment,
    STATE(551),
    1,
    sym_default,
    [13051] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1604),
    1,
    sym_identifier,
    STATE(343),
    1,
    sym_comment,
    STATE(496),
    1,
    sym_scoped_name,
    [13070] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1622),
    1,
    anon_sym_COMMA,
    ACTIONS(1724),
    1,
    anon_sym_SEMI,
    STATE(297),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(344),
    1,
    sym_comment,
    [13089] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(264),
    1,
    sym_scoped_name,
    STATE(345),
    1,
    sym_comment,
    [13108] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1726),
    1,
    anon_sym_COMMA,
    ACTIONS(1729),
    1,
    anon_sym_RBRACE,
    STATE(346),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [13125] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1731),
    1,
    anon_sym_SEMI,
    ACTIONS(1733),
    1,
    sym_identifier,
    STATE(347),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [13142] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1722),
    1,
    anon_sym_default,
    ACTIONS(1736),
    1,
    anon_sym_SEMI,
    STATE(348),
    1,
    sym_comment,
    STATE(540),
    1,
    sym_default,
    [13161] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(349),
    1,
    sym_comment,
    STATE(506),
    1,
    sym_scoped_name,
    [13180] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(350),
    1,
    sym_comment,
    STATE(410),
    1,
    sym_scoped_name,
    [13199] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(351),
    1,
    sym_comment,
    ACTIONS(1738),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13214] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1676),
    1,
    sym_identifier,
    ACTIONS(1740),
    1,
    anon_sym_SEMI,
    STATE(347),
    1,
    aux_sym_bitfield_repeat1,
    STATE(352),
    1,
    sym_comment,
    [13233] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(353),
    1,
    sym_comment,
    ACTIONS(1742),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13248] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1296),
    1,
    anon_sym_COMMA,
    ACTIONS(1744),
    1,
    anon_sym_SEMI,
    STATE(354),
    1,
    sym_comment,
    STATE(361),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [13267] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(355),
    1,
    sym_comment,
    STATE(471),
    1,
    sym_scoped_name,
    [13286] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1746),
    1,
    anon_sym_COMMA,
    ACTIONS(1749),
    1,
    anon_sym_RPAREN,
    STATE(356),
    2,
    sym_comment,
    aux_sym_factory_param_dcls_repeat1,
    [13303] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(357),
    1,
    sym_comment,
    ACTIONS(1751),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13318] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1569),
    1,
    anon_sym_COMMA,
    ACTIONS(1753),
    1,
    anon_sym_RBRACE,
    STATE(346),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(358),
    1,
    sym_comment,
    [13337] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1569),
    1,
    anon_sym_COMMA,
    ACTIONS(1753),
    1,
    anon_sym_RBRACE,
    STATE(340),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(359),
    1,
    sym_comment,
    [13356] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(226),
    1,
    sym_scoped_name,
    STATE(360),
    1,
    sym_comment,
    [13375] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1755),
    1,
    anon_sym_COMMA,
    ACTIONS(1758),
    1,
    anon_sym_SEMI,
    STATE(361),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [13392] = 6,
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
    anon_sym_RPAREN,
    STATE(362),
    1,
    sym_comment,
    STATE(376),
    1,
    aux_sym_in_parameter_dcls_repeat1,
    [13411] = 5,
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
    anon_sym_RPAREN,
    STATE(363),
    2,
    sym_comment,
    aux_sym_init_param_dcls_repeat1,
    [13428] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1588),
    1,
    anon_sym_COMMA,
    ACTIONS(1769),
    1,
    anon_sym_RBRACE,
    STATE(332),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(364),
    1,
    sym_comment,
    [13447] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(581),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1534),
    1,
    anon_sym_L,
    STATE(365),
    1,
    sym_comment,
    STATE(422),
    1,
    sym_string_literal,
    [13466] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1620),
    1,
    anon_sym_COMMA,
    ACTIONS(1771),
    1,
    anon_sym_LBRACE,
    STATE(324),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(366),
    1,
    sym_comment,
    [13485] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1620),
    1,
    anon_sym_COMMA,
    ACTIONS(1771),
    1,
    anon_sym_LBRACE,
    STATE(284),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(367),
    1,
    sym_comment,
    [13504] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1700),
    1,
    anon_sym_COMMA,
    ACTIONS(1773),
    1,
    anon_sym_RPAREN,
    STATE(368),
    1,
    sym_comment,
    STATE(373),
    1,
    aux_sym_context_expr_repeat1,
    [13523] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1775),
    1,
    anon_sym_COMMA,
    ACTIONS(1778),
    1,
    anon_sym_RPAREN,
    STATE(369),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [13540] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1696),
    1,
    anon_sym_COMMA,
    ACTIONS(1780),
    1,
    anon_sym_RPAREN,
    STATE(369),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(370),
    1,
    sym_comment,
    [13559] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1782),
    1,
    anon_sym_COMMA,
    ACTIONS(1784),
    1,
    anon_sym_RPAREN,
    STATE(371),
    1,
    sym_comment,
    STATE(379),
    1,
    aux_sym_annotation_appl_params_repeat1,
    [13578] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1620),
    1,
    anon_sym_COMMA,
    ACTIONS(1786),
    1,
    anon_sym_LBRACE,
    STATE(367),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(372),
    1,
    sym_comment,
    [13597] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1788),
    1,
    anon_sym_COMMA,
    ACTIONS(1791),
    1,
    anon_sym_RPAREN,
    STATE(373),
    2,
    sym_comment,
    aux_sym_context_expr_repeat1,
    [13614] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1620),
    1,
    anon_sym_COMMA,
    ACTIONS(1786),
    1,
    anon_sym_LBRACE,
    STATE(284),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(374),
    1,
    sym_comment,
    [13633] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(375),
    1,
    sym_comment,
    ACTIONS(1793),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13648] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1760),
    1,
    anon_sym_COMMA,
    ACTIONS(1795),
    1,
    anon_sym_RPAREN,
    STATE(326),
    1,
    aux_sym_in_parameter_dcls_repeat1,
    STATE(376),
    1,
    sym_comment,
    [13667] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1640),
    1,
    sym_identifier,
    STATE(204),
    1,
    sym_simple_declarator,
    STATE(377),
    1,
    sym_comment,
    STATE(521),
    1,
    sym_readonly_attr_declarator,
    [13686] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1620),
    1,
    anon_sym_COMMA,
    ACTIONS(1797),
    1,
    anon_sym_LBRACE,
    STATE(284),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(378),
    1,
    sym_comment,
    [13705] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1782),
    1,
    anon_sym_COMMA,
    ACTIONS(1799),
    1,
    anon_sym_RPAREN,
    STATE(323),
    1,
    aux_sym_annotation_appl_params_repeat1,
    STATE(379),
    1,
    sym_comment,
    [13724] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1401),
    1,
    anon_sym_raises,
    ACTIONS(1801),
    1,
    anon_sym_SEMI,
    STATE(380),
    1,
    sym_comment,
    STATE(633),
    1,
    sym_raises_expr,
    [13743] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(237),
    1,
    sym_scoped_name,
    STATE(381),
    1,
    sym_comment,
    [13762] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(224),
    1,
    sym_scoped_name,
    STATE(382),
    1,
    sym_comment,
    [13781] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1803),
    1,
    anon_sym_GT,
    ACTIONS(1805),
    1,
    anon_sym_COMMA,
    STATE(316),
    1,
    aux_sym_formal_parameters_repeat1,
    STATE(383),
    1,
    sym_comment,
    [13800] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1708),
    1,
    anon_sym_COMMA,
    ACTIONS(1807),
    1,
    anon_sym_RPAREN,
    STATE(363),
    1,
    aux_sym_init_param_dcls_repeat1,
    STATE(384),
    1,
    sym_comment,
    [13819] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(385),
    1,
    sym_comment,
    STATE(406),
    1,
    sym_scoped_name,
    [13838] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(386),
    1,
    sym_comment,
    ACTIONS(1809),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [13853] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1805),
    1,
    anon_sym_COMMA,
    ACTIONS(1811),
    1,
    anon_sym_GT,
    STATE(383),
    1,
    aux_sym_formal_parameters_repeat1,
    STATE(387),
    1,
    sym_comment,
    [13872] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1592),
    1,
    anon_sym_COMMA,
    ACTIONS(1813),
    1,
    anon_sym_GT,
    STATE(312),
    1,
    aux_sym_actual_parameters_repeat1,
    STATE(388),
    1,
    sym_comment,
    [13891] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(571),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(206),
    1,
    sym_scoped_name,
    STATE(389),
    1,
    sym_comment,
    [13910] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1815),
    1,
    anon_sym_COMMA,
    ACTIONS(1818),
    1,
    anon_sym_SEMI,
    STATE(390),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [13927] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1296),
    1,
    anon_sym_COMMA,
    ACTIONS(1820),
    1,
    anon_sym_SEMI,
    STATE(361),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(391),
    1,
    sym_comment,
    [13946] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(392),
    1,
    sym_comment,
    ACTIONS(1266),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13961] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1588),
    1,
    anon_sym_COMMA,
    ACTIONS(1769),
    1,
    anon_sym_RBRACE,
    STATE(309),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(393),
    1,
    sym_comment,
    [13980] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1569),
    1,
    anon_sym_COMMA,
    ACTIONS(1822),
    1,
    anon_sym_RBRACE,
    STATE(346),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(394),
    1,
    sym_comment,
    [13999] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(395),
    1,
    sym_comment,
    ACTIONS(1824),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [14014] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1577),
    1,
    anon_sym_COMMA,
    ACTIONS(1826),
    1,
    anon_sym_RPAREN,
    STATE(356),
    1,
    aux_sym_factory_param_dcls_repeat1,
    STATE(396),
    1,
    sym_comment,
    [14033] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(397),
    1,
    sym_comment,
    ACTIONS(1828),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [14048] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(398),
    1,
    sym_comment,
    ACTIONS(1830),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [14063] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1401),
    1,
    anon_sym_raises,
    ACTIONS(1832),
    1,
    anon_sym_SEMI,
    STATE(399),
    1,
    sym_comment,
    STATE(637),
    1,
    sym_raises_expr,
    [14082] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(400),
    1,
    sym_comment,
    ACTIONS(1834),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14096] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(401),
    1,
    sym_comment,
    ACTIONS(1836),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14110] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1522),
    1,
    anon_sym_in,
    STATE(402),
    1,
    sym_comment,
    STATE(435),
    1,
    sym_factory_param_dcl,
    [14126] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1838),
    1,
    anon_sym_RPAREN,
    STATE(403),
    1,
    sym_comment,
    [14142] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(404),
    1,
    sym_comment,
    ACTIONS(1840),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14156] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1640),
    1,
    sym_identifier,
    STATE(405),
    1,
    sym_comment,
    STATE(433),
    1,
    sym_simple_declarator,
    [14172] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1842),
    1,
    anon_sym_LBRACE,
    STATE(406),
    1,
    sym_comment,
    [14188] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(407),
    1,
    sym_comment,
    ACTIONS(1818),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [14202] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(408),
    1,
    sym_comment,
    ACTIONS(1844),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14216] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(409),
    1,
    sym_comment,
    ACTIONS(1846),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14230] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1848),
    1,
    anon_sym_LT,
    STATE(410),
    1,
    sym_comment,
    [14246] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(411),
    1,
    sym_comment,
    ACTIONS(1850),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14260] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(412),
    1,
    sym_comment,
    ACTIONS(1852),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14274] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1640),
    1,
    sym_identifier,
    STATE(413),
    1,
    sym_comment,
    STATE(626),
    1,
    sym_simple_declarator,
    [14290] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1526),
    1,
    anon_sym_in,
    STATE(414),
    1,
    sym_comment,
    STATE(431),
    1,
    sym_init_param_dcl,
    [14306] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(415),
    1,
    sym_comment,
    ACTIONS(1854),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14320] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1640),
    1,
    sym_identifier,
    STATE(416),
    1,
    sym_comment,
    STATE(464),
    1,
    sym_simple_declarator,
    [14336] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(417),
    1,
    sym_comment,
    ACTIONS(1856),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14350] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1858),
    1,
    sym_identifier,
    STATE(418),
    1,
    sym_comment,
    STATE(474),
    1,
    sym_annotation_appl_param,
    [14366] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1640),
    1,
    sym_identifier,
    STATE(419),
    1,
    sym_comment,
    STATE(430),
    1,
    sym_simple_declarator,
    [14382] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1482),
    1,
    anon_sym_in,
    STATE(420),
    1,
    sym_comment,
    STATE(466),
    1,
    sym_in_param_dcl,
    [14398] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1860),
    1,
    anon_sym_SEMI,
    STATE(421),
    1,
    sym_comment,
    [14414] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(422),
    1,
    sym_comment,
    ACTIONS(1791),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14428] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1640),
    1,
    sym_identifier,
    STATE(423),
    1,
    sym_comment,
    STATE(429),
    1,
    sym_simple_declarator,
    [14444] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1862),
    1,
    anon_sym_LT,
    ACTIONS(1864),
    1,
    sym_identifier,
    STATE(424),
    1,
    sym_comment,
    [14460] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(425),
    1,
    sym_comment,
    ACTIONS(1866),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14474] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(426),
    1,
    sym_comment,
    ACTIONS(1868),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14488] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(427),
    1,
    sym_comment,
    ACTIONS(1463),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14502] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(428),
    1,
    sym_comment,
    ACTIONS(1778),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14516] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(429),
    1,
    sym_comment,
    ACTIONS(1870),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14530] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(430),
    1,
    sym_comment,
    ACTIONS(1872),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14544] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(431),
    1,
    sym_comment,
    ACTIONS(1767),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14558] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(432),
    1,
    sym_comment,
    ACTIONS(1874),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14572] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(433),
    1,
    sym_comment,
    ACTIONS(1876),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14586] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(434),
    1,
    sym_comment,
    ACTIONS(1878),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [14600] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(435),
    1,
    sym_comment,
    ACTIONS(1749),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14614] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(436),
    1,
    sym_comment,
    ACTIONS(1758),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [14628] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1880),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1882),
    1,
    anon_sym_SQUOTE,
    STATE(437),
    1,
    sym_comment,
    [14644] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1884),
    1,
    anon_sym_SEMI,
    ACTIONS(1886),
    1,
    anon_sym_default,
    STATE(438),
    1,
    sym_comment,
    [14660] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(439),
    1,
    sym_comment,
    ACTIONS(1888),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14674] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1890),
    1,
    anon_sym_LBRACE,
    STATE(440),
    1,
    sym_comment,
    [14690] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(441),
    1,
    sym_comment,
    ACTIONS(1892),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14704] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(442),
    1,
    sym_comment,
    ACTIONS(1894),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14718] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(443),
    1,
    sym_comment,
    ACTIONS(1896),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14732] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(444),
    1,
    sym_comment,
    ACTIONS(1898),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14746] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1438),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1900),
    1,
    sym_identifier,
    STATE(445),
    1,
    sym_comment,
    [14762] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(446),
    1,
    sym_comment,
    ACTIONS(1902),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14776] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(447),
    1,
    sym_comment,
    ACTIONS(1904),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [14790] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(448),
    1,
    sym_comment,
    ACTIONS(1906),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14804] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1640),
    1,
    sym_identifier,
    STATE(438),
    1,
    sym_simple_declarator,
    STATE(449),
    1,
    sym_comment,
    [14820] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1908),
    1,
    anon_sym_GT,
    ACTIONS(1910),
    1,
    anon_sym_COMMA,
    STATE(450),
    1,
    sym_comment,
    [14836] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(451),
    1,
    sym_comment,
    ACTIONS(1912),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [14850] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(452),
    1,
    sym_comment,
    ACTIONS(1914),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14864] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(453),
    1,
    sym_comment,
    ACTIONS(1916),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14878] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(454),
    1,
    sym_comment,
    ACTIONS(1918),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14892] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(455),
    1,
    sym_comment,
    ACTIONS(1729),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14906] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1438),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1920),
    1,
    sym_identifier,
    STATE(456),
    1,
    sym_comment,
    [14922] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(457),
    1,
    sym_comment,
    ACTIONS(1922),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14936] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(458),
    1,
    sym_comment,
    ACTIONS(1924),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14950] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1926),
    1,
    sym_identifier,
    STATE(459),
    1,
    sym_comment,
    STATE(660),
    1,
    sym_formal_parameter_names,
    [14966] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(460),
    1,
    sym_comment,
    ACTIONS(1928),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14980] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(461),
    1,
    sym_comment,
    ACTIONS(1930),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14994] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(462),
    1,
    sym_comment,
    ACTIONS(1932),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [15008] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(463),
    1,
    sym_comment,
    ACTIONS(1934),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [15022] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(464),
    1,
    sym_comment,
    ACTIONS(1936),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15036] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(465),
    1,
    sym_comment,
    ACTIONS(1938),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15050] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(466),
    1,
    sym_comment,
    ACTIONS(1694),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15064] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(467),
    1,
    sym_comment,
    ACTIONS(1940),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [15078] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(468),
    1,
    sym_comment,
    ACTIONS(1942),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15092] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1944),
    1,
    anon_sym_LT,
    STATE(469),
    1,
    sym_comment,
    [15108] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(470),
    1,
    sym_comment,
    ACTIONS(1946),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15122] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1948),
    1,
    anon_sym_LBRACE,
    STATE(471),
    1,
    sym_comment,
    [15138] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(472),
    1,
    sym_comment,
    ACTIONS(1950),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15152] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1438),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1952),
    1,
    sym_identifier,
    STATE(473),
    1,
    sym_comment,
    [15168] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(474),
    1,
    sym_comment,
    ACTIONS(1687),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15182] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1438),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1954),
    1,
    sym_identifier,
    STATE(475),
    1,
    sym_comment,
    [15198] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1438),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1956),
    1,
    sym_identifier,
    STATE(476),
    1,
    sym_comment,
    [15214] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(477),
    1,
    sym_comment,
    ACTIONS(1667),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [15228] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(478),
    1,
    sym_comment,
    ACTIONS(1958),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [15242] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(479),
    1,
    sym_comment,
    ACTIONS(1960),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [15256] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(480),
    1,
    sym_comment,
    ACTIONS(1654),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [15270] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(481),
    1,
    sym_comment,
    ACTIONS(1962),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [15284] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(482),
    1,
    sym_comment,
    ACTIONS(1964),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15298] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(483),
    1,
    sym_comment,
    ACTIONS(1966),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [15312] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1968),
    1,
    anon_sym_LBRACE,
    ACTIONS(1970),
    1,
    anon_sym_COLON,
    STATE(484),
    1,
    sym_comment,
    [15328] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(485),
    1,
    sym_comment,
    ACTIONS(1645),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [15342] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(486),
    1,
    sym_comment,
    ACTIONS(1972),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15356] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(487),
    1,
    sym_comment,
    ACTIONS(1649),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [15370] = 4,
    ACTIONS(1444),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1446),
    1,
    anon_sym_SLASH_STAR,
    STATE(488),
    1,
    sym_comment,
    ACTIONS(1072),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [15384] = 4,
    ACTIONS(1444),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1446),
    1,
    anon_sym_SLASH_STAR,
    STATE(489),
    1,
    sym_comment,
    ACTIONS(1076),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [15398] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1974),
    1,
    anon_sym_GT,
    ACTIONS(1976),
    1,
    anon_sym_COMMA,
    STATE(490),
    1,
    sym_comment,
    [15414] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(491),
    1,
    sym_comment,
    ACTIONS(1074),
    2,
    anon_sym_AT,
    sym_identifier,
    [15428] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1978),
    1,
    anon_sym_interface,
    ACTIONS(1980),
    1,
    anon_sym_valuetype,
    STATE(492),
    1,
    sym_comment,
    [15444] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(493),
    1,
    sym_comment,
    ACTIONS(1078),
    2,
    anon_sym_AT,
    sym_identifier,
    [15458] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1266),
    1,
    anon_sym_COMMA,
    STATE(494),
    1,
    sym_comment,
    [15474] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1982),
    1,
    anon_sym_LBRACE,
    ACTIONS(1984),
    1,
    anon_sym_COLON,
    STATE(495),
    1,
    sym_comment,
    [15490] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1438),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1986),
    1,
    sym_identifier,
    STATE(496),
    1,
    sym_comment,
    [15506] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(497),
    1,
    sym_comment,
    ACTIONS(1586),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [15520] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(498),
    1,
    sym_comment,
    ACTIONS(1988),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [15534] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(499),
    1,
    sym_comment,
    ACTIONS(1990),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [15548] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(500),
    1,
    sym_comment,
    ACTIONS(1992),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [15562] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1640),
    1,
    sym_identifier,
    STATE(436),
    1,
    sym_simple_declarator,
    STATE(501),
    1,
    sym_comment,
    [15578] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1994),
    1,
    anon_sym_LPAREN,
    STATE(434),
    1,
    sym_exception_list,
    STATE(502),
    1,
    sym_comment,
    [15594] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1994),
    1,
    anon_sym_LPAREN,
    STATE(503),
    1,
    sym_comment,
    STATE(568),
    1,
    sym_exception_list,
    [15610] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(504),
    1,
    sym_comment,
    ACTIONS(1996),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15624] = 5,
    ACTIONS(1444),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1446),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1998),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(2000),
    1,
    sym_preproc_arg,
    STATE(505),
    1,
    sym_comment,
    [15640] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1188),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(2002),
    1,
    anon_sym_LBRACE,
    STATE(506),
    1,
    sym_comment,
    [15656] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2004),
    1,
    anon_sym_RPAREN,
    STATE(507),
    1,
    sym_comment,
    [15669] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(430),
    1,
    anon_sym_RBRACE,
    STATE(508),
    1,
    sym_comment,
    [15682] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2006),
    1,
    anon_sym_SQUOTE,
    STATE(509),
    1,
    sym_comment,
    [15695] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2008),
    1,
    sym_identifier,
    STATE(510),
    1,
    sym_comment,
    [15708] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2010),
    1,
    sym_identifier,
    STATE(511),
    1,
    sym_comment,
    [15721] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1900),
    1,
    sym_identifier,
    STATE(512),
    1,
    sym_comment,
    [15734] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2012),
    1,
    anon_sym_RPAREN,
    STATE(513),
    1,
    sym_comment,
    [15747] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1252),
    1,
    anon_sym_EQ,
    STATE(514),
    1,
    sym_comment,
    [15760] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2014),
    1,
    anon_sym_SEMI,
    STATE(515),
    1,
    sym_comment,
    [15773] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2016),
    1,
    anon_sym_LBRACE,
    STATE(516),
    1,
    sym_comment,
    [15786] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2018),
    1,
    anon_sym_GT,
    STATE(517),
    1,
    sym_comment,
    [15799] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2020),
    1,
    anon_sym_LT,
    STATE(518),
    1,
    sym_comment,
    [15812] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2022),
    1,
    anon_sym_LBRACE,
    STATE(519),
    1,
    sym_comment,
    [15825] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2024),
    1,
    anon_sym_SEMI,
    STATE(520),
    1,
    sym_comment,
    [15838] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2026),
    1,
    anon_sym_SEMI,
    STATE(521),
    1,
    sym_comment,
    [15851] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2028),
    1,
    anon_sym_LBRACE,
    STATE(522),
    1,
    sym_comment,
    [15864] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1820),
    1,
    anon_sym_SEMI,
    STATE(523),
    1,
    sym_comment,
    [15877] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1575),
    1,
    anon_sym_SEMI,
    STATE(524),
    1,
    sym_comment,
    [15890] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2030),
    1,
    anon_sym_SEMI,
    STATE(525),
    1,
    sym_comment,
    [15903] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2032),
    1,
    anon_sym_SEMI,
    STATE(526),
    1,
    sym_comment,
    [15916] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2034),
    1,
    anon_sym_RPAREN,
    STATE(527),
    1,
    sym_comment,
    [15929] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2036),
    1,
    anon_sym_LBRACE,
    STATE(528),
    1,
    sym_comment,
    [15942] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2038),
    1,
    anon_sym_SEMI,
    STATE(529),
    1,
    sym_comment,
    [15955] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2040),
    1,
    sym_identifier,
    STATE(530),
    1,
    sym_comment,
    [15968] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2042),
    1,
    anon_sym_LBRACE,
    STATE(531),
    1,
    sym_comment,
    [15981] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2044),
    1,
    anon_sym_RPAREN,
    STATE(532),
    1,
    sym_comment,
    [15994] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2046),
    1,
    anon_sym_SEMI,
    STATE(533),
    1,
    sym_comment,
    [16007] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2048),
    1,
    anon_sym_LBRACE,
    STATE(534),
    1,
    sym_comment,
    [16020] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2050),
    1,
    anon_sym_RPAREN,
    STATE(535),
    1,
    sym_comment,
    [16033] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2052),
    1,
    sym_identifier,
    STATE(536),
    1,
    sym_comment,
    [16046] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2054),
    1,
    anon_sym_SEMI,
    STATE(537),
    1,
    sym_comment,
    [16059] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2056),
    1,
    sym_identifier,
    STATE(538),
    1,
    sym_comment,
    [16072] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2058),
    1,
    anon_sym_LBRACE,
    STATE(539),
    1,
    sym_comment,
    [16085] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2060),
    1,
    anon_sym_SEMI,
    STATE(540),
    1,
    sym_comment,
    [16098] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2062),
    1,
    anon_sym_SEMI,
    STATE(541),
    1,
    sym_comment,
    [16111] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2064),
    1,
    anon_sym_LPAREN,
    STATE(542),
    1,
    sym_comment,
    [16124] = 4,
    ACTIONS(1444),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1446),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2066),
    1,
    aux_sym_preproc_call_token1,
    STATE(543),
    1,
    sym_comment,
    [16137] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2068),
    1,
    anon_sym_LBRACE,
    STATE(544),
    1,
    sym_comment,
    [16150] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1862),
    1,
    anon_sym_LT,
    STATE(545),
    1,
    sym_comment,
    [16163] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2070),
    1,
    anon_sym_SEMI,
    STATE(546),
    1,
    sym_comment,
    [16176] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2072),
    1,
    anon_sym_SEMI,
    STATE(547),
    1,
    sym_comment,
    [16189] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1465),
    1,
    anon_sym_SLASH,
    STATE(548),
    1,
    sym_comment,
    [16202] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2074),
    1,
    anon_sym_RBRACE,
    STATE(549),
    1,
    sym_comment,
    [16215] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2076),
    1,
    anon_sym_SEMI,
    STATE(550),
    1,
    sym_comment,
    [16228] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2078),
    1,
    anon_sym_SEMI,
    STATE(551),
    1,
    sym_comment,
    [16241] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2080),
    1,
    anon_sym_SEMI,
    STATE(552),
    1,
    sym_comment,
    [16254] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2082),
    1,
    anon_sym_LBRACE,
    STATE(553),
    1,
    sym_comment,
    [16267] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2084),
    1,
    anon_sym_LBRACE,
    STATE(554),
    1,
    sym_comment,
    [16280] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2086),
    1,
    sym_identifier,
    STATE(555),
    1,
    sym_comment,
    [16293] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2088),
    1,
    anon_sym_SEMI,
    STATE(556),
    1,
    sym_comment,
    [16306] = 4,
    ACTIONS(1444),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1446),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2090),
    1,
    aux_sym_comment_token3,
    STATE(557),
    1,
    sym_comment,
    [16319] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1920),
    1,
    sym_identifier,
    STATE(558),
    1,
    sym_comment,
    [16332] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2092),
    1,
    sym_identifier,
    STATE(559),
    1,
    sym_comment,
    [16345] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2094),
    1,
    anon_sym_enum,
    STATE(560),
    1,
    sym_comment,
    [16358] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2096),
    1,
    anon_sym_LBRACE,
    STATE(561),
    1,
    sym_comment,
    [16371] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2098),
    1,
    anon_sym_LPAREN,
    STATE(562),
    1,
    sym_comment,
    [16384] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1744),
    1,
    anon_sym_SEMI,
    STATE(563),
    1,
    sym_comment,
    [16397] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2100),
    1,
    anon_sym_SEMI,
    STATE(564),
    1,
    sym_comment,
    [16410] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2102),
    1,
    sym_identifier,
    STATE(565),
    1,
    sym_comment,
    [16423] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2104),
    1,
    anon_sym_SEMI,
    STATE(566),
    1,
    sym_comment,
    [16436] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2106),
    1,
    anon_sym_SEMI,
    STATE(567),
    1,
    sym_comment,
    [16449] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2108),
    1,
    anon_sym_SEMI,
    STATE(568),
    1,
    sym_comment,
    [16462] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2110),
    1,
    anon_sym_SEMI,
    STATE(569),
    1,
    sym_comment,
    [16475] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2112),
    1,
    anon_sym_SEMI,
    STATE(570),
    1,
    sym_comment,
    [16488] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2114),
    1,
    anon_sym_SEMI,
    STATE(571),
    1,
    sym_comment,
    [16501] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2116),
    1,
    anon_sym_LBRACE,
    STATE(572),
    1,
    sym_comment,
    [16514] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2118),
    1,
    anon_sym_RPAREN,
    STATE(573),
    1,
    sym_comment,
    [16527] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2120),
    1,
    sym_identifier,
    STATE(574),
    1,
    sym_comment,
    [16540] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2122),
    1,
    anon_sym_SEMI,
    STATE(575),
    1,
    sym_comment,
    [16553] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2124),
    1,
    anon_sym_SEMI,
    STATE(576),
    1,
    sym_comment,
    [16566] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2126),
    1,
    aux_sym_char_literal_token1,
    STATE(577),
    1,
    sym_comment,
    [16579] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2128),
    1,
    anon_sym_SEMI,
    STATE(578),
    1,
    sym_comment,
    [16592] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2130),
    1,
    sym_identifier,
    STATE(579),
    1,
    sym_comment,
    [16605] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2132),
    1,
    sym_identifier,
    STATE(580),
    1,
    sym_comment,
    [16618] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1784),
    1,
    anon_sym_RPAREN,
    STATE(581),
    1,
    sym_comment,
    [16631] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2134),
    1,
    anon_sym_RPAREN,
    STATE(582),
    1,
    sym_comment,
    [16644] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2136),
    1,
    anon_sym_LT,
    STATE(583),
    1,
    sym_comment,
    [16657] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2138),
    1,
    anon_sym_SEMI,
    STATE(584),
    1,
    sym_comment,
    [16670] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1864),
    1,
    sym_identifier,
    STATE(585),
    1,
    sym_comment,
    [16683] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2140),
    1,
    anon_sym_SEMI,
    STATE(586),
    1,
    sym_comment,
    [16696] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1801),
    1,
    anon_sym_SEMI,
    STATE(587),
    1,
    sym_comment,
    [16709] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2142),
    1,
    anon_sym_LT,
    STATE(588),
    1,
    sym_comment,
    [16722] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2144),
    1,
    anon_sym_SEMI,
    STATE(589),
    1,
    sym_comment,
    [16735] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2146),
    1,
    aux_sym_string_literal_token1,
    STATE(590),
    1,
    sym_comment,
    [16748] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2148),
    1,
    anon_sym_GT,
    STATE(591),
    1,
    sym_comment,
    [16761] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1536),
    1,
    anon_sym_LBRACE,
    STATE(592),
    1,
    sym_comment,
    [16774] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1832),
    1,
    anon_sym_SEMI,
    STATE(593),
    1,
    sym_comment,
    [16787] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2150),
    1,
    anon_sym_void,
    STATE(594),
    1,
    sym_comment,
    [16800] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2152),
    1,
    anon_sym_RBRACK,
    STATE(595),
    1,
    sym_comment,
    [16813] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2154),
    1,
    sym_identifier,
    STATE(596),
    1,
    sym_comment,
    [16826] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2156),
    1,
    anon_sym_SEMI,
    STATE(597),
    1,
    sym_comment,
    [16839] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2158),
    1,
    anon_sym_GT,
    STATE(598),
    1,
    sym_comment,
    [16852] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2160),
    1,
    anon_sym_SEMI,
    STATE(599),
    1,
    sym_comment,
    [16865] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2162),
    1,
    anon_sym_RBRACE,
    STATE(600),
    1,
    sym_comment,
    [16878] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2164),
    1,
    anon_sym_SEMI,
    STATE(601),
    1,
    sym_comment,
    [16891] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2166),
    1,
    anon_sym_GT,
    STATE(602),
    1,
    sym_comment,
    [16904] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2168),
    1,
    anon_sym_GT,
    STATE(603),
    1,
    sym_comment,
    [16917] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2170),
    1,
    sym_identifier,
    STATE(604),
    1,
    sym_comment,
    [16930] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1838),
    1,
    anon_sym_RPAREN,
    STATE(605),
    1,
    sym_comment,
    [16943] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2172),
    1,
    anon_sym_SEMI,
    STATE(606),
    1,
    sym_comment,
    [16956] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2174),
    1,
    anon_sym_SEMI,
    STATE(607),
    1,
    sym_comment,
    [16969] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2176),
    1,
    ts_builtin_sym_end,
    STATE(608),
    1,
    sym_comment,
    [16982] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2178),
    1,
    anon_sym_SEMI,
    STATE(609),
    1,
    sym_comment,
    [16995] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2180),
    1,
    anon_sym_COLON,
    STATE(610),
    1,
    sym_comment,
    [17008] = 4,
    ACTIONS(1444),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1446),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2182),
    1,
    aux_sym_predefine_token1,
    STATE(611),
    1,
    sym_comment,
    [17021] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2184),
    1,
    anon_sym_SEMI,
    STATE(612),
    1,
    sym_comment,
    [17034] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2186),
    1,
    sym_identifier,
    STATE(613),
    1,
    sym_comment,
    [17047] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2188),
    1,
    sym_identifier,
    STATE(614),
    1,
    sym_comment,
    [17060] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2190),
    1,
    anon_sym_GT,
    STATE(615),
    1,
    sym_comment,
    [17073] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1490),
    1,
    anon_sym_LBRACE,
    STATE(616),
    1,
    sym_comment,
    [17086] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2192),
    1,
    anon_sym_SEMI,
    STATE(617),
    1,
    sym_comment,
    [17099] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1718),
    1,
    anon_sym_SEMI,
    STATE(618),
    1,
    sym_comment,
    [17112] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2194),
    1,
    anon_sym_LBRACE,
    STATE(619),
    1,
    sym_comment,
    [17125] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2196),
    1,
    sym_identifier,
    STATE(620),
    1,
    sym_comment,
    [17138] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1880),
    1,
    anon_sym_DQUOTE,
    STATE(621),
    1,
    sym_comment,
    [17151] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2198),
    1,
    aux_sym_string_literal_token1,
    STATE(622),
    1,
    sym_comment,
    [17164] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2200),
    1,
    anon_sym_SEMI,
    STATE(623),
    1,
    sym_comment,
    [17177] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1860),
    1,
    anon_sym_SEMI,
    STATE(624),
    1,
    sym_comment,
    [17190] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2202),
    1,
    anon_sym_SEMI,
    STATE(625),
    1,
    sym_comment,
    [17203] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2204),
    1,
    anon_sym_SEMI,
    STATE(626),
    1,
    sym_comment,
    [17216] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2206),
    1,
    sym_identifier,
    STATE(627),
    1,
    sym_comment,
    [17229] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2208),
    1,
    sym_identifier,
    STATE(628),
    1,
    sym_comment,
    [17242] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2210),
    1,
    sym_identifier,
    STATE(629),
    1,
    sym_comment,
    [17255] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2212),
    1,
    sym_identifier,
    STATE(630),
    1,
    sym_comment,
    [17268] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2214),
    1,
    sym_identifier,
    STATE(631),
    1,
    sym_comment,
    [17281] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2216),
    1,
    anon_sym_SQUOTE,
    STATE(632),
    1,
    sym_comment,
    [17294] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2218),
    1,
    anon_sym_SEMI,
    STATE(633),
    1,
    sym_comment,
    [17307] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2220),
    1,
    aux_sym_char_literal_token1,
    STATE(634),
    1,
    sym_comment,
    [17320] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2222),
    1,
    anon_sym_RPAREN,
    STATE(635),
    1,
    sym_comment,
    [17333] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2224),
    1,
    anon_sym_LBRACE,
    STATE(636),
    1,
    sym_comment,
    [17346] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2226),
    1,
    anon_sym_SEMI,
    STATE(637),
    1,
    sym_comment,
    [17359] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2228),
    1,
    anon_sym_SEMI,
    STATE(638),
    1,
    sym_comment,
    [17372] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2230),
    1,
    anon_sym_GT,
    STATE(639),
    1,
    sym_comment,
    [17385] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2232),
    1,
    anon_sym_GT,
    STATE(640),
    1,
    sym_comment,
    [17398] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2234),
    1,
    anon_sym_SEMI,
    STATE(641),
    1,
    sym_comment,
    [17411] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2236),
    1,
    anon_sym_LPAREN,
    STATE(642),
    1,
    sym_comment,
    [17424] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2238),
    1,
    anon_sym_EQ,
    STATE(643),
    1,
    sym_comment,
    [17437] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2240),
    1,
    anon_sym_SEMI,
    STATE(644),
    1,
    sym_comment,
    [17450] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2242),
    1,
    anon_sym_COLON,
    STATE(645),
    1,
    sym_comment,
    [17463] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2244),
    1,
    anon_sym_SEMI,
    STATE(646),
    1,
    sym_comment,
    [17476] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2246),
    1,
    anon_sym_SEMI,
    STATE(647),
    1,
    sym_comment,
    [17489] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2248),
    1,
    anon_sym_SEMI,
    STATE(648),
    1,
    sym_comment,
    [17502] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2250),
    1,
    anon_sym_RBRACE,
    STATE(649),
    1,
    sym_comment,
    [17515] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2252),
    1,
    anon_sym_SEMI,
    STATE(650),
    1,
    sym_comment,
    [17528] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2254),
    1,
    anon_sym_SEMI,
    STATE(651),
    1,
    sym_comment,
    [17541] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2256),
    1,
    sym_identifier,
    STATE(652),
    1,
    sym_comment,
    [17554] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2258),
    1,
    anon_sym_SEMI,
    STATE(653),
    1,
    sym_comment,
    [17567] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2260),
    1,
    anon_sym_LPAREN,
    STATE(654),
    1,
    sym_comment,
    [17580] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2262),
    1,
    anon_sym_DQUOTE,
    STATE(655),
    1,
    sym_comment,
    [17593] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2264),
    1,
    anon_sym_SEMI,
    STATE(656),
    1,
    sym_comment,
    [17606] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2266),
    1,
    sym_identifier,
    STATE(657),
    1,
    sym_comment,
    [17619] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2268),
    1,
    anon_sym_enum,
    STATE(658),
    1,
    sym_comment,
    [17632] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2270),
    1,
    sym_identifier,
    STATE(659),
    1,
    sym_comment,
    [17645] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2272),
    1,
    anon_sym_GT,
    STATE(660),
    1,
    sym_comment,
    [17658] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2274),
    1,
    anon_sym_valuetype,
    STATE(661),
    1,
    sym_comment,
    [17671] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2276),
    1,
    anon_sym_SEMI,
    STATE(662),
    1,
    sym_comment,
    [17684] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1956),
    1,
    sym_identifier,
    STATE(663),
    1,
    sym_comment,
    [17697] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1680),
    1,
    anon_sym_LBRACE,
    STATE(664),
    1,
    sym_comment,
    [17710] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2278),
    1,
    anon_sym_SEMI,
    STATE(665),
    1,
    sym_comment,
    [17723] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2280),
    1,
    anon_sym_LPAREN,
    STATE(666),
    1,
    sym_comment,
    [17736] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2282),
    1,
    sym_identifier,
    STATE(667),
    1,
    sym_comment,
    [17749] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1561),
    1,
    anon_sym_LBRACE,
    STATE(668),
    1,
    sym_comment,
    [17762] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2284),
    1,
    sym_identifier,
    STATE(669),
    1,
    sym_comment,
    [17775] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2286),
    1,
    anon_sym_LPAREN,
    STATE(670),
    1,
    sym_comment,
    [17788] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2288),
    1,
    anon_sym_SEMI,
    STATE(671),
    1,
    sym_comment,
    [17801] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2290),
    1,
    anon_sym_LPAREN,
    STATE(672),
    1,
    sym_comment,
    [17814] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2292),
    1,
    anon_sym_SEMI,
    STATE(673),
    1,
    sym_comment,
    [17827] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2294),
    1,
    anon_sym_SEMI,
    STATE(674),
    1,
    sym_comment,
    [17840] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2296),
    1,
    sym_identifier,
    STATE(675),
    1,
    sym_comment,
    [17853] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2298),
    1,
    sym_identifier,
    STATE(676),
    1,
    sym_comment,
    [17866] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2300),
    1,
    anon_sym_SEMI,
    STATE(677),
    1,
    sym_comment,
    [17879] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2302),
    1,
    sym_identifier,
    STATE(678),
    1,
    sym_comment,
    [17892] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2304),
    1,
    sym_identifier,
    STATE(679),
    1,
    sym_comment,
    [17905] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2306),
    1,
    sym_identifier,
    STATE(680),
    1,
    sym_comment,
    [17918] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1647),
    1,
    anon_sym_manages,
    STATE(681),
    1,
    sym_comment,
    [17931] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2308),
    1,
    anon_sym_manages,
    STATE(682),
    1,
    sym_comment,
    [17944] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2310),
    1,
    anon_sym_LBRACE,
    STATE(683),
    1,
    sym_comment,
    [17957] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2312),
    1,
    anon_sym_LBRACE,
    STATE(684),
    1,
    sym_comment,
    [17970] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2314),
    1,
    sym_identifier,
    STATE(685),
    1,
    sym_comment,
    [17983] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2316),
    1,
    sym_identifier,
    STATE(686),
    1,
    sym_comment,
    [17996] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2318),
    1,
    anon_sym_SEMI,
    STATE(687),
    1,
    sym_comment,
    [18009] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2320),
    1,
    sym_identifier,
    STATE(688),
    1,
    sym_comment,
    [18022] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2322),
    1,
    sym_identifier,
    STATE(689),
    1,
    sym_comment,
    [18035] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2324),
    1,
    anon_sym_LBRACE,
    STATE(690),
    1,
    sym_comment,
    [18048] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2326),
    1,
    sym_identifier,
    STATE(691),
    1,
    sym_comment,
    [18061] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2328),
    1,
    anon_sym_LBRACE,
    STATE(692),
    1,
    sym_comment,
    [18074] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2330),
    1,
    anon_sym_SEMI,
    STATE(693),
    1,
    sym_comment,
    [18087] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2332),
    1,
    anon_sym_DQUOTE,
    STATE(694),
    1,
    sym_comment,
    [18100] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1978),
    1,
    anon_sym_interface,
    STATE(695),
    1,
    sym_comment,
    [18113] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2334),
    1,
    anon_sym_SEMI,
    STATE(696),
    1,
    sym_comment,
    [18126] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1980),
    1,
    anon_sym_valuetype,
    STATE(697),
    1,
    sym_comment,
    [18139] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2336),
    1,
    sym_identifier,
    STATE(698),
    1,
    sym_comment,
    [18152] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2338),
    1,
    sym_identifier,
    STATE(699),
    1,
    sym_comment,
    [18165] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1614),
    1,
    anon_sym_SEMI,
    STATE(700),
    1,
    sym_comment,
    [18178] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2340),
    1,
    anon_sym_COMMA,
    STATE(701),
    1,
    sym_comment,
    [18191] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2342),
    1,
    anon_sym_RPAREN,
    STATE(702),
    1,
    sym_comment,
    [18204] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2344),
    1,
    anon_sym_COMMA,
    STATE(703),
    1,
    sym_comment,
    [18217] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2346),
    1,
    sym_identifier,
    STATE(704),
    1,
    sym_comment,
    [18230] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2348),
    1,
    sym_identifier,
    STATE(705),
    1,
    sym_comment,
    [18243] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1606),
    1,
    anon_sym_SEMI,
    STATE(706),
    1,
    sym_comment,
    [18256] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2350),
    1,
    sym_identifier,
    STATE(707),
    1,
    sym_comment,
    [18269] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2352),
    1,
    anon_sym_RPAREN,
    STATE(708),
    1,
    sym_comment,
    [18282] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2354),
    1,
    anon_sym_GT,
    STATE(709),
    1,
    sym_comment,
    [18295] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2356),
    1,
    sym_identifier,
    STATE(710),
    1,
    sym_comment,
    [18308] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2358),
    1,
    anon_sym_RPAREN,
    STATE(711),
    1,
    sym_comment,
    [18321] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2360),
    1,
    anon_sym_attribute,
    STATE(712),
    1,
    sym_comment,
    [18334] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2362),
    1,
    sym_identifier,
    STATE(713),
    1,
    sym_comment,
    [18347] = 1,
    ACTIONS(2364),
    1,
    ts_builtin_sym_end,
    [18351] = 1,
    ACTIONS(2366),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(29)] = 0,
    [SMALL_STATE(30)] = 145,
    [SMALL_STATE(31)] = 290,
    [SMALL_STATE(32)] = 435,
    [SMALL_STATE(33)] = 580,
    [SMALL_STATE(34)] = 725,
    [SMALL_STATE(35)] = 870,
    [SMALL_STATE(36)] = 1015,
    [SMALL_STATE(37)] = 1160,
    [SMALL_STATE(38)] = 1303,
    [SMALL_STATE(39)] = 1448,
    [SMALL_STATE(40)] = 1593,
    [SMALL_STATE(41)] = 1737,
    [SMALL_STATE(42)] = 1881,
    [SMALL_STATE(43)] = 2023,
    [SMALL_STATE(44)] = 2159,
    [SMALL_STATE(45)] = 2289,
    [SMALL_STATE(46)] = 2422,
    [SMALL_STATE(47)] = 2491,
    [SMALL_STATE(48)] = 2560,
    [SMALL_STATE(49)] = 2687,
    [SMALL_STATE(50)] = 2756,
    [SMALL_STATE(51)] = 2825,
    [SMALL_STATE(52)] = 2894,
    [SMALL_STATE(53)] = 2963,
    [SMALL_STATE(54)] = 3032,
    [SMALL_STATE(55)] = 3099,
    [SMALL_STATE(56)] = 3226,
    [SMALL_STATE(57)] = 3353,
    [SMALL_STATE(58)] = 3480,
    [SMALL_STATE(59)] = 3547,
    [SMALL_STATE(60)] = 3674,
    [SMALL_STATE(61)] = 3801,
    [SMALL_STATE(62)] = 3928,
    [SMALL_STATE(63)] = 4055,
    [SMALL_STATE(64)] = 4182,
    [SMALL_STATE(65)] = 4249,
    [SMALL_STATE(66)] = 4316,
    [SMALL_STATE(67)] = 4443,
    [SMALL_STATE(68)] = 4509,
    [SMALL_STATE(69)] = 4575,
    [SMALL_STATE(70)] = 4680,
    [SMALL_STATE(71)] = 4785,
    [SMALL_STATE(72)] = 4840,
    [SMALL_STATE(73)] = 4895,
    [SMALL_STATE(74)] = 4947,
    [SMALL_STATE(75)] = 4994,
    [SMALL_STATE(76)] = 5041,
    [SMALL_STATE(77)] = 5088,
    [SMALL_STATE(78)] = 5135,
    [SMALL_STATE(79)] = 5182,
    [SMALL_STATE(80)] = 5229,
    [SMALL_STATE(81)] = 5276,
    [SMALL_STATE(82)] = 5323,
    [SMALL_STATE(83)] = 5370,
    [SMALL_STATE(84)] = 5417,
    [SMALL_STATE(85)] = 5464,
    [SMALL_STATE(86)] = 5511,
    [SMALL_STATE(87)] = 5558,
    [SMALL_STATE(88)] = 5607,
    [SMALL_STATE(89)] = 5653,
    [SMALL_STATE(90)] = 5699,
    [SMALL_STATE(91)] = 5782,
    [SMALL_STATE(92)] = 5827,
    [SMALL_STATE(93)] = 5872,
    [SMALL_STATE(94)] = 5917,
    [SMALL_STATE(95)] = 5962,
    [SMALL_STATE(96)] = 6008,
    [SMALL_STATE(97)] = 6094,
    [SMALL_STATE(98)] = 6180,
    [SMALL_STATE(99)] = 6266,
    [SMALL_STATE(100)] = 6352,
    [SMALL_STATE(101)] = 6393,
    [SMALL_STATE(102)] = 6476,
    [SMALL_STATE(103)] = 6559,
    [SMALL_STATE(104)] = 6642,
    [SMALL_STATE(105)] = 6683,
    [SMALL_STATE(106)] = 6724,
    [SMALL_STATE(107)] = 6807,
    [SMALL_STATE(108)] = 6890,
    [SMALL_STATE(109)] = 6973,
    [SMALL_STATE(110)] = 7056,
    [SMALL_STATE(111)] = 7136,
    [SMALL_STATE(112)] = 7216,
    [SMALL_STATE(113)] = 7256,
    [SMALL_STATE(114)] = 7324,
    [SMALL_STATE(115)] = 7364,
    [SMALL_STATE(116)] = 7444,
    [SMALL_STATE(117)] = 7484,
    [SMALL_STATE(118)] = 7564,
    [SMALL_STATE(119)] = 7604,
    [SMALL_STATE(120)] = 7644,
    [SMALL_STATE(121)] = 7684,
    [SMALL_STATE(122)] = 7764,
    [SMALL_STATE(123)] = 7844,
    [SMALL_STATE(124)] = 7884,
    [SMALL_STATE(125)] = 7964,
    [SMALL_STATE(126)] = 8038,
    [SMALL_STATE(127)] = 8109,
    [SMALL_STATE(128)] = 8177,
    [SMALL_STATE(129)] = 8242,
    [SMALL_STATE(130)] = 8304,
    [SMALL_STATE(131)] = 8359,
    [SMALL_STATE(132)] = 8418,
    [SMALL_STATE(133)] = 8468,
    [SMALL_STATE(134)] = 8520,
    [SMALL_STATE(135)] = 8553,
    [SMALL_STATE(136)] = 8586,
    [SMALL_STATE(137)] = 8616,
    [SMALL_STATE(138)] = 8646,
    [SMALL_STATE(139)] = 8676,
    [SMALL_STATE(140)] = 8706,
    [SMALL_STATE(141)] = 8736,
    [SMALL_STATE(142)] = 8766,
    [SMALL_STATE(143)] = 8800,
    [SMALL_STATE(144)] = 8834,
    [SMALL_STATE(145)] = 8864,
    [SMALL_STATE(146)] = 8894,
    [SMALL_STATE(147)] = 8924,
    [SMALL_STATE(148)] = 8954,
    [SMALL_STATE(149)] = 8984,
    [SMALL_STATE(150)] = 9014,
    [SMALL_STATE(151)] = 9060,
    [SMALL_STATE(152)] = 9089,
    [SMALL_STATE(153)] = 9118,
    [SMALL_STATE(154)] = 9147,
    [SMALL_STATE(155)] = 9180,
    [SMALL_STATE(156)] = 9207,
    [SMALL_STATE(157)] = 9234,
    [SMALL_STATE(158)] = 9272,
    [SMALL_STATE(159)] = 9295,
    [SMALL_STATE(160)] = 9318,
    [SMALL_STATE(161)] = 9341,
    [SMALL_STATE(162)] = 9365,
    [SMALL_STATE(163)] = 9385,
    [SMALL_STATE(164)] = 9419,
    [SMALL_STATE(165)] = 9441,
    [SMALL_STATE(166)] = 9463,
    [SMALL_STATE(167)] = 9487,
    [SMALL_STATE(168)] = 9507,
    [SMALL_STATE(169)] = 9526,
    [SMALL_STATE(170)] = 9555,
    [SMALL_STATE(171)] = 9586,
    [SMALL_STATE(172)] = 9607,
    [SMALL_STATE(173)] = 9625,
    [SMALL_STATE(174)] = 9653,
    [SMALL_STATE(175)] = 9671,
    [SMALL_STATE(176)] = 9697,
    [SMALL_STATE(177)] = 9721,
    [SMALL_STATE(178)] = 9739,
    [SMALL_STATE(179)] = 9757,
    [SMALL_STATE(180)] = 9785,
    [SMALL_STATE(181)] = 9807,
    [SMALL_STATE(182)] = 9835,
    [SMALL_STATE(183)] = 9863,
    [SMALL_STATE(184)] = 9881,
    [SMALL_STATE(185)] = 9909,
    [SMALL_STATE(186)] = 9937,
    [SMALL_STATE(187)] = 9965,
    [SMALL_STATE(188)] = 9989,
    [SMALL_STATE(189)] = 10017,
    [SMALL_STATE(190)] = 10040,
    [SMALL_STATE(191)] = 10065,
    [SMALL_STATE(192)] = 10088,
    [SMALL_STATE(193)] = 10113,
    [SMALL_STATE(194)] = 10138,
    [SMALL_STATE(195)] = 10163,
    [SMALL_STATE(196)] = 10186,
    [SMALL_STATE(197)] = 10211,
    [SMALL_STATE(198)] = 10234,
    [SMALL_STATE(199)] = 10259,
    [SMALL_STATE(200)] = 10284,
    [SMALL_STATE(201)] = 10309,
    [SMALL_STATE(202)] = 10334,
    [SMALL_STATE(203)] = 10359,
    [SMALL_STATE(204)] = 10384,
    [SMALL_STATE(205)] = 10409,
    [SMALL_STATE(206)] = 10428,
    [SMALL_STATE(207)] = 10447,
    [SMALL_STATE(208)] = 10472,
    [SMALL_STATE(209)] = 10497,
    [SMALL_STATE(210)] = 10520,
    [SMALL_STATE(211)] = 10545,
    [SMALL_STATE(212)] = 10568,
    [SMALL_STATE(213)] = 10593,
    [SMALL_STATE(214)] = 10616,
    [SMALL_STATE(215)] = 10634,
    [SMALL_STATE(216)] = 10654,
    [SMALL_STATE(217)] = 10674,
    [SMALL_STATE(218)] = 10694,
    [SMALL_STATE(219)] = 10716,
    [SMALL_STATE(220)] = 10732,
    [SMALL_STATE(221)] = 10748,
    [SMALL_STATE(222)] = 10764,
    [SMALL_STATE(223)] = 10784,
    [SMALL_STATE(224)] = 10804,
    [SMALL_STATE(225)] = 10826,
    [SMALL_STATE(226)] = 10846,
    [SMALL_STATE(227)] = 10868,
    [SMALL_STATE(228)] = 10890,
    [SMALL_STATE(229)] = 10912,
    [SMALL_STATE(230)] = 10932,
    [SMALL_STATE(231)] = 10954,
    [SMALL_STATE(232)] = 10972,
    [SMALL_STATE(233)] = 10994,
    [SMALL_STATE(234)] = 11016,
    [SMALL_STATE(235)] = 11036,
    [SMALL_STATE(236)] = 11058,
    [SMALL_STATE(237)] = 11078,
    [SMALL_STATE(238)] = 11100,
    [SMALL_STATE(239)] = 11116,
    [SMALL_STATE(240)] = 11132,
    [SMALL_STATE(241)] = 11148,
    [SMALL_STATE(242)] = 11164,
    [SMALL_STATE(243)] = 11180,
    [SMALL_STATE(244)] = 11196,
    [SMALL_STATE(245)] = 11212,
    [SMALL_STATE(246)] = 11228,
    [SMALL_STATE(247)] = 11244,
    [SMALL_STATE(248)] = 11262,
    [SMALL_STATE(249)] = 11278,
    [SMALL_STATE(250)] = 11298,
    [SMALL_STATE(251)] = 11318,
    [SMALL_STATE(252)] = 11340,
    [SMALL_STATE(253)] = 11362,
    [SMALL_STATE(254)] = 11384,
    [SMALL_STATE(255)] = 11406,
    [SMALL_STATE(256)] = 11428,
    [SMALL_STATE(257)] = 11450,
    [SMALL_STATE(258)] = 11472,
    [SMALL_STATE(259)] = 11494,
    [SMALL_STATE(260)] = 11516,
    [SMALL_STATE(261)] = 11536,
    [SMALL_STATE(262)] = 11554,
    [SMALL_STATE(263)] = 11574,
    [SMALL_STATE(264)] = 11596,
    [SMALL_STATE(265)] = 11618,
    [SMALL_STATE(266)] = 11640,
    [SMALL_STATE(267)] = 11662,
    [SMALL_STATE(268)] = 11678,
    [SMALL_STATE(269)] = 11700,
    [SMALL_STATE(270)] = 11722,
    [SMALL_STATE(271)] = 11744,
    [SMALL_STATE(272)] = 11760,
    [SMALL_STATE(273)] = 11778,
    [SMALL_STATE(274)] = 11798,
    [SMALL_STATE(275)] = 11820,
    [SMALL_STATE(276)] = 11842,
    [SMALL_STATE(277)] = 11857,
    [SMALL_STATE(278)] = 11876,
    [SMALL_STATE(279)] = 11895,
    [SMALL_STATE(280)] = 11910,
    [SMALL_STATE(281)] = 11929,
    [SMALL_STATE(282)] = 11948,
    [SMALL_STATE(283)] = 11967,
    [SMALL_STATE(284)] = 11982,
    [SMALL_STATE(285)] = 11999,
    [SMALL_STATE(286)] = 12018,
    [SMALL_STATE(287)] = 12037,
    [SMALL_STATE(288)] = 12056,
    [SMALL_STATE(289)] = 12071,
    [SMALL_STATE(290)] = 12086,
    [SMALL_STATE(291)] = 12105,
    [SMALL_STATE(292)] = 12124,
    [SMALL_STATE(293)] = 12143,
    [SMALL_STATE(294)] = 12162,
    [SMALL_STATE(295)] = 12181,
    [SMALL_STATE(296)] = 12200,
    [SMALL_STATE(297)] = 12215,
    [SMALL_STATE(298)] = 12234,
    [SMALL_STATE(299)] = 12253,
    [SMALL_STATE(300)] = 12272,
    [SMALL_STATE(301)] = 12289,
    [SMALL_STATE(302)] = 12308,
    [SMALL_STATE(303)] = 12325,
    [SMALL_STATE(304)] = 12344,
    [SMALL_STATE(305)] = 12359,
    [SMALL_STATE(306)] = 12376,
    [SMALL_STATE(307)] = 12395,
    [SMALL_STATE(308)] = 12414,
    [SMALL_STATE(309)] = 12433,
    [SMALL_STATE(310)] = 12450,
    [SMALL_STATE(311)] = 12469,
    [SMALL_STATE(312)] = 12486,
    [SMALL_STATE(313)] = 12503,
    [SMALL_STATE(314)] = 12522,
    [SMALL_STATE(315)] = 12541,
    [SMALL_STATE(316)] = 12560,
    [SMALL_STATE(317)] = 12577,
    [SMALL_STATE(318)] = 12596,
    [SMALL_STATE(319)] = 12615,
    [SMALL_STATE(320)] = 12634,
    [SMALL_STATE(321)] = 12649,
    [SMALL_STATE(322)] = 12668,
    [SMALL_STATE(323)] = 12687,
    [SMALL_STATE(324)] = 12704,
    [SMALL_STATE(325)] = 12723,
    [SMALL_STATE(326)] = 12742,
    [SMALL_STATE(327)] = 12759,
    [SMALL_STATE(328)] = 12778,
    [SMALL_STATE(329)] = 12797,
    [SMALL_STATE(330)] = 12816,
    [SMALL_STATE(331)] = 12835,
    [SMALL_STATE(332)] = 12854,
    [SMALL_STATE(333)] = 12873,
    [SMALL_STATE(334)] = 12892,
    [SMALL_STATE(335)] = 12911,
    [SMALL_STATE(336)] = 12930,
    [SMALL_STATE(337)] = 12945,
    [SMALL_STATE(338)] = 12960,
    [SMALL_STATE(339)] = 12975,
    [SMALL_STATE(340)] = 12994,
    [SMALL_STATE(341)] = 13013,
    [SMALL_STATE(342)] = 13032,
    [SMALL_STATE(343)] = 13051,
    [SMALL_STATE(344)] = 13070,
    [SMALL_STATE(345)] = 13089,
    [SMALL_STATE(346)] = 13108,
    [SMALL_STATE(347)] = 13125,
    [SMALL_STATE(348)] = 13142,
    [SMALL_STATE(349)] = 13161,
    [SMALL_STATE(350)] = 13180,
    [SMALL_STATE(351)] = 13199,
    [SMALL_STATE(352)] = 13214,
    [SMALL_STATE(353)] = 13233,
    [SMALL_STATE(354)] = 13248,
    [SMALL_STATE(355)] = 13267,
    [SMALL_STATE(356)] = 13286,
    [SMALL_STATE(357)] = 13303,
    [SMALL_STATE(358)] = 13318,
    [SMALL_STATE(359)] = 13337,
    [SMALL_STATE(360)] = 13356,
    [SMALL_STATE(361)] = 13375,
    [SMALL_STATE(362)] = 13392,
    [SMALL_STATE(363)] = 13411,
    [SMALL_STATE(364)] = 13428,
    [SMALL_STATE(365)] = 13447,
    [SMALL_STATE(366)] = 13466,
    [SMALL_STATE(367)] = 13485,
    [SMALL_STATE(368)] = 13504,
    [SMALL_STATE(369)] = 13523,
    [SMALL_STATE(370)] = 13540,
    [SMALL_STATE(371)] = 13559,
    [SMALL_STATE(372)] = 13578,
    [SMALL_STATE(373)] = 13597,
    [SMALL_STATE(374)] = 13614,
    [SMALL_STATE(375)] = 13633,
    [SMALL_STATE(376)] = 13648,
    [SMALL_STATE(377)] = 13667,
    [SMALL_STATE(378)] = 13686,
    [SMALL_STATE(379)] = 13705,
    [SMALL_STATE(380)] = 13724,
    [SMALL_STATE(381)] = 13743,
    [SMALL_STATE(382)] = 13762,
    [SMALL_STATE(383)] = 13781,
    [SMALL_STATE(384)] = 13800,
    [SMALL_STATE(385)] = 13819,
    [SMALL_STATE(386)] = 13838,
    [SMALL_STATE(387)] = 13853,
    [SMALL_STATE(388)] = 13872,
    [SMALL_STATE(389)] = 13891,
    [SMALL_STATE(390)] = 13910,
    [SMALL_STATE(391)] = 13927,
    [SMALL_STATE(392)] = 13946,
    [SMALL_STATE(393)] = 13961,
    [SMALL_STATE(394)] = 13980,
    [SMALL_STATE(395)] = 13999,
    [SMALL_STATE(396)] = 14014,
    [SMALL_STATE(397)] = 14033,
    [SMALL_STATE(398)] = 14048,
    [SMALL_STATE(399)] = 14063,
    [SMALL_STATE(400)] = 14082,
    [SMALL_STATE(401)] = 14096,
    [SMALL_STATE(402)] = 14110,
    [SMALL_STATE(403)] = 14126,
    [SMALL_STATE(404)] = 14142,
    [SMALL_STATE(405)] = 14156,
    [SMALL_STATE(406)] = 14172,
    [SMALL_STATE(407)] = 14188,
    [SMALL_STATE(408)] = 14202,
    [SMALL_STATE(409)] = 14216,
    [SMALL_STATE(410)] = 14230,
    [SMALL_STATE(411)] = 14246,
    [SMALL_STATE(412)] = 14260,
    [SMALL_STATE(413)] = 14274,
    [SMALL_STATE(414)] = 14290,
    [SMALL_STATE(415)] = 14306,
    [SMALL_STATE(416)] = 14320,
    [SMALL_STATE(417)] = 14336,
    [SMALL_STATE(418)] = 14350,
    [SMALL_STATE(419)] = 14366,
    [SMALL_STATE(420)] = 14382,
    [SMALL_STATE(421)] = 14398,
    [SMALL_STATE(422)] = 14414,
    [SMALL_STATE(423)] = 14428,
    [SMALL_STATE(424)] = 14444,
    [SMALL_STATE(425)] = 14460,
    [SMALL_STATE(426)] = 14474,
    [SMALL_STATE(427)] = 14488,
    [SMALL_STATE(428)] = 14502,
    [SMALL_STATE(429)] = 14516,
    [SMALL_STATE(430)] = 14530,
    [SMALL_STATE(431)] = 14544,
    [SMALL_STATE(432)] = 14558,
    [SMALL_STATE(433)] = 14572,
    [SMALL_STATE(434)] = 14586,
    [SMALL_STATE(435)] = 14600,
    [SMALL_STATE(436)] = 14614,
    [SMALL_STATE(437)] = 14628,
    [SMALL_STATE(438)] = 14644,
    [SMALL_STATE(439)] = 14660,
    [SMALL_STATE(440)] = 14674,
    [SMALL_STATE(441)] = 14690,
    [SMALL_STATE(442)] = 14704,
    [SMALL_STATE(443)] = 14718,
    [SMALL_STATE(444)] = 14732,
    [SMALL_STATE(445)] = 14746,
    [SMALL_STATE(446)] = 14762,
    [SMALL_STATE(447)] = 14776,
    [SMALL_STATE(448)] = 14790,
    [SMALL_STATE(449)] = 14804,
    [SMALL_STATE(450)] = 14820,
    [SMALL_STATE(451)] = 14836,
    [SMALL_STATE(452)] = 14850,
    [SMALL_STATE(453)] = 14864,
    [SMALL_STATE(454)] = 14878,
    [SMALL_STATE(455)] = 14892,
    [SMALL_STATE(456)] = 14906,
    [SMALL_STATE(457)] = 14922,
    [SMALL_STATE(458)] = 14936,
    [SMALL_STATE(459)] = 14950,
    [SMALL_STATE(460)] = 14966,
    [SMALL_STATE(461)] = 14980,
    [SMALL_STATE(462)] = 14994,
    [SMALL_STATE(463)] = 15008,
    [SMALL_STATE(464)] = 15022,
    [SMALL_STATE(465)] = 15036,
    [SMALL_STATE(466)] = 15050,
    [SMALL_STATE(467)] = 15064,
    [SMALL_STATE(468)] = 15078,
    [SMALL_STATE(469)] = 15092,
    [SMALL_STATE(470)] = 15108,
    [SMALL_STATE(471)] = 15122,
    [SMALL_STATE(472)] = 15138,
    [SMALL_STATE(473)] = 15152,
    [SMALL_STATE(474)] = 15168,
    [SMALL_STATE(475)] = 15182,
    [SMALL_STATE(476)] = 15198,
    [SMALL_STATE(477)] = 15214,
    [SMALL_STATE(478)] = 15228,
    [SMALL_STATE(479)] = 15242,
    [SMALL_STATE(480)] = 15256,
    [SMALL_STATE(481)] = 15270,
    [SMALL_STATE(482)] = 15284,
    [SMALL_STATE(483)] = 15298,
    [SMALL_STATE(484)] = 15312,
    [SMALL_STATE(485)] = 15328,
    [SMALL_STATE(486)] = 15342,
    [SMALL_STATE(487)] = 15356,
    [SMALL_STATE(488)] = 15370,
    [SMALL_STATE(489)] = 15384,
    [SMALL_STATE(490)] = 15398,
    [SMALL_STATE(491)] = 15414,
    [SMALL_STATE(492)] = 15428,
    [SMALL_STATE(493)] = 15444,
    [SMALL_STATE(494)] = 15458,
    [SMALL_STATE(495)] = 15474,
    [SMALL_STATE(496)] = 15490,
    [SMALL_STATE(497)] = 15506,
    [SMALL_STATE(498)] = 15520,
    [SMALL_STATE(499)] = 15534,
    [SMALL_STATE(500)] = 15548,
    [SMALL_STATE(501)] = 15562,
    [SMALL_STATE(502)] = 15578,
    [SMALL_STATE(503)] = 15594,
    [SMALL_STATE(504)] = 15610,
    [SMALL_STATE(505)] = 15624,
    [SMALL_STATE(506)] = 15640,
    [SMALL_STATE(507)] = 15656,
    [SMALL_STATE(508)] = 15669,
    [SMALL_STATE(509)] = 15682,
    [SMALL_STATE(510)] = 15695,
    [SMALL_STATE(511)] = 15708,
    [SMALL_STATE(512)] = 15721,
    [SMALL_STATE(513)] = 15734,
    [SMALL_STATE(514)] = 15747,
    [SMALL_STATE(515)] = 15760,
    [SMALL_STATE(516)] = 15773,
    [SMALL_STATE(517)] = 15786,
    [SMALL_STATE(518)] = 15799,
    [SMALL_STATE(519)] = 15812,
    [SMALL_STATE(520)] = 15825,
    [SMALL_STATE(521)] = 15838,
    [SMALL_STATE(522)] = 15851,
    [SMALL_STATE(523)] = 15864,
    [SMALL_STATE(524)] = 15877,
    [SMALL_STATE(525)] = 15890,
    [SMALL_STATE(526)] = 15903,
    [SMALL_STATE(527)] = 15916,
    [SMALL_STATE(528)] = 15929,
    [SMALL_STATE(529)] = 15942,
    [SMALL_STATE(530)] = 15955,
    [SMALL_STATE(531)] = 15968,
    [SMALL_STATE(532)] = 15981,
    [SMALL_STATE(533)] = 15994,
    [SMALL_STATE(534)] = 16007,
    [SMALL_STATE(535)] = 16020,
    [SMALL_STATE(536)] = 16033,
    [SMALL_STATE(537)] = 16046,
    [SMALL_STATE(538)] = 16059,
    [SMALL_STATE(539)] = 16072,
    [SMALL_STATE(540)] = 16085,
    [SMALL_STATE(541)] = 16098,
    [SMALL_STATE(542)] = 16111,
    [SMALL_STATE(543)] = 16124,
    [SMALL_STATE(544)] = 16137,
    [SMALL_STATE(545)] = 16150,
    [SMALL_STATE(546)] = 16163,
    [SMALL_STATE(547)] = 16176,
    [SMALL_STATE(548)] = 16189,
    [SMALL_STATE(549)] = 16202,
    [SMALL_STATE(550)] = 16215,
    [SMALL_STATE(551)] = 16228,
    [SMALL_STATE(552)] = 16241,
    [SMALL_STATE(553)] = 16254,
    [SMALL_STATE(554)] = 16267,
    [SMALL_STATE(555)] = 16280,
    [SMALL_STATE(556)] = 16293,
    [SMALL_STATE(557)] = 16306,
    [SMALL_STATE(558)] = 16319,
    [SMALL_STATE(559)] = 16332,
    [SMALL_STATE(560)] = 16345,
    [SMALL_STATE(561)] = 16358,
    [SMALL_STATE(562)] = 16371,
    [SMALL_STATE(563)] = 16384,
    [SMALL_STATE(564)] = 16397,
    [SMALL_STATE(565)] = 16410,
    [SMALL_STATE(566)] = 16423,
    [SMALL_STATE(567)] = 16436,
    [SMALL_STATE(568)] = 16449,
    [SMALL_STATE(569)] = 16462,
    [SMALL_STATE(570)] = 16475,
    [SMALL_STATE(571)] = 16488,
    [SMALL_STATE(572)] = 16501,
    [SMALL_STATE(573)] = 16514,
    [SMALL_STATE(574)] = 16527,
    [SMALL_STATE(575)] = 16540,
    [SMALL_STATE(576)] = 16553,
    [SMALL_STATE(577)] = 16566,
    [SMALL_STATE(578)] = 16579,
    [SMALL_STATE(579)] = 16592,
    [SMALL_STATE(580)] = 16605,
    [SMALL_STATE(581)] = 16618,
    [SMALL_STATE(582)] = 16631,
    [SMALL_STATE(583)] = 16644,
    [SMALL_STATE(584)] = 16657,
    [SMALL_STATE(585)] = 16670,
    [SMALL_STATE(586)] = 16683,
    [SMALL_STATE(587)] = 16696,
    [SMALL_STATE(588)] = 16709,
    [SMALL_STATE(589)] = 16722,
    [SMALL_STATE(590)] = 16735,
    [SMALL_STATE(591)] = 16748,
    [SMALL_STATE(592)] = 16761,
    [SMALL_STATE(593)] = 16774,
    [SMALL_STATE(594)] = 16787,
    [SMALL_STATE(595)] = 16800,
    [SMALL_STATE(596)] = 16813,
    [SMALL_STATE(597)] = 16826,
    [SMALL_STATE(598)] = 16839,
    [SMALL_STATE(599)] = 16852,
    [SMALL_STATE(600)] = 16865,
    [SMALL_STATE(601)] = 16878,
    [SMALL_STATE(602)] = 16891,
    [SMALL_STATE(603)] = 16904,
    [SMALL_STATE(604)] = 16917,
    [SMALL_STATE(605)] = 16930,
    [SMALL_STATE(606)] = 16943,
    [SMALL_STATE(607)] = 16956,
    [SMALL_STATE(608)] = 16969,
    [SMALL_STATE(609)] = 16982,
    [SMALL_STATE(610)] = 16995,
    [SMALL_STATE(611)] = 17008,
    [SMALL_STATE(612)] = 17021,
    [SMALL_STATE(613)] = 17034,
    [SMALL_STATE(614)] = 17047,
    [SMALL_STATE(615)] = 17060,
    [SMALL_STATE(616)] = 17073,
    [SMALL_STATE(617)] = 17086,
    [SMALL_STATE(618)] = 17099,
    [SMALL_STATE(619)] = 17112,
    [SMALL_STATE(620)] = 17125,
    [SMALL_STATE(621)] = 17138,
    [SMALL_STATE(622)] = 17151,
    [SMALL_STATE(623)] = 17164,
    [SMALL_STATE(624)] = 17177,
    [SMALL_STATE(625)] = 17190,
    [SMALL_STATE(626)] = 17203,
    [SMALL_STATE(627)] = 17216,
    [SMALL_STATE(628)] = 17229,
    [SMALL_STATE(629)] = 17242,
    [SMALL_STATE(630)] = 17255,
    [SMALL_STATE(631)] = 17268,
    [SMALL_STATE(632)] = 17281,
    [SMALL_STATE(633)] = 17294,
    [SMALL_STATE(634)] = 17307,
    [SMALL_STATE(635)] = 17320,
    [SMALL_STATE(636)] = 17333,
    [SMALL_STATE(637)] = 17346,
    [SMALL_STATE(638)] = 17359,
    [SMALL_STATE(639)] = 17372,
    [SMALL_STATE(640)] = 17385,
    [SMALL_STATE(641)] = 17398,
    [SMALL_STATE(642)] = 17411,
    [SMALL_STATE(643)] = 17424,
    [SMALL_STATE(644)] = 17437,
    [SMALL_STATE(645)] = 17450,
    [SMALL_STATE(646)] = 17463,
    [SMALL_STATE(647)] = 17476,
    [SMALL_STATE(648)] = 17489,
    [SMALL_STATE(649)] = 17502,
    [SMALL_STATE(650)] = 17515,
    [SMALL_STATE(651)] = 17528,
    [SMALL_STATE(652)] = 17541,
    [SMALL_STATE(653)] = 17554,
    [SMALL_STATE(654)] = 17567,
    [SMALL_STATE(655)] = 17580,
    [SMALL_STATE(656)] = 17593,
    [SMALL_STATE(657)] = 17606,
    [SMALL_STATE(658)] = 17619,
    [SMALL_STATE(659)] = 17632,
    [SMALL_STATE(660)] = 17645,
    [SMALL_STATE(661)] = 17658,
    [SMALL_STATE(662)] = 17671,
    [SMALL_STATE(663)] = 17684,
    [SMALL_STATE(664)] = 17697,
    [SMALL_STATE(665)] = 17710,
    [SMALL_STATE(666)] = 17723,
    [SMALL_STATE(667)] = 17736,
    [SMALL_STATE(668)] = 17749,
    [SMALL_STATE(669)] = 17762,
    [SMALL_STATE(670)] = 17775,
    [SMALL_STATE(671)] = 17788,
    [SMALL_STATE(672)] = 17801,
    [SMALL_STATE(673)] = 17814,
    [SMALL_STATE(674)] = 17827,
    [SMALL_STATE(675)] = 17840,
    [SMALL_STATE(676)] = 17853,
    [SMALL_STATE(677)] = 17866,
    [SMALL_STATE(678)] = 17879,
    [SMALL_STATE(679)] = 17892,
    [SMALL_STATE(680)] = 17905,
    [SMALL_STATE(681)] = 17918,
    [SMALL_STATE(682)] = 17931,
    [SMALL_STATE(683)] = 17944,
    [SMALL_STATE(684)] = 17957,
    [SMALL_STATE(685)] = 17970,
    [SMALL_STATE(686)] = 17983,
    [SMALL_STATE(687)] = 17996,
    [SMALL_STATE(688)] = 18009,
    [SMALL_STATE(689)] = 18022,
    [SMALL_STATE(690)] = 18035,
    [SMALL_STATE(691)] = 18048,
    [SMALL_STATE(692)] = 18061,
    [SMALL_STATE(693)] = 18074,
    [SMALL_STATE(694)] = 18087,
    [SMALL_STATE(695)] = 18100,
    [SMALL_STATE(696)] = 18113,
    [SMALL_STATE(697)] = 18126,
    [SMALL_STATE(698)] = 18139,
    [SMALL_STATE(699)] = 18152,
    [SMALL_STATE(700)] = 18165,
    [SMALL_STATE(701)] = 18178,
    [SMALL_STATE(702)] = 18191,
    [SMALL_STATE(703)] = 18204,
    [SMALL_STATE(704)] = 18217,
    [SMALL_STATE(705)] = 18230,
    [SMALL_STATE(706)] = 18243,
    [SMALL_STATE(707)] = 18256,
    [SMALL_STATE(708)] = 18269,
    [SMALL_STATE(709)] = 18282,
    [SMALL_STATE(710)] = 18295,
    [SMALL_STATE(711)] = 18308,
    [SMALL_STATE(712)] = 18321,
    [SMALL_STATE(713)] = 18334,
    [SMALL_STATE(714)] = 18347,
    [SMALL_STATE(715)] = 18351,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(227),
    [5] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(557),
    [7] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0, 0, 0),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(505),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(713),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(695),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(492),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(691),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(689),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(688),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(685),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(299),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(301),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(680),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(679),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(678),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(675),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(661),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(658),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(277),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(345),
    [49] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(170),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(631),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(614),
    [55] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(413),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(611),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(239),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(240),
    [63] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(241),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(241),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(242),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(357),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(583),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(243),
    [75] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(244),
    [77] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(244),
    [79] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(245),
    [81] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(246),
    [83] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(246),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(338),
    [87] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(338),
    [89] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(267),
    [91] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(698),
    [93] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(247),
    [95] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(375),
    [97] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(545),
    [99] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(588),
    [101] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(713),
    [103] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(665),
    [105] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(697),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(707),
    [109] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(712),
    [111] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(689),
    [115] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(688),
    [117] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(299),
    [119] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(680),
    [121] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(679),
    [123] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(678),
    [125] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(675),
    [127] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(70),
    [129] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(661),
    [131] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(63),
    [133] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(686),
    [135] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(19),
    [137] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(277),
    [139] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(170),
    [141] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(337),
    [143] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(594),
    [145] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(413),
    [147] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(178),
    [149] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(687),
    [151] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(239),
    [154] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(240),
    [157] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(241),
    [160] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(241),
    [163] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [166] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(357),
    [169] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(583),
    [172] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [175] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [178] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [181] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(245),
    [184] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(246),
    [187] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(246),
    [190] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(338),
    [193] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(338),
    [196] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(267),
    [199] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(698),
    [202] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(247),
    [205] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(375),
    [208] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(545),
    [211] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(588),
    [214] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(713),
    [217] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    [219] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(697),
    [222] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(707),
    [225] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(712),
    [228] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(62),
    [231] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(689),
    [234] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(688),
    [237] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(299),
    [240] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(680),
    [243] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(679),
    [246] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(678),
    [249] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(675),
    [252] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(70),
    [255] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(661),
    [258] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(63),
    [261] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(686),
    [264] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(19),
    [267] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(658),
    [270] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(277),
    [273] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(170),
    [276] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(337),
    [279] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(594),
    [282] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(413),
    [285] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(178),
    [288] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(584),
    [290] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(559),
    [292] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(239),
    [295] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(240),
    [298] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(241),
    [301] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(241),
    [304] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [307] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(357),
    [310] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(583),
    [313] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [316] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [319] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [322] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(245),
    [325] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(246),
    [328] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(246),
    [331] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(338),
    [334] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(338),
    [337] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(267),
    [340] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(698),
    [343] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(247),
    [346] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(375),
    [349] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(545),
    [352] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(588),
    [355] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(713),
    [358] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    [360] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(697),
    [363] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(707),
    [366] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(712),
    [369] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(62),
    [372] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(689),
    [375] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(688),
    [378] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(299),
    [381] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(680),
    [384] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(679),
    [387] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(678),
    [390] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(675),
    [393] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(70),
    [396] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(661),
    [399] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(559),
    [402] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(19),
    [405] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(658),
    [408] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(277),
    [411] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(170),
    [414] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(337),
    [417] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(594),
    [420] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(413),
    [423] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(178),
    [426] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_body, 1, 0, 0),
    [428] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(696),
    [430] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(674),
    [432] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(546),
    [434] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(541),
    [436] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1, 0, 0),
    [438] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(644),
    [440] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(239),
    [443] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(240),
    [446] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(241),
    [449] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(241),
    [452] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [455] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(357),
    [458] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(583),
    [461] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [464] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [467] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [470] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(245),
    [473] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(246),
    [476] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(246),
    [479] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(338),
    [482] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(338),
    [485] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(267),
    [488] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(698),
    [491] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(247),
    [494] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(375),
    [497] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(545),
    [500] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(588),
    [503] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(713),
    [506] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    [508] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(697),
    [511] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(707),
    [514] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(712),
    [517] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(62),
    [520] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(689),
    [523] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(688),
    [526] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(299),
    [529] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(680),
    [532] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(679),
    [535] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(678),
    [538] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(675),
    [541] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(70),
    [544] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(661),
    [547] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(19),
    [550] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(658),
    [553] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(277),
    [556] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(170),
    [559] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(337),
    [562] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(594),
    [565] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(413),
    [568] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(178),
    [571] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(530),
    [573] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(160),
    [575] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(115),
    [577] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(160),
    [579] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(437),
    [581] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(622),
    [583] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(577),
    [585] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(145),
    [587] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(148),
    [589] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(91),
    [591] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 1, 0, 0),
    [593] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case, 1, 0, 0),
    [595] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1, 0, 0),
    [597] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(607),
    [599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [601] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(611),
    [603] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(550),
    [605] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(713),
    [608] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    [610] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(695),
    [613] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(492),
    [616] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(691),
    [619] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(689),
    [622] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(688),
    [625] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(685),
    [628] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(299),
    [631] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(301),
    [634] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(680),
    [637] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(679),
    [640] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(678),
    [643] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(675),
    [646] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(70),
    [649] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(350),
    [652] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(661),
    [655] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(19),
    [658] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(658),
    [661] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(277),
    [664] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(345),
    [667] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(170),
    [670] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(631),
    [673] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(614),
    [676] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(413),
    [679] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(611),
    [682] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    [684] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(713),
    [687] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(695),
    [690] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(492),
    [693] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(691),
    [696] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(689),
    [699] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(688),
    [702] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(685),
    [705] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(299),
    [708] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(301),
    [711] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(680),
    [714] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(679),
    [717] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(678),
    [720] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(675),
    [723] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(70),
    [726] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(661),
    [729] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(19),
    [732] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(658),
    [735] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(277),
    [738] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(345),
    [741] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(170),
    [744] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(631),
    [747] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(614),
    [750] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(413),
    [753] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(611),
    [756] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(520),
    [758] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2, 0, 0),
    [760] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(599),
    [762] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(408),
    [764] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(292),
    [766] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(472),
    [768] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(525),
    [770] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(452),
    [772] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(443),
    [774] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(648),
    [776] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(411),
    [778] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(400),
    [780] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(239),
    [783] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(240),
    [786] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(241),
    [789] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(241),
    [792] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [795] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(357),
    [798] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(583),
    [801] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [804] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [807] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [810] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(245),
    [813] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(246),
    [816] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(246),
    [819] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(338),
    [822] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(338),
    [825] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(267),
    [828] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(698),
    [831] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(247),
    [834] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(375),
    [837] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(545),
    [840] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(588),
    [843] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    [845] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(292),
    [848] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(337),
    [851] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(178),
    [854] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(482),
    [856] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(512),
    [858] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(511),
    [860] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(510),
    [862] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(638),
    [864] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(658),
    [866] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(612),
    [868] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(239),
    [871] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(240),
    [874] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(241),
    [877] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(241),
    [880] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [883] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(512),
    [886] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(511),
    [889] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [892] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [895] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [898] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(245),
    [901] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(246),
    [904] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(246),
    [907] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(338),
    [910] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(338),
    [913] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(267),
    [916] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(698),
    [919] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(247),
    [922] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(510),
    [925] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(545),
    [928] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    [930] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(675),
    [933] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(70),
    [936] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(19),
    [939] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(658),
    [942] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(178),
    [945] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(424),
    [947] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(585),
    [949] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [951] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(289),
    [953] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(106),
    [955] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 1, 0, 0),
    [957] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 1, 0, 0),
    [959] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 6, 0, 0),
    [961] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 6, 0, 0),
    [963] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_value_element, 1, 0, 0),
    [965] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_element, 1, 0, 0),
    [967] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_export, 2, 0, 0),
    [969] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2, 0, 0),
    [971] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_state_member, 4, 0, 0),
    [973] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_state_member, 4, 0, 0),
    [975] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 7, 0, 0),
    [977] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 7, 0, 0),
    [979] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 5, 0, 0),
    [981] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 5, 0, 0),
    [983] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_home_export, 2, 0, 0),
    [985] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_export, 2, 0, 0),
    [987] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 1, 0, 0),
    [989] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 1, 0, 0),
    [991] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_home_export, 1, 0, 0),
    [993] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_export, 1, 0, 0),
    [995] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 1, 0, 0),
    [997] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 1, 0, 0),
    [999] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2, 0, 0),
    [1001] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2, 0, 0),
    [1003] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3, 0, 0),
    [1005] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3, 0, 0),
    [1007] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    [1009] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    [1011] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(292),
    [1014] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, 0, 6),
    [1016] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, 0, 6),
    [1018] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, 0, 3),
    [1020] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, 0, 3),
    [1022] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 2, 0, 0),
    [1024] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 2, 0, 0),
    [1026] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1, 0, 0),
    [1028] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1, 0, 0),
    [1030] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, 0, 3),
    [1032] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, 0, 3),
    [1034] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, 0, 6),
    [1036] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, 0, 6),
    [1038] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [1040] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [1042] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [1044] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [1046] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [1048] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [1050] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3, 0, 0),
    [1052] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3, 0, 0),
    [1054] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 1, 0, 0),
    [1056] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1, 0, 0),
    [1058] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5, 0, 0),
    [1060] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5, 0, 0),
    [1062] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1, 0, 0),
    [1064] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1, 0, 0),
    [1066] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 2, 0, 0),
    [1068] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 2, 0, 0),
    [1070] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [1072] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 1, 0, 0),
    [1074] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1, 0, 0),
    [1076] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 5, 0, 0),
    [1078] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 5, 0, 0),
    [1080] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(605),
    [1082] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1, 0, 0),
    [1084] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1, 0, 0),
    [1086] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    [1088] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    SHIFT_REPEAT(505),
    [1091] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    [1093] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(151),
    [1095] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1, 0, 0),
    [1097] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__definition, 1, 0, 0),
    [1099] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2, 0, 0),
    [1101] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__definition, 2, 0, 0),
    [1103] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2, 0, 0),
    [1105] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_predefine, 2, 0, 0),
    [1107] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, 0, 1),
    [1109] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, 0, 1),
    [1111] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(239),
    [1113] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(240),
    [1115] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(242),
    [1117] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(602),
    [1119] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(243),
    [1121] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(245),
    [1123] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, 0, 2),
    [1125] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, 0, 2),
    [1127] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1, 0, 0),
    [1129] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1, 0, 0),
    [1131] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 1, 0, 0),
    [1133] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 1, 0, 0),
    [1135] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1, 0, 0),
    [1137] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1, 0, 0),
    [1139] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 2, 0, 0),
    [1141] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 2, 0, 0),
    [1143] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1, 0, 0),
    [1145] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 1, 0, 0),
    [1147] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(677),
    [1149] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(712),
    [1151] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [1153] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [1155] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
    [1157] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(307),
    [1159] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(335),
    [1161] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(343),
    [1163] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    [1165] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(712),
    [1168] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(62),
    [1171] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(193),
    [1174] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(185),
    [1177] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(307),
    [1180] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(335),
    [1183] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(343),
    [1186] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_body, 1, 0, 0),
    [1188] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(652),
    [1190] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2, 0, 0),
    [1192] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2, 0, 0),
    [1194] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1, 0, 0),
    [1196] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1, 0, 0),
    [1198] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1, 0, 0),
    [1200] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1, 0, 0),
    [1202] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4, 0, 0),
    [1204] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4, 0, 0),
    [1206] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, 0, 7),
    [1208] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, 0, 7),
    [1210] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4, 0, 0),
    [1212] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4, 0, 0),
    [1214] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3, 0, 0),
    [1216] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3, 0, 0),
    [1218] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1, 0, 0),
    [1220] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1, 0, 0),
    [1222] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(131),
    [1224] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(131),
    [1226] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3, 0, 0),
    [1228] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3, 0, 0),
    [1230] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [1232] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [1234] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [1236] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [1238] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3, 0, 0),
    [1240] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3, 0, 0),
    [1242] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1, 0, 0),
    [1244] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1, 0, 0),
    [1246] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, 0, 4),
    [1248] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, 0, 4),
    [1250] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(110),
    [1252] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(111),
    [1254] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1, 0, 0),
    [1256] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1, 0, 0),
    [1258] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(129),
    [1260] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3, 0, 0),
    [1262] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3, 0, 0),
    [1264] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_simple_type_spec, 1, 0, 0),
    [1266] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1, 0, 0),
    [1268] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1, 0, 0),
    [1270] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1, 0, 0),
    [1272] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(128),
    [1274] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3, 0, 0),
    [1276] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3, 0, 0),
    [1278] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(628),
    [1280] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(629),
    [1282] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3, 0, 0),
    [1284] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(127),
    [1286] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1, 0, 0),
    [1288] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [1290] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [1292] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [1294] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_export, 2, 0, 0),
    [1296] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(501),
    [1298] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1, 0, 0),
    [1300] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(502),
    [1302] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(503),
    [1304] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1, 0, 0),
    [1306] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(126),
    [1308] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3, 0, 0),
    [1310] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(299),
    [1313] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 1, 0, 0),
    [1315] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1, 0, 0),
    [1317] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(234),
    [1319] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [1321] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [1323] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(621),
    [1325] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1, 0, 0),
    [1327] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(125),
    [1329] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(439),
    [1331] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(290),
    [1333] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(467),
    [1335] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    [1337] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(610),
    [1340] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(117),
    [1343] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2, 0, 0),
    [1345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(107),
    [1347] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_header, 2, 0, 0),
    [1349] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(330),
    [1351] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_forward_dcl, 2, 0, 0),
    [1353] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(325),
    [1355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2, 0, 0),
    [1357] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(107),
    [1360] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(470),
    [1362] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(504),
    [1364] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(500),
    [1366] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(499),
    [1368] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(461),
    [1370] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(610),
    [1372] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(117),
    [1374] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(663),
    [1376] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(192),
    [1378] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(404),
    [1380] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(412),
    [1382] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(187),
    [1384] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(454),
    [1386] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(518),
    [1388] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2, 0, 0),
    [1390] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(518),
    [1393] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(468),
    [1395] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(453),
    [1397] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(442),
    [1399] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1, 0, 0),
    [1401] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(562),
    [1403] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2, 0, 0),
    SHIFT_REPEAT(389),
    [1406] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2, 0, 0),
    [1408] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 2, 0, 0),
    [1410] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(210),
    [1412] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_forward_dcl, 2, 0, 0),
    [1414] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(218),
    [1416] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(317),
    [1418] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(315),
    [1420] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(389),
    [1422] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_supported_interface_spec, 2, 0, 0),
    [1424] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(268),
    [1426] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2, 0, 0),
    SHIFT_REPEAT(250),
    [1429] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2, 0, 0),
    [1431] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [1433] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1, 0, 0),
    [1435] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(290),
    [1438] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(699),
    [1440] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [1442] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [1444] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(227),
    [1446] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(557),
    [1448] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(294),
    [1451] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(705),
    [1453] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [1455] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(478),
    [1457] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(463),
    [1459] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(294),
    [1461] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(715),
    [1463] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5, 0, 0),
    [1465] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(714),
    [1467] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_inheritance_spec_repeat1, 2, 0, 0),
    SHIFT_REPEAT(255),
    [1470] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_inheritance_spec_repeat1, 2, 0, 0),
    [1472] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(255),
    [1474] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 4, 0, 0),
    [1476] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(228),
    [1478] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4, 0, 0),
    [1480] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(432),
    [1482] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [1484] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [1486] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(349),
    [1488] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2, 0, 0),
    [1490] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_header, 6, 0, 0),
    [1492] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(385),
    [1494] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3, 0, 0),
    [1496] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_short_int, 1, 0, 0),
    [1498] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_long_int, 1, 0, 0),
    [1500] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_longlong_int, 1, 0, 0),
    [1502] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1, 0, 0),
    [1504] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1, 0, 0),
    [1506] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_short_int, 1, 0, 0),
    [1508] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_long_int, 1, 0, 0),
    [1510] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_longlong_int, 1, 0, 0),
    [1512] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [1514] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1, 0, 0),
    [1516] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1, 0, 0),
    [1518] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2, 0, 0),
    [1520] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(298),
    [1522] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [1524] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [1526] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [1528] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 3, 0, 0),
    [1530] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(233),
    [1532] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(526),
    [1534] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(621),
    [1536] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_header, 5, 0, 0),
    [1538] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_supported_interface_spec, 3, 0, 0),
    [1540] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(500),
    [1543] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2, 0, 0),
    [1545] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2, 0, 0),
    [1547] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(270),
    [1549] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2, 0, 0),
    [1551] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [1553] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1, 0, 0),
    [1555] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(401),
    [1557] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1, 0, 0),
    [1559] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_name, 1, 0, 0),
    [1561] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 2, 0, 0),
    [1563] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(254),
    [1565] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_header, 4, 0, 0),
    [1567] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1, 0, 0),
    [1569] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [1571] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(446),
    [1573] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1, 0, 0),
    [1575] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1, 0, 0),
    [1577] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(402),
    [1579] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_param_dcls, 1, 0, 0),
    [1581] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [1583] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2, 0, 0),
    SHIFT_REPEAT(258),
    [1586] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2, 0, 0),
    [1588] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [1590] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 1, 0, 0),
    [1592] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [1594] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2, 0, 0),
    [1596] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(642),
    [1598] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2, 0, 0),
    [1600] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1, 0, 0),
    [1602] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3, 0, 0),
    [1604] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(178),
    [1606] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [1608] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(672),
    [1610] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(710),
    [1612] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [1614] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [1616] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(704),
    [1618] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(221),
    [1620] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [1622] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(273),
    [1624] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2, 0, 0),
    [1626] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_dcl, 4, 0, 0),
    [1628] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_inheritance_spec, 2, 0, 0),
    [1630] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [1632] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_inheritance_spec, 2, 0, 0),
    [1634] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5, 0, 0),
    [1636] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1, 0, 0),
    [1638] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2, 0, 0),
    [1640] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [1642] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(196),
    [1645] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2, 0, 0),
    [1647] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(303),
    [1649] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2, 0, 0),
    [1651] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2, 0, 0),
    SHIFT_REPEAT(667),
    [1654] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2, 0, 0),
    [1656] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2, 0, 0),
    SHIFT_REPEAT(17),
    [1659] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [1661] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [1663] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 2, 0, 0),
    [1665] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(667),
    [1667] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0),
    [1669] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0),
    SHIFT_REPEAT(48),
    [1672] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(481),
    [1674] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(447),
    [1676] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(444),
    [1678] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3, 0, 0),
    [1680] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_header, 3, 0, 0),
    [1682] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 1, 0, 0),
    [1684] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    SHIFT_REPEAT(418),
    [1687] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    [1689] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 7, 0, 0),
    [1691] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_in_parameter_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(420),
    [1694] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_in_parameter_dcls_repeat1, 2, 0, 0),
    [1696] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(191),
    [1698] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1, 0, 0),
    [1700] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(365),
    [1702] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(576),
    [1704] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(409),
    [1706] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(479),
    [1708] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(414),
    [1710] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 1, 0, 0),
    [1712] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8, 0, 0),
    [1714] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_object_type, 1, 0, 0),
    [1716] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1, 0, 0),
    [1718] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [1720] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [1722] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [1724] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1, 0, 0),
    [1726] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [1729] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2, 0, 0),
    [1731] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2, 0, 0),
    [1733] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2, 0, 0),
    SHIFT_REPEAT(444),
    [1736] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [1738] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6, 0, 0),
    [1740] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(451),
    [1742] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6, 0, 0),
    [1744] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2, 0, 0),
    [1746] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_factory_param_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(402),
    [1749] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_factory_param_dcls_repeat1, 2, 0, 0),
    [1751] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1, 0, 0),
    [1753] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(457),
    [1755] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(501),
    [1758] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2, 0, 0),
    [1760] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(420),
    [1762] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_parameter_dcls, 1, 0, 0),
    [1764] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(414),
    [1767] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2, 0, 0),
    [1769] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(486),
    [1771] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 6, 0, 0),
    [1773] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(623),
    [1775] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(191),
    [1778] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2, 0, 0),
    [1780] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2, 0, 0),
    [1782] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(418),
    [1784] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 1, 0, 0),
    [1786] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 5, 0, 0),
    [1788] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_context_expr_repeat1, 2, 0, 0),
    SHIFT_REPEAT(365),
    [1791] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_context_expr_repeat1, 2, 0, 0),
    [1793] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1, 0, 0),
    [1795] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_parameter_dcls, 2, 0, 0),
    [1797] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3, 0, 0),
    [1799] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 2, 0, 0),
    [1801] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [1803] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 2, 0, 0),
    [1805] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [1807] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 2, 0, 0),
    [1809] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1, 0, 0),
    [1811] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 1, 0, 0),
    [1813] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 2, 0, 0),
    [1815] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2, 0, 0),
    SHIFT_REPEAT(273),
    [1818] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2, 0, 0),
    [1820] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2, 0, 0),
    [1822] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(441),
    [1824] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4, 0, 0),
    [1826] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_param_dcls, 2, 0, 0),
    [1828] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4, 0, 0),
    [1830] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1, 0, 0),
    [1832] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_dcl, 5, 0, 0),
    [1834] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, 0, 8),
    [1836] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2, 0, 0),
    [1838] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1, 0, 0),
    [1840] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5, 0, 0),
    [1842] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_primary_key_spec, 2, 0, 0),
    [1844] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4, 0, 0),
    [1846] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7, 0, 0),
    [1848] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(459),
    [1850] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5, 0, 0),
    [1852] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8, 0, 0),
    [1854] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter, 2, 0, 0),
    [1856] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_oneway_dcl, 6, 0, 0),
    [1858] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(514),
    [1860] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_imported_scope, 1, 0, 0),
    [1862] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [1864] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 1, 0, 0),
    [1866] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6, 0, 0),
    [1868] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameter, 1, 0, 0),
    [1870] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3, 0, 0),
    [1872] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcl, 3, 0, 0),
    [1874] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_oneway_dcl, 5, 0, 0),
    [1876] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_param_dcl, 3, 0, 0),
    [1878] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2, 0, 0),
    [1880] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(590),
    [1882] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(634),
    [1884] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [1886] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(122),
    [1888] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5, 0, 0),
    [1890] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [1892] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 8, 0, 0),
    [1894] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5, 0, 0),
    [1896] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, 0, 5),
    [1898] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1, 0, 0),
    [1900] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1, 0, 0),
    [1902] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 7, 0, 0),
    [1904] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2, 0, 0),
    [1906] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 3, 0, 0),
    [1908] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(460),
    [1910] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(113),
    [1912] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3, 0, 0),
    [1914] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, 0, 8),
    [1916] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6, 0, 0),
    [1918] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7, 0, 0),
    [1920] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1, 0, 0),
    [1922] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6, 0, 0),
    [1924] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6, 0, 0),
    [1926] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(322),
    [1928] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4, 0, 0),
    [1930] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9, 0, 0),
    [1932] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1, 0, 0),
    [1934] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3, 0, 0),
    [1936] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_param_dcl, 3, 0, 0),
    [1938] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_param, 3, 0, 0),
    [1940] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1, 0, 0),
    [1942] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4, 0, 0),
    [1944] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [1946] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4, 0, 0),
    [1948] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [1950] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, 0, 0),
    [1952] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(567),
    [1954] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(570),
    [1956] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_type, 1, 0, 0),
    [1958] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4, 0, 0),
    [1960] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4, 0, 0),
    [1962] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5, 0, 0),
    [1964] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, 0, 5),
    [1966] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1, 0, 0),
    [1968] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [1970] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(339),
    [1972] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6, 0, 0),
    [1974] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(353),
    [1976] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [1978] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(538),
    [1980] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(536),
    [1982] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(198),
    [1984] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(355),
    [1986] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(566),
    [1988] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1, 0, 0),
    [1990] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1, 0, 0),
    [1992] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1, 0, 0),
    [1994] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [1996] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4, 0, 0),
    [1998] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(112),
    [2000] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(543),
    [2002] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [2004] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(516),
    [2006] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [2008] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1, 0, 0),
    [2010] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1, 0, 0),
    [2012] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [2014] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_inst, 6, 0, 0),
    [2016] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(188),
    [2018] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [2020] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(108),
    [2022] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [2024] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5, 0, 0),
    [2026] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4, 0, 0),
    [2028] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [2030] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 4, 0, 0),
    [2032] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 3, 0, 0),
    [2034] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(229),
    [2036] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(173),
    [2038] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [2040] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [2042] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [2044] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(380),
    [2046] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_uses_dcl, 4, 0, 0),
    [2048] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [2050] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(399),
    [2052] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(266),
    [2054] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2, 0, 0),
    [2056] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_kind, 2, 0, 0),
    [2058] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [2060] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [2062] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_abs_def, 7, 0, 0),
    [2064] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(235),
    [2066] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [2068] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [2070] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_abs_def, 6, 0, 0),
    [2072] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [2074] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(653),
    [2076] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 7, 0, 0),
    [2078] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [2080] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(120),
    [2082] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [2084] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [2086] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(643),
    [2088] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_dcl, 1, 0, 0),
    [2090] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(548),
    [2092] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(654),
    [2094] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(627),
    [2096] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_header, 7, 0, 0),
    [2098] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(382),
    [2100] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5, 0, 0),
    [2102] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_kind, 2, 0, 0),
    [2104] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_consumes_dcl, 3, 0, 0),
    [2106] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_publishes_dcl, 3, 0, 0),
    [2108] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2, 0, 0),
    [2110] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2, 0, 0),
    [2112] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_emits_dcl, 3, 0, 0),
    [2114] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_uses_dcl, 3, 0, 0),
    [2116] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(3),
    [2118] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(417),
    [2120] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(533),
    [2122] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_provides_dcl, 3, 0, 0),
    [2124] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 4, 0, 0),
    [2126] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(632),
    [2128] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [2130] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(670),
    [2132] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(207),
    [2134] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [2136] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [2138] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_dcl, 3, 0, 0),
    [2140] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_dcl, 1, 0, 0),
    [2142] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [2144] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3, 0, 0),
    [2146] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(694),
    [2148] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(619),
    [2150] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(676),
    [2152] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [2154] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(415),
    [2156] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5, 0, 0),
    [2158] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(304),
    [2160] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4, 0, 0),
    [2162] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(656),
    [2164] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1, 0, 0),
    [2166] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1, 0, 0),
    [2168] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(458),
    [2170] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(265),
    [2172] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [2174] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 8, 0, 0),
    [2176] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [2178] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2, 0, 0),
    [2180] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [2182] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(105),
    [2184] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4, 0, 0),
    [2186] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(515),
    [2188] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(208),
    [2190] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(336),
    [2192] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(162),
    [2194] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [2196] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 2, 0, 0),
    [2198] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(655),
    [2200] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 5, 0, 0),
    [2202] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_dcl, 2, 0, 0),
    [2204] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2, 0, 0),
    [2206] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(683),
    [2208] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(528),
    [2210] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(484),
    [2212] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [2214] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [2216] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [2218] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [2220] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(509),
    [2222] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(140),
    [2224] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [2226] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_dcl, 6, 0, 0),
    [2228] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5, 0, 0),
    [2230] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(395),
    [2232] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(613),
    [2234] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [2236] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [2238] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [2240] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_abs_def, 5, 0, 0),
    [2242] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [2244] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2, 0, 0),
    [2246] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(320),
    [2248] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5, 0, 0),
    [2250] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(564),
    [2252] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_id_dcl, 3, 0, 0),
    [2254] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_prefix_dcl, 3, 0, 0),
    [2256] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [2258] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_dcl, 4, 0, 0),
    [2260] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(251),
    [2262] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [2264] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_def, 4, 0, 0),
    [2266] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(571),
    [2268] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1, 0, 0),
    [2270] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(575),
    [2272] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(669),
    [2274] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(565),
    [2276] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2, 0, 0),
    [2278] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 4, 0, 0),
    [2280] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(252),
    [2282] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(487),
    [2284] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(673),
    [2286] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(169),
    [2288] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_with_context, 2, 0, 0),
    [2290] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(257),
    [2292] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_ref, 6, 0, 0),
    [2294] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4, 0, 0),
    [2296] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(519),
    [2298] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(542),
    [2300] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_def, 3, 0, 0),
    [2302] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(287),
    [2304] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [2306] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_kind, 1, 0, 0),
    [2308] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(381),
    [2310] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [2312] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_header, 4, 0, 0),
    [2314] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(531),
    [2316] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(666),
    [2318] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 3, 0, 0),
    [2320] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(534),
    [2322] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(495),
    [2324] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3, 0, 0),
    [2326] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_kind, 1, 0, 0),
    [2328] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 3, 0, 0),
    [2330] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1, 0, 0),
    [2332] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(137),
    [2334] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3, 0, 0),
    [2336] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [2338] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(172),
    [2340] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [2342] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(489),
    [2344] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(109),
    [2346] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(220),
    [2348] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(219),
    [2350] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1, 0, 0),
    [2352] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [2354] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(397),
    [2356] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [2358] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(493),
    [2360] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [2362] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(539),
    [2364] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_comment, 3, 0, 0),
    [2366] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_comment, 2, 0, 0),
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
