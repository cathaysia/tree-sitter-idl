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
#define STATE_COUNT 688
#define LARGE_STATE_COUNT 29
#define SYMBOL_COUNT 312
#define ALIAS_COUNT 0
#define TOKEN_COUNT 123
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
    sym_object_type = 105,
    anon_sym_oneway = 106,
    anon_sym_context = 107,
    sym_value_base_type = 108,
    anon_sym_component = 109,
    anon_sym_provides = 110,
    anon_sym_uses = 111,
    anon_sym_home = 112,
    anon_sym_manages = 113,
    anon_sym_native = 114,
    anon_sym_POUNDdefine = 115,
    aux_sym_predefine_token1 = 116,
    sym_identifier = 117,
    anon_sym_SLASH_SLASH = 118,
    aux_sym_comment_token1 = 119,
    aux_sym_comment_token2 = 120,
    anon_sym_SLASH_STAR = 121,
    aux_sym_comment_token3 = 122,
    sym_specification = 123,
    sym_signed_short_int = 124,
    sym_signed_long_int = 125,
    sym_signed_longlong_int = 126,
    sym_unsigned_int = 127,
    sym_fixed_pt_const_type = 128,
    sym_integer_type = 129,
    sym_signed_int = 130,
    sym_unsigned_short_int = 131,
    sym_unsigned_long_int = 132,
    sym_unsigned_longlong_int = 133,
    sym_floating_pt_type = 134,
    sym_char_type = 135,
    sym_scoped_name = 136,
    sym_string_type = 137,
    sym_type_spec = 138,
    sym_simple_type_spec = 139,
    sym_base_type_spec = 140,
    sym_any_type = 141,
    sym_fixed_pt_type = 142,
    sym_template_type_spec = 143,
    sym_sequence_type = 144,
    sym_map_type = 145,
    sym_positive_int_const = 146,
    sym_const_expr = 147,
    sym_or_expr = 148,
    sym_xor_expr = 149,
    sym_and_expr = 150,
    sym_shift_expr = 151,
    sym_add_expr = 152,
    sym_mult_expr = 153,
    sym_unary_expr = 154,
    sym_unary_operator = 155,
    sym_literal = 156,
    sym_string_literal = 157,
    sym_char_literal = 158,
    sym_boolean_literal = 159,
    sym_preproc_call = 160,
    sym_except_dcl = 161,
    sym_interface_dcl = 162,
    sym_interface_kind = 163,
    sym_interface_forward_dcl = 164,
    sym_interface_def = 165,
    sym_interface_header = 166,
    sym_interface_inheritance_spec = 167,
    sym_interface_name = 168,
    sym_interface_body = 169,
    sym_export = 170,
    sym_op_dcl = 171,
    sym_op_type_spec = 172,
    sym_parameter_dcls = 173,
    sym_param_dcl = 174,
    sym_param_attribute = 175,
    sym_raises_expr = 176,
    sym_attr_dcl = 177,
    sym_readonly_attr_spec = 178,
    sym_readonly_attr_declarator = 179,
    sym_attr_spec = 180,
    sym_attr_declarator = 181,
    sym_attr_raises_expr = 182,
    sym_get_excep_expr = 183,
    sym_set_excep_expr = 184,
    sym_exception_list = 185,
    sym_bitset_dcl = 186,
    sym_bitfield = 187,
    sym_bitfield_spec = 188,
    sym_destination_type = 189,
    sym_bitmask_dcl = 190,
    sym_bit_value = 191,
    sym_annotation_dcl = 192,
    sym_annotation_body = 193,
    sym_annotation_member = 194,
    sym_annotation_member_type = 195,
    sym_any_const_type = 196,
    sym_annotation_appl = 197,
    sym_annotation_appl_params = 198,
    sym_annotation_appl_param = 199,
    sym_template_module_dcl = 200,
    sym_formal_parameters = 201,
    sym_formal_parameter = 202,
    sym_formal_parameter_type = 203,
    sym_tpl_definition = 204,
    sym_template_module_inst = 205,
    sym_actual_parameters = 206,
    sym_actual_parameter = 207,
    sym_template_module_ref = 208,
    sym_formal_parameter_names = 209,
    sym_value_dcl = 210,
    sym_value_def = 211,
    sym_value_kind = 212,
    sym_value_header = 213,
    sym_value_inheritance_spec = 214,
    sym_value_name = 215,
    sym_value_element = 216,
    sym_state_member = 217,
    sym_init_dcl = 218,
    sym_init_param_dcls = 219,
    sym_init_param_dcl = 220,
    sym_value_forward_dcl = 221,
    sym_typedef_dcl = 222,
    sym_type_declarator = 223,
    sym_any_declarators = 224,
    sym_any_declarator = 225,
    sym_simple_declarator = 226,
    sym_declarator = 227,
    sym_declarators = 228,
    sym_array_declarator = 229,
    sym_fixed_array_size = 230,
    sym_enum_dcl = 231,
    sym_enumerator = 232,
    sym_enum_modifier = 233,
    sym_enum_anno = 234,
    sym_union_forward_dcl = 235,
    sym_union_def = 236,
    sym_case = 237,
    sym_case_label = 238,
    sym_element_spec = 239,
    sym_switch_type_spec = 240,
    sym_type_id_dcl = 241,
    sym_type_prefix_dcl = 242,
    sym_import_dcl = 243,
    sym_imported_scope = 244,
    sym_op_oneway_dcl = 245,
    sym_in_parameter_dcls = 246,
    sym_in_param_dcl = 247,
    sym_op_with_context = 248,
    sym_context_expr = 249,
    sym_value_abs_def = 250,
    sym_component_dcl = 251,
    sym_component_forward_dcl = 252,
    sym_component_def = 253,
    sym_component_header = 254,
    sym_component_inheritance_spec = 255,
    sym_component_body = 256,
    sym_component_export = 257,
    sym_provides_dcl = 258,
    sym_interface_type = 259,
    sym_uses_dcl = 260,
    sym_home_dcl = 261,
    sym_home_header = 262,
    sym_home_inheritance_spec = 263,
    sym_home_body = 264,
    sym_home_export = 265,
    sym_factory_dcl = 266,
    sym_factory_param_dcls = 267,
    sym_factory_param_dcl = 268,
    sym__definition = 269,
    sym_native_dcl = 270,
    sym_module_dcl = 271,
    sym_struct_forward_dcl = 272,
    sym_struct_def = 273,
    sym_member = 274,
    sym_default = 275,
    sym_predefine = 276,
    sym_const_dcl = 277,
    sym_const_type = 278,
    sym_comment = 279,
    aux_sym_specification_repeat1 = 280,
    aux_sym_specification_repeat2 = 281,
    aux_sym_except_dcl_repeat1 = 282,
    aux_sym_interface_def_repeat1 = 283,
    aux_sym_interface_inheritance_spec_repeat1 = 284,
    aux_sym_interface_body_repeat1 = 285,
    aux_sym_parameter_dcls_repeat1 = 286,
    aux_sym_raises_expr_repeat1 = 287,
    aux_sym_readonly_attr_declarator_repeat1 = 288,
    aux_sym_bitset_dcl_repeat1 = 289,
    aux_sym_bitfield_repeat1 = 290,
    aux_sym_bitmask_dcl_repeat1 = 291,
    aux_sym_annotation_dcl_repeat1 = 292,
    aux_sym_annotation_appl_params_repeat1 = 293,
    aux_sym_template_module_dcl_repeat1 = 294,
    aux_sym_formal_parameters_repeat1 = 295,
    aux_sym_actual_parameters_repeat1 = 296,
    aux_sym_formal_parameter_names_repeat1 = 297,
    aux_sym_value_def_repeat1 = 298,
    aux_sym_value_inheritance_spec_repeat1 = 299,
    aux_sym_init_param_dcls_repeat1 = 300,
    aux_sym_any_declarators_repeat1 = 301,
    aux_sym_declarators_repeat1 = 302,
    aux_sym_array_declarator_repeat1 = 303,
    aux_sym_enum_dcl_repeat1 = 304,
    aux_sym_enumerator_repeat1 = 305,
    aux_sym_union_def_repeat1 = 306,
    aux_sym_in_parameter_dcls_repeat1 = 307,
    aux_sym_context_expr_repeat1 = 308,
    aux_sym_component_body_repeat1 = 309,
    aux_sym_home_body_repeat1 = 310,
    aux_sym_factory_param_dcls_repeat1 = 311,
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
    [sym_object_type] = "object_type",
    [anon_sym_oneway] = "oneway",
    [anon_sym_context] = "context",
    [sym_value_base_type] = "value_base_type",
    [anon_sym_component] = "component",
    [anon_sym_provides] = "provides",
    [anon_sym_uses] = "uses",
    [anon_sym_home] = "home",
    [anon_sym_manages] = "manages",
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
    [sym_object_type] = sym_object_type,
    [anon_sym_oneway] = anon_sym_oneway,
    [anon_sym_context] = anon_sym_context,
    [sym_value_base_type] = sym_value_base_type,
    [anon_sym_component] = anon_sym_component,
    [anon_sym_provides] = anon_sym_provides,
    [anon_sym_uses] = anon_sym_uses,
    [anon_sym_home] = anon_sym_home,
    [anon_sym_manages] = anon_sym_manages,
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
    [sym_object_type] = {
        .visible = true,
        .named = true,
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
    [anon_sym_home] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_manages] = {
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
    [57] = 46,
    [58] = 58,
    [59] = 59,
    [60] = 60,
    [61] = 61,
    [62] = 62,
    [63] = 46,
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
    [91] = 91,
    [92] = 79,
    [93] = 81,
    [94] = 82,
    [95] = 95,
    [96] = 95,
    [97] = 95,
    [98] = 98,
    [99] = 95,
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
    [161] = 86,
    [162] = 73,
    [163] = 163,
    [164] = 164,
    [165] = 165,
    [166] = 166,
    [167] = 167,
    [168] = 168,
    [169] = 169,
    [170] = 88,
    [171] = 171,
    [172] = 172,
    [173] = 89,
    [174] = 79,
    [175] = 175,
    [176] = 176,
    [177] = 82,
    [178] = 178,
    [179] = 81,
    [180] = 180,
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
    [214] = 73,
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
    [237] = 86,
    [238] = 238,
    [239] = 239,
    [240] = 82,
    [241] = 81,
    [242] = 79,
    [243] = 86,
    [244] = 73,
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
    [371] = 367,
    [372] = 352,
    [373] = 373,
    [374] = 374,
    [375] = 367,
    [376] = 376,
    [377] = 352,
    [378] = 367,
    [379] = 379,
    [380] = 380,
    [381] = 381,
    [382] = 382,
    [383] = 383,
    [384] = 384,
    [385] = 385,
    [386] = 386,
    [387] = 234,
    [388] = 388,
    [389] = 389,
    [390] = 89,
    [391] = 391,
    [392] = 392,
    [393] = 88,
    [394] = 394,
    [395] = 395,
    [396] = 396,
    [397] = 89,
    [398] = 398,
    [399] = 88,
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
    [670] = 621,
    [671] = 560,
    [672] = 539,
    [673] = 673,
    [674] = 497,
    [675] = 675,
    [676] = 621,
    [677] = 560,
    [678] = 539,
    [679] = 679,
    [680] = 497,
    [681] = 681,
    [682] = 621,
    [683] = 497,
    [684] = 684,
    [685] = 685,
    [686] = 686,
    [687] = 687,
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
                ADVANCE(498);
            ADVANCE_MAP(
                '"', 573,
                '#', 161,
                '$', 558,
                '%', 567,
                '\'', 575,
                '(', 568,
                ')', 569,
                '*', 565,
                '+', 561,
                ',', 551,
                '-', 563,
                '/', 566,
                ':', 658,
                ';', 659,
                '<', 546,
                '=', 683,
                '>', 548,
                '@', 682,
                'F', 577,
                'L', 571,
                'O', 586,
                'T', 578,
                'V', 579,
                '[', 713,
            );
            if(lookahead == '\\')
                SKIP(491);
            if(lookahead == ']')
                ADVANCE(714);
            if(lookahead == '^')
                ADVANCE(557);
            if(lookahead == 'a')
                ADVANCE(587);
            if(lookahead == 'b')
                ADVANCE(594);
            if(lookahead == 'c')
                ADVANCE(581);
            if(lookahead == 'd')
                ADVANCE(590);
            if(lookahead == 'e')
                ADVANCE(596);
            if(lookahead == 'f')
                ADVANCE(583);
            if(lookahead == 'g')
                ADVANCE(592);
            if(lookahead == 'h')
                ADVANCE(597);
            if(lookahead == 'i')
                ADVANCE(595);
            if(lookahead == 'l')
                ADVANCE(598);
            if(lookahead == 'm')
                ADVANCE(580);
            if(lookahead == 'n')
                ADVANCE(584);
            if(lookahead == 'o')
                ADVANCE(589);
            if(lookahead == 'p')
                ADVANCE(599);
            if(lookahead == 'r')
                ADVANCE(582);
            if(lookahead == 's')
                ADVANCE(591);
            if(lookahead == 't')
                ADVANCE(600);
            if(lookahead == 'u')
                ADVANCE(593);
            if(lookahead == 'v')
                ADVANCE(585);
            if(lookahead == 'w')
                ADVANCE(588);
            if(lookahead == '{')
                ADVANCE(650);
            if(lookahead == '|')
                ADVANCE(556);
            if(lookahead == '}')
                ADVANCE(651);
            if(lookahead == '~')
                ADVANCE(570);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(576);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(71);
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(71);
            if(lookahead == '\r')
                SKIP(1);
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(73);
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(73);
            if(lookahead == '\r')
                SKIP(3);
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(60);
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(60);
            if(lookahead == '\r')
                SKIP(5);
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(75);
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(75);
            if(lookahead == '\r')
                SKIP(7);
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(76);
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(76);
            if(lookahead == '\r')
                SKIP(9);
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(65);
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(65);
            if(lookahead == '\r')
                SKIP(11);
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(77);
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(77);
            if(lookahead == '\r')
                SKIP(13);
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(78);
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(78);
            if(lookahead == '\r')
                SKIP(15);
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(79);
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(79);
            if(lookahead == '\r')
                SKIP(17);
            END_STATE();
        case 19:
            if(lookahead == '\n')
                SKIP(80);
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(80);
            if(lookahead == '\r')
                SKIP(19);
            END_STATE();
        case 21:
            if(lookahead == '\n')
                SKIP(59);
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(59);
            if(lookahead == '\r')
                SKIP(21);
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(61);
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(61);
            if(lookahead == '\r')
                SKIP(23);
            END_STATE();
        case 25:
            if(lookahead == '\n')
                SKIP(63);
            END_STATE();
        case 26:
            if(lookahead == '\n')
                SKIP(63);
            if(lookahead == '\r')
                SKIP(25);
            END_STATE();
        case 27:
            if(lookahead == '\n')
                SKIP(62);
            END_STATE();
        case 28:
            if(lookahead == '\n')
                SKIP(62);
            if(lookahead == '\r')
                SKIP(27);
            END_STATE();
        case 29:
            if(lookahead == '\n')
                SKIP(64);
            END_STATE();
        case 30:
            if(lookahead == '\n')
                SKIP(64);
            if(lookahead == '\r')
                SKIP(29);
            END_STATE();
        case 31:
            if(lookahead == '\n')
                SKIP(82);
            END_STATE();
        case 32:
            if(lookahead == '\n')
                SKIP(82);
            if(lookahead == '\r')
                SKIP(31);
            END_STATE();
        case 33:
            if(lookahead == '\n')
                SKIP(81);
            END_STATE();
        case 34:
            if(lookahead == '\n')
                SKIP(81);
            if(lookahead == '\r')
                SKIP(33);
            END_STATE();
        case 35:
            if(lookahead == '\n')
                SKIP(37);
            END_STATE();
        case 36:
            if(lookahead == '\n')
                SKIP(37);
            if(lookahead == '\r')
                SKIP(35);
            END_STATE();
        case 37:
            if(lookahead == '\n')
                ADVANCE(1015);
            if(lookahead == '\r')
                ADVANCE(37);
            if(lookahead == '(')
                ADVANCE(568);
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == ':')
                ADVANCE(96);
            if(lookahead == '@')
                ADVANCE(681);
            if(lookahead == '\\')
                SKIP(36);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(37);
            END_STATE();
        case 38:
            if(lookahead == '\n')
                SKIP(66);
            END_STATE();
        case 39:
            if(lookahead == '\n')
                SKIP(66);
            if(lookahead == '\r')
                SKIP(38);
            END_STATE();
        case 40:
            if(lookahead == '\n')
                ADVANCE(1019);
            if(lookahead == '\r')
                ADVANCE(1016);
            if(lookahead == '\\')
                ADVANCE(1017);
            if(lookahead != 0)
                ADVANCE(1020);
            END_STATE();
        case 41:
            if(lookahead == '\n')
                SKIP(83);
            END_STATE();
        case 42:
            if(lookahead == '\n')
                SKIP(83);
            if(lookahead == '\r')
                SKIP(41);
            END_STATE();
        case 43:
            if(lookahead == '\n')
                ADVANCE(635);
            if(lookahead == '\r')
                ADVANCE(46);
            if(lookahead == '/')
                ADVANCE(645);
            if(lookahead == '\\')
                ADVANCE(642);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(87);
            if(lookahead != 0)
                ADVANCE(646);
            END_STATE();
        case 44:
            if(lookahead == '\n')
                ADVANCE(635);
            if(lookahead == '\r')
                ADVANCE(45);
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == '\\')
                SKIP(52);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(86);
            END_STATE();
        case 45:
            if(lookahead == '\n')
                ADVANCE(635);
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == '\\')
                SKIP(52);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(86);
            END_STATE();
        case 46:
            if(lookahead == '\n')
                ADVANCE(635);
            if(lookahead == '/')
                ADVANCE(645);
            if(lookahead == '\\')
                ADVANCE(642);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(87);
            if(lookahead != 0)
                ADVANCE(646);
            END_STATE();
        case 47:
            if(lookahead == '\n')
                SKIP(84);
            END_STATE();
        case 48:
            if(lookahead == '\n')
                SKIP(84);
            if(lookahead == '\r')
                SKIP(47);
            END_STATE();
        case 49:
            if(lookahead == '\n')
                ADVANCE(68);
            if(lookahead == '\r')
                ADVANCE(50);
            if(lookahead == '*')
                ADVANCE(1026);
            if(lookahead != 0)
                ADVANCE(69);
            END_STATE();
        case 50:
            if(lookahead == '\n')
                ADVANCE(68);
            if(lookahead == '*')
                ADVANCE(1026);
            if(lookahead != 0)
                ADVANCE(69);
            END_STATE();
        case 51:
            if(lookahead == '\n')
                SKIP(86);
            END_STATE();
        case 52:
            if(lookahead == '\n')
                SKIP(86);
            if(lookahead == '\r')
                SKIP(51);
            END_STATE();
        case 53:
            if(lookahead == '\n')
                SKIP(74);
            END_STATE();
        case 54:
            if(lookahead == '\n')
                SKIP(74);
            if(lookahead == '\r')
                SKIP(53);
            END_STATE();
        case 55:
            if(lookahead == '\n')
                SKIP(85);
            END_STATE();
        case 56:
            if(lookahead == '\n')
                SKIP(85);
            if(lookahead == '\r')
                SKIP(55);
            END_STATE();
        case 57:
            if(lookahead == '\r')
                ADVANCE(1021);
            if(lookahead == '\\')
                ADVANCE(1017);
            if(lookahead != 0)
                ADVANCE(1020);
            END_STATE();
        case 58:
            if(lookahead == ' ')
                ADVANCE(293);
            END_STATE();
        case 59:
            ADVANCE_MAP(
                '"', 573,
                '$', 558,
                '%', 567,
                '(', 568,
                ')', 569,
                '*', 565,
                '+', 561,
                ',', 551,
                '-', 563,
                '/', 566,
                ':', 658,
                ';', 659,
                '<', 546,
                '>', 548,
                '@', 681,
                'L', 571,
            );
            if(lookahead == '\\')
                SKIP(22);
            if(lookahead == ']')
                ADVANCE(714);
            if(lookahead == '^')
                ADVANCE(557);
            if(lookahead == 'a')
                ADVANCE(139);
            if(lookahead == 'b')
                ADVANCE(265);
            if(lookahead == 'i')
                ADVANCE(333);
            if(lookahead == 'l')
                ADVANCE(353);
            if(lookahead == 'm')
                ADVANCE(123);
            if(lookahead == 's')
                ADVANCE(437);
            if(lookahead == '{')
                ADVANCE(650);
            if(lookahead == '|')
                ADVANCE(556);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(59);
            END_STATE();
        case 60:
            ADVANCE_MAP(
                '"', 573,
                '\'', 575,
                '(', 568,
                '+', 562,
                '-', 564,
                '.', 484,
                '/', 67,
                '0', 612,
                ':', 96,
                'F', 757,
                'L', 572,
                'O', 787,
                'T', 762,
                'V', 765,
            );
            if(lookahead == '\\')
                SKIP(6);
            if(lookahead == 'a')
                ADVANCE(897);
            if(lookahead == 'b')
                ADVANCE(918);
            if(lookahead == 'c')
                ADVANCE(858);
            if(lookahead == 'd')
                ADVANCE(914);
            if(lookahead == 'f')
                ADVANCE(861);
            if(lookahead == 'i')
                ADVANCE(901);
            if(lookahead == 'l')
                ADVANCE(916);
            if(lookahead == 'm')
                ADVANCE(769);
            if(lookahead == 'o')
                ADVANCE(799);
            if(lookahead == 's')
                ADVANCE(816);
            if(lookahead == 'u')
                ADVANCE(869);
            if(lookahead == 'w')
                ADVANCE(793);
            if(lookahead == '~')
                ADVANCE(570);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(60);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(616);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 61:
            ADVANCE_MAP(
                '"', 573,
                '\'', 575,
                '(', 568,
                '+', 562,
                '-', 564,
                '.', 484,
                '/', 67,
                '0', 612,
                ':', 96,
                'F', 757,
                'L', 572,
                'T', 762,
            );
            if(lookahead == '\\')
                SKIP(24);
            if(lookahead == '~')
                ADVANCE(570);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(61);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(616);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 62:
            if(lookahead == '"')
                ADVANCE(573);
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == ':')
                ADVANCE(96);
            if(lookahead == 'L')
                ADVANCE(572);
            if(lookahead == '\\')
                SKIP(28);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(62);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 63:
            if(lookahead == '$')
                ADVANCE(558);
            if(lookahead == ')')
                ADVANCE(569);
            if(lookahead == ',')
                ADVANCE(551);
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == ':')
                ADVANCE(657);
            if(lookahead == ';')
                ADVANCE(659);
            if(lookahead == '>')
                ADVANCE(547);
            if(lookahead == '\\')
                SKIP(26);
            if(lookahead == ']')
                ADVANCE(714);
            if(lookahead == '^')
                ADVANCE(557);
            if(lookahead == 'i')
                ADVANCE(307);
            if(lookahead == 'o')
                ADVANCE(457);
            if(lookahead == '|')
                ADVANCE(556);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(63);
            END_STATE();
        case 64:
            ADVANCE_MAP(
                '(', 568,
                ')', 569,
                ',', 551,
                '/', 67,
                ':', 96,
                ';', 659,
                '<', 545,
                '>', 547,
                '@', 681,
            );
            if(lookahead == '\\')
                SKIP(30);
            if(lookahead == '}')
                ADVANCE(651);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 65:
            ADVANCE_MAP(
                '(', 568,
                ',', 551,
                '/', 67,
                ':', 96,
                '>', 547,
                '@', 681,
                'O', 787,
                'V', 765,
            );
            if(lookahead == '\\')
                SKIP(12);
            if(lookahead == 'a')
                ADVANCE(897);
            if(lookahead == 'b')
                ADVANCE(918);
            if(lookahead == 'c')
                ADVANCE(858);
            if(lookahead == 'd')
                ADVANCE(914);
            if(lookahead == 'f')
                ADVANCE(861);
            if(lookahead == 'i')
                ADVANCE(901);
            if(lookahead == 'l')
                ADVANCE(916);
            if(lookahead == 'm')
                ADVANCE(769);
            if(lookahead == 'o')
                ADVANCE(799);
            if(lookahead == 's')
                ADVANCE(816);
            if(lookahead == 'u')
                ADVANCE(869);
            if(lookahead == 'w')
                ADVANCE(793);
            if(lookahead == '}')
                ADVANCE(651);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(65);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 66:
            if(lookahead == ')')
                ADVANCE(569);
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == '\\')
                SKIP(39);
            if(lookahead == 'i')
                ADVANCE(312);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(66);
            END_STATE();
        case 67:
            if(lookahead == '*')
                ADVANCE(1022);
            if(lookahead == '/')
                ADVANCE(1011);
            END_STATE();
        case 68:
            if(lookahead == '*')
                ADVANCE(1026);
            if(lookahead == '/')
                ADVANCE(70);
            if(lookahead == '\\')
                ADVANCE(49);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(68);
            if(lookahead != 0)
                ADVANCE(69);
            END_STATE();
        case 69:
            if(lookahead == '*')
                ADVANCE(1026);
            if(lookahead != 0)
                ADVANCE(69);
            END_STATE();
        case 70:
            if(lookahead == '*')
                ADVANCE(1023);
            if(lookahead == '/')
                ADVANCE(1012);
            if(lookahead != 0)
                ADVANCE(69);
            END_STATE();
        case 71:
            ADVANCE_MAP(
                ',', 551,
                '/', 67,
                ':', 96,
                '<', 545,
                '>', 547,
                '@', 681,
                'O', 787,
                'V', 765,
            );
            if(lookahead == '\\')
                SKIP(2);
            if(lookahead == ']')
                ADVANCE(714);
            if(lookahead == 'a')
                ADVANCE(788);
            if(lookahead == 'b')
                ADVANCE(863);
            if(lookahead == 'c')
                ADVANCE(856);
            if(lookahead == 'd')
                ADVANCE(914);
            if(lookahead == 'e')
                ADVANCE(899);
            if(lookahead == 'f')
                ADVANCE(768);
            if(lookahead == 'i')
                ADVANCE(888);
            if(lookahead == 'l')
                ADVANCE(916);
            if(lookahead == 'm')
                ADVANCE(769);
            if(lookahead == 'n')
                ADVANCE(774);
            if(lookahead == 'o')
                ADVANCE(798);
            if(lookahead == 'p')
                ADVANCE(936);
            if(lookahead == 'r')
                ADVANCE(836);
            if(lookahead == 's')
                ADVANCE(814);
            if(lookahead == 't')
                ADVANCE(1004);
            if(lookahead == 'u')
                ADVANCE(868);
            if(lookahead == 'v')
                ADVANCE(785);
            if(lookahead == 'w')
                ADVANCE(793);
            if(lookahead == '{')
                ADVANCE(650);
            if(lookahead == '}')
                ADVANCE(651);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(71);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 72:
            if(lookahead == '.')
                ADVANCE(484);
            if(lookahead == '0')
                ADVANCE(609);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(611);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(625);
            END_STATE();
        case 73:
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == ':')
                ADVANCE(96);
            if(lookahead == '@')
                ADVANCE(681);
            if(lookahead == 'O')
                ADVANCE(787);
            if(lookahead == 'V')
                ADVANCE(765);
            if(lookahead == '\\')
                SKIP(4);
            if(lookahead == 'a')
                ADVANCE(788);
            if(lookahead == 'b')
                ADVANCE(863);
            if(lookahead == 'c')
                ADVANCE(856);
            if(lookahead == 'd')
                ADVANCE(914);
            if(lookahead == 'e')
                ADVANCE(899);
            if(lookahead == 'f')
                ADVANCE(768);
            if(lookahead == 'i')
                ADVANCE(888);
            if(lookahead == 'l')
                ADVANCE(916);
            if(lookahead == 'm')
                ADVANCE(769);
            if(lookahead == 'n')
                ADVANCE(774);
            if(lookahead == 'o')
                ADVANCE(798);
            if(lookahead == 'r')
                ADVANCE(836);
            if(lookahead == 's')
                ADVANCE(814);
            if(lookahead == 't')
                ADVANCE(1004);
            if(lookahead == 'u')
                ADVANCE(868);
            if(lookahead == 'v')
                ADVANCE(785);
            if(lookahead == 'w')
                ADVANCE(793);
            if(lookahead == '}')
                ADVANCE(651);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(73);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 74:
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == ':')
                ADVANCE(96);
            if(lookahead == '@')
                ADVANCE(681);
            if(lookahead == 'O')
                ADVANCE(787);
            if(lookahead == 'V')
                ADVANCE(765);
            if(lookahead == '\\')
                SKIP(54);
            if(lookahead == 'a')
                ADVANCE(788);
            if(lookahead == 'b')
                ADVANCE(863);
            if(lookahead == 'c')
                ADVANCE(856);
            if(lookahead == 'd')
                ADVANCE(914);
            if(lookahead == 'e')
                ADVANCE(899);
            if(lookahead == 'f')
                ADVANCE(861);
            if(lookahead == 'i')
                ADVANCE(888);
            if(lookahead == 'l')
                ADVANCE(916);
            if(lookahead == 'm')
                ADVANCE(769);
            if(lookahead == 'n')
                ADVANCE(774);
            if(lookahead == 'o')
                ADVANCE(798);
            if(lookahead == 'r')
                ADVANCE(836);
            if(lookahead == 's')
                ADVANCE(814);
            if(lookahead == 't')
                ADVANCE(1004);
            if(lookahead == 'u')
                ADVANCE(868);
            if(lookahead == 'v')
                ADVANCE(785);
            if(lookahead == 'w')
                ADVANCE(793);
            if(lookahead == '}')
                ADVANCE(651);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(74);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 75:
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == ':')
                ADVANCE(96);
            if(lookahead == '@')
                ADVANCE(681);
            if(lookahead == 'O')
                ADVANCE(787);
            if(lookahead == 'V')
                ADVANCE(765);
            if(lookahead == '\\')
                SKIP(8);
            if(lookahead == 'a')
                ADVANCE(897);
            if(lookahead == 'b')
                ADVANCE(863);
            if(lookahead == 'c')
                ADVANCE(780);
            if(lookahead == 'd')
                ADVANCE(833);
            if(lookahead == 'e')
                ADVANCE(900);
            if(lookahead == 'f')
                ADVANCE(861);
            if(lookahead == 'i')
                ADVANCE(901);
            if(lookahead == 'l')
                ADVANCE(916);
            if(lookahead == 'm')
                ADVANCE(769);
            if(lookahead == 'o')
                ADVANCE(799);
            if(lookahead == 's')
                ADVANCE(814);
            if(lookahead == 'u')
                ADVANCE(868);
            if(lookahead == 'w')
                ADVANCE(793);
            if(lookahead == '}')
                ADVANCE(651);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(75);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 76:
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == ':')
                ADVANCE(96);
            if(lookahead == '@')
                ADVANCE(681);
            if(lookahead == 'O')
                ADVANCE(787);
            if(lookahead == 'V')
                ADVANCE(765);
            if(lookahead == '\\')
                SKIP(10);
            if(lookahead == 'a')
                ADVANCE(897);
            if(lookahead == 'b')
                ADVANCE(863);
            if(lookahead == 'c')
                ADVANCE(858);
            if(lookahead == 'd')
                ADVANCE(914);
            if(lookahead == 'e')
                ADVANCE(900);
            if(lookahead == 'f')
                ADVANCE(861);
            if(lookahead == 'i')
                ADVANCE(901);
            if(lookahead == 'l')
                ADVANCE(916);
            if(lookahead == 'm')
                ADVANCE(769);
            if(lookahead == 'o')
                ADVANCE(799);
            if(lookahead == 's')
                ADVANCE(814);
            if(lookahead == 'u')
                ADVANCE(868);
            if(lookahead == 'w')
                ADVANCE(793);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(76);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 77:
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == ':')
                ADVANCE(96);
            if(lookahead == '@')
                ADVANCE(261);
            if(lookahead == '\\')
                SKIP(14);
            if(lookahead == 'a')
                ADVANCE(897);
            if(lookahead == 'b')
                ADVANCE(918);
            if(lookahead == 'c')
                ADVANCE(857);
            if(lookahead == 'd')
                ADVANCE(914);
            if(lookahead == 'e')
                ADVANCE(900);
            if(lookahead == 'f')
                ADVANCE(861);
            if(lookahead == 'i')
                ADVANCE(901);
            if(lookahead == 'l')
                ADVANCE(916);
            if(lookahead == 'o')
                ADVANCE(799);
            if(lookahead == 's')
                ADVANCE(816);
            if(lookahead == 't')
                ADVANCE(1006);
            if(lookahead == 'u')
                ADVANCE(869);
            if(lookahead == 'w')
                ADVANCE(793);
            if(lookahead == '}')
                ADVANCE(651);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(77);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 78:
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == ':')
                ADVANCE(96);
            if(lookahead == 'O')
                ADVANCE(787);
            if(lookahead == 'V')
                ADVANCE(765);
            if(lookahead == '\\')
                SKIP(16);
            if(lookahead == 'a')
                ADVANCE(897);
            if(lookahead == 'b')
                ADVANCE(918);
            if(lookahead == 'c')
                ADVANCE(857);
            if(lookahead == 'd')
                ADVANCE(914);
            if(lookahead == 'e')
                ADVANCE(898);
            if(lookahead == 'f')
                ADVANCE(880);
            if(lookahead == 'i')
                ADVANCE(909);
            if(lookahead == 'l')
                ADVANCE(916);
            if(lookahead == 'o')
                ADVANCE(799);
            if(lookahead == 's')
                ADVANCE(815);
            if(lookahead == 't')
                ADVANCE(1007);
            if(lookahead == 'u')
                ADVANCE(868);
            if(lookahead == 'v')
                ADVANCE(786);
            if(lookahead == 'w')
                ADVANCE(794);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(78);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 79:
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == ':')
                ADVANCE(96);
            if(lookahead == '\\')
                SKIP(18);
            if(lookahead == 'b')
                ADVANCE(918);
            if(lookahead == 'c')
                ADVANCE(858);
            if(lookahead == 'd')
                ADVANCE(914);
            if(lookahead == 'f')
                ADVANCE(861);
            if(lookahead == 'i')
                ADVANCE(901);
            if(lookahead == 'l')
                ADVANCE(916);
            if(lookahead == 'o')
                ADVANCE(799);
            if(lookahead == 's')
                ADVANCE(816);
            if(lookahead == 'u')
                ADVANCE(869);
            if(lookahead == 'w')
                ADVANCE(793);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(79);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 80:
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == ':')
                ADVANCE(96);
            if(lookahead == '\\')
                SKIP(20);
            if(lookahead == 'b')
                ADVANCE(918);
            if(lookahead == 'c')
                ADVANCE(858);
            if(lookahead == 'i')
                ADVANCE(901);
            if(lookahead == 'l')
                ADVANCE(924);
            if(lookahead == 's')
                ADVANCE(859);
            if(lookahead == 'u')
                ADVANCE(869);
            if(lookahead == 'w')
                ADVANCE(794);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(80);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 81:
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == ':')
                ADVANCE(96);
            if(lookahead == '\\')
                SKIP(34);
            if(lookahead == 't')
                ADVANCE(944);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(81);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 82:
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == ':')
                ADVANCE(657);
            if(lookahead == ';')
                ADVANCE(659);
            if(lookahead == '@')
                ADVANCE(174);
            if(lookahead == '\\')
                SKIP(32);
            if(lookahead == '{')
                ADVANCE(650);
            if(lookahead == '}')
                ADVANCE(651);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(82);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 83:
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == ';')
                ADVANCE(659);
            if(lookahead == '\\')
                SKIP(42);
            if(lookahead == 's')
                ADVANCE(998);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(83);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 84:
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == '\\')
                SKIP(48);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(84);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(576);
            END_STATE();
        case 85:
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == '\\')
                SKIP(56);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(85);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(574);
            END_STATE();
        case 86:
            if(lookahead == '/')
                ADVANCE(67);
            if(lookahead == '\\')
                SKIP(52);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(86);
            END_STATE();
        case 87:
            if(lookahead == '/')
                ADVANCE(645);
            if(lookahead == '\\')
                ADVANCE(642);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(87);
            if(lookahead != 0)
                ADVANCE(646);
            END_STATE();
        case 88:
            if(lookahead == '1')
                ADVANCE(94);
            if(lookahead == '3')
                ADVANCE(90);
            if(lookahead == '6')
                ADVANCE(92);
            if(lookahead == '8')
                ADVANCE(512);
            END_STATE();
        case 89:
            if(lookahead == '1')
                ADVANCE(95);
            if(lookahead == '3')
                ADVANCE(91);
            if(lookahead == '6')
                ADVANCE(93);
            if(lookahead == '8')
                ADVANCE(520);
            if(lookahead == 'e')
                ADVANCE(388);
            END_STATE();
        case 90:
            if(lookahead == '2')
                ADVANCE(526);
            END_STATE();
        case 91:
            if(lookahead == '2')
                ADVANCE(507);
            END_STATE();
        case 92:
            if(lookahead == '4')
                ADVANCE(529);
            END_STATE();
        case 93:
            if(lookahead == '4')
                ADVANCE(510);
            END_STATE();
        case 94:
            if(lookahead == '6')
                ADVANCE(523);
            END_STATE();
        case 95:
            if(lookahead == '6')
                ADVANCE(501);
            END_STATE();
        case 96:
            if(lookahead == ':')
                ADVANCE(540);
            END_STATE();
        case 97:
            if(lookahead == '<')
                ADVANCE(560);
            END_STATE();
        case 98:
            if(lookahead == 'B')
                ADVANCE(132);
            END_STATE();
        case 99:
            if(lookahead == 'E')
                ADVANCE(601);
            END_STATE();
        case 100:
            if(lookahead == 'E')
                ADVANCE(603);
            END_STATE();
        case 101:
            if(lookahead == 'L')
                ADVANCE(102);
            END_STATE();
        case 102:
            if(lookahead == 'S')
                ADVANCE(100);
            END_STATE();
        case 103:
            if(lookahead == 'U')
                ADVANCE(99);
            END_STATE();
        case 104:
            if(lookahead == '_')
                ADVANCE(335);
            END_STATE();
        case 105:
            if(lookahead == '_')
                ADVANCE(291);
            END_STATE();
        case 106:
            if(lookahead == '_')
                ADVANCE(295);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(400);
            if(lookahead == 'o')
                ADVANCE(303);
            if(lookahead == 'u')
                ADVANCE(401);
            END_STATE();
        case 108:
            if(lookahead == 'a')
                ADVANCE(266);
            if(lookahead == 'e')
                ADVANCE(110);
            END_STATE();
        case 109:
            if(lookahead == 'a')
                ADVANCE(476);
            END_STATE();
        case 110:
            if(lookahead == 'a')
                ADVANCE(173);
            END_STATE();
        case 111:
            if(lookahead == 'a')
                ADVANCE(241);
            END_STATE();
        case 112:
            if(lookahead == 'a')
                ADVANCE(433);
            END_STATE();
        case 113:
            if(lookahead == 'a')
                ADVANCE(371);
            END_STATE();
        case 114:
            if(lookahead == 'a')
                ADVANCE(276);
            END_STATE();
        case 115:
            if(lookahead == 'a')
                ADVANCE(391);
            END_STATE();
        case 116:
            if(lookahead == 'a')
                ADVANCE(392);
            END_STATE();
        case 117:
            if(lookahead == 'a')
                ADVANCE(372);
            END_STATE();
        case 118:
            if(lookahead == 'a')
                ADVANCE(456);
            END_STATE();
        case 119:
            if(lookahead == 'a')
                ADVANCE(278);
            END_STATE();
        case 120:
            if(lookahead == 'a')
                ADVANCE(277);
            END_STATE();
        case 121:
            if(lookahead == 'a')
                ADVANCE(309);
            END_STATE();
        case 122:
            if(lookahead == 'a')
                ADVANCE(413);
            END_STATE();
        case 123:
            if(lookahead == 'a')
                ADVANCE(321);
            END_STATE();
        case 124:
            if(lookahead == 'a')
                ADVANCE(321);
            if(lookahead == 'o')
                ADVANCE(167);
            END_STATE();
        case 125:
            if(lookahead == 'a')
                ADVANCE(440);
            END_STATE();
        case 126:
            if(lookahead == 'a')
                ADVANCE(301);
            END_STATE();
        case 127:
            if(lookahead == 'a')
                ADVANCE(442);
            END_STATE();
        case 128:
            if(lookahead == 'a')
                ADVANCE(462);
            END_STATE();
        case 129:
            if(lookahead == 'a')
                ADVANCE(159);
            END_STATE();
        case 130:
            if(lookahead == 'a')
                ADVANCE(302);
            END_STATE();
        case 131:
            if(lookahead == 'a')
                ADVANCE(157);
            END_STATE();
        case 132:
            if(lookahead == 'a')
                ADVANCE(407);
            END_STATE();
        case 133:
            if(lookahead == 'a')
                ADVANCE(290);
            END_STATE();
        case 134:
            if(lookahead == 'a')
                ADVANCE(290);
            if(lookahead == 'o')
                ADVANCE(252);
            END_STATE();
        case 135:
            if(lookahead == 'a')
                ADVANCE(268);
            END_STATE();
        case 136:
            if(lookahead == 'a')
                ADVANCE(450);
            END_STATE();
        case 137:
            if(lookahead == 'a')
                ADVANCE(269);
            END_STATE();
        case 138:
            if(lookahead == 'a')
                ADVANCE(146);
            END_STATE();
        case 139:
            if(lookahead == 'b')
                ADVANCE(408);
            END_STATE();
        case 140:
            if(lookahead == 'b')
                ADVANCE(408);
            if(lookahead == 'l')
                ADVANCE(250);
            END_STATE();
        case 141:
            if(lookahead == 'b')
                ADVANCE(408);
            if(lookahead == 't')
                ADVANCE(428);
            END_STATE();
        case 142:
            if(lookahead == 'b')
                ADVANCE(282);
            END_STATE();
        case 143:
            if(lookahead == 'b')
                ADVANCE(465);
            END_STATE();
        case 144:
            if(lookahead == 'b')
                ADVANCE(284);
            END_STATE();
        case 145:
            if(lookahead == 'b')
                ADVANCE(288);
            END_STATE();
        case 146:
            if(lookahead == 'b')
                ADVANCE(289);
            END_STATE();
        case 147:
            if(lookahead == 'c')
                ADVANCE(705);
            END_STATE();
        case 148:
            if(lookahead == 'c')
                ADVANCE(243);
            END_STATE();
        case 149:
            if(lookahead == 'c')
                ADVANCE(436);
            END_STATE();
        case 150:
            if(lookahead == 'c')
                ADVANCE(114);
            END_STATE();
        case 151:
            if(lookahead == 'c')
                ADVANCE(114);
            if(lookahead == 'n')
                ADVANCE(233);
            END_STATE();
        case 152:
            if(lookahead == 'c')
                ADVANCE(114);
            if(lookahead == 'n')
                ADVANCE(239);
            END_STATE();
        case 153:
            if(lookahead == 'c')
                ADVANCE(201);
            END_STATE();
        case 154:
            if(lookahead == 'c')
                ADVANCE(447);
            END_STATE();
        case 155:
            if(lookahead == 'c')
                ADVANCE(417);
            END_STATE();
        case 156:
            if(lookahead == 'c')
                ADVANCE(420);
            END_STATE();
        case 157:
            if(lookahead == 'c')
                ADVANCE(423);
            END_STATE();
        case 158:
            if(lookahead == 'c')
                ADVANCE(185);
            END_STATE();
        case 159:
            if(lookahead == 'c')
                ADVANCE(194);
            END_STATE();
        case 160:
            if(lookahead == 'c')
                ADVANCE(125);
            END_STATE();
        case 161:
            if(lookahead == 'd')
                ADVANCE(636);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(482);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(641);
            END_STATE();
        case 162:
            if(lookahead == 'd')
                ADVANCE(660);
            END_STATE();
        case 163:
            if(lookahead == 'd')
                ADVANCE(516);
            END_STATE();
        case 164:
            if(lookahead == 'd')
                ADVANCE(721);
            END_STATE();
        case 165:
            if(lookahead == 'd')
                ADVANCE(675);
            END_STATE();
        case 166:
            if(lookahead == 'd')
                ADVANCE(58);
            END_STATE();
        case 167:
            if(lookahead == 'd')
                ADVANCE(463);
            END_STATE();
        case 168:
            if(lookahead == 'd')
                ADVANCE(359);
            if(lookahead == 'l')
                ADVANCE(347);
            END_STATE();
        case 169:
            if(lookahead == 'd')
                ADVANCE(197);
            if(lookahead == 'i')
                ADVANCE(164);
            if(lookahead == 'n')
                ADVANCE(126);
            if(lookahead == 'p')
                ADVANCE(384);
            END_STATE();
        case 170:
            if(lookahead == 'd')
                ADVANCE(197);
            if(lookahead == 'i')
                ADVANCE(164);
            if(lookahead == 'p')
                ADVANCE(384);
            END_STATE();
        case 171:
            if(lookahead == 'd')
                ADVANCE(206);
            END_STATE();
        case 172:
            if(lookahead == 'd')
                ADVANCE(219);
            END_STATE();
        case 173:
            if(lookahead == 'd')
                ADVANCE(346);
            END_STATE();
        case 174:
            if(lookahead == 'd')
                ADVANCE(224);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(227);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(471);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(719);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(736);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(169);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(98);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(533);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(684);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(738);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(707);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(552);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(685);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(731);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(669);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(689);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(687);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(535);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(702);
            END_STATE();
        case 193:
            if(lookahead == 'e')
                ADVANCE(170);
            END_STATE();
        case 194:
            if(lookahead == 'e')
                ADVANCE(655);
            END_STATE();
        case 195:
            if(lookahead == 'e')
                ADVANCE(740);
            END_STATE();
        case 196:
            if(lookahead == 'e')
                ADVANCE(105);
            END_STATE();
        case 197:
            if(lookahead == 'e')
                ADVANCE(226);
            END_STATE();
        case 198:
            if(lookahead == 'e')
                ADVANCE(474);
            END_STATE();
        case 199:
            if(lookahead == 'e')
                ADVANCE(390);
            END_STATE();
        case 200:
            if(lookahead == 'e')
                ADVANCE(229);
            END_STATE();
        case 201:
            if(lookahead == 'e')
                ADVANCE(364);
            END_STATE();
        case 202:
            if(lookahead == 'e')
                ADVANCE(163);
            END_STATE();
        case 203:
            if(lookahead == 'e')
                ADVANCE(281);
            END_STATE();
        case 204:
            if(lookahead == 'e')
                ADVANCE(393);
            END_STATE();
        case 205:
            if(lookahead == 'e')
                ADVANCE(394);
            END_STATE();
        case 206:
            if(lookahead == 'e')
                ADVANCE(395);
            END_STATE();
        case 207:
            if(lookahead == 'e')
                ADVANCE(166);
            END_STATE();
        case 208:
            if(lookahead == 'e')
                ADVANCE(330);
            END_STATE();
        case 209:
            if(lookahead == 'e')
                ADVANCE(397);
            END_STATE();
        case 210:
            if(lookahead == 'e')
                ADVANCE(398);
            END_STATE();
        case 211:
            if(lookahead == 'e')
                ADVANCE(388);
            END_STATE();
        case 212:
            if(lookahead == 'e')
                ADVANCE(399);
            END_STATE();
        case 213:
            if(lookahead == 'e')
                ADVANCE(121);
            END_STATE();
        case 214:
            if(lookahead == 'e')
                ADVANCE(415);
            END_STATE();
        case 215:
            if(lookahead == 'e')
                ADVANCE(418);
            END_STATE();
        case 216:
            if(lookahead == 'e')
                ADVANCE(432);
            END_STATE();
        case 217:
            if(lookahead == 'e')
                ADVANCE(326);
            END_STATE();
        case 218:
            if(lookahead == 'e')
                ADVANCE(155);
            END_STATE();
        case 219:
            if(lookahead == 'e')
                ADVANCE(230);
            END_STATE();
        case 220:
            if(lookahead == 'e')
                ADVANCE(328);
            END_STATE();
        case 221:
            if(lookahead == 'e')
                ADVANCE(381);
            END_STATE();
        case 222:
            if(lookahead == 'e')
                ADVANCE(383);
            END_STATE();
        case 223:
            if(lookahead == 'e')
                ADVANCE(449);
            END_STATE();
        case 224:
            if(lookahead == 'e')
                ADVANCE(232);
            END_STATE();
        case 225:
            if(lookahead == 'e')
                ADVANCE(452);
            if(lookahead == 'h')
                ADVANCE(342);
            if(lookahead == 't')
                ADVANCE(377);
            if(lookahead == 'u')
                ADVANCE(368);
            END_STATE();
        case 226:
            if(lookahead == 'f')
                ADVANCE(711);
            END_STATE();
        case 227:
            if(lookahead == 'f')
                ADVANCE(118);
            END_STATE();
        case 228:
            if(lookahead == 'f')
                ADVANCE(263);
            if(lookahead == 'm')
                ADVANCE(116);
            if(lookahead == 's')
                ADVANCE(215);
            END_STATE();
        case 229:
            if(lookahead == 'f')
                ADVANCE(251);
            END_STATE();
        case 230:
            if(lookahead == 'f')
                ADVANCE(267);
            END_STATE();
        case 231:
            if(lookahead == 'f')
                ADVANCE(129);
            END_STATE();
        case 232:
            if(lookahead == 'f')
                ADVANCE(128);
            END_STATE();
        case 233:
            if(lookahead == 'g')
                ADVANCE(503);
            END_STATE();
        case 234:
            if(lookahead == 'g')
                ADVANCE(541);
            END_STATE();
        case 235:
            if(lookahead == 'g')
                ADVANCE(543);
            END_STATE();
        case 236:
            if(lookahead == 'g')
                ADVANCE(509);
            END_STATE();
        case 237:
            if(lookahead == 'g')
                ADVANCE(525);
            END_STATE();
        case 238:
            if(lookahead == 'g')
                ADVANCE(528);
            END_STATE();
        case 239:
            if(lookahead == 'g')
                ADVANCE(505);
            END_STATE();
        case 240:
            if(lookahead == 'g')
                ADVANCE(327);
            END_STATE();
        case 241:
            if(lookahead == 'g')
                ADVANCE(205);
            END_STATE();
        case 242:
            if(lookahead == 'g')
                ADVANCE(332);
            END_STATE();
        case 243:
            if(lookahead == 'h')
                ADVANCE(717);
            END_STATE();
        case 244:
            if(lookahead == 'h')
                ADVANCE(117);
            END_STATE();
        case 245:
            if(lookahead == 'h')
                ADVANCE(357);
            END_STATE();
        case 246:
            if(lookahead == 'i')
                ADVANCE(469);
            if(lookahead == 'o')
                ADVANCE(468);
            END_STATE();
        case 247:
            if(lookahead == 'i')
                ADVANCE(325);
            if(lookahead == 'n')
                ADVANCE(256);
            if(lookahead == 's')
                ADVANCE(199);
            END_STATE();
        case 248:
            if(lookahead == 'i')
                ADVANCE(409);
            if(lookahead == 'o')
                ADVANCE(337);
            END_STATE();
        case 249:
            if(lookahead == 'i')
                ADVANCE(143);
            END_STATE();
        case 250:
            if(lookahead == 'i')
                ADVANCE(115);
            END_STATE();
        case 251:
            if(lookahead == 'i')
                ADVANCE(472);
            END_STATE();
        case 252:
            if(lookahead == 'i')
                ADVANCE(162);
            END_STATE();
        case 253:
            if(lookahead == 'i')
                ADVANCE(240);
            END_STATE();
        case 254:
            if(lookahead == 'i')
                ADVANCE(470);
            END_STATE();
        case 255:
            if(lookahead == 'i')
                ADVANCE(343);
            END_STATE();
        case 256:
            if(lookahead == 'i')
                ADVANCE(343);
            if(lookahead == 's')
                ADVANCE(253);
            END_STATE();
        case 257:
            if(lookahead == 'i')
                ADVANCE(316);
            if(lookahead == 'u')
                ADVANCE(156);
            END_STATE();
        case 258:
            if(lookahead == 'i')
                ADVANCE(147);
            END_STATE();
        case 259:
            if(lookahead == 'i')
                ADVANCE(171);
            END_STATE();
        case 260:
            if(lookahead == 'i')
                ADVANCE(430);
            END_STATE();
        case 261:
            if(lookahead == 'i')
                ADVANCE(242);
            END_STATE();
        case 262:
            if(lookahead == 'i')
                ADVANCE(318);
            END_STATE();
        case 263:
            if(lookahead == 'i')
                ADVANCE(203);
            END_STATE();
        case 264:
            if(lookahead == 'i')
                ADVANCE(427);
            END_STATE();
        case 265:
            if(lookahead == 'i')
                ADVANCE(431);
            END_STATE();
        case 266:
            if(lookahead == 'i')
                ADVANCE(404);
            END_STATE();
        case 267:
            if(lookahead == 'i')
                ADVANCE(329);
            END_STATE();
        case 268:
            if(lookahead == 'i')
                ADVANCE(405);
            END_STATE();
        case 269:
            if(lookahead == 'i')
                ADVANCE(406);
            END_STATE();
        case 270:
            if(lookahead == 'i')
                ADVANCE(445);
            END_STATE();
        case 271:
            if(lookahead == 'i')
                ADVANCE(348);
            END_STATE();
        case 272:
            if(lookahead == 'i')
                ADVANCE(349);
            END_STATE();
        case 273:
            if(lookahead == 'i')
                ADVANCE(451);
            END_STATE();
        case 274:
            if(lookahead == 'j')
                ADVANCE(218);
            END_STATE();
        case 275:
            if(lookahead == 'k')
                ADVANCE(676);
            END_STATE();
        case 276:
            if(lookahead == 'l')
                ADVANCE(652);
            END_STATE();
        case 277:
            if(lookahead == 'l')
                ADVANCE(715);
            END_STATE();
        case 278:
            if(lookahead == 'l')
                ADVANCE(104);
            END_STATE();
        case 279:
            if(lookahead == 'l')
                ADVANCE(458);
            END_STATE();
        case 280:
            if(lookahead == 'l')
                ADVANCE(478);
            END_STATE();
        case 281:
            if(lookahead == 'l')
                ADVANCE(165);
            END_STATE();
        case 282:
            if(lookahead == 'l')
                ADVANCE(258);
            END_STATE();
        case 283:
            if(lookahead == 'l')
                ADVANCE(213);
            END_STATE();
        case 284:
            if(lookahead == 'l')
                ADVANCE(181);
            END_STATE();
        case 285:
            if(lookahead == 'l')
                ADVANCE(182);
            END_STATE();
        case 286:
            if(lookahead == 'l')
                ADVANCE(422);
            END_STATE();
        case 287:
            if(lookahead == 'l')
                ADVANCE(453);
            END_STATE();
        case 288:
            if(lookahead == 'l')
                ADVANCE(191);
            END_STATE();
        case 289:
            if(lookahead == 'l')
                ADVANCE(192);
            END_STATE();
        case 290:
            if(lookahead == 'l')
                ADVANCE(466);
            END_STATE();
        case 291:
            if(lookahead == 'l')
                ADVANCE(270);
            END_STATE();
        case 292:
            if(lookahead == 'l')
                ADVANCE(347);
            END_STATE();
        case 293:
            if(lookahead == 'l')
                ADVANCE(350);
            if(lookahead == 's')
                ADVANCE(245);
            END_STATE();
        case 294:
            if(lookahead == 'l')
                ADVANCE(352);
            END_STATE();
        case 295:
            if(lookahead == 'l')
                ADVANCE(273);
            END_STATE();
        case 296:
            if(lookahead == 'm')
                ADVANCE(366);
            if(lookahead == 'n')
                ADVANCE(426);
            END_STATE();
        case 297:
            if(lookahead == 'm')
                ADVANCE(366);
            if(lookahead == 'n')
                ADVANCE(444);
            END_STATE();
        case 298:
            if(lookahead == 'm')
                ADVANCE(695);
            END_STATE();
        case 299:
            if(lookahead == 'm')
                ADVANCE(700);
            END_STATE();
        case 300:
            if(lookahead == 'm')
                ADVANCE(178);
            END_STATE();
        case 301:
            if(lookahead == 'm')
                ADVANCE(186);
            END_STATE();
        case 302:
            if(lookahead == 'm')
                ADVANCE(212);
            END_STATE();
        case 303:
            if(lookahead == 'm')
                ADVANCE(365);
            if(lookahead == 'n')
                ADVANCE(403);
            END_STATE();
        case 304:
            if(lookahead == 'm')
                ADVANCE(365);
            if(lookahead == 'n')
                ADVANCE(402);
            END_STATE();
        case 305:
            if(lookahead == 'm')
                ADVANCE(116);
            END_STATE();
        case 306:
            if(lookahead == 'm')
                ADVANCE(116);
            if(lookahead == 's')
                ADVANCE(215);
            END_STATE();
        case 307:
            if(lookahead == 'n')
                ADVANCE(663);
            END_STATE();
        case 308:
            if(lookahead == 'n')
                ADVANCE(693);
            END_STATE();
        case 309:
            if(lookahead == 'n')
                ADVANCE(514);
            END_STATE();
        case 310:
            if(lookahead == 'n')
                ADVANCE(648);
            END_STATE();
        case 311:
            if(lookahead == 'n')
                ADVANCE(678);
            END_STATE();
        case 312:
            if(lookahead == 'n')
                ADVANCE(662);
            END_STATE();
        case 313:
            if(lookahead == 'n')
                ADVANCE(454);
            if(lookahead == 'x')
                ADVANCE(153);
            END_STATE();
        case 314:
            if(lookahead == 'n')
                ADVANCE(317);
            END_STATE();
        case 315:
            if(lookahead == 'n')
                ADVANCE(160);
            END_STATE();
        case 316:
            if(lookahead == 'n')
                ADVANCE(234);
            END_STATE();
        case 317:
            if(lookahead == 'n')
                ADVANCE(351);
            END_STATE();
        case 318:
            if(lookahead == 'n')
                ADVANCE(235);
            END_STATE();
        case 319:
            if(lookahead == 'n')
                ADVANCE(236);
            END_STATE();
        case 320:
            if(lookahead == 'n')
                ADVANCE(280);
            END_STATE();
        case 321:
            if(lookahead == 'n')
                ADVANCE(111);
            END_STATE();
        case 322:
            if(lookahead == 'n')
                ADVANCE(111);
            if(lookahead == 'p')
                ADVANCE(554);
            END_STATE();
        case 323:
            if(lookahead == 'n')
                ADVANCE(237);
            END_STATE();
        case 324:
            if(lookahead == 'n')
                ADVANCE(238);
            END_STATE();
        case 325:
            if(lookahead == 'n')
                ADVANCE(411);
            END_STATE();
        case 326:
            if(lookahead == 'n')
                ADVANCE(441);
            END_STATE();
        case 327:
            if(lookahead == 'n')
                ADVANCE(207);
            END_STATE();
        case 328:
            if(lookahead == 'n')
                ADVANCE(424);
            END_STATE();
        case 329:
            if(lookahead == 'n')
                ADVANCE(195);
            END_STATE();
        case 330:
            if(lookahead == 'n')
                ADVANCE(158);
            END_STATE();
        case 331:
            if(lookahead == 'n')
                ADVANCE(255);
            END_STATE();
        case 332:
            if(lookahead == 'n')
                ADVANCE(355);
            END_STATE();
        case 333:
            if(lookahead == 'n')
                ADVANCE(444);
            END_STATE();
        case 334:
            if(lookahead == 'n')
                ADVANCE(220);
            END_STATE();
        case 335:
            if(lookahead == 'n')
                ADVANCE(130);
            END_STATE();
        case 336:
            if(lookahead == 'o')
                ADVANCE(300);
            END_STATE();
        case 337:
            if(lookahead == 'o')
                ADVANCE(283);
            END_STATE();
        case 338:
            if(lookahead == 'o')
                ADVANCE(468);
            END_STATE();
        case 339:
            if(lookahead == 'o')
                ADVANCE(304);
            if(lookahead == 'u')
                ADVANCE(401);
            END_STATE();
        case 340:
            if(lookahead == 'o')
                ADVANCE(299);
            END_STATE();
        case 341:
            if(lookahead == 'o')
                ADVANCE(122);
            END_STATE();
        case 342:
            if(lookahead == 'o')
                ADVANCE(380);
            END_STATE();
        case 343:
            if(lookahead == 'o')
                ADVANCE(308);
            END_STATE();
        case 344:
            if(lookahead == 'o')
                ADVANCE(334);
            END_STATE();
        case 345:
            if(lookahead == 'o')
                ADVANCE(373);
            END_STATE();
        case 346:
            if(lookahead == 'o')
                ADVANCE(320);
            END_STATE();
        case 347:
            if(lookahead == 'o')
                ADVANCE(319);
            END_STATE();
        case 348:
            if(lookahead == 'o')
                ADVANCE(310);
            END_STATE();
        case 349:
            if(lookahead == 'o')
                ADVANCE(311);
            END_STATE();
        case 350:
            if(lookahead == 'o')
                ADVANCE(323);
            END_STATE();
        case 351:
            if(lookahead == 'o')
                ADVANCE(439);
            END_STATE();
        case 352:
            if(lookahead == 'o')
                ADVANCE(324);
            END_STATE();
        case 353:
            if(lookahead == 'o')
                ADVANCE(150);
            END_STATE();
        case 354:
            if(lookahead == 'o')
                ADVANCE(382);
            END_STATE();
        case 355:
            if(lookahead == 'o')
                ADVANCE(387);
            END_STATE();
        case 356:
            if(lookahead == 'o')
                ADVANCE(385);
            END_STATE();
        case 357:
            if(lookahead == 'o')
                ADVANCE(386);
            END_STATE();
        case 358:
            if(lookahead == 'o')
                ADVANCE(152);
            END_STATE();
        case 359:
            if(lookahead == 'o')
                ADVANCE(467);
            END_STATE();
        case 360:
            if(lookahead == 'p')
                ADVANCE(179);
            END_STATE();
        case 361:
            if(lookahead == 'p')
                ADVANCE(189);
            END_STATE();
        case 362:
            if(lookahead == 'p')
                ADVANCE(190);
            END_STATE();
        case 363:
            if(lookahead == 'p')
                ADVANCE(193);
            END_STATE();
        case 364:
            if(lookahead == 'p')
                ADVANCE(438);
            END_STATE();
        case 365:
            if(lookahead == 'p')
                ADVANCE(344);
            END_STATE();
        case 366:
            if(lookahead == 'p')
                ADVANCE(354);
            END_STATE();
        case 367:
            if(lookahead == 'p')
                ADVANCE(356);
            END_STATE();
        case 368:
            if(lookahead == 'p')
                ADVANCE(367);
            END_STATE();
        case 369:
            if(lookahead == 'q')
                ADVANCE(460);
            if(lookahead == 't')
                ADVANCE(389);
            END_STATE();
        case 370:
            if(lookahead == 'r')
                ADVANCE(257);
            END_STATE();
        case 371:
            if(lookahead == 'r')
                ADVANCE(536);
            END_STATE();
        case 372:
            if(lookahead == 'r')
                ADVANCE(538);
            END_STATE();
        case 373:
            if(lookahead == 'r')
                ADVANCE(477);
            END_STATE();
        case 374:
            if(lookahead == 'r')
                ADVANCE(249);
            END_STATE();
        case 375:
            if(lookahead == 'r')
                ADVANCE(135);
            END_STATE();
        case 376:
            if(lookahead == 'r')
                ADVANCE(338);
            END_STATE();
        case 377:
            if(lookahead == 'r')
                ADVANCE(464);
            END_STATE();
        case 378:
            if(lookahead == 'r')
                ADVANCE(262);
            END_STATE();
        case 379:
            if(lookahead == 'r')
                ADVANCE(131);
            END_STATE();
        case 380:
            if(lookahead == 'r')
                ADVANCE(416);
            END_STATE();
        case 381:
            if(lookahead == 'r')
                ADVANCE(119);
            END_STATE();
        case 382:
            if(lookahead == 'r')
                ADVANCE(419);
            END_STATE();
        case 383:
            if(lookahead == 'r')
                ADVANCE(120);
            END_STATE();
        case 384:
            if(lookahead == 'r')
                ADVANCE(200);
            END_STATE();
        case 385:
            if(lookahead == 'r')
                ADVANCE(435);
            END_STATE();
        case 386:
            if(lookahead == 'r')
                ADVANCE(425);
            END_STATE();
        case 387:
            if(lookahead == 'r')
                ADVANCE(196);
            END_STATE();
        case 388:
            if(lookahead == 'r')
                ADVANCE(231);
            END_STATE();
        case 389:
            if(lookahead == 'r')
                ADVANCE(137);
            END_STATE();
        case 390:
            if(lookahead == 's')
                ADVANCE(735);
            END_STATE();
        case 391:
            if(lookahead == 's')
                ADVANCE(699);
            END_STATE();
        case 392:
            if(lookahead == 's')
                ADVANCE(275);
            END_STATE();
        case 393:
            if(lookahead == 's')
                ADVANCE(666);
            END_STATE();
        case 394:
            if(lookahead == 's')
                ADVANCE(737);
            END_STATE();
        case 395:
            if(lookahead == 's')
                ADVANCE(734);
            END_STATE();
        case 396:
            if(lookahead == 's')
                ADVANCE(704);
            END_STATE();
        case 397:
            if(lookahead == 's')
                ADVANCE(671);
            END_STATE();
        case 398:
            if(lookahead == 's')
                ADVANCE(672);
            END_STATE();
        case 399:
            if(lookahead == 's')
                ADVANCE(716);
            END_STATE();
        case 400:
            if(lookahead == 's')
                ADVANCE(177);
            END_STATE();
        case 401:
            if(lookahead == 's')
                ADVANCE(434);
            END_STATE();
        case 402:
            if(lookahead == 's')
                ADVANCE(412);
            END_STATE();
        case 403:
            if(lookahead == 's')
                ADVANCE(412);
            if(lookahead == 't')
                ADVANCE(198);
            END_STATE();
        case 404:
            if(lookahead == 's')
                ADVANCE(204);
            END_STATE();
        case 405:
            if(lookahead == 's')
                ADVANCE(209);
            END_STATE();
        case 406:
            if(lookahead == 's')
                ADVANCE(210);
            END_STATE();
        case 407:
            if(lookahead == 's')
                ADVANCE(187);
            END_STATE();
        case 408:
            if(lookahead == 's')
                ADVANCE(448);
            END_STATE();
        case 409:
            if(lookahead == 't')
                ADVANCE(228);
            END_STATE();
        case 410:
            if(lookahead == 't')
                ADVANCE(664);
            END_STATE();
        case 411:
            if(lookahead == 't')
                ADVANCE(88);
            END_STATE();
        case 412:
            if(lookahead == 't')
                ADVANCE(697);
            END_STATE();
        case 413:
            if(lookahead == 't')
                ADVANCE(531);
            END_STATE();
        case 414:
            if(lookahead == 't')
                ADVANCE(665);
            END_STATE();
        case 415:
            if(lookahead == 't')
                ADVANCE(518);
            END_STATE();
        case 416:
            if(lookahead == 't')
                ADVANCE(499);
            END_STATE();
        case 417:
            if(lookahead == 't')
                ADVANCE(726);
            END_STATE();
        case 418:
            if(lookahead == 't')
                ADVANCE(673);
            END_STATE();
        case 419:
            if(lookahead == 't')
                ADVANCE(724);
            END_STATE();
        case 420:
            if(lookahead == 't')
                ADVANCE(691);
            END_STATE();
        case 421:
            if(lookahead == 't')
                ADVANCE(730);
            END_STATE();
        case 422:
            if(lookahead == 't')
                ADVANCE(679);
            END_STATE();
        case 423:
            if(lookahead == 't')
                ADVANCE(653);
            END_STATE();
        case 424:
            if(lookahead == 't')
                ADVANCE(733);
            END_STATE();
        case 425:
            if(lookahead == 't')
                ADVANCE(522);
            END_STATE();
        case 426:
            if(lookahead == 't')
                ADVANCE(89);
            END_STATE();
        case 427:
            if(lookahead == 't')
                ADVANCE(306);
            END_STATE();
        case 428:
            if(lookahead == 't')
                ADVANCE(374);
            END_STATE();
        case 429:
            if(lookahead == 't')
                ADVANCE(479);
            END_STATE();
        case 430:
            if(lookahead == 't')
                ADVANCE(148);
            END_STATE();
        case 431:
            if(lookahead == 't')
                ADVANCE(305);
            END_STATE();
        case 432:
            if(lookahead == 't')
                ADVANCE(375);
            END_STATE();
        case 433:
            if(lookahead == 't')
                ADVANCE(254);
            END_STATE();
        case 434:
            if(lookahead == 't')
                ADVANCE(340);
            END_STATE();
        case 435:
            if(lookahead == 't')
                ADVANCE(396);
            END_STATE();
        case 436:
            if(lookahead == 't')
                ADVANCE(214);
            END_STATE();
        case 437:
            if(lookahead == 't')
                ADVANCE(377);
            if(lookahead == 'u')
                ADVANCE(368);
            END_STATE();
        case 438:
            if(lookahead == 't')
                ADVANCE(271);
            END_STATE();
        case 439:
            if(lookahead == 't')
                ADVANCE(136);
            END_STATE();
        case 440:
            if(lookahead == 't')
                ADVANCE(138);
            END_STATE();
        case 441:
            if(lookahead == 't')
                ADVANCE(429);
            END_STATE();
        case 442:
            if(lookahead == 't')
                ADVANCE(184);
            END_STATE();
        case 443:
            if(lookahead == 't')
                ADVANCE(188);
            END_STATE();
        case 444:
            if(lookahead == 't')
                ADVANCE(211);
            END_STATE();
        case 445:
            if(lookahead == 't')
                ADVANCE(221);
            END_STATE();
        case 446:
            if(lookahead == 't')
                ADVANCE(378);
            END_STATE();
        case 447:
            if(lookahead == 't')
                ADVANCE(345);
            END_STATE();
        case 448:
            if(lookahead == 't')
                ADVANCE(379);
            END_STATE();
        case 449:
            if(lookahead == 't')
                ADVANCE(480);
            END_STATE();
        case 450:
            if(lookahead == 't')
                ADVANCE(272);
            END_STATE();
        case 451:
            if(lookahead == 't')
                ADVANCE(222);
            END_STATE();
        case 452:
            if(lookahead == 't')
                ADVANCE(389);
            END_STATE();
        case 453:
            if(lookahead == 't')
                ADVANCE(106);
            END_STATE();
        case 454:
            if(lookahead == 'u')
                ADVANCE(298);
            END_STATE();
        case 455:
            if(lookahead == 'u')
                ADVANCE(315);
            END_STATE();
        case 456:
            if(lookahead == 'u')
                ADVANCE(286);
            END_STATE();
        case 457:
            if(lookahead == 'u')
                ADVANCE(410);
            END_STATE();
        case 458:
            if(lookahead == 'u')
                ADVANCE(180);
            END_STATE();
        case 459:
            if(lookahead == 'u')
                ADVANCE(414);
            END_STATE();
        case 460:
            if(lookahead == 'u')
                ADVANCE(208);
            END_STATE();
        case 461:
            if(lookahead == 'u')
                ADVANCE(144);
            END_STATE();
        case 462:
            if(lookahead == 'u')
                ADVANCE(287);
            END_STATE();
        case 463:
            if(lookahead == 'u')
                ADVANCE(285);
            END_STATE();
        case 464:
            if(lookahead == 'u')
                ADVANCE(156);
            END_STATE();
        case 465:
            if(lookahead == 'u')
                ADVANCE(443);
            END_STATE();
        case 466:
            if(lookahead == 'u')
                ADVANCE(223);
            END_STATE();
        case 467:
            if(lookahead == 'u')
                ADVANCE(145);
            END_STATE();
        case 468:
            if(lookahead == 'v')
                ADVANCE(259);
            END_STATE();
        case 469:
            if(lookahead == 'v')
                ADVANCE(127);
            END_STATE();
        case 470:
            if(lookahead == 'v')
                ADVANCE(183);
            END_STATE();
        case 471:
            if(lookahead == 'w')
                ADVANCE(109);
            END_STATE();
        case 472:
            if(lookahead == 'x')
                ADVANCE(723);
            END_STATE();
        case 473:
            if(lookahead == 'x')
                ADVANCE(202);
            END_STATE();
        case 474:
            if(lookahead == 'x')
                ADVANCE(421);
            END_STATE();
        case 475:
            if(lookahead == 'y')
                ADVANCE(549);
            END_STATE();
        case 476:
            if(lookahead == 'y')
                ADVANCE(728);
            END_STATE();
        case 477:
            if(lookahead == 'y')
                ADVANCE(709);
            END_STATE();
        case 478:
            if(lookahead == 'y')
                ADVANCE(667);
            END_STATE();
        case 479:
            if(lookahead == 'y')
                ADVANCE(361);
            END_STATE();
        case 480:
            if(lookahead == 'y')
                ADVANCE(362);
            END_STATE();
        case 481:
            if(lookahead == 'y')
                ADVANCE(363);
            END_STATE();
        case 482:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(482);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(641);
            END_STATE();
        case 483:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(617);
            END_STATE();
        case 484:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(605);
            END_STATE();
        case 485:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(611);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(625);
            END_STATE();
        case 486:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(619);
            END_STATE();
        case 487:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(625);
            END_STATE();
        case 488:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(607);
            END_STATE();
        case 489:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(646);
            END_STATE();
        case 490:
            if(eof)
                ADVANCE(498);
            if(lookahead == '\n')
                SKIP(0);
            END_STATE();
        case 491:
            if(eof)
                ADVANCE(498);
            if(lookahead == '\n')
                SKIP(0);
            if(lookahead == '\r')
                SKIP(490);
            END_STATE();
        case 492:
            if(eof)
                ADVANCE(498);
            if(lookahead == '\n')
                SKIP(496);
            END_STATE();
        case 493:
            if(eof)
                ADVANCE(498);
            if(lookahead == '\n')
                SKIP(496);
            if(lookahead == '\r')
                SKIP(492);
            END_STATE();
        case 494:
            if(eof)
                ADVANCE(498);
            if(lookahead == '\n')
                SKIP(497);
            END_STATE();
        case 495:
            if(eof)
                ADVANCE(498);
            if(lookahead == '\n')
                SKIP(497);
            if(lookahead == '\r')
                SKIP(494);
            END_STATE();
        case 496:
            if(eof)
                ADVANCE(498);
            ADVANCE_MAP(
                '"', 573,
                '#', 161,
                '$', 558,
                '%', 567,
                ')', 569,
                '*', 565,
                '+', 561,
                ',', 551,
                '-', 563,
                '/', 566,
                ':', 658,
                ';', 659,
                '<', 97,
                '=', 683,
                '>', 548,
                '@', 682,
                'L', 571,
                '[', 713,
            );
            if(lookahead == '\\')
                SKIP(493);
            if(lookahead == ']')
                ADVANCE(714);
            if(lookahead == '^')
                ADVANCE(557);
            if(lookahead == 'a')
                ADVANCE(141);
            if(lookahead == 'b')
                ADVANCE(248);
            if(lookahead == 'c')
                ADVANCE(107);
            if(lookahead == 'd')
                ADVANCE(175);
            if(lookahead == 'e')
                ADVANCE(313);
            if(lookahead == 'g')
                ADVANCE(216);
            if(lookahead == 'h')
                ADVANCE(336);
            if(lookahead == 'i')
                ADVANCE(296);
            if(lookahead == 'l')
                ADVANCE(358);
            if(lookahead == 'm')
                ADVANCE(124);
            if(lookahead == 'n')
                ADVANCE(112);
            if(lookahead == 'o')
                ADVANCE(149);
            if(lookahead == 'p')
                ADVANCE(376);
            if(lookahead == 'r')
                ADVANCE(108);
            if(lookahead == 's')
                ADVANCE(225);
            if(lookahead == 't')
                ADVANCE(481);
            if(lookahead == 'u')
                ADVANCE(247);
            if(lookahead == 'v')
                ADVANCE(134);
            if(lookahead == '{')
                ADVANCE(650);
            if(lookahead == '|')
                ADVANCE(556);
            if(lookahead == '}')
                ADVANCE(651);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(496);
            END_STATE();
        case 497:
            if(eof)
                ADVANCE(498);
            ADVANCE_MAP(
                '#', 172,
                '$', 558,
                '%', 567,
                ')', 569,
                '*', 565,
                '+', 561,
                ',', 551,
                '-', 563,
                '/', 566,
                ':', 657,
                ';', 659,
                '<', 97,
                '>', 548,
                '@', 682,
            );
            if(lookahead == '\\')
                SKIP(495);
            if(lookahead == ']')
                ADVANCE(714);
            if(lookahead == '^')
                ADVANCE(557);
            if(lookahead == 'a')
                ADVANCE(140);
            if(lookahead == 'b')
                ADVANCE(264);
            if(lookahead == 'c')
                ADVANCE(339);
            if(lookahead == 'e')
                ADVANCE(313);
            if(lookahead == 'h')
                ADVANCE(336);
            if(lookahead == 'i')
                ADVANCE(297);
            if(lookahead == 'l')
                ADVANCE(353);
            if(lookahead == 'm')
                ADVANCE(124);
            if(lookahead == 'n')
                ADVANCE(112);
            if(lookahead == 's')
                ADVANCE(437);
            if(lookahead == 't')
                ADVANCE(481);
            if(lookahead == 'u')
                ADVANCE(331);
            if(lookahead == 'v')
                ADVANCE(133);
            if(lookahead == '{')
                ADVANCE(650);
            if(lookahead == '|')
                ADVANCE(556);
            if(lookahead == '}')
                ADVANCE(651);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(497);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(168);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(168);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(292);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(292);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(294);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(560);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(559);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(484);
            if(lookahead == '0')
                ADVANCE(613);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(617);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(484);
            if(lookahead == '0')
                ADVANCE(613);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(617);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '*')
                ADVANCE(1022);
            if(lookahead == '/')
                ADVANCE(1011);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(574);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(101);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(103);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(279);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(322);
            if(lookahead == 'o')
                ADVANCE(167);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(400);
            if(lookahead == 'h')
                ADVANCE(113);
            if(lookahead == 'o')
                ADVANCE(303);
            if(lookahead == 'u')
                ADVANCE(401);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(266);
            if(lookahead == 'e')
                ADVANCE(110);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(154);
            if(lookahead == 'i')
                ADVANCE(473);
            if(lookahead == 'l')
                ADVANCE(341);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(433);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(290);
            if(lookahead == 'o')
                ADVANCE(252);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'b')
                ADVANCE(274);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'b')
                ADVANCE(408);
            if(lookahead == 'l')
                ADVANCE(250);
            if(lookahead == 'n')
                ADVANCE(475);
            if(lookahead == 't')
                ADVANCE(428);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(244);
            if(lookahead == 's')
                ADVANCE(446);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(436);
            if(lookahead == 'n')
                ADVANCE(176);
            if(lookahead == 'u')
                ADVANCE(410);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(227);
            if(lookahead == 'o')
                ADVANCE(461);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(369);
            if(lookahead == 'h')
                ADVANCE(342);
            if(lookahead == 't')
                ADVANCE(370);
            if(lookahead == 'u')
                ADVANCE(368);
            if(lookahead == 'w')
                ADVANCE(260);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(432);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(325);
            if(lookahead == 'n')
                ADVANCE(256);
            if(lookahead == 's')
                ADVANCE(199);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(409);
            if(lookahead == 'o')
                ADVANCE(337);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'm')
                ADVANCE(366);
            if(lookahead == 'n')
                ADVANCE(663);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(454);
            if(lookahead == 'v')
                ADVANCE(217);
            if(lookahead == 'x')
                ADVANCE(153);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(300);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(151);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'r')
                ADVANCE(246);
            if(lookahead == 'u')
                ADVANCE(142);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'r')
                ADVANCE(455);
            if(lookahead == 'y')
                ADVANCE(360);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(484);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(605);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(634);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 488,
                'B', 606,
                'D', 606,
                'F', 606,
                'b', 606,
                'd', 606,
                'f', 606,
                'L', 633,
                'U', 633,
                'W', 633,
                'l', 633,
                'u', 633,
                'w', 633,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(606);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 488,
                'B', 607,
                'D', 607,
                'F', 607,
                'b', 607,
                'd', 607,
                'f', 607,
                'L', 634,
                'U', 634,
                'W', 634,
                'l', 634,
                'u', 634,
                'w', 634,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(607);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 485,
                '.', 630,
                'B', 622,
                'b', 622,
                'E', 620,
                'e', 620,
                'P', 628,
                'p', 628,
                'X', 1009,
                'x', 1009,
                'A', 623,
                'C', 623,
                'a', 623,
                'c', 623,
                'D', 623,
                'F', 623,
                'd', 623,
                'f', 623,
                'L', 633,
                'U', 633,
                'W', 633,
                'l', 633,
                'u', 633,
                'w', 633,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(610);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 485,
                '.', 630,
                'B', 624,
                'b', 624,
                'E', 621,
                'e', 621,
                'P', 629,
                'p', 629,
                'X', 487,
                'x', 487,
                'A', 625,
                'C', 625,
                'a', 625,
                'c', 625,
                'D', 625,
                'F', 625,
                'd', 625,
                'f', 625,
                'L', 634,
                'U', 634,
                'W', 634,
                'l', 634,
                'u', 634,
                'w', 634,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(611);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 485,
                '.', 630,
                'E', 620,
                'e', 620,
                'P', 628,
                'p', 628,
                'A', 623,
                'C', 623,
                'a', 623,
                'c', 623,
                'B', 623,
                'D', 623,
                'F', 623,
                'b', 623,
                'd', 623,
                'f', 623,
                'L', 633,
                'U', 633,
                'W', 633,
                'l', 633,
                'u', 633,
                'w', 633,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(610);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 485,
                '.', 630,
                'E', 621,
                'e', 621,
                'P', 629,
                'p', 629,
                'A', 625,
                'C', 625,
                'a', 625,
                'c', 625,
                'B', 625,
                'D', 625,
                'F', 625,
                'b', 625,
                'd', 625,
                'f', 625,
                'L', 634,
                'U', 634,
                'W', 634,
                'l', 634,
                'u', 634,
                'w', 634,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(611);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 483,
                '.', 630,
                'B', 626,
                'b', 626,
                'X', 747,
                'x', 747,
                'E', 628,
                'P', 628,
                'e', 628,
                'p', 628,
                'D', 633,
                'F', 633,
                'L', 633,
                'U', 633,
                'W', 633,
                'd', 633,
                'f', 633,
                'l', 633,
                'u', 633,
                'w', 633,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(616);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 483,
                '.', 630,
                'B', 627,
                'b', 627,
                'X', 72,
                'x', 72,
                'E', 629,
                'P', 629,
                'e', 629,
                'p', 629,
                'D', 634,
                'F', 634,
                'L', 634,
                'U', 634,
                'W', 634,
                'd', 634,
                'f', 634,
                'l', 634,
                'u', 634,
                'w', 634,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(617);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 483,
                '.', 630,
                'B', 631,
                'b', 631,
                'X', 1009,
                'x', 1009,
                'E', 628,
                'P', 628,
                'e', 628,
                'p', 628,
                'D', 633,
                'F', 633,
                'L', 633,
                'U', 633,
                'W', 633,
                'd', 633,
                'f', 633,
                'l', 633,
                'u', 633,
                'w', 633,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(616);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 483,
                '.', 630,
                'B', 632,
                'b', 632,
                'X', 487,
                'x', 487,
                'E', 629,
                'P', 629,
                'e', 629,
                'p', 629,
                'D', 634,
                'F', 634,
                'L', 634,
                'U', 634,
                'W', 634,
                'd', 634,
                'f', 634,
                'l', 634,
                'u', 634,
                'w', 634,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(617);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(483);
            if(lookahead == '.')
                ADVANCE(630);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(628);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(616);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(633);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(483);
            if(lookahead == '.')
                ADVANCE(630);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(617);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(634);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 486,
                '+', 488,
                '-', 488,
                'E', 618,
                'e', 618,
                'P', 629,
                'p', 629,
                'B', 619,
                'D', 619,
                'F', 619,
                'b', 619,
                'd', 619,
                'f', 619,
                'L', 634,
                'U', 634,
                'W', 634,
                'l', 634,
                'u', 634,
                'w', 634,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(619);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 486,
                'E', 618,
                'e', 618,
                'P', 629,
                'p', 629,
                'B', 619,
                'D', 619,
                'F', 619,
                'b', 619,
                'd', 619,
                'f', 619,
                'L', 634,
                'U', 634,
                'W', 634,
                'l', 634,
                'u', 634,
                'w', 634,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(619);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 487,
                '.', 630,
                '+', 488,
                '-', 488,
                'E', 620,
                'e', 620,
                'P', 628,
                'p', 628,
                'B', 623,
                'D', 623,
                'F', 623,
                'b', 623,
                'd', 623,
                'f', 623,
                'L', 633,
                'U', 633,
                'W', 633,
                'l', 633,
                'u', 633,
                'w', 633,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(623);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 487,
                '.', 630,
                '+', 488,
                '-', 488,
                'E', 621,
                'e', 621,
                'P', 629,
                'p', 629,
                'B', 625,
                'D', 625,
                'F', 625,
                'b', 625,
                'd', 625,
                'f', 625,
                'L', 634,
                'U', 634,
                'W', 634,
                'l', 634,
                'u', 634,
                'w', 634,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(625);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 487,
                '.', 630,
                'E', 620,
                'e', 620,
                'P', 628,
                'p', 628,
                'A', 623,
                'C', 623,
                'a', 623,
                'c', 623,
                'B', 623,
                'D', 623,
                'F', 623,
                'b', 623,
                'd', 623,
                'f', 623,
                'L', 633,
                'U', 633,
                'W', 633,
                'l', 633,
                'u', 633,
                'w', 633,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(610);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 487,
                '.', 630,
                'E', 620,
                'e', 620,
                'P', 628,
                'p', 628,
                'B', 623,
                'D', 623,
                'F', 623,
                'b', 623,
                'd', 623,
                'f', 623,
                'L', 633,
                'U', 633,
                'W', 633,
                'l', 633,
                'u', 633,
                'w', 633,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(623);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 487,
                '.', 630,
                'E', 621,
                'e', 621,
                'P', 629,
                'p', 629,
                'A', 625,
                'C', 625,
                'a', 625,
                'c', 625,
                'B', 625,
                'D', 625,
                'F', 625,
                'b', 625,
                'd', 625,
                'f', 625,
                'L', 634,
                'U', 634,
                'W', 634,
                'l', 634,
                'u', 634,
                'w', 634,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(611);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 487,
                '.', 630,
                'E', 621,
                'e', 621,
                'P', 629,
                'p', 629,
                'B', 625,
                'D', 625,
                'F', 625,
                'b', 625,
                'd', 625,
                'f', 625,
                'L', 634,
                'U', 634,
                'W', 634,
                'l', 634,
                'u', 634,
                'w', 634,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(625);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(484);
            if(lookahead == '0')
                ADVANCE(614);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(616);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(633);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(484);
            if(lookahead == '0')
                ADVANCE(615);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(617);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(634);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 488,
                '-', 488,
                'B', 606,
                'D', 606,
                'F', 606,
                'b', 606,
                'd', 606,
                'f', 606,
                'L', 633,
                'U', 633,
                'W', 633,
                'l', 633,
                'u', 633,
                'w', 633,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(606);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 488,
                '-', 488,
                'B', 607,
                'D', 607,
                'F', 607,
                'b', 607,
                'd', 607,
                'f', 607,
                'L', 634,
                'U', 634,
                'W', 634,
                'l', 634,
                'u', 634,
                'w', 634,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(607);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'E', 618,
                'e', 618,
                'P', 629,
                'p', 629,
                'B', 619,
                'D', 619,
                'F', 619,
                'b', 619,
                'd', 619,
                'f', 619,
                'L', 634,
                'U', 634,
                'W', 634,
                'l', 634,
                'u', 634,
                'w', 634,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(619);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(616);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(633);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(617);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(634);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 633,
                'D', 633,
                'F', 633,
                'L', 633,
                'U', 633,
                'W', 633,
                'b', 633,
                'd', 633,
                'f', 633,
                'l', 633,
                'u', 633,
                'w', 633,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 634,
                'D', 634,
                'F', 634,
                'L', 634,
                'U', 634,
                'W', 634,
                'b', 634,
                'd', 634,
                'f', 634,
                'l', 634,
                'u', 634,
                'w', 634,
            );
            END_STATE();
        case 635:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(638);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(641);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(641);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(639);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(641);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(640);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(641);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(637);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(641);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(641);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(87);
            if(lookahead == '\r')
                ADVANCE(643);
            if(lookahead == '/')
                ADVANCE(489);
            if(lookahead == '\\')
                ADVANCE(644);
            if(lookahead != 0)
                ADVANCE(646);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(87);
            if(lookahead == '/')
                ADVANCE(489);
            if(lookahead == '\\')
                ADVANCE(644);
            if(lookahead != 0)
                ADVANCE(646);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\r')
                ADVANCE(647);
            if(lookahead == '/')
                ADVANCE(489);
            if(lookahead == '\\')
                ADVANCE(644);
            if(lookahead != 0)
                ADVANCE(646);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '*')
                ADVANCE(1022);
            if(lookahead == '/')
                ADVANCE(1011);
            if(lookahead == '\\')
                ADVANCE(644);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(646);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(489);
            if(lookahead == '\\')
                ADVANCE(644);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(646);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(489);
            if(lookahead == '\\')
                ADVANCE(644);
            if(lookahead != 0)
                ADVANCE(646);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(anon_sym_exception);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(anon_sym_abstract);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(anon_sym_abstract);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(anon_sym_interface);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(anon_sym_COLON);
            if(lookahead == ':')
                ADVANCE(540);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(anon_sym_in);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(459);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(anon_sym_bitset);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(anon_sym_bitmask);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == 'a')
                ADVANCE(314);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(anon_sym_typename);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(anon_sym_typename);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(anon_sym_valuetype);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(anon_sym_valuetype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(anon_sym_eventtype);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(anon_sym_eventtype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(anon_sym_const);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(anon_sym_alias);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(anon_sym_custom);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(anon_sym_custom);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(anon_sym_truncatable);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(anon_sym_truncatable);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(anon_sym_supports);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(anon_sym_public);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(anon_sym_public);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(anon_sym_private);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(anon_sym_private);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(anon_sym_factory);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(anon_sym_factory);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(anon_sym_case);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(anon_sym_typeid);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(anon_sym_typeid);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(anon_sym_typeprefix);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(anon_sym_import);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(anon_sym_import);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_object_type);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_object_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(anon_sym_oneway);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(anon_sym_oneway);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(anon_sym_context);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_value_base_type);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_value_base_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(anon_sym_component);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(anon_sym_provides);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(anon_sym_uses);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(anon_sym_home);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(anon_sym_manages);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(anon_sym_native);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(641);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(745);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(745);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '*')
                ADVANCE(1025);
            if(lookahead == '/')
                ADVANCE(1014);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(745);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(743);
            if(lookahead == '\\')
                ADVANCE(742);
            if(lookahead == '\t' ||
               (0x0b <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(744);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead))
                ADVANCE(745);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(745);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(293);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(484);
            if(lookahead == '0')
                ADVANCE(608);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(610);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(623);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(755);
            if(lookahead == '3')
                ADVANCE(751);
            if(lookahead == '6')
                ADVANCE(753);
            if(lookahead == '8')
                ADVANCE(521);
            if(lookahead == 'e')
                ADVANCE(949);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(755);
            if(lookahead == '3')
                ADVANCE(751);
            if(lookahead == '6')
                ADVANCE(753);
            if(lookahead == '8')
                ADVANCE(521);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(756);
            if(lookahead == '3')
                ADVANCE(752);
            if(lookahead == '6')
                ADVANCE(754);
            if(lookahead == '8')
                ADVANCE(513);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(527);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(530);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(502);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(524);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'B')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(604);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(760);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(879);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(813);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(950);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(800);
            if(lookahead == 'i')
                ADVANCE(999);
            if(lookahead == 'l')
                ADVANCE(925);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(927);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(1001);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(954);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(938);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(892);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(981);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(987);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(939);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(960);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(895);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(979);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(955);
            if(lookahead == 'h')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(978);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(805);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(792);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(804);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(887);
            if(lookahead == 'o')
                ADVANCE(866);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(887);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(877);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(956);
            if(lookahead == 'n')
                ADVANCE(1000);
            if(lookahead == 't')
                ADVANCE(970);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(882);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(883);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(993);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(885);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(860);
            if(lookahead == 's')
                ADVANCE(982);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(860);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(855);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(835);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(974);
            if(lookahead == 'n')
                ADVANCE(817);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(974);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(976);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(963);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(824);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(966);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(967);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(831);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(779);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(661);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(517);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(722);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(746);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(822);
            if(lookahead == 'i')
                ADVANCE(809);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(822);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(921);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(935);
            if(lookahead == 'h')
                ADVANCE(919);
            if(lookahead == 't')
                ADVANCE(937);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(935);
            if(lookahead == 'h')
                ADVANCE(919);
            if(lookahead == 't')
                ADVANCE(942);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(935);
            if(lookahead == 'h')
                ADVANCE(919);
            if(lookahead == 't')
                ADVANCE(945);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(997);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(811);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(534);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(847);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 823:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 824:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(553);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 825:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(732);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 826:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(670);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 827:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 828:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(720);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 829:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 830:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 831:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(656);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 832:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(703);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 833:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(848);
            if(lookahead == 'o')
                ADVANCE(991);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 834:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(808);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 835:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(929);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 836:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(766);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 837:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(810);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 838:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(812);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 839:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(911);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 840:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(778);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 841:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(961);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 842:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(964);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 843:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(907);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 844:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(983);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 845:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(801);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 846:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(910);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 847:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 848:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(775);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 849:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(782);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 850:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(504);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 851:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(542);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 852:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(544);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 853:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(506);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 854:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(908);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 855:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(718);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 856:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(772);
            if(lookahead == 'o')
                ADVANCE(913);
            if(lookahead == 'u')
                ADVANCE(952);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 857:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(772);
            if(lookahead == 'o')
                ADVANCE(913);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 858:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 859:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(919);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 860:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(776);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 861:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(999);
            if(lookahead == 'l')
                ADVANCE(925);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 862:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(996);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 863:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(957);
            if(lookahead == 'o')
                ADVANCE(915);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 864:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(854);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 865:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(995);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 866:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(807);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 867:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(791);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 868:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(906);
            if(lookahead == 'n')
                ADVANCE(875);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 869:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(906);
            if(lookahead == 'n')
                ADVANCE(951);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 870:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(795);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 871:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(902);
            if(lookahead == 'u')
                ADVANCE(803);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 872:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(902);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 873:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(903);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 874:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(975);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 875:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(920);
            if(lookahead == 's')
                ADVANCE(864);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 876:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(923);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 877:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'j')
                ADVANCE(845);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 878:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(677);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 879:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(988);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 880:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(925);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 881:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(1003);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 882:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(870);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 883:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(820);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 884:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(968);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 885:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(832);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 886:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(840);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 887:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(994);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 888:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(934);
            if(lookahead == 'n')
                ADVANCE(958);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 889:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(696);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 890:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 891:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(767);
            if(lookahead == 's')
                ADVANCE(842);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 892:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(829);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 893:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(850);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 894:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 895:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(515);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 896:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(649);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 897:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(1000);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 898:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(986);
            if(lookahead == 'v')
                ADVANCE(846);
            if(lookahead == 'x')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 899:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(986);
            if(lookahead == 'x')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 900:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(986);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 901:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(958);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 902:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(851);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 903:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(852);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 904:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(881);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 905:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(806);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 906:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(971);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 907:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(773);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 908:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(837);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 909:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(969);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 910:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(985);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 911:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(802);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 912:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(853);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 913:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(953);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 914:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(991);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 915:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(886);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 916:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(893);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 917:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(890);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 918:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(915);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 919:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(947);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 920:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(894);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 921:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(904);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 922:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(940);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 923:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(896);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 924:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(912);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 925:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(777);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 926:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(948);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 927:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(555);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 928:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(818);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 929:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(977);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 930:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(827);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 931:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(838);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 932:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(843);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 933:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(830);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 934:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(926);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 935:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(989);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 936:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(862);
            if(lookahead == 'u')
                ADVANCE(789);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 937:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(871);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 938:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(537);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 939:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(539);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 940:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(1002);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 941:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(867);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 942:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(992);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 943:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(873);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 944:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(990);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 945:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(872);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 946:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(784);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 947:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(962);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 948:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(965);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 949:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(849);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 950:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(878);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 951:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(864);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 952:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(973);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 953:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(959);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 954:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(825);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 955:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(828);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 956:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(972);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 957:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(891);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 958:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 959:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 960:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(532);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 961:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(519);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 962:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(500);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 963:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(727);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 964:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(674);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 965:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 966:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(692);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 967:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 968:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(680);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 969:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 970:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(941);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 971:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 972:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(946);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 973:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(917);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 974:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(841);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 975:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(796);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 976:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(922);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 977:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(876);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 978:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(823);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 979:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(783);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 980:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(826);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 981:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(865);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 982:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(943);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 983:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(1005);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 984:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(1008);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 985:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(984);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 986:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(889);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 987:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(884);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 988:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(819);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 989:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(839);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 990:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(905);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 991:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 992:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(803);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 993:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(980);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 994:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(844);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 995:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(821);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 996:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(781);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 997:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(770);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 998:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(874);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 999:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(834);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 1000:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(550);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 1001:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(729);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 1002:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(710);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 1003:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(668);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 1004:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(928);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 1005:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(930);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 1006:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(931);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 1007:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(932);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 1008:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(933);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 1009:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(623);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 1010:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(1010);
            END_STATE();
        case 1011:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 1012:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '*')
                ADVANCE(1026);
            if(lookahead != 0)
                ADVANCE(69);
            END_STATE();
        case 1013:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(57);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1020);
            END_STATE();
        case 1014:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(745);
            END_STATE();
        case 1015:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(1015);
            if(lookahead == '\r')
                ADVANCE(37);
            if(lookahead == '@')
                ADVANCE(681);
            END_STATE();
        case 1016:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(1019);
            if(lookahead == '\\')
                ADVANCE(57);
            if(lookahead != 0)
                ADVANCE(1020);
            END_STATE();
        case 1017:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\r')
                ADVANCE(1021);
            if(lookahead == '\\')
                ADVANCE(1017);
            if(lookahead != 0)
                ADVANCE(1020);
            END_STATE();
        case 1018:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '*')
                ADVANCE(1024);
            if(lookahead == '/')
                ADVANCE(1013);
            if(lookahead == '\\')
                ADVANCE(57);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1020);
            END_STATE();
        case 1019:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '/')
                ADVANCE(1018);
            if(lookahead == '@')
                ADVANCE(681);
            if(lookahead == '\\')
                ADVANCE(40);
            if(lookahead == '\t' ||
               (0x0b <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(1019);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead))
                ADVANCE(1020);
            END_STATE();
        case 1020:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\\')
                ADVANCE(57);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1020);
            END_STATE();
        case 1021:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\\')
                ADVANCE(57);
            if(lookahead != 0)
                ADVANCE(1020);
            END_STATE();
        case 1022:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            END_STATE();
        case 1023:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead == '*')
                ADVANCE(1026);
            if(lookahead != 0 &&
               lookahead != '/')
                ADVANCE(69);
            END_STATE();
        case 1024:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead == '\\')
                ADVANCE(57);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1020);
            END_STATE();
        case 1025:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(745);
            END_STATE();
        case 1026:
            ACCEPT_TOKEN(aux_sym_comment_token3);
            if(lookahead == '*')
                ADVANCE(1026);
            if(lookahead != 0 &&
               lookahead != '/')
                ADVANCE(69);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 496 },
    [2] = { .lex_state = 71 },
    [3] = { .lex_state = 71 },
    [4] = { .lex_state = 71 },
    [5] = { .lex_state = 73 },
    [6] = { .lex_state = 73 },
    [7] = { .lex_state = 73 },
    [8] = { .lex_state = 74 },
    [9] = { .lex_state = 74 },
    [10] = { .lex_state = 74 },
    [11] = { .lex_state = 74 },
    [12] = { .lex_state = 74 },
    [13] = { .lex_state = 74 },
    [14] = { .lex_state = 74 },
    [15] = { .lex_state = 74 },
    [16] = { .lex_state = 60 },
    [17] = { .lex_state = 60 },
    [18] = { .lex_state = 75 },
    [19] = { .lex_state = 497 },
    [20] = { .lex_state = 496 },
    [21] = { .lex_state = 76 },
    [22] = { .lex_state = 497 },
    [23] = { .lex_state = 497 },
    [24] = { .lex_state = 497 },
    [25] = { .lex_state = 497 },
    [26] = { .lex_state = 497 },
    [27] = { .lex_state = 497 },
    [28] = { .lex_state = 497 },
    [29] = { .lex_state = 65 },
    [30] = { .lex_state = 65 },
    [31] = { .lex_state = 65 },
    [32] = { .lex_state = 65 },
    [33] = { .lex_state = 77 },
    [34] = { .lex_state = 77 },
    [35] = { .lex_state = 77 },
    [36] = { .lex_state = 65 },
    [37] = { .lex_state = 65 },
    [38] = { .lex_state = 65 },
    [39] = { .lex_state = 65 },
    [40] = { .lex_state = 65 },
    [41] = { .lex_state = 65 },
    [42] = { .lex_state = 65 },
    [43] = { .lex_state = 65 },
    [44] = { .lex_state = 71 },
    [45] = { .lex_state = 78 },
    [46] = { .lex_state = 71 },
    [47] = { .lex_state = 71 },
    [48] = { .lex_state = 71 },
    [49] = { .lex_state = 71 },
    [50] = { .lex_state = 71 },
    [51] = { .lex_state = 71 },
    [52] = { .lex_state = 65 },
    [53] = { .lex_state = 78 },
    [54] = { .lex_state = 73 },
    [55] = { .lex_state = 73 },
    [56] = { .lex_state = 73 },
    [57] = { .lex_state = 73 },
    [58] = { .lex_state = 65 },
    [59] = { .lex_state = 65 },
    [60] = { .lex_state = 65 },
    [61] = { .lex_state = 65 },
    [62] = { .lex_state = 65 },
    [63] = { .lex_state = 74 },
    [64] = { .lex_state = 65 },
    [65] = { .lex_state = 65 },
    [66] = { .lex_state = 74 },
    [67] = { .lex_state = 65 },
    [68] = { .lex_state = 65 },
    [69] = { .lex_state = 79 },
    [70] = { .lex_state = 79 },
    [71] = { .lex_state = 75 },
    [72] = { .lex_state = 75 },
    [73] = { .lex_state = 65 },
    [74] = { .lex_state = 77 },
    [75] = { .lex_state = 65 },
    [76] = { .lex_state = 65 },
    [77] = { .lex_state = 65 },
    [78] = { .lex_state = 65 },
    [79] = { .lex_state = 65 },
    [80] = { .lex_state = 77 },
    [81] = { .lex_state = 65 },
    [82] = { .lex_state = 65 },
    [83] = { .lex_state = 77 },
    [84] = { .lex_state = 77 },
    [85] = { .lex_state = 65 },
    [86] = { .lex_state = 65 },
    [87] = { .lex_state = 77 },
    [88] = { .lex_state = 65 },
    [89] = { .lex_state = 65 },
    [90] = { .lex_state = 80 },
    [91] = { .lex_state = 65 },
    [92] = { .lex_state = 59 },
    [93] = { .lex_state = 59 },
    [94] = { .lex_state = 59 },
    [95] = { .lex_state = 61 },
    [96] = { .lex_state = 61 },
    [97] = { .lex_state = 61 },
    [98] = { .lex_state = 496 },
    [99] = { .lex_state = 61 },
    [100] = { .lex_state = 61 },
    [101] = { .lex_state = 61 },
    [102] = { .lex_state = 61 },
    [103] = { .lex_state = 497 },
    [104] = { .lex_state = 61 },
    [105] = { .lex_state = 61 },
    [106] = { .lex_state = 61 },
    [107] = { .lex_state = 61 },
    [108] = { .lex_state = 497 },
    [109] = { .lex_state = 497 },
    [110] = { .lex_state = 61 },
    [111] = { .lex_state = 497 },
    [112] = { .lex_state = 61 },
    [113] = { .lex_state = 497 },
    [114] = { .lex_state = 61 },
    [115] = { .lex_state = 61 },
    [116] = { .lex_state = 496 },
    [117] = { .lex_state = 61 },
    [118] = { .lex_state = 496 },
    [119] = { .lex_state = 497 },
    [120] = { .lex_state = 497 },
    [121] = { .lex_state = 61 },
    [122] = { .lex_state = 496 },
    [123] = { .lex_state = 61 },
    [124] = { .lex_state = 496 },
    [125] = { .lex_state = 61 },
    [126] = { .lex_state = 61 },
    [127] = { .lex_state = 61 },
    [128] = { .lex_state = 61 },
    [129] = { .lex_state = 61 },
    [130] = { .lex_state = 61 },
    [131] = { .lex_state = 496 },
    [132] = { .lex_state = 496 },
    [133] = { .lex_state = 497 },
    [134] = { .lex_state = 497 },
    [135] = { .lex_state = 497 },
    [136] = { .lex_state = 497 },
    [137] = { .lex_state = 497 },
    [138] = { .lex_state = 497 },
    [139] = { .lex_state = 497 },
    [140] = { .lex_state = 497 },
    [141] = { .lex_state = 497 },
    [142] = { .lex_state = 497 },
    [143] = { .lex_state = 497 },
    [144] = { .lex_state = 497 },
    [145] = { .lex_state = 497 },
    [146] = { .lex_state = 497 },
    [147] = { .lex_state = 61 },
    [148] = { .lex_state = 496 },
    [149] = { .lex_state = 496 },
    [150] = { .lex_state = 497 },
    [151] = { .lex_state = 497 },
    [152] = { .lex_state = 496 },
    [153] = { .lex_state = 496 },
    [154] = { .lex_state = 496 },
    [155] = { .lex_state = 497 },
    [156] = { .lex_state = 497 },
    [157] = { .lex_state = 59 },
    [158] = { .lex_state = 61 },
    [159] = { .lex_state = 63 },
    [160] = { .lex_state = 63 },
    [161] = { .lex_state = 59 },
    [162] = { .lex_state = 59 },
    [163] = { .lex_state = 496 },
    [164] = { .lex_state = 63 },
    [165] = { .lex_state = 63 },
    [166] = { .lex_state = 496 },
    [167] = { .lex_state = 63 },
    [168] = { .lex_state = 62 },
    [169] = { .lex_state = 63 },
    [170] = { .lex_state = 59 },
    [171] = { .lex_state = 496 },
    [172] = { .lex_state = 496 },
    [173] = { .lex_state = 59 },
    [174] = { .lex_state = 64 },
    [175] = { .lex_state = 82 },
    [176] = { .lex_state = 496 },
    [177] = { .lex_state = 64 },
    [178] = { .lex_state = 496 },
    [179] = { .lex_state = 64 },
    [180] = { .lex_state = 496 },
    [181] = { .lex_state = 496 },
    [182] = { .lex_state = 64 },
    [183] = { .lex_state = 64 },
    [184] = { .lex_state = 82 },
    [185] = { .lex_state = 496 },
    [186] = { .lex_state = 64 },
    [187] = { .lex_state = 59 },
    [188] = { .lex_state = 496 },
    [189] = { .lex_state = 496 },
    [190] = { .lex_state = 496 },
    [191] = { .lex_state = 64 },
    [192] = { .lex_state = 81 },
    [193] = { .lex_state = 496 },
    [194] = { .lex_state = 496 },
    [195] = { .lex_state = 82 },
    [196] = { .lex_state = 63 },
    [197] = { .lex_state = 497 },
    [198] = { .lex_state = 496 },
    [199] = { .lex_state = 64 },
    [200] = { .lex_state = 496 },
    [201] = { .lex_state = 64 },
    [202] = { .lex_state = 64 },
    [203] = { .lex_state = 64 },
    [204] = { .lex_state = 64 },
    [205] = { .lex_state = 64 },
    [206] = { .lex_state = 496 },
    [207] = { .lex_state = 64 },
    [208] = { .lex_state = 497 },
    [209] = { .lex_state = 0 },
    [210] = { .lex_state = 64 },
    [211] = { .lex_state = 496 },
    [212] = { .lex_state = 496 },
    [213] = { .lex_state = 64 },
    [214] = { .lex_state = 37 },
    [215] = { .lex_state = 496 },
    [216] = { .lex_state = 37 },
    [217] = { .lex_state = 497 },
    [218] = { .lex_state = 497 },
    [219] = { .lex_state = 66 },
    [220] = { .lex_state = 496 },
    [221] = { .lex_state = 82 },
    [222] = { .lex_state = 496 },
    [223] = { .lex_state = 64 },
    [224] = { .lex_state = 64 },
    [225] = { .lex_state = 496 },
    [226] = { .lex_state = 64 },
    [227] = { .lex_state = 66 },
    [228] = { .lex_state = 496 },
    [229] = { .lex_state = 64 },
    [230] = { .lex_state = 64 },
    [231] = { .lex_state = 496 },
    [232] = { .lex_state = 496 },
    [233] = { .lex_state = 64 },
    [234] = { .lex_state = 64 },
    [235] = { .lex_state = 64 },
    [236] = { .lex_state = 0 },
    [237] = { .lex_state = 37 },
    [238] = { .lex_state = 64 },
    [239] = { .lex_state = 496 },
    [240] = { .lex_state = 37 },
    [241] = { .lex_state = 37 },
    [242] = { .lex_state = 37 },
    [243] = { .lex_state = 64 },
    [244] = { .lex_state = 64 },
    [245] = { .lex_state = 64 },
    [246] = { .lex_state = 82 },
    [247] = { .lex_state = 64 },
    [248] = { .lex_state = 64 },
    [249] = { .lex_state = 496 },
    [250] = { .lex_state = 64 },
    [251] = { .lex_state = 496 },
    [252] = { .lex_state = 1019 },
    [253] = { .lex_state = 496 },
    [254] = { .lex_state = 496 },
    [255] = { .lex_state = 66 },
    [256] = { .lex_state = 64 },
    [257] = { .lex_state = 64 },
    [258] = { .lex_state = 64 },
    [259] = { .lex_state = 64 },
    [260] = { .lex_state = 64 },
    [261] = { .lex_state = 64 },
    [262] = { .lex_state = 64 },
    [263] = { .lex_state = 64 },
    [264] = { .lex_state = 496 },
    [265] = { .lex_state = 64 },
    [266] = { .lex_state = 82 },
    [267] = { .lex_state = 0 },
    [268] = { .lex_state = 64 },
    [269] = { .lex_state = 0 },
    [270] = { .lex_state = 71 },
    [271] = { .lex_state = 0 },
    [272] = { .lex_state = 71 },
    [273] = { .lex_state = 71 },
    [274] = { .lex_state = 64 },
    [275] = { .lex_state = 64 },
    [276] = { .lex_state = 0 },
    [277] = { .lex_state = 71 },
    [278] = { .lex_state = 0 },
    [279] = { .lex_state = 496 },
    [280] = { .lex_state = 0 },
    [281] = { .lex_state = 71 },
    [282] = { .lex_state = 0 },
    [283] = { .lex_state = 0 },
    [284] = { .lex_state = 0 },
    [285] = { .lex_state = 83 },
    [286] = { .lex_state = 0 },
    [287] = { .lex_state = 64 },
    [288] = { .lex_state = 0 },
    [289] = { .lex_state = 0 },
    [290] = { .lex_state = 64 },
    [291] = { .lex_state = 0 },
    [292] = { .lex_state = 0 },
    [293] = { .lex_state = 71 },
    [294] = { .lex_state = 64 },
    [295] = { .lex_state = 0 },
    [296] = { .lex_state = 64 },
    [297] = { .lex_state = 0 },
    [298] = { .lex_state = 64 },
    [299] = { .lex_state = 0 },
    [300] = { .lex_state = 0 },
    [301] = { .lex_state = 0 },
    [302] = { .lex_state = 64 },
    [303] = { .lex_state = 0 },
    [304] = { .lex_state = 64 },
    [305] = { .lex_state = 0 },
    [306] = { .lex_state = 64 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 496 },
    [309] = { .lex_state = 71 },
    [310] = { .lex_state = 0 },
    [311] = { .lex_state = 0 },
    [312] = { .lex_state = 64 },
    [313] = { .lex_state = 496 },
    [314] = { .lex_state = 496 },
    [315] = { .lex_state = 496 },
    [316] = { .lex_state = 0 },
    [317] = { .lex_state = 0 },
    [318] = { .lex_state = 0 },
    [319] = { .lex_state = 0 },
    [320] = { .lex_state = 0 },
    [321] = { .lex_state = 496 },
    [322] = { .lex_state = 0 },
    [323] = { .lex_state = 64 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 496 },
    [326] = { .lex_state = 0 },
    [327] = { .lex_state = 496 },
    [328] = { .lex_state = 64 },
    [329] = { .lex_state = 71 },
    [330] = { .lex_state = 0 },
    [331] = { .lex_state = 71 },
    [332] = { .lex_state = 64 },
    [333] = { .lex_state = 497 },
    [334] = { .lex_state = 496 },
    [335] = { .lex_state = 497 },
    [336] = { .lex_state = 496 },
    [337] = { .lex_state = 64 },
    [338] = { .lex_state = 0 },
    [339] = { .lex_state = 64 },
    [340] = { .lex_state = 64 },
    [341] = { .lex_state = 64 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 0 },
    [346] = { .lex_state = 0 },
    [347] = { .lex_state = 496 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 64 },
    [351] = { .lex_state = 64 },
    [352] = { .lex_state = 496 },
    [353] = { .lex_state = 0 },
    [354] = { .lex_state = 0 },
    [355] = { .lex_state = 64 },
    [356] = { .lex_state = 64 },
    [357] = { .lex_state = 64 },
    [358] = { .lex_state = 64 },
    [359] = { .lex_state = 0 },
    [360] = { .lex_state = 496 },
    [361] = { .lex_state = 64 },
    [362] = { .lex_state = 64 },
    [363] = { .lex_state = 0 },
    [364] = { .lex_state = 0 },
    [365] = { .lex_state = 496 },
    [366] = { .lex_state = 64 },
    [367] = { .lex_state = 64 },
    [368] = { .lex_state = 71 },
    [369] = { .lex_state = 0 },
    [370] = { .lex_state = 0 },
    [371] = { .lex_state = 64 },
    [372] = { .lex_state = 496 },
    [373] = { .lex_state = 71 },
    [374] = { .lex_state = 0 },
    [375] = { .lex_state = 64 },
    [376] = { .lex_state = 64 },
    [377] = { .lex_state = 496 },
    [378] = { .lex_state = 64 },
    [379] = { .lex_state = 64 },
    [380] = { .lex_state = 64 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 64 },
    [383] = { .lex_state = 64 },
    [384] = { .lex_state = 64 },
    [385] = { .lex_state = 0 },
    [386] = { .lex_state = 43 },
    [387] = { .lex_state = 0 },
    [388] = { .lex_state = 64 },
    [389] = { .lex_state = 496 },
    [390] = { .lex_state = 64 },
    [391] = { .lex_state = 0 },
    [392] = { .lex_state = 0 },
    [393] = { .lex_state = 64 },
    [394] = { .lex_state = 64 },
    [395] = { .lex_state = 0 },
    [396] = { .lex_state = 64 },
    [397] = { .lex_state = 37 },
    [398] = { .lex_state = 71 },
    [399] = { .lex_state = 37 },
    [400] = { .lex_state = 71 },
    [401] = { .lex_state = 496 },
    [402] = { .lex_state = 496 },
    [403] = { .lex_state = 64 },
    [404] = { .lex_state = 496 },
    [405] = { .lex_state = 497 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 0 },
    [408] = { .lex_state = 496 },
    [409] = { .lex_state = 496 },
    [410] = { .lex_state = 64 },
    [411] = { .lex_state = 71 },
    [412] = { .lex_state = 64 },
    [413] = { .lex_state = 64 },
    [414] = { .lex_state = 64 },
    [415] = { .lex_state = 496 },
    [416] = { .lex_state = 0 },
    [417] = { .lex_state = 64 },
    [418] = { .lex_state = 64 },
    [419] = { .lex_state = 64 },
    [420] = { .lex_state = 64 },
    [421] = { .lex_state = 64 },
    [422] = { .lex_state = 0 },
    [423] = { .lex_state = 0 },
    [424] = { .lex_state = 0 },
    [425] = { .lex_state = 0 },
    [426] = { .lex_state = 71 },
    [427] = { .lex_state = 496 },
    [428] = { .lex_state = 0 },
    [429] = { .lex_state = 64 },
    [430] = { .lex_state = 0 },
    [431] = { .lex_state = 0 },
    [432] = { .lex_state = 71 },
    [433] = { .lex_state = 64 },
    [434] = { .lex_state = 496 },
    [435] = { .lex_state = 0 },
    [436] = { .lex_state = 66 },
    [437] = { .lex_state = 496 },
    [438] = { .lex_state = 64 },
    [439] = { .lex_state = 0 },
    [440] = { .lex_state = 64 },
    [441] = { .lex_state = 0 },
    [442] = { .lex_state = 71 },
    [443] = { .lex_state = 64 },
    [444] = { .lex_state = 0 },
    [445] = { .lex_state = 496 },
    [446] = { .lex_state = 0 },
    [447] = { .lex_state = 66 },
    [448] = { .lex_state = 64 },
    [449] = { .lex_state = 64 },
    [450] = { .lex_state = 0 },
    [451] = { .lex_state = 66 },
    [452] = { .lex_state = 64 },
    [453] = { .lex_state = 71 },
    [454] = { .lex_state = 64 },
    [455] = { .lex_state = 496 },
    [456] = { .lex_state = 71 },
    [457] = { .lex_state = 496 },
    [458] = { .lex_state = 64 },
    [459] = { .lex_state = 82 },
    [460] = { .lex_state = 496 },
    [461] = { .lex_state = 0 },
    [462] = { .lex_state = 64 },
    [463] = { .lex_state = 0 },
    [464] = { .lex_state = 82 },
    [465] = { .lex_state = 0 },
    [466] = { .lex_state = 71 },
    [467] = { .lex_state = 64 },
    [468] = { .lex_state = 0 },
    [469] = { .lex_state = 0 },
    [470] = { .lex_state = 64 },
    [471] = { .lex_state = 64 },
    [472] = { .lex_state = 64 },
    [473] = { .lex_state = 0 },
    [474] = { .lex_state = 0 },
    [475] = { .lex_state = 0 },
    [476] = { .lex_state = 64 },
    [477] = { .lex_state = 64 },
    [478] = { .lex_state = 0 },
    [479] = { .lex_state = 497 },
    [480] = { .lex_state = 64 },
    [481] = { .lex_state = 64 },
    [482] = { .lex_state = 496 },
    [483] = { .lex_state = 0 },
    [484] = { .lex_state = 64 },
    [485] = { .lex_state = 64 },
    [486] = { .lex_state = 0 },
    [487] = { .lex_state = 64 },
    [488] = { .lex_state = 64 },
    [489] = { .lex_state = 0 },
    [490] = { .lex_state = 0 },
    [491] = { .lex_state = 64 },
    [492] = { .lex_state = 84 },
    [493] = { .lex_state = 0 },
    [494] = { .lex_state = 0 },
    [495] = { .lex_state = 0 },
    [496] = { .lex_state = 64 },
    [497] = { .lex_state = 0 },
    [498] = { .lex_state = 0 },
    [499] = { .lex_state = 64 },
    [500] = { .lex_state = 0 },
    [501] = { .lex_state = 71 },
    [502] = { .lex_state = 71 },
    [503] = { .lex_state = 64 },
    [504] = { .lex_state = 0 },
    [505] = { .lex_state = 0 },
    [506] = { .lex_state = 0 },
    [507] = { .lex_state = 0 },
    [508] = { .lex_state = 0 },
    [509] = { .lex_state = 0 },
    [510] = { .lex_state = 0 },
    [511] = { .lex_state = 0 },
    [512] = { .lex_state = 0 },
    [513] = { .lex_state = 0 },
    [514] = { .lex_state = 71 },
    [515] = { .lex_state = 0 },
    [516] = { .lex_state = 0 },
    [517] = { .lex_state = 0 },
    [518] = { .lex_state = 64 },
    [519] = { .lex_state = 0 },
    [520] = { .lex_state = 0 },
    [521] = { .lex_state = 0 },
    [522] = { .lex_state = 0 },
    [523] = { .lex_state = 0 },
    [524] = { .lex_state = 0 },
    [525] = { .lex_state = 0 },
    [526] = { .lex_state = 0 },
    [527] = { .lex_state = 64 },
    [528] = { .lex_state = 0 },
    [529] = { .lex_state = 0 },
    [530] = { .lex_state = 0 },
    [531] = { .lex_state = 0 },
    [532] = { .lex_state = 0 },
    [533] = { .lex_state = 64 },
    [534] = { .lex_state = 71 },
    [535] = { .lex_state = 0 },
    [536] = { .lex_state = 0 },
    [537] = { .lex_state = 0 },
    [538] = { .lex_state = 0 },
    [539] = { .lex_state = 0 },
    [540] = { .lex_state = 71 },
    [541] = { .lex_state = 496 },
    [542] = { .lex_state = 0 },
    [543] = { .lex_state = 496 },
    [544] = { .lex_state = 64 },
    [545] = { .lex_state = 0 },
    [546] = { .lex_state = 496 },
    [547] = { .lex_state = 0 },
    [548] = { .lex_state = 0 },
    [549] = { .lex_state = 0 },
    [550] = { .lex_state = 496 },
    [551] = { .lex_state = 71 },
    [552] = { .lex_state = 0 },
    [553] = { .lex_state = 0 },
    [554] = { .lex_state = 85 },
    [555] = { .lex_state = 0 },
    [556] = { .lex_state = 0 },
    [557] = { .lex_state = 0 },
    [558] = { .lex_state = 0 },
    [559] = { .lex_state = 0 },
    [560] = { .lex_state = 64 },
    [561] = { .lex_state = 0 },
    [562] = { .lex_state = 0 },
    [563] = { .lex_state = 0 },
    [564] = { .lex_state = 0 },
    [565] = { .lex_state = 0 },
    [566] = { .lex_state = 0 },
    [567] = { .lex_state = 0 },
    [568] = { .lex_state = 64 },
    [569] = { .lex_state = 68 },
    [570] = { .lex_state = 85 },
    [571] = { .lex_state = 71 },
    [572] = { .lex_state = 71 },
    [573] = { .lex_state = 0 },
    [574] = { .lex_state = 0 },
    [575] = { .lex_state = 64 },
    [576] = { .lex_state = 0 },
    [577] = { .lex_state = 64 },
    [578] = { .lex_state = 0 },
    [579] = { .lex_state = 497 },
    [580] = { .lex_state = 64 },
    [581] = { .lex_state = 64 },
    [582] = { .lex_state = 0 },
    [583] = { .lex_state = 0 },
    [584] = { .lex_state = 71 },
    [585] = { .lex_state = 0 },
    [586] = { .lex_state = 0 },
    [587] = { .lex_state = 0 },
    [588] = { .lex_state = 0 },
    [589] = { .lex_state = 64 },
    [590] = { .lex_state = 71 },
    [591] = { .lex_state = 0 },
    [592] = { .lex_state = 0 },
    [593] = { .lex_state = 0 },
    [594] = { .lex_state = 0 },
    [595] = { .lex_state = 64 },
    [596] = { .lex_state = 0 },
    [597] = { .lex_state = 64 },
    [598] = { .lex_state = 71 },
    [599] = { .lex_state = 71 },
    [600] = { .lex_state = 64 },
    [601] = { .lex_state = 0 },
    [602] = { .lex_state = 0 },
    [603] = { .lex_state = 0 },
    [604] = { .lex_state = 64 },
    [605] = { .lex_state = 0 },
    [606] = { .lex_state = 0 },
    [607] = { .lex_state = 0 },
    [608] = { .lex_state = 0 },
    [609] = { .lex_state = 0 },
    [610] = { .lex_state = 0 },
    [611] = { .lex_state = 0 },
    [612] = { .lex_state = 0 },
    [613] = { .lex_state = 71 },
    [614] = { .lex_state = 497 },
    [615] = { .lex_state = 64 },
    [616] = { .lex_state = 0 },
    [617] = { .lex_state = 0 },
    [618] = { .lex_state = 64 },
    [619] = { .lex_state = 0 },
    [620] = { .lex_state = 0 },
    [621] = { .lex_state = 64 },
    [622] = { .lex_state = 0 },
    [623] = { .lex_state = 0 },
    [624] = { .lex_state = 0 },
    [625] = { .lex_state = 0 },
    [626] = { .lex_state = 0 },
    [627] = { .lex_state = 84 },
    [628] = { .lex_state = 64 },
    [629] = { .lex_state = 64 },
    [630] = { .lex_state = 71 },
    [631] = { .lex_state = 0 },
    [632] = { .lex_state = 0 },
    [633] = { .lex_state = 44 },
    [634] = { .lex_state = 0 },
    [635] = { .lex_state = 0 },
    [636] = { .lex_state = 64 },
    [637] = { .lex_state = 64 },
    [638] = { .lex_state = 0 },
    [639] = { .lex_state = 64 },
    [640] = { .lex_state = 0 },
    [641] = { .lex_state = 64 },
    [642] = { .lex_state = 0 },
    [643] = { .lex_state = 0 },
    [644] = { .lex_state = 0 },
    [645] = { .lex_state = 0 },
    [646] = { .lex_state = 0 },
    [647] = { .lex_state = 496 },
    [648] = { .lex_state = 0 },
    [649] = { .lex_state = 64 },
    [650] = { .lex_state = 0 },
    [651] = { .lex_state = 0 },
    [652] = { .lex_state = 0 },
    [653] = { .lex_state = 0 },
    [654] = { .lex_state = 64 },
    [655] = { .lex_state = 0 },
    [656] = { .lex_state = 0 },
    [657] = { .lex_state = 744 },
    [658] = { .lex_state = 0 },
    [659] = { .lex_state = 64 },
    [660] = { .lex_state = 64 },
    [661] = { .lex_state = 496 },
    [662] = { .lex_state = 0 },
    [663] = { .lex_state = 496 },
    [664] = { .lex_state = 64 },
    [665] = { .lex_state = 64 },
    [666] = { .lex_state = 64 },
    [667] = { .lex_state = 64 },
    [668] = { .lex_state = 0 },
    [669] = { .lex_state = 64 },
    [670] = { .lex_state = 64 },
    [671] = { .lex_state = 64 },
    [672] = { .lex_state = 0 },
    [673] = { .lex_state = 64 },
    [674] = { .lex_state = 0 },
    [675] = { .lex_state = 64 },
    [676] = { .lex_state = 64 },
    [677] = { .lex_state = 64 },
    [678] = { .lex_state = 0 },
    [679] = { .lex_state = 64 },
    [680] = { .lex_state = 0 },
    [681] = { .lex_state = 0 },
    [682] = { .lex_state = 64 },
    [683] = { .lex_state = 0 },
    [684] = { .lex_state = 0 },
    [685] = { .lex_state = 496 },
    [686] = { (TSStateId)(-1) },
    [687] = { (TSStateId)(-1) },
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
        [sym_object_type] = ACTIONS(1),
        [anon_sym_oneway] = ACTIONS(1),
        [anon_sym_context] = ACTIONS(1),
        [sym_value_base_type] = ACTIONS(1),
        [anon_sym_component] = ACTIONS(1),
        [anon_sym_provides] = ACTIONS(1),
        [anon_sym_uses] = ACTIONS(1),
        [anon_sym_home] = ACTIONS(1),
        [anon_sym_manages] = ACTIONS(1),
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [1] = {
        [sym_specification] = STATE(656),
        [sym_preproc_call] = STATE(118),
        [sym_except_dcl] = STATE(655),
        [sym_interface_dcl] = STATE(655),
        [sym_interface_kind] = STATE(654),
        [sym_interface_forward_dcl] = STATE(652),
        [sym_interface_def] = STATE(652),
        [sym_interface_header] = STATE(651),
        [sym_bitset_dcl] = STATE(655),
        [sym_bitmask_dcl] = STATE(655),
        [sym_annotation_dcl] = STATE(655),
        [sym_annotation_appl] = STATE(170),
        [sym_template_module_dcl] = STATE(655),
        [sym_template_module_inst] = STATE(655),
        [sym_value_dcl] = STATE(655),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(655),
        [sym_enum_dcl] = STATE(655),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(655),
        [sym_union_def] = STATE(655),
        [sym_type_id_dcl] = STATE(655),
        [sym_type_prefix_dcl] = STATE(655),
        [sym_import_dcl] = STATE(655),
        [sym_value_abs_def] = STATE(650),
        [sym_component_dcl] = STATE(655),
        [sym_component_forward_dcl] = STATE(644),
        [sym_component_def] = STATE(644),
        [sym_component_header] = STATE(640),
        [sym_home_dcl] = STATE(655),
        [sym_home_header] = STATE(638),
        [sym__definition] = STATE(111),
        [sym_native_dcl] = STATE(655),
        [sym_module_dcl] = STATE(655),
        [sym_struct_forward_dcl] = STATE(655),
        [sym_struct_def] = STATE(655),
        [sym_predefine] = STATE(103),
        [sym_const_dcl] = STATE(655),
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
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(544),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_except_dcl] = STATE(672),
        [sym_export] = STATE(49),
        [sym_op_dcl] = STATE(372),
        [sym_op_type_spec] = STATE(533),
        [sym_attr_dcl] = STATE(672),
        [sym_readonly_attr_spec] = STATE(530),
        [sym_attr_spec] = STATE(530),
        [sym_bitset_dcl] = STATE(672),
        [sym_bitmask_dcl] = STATE(672),
        [sym_annotation_appl] = STATE(170),
        [sym_value_dcl] = STATE(672),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_element] = STATE(48),
        [sym_state_member] = STATE(49),
        [sym_init_dcl] = STATE(49),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(672),
        [sym_enum_dcl] = STATE(672),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(672),
        [sym_union_def] = STATE(672),
        [sym_type_id_dcl] = STATE(672),
        [sym_import_dcl] = STATE(672),
        [sym_op_oneway_dcl] = STATE(372),
        [sym_op_with_context] = STATE(672),
        [sym_value_abs_def] = STATE(650),
        [sym_native_dcl] = STATE(672),
        [sym_struct_forward_dcl] = STATE(672),
        [sym_struct_def] = STATE(672),
        [sym_const_dcl] = STATE(672),
        [sym_comment] = STATE(2),
        [aux_sym_interface_def_repeat1] = STATE(187),
        [aux_sym_value_def_repeat1] = STATE(3),
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
        [sym_object_type] = ACTIONS(69),
        [anon_sym_oneway] = ACTIONS(141),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [3] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(544),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_except_dcl] = STATE(672),
        [sym_export] = STATE(49),
        [sym_op_dcl] = STATE(372),
        [sym_op_type_spec] = STATE(533),
        [sym_attr_dcl] = STATE(672),
        [sym_readonly_attr_spec] = STATE(530),
        [sym_attr_spec] = STATE(530),
        [sym_bitset_dcl] = STATE(672),
        [sym_bitmask_dcl] = STATE(672),
        [sym_annotation_appl] = STATE(170),
        [sym_value_dcl] = STATE(672),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_element] = STATE(48),
        [sym_state_member] = STATE(49),
        [sym_init_dcl] = STATE(49),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(672),
        [sym_enum_dcl] = STATE(672),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(672),
        [sym_union_def] = STATE(672),
        [sym_type_id_dcl] = STATE(672),
        [sym_import_dcl] = STATE(672),
        [sym_op_oneway_dcl] = STATE(372),
        [sym_op_with_context] = STATE(672),
        [sym_value_abs_def] = STATE(650),
        [sym_native_dcl] = STATE(672),
        [sym_struct_forward_dcl] = STATE(672),
        [sym_struct_def] = STATE(672),
        [sym_const_dcl] = STATE(672),
        [sym_comment] = STATE(3),
        [aux_sym_interface_def_repeat1] = STATE(187),
        [aux_sym_value_def_repeat1] = STATE(3),
        [anon_sym_short] = ACTIONS(147),
        [anon_sym_int16] = ACTIONS(147),
        [anon_sym_long] = ACTIONS(150),
        [anon_sym_int32] = ACTIONS(150),
        [anon_sym_longlong] = ACTIONS(153),
        [anon_sym_int64] = ACTIONS(156),
        [sym_unsigned_tiny_int] = ACTIONS(159),
        [sym_boolean_type] = ACTIONS(162),
        [anon_sym_fixed] = ACTIONS(165),
        [sym_octet_type] = ACTIONS(162),
        [sym_signed_tiny_int] = ACTIONS(168),
        [anon_sym_unsignedshort] = ACTIONS(171),
        [anon_sym_uint16] = ACTIONS(174),
        [anon_sym_unsignedlong] = ACTIONS(177),
        [anon_sym_uint32] = ACTIONS(177),
        [anon_sym_unsignedlonglong] = ACTIONS(180),
        [anon_sym_uint64] = ACTIONS(183),
        [anon_sym_float] = ACTIONS(186),
        [anon_sym_double] = ACTIONS(186),
        [anon_sym_longdouble] = ACTIONS(189),
        [anon_sym_char] = ACTIONS(192),
        [anon_sym_wchar] = ACTIONS(192),
        [anon_sym_COLON_COLON] = ACTIONS(195),
        [anon_sym_string] = ACTIONS(198),
        [anon_sym_wstring] = ACTIONS(198),
        [anon_sym_any] = ACTIONS(201),
        [anon_sym_sequence] = ACTIONS(204),
        [anon_sym_map] = ACTIONS(207),
        [anon_sym_exception] = ACTIONS(210),
        [anon_sym_RBRACE] = ACTIONS(213),
        [anon_sym_abstract] = ACTIONS(215),
        [anon_sym_void] = ACTIONS(218),
        [anon_sym_readonly] = ACTIONS(221),
        [anon_sym_attribute] = ACTIONS(224),
        [anon_sym_bitset] = ACTIONS(227),
        [anon_sym_bitmask] = ACTIONS(230),
        [anon_sym_AT] = ACTIONS(233),
        [anon_sym_valuetype] = ACTIONS(236),
        [anon_sym_struct] = ACTIONS(239),
        [anon_sym_union] = ACTIONS(242),
        [anon_sym_enum] = ACTIONS(245),
        [anon_sym_const] = ACTIONS(248),
        [anon_sym_custom] = ACTIONS(251),
        [anon_sym_public] = ACTIONS(254),
        [anon_sym_private] = ACTIONS(254),
        [anon_sym_factory] = ACTIONS(257),
        [anon_sym_typedef] = ACTIONS(260),
        [anon_sym_ATignore_literal_names] = ACTIONS(263),
        [anon_sym_typeid] = ACTIONS(266),
        [anon_sym_import] = ACTIONS(269),
        [sym_object_type] = ACTIONS(162),
        [anon_sym_oneway] = ACTIONS(272),
        [sym_value_base_type] = ACTIONS(162),
        [anon_sym_native] = ACTIONS(275),
        [sym_identifier] = ACTIONS(278),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [4] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(544),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_except_dcl] = STATE(672),
        [sym_export] = STATE(49),
        [sym_op_dcl] = STATE(372),
        [sym_op_type_spec] = STATE(533),
        [sym_attr_dcl] = STATE(672),
        [sym_readonly_attr_spec] = STATE(530),
        [sym_attr_spec] = STATE(530),
        [sym_bitset_dcl] = STATE(672),
        [sym_bitmask_dcl] = STATE(672),
        [sym_annotation_appl] = STATE(170),
        [sym_value_dcl] = STATE(672),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_element] = STATE(48),
        [sym_state_member] = STATE(49),
        [sym_init_dcl] = STATE(49),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(672),
        [sym_enum_dcl] = STATE(672),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(672),
        [sym_union_def] = STATE(672),
        [sym_type_id_dcl] = STATE(672),
        [sym_import_dcl] = STATE(672),
        [sym_op_oneway_dcl] = STATE(372),
        [sym_op_with_context] = STATE(672),
        [sym_value_abs_def] = STATE(650),
        [sym_native_dcl] = STATE(672),
        [sym_struct_forward_dcl] = STATE(672),
        [sym_struct_def] = STATE(672),
        [sym_const_dcl] = STATE(672),
        [sym_comment] = STATE(4),
        [aux_sym_interface_def_repeat1] = STATE(187),
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
        [anon_sym_RBRACE] = ACTIONS(281),
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
        [sym_object_type] = ACTIONS(69),
        [anon_sym_oneway] = ACTIONS(141),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [5] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(544),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_except_dcl] = STATE(678),
        [sym_export] = STATE(56),
        [sym_op_dcl] = STATE(377),
        [sym_op_type_spec] = STATE(533),
        [sym_attr_dcl] = STATE(678),
        [sym_readonly_attr_spec] = STATE(530),
        [sym_attr_spec] = STATE(530),
        [sym_bitset_dcl] = STATE(678),
        [sym_bitmask_dcl] = STATE(678),
        [sym_annotation_appl] = STATE(170),
        [sym_value_dcl] = STATE(678),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(678),
        [sym_enum_dcl] = STATE(678),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(678),
        [sym_union_def] = STATE(678),
        [sym_type_id_dcl] = STATE(678),
        [sym_import_dcl] = STATE(678),
        [sym_op_oneway_dcl] = STATE(377),
        [sym_op_with_context] = STATE(678),
        [sym_value_abs_def] = STATE(650),
        [sym_home_body] = STATE(516),
        [sym_home_export] = STATE(55),
        [sym_factory_dcl] = STATE(513),
        [sym_native_dcl] = STATE(678),
        [sym_struct_forward_dcl] = STATE(678),
        [sym_struct_def] = STATE(678),
        [sym_const_dcl] = STATE(678),
        [sym_comment] = STATE(5),
        [aux_sym_interface_def_repeat1] = STATE(187),
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
        [anon_sym_RBRACE] = ACTIONS(283),
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
        [anon_sym_factory] = ACTIONS(285),
        [anon_sym_typedef] = ACTIONS(135),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(137),
        [anon_sym_import] = ACTIONS(139),
        [sym_object_type] = ACTIONS(69),
        [anon_sym_oneway] = ACTIONS(141),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [6] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(544),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_except_dcl] = STATE(678),
        [sym_export] = STATE(56),
        [sym_op_dcl] = STATE(377),
        [sym_op_type_spec] = STATE(533),
        [sym_attr_dcl] = STATE(678),
        [sym_readonly_attr_spec] = STATE(530),
        [sym_attr_spec] = STATE(530),
        [sym_bitset_dcl] = STATE(678),
        [sym_bitmask_dcl] = STATE(678),
        [sym_annotation_appl] = STATE(170),
        [sym_value_dcl] = STATE(678),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(678),
        [sym_enum_dcl] = STATE(678),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(678),
        [sym_union_def] = STATE(678),
        [sym_type_id_dcl] = STATE(678),
        [sym_import_dcl] = STATE(678),
        [sym_op_oneway_dcl] = STATE(377),
        [sym_op_with_context] = STATE(678),
        [sym_value_abs_def] = STATE(650),
        [sym_home_export] = STATE(55),
        [sym_factory_dcl] = STATE(513),
        [sym_native_dcl] = STATE(678),
        [sym_struct_forward_dcl] = STATE(678),
        [sym_struct_def] = STATE(678),
        [sym_const_dcl] = STATE(678),
        [sym_comment] = STATE(6),
        [aux_sym_interface_def_repeat1] = STATE(187),
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
        [anon_sym_RBRACE] = ACTIONS(287),
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
        [anon_sym_factory] = ACTIONS(285),
        [anon_sym_typedef] = ACTIONS(135),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(137),
        [anon_sym_import] = ACTIONS(139),
        [sym_object_type] = ACTIONS(69),
        [anon_sym_oneway] = ACTIONS(141),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [7] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(544),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_except_dcl] = STATE(678),
        [sym_export] = STATE(56),
        [sym_op_dcl] = STATE(377),
        [sym_op_type_spec] = STATE(533),
        [sym_attr_dcl] = STATE(678),
        [sym_readonly_attr_spec] = STATE(530),
        [sym_attr_spec] = STATE(530),
        [sym_bitset_dcl] = STATE(678),
        [sym_bitmask_dcl] = STATE(678),
        [sym_annotation_appl] = STATE(170),
        [sym_value_dcl] = STATE(678),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(678),
        [sym_enum_dcl] = STATE(678),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(678),
        [sym_union_def] = STATE(678),
        [sym_type_id_dcl] = STATE(678),
        [sym_import_dcl] = STATE(678),
        [sym_op_oneway_dcl] = STATE(377),
        [sym_op_with_context] = STATE(678),
        [sym_value_abs_def] = STATE(650),
        [sym_home_export] = STATE(55),
        [sym_factory_dcl] = STATE(513),
        [sym_native_dcl] = STATE(678),
        [sym_struct_forward_dcl] = STATE(678),
        [sym_struct_def] = STATE(678),
        [sym_const_dcl] = STATE(678),
        [sym_comment] = STATE(7),
        [aux_sym_interface_def_repeat1] = STATE(187),
        [aux_sym_home_body_repeat1] = STATE(7),
        [anon_sym_short] = ACTIONS(289),
        [anon_sym_int16] = ACTIONS(289),
        [anon_sym_long] = ACTIONS(292),
        [anon_sym_int32] = ACTIONS(292),
        [anon_sym_longlong] = ACTIONS(295),
        [anon_sym_int64] = ACTIONS(298),
        [sym_unsigned_tiny_int] = ACTIONS(301),
        [sym_boolean_type] = ACTIONS(304),
        [anon_sym_fixed] = ACTIONS(307),
        [sym_octet_type] = ACTIONS(304),
        [sym_signed_tiny_int] = ACTIONS(310),
        [anon_sym_unsignedshort] = ACTIONS(313),
        [anon_sym_uint16] = ACTIONS(316),
        [anon_sym_unsignedlong] = ACTIONS(319),
        [anon_sym_uint32] = ACTIONS(319),
        [anon_sym_unsignedlonglong] = ACTIONS(322),
        [anon_sym_uint64] = ACTIONS(325),
        [anon_sym_float] = ACTIONS(328),
        [anon_sym_double] = ACTIONS(328),
        [anon_sym_longdouble] = ACTIONS(331),
        [anon_sym_char] = ACTIONS(334),
        [anon_sym_wchar] = ACTIONS(334),
        [anon_sym_COLON_COLON] = ACTIONS(337),
        [anon_sym_string] = ACTIONS(340),
        [anon_sym_wstring] = ACTIONS(340),
        [anon_sym_any] = ACTIONS(343),
        [anon_sym_sequence] = ACTIONS(346),
        [anon_sym_map] = ACTIONS(349),
        [anon_sym_exception] = ACTIONS(352),
        [anon_sym_RBRACE] = ACTIONS(355),
        [anon_sym_abstract] = ACTIONS(357),
        [anon_sym_void] = ACTIONS(360),
        [anon_sym_readonly] = ACTIONS(363),
        [anon_sym_attribute] = ACTIONS(366),
        [anon_sym_bitset] = ACTIONS(369),
        [anon_sym_bitmask] = ACTIONS(372),
        [anon_sym_AT] = ACTIONS(375),
        [anon_sym_valuetype] = ACTIONS(378),
        [anon_sym_struct] = ACTIONS(381),
        [anon_sym_union] = ACTIONS(384),
        [anon_sym_enum] = ACTIONS(387),
        [anon_sym_const] = ACTIONS(390),
        [anon_sym_custom] = ACTIONS(393),
        [anon_sym_factory] = ACTIONS(396),
        [anon_sym_typedef] = ACTIONS(399),
        [anon_sym_ATignore_literal_names] = ACTIONS(402),
        [anon_sym_typeid] = ACTIONS(405),
        [anon_sym_import] = ACTIONS(408),
        [sym_object_type] = ACTIONS(304),
        [anon_sym_oneway] = ACTIONS(411),
        [sym_value_base_type] = ACTIONS(304),
        [anon_sym_native] = ACTIONS(414),
        [sym_identifier] = ACTIONS(417),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [8] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(544),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_except_dcl] = STATE(539),
        [sym_interface_body] = STATE(609),
        [sym_export] = STATE(66),
        [sym_op_dcl] = STATE(352),
        [sym_op_type_spec] = STATE(533),
        [sym_attr_dcl] = STATE(539),
        [sym_readonly_attr_spec] = STATE(530),
        [sym_attr_spec] = STATE(530),
        [sym_bitset_dcl] = STATE(539),
        [sym_bitmask_dcl] = STATE(539),
        [sym_annotation_appl] = STATE(170),
        [sym_value_dcl] = STATE(539),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(539),
        [sym_enum_dcl] = STATE(539),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(539),
        [sym_union_def] = STATE(539),
        [sym_type_id_dcl] = STATE(539),
        [sym_import_dcl] = STATE(539),
        [sym_op_oneway_dcl] = STATE(352),
        [sym_op_with_context] = STATE(539),
        [sym_value_abs_def] = STATE(650),
        [sym_native_dcl] = STATE(539),
        [sym_struct_forward_dcl] = STATE(539),
        [sym_struct_def] = STATE(539),
        [sym_const_dcl] = STATE(539),
        [sym_comment] = STATE(8),
        [aux_sym_interface_def_repeat1] = STATE(187),
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
        [anon_sym_RBRACE] = ACTIONS(420),
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
        [sym_object_type] = ACTIONS(69),
        [anon_sym_oneway] = ACTIONS(141),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [9] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(544),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_except_dcl] = STATE(539),
        [sym_interface_body] = STATE(535),
        [sym_export] = STATE(66),
        [sym_op_dcl] = STATE(352),
        [sym_op_type_spec] = STATE(533),
        [sym_attr_dcl] = STATE(539),
        [sym_readonly_attr_spec] = STATE(530),
        [sym_attr_spec] = STATE(530),
        [sym_bitset_dcl] = STATE(539),
        [sym_bitmask_dcl] = STATE(539),
        [sym_annotation_appl] = STATE(170),
        [sym_value_dcl] = STATE(539),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(539),
        [sym_enum_dcl] = STATE(539),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(539),
        [sym_union_def] = STATE(539),
        [sym_type_id_dcl] = STATE(539),
        [sym_import_dcl] = STATE(539),
        [sym_op_oneway_dcl] = STATE(352),
        [sym_op_with_context] = STATE(539),
        [sym_value_abs_def] = STATE(650),
        [sym_native_dcl] = STATE(539),
        [sym_struct_forward_dcl] = STATE(539),
        [sym_struct_def] = STATE(539),
        [sym_const_dcl] = STATE(539),
        [sym_comment] = STATE(9),
        [aux_sym_interface_def_repeat1] = STATE(187),
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
        [anon_sym_RBRACE] = ACTIONS(422),
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
        [sym_object_type] = ACTIONS(69),
        [anon_sym_oneway] = ACTIONS(141),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [10] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(544),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_except_dcl] = STATE(539),
        [sym_export] = STATE(66),
        [sym_op_dcl] = STATE(352),
        [sym_op_type_spec] = STATE(533),
        [sym_attr_dcl] = STATE(539),
        [sym_readonly_attr_spec] = STATE(530),
        [sym_attr_spec] = STATE(530),
        [sym_bitset_dcl] = STATE(539),
        [sym_bitmask_dcl] = STATE(539),
        [sym_annotation_appl] = STATE(170),
        [sym_value_dcl] = STATE(539),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(539),
        [sym_enum_dcl] = STATE(539),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(539),
        [sym_union_def] = STATE(539),
        [sym_type_id_dcl] = STATE(539),
        [sym_import_dcl] = STATE(539),
        [sym_op_oneway_dcl] = STATE(352),
        [sym_op_with_context] = STATE(539),
        [sym_value_abs_def] = STATE(650),
        [sym_native_dcl] = STATE(539),
        [sym_struct_forward_dcl] = STATE(539),
        [sym_struct_def] = STATE(539),
        [sym_const_dcl] = STATE(539),
        [sym_comment] = STATE(10),
        [aux_sym_interface_def_repeat1] = STATE(187),
        [aux_sym_interface_body_repeat1] = STATE(14),
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
        [anon_sym_RBRACE] = ACTIONS(424),
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
        [sym_object_type] = ACTIONS(69),
        [anon_sym_oneway] = ACTIONS(141),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [11] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(544),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_except_dcl] = STATE(539),
        [sym_export] = STATE(66),
        [sym_op_dcl] = STATE(352),
        [sym_op_type_spec] = STATE(533),
        [sym_attr_dcl] = STATE(539),
        [sym_readonly_attr_spec] = STATE(530),
        [sym_attr_spec] = STATE(530),
        [sym_bitset_dcl] = STATE(539),
        [sym_bitmask_dcl] = STATE(539),
        [sym_annotation_appl] = STATE(170),
        [sym_value_dcl] = STATE(539),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(539),
        [sym_enum_dcl] = STATE(539),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(539),
        [sym_union_def] = STATE(539),
        [sym_type_id_dcl] = STATE(539),
        [sym_import_dcl] = STATE(539),
        [sym_op_oneway_dcl] = STATE(352),
        [sym_op_with_context] = STATE(539),
        [sym_value_abs_def] = STATE(650),
        [sym_native_dcl] = STATE(539),
        [sym_struct_forward_dcl] = STATE(539),
        [sym_struct_def] = STATE(539),
        [sym_const_dcl] = STATE(539),
        [sym_comment] = STATE(11),
        [aux_sym_interface_def_repeat1] = STATE(187),
        [aux_sym_interface_body_repeat1] = STATE(11),
        [anon_sym_short] = ACTIONS(426),
        [anon_sym_int16] = ACTIONS(426),
        [anon_sym_long] = ACTIONS(429),
        [anon_sym_int32] = ACTIONS(429),
        [anon_sym_longlong] = ACTIONS(432),
        [anon_sym_int64] = ACTIONS(435),
        [sym_unsigned_tiny_int] = ACTIONS(438),
        [sym_boolean_type] = ACTIONS(441),
        [anon_sym_fixed] = ACTIONS(444),
        [sym_octet_type] = ACTIONS(441),
        [sym_signed_tiny_int] = ACTIONS(447),
        [anon_sym_unsignedshort] = ACTIONS(450),
        [anon_sym_uint16] = ACTIONS(453),
        [anon_sym_unsignedlong] = ACTIONS(456),
        [anon_sym_uint32] = ACTIONS(456),
        [anon_sym_unsignedlonglong] = ACTIONS(459),
        [anon_sym_uint64] = ACTIONS(462),
        [anon_sym_float] = ACTIONS(465),
        [anon_sym_double] = ACTIONS(465),
        [anon_sym_longdouble] = ACTIONS(468),
        [anon_sym_char] = ACTIONS(471),
        [anon_sym_wchar] = ACTIONS(471),
        [anon_sym_COLON_COLON] = ACTIONS(474),
        [anon_sym_string] = ACTIONS(477),
        [anon_sym_wstring] = ACTIONS(477),
        [anon_sym_any] = ACTIONS(480),
        [anon_sym_sequence] = ACTIONS(483),
        [anon_sym_map] = ACTIONS(486),
        [anon_sym_exception] = ACTIONS(489),
        [anon_sym_RBRACE] = ACTIONS(492),
        [anon_sym_abstract] = ACTIONS(494),
        [anon_sym_void] = ACTIONS(497),
        [anon_sym_readonly] = ACTIONS(500),
        [anon_sym_attribute] = ACTIONS(503),
        [anon_sym_bitset] = ACTIONS(506),
        [anon_sym_bitmask] = ACTIONS(509),
        [anon_sym_AT] = ACTIONS(512),
        [anon_sym_valuetype] = ACTIONS(515),
        [anon_sym_struct] = ACTIONS(518),
        [anon_sym_union] = ACTIONS(521),
        [anon_sym_enum] = ACTIONS(524),
        [anon_sym_const] = ACTIONS(527),
        [anon_sym_custom] = ACTIONS(530),
        [anon_sym_typedef] = ACTIONS(533),
        [anon_sym_ATignore_literal_names] = ACTIONS(536),
        [anon_sym_typeid] = ACTIONS(539),
        [anon_sym_import] = ACTIONS(542),
        [sym_object_type] = ACTIONS(441),
        [anon_sym_oneway] = ACTIONS(545),
        [sym_value_base_type] = ACTIONS(441),
        [anon_sym_native] = ACTIONS(548),
        [sym_identifier] = ACTIONS(551),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [12] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(544),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_except_dcl] = STATE(539),
        [sym_export] = STATE(66),
        [sym_op_dcl] = STATE(352),
        [sym_op_type_spec] = STATE(533),
        [sym_attr_dcl] = STATE(539),
        [sym_readonly_attr_spec] = STATE(530),
        [sym_attr_spec] = STATE(530),
        [sym_bitset_dcl] = STATE(539),
        [sym_bitmask_dcl] = STATE(539),
        [sym_annotation_appl] = STATE(170),
        [sym_value_dcl] = STATE(539),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(539),
        [sym_enum_dcl] = STATE(539),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(539),
        [sym_union_def] = STATE(539),
        [sym_type_id_dcl] = STATE(539),
        [sym_import_dcl] = STATE(539),
        [sym_op_oneway_dcl] = STATE(352),
        [sym_op_with_context] = STATE(539),
        [sym_value_abs_def] = STATE(650),
        [sym_native_dcl] = STATE(539),
        [sym_struct_forward_dcl] = STATE(539),
        [sym_struct_def] = STATE(539),
        [sym_const_dcl] = STATE(539),
        [sym_comment] = STATE(12),
        [aux_sym_interface_def_repeat1] = STATE(187),
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
        [anon_sym_RBRACE] = ACTIONS(554),
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
        [sym_object_type] = ACTIONS(69),
        [anon_sym_oneway] = ACTIONS(141),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [13] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(544),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_except_dcl] = STATE(539),
        [sym_export] = STATE(66),
        [sym_op_dcl] = STATE(352),
        [sym_op_type_spec] = STATE(533),
        [sym_attr_dcl] = STATE(539),
        [sym_readonly_attr_spec] = STATE(530),
        [sym_attr_spec] = STATE(530),
        [sym_bitset_dcl] = STATE(539),
        [sym_bitmask_dcl] = STATE(539),
        [sym_annotation_appl] = STATE(170),
        [sym_value_dcl] = STATE(539),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(539),
        [sym_enum_dcl] = STATE(539),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(539),
        [sym_union_def] = STATE(539),
        [sym_type_id_dcl] = STATE(539),
        [sym_import_dcl] = STATE(539),
        [sym_op_oneway_dcl] = STATE(352),
        [sym_op_with_context] = STATE(539),
        [sym_value_abs_def] = STATE(650),
        [sym_native_dcl] = STATE(539),
        [sym_struct_forward_dcl] = STATE(539),
        [sym_struct_def] = STATE(539),
        [sym_const_dcl] = STATE(539),
        [sym_comment] = STATE(13),
        [aux_sym_interface_def_repeat1] = STATE(187),
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
        [anon_sym_RBRACE] = ACTIONS(556),
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
        [sym_object_type] = ACTIONS(69),
        [anon_sym_oneway] = ACTIONS(141),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [14] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(544),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_except_dcl] = STATE(539),
        [sym_export] = STATE(66),
        [sym_op_dcl] = STATE(352),
        [sym_op_type_spec] = STATE(533),
        [sym_attr_dcl] = STATE(539),
        [sym_readonly_attr_spec] = STATE(530),
        [sym_attr_spec] = STATE(530),
        [sym_bitset_dcl] = STATE(539),
        [sym_bitmask_dcl] = STATE(539),
        [sym_annotation_appl] = STATE(170),
        [sym_value_dcl] = STATE(539),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(539),
        [sym_enum_dcl] = STATE(539),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(539),
        [sym_union_def] = STATE(539),
        [sym_type_id_dcl] = STATE(539),
        [sym_import_dcl] = STATE(539),
        [sym_op_oneway_dcl] = STATE(352),
        [sym_op_with_context] = STATE(539),
        [sym_value_abs_def] = STATE(650),
        [sym_native_dcl] = STATE(539),
        [sym_struct_forward_dcl] = STATE(539),
        [sym_struct_def] = STATE(539),
        [sym_const_dcl] = STATE(539),
        [sym_comment] = STATE(14),
        [aux_sym_interface_def_repeat1] = STATE(187),
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
        [anon_sym_RBRACE] = ACTIONS(558),
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
        [sym_object_type] = ACTIONS(69),
        [anon_sym_oneway] = ACTIONS(141),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [15] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(544),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_except_dcl] = STATE(539),
        [sym_export] = STATE(66),
        [sym_op_dcl] = STATE(352),
        [sym_op_type_spec] = STATE(533),
        [sym_attr_dcl] = STATE(539),
        [sym_readonly_attr_spec] = STATE(530),
        [sym_attr_spec] = STATE(530),
        [sym_bitset_dcl] = STATE(539),
        [sym_bitmask_dcl] = STATE(539),
        [sym_annotation_appl] = STATE(170),
        [sym_value_dcl] = STATE(539),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(539),
        [sym_enum_dcl] = STATE(539),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(539),
        [sym_union_def] = STATE(539),
        [sym_type_id_dcl] = STATE(539),
        [sym_import_dcl] = STATE(539),
        [sym_op_oneway_dcl] = STATE(352),
        [sym_op_with_context] = STATE(539),
        [sym_value_abs_def] = STATE(650),
        [sym_native_dcl] = STATE(539),
        [sym_struct_forward_dcl] = STATE(539),
        [sym_struct_def] = STATE(539),
        [sym_const_dcl] = STATE(539),
        [sym_comment] = STATE(15),
        [aux_sym_interface_def_repeat1] = STATE(187),
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
        [anon_sym_RBRACE] = ACTIONS(558),
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
        [sym_object_type] = ACTIONS(69),
        [anon_sym_oneway] = ACTIONS(141),
        [sym_value_base_type] = ACTIONS(69),
        [anon_sym_native] = ACTIONS(143),
        [sym_identifier] = ACTIONS(145),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [16] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(152),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(432),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_const_expr] = STATE(432),
        [sym_or_expr] = STATE(169),
        [sym_xor_expr] = STATE(165),
        [sym_and_expr] = STATE(160),
        [sym_shift_expr] = STATE(156),
        [sym_add_expr] = STATE(150),
        [sym_mult_expr] = STATE(140),
        [sym_unary_expr] = STATE(142),
        [sym_unary_operator] = STATE(147),
        [sym_literal] = STATE(145),
        [sym_string_literal] = STATE(136),
        [sym_char_literal] = STATE(136),
        [sym_boolean_literal] = STATE(136),
        [sym_actual_parameters] = STATE(514),
        [sym_actual_parameter] = STATE(277),
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
        [anon_sym_COLON_COLON] = ACTIONS(560),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_PLUS] = ACTIONS(562),
        [anon_sym_DASH] = ACTIONS(562),
        [anon_sym_LPAREN] = ACTIONS(564),
        [anon_sym_TILDE] = ACTIONS(566),
        [anon_sym_L] = ACTIONS(568),
        [anon_sym_DQUOTE] = ACTIONS(570),
        [anon_sym_SQUOTE] = ACTIONS(572),
        [anon_sym_TRUE] = ACTIONS(574),
        [anon_sym_FALSE] = ACTIONS(574),
        [sym_number_literal] = ACTIONS(576),
        [sym_object_type] = ACTIONS(69),
        [sym_value_base_type] = ACTIONS(69),
        [sym_identifier] = ACTIONS(578),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [17] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(152),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(432),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_const_expr] = STATE(432),
        [sym_or_expr] = STATE(169),
        [sym_xor_expr] = STATE(165),
        [sym_and_expr] = STATE(160),
        [sym_shift_expr] = STATE(156),
        [sym_add_expr] = STATE(150),
        [sym_mult_expr] = STATE(140),
        [sym_unary_expr] = STATE(142),
        [sym_unary_operator] = STATE(147),
        [sym_literal] = STATE(145),
        [sym_string_literal] = STATE(136),
        [sym_char_literal] = STATE(136),
        [sym_boolean_literal] = STATE(136),
        [sym_actual_parameter] = STATE(456),
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
        [anon_sym_COLON_COLON] = ACTIONS(560),
        [anon_sym_string] = ACTIONS(93),
        [anon_sym_wstring] = ACTIONS(93),
        [anon_sym_any] = ACTIONS(95),
        [anon_sym_sequence] = ACTIONS(97),
        [anon_sym_map] = ACTIONS(99),
        [anon_sym_PLUS] = ACTIONS(562),
        [anon_sym_DASH] = ACTIONS(562),
        [anon_sym_LPAREN] = ACTIONS(564),
        [anon_sym_TILDE] = ACTIONS(566),
        [anon_sym_L] = ACTIONS(568),
        [anon_sym_DQUOTE] = ACTIONS(570),
        [anon_sym_SQUOTE] = ACTIONS(572),
        [anon_sym_TRUE] = ACTIONS(574),
        [anon_sym_FALSE] = ACTIONS(574),
        [sym_number_literal] = ACTIONS(576),
        [sym_object_type] = ACTIONS(69),
        [sym_value_base_type] = ACTIONS(69),
        [sym_identifier] = ACTIONS(578),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [18] = {
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_type_spec] = STATE(229),
        [sym_simple_type_spec] = STATE(356),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(356),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_bitset_dcl] = STATE(229),
        [sym_bitmask_dcl] = STATE(229),
        [sym_annotation_appl] = STATE(170),
        [sym_enum_dcl] = STATE(229),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(229),
        [sym_union_def] = STATE(229),
        [sym_element_spec] = STATE(616),
        [sym_struct_forward_dcl] = STATE(229),
        [sym_struct_def] = STATE(229),
        [sym_comment] = STATE(18),
        [aux_sym_interface_def_repeat1] = STATE(187),
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
        [anon_sym_RBRACE] = ACTIONS(580),
        [anon_sym_bitset] = ACTIONS(113),
        [anon_sym_bitmask] = ACTIONS(115),
        [anon_sym_default] = ACTIONS(582),
        [anon_sym_AT] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(121),
        [anon_sym_union] = ACTIONS(123),
        [anon_sym_enum] = ACTIONS(125),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_case] = ACTIONS(582),
        [sym_object_type] = ACTIONS(69),
        [sym_value_base_type] = ACTIONS(69),
        [sym_identifier] = ACTIONS(145),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [19] = {
        [sym_except_dcl] = STATE(655),
        [sym_interface_dcl] = STATE(655),
        [sym_interface_kind] = STATE(654),
        [sym_interface_forward_dcl] = STATE(652),
        [sym_interface_def] = STATE(652),
        [sym_interface_header] = STATE(651),
        [sym_bitset_dcl] = STATE(655),
        [sym_bitmask_dcl] = STATE(655),
        [sym_annotation_dcl] = STATE(655),
        [sym_annotation_appl] = STATE(170),
        [sym_template_module_dcl] = STATE(655),
        [sym_tpl_definition] = STATE(120),
        [sym_template_module_inst] = STATE(655),
        [sym_template_module_ref] = STATE(523),
        [sym_value_dcl] = STATE(655),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(655),
        [sym_enum_dcl] = STATE(655),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(655),
        [sym_union_def] = STATE(655),
        [sym_type_id_dcl] = STATE(655),
        [sym_type_prefix_dcl] = STATE(655),
        [sym_import_dcl] = STATE(655),
        [sym_value_abs_def] = STATE(650),
        [sym_component_dcl] = STATE(655),
        [sym_component_forward_dcl] = STATE(644),
        [sym_component_def] = STATE(644),
        [sym_component_header] = STATE(640),
        [sym_home_dcl] = STATE(655),
        [sym_home_header] = STATE(638),
        [sym__definition] = STATE(113),
        [sym_native_dcl] = STATE(655),
        [sym_module_dcl] = STATE(655),
        [sym_struct_forward_dcl] = STATE(655),
        [sym_struct_def] = STATE(655),
        [sym_predefine] = STATE(103),
        [sym_const_dcl] = STATE(655),
        [sym_comment] = STATE(19),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [aux_sym_template_module_dcl_repeat1] = STATE(19),
        [anon_sym_exception] = ACTIONS(584),
        [anon_sym_RBRACE] = ACTIONS(587),
        [anon_sym_local] = ACTIONS(589),
        [anon_sym_abstract] = ACTIONS(592),
        [anon_sym_interface] = ACTIONS(595),
        [anon_sym_bitset] = ACTIONS(598),
        [anon_sym_bitmask] = ACTIONS(601),
        [anon_sym_ATannotation] = ACTIONS(604),
        [anon_sym_AT] = ACTIONS(607),
        [anon_sym_module] = ACTIONS(610),
        [anon_sym_valuetype] = ACTIONS(613),
        [anon_sym_struct] = ACTIONS(616),
        [anon_sym_union] = ACTIONS(619),
        [anon_sym_enum] = ACTIONS(622),
        [anon_sym_const] = ACTIONS(625),
        [anon_sym_alias] = ACTIONS(628),
        [anon_sym_custom] = ACTIONS(631),
        [anon_sym_typedef] = ACTIONS(634),
        [anon_sym_ATignore_literal_names] = ACTIONS(637),
        [anon_sym_typeid] = ACTIONS(640),
        [anon_sym_typeprefix] = ACTIONS(643),
        [anon_sym_import] = ACTIONS(646),
        [anon_sym_component] = ACTIONS(649),
        [anon_sym_home] = ACTIONS(652),
        [anon_sym_native] = ACTIONS(655),
        [anon_sym_POUNDdefine] = ACTIONS(658),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [20] = {
        [sym_preproc_call] = STATE(118),
        [sym_except_dcl] = STATE(655),
        [sym_interface_dcl] = STATE(655),
        [sym_interface_kind] = STATE(654),
        [sym_interface_forward_dcl] = STATE(652),
        [sym_interface_def] = STATE(652),
        [sym_interface_header] = STATE(651),
        [sym_bitset_dcl] = STATE(655),
        [sym_bitmask_dcl] = STATE(655),
        [sym_annotation_dcl] = STATE(655),
        [sym_annotation_appl] = STATE(170),
        [sym_template_module_dcl] = STATE(655),
        [sym_template_module_inst] = STATE(655),
        [sym_value_dcl] = STATE(655),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(655),
        [sym_enum_dcl] = STATE(655),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(655),
        [sym_union_def] = STATE(655),
        [sym_type_id_dcl] = STATE(655),
        [sym_type_prefix_dcl] = STATE(655),
        [sym_import_dcl] = STATE(655),
        [sym_value_abs_def] = STATE(650),
        [sym_component_dcl] = STATE(655),
        [sym_component_forward_dcl] = STATE(644),
        [sym_component_def] = STATE(644),
        [sym_component_header] = STATE(640),
        [sym_home_dcl] = STATE(655),
        [sym_home_header] = STATE(638),
        [sym__definition] = STATE(111),
        [sym_native_dcl] = STATE(655),
        [sym_module_dcl] = STATE(655),
        [sym_struct_forward_dcl] = STATE(655),
        [sym_struct_def] = STATE(655),
        [sym_predefine] = STATE(103),
        [sym_const_dcl] = STATE(655),
        [sym_comment] = STATE(20),
        [aux_sym_specification_repeat1] = STATE(98),
        [aux_sym_specification_repeat2] = STATE(26),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [ts_builtin_sym_end] = ACTIONS(661),
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
        [sym_signed_short_int] = STATE(265),
        [sym_signed_long_int] = STATE(265),
        [sym_signed_longlong_int] = STATE(265),
        [sym_unsigned_int] = STATE(245),
        [sym_integer_type] = STATE(296),
        [sym_signed_int] = STATE(245),
        [sym_unsigned_short_int] = STATE(262),
        [sym_unsigned_long_int] = STATE(262),
        [sym_unsigned_longlong_int] = STATE(262),
        [sym_floating_pt_type] = STATE(296),
        [sym_char_type] = STATE(296),
        [sym_scoped_name] = STATE(234),
        [sym_string_type] = STATE(304),
        [sym_simple_type_spec] = STATE(205),
        [sym_base_type_spec] = STATE(306),
        [sym_any_type] = STATE(296),
        [sym_fixed_pt_type] = STATE(304),
        [sym_template_type_spec] = STATE(205),
        [sym_sequence_type] = STATE(304),
        [sym_map_type] = STATE(304),
        [sym_bitset_dcl] = STATE(205),
        [sym_bitmask_dcl] = STATE(205),
        [sym_annotation_appl] = STATE(170),
        [sym_type_declarator] = STATE(596),
        [sym_enum_dcl] = STATE(205),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(205),
        [sym_union_def] = STATE(205),
        [sym_struct_forward_dcl] = STATE(205),
        [sym_struct_def] = STATE(205),
        [sym_comment] = STATE(21),
        [aux_sym_interface_def_repeat1] = STATE(187),
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
        [sym_object_type] = ACTIONS(69),
        [sym_value_base_type] = ACTIONS(69),
        [sym_identifier] = ACTIONS(145),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [22] = {
        [sym_except_dcl] = STATE(655),
        [sym_interface_dcl] = STATE(655),
        [sym_interface_kind] = STATE(654),
        [sym_interface_forward_dcl] = STATE(652),
        [sym_interface_def] = STATE(652),
        [sym_interface_header] = STATE(651),
        [sym_bitset_dcl] = STATE(655),
        [sym_bitmask_dcl] = STATE(655),
        [sym_annotation_dcl] = STATE(655),
        [sym_annotation_appl] = STATE(170),
        [sym_template_module_dcl] = STATE(655),
        [sym_tpl_definition] = STATE(120),
        [sym_template_module_inst] = STATE(655),
        [sym_template_module_ref] = STATE(523),
        [sym_value_dcl] = STATE(655),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(655),
        [sym_enum_dcl] = STATE(655),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(655),
        [sym_union_def] = STATE(655),
        [sym_type_id_dcl] = STATE(655),
        [sym_type_prefix_dcl] = STATE(655),
        [sym_import_dcl] = STATE(655),
        [sym_value_abs_def] = STATE(650),
        [sym_component_dcl] = STATE(655),
        [sym_component_forward_dcl] = STATE(644),
        [sym_component_def] = STATE(644),
        [sym_component_header] = STATE(640),
        [sym_home_dcl] = STATE(655),
        [sym_home_header] = STATE(638),
        [sym__definition] = STATE(113),
        [sym_native_dcl] = STATE(655),
        [sym_module_dcl] = STATE(655),
        [sym_struct_forward_dcl] = STATE(655),
        [sym_struct_def] = STATE(655),
        [sym_predefine] = STATE(103),
        [sym_const_dcl] = STATE(655),
        [sym_comment] = STATE(22),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [aux_sym_template_module_dcl_repeat1] = STATE(23),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(663),
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
        [anon_sym_alias] = ACTIONS(665),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_home] = ACTIONS(53),
        [anon_sym_native] = ACTIONS(55),
        [anon_sym_POUNDdefine] = ACTIONS(667),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [23] = {
        [sym_except_dcl] = STATE(655),
        [sym_interface_dcl] = STATE(655),
        [sym_interface_kind] = STATE(654),
        [sym_interface_forward_dcl] = STATE(652),
        [sym_interface_def] = STATE(652),
        [sym_interface_header] = STATE(651),
        [sym_bitset_dcl] = STATE(655),
        [sym_bitmask_dcl] = STATE(655),
        [sym_annotation_dcl] = STATE(655),
        [sym_annotation_appl] = STATE(170),
        [sym_template_module_dcl] = STATE(655),
        [sym_tpl_definition] = STATE(120),
        [sym_template_module_inst] = STATE(655),
        [sym_template_module_ref] = STATE(523),
        [sym_value_dcl] = STATE(655),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(655),
        [sym_enum_dcl] = STATE(655),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(655),
        [sym_union_def] = STATE(655),
        [sym_type_id_dcl] = STATE(655),
        [sym_type_prefix_dcl] = STATE(655),
        [sym_import_dcl] = STATE(655),
        [sym_value_abs_def] = STATE(650),
        [sym_component_dcl] = STATE(655),
        [sym_component_forward_dcl] = STATE(644),
        [sym_component_def] = STATE(644),
        [sym_component_header] = STATE(640),
        [sym_home_dcl] = STATE(655),
        [sym_home_header] = STATE(638),
        [sym__definition] = STATE(113),
        [sym_native_dcl] = STATE(655),
        [sym_module_dcl] = STATE(655),
        [sym_struct_forward_dcl] = STATE(655),
        [sym_struct_def] = STATE(655),
        [sym_predefine] = STATE(103),
        [sym_const_dcl] = STATE(655),
        [sym_comment] = STATE(23),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [aux_sym_template_module_dcl_repeat1] = STATE(19),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(669),
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
        [anon_sym_alias] = ACTIONS(665),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_home] = ACTIONS(53),
        [anon_sym_native] = ACTIONS(55),
        [anon_sym_POUNDdefine] = ACTIONS(667),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [24] = {
        [sym_except_dcl] = STATE(655),
        [sym_interface_dcl] = STATE(655),
        [sym_interface_kind] = STATE(654),
        [sym_interface_forward_dcl] = STATE(652),
        [sym_interface_def] = STATE(652),
        [sym_interface_header] = STATE(651),
        [sym_bitset_dcl] = STATE(655),
        [sym_bitmask_dcl] = STATE(655),
        [sym_annotation_dcl] = STATE(655),
        [sym_annotation_appl] = STATE(170),
        [sym_template_module_dcl] = STATE(655),
        [sym_template_module_inst] = STATE(655),
        [sym_value_dcl] = STATE(655),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(655),
        [sym_enum_dcl] = STATE(655),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(655),
        [sym_union_def] = STATE(655),
        [sym_type_id_dcl] = STATE(655),
        [sym_type_prefix_dcl] = STATE(655),
        [sym_import_dcl] = STATE(655),
        [sym_value_abs_def] = STATE(650),
        [sym_component_dcl] = STATE(655),
        [sym_component_forward_dcl] = STATE(644),
        [sym_component_def] = STATE(644),
        [sym_component_header] = STATE(640),
        [sym_home_dcl] = STATE(655),
        [sym_home_header] = STATE(638),
        [sym__definition] = STATE(111),
        [sym_native_dcl] = STATE(655),
        [sym_module_dcl] = STATE(655),
        [sym_struct_forward_dcl] = STATE(655),
        [sym_struct_def] = STATE(655),
        [sym_predefine] = STATE(103),
        [sym_const_dcl] = STATE(655),
        [sym_comment] = STATE(24),
        [aux_sym_specification_repeat2] = STATE(24),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [ts_builtin_sym_end] = ACTIONS(671),
        [anon_sym_exception] = ACTIONS(673),
        [anon_sym_RBRACE] = ACTIONS(671),
        [anon_sym_local] = ACTIONS(676),
        [anon_sym_abstract] = ACTIONS(679),
        [anon_sym_interface] = ACTIONS(682),
        [anon_sym_bitset] = ACTIONS(685),
        [anon_sym_bitmask] = ACTIONS(688),
        [anon_sym_ATannotation] = ACTIONS(691),
        [anon_sym_AT] = ACTIONS(694),
        [anon_sym_module] = ACTIONS(697),
        [anon_sym_valuetype] = ACTIONS(700),
        [anon_sym_struct] = ACTIONS(703),
        [anon_sym_union] = ACTIONS(706),
        [anon_sym_enum] = ACTIONS(709),
        [anon_sym_const] = ACTIONS(712),
        [anon_sym_custom] = ACTIONS(715),
        [anon_sym_typedef] = ACTIONS(718),
        [anon_sym_ATignore_literal_names] = ACTIONS(721),
        [anon_sym_typeid] = ACTIONS(724),
        [anon_sym_typeprefix] = ACTIONS(727),
        [anon_sym_import] = ACTIONS(730),
        [anon_sym_component] = ACTIONS(733),
        [anon_sym_home] = ACTIONS(736),
        [anon_sym_native] = ACTIONS(739),
        [anon_sym_POUNDdefine] = ACTIONS(742),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [25] = {
        [sym_except_dcl] = STATE(655),
        [sym_interface_dcl] = STATE(655),
        [sym_interface_kind] = STATE(654),
        [sym_interface_forward_dcl] = STATE(652),
        [sym_interface_def] = STATE(652),
        [sym_interface_header] = STATE(651),
        [sym_bitset_dcl] = STATE(655),
        [sym_bitmask_dcl] = STATE(655),
        [sym_annotation_dcl] = STATE(655),
        [sym_annotation_appl] = STATE(170),
        [sym_template_module_dcl] = STATE(655),
        [sym_template_module_inst] = STATE(655),
        [sym_value_dcl] = STATE(655),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(655),
        [sym_enum_dcl] = STATE(655),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(655),
        [sym_union_def] = STATE(655),
        [sym_type_id_dcl] = STATE(655),
        [sym_type_prefix_dcl] = STATE(655),
        [sym_import_dcl] = STATE(655),
        [sym_value_abs_def] = STATE(650),
        [sym_component_dcl] = STATE(655),
        [sym_component_forward_dcl] = STATE(644),
        [sym_component_def] = STATE(644),
        [sym_component_header] = STATE(640),
        [sym_home_dcl] = STATE(655),
        [sym_home_header] = STATE(638),
        [sym__definition] = STATE(111),
        [sym_native_dcl] = STATE(655),
        [sym_module_dcl] = STATE(655),
        [sym_struct_forward_dcl] = STATE(655),
        [sym_struct_def] = STATE(655),
        [sym_predefine] = STATE(103),
        [sym_const_dcl] = STATE(655),
        [sym_comment] = STATE(25),
        [aux_sym_specification_repeat2] = STATE(24),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(745),
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
        [anon_sym_POUNDdefine] = ACTIONS(667),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [26] = {
        [sym_except_dcl] = STATE(655),
        [sym_interface_dcl] = STATE(655),
        [sym_interface_kind] = STATE(654),
        [sym_interface_forward_dcl] = STATE(652),
        [sym_interface_def] = STATE(652),
        [sym_interface_header] = STATE(651),
        [sym_bitset_dcl] = STATE(655),
        [sym_bitmask_dcl] = STATE(655),
        [sym_annotation_dcl] = STATE(655),
        [sym_annotation_appl] = STATE(170),
        [sym_template_module_dcl] = STATE(655),
        [sym_template_module_inst] = STATE(655),
        [sym_value_dcl] = STATE(655),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(655),
        [sym_enum_dcl] = STATE(655),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(655),
        [sym_union_def] = STATE(655),
        [sym_type_id_dcl] = STATE(655),
        [sym_type_prefix_dcl] = STATE(655),
        [sym_import_dcl] = STATE(655),
        [sym_value_abs_def] = STATE(650),
        [sym_component_dcl] = STATE(655),
        [sym_component_forward_dcl] = STATE(644),
        [sym_component_def] = STATE(644),
        [sym_component_header] = STATE(640),
        [sym_home_dcl] = STATE(655),
        [sym_home_header] = STATE(638),
        [sym__definition] = STATE(111),
        [sym_native_dcl] = STATE(655),
        [sym_module_dcl] = STATE(655),
        [sym_struct_forward_dcl] = STATE(655),
        [sym_struct_def] = STATE(655),
        [sym_predefine] = STATE(103),
        [sym_const_dcl] = STATE(655),
        [sym_comment] = STATE(26),
        [aux_sym_specification_repeat2] = STATE(24),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [ts_builtin_sym_end] = ACTIONS(747),
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
        [anon_sym_POUNDdefine] = ACTIONS(667),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [27] = {
        [sym_except_dcl] = STATE(655),
        [sym_interface_dcl] = STATE(655),
        [sym_interface_kind] = STATE(654),
        [sym_interface_forward_dcl] = STATE(652),
        [sym_interface_def] = STATE(652),
        [sym_interface_header] = STATE(651),
        [sym_bitset_dcl] = STATE(655),
        [sym_bitmask_dcl] = STATE(655),
        [sym_annotation_dcl] = STATE(655),
        [sym_annotation_appl] = STATE(170),
        [sym_template_module_dcl] = STATE(655),
        [sym_template_module_inst] = STATE(655),
        [sym_value_dcl] = STATE(655),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(655),
        [sym_enum_dcl] = STATE(655),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(655),
        [sym_union_def] = STATE(655),
        [sym_type_id_dcl] = STATE(655),
        [sym_type_prefix_dcl] = STATE(655),
        [sym_import_dcl] = STATE(655),
        [sym_value_abs_def] = STATE(650),
        [sym_component_dcl] = STATE(655),
        [sym_component_forward_dcl] = STATE(644),
        [sym_component_def] = STATE(644),
        [sym_component_header] = STATE(640),
        [sym_home_dcl] = STATE(655),
        [sym_home_header] = STATE(638),
        [sym__definition] = STATE(111),
        [sym_native_dcl] = STATE(655),
        [sym_module_dcl] = STATE(655),
        [sym_struct_forward_dcl] = STATE(655),
        [sym_struct_def] = STATE(655),
        [sym_predefine] = STATE(103),
        [sym_const_dcl] = STATE(655),
        [sym_comment] = STATE(27),
        [aux_sym_specification_repeat2] = STATE(25),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(749),
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
        [anon_sym_POUNDdefine] = ACTIONS(667),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [28] = {
        [sym_except_dcl] = STATE(655),
        [sym_interface_dcl] = STATE(655),
        [sym_interface_kind] = STATE(654),
        [sym_interface_forward_dcl] = STATE(652),
        [sym_interface_def] = STATE(652),
        [sym_interface_header] = STATE(651),
        [sym_bitset_dcl] = STATE(655),
        [sym_bitmask_dcl] = STATE(655),
        [sym_annotation_dcl] = STATE(655),
        [sym_annotation_appl] = STATE(170),
        [sym_template_module_dcl] = STATE(655),
        [sym_template_module_inst] = STATE(655),
        [sym_value_dcl] = STATE(655),
        [sym_value_def] = STATE(650),
        [sym_value_kind] = STATE(649),
        [sym_value_header] = STATE(648),
        [sym_value_forward_dcl] = STATE(650),
        [sym_typedef_dcl] = STATE(655),
        [sym_enum_dcl] = STATE(655),
        [sym_enum_anno] = STATE(647),
        [sym_union_forward_dcl] = STATE(655),
        [sym_union_def] = STATE(655),
        [sym_type_id_dcl] = STATE(655),
        [sym_type_prefix_dcl] = STATE(655),
        [sym_import_dcl] = STATE(655),
        [sym_value_abs_def] = STATE(650),
        [sym_component_dcl] = STATE(655),
        [sym_component_forward_dcl] = STATE(644),
        [sym_component_def] = STATE(644),
        [sym_component_header] = STATE(640),
        [sym_home_dcl] = STATE(655),
        [sym_home_header] = STATE(638),
        [sym__definition] = STATE(111),
        [sym_native_dcl] = STATE(655),
        [sym_module_dcl] = STATE(655),
        [sym_struct_forward_dcl] = STATE(655),
        [sym_struct_def] = STATE(655),
        [sym_predefine] = STATE(103),
        [sym_const_dcl] = STATE(655),
        [sym_comment] = STATE(28),
        [aux_sym_specification_repeat2] = STATE(24),
        [aux_sym_interface_def_repeat1] = STATE(157),
        [ts_builtin_sym_end] = ACTIONS(661),
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
        [anon_sym_POUNDdefine] = ACTIONS(667),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 40,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(751),
    1,
    anon_sym_RBRACE,
    ACTIONS(753),
    1,
    anon_sym_AT,
    STATE(29),
    1,
    sym_comment,
    STATE(40),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(75),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(204),
    1,
    sym_type_spec,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [142] = 40,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(753),
    1,
    anon_sym_AT,
    ACTIONS(755),
    1,
    anon_sym_RBRACE,
    STATE(30),
    1,
    sym_comment,
    STATE(38),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(75),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(204),
    1,
    sym_type_spec,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [284] = 40,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(753),
    1,
    anon_sym_AT,
    ACTIONS(757),
    1,
    anon_sym_RBRACE,
    STATE(31),
    1,
    sym_comment,
    STATE(40),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(75),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(204),
    1,
    sym_type_spec,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [426] = 40,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(753),
    1,
    anon_sym_AT,
    ACTIONS(759),
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
    STATE(75),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(204),
    1,
    sym_type_spec,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [568] = 41,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(763),
    1,
    anon_sym_fixed,
    ACTIONS(765),
    1,
    anon_sym_any,
    ACTIONS(767),
    1,
    anon_sym_RBRACE,
    ACTIONS(769),
    1,
    anon_sym_ATignore_literal_names,
    STATE(33),
    1,
    sym_comment,
    STATE(34),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(80),
    1,
    sym_annotation_member,
    STATE(87),
    1,
    sym_annotation_body,
    STATE(487),
    1,
    sym_scoped_name,
    STATE(488),
    1,
    sym_annotation_member_type,
    STATE(647),
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
    ACTIONS(761),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(589),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(623),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(618),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [712] = 41,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(763),
    1,
    anon_sym_fixed,
    ACTIONS(765),
    1,
    anon_sym_any,
    ACTIONS(769),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(771),
    1,
    anon_sym_RBRACE,
    STATE(34),
    1,
    sym_comment,
    STATE(35),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(80),
    1,
    sym_annotation_member,
    STATE(87),
    1,
    sym_annotation_body,
    STATE(487),
    1,
    sym_scoped_name,
    STATE(488),
    1,
    sym_annotation_member_type,
    STATE(647),
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
    ACTIONS(761),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(589),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(623),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(618),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [856] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(779),
    1,
    anon_sym_longlong,
    ACTIONS(782),
    1,
    anon_sym_int64,
    ACTIONS(785),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(791),
    1,
    anon_sym_fixed,
    ACTIONS(794),
    1,
    sym_signed_tiny_int,
    ACTIONS(797),
    1,
    anon_sym_unsignedshort,
    ACTIONS(800),
    1,
    anon_sym_uint16,
    ACTIONS(806),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(809),
    1,
    anon_sym_uint64,
    ACTIONS(815),
    1,
    anon_sym_longdouble,
    ACTIONS(821),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(827),
    1,
    anon_sym_any,
    ACTIONS(830),
    1,
    anon_sym_sequence,
    ACTIONS(833),
    1,
    anon_sym_RBRACE,
    ACTIONS(835),
    1,
    anon_sym_enum,
    ACTIONS(838),
    1,
    anon_sym_const,
    ACTIONS(841),
    1,
    anon_sym_typedef,
    ACTIONS(844),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(847),
    1,
    sym_identifier,
    STATE(80),
    1,
    sym_annotation_member,
    STATE(87),
    1,
    sym_annotation_body,
    STATE(487),
    1,
    sym_scoped_name,
    STATE(488),
    1,
    sym_annotation_member_type,
    STATE(647),
    1,
    sym_enum_anno,
    ACTIONS(773),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(776),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(788),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(803),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(812),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(818),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(824),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(35),
    2,
    sym_comment,
    aux_sym_annotation_dcl_repeat1,
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(589),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(623),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(618),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [998] = 40,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(753),
    1,
    anon_sym_AT,
    ACTIONS(850),
    1,
    anon_sym_RBRACE,
    STATE(31),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(36),
    1,
    sym_comment,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(75),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(204),
    1,
    sym_type_spec,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1140] = 40,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(753),
    1,
    anon_sym_AT,
    ACTIONS(852),
    1,
    anon_sym_RBRACE,
    STATE(37),
    1,
    sym_comment,
    STATE(40),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(75),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(204),
    1,
    sym_type_spec,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1282] = 40,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(753),
    1,
    anon_sym_AT,
    ACTIONS(854),
    1,
    anon_sym_RBRACE,
    STATE(38),
    1,
    sym_comment,
    STATE(40),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(75),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(204),
    1,
    sym_type_spec,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1424] = 40,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(753),
    1,
    anon_sym_AT,
    ACTIONS(856),
    1,
    anon_sym_RBRACE,
    STATE(39),
    1,
    sym_comment,
    STATE(40),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(75),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(204),
    1,
    sym_type_spec,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1566] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(864),
    1,
    anon_sym_longlong,
    ACTIONS(867),
    1,
    anon_sym_int64,
    ACTIONS(870),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(876),
    1,
    anon_sym_fixed,
    ACTIONS(879),
    1,
    sym_signed_tiny_int,
    ACTIONS(882),
    1,
    anon_sym_unsignedshort,
    ACTIONS(885),
    1,
    anon_sym_uint16,
    ACTIONS(891),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(894),
    1,
    anon_sym_uint64,
    ACTIONS(900),
    1,
    anon_sym_longdouble,
    ACTIONS(906),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(912),
    1,
    anon_sym_any,
    ACTIONS(915),
    1,
    anon_sym_sequence,
    ACTIONS(918),
    1,
    anon_sym_map,
    ACTIONS(921),
    1,
    anon_sym_RBRACE,
    ACTIONS(923),
    1,
    anon_sym_AT,
    ACTIONS(926),
    1,
    sym_identifier,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(75),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(204),
    1,
    sym_type_spec,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
    1,
    sym_base_type_spec,
    ACTIONS(858),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(861),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(888),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(897),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(903),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(909),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(40),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(873),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1706] = 40,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(753),
    1,
    anon_sym_AT,
    ACTIONS(852),
    1,
    anon_sym_RBRACE,
    STATE(39),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(41),
    1,
    sym_comment,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(75),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(204),
    1,
    sym_type_spec,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1848] = 40,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(753),
    1,
    anon_sym_AT,
    ACTIONS(929),
    1,
    anon_sym_RBRACE,
    STATE(29),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(42),
    1,
    sym_comment,
    STATE(43),
    1,
    aux_sym_interface_def_repeat1,
    STATE(75),
    1,
    sym_member,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(204),
    1,
    sym_type_spec,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1990] = 37,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(753),
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
    STATE(203),
    1,
    sym_type_spec,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2123] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(44),
    1,
    sym_comment,
    ACTIONS(933),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(931),
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
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2192] = 34,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(935),
    1,
    anon_sym_sequence,
    ACTIONS(939),
    1,
    anon_sym_const,
    STATE(45),
    1,
    sym_comment,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(281),
    1,
    sym_formal_parameter,
    STATE(306),
    1,
    sym_base_type_spec,
    STATE(501),
    1,
    sym_formal_parameters,
    STATE(503),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(499),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(937),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [2319] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(46),
    1,
    sym_comment,
    ACTIONS(943),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(941),
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
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2388] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(47),
    1,
    sym_comment,
    ACTIONS(947),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(945),
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
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2457] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(48),
    1,
    sym_comment,
    ACTIONS(951),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(949),
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
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2526] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(49),
    1,
    sym_comment,
    ACTIONS(955),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(953),
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
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2595] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(50),
    1,
    sym_comment,
    ACTIONS(959),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(957),
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
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2664] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(51),
    1,
    sym_comment,
    ACTIONS(963),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(961),
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
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2733] = 36,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(965),
    1,
    anon_sym_GT,
    ACTIONS(967),
    1,
    anon_sym_COMMA,
    STATE(52),
    1,
    sym_comment,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
    1,
    sym_base_type_spec,
    STATE(551),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2863] = 33,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(935),
    1,
    anon_sym_sequence,
    ACTIONS(939),
    1,
    anon_sym_const,
    STATE(53),
    1,
    sym_comment,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
    1,
    sym_base_type_spec,
    STATE(453),
    1,
    sym_formal_parameter,
    STATE(503),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(499),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(937),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [2987] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(54),
    1,
    sym_comment,
    ACTIONS(971),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(969),
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
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [3054] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(55),
    1,
    sym_comment,
    ACTIONS(975),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(973),
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
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [3121] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(56),
    1,
    sym_comment,
    ACTIONS(979),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(977),
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
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [3188] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(57),
    1,
    sym_comment,
    ACTIONS(943),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(941),
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
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [3255] = 34,
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
    ACTIONS(145),
    1,
    sym_identifier,
    STATE(58),
    1,
    sym_comment,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
    1,
    sym_base_type_spec,
    STATE(438),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3379] = 34,
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
    ACTIONS(145),
    1,
    sym_identifier,
    STATE(59),
    1,
    sym_comment,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(294),
    1,
    sym_type_spec,
    STATE(306),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3503] = 34,
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
    ACTIONS(145),
    1,
    sym_identifier,
    STATE(60),
    1,
    sym_comment,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
    1,
    sym_base_type_spec,
    STATE(466),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3627] = 34,
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
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(61),
    1,
    sym_comment,
    STATE(306),
    1,
    sym_base_type_spec,
    STATE(387),
    1,
    sym_scoped_name,
    STATE(559),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3751] = 34,
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
    ACTIONS(145),
    1,
    sym_identifier,
    STATE(62),
    1,
    sym_comment,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
    1,
    sym_base_type_spec,
    STATE(448),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3875] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(63),
    1,
    sym_comment,
    ACTIONS(943),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(941),
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
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [3941] = 34,
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
    ACTIONS(145),
    1,
    sym_identifier,
    STATE(64),
    1,
    sym_comment,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
    1,
    sym_base_type_spec,
    STATE(452),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [4065] = 34,
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
    ACTIONS(145),
    1,
    sym_identifier,
    STATE(65),
    1,
    sym_comment,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
    1,
    sym_base_type_spec,
    STATE(366),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [4189] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(66),
    1,
    sym_comment,
    ACTIONS(983),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(981),
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
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [4255] = 34,
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
    ACTIONS(145),
    1,
    sym_identifier,
    STATE(67),
    1,
    sym_comment,
    STATE(202),
    1,
    sym_type_spec,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [4379] = 34,
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
    ACTIONS(145),
    1,
    sym_identifier,
    STATE(68),
    1,
    sym_comment,
    STATE(234),
    1,
    sym_scoped_name,
    STATE(306),
    1,
    sym_base_type_spec,
    STATE(454),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(69),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(296),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(304),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [4503] = 29,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(763),
    1,
    anon_sym_fixed,
    STATE(69),
    1,
    sym_comment,
    STATE(421),
    1,
    sym_scoped_name,
    STATE(637),
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
    ACTIONS(761),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(618),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [4608] = 29,
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
    ACTIONS(145),
    1,
    sym_identifier,
    ACTIONS(763),
    1,
    anon_sym_fixed,
    STATE(70),
    1,
    sym_comment,
    STATE(421),
    1,
    sym_scoped_name,
    STATE(604),
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
    ACTIONS(761),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(618),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [4713] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(71),
    1,
    sym_comment,
    ACTIONS(987),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(985),
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
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [4768] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(72),
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
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [4823] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(997),
    1,
    anon_sym_AT,
    STATE(88),
    1,
    sym_annotation_appl,
    STATE(73),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    ACTIONS(995),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(993),
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
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [4875] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(1002),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(1000),
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
    [4922] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(75),
    1,
    sym_comment,
    ACTIONS(1006),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1004),
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
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [4969] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(76),
    1,
    sym_comment,
    ACTIONS(1010),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1008),
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
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5016] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(1014),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1012),
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
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5063] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(1018),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1016),
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
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5110] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(1022),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(1020),
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
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5157] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(1026),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(1024),
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
    [5204] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(1030),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(1028),
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
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5251] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(1034),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(1032),
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
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5298] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(1038),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(1036),
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
    [5345] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(84),
    1,
    sym_comment,
    ACTIONS(1042),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(1040),
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
    [5392] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(85),
    1,
    sym_comment,
    ACTIONS(1046),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(1044),
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
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5439] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1052),
    1,
    anon_sym_LPAREN,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(1050),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
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
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5488] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(87),
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
    [5535] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(88),
    1,
    sym_comment,
    ACTIONS(1060),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
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
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5581] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(89),
    1,
    sym_comment,
    ACTIONS(1064),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
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
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5627] = 24,
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
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(578),
    1,
    sym_identifier,
    ACTIONS(1066),
    1,
    sym_boolean_type,
    STATE(90),
    1,
    sym_comment,
    STATE(391),
    1,
    sym_scoped_name,
    STATE(681),
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
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(662),
    2,
    sym_integer_type,
    sym_char_type,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [5710] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(1070),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(1068),
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
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5755] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(1020),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(1022),
    26,
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
    [5799] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(1028),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(1030),
    26,
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
    [5843] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(1032),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(1034),
    26,
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
    [5887] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(1072),
    1,
    sym_identifier,
    STATE(95),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(283),
    1,
    sym_annotation_appl_param,
    STATE(493),
    1,
    sym_const_expr,
    STATE(683),
    1,
    sym_annotation_appl_params,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5973] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(1072),
    1,
    sym_identifier,
    STATE(96),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(283),
    1,
    sym_annotation_appl_param,
    STATE(493),
    1,
    sym_const_expr,
    STATE(680),
    1,
    sym_annotation_appl_params,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6059] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(1072),
    1,
    sym_identifier,
    STATE(97),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(283),
    1,
    sym_annotation_appl_param,
    STATE(493),
    1,
    sym_const_expr,
    STATE(497),
    1,
    sym_annotation_appl_params,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6145] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1076),
    1,
    sym_preproc_directive,
    STATE(118),
    1,
    sym_preproc_call,
    STATE(98),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(1079),
    3,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(1074),
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
    [6191] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(1072),
    1,
    sym_identifier,
    STATE(99),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(283),
    1,
    sym_annotation_appl_param,
    STATE(493),
    1,
    sym_const_expr,
    STATE(674),
    1,
    sym_annotation_appl_params,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6277] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(100),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(273),
    1,
    sym_const_expr,
    STATE(540),
    1,
    sym_positive_int_const,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6360] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(101),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(273),
    1,
    sym_const_expr,
    STATE(668),
    1,
    sym_positive_int_const,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6443] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(102),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(273),
    1,
    sym_const_expr,
    STATE(534),
    1,
    sym_positive_int_const,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6526] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(103),
    1,
    sym_comment,
    ACTIONS(1083),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1081),
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
    [6567] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(104),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(273),
    1,
    sym_const_expr,
    STATE(590),
    1,
    sym_positive_int_const,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6650] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(105),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(273),
    1,
    sym_const_expr,
    STATE(557),
    1,
    sym_positive_int_const,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6733] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(106),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(273),
    1,
    sym_const_expr,
    STATE(584),
    1,
    sym_positive_int_const,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6816] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(107),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(273),
    1,
    sym_const_expr,
    STATE(426),
    1,
    sym_positive_int_const,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6899] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(1087),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1085),
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
    [6940] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(1091),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1089),
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
    [6981] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(110),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(625),
    1,
    sym_const_expr,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7061] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(111),
    1,
    sym_comment,
    ACTIONS(1095),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1093),
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
    [7101] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(112),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(614),
    1,
    sym_const_expr,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7181] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(1099),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1097),
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
    [7221] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(114),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(684),
    1,
    sym_const_expr,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7301] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(115),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(507),
    1,
    sym_const_expr,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7381] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(1103),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(1101),
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
    [7421] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(117),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(517),
    1,
    sym_const_expr,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7501] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(118),
    1,
    sym_comment,
    ACTIONS(1107),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(1105),
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
    [7541] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(1111),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1109),
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
    [7581] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(1115),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(1113),
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
    [7621] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(121),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(563),
    1,
    sym_const_expr,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7701] = 19,
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
    ACTIONS(1119),
    1,
    anon_sym_int32,
    ACTIONS(1121),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(1125),
    1,
    sym_signed_tiny_int,
    ACTIONS(1127),
    1,
    anon_sym_uint32,
    STATE(122),
    1,
    sym_comment,
    STATE(571),
    1,
    sym_integer_type,
    STATE(572),
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
    ACTIONS(1117),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(1123),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(245),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(262),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(265),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [7769] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(123),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(165),
    1,
    sym_xor_expr,
    STATE(169),
    1,
    sym_or_expr,
    STATE(441),
    1,
    sym_const_expr,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7849] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(1131),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(1129),
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
    [7889] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(125),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    STATE(164),
    1,
    sym_xor_expr,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7963] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(126),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(156),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8034] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(127),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(150),
    1,
    sym_add_expr,
    STATE(155),
    1,
    sym_shift_expr,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8102] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(128),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(140),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    STATE(151),
    1,
    sym_add_expr,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8167] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(129),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(137),
    1,
    sym_mult_expr,
    STATE(142),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8229] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(564),
    1,
    anon_sym_LPAREN,
    ACTIONS(566),
    1,
    anon_sym_TILDE,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    STATE(130),
    1,
    sym_comment,
    STATE(132),
    1,
    sym_scoped_name,
    STATE(134),
    1,
    sym_unary_expr,
    STATE(145),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_unary_operator,
    ACTIONS(562),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8288] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    STATE(131),
    1,
    sym_comment,
    ACTIONS(1135),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(1137),
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
    [8321] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    STATE(132),
    1,
    sym_comment,
    ACTIONS(1139),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(1141),
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
    [8354] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(133),
    1,
    sym_comment,
    ACTIONS(1143),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1145),
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
    [8384] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(134),
    1,
    sym_comment,
    ACTIONS(1147),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1149),
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
    [8414] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(135),
    1,
    sym_comment,
    ACTIONS(1151),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1153),
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
    [8444] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(136),
    1,
    sym_comment,
    ACTIONS(1155),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1157),
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
    [8474] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1159),
    1,
    anon_sym_GT,
    ACTIONS(1165),
    1,
    anon_sym_SLASH,
    STATE(137),
    1,
    sym_comment,
    ACTIONS(1163),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(1161),
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
    [8508] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(138),
    1,
    sym_comment,
    ACTIONS(1167),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1169),
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
    [8538] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(139),
    1,
    sym_comment,
    ACTIONS(1171),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1173),
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
    [8568] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1165),
    1,
    anon_sym_SLASH,
    ACTIONS(1175),
    1,
    anon_sym_GT,
    STATE(140),
    1,
    sym_comment,
    ACTIONS(1163),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(1177),
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
    [8602] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(141),
    1,
    sym_comment,
    ACTIONS(1179),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1181),
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
    [8632] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(142),
    1,
    sym_comment,
    ACTIONS(1183),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1185),
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
    [8662] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(143),
    1,
    sym_comment,
    ACTIONS(1135),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1137),
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
    [8692] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(144),
    1,
    sym_comment,
    ACTIONS(1187),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1189),
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
    [8722] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(145),
    1,
    sym_comment,
    ACTIONS(1139),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1141),
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
    [8752] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(146),
    1,
    sym_comment,
    ACTIONS(1191),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1193),
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
    [8782] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(568),
    1,
    anon_sym_L,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(572),
    1,
    anon_sym_SQUOTE,
    ACTIONS(576),
    1,
    sym_number_literal,
    ACTIONS(578),
    1,
    sym_identifier,
    ACTIONS(1195),
    1,
    anon_sym_LPAREN,
    STATE(131),
    1,
    sym_scoped_name,
    STATE(143),
    1,
    sym_literal,
    STATE(147),
    1,
    sym_comment,
    ACTIONS(574),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(136),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8828] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1197),
    1,
    anon_sym_RBRACE,
    ACTIONS(1199),
    1,
    anon_sym_readonly,
    ACTIONS(1201),
    1,
    anon_sym_attribute,
    ACTIONS(1203),
    1,
    anon_sym_provides,
    ACTIONS(1205),
    1,
    anon_sym_uses,
    STATE(148),
    1,
    sym_comment,
    STATE(153),
    1,
    aux_sym_component_body_repeat1,
    STATE(190),
    1,
    sym_component_export,
    STATE(521),
    1,
    sym_component_body,
    STATE(530),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(522),
    3,
    sym_attr_dcl,
    sym_provides_dcl,
    sym_uses_dcl,
    [8871] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1032),
    1,
    anon_sym_SLASH,
    ACTIONS(1207),
    1,
    anon_sym_EQ,
    STATE(149),
    1,
    sym_comment,
    ACTIONS(1034),
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
    [8900] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1209),
    1,
    anon_sym_GT,
    STATE(150),
    1,
    sym_comment,
    ACTIONS(1213),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(1211),
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
    [8929] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1215),
    1,
    anon_sym_GT,
    STATE(151),
    1,
    sym_comment,
    ACTIONS(1213),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(1217),
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
    [8958] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1139),
    1,
    anon_sym_SLASH,
    ACTIONS(1219),
    1,
    anon_sym_GT,
    ACTIONS(1221),
    1,
    anon_sym_COMMA,
    STATE(152),
    1,
    sym_comment,
    ACTIONS(1141),
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
    [8991] = 12,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1199),
    1,
    anon_sym_readonly,
    ACTIONS(1201),
    1,
    anon_sym_attribute,
    ACTIONS(1203),
    1,
    anon_sym_provides,
    ACTIONS(1205),
    1,
    anon_sym_uses,
    ACTIONS(1223),
    1,
    anon_sym_RBRACE,
    STATE(153),
    1,
    sym_comment,
    STATE(154),
    1,
    aux_sym_component_body_repeat1,
    STATE(190),
    1,
    sym_component_export,
    STATE(530),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(522),
    3,
    sym_attr_dcl,
    sym_provides_dcl,
    sym_uses_dcl,
    [9031] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1225),
    1,
    anon_sym_RBRACE,
    ACTIONS(1227),
    1,
    anon_sym_readonly,
    ACTIONS(1230),
    1,
    anon_sym_attribute,
    ACTIONS(1233),
    1,
    anon_sym_provides,
    ACTIONS(1236),
    1,
    anon_sym_uses,
    STATE(190),
    1,
    sym_component_export,
    STATE(154),
    2,
    sym_comment,
    aux_sym_component_body_repeat1,
    STATE(530),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(522),
    3,
    sym_attr_dcl,
    sym_provides_dcl,
    sym_uses_dcl,
    [9069] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1239),
    1,
    anon_sym_GT,
    STATE(155),
    1,
    sym_comment,
    ACTIONS(1243),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(1241),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9096] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1245),
    1,
    anon_sym_GT,
    STATE(156),
    1,
    sym_comment,
    ACTIONS(1243),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(1247),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9123] = 12,
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
    ACTIONS(1249),
    1,
    anon_sym_bitmask,
    ACTIONS(1251),
    1,
    anon_sym_struct,
    STATE(157),
    1,
    sym_comment,
    STATE(162),
    1,
    aux_sym_interface_def_repeat1,
    STATE(170),
    1,
    sym_annotation_appl,
    STATE(573),
    1,
    sym_interface_header,
    STATE(575),
    1,
    sym_interface_kind,
    ACTIONS(13),
    2,
    anon_sym_local,
    anon_sym_abstract,
    [9161] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(158),
    1,
    sym_comment,
    ACTIONS(1253),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(1255),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [9184] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1259),
    1,
    anon_sym_DOLLAR,
    STATE(159),
    1,
    sym_comment,
    ACTIONS(1257),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9207] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1259),
    1,
    anon_sym_DOLLAR,
    STATE(160),
    1,
    sym_comment,
    ACTIONS(1261),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9230] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1263),
    1,
    anon_sym_LPAREN,
    STATE(161),
    1,
    sym_comment,
    ACTIONS(1050),
    6,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [9254] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1265),
    1,
    anon_sym_AT,
    STATE(170),
    1,
    sym_annotation_appl,
    STATE(162),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    ACTIONS(995),
    5,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_struct,
    [9278] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1268),
    1,
    anon_sym_COMMA,
    ACTIONS(1270),
    1,
    anon_sym_SEMI,
    ACTIONS(1272),
    1,
    anon_sym_getraises,
    ACTIONS(1274),
    1,
    anon_sym_setraises,
    STATE(163),
    1,
    sym_comment,
    STATE(279),
    1,
    sym_get_excep_expr,
    STATE(280),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(512),
    1,
    sym_set_excep_expr,
    STATE(515),
    1,
    sym_attr_raises_expr,
    [9312] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1278),
    1,
    anon_sym_CARET,
    STATE(164),
    1,
    sym_comment,
    ACTIONS(1276),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9334] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1278),
    1,
    anon_sym_CARET,
    STATE(165),
    1,
    sym_comment,
    ACTIONS(1280),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9356] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(166),
    1,
    sym_comment,
    ACTIONS(1282),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [9375] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1284),
    1,
    anon_sym_RPAREN,
    ACTIONS(1286),
    1,
    anon_sym_in,
    STATE(68),
    1,
    sym_param_attribute,
    STATE(167),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_param_dcl,
    STATE(498),
    1,
    sym_parameter_dcls,
    ACTIONS(1288),
    2,
    anon_sym_out,
    anon_sym_inout,
    [9404] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(578),
    1,
    sym_identifier,
    ACTIONS(1290),
    1,
    anon_sym_L,
    STATE(168),
    1,
    sym_comment,
    STATE(439),
    1,
    sym_scoped_name,
    STATE(583),
    1,
    sym_imported_scope,
    STATE(585),
    1,
    sym_string_literal,
    [9435] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1294),
    1,
    anon_sym_PIPE,
    STATE(169),
    1,
    sym_comment,
    ACTIONS(1292),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9456] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(170),
    1,
    sym_comment,
    ACTIONS(1060),
    6,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [9474] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1296),
    1,
    anon_sym_RBRACE,
    ACTIONS(1298),
    1,
    anon_sym_default,
    ACTIONS(1301),
    1,
    anon_sym_case,
    STATE(18),
    1,
    sym_case_label,
    STATE(336),
    1,
    sym_case,
    STATE(171),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [9500] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1306),
    1,
    anon_sym_LBRACK,
    STATE(172),
    1,
    sym_comment,
    STATE(181),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(253),
    1,
    sym_fixed_array_size,
    ACTIONS(1304),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9524] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(173),
    1,
    sym_comment,
    ACTIONS(1064),
    6,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [9542] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(174),
    1,
    sym_comment,
    ACTIONS(1022),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [9560] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1308),
    1,
    anon_sym_RBRACE,
    ACTIONS(1310),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1312),
    1,
    sym_identifier,
    STATE(175),
    1,
    sym_comment,
    STATE(266),
    1,
    aux_sym_enumerator_repeat1,
    STATE(269),
    1,
    sym_enumerator,
    STATE(459),
    1,
    sym_enum_modifier,
    [9588] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1306),
    1,
    anon_sym_LBRACK,
    STATE(172),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(176),
    1,
    sym_comment,
    STATE(253),
    1,
    sym_fixed_array_size,
    ACTIONS(1282),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9612] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(177),
    1,
    sym_comment,
    ACTIONS(1034),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [9630] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1314),
    1,
    anon_sym_RBRACE,
    ACTIONS(1316),
    1,
    anon_sym_default,
    ACTIONS(1318),
    1,
    anon_sym_case,
    STATE(18),
    1,
    sym_case_label,
    STATE(178),
    1,
    sym_comment,
    STATE(180),
    1,
    aux_sym_union_def_repeat1,
    STATE(336),
    1,
    sym_case,
    [9658] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(179),
    1,
    sym_comment,
    ACTIONS(1030),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [9676] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1316),
    1,
    anon_sym_default,
    ACTIONS(1318),
    1,
    anon_sym_case,
    ACTIONS(1320),
    1,
    anon_sym_RBRACE,
    STATE(18),
    1,
    sym_case_label,
    STATE(171),
    1,
    aux_sym_union_def_repeat1,
    STATE(180),
    1,
    sym_comment,
    STATE(336),
    1,
    sym_case,
    [9704] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1324),
    1,
    anon_sym_LBRACK,
    STATE(253),
    1,
    sym_fixed_array_size,
    STATE(181),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(1322),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9726] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1327),
    1,
    anon_sym_RBRACE,
    ACTIONS(1329),
    1,
    anon_sym_AT,
    ACTIONS(1331),
    1,
    sym_identifier,
    STATE(182),
    1,
    sym_comment,
    STATE(199),
    1,
    aux_sym_interface_def_repeat1,
    STATE(344),
    1,
    sym_bit_value,
    STATE(393),
    1,
    sym_annotation_appl,
    [9754] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1329),
    1,
    anon_sym_AT,
    ACTIONS(1331),
    1,
    sym_identifier,
    ACTIONS(1333),
    1,
    anon_sym_RBRACE,
    STATE(183),
    1,
    sym_comment,
    STATE(191),
    1,
    aux_sym_interface_def_repeat1,
    STATE(316),
    1,
    sym_bit_value,
    STATE(393),
    1,
    sym_annotation_appl,
    [9782] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1310),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1312),
    1,
    sym_identifier,
    ACTIONS(1335),
    1,
    anon_sym_RBRACE,
    STATE(184),
    1,
    sym_comment,
    STATE(266),
    1,
    aux_sym_enumerator_repeat1,
    STATE(338),
    1,
    sym_enumerator,
    STATE(459),
    1,
    sym_enum_modifier,
    [9810] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1337),
    1,
    anon_sym_RBRACE,
    ACTIONS(1339),
    1,
    anon_sym_bitfield,
    STATE(185),
    1,
    sym_comment,
    STATE(189),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(268),
    1,
    sym_bitfield_spec,
    STATE(482),
    1,
    sym_bitfield,
    [9835] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1329),
    1,
    anon_sym_AT,
    ACTIONS(1331),
    1,
    sym_identifier,
    STATE(186),
    1,
    sym_comment,
    STATE(201),
    1,
    aux_sym_interface_def_repeat1,
    STATE(393),
    1,
    sym_annotation_appl,
    STATE(431),
    1,
    sym_bit_value,
    [9860] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(117),
    1,
    anon_sym_AT,
    ACTIONS(1249),
    1,
    anon_sym_bitmask,
    ACTIONS(1251),
    1,
    anon_sym_struct,
    STATE(162),
    1,
    aux_sym_interface_def_repeat1,
    STATE(170),
    1,
    sym_annotation_appl,
    STATE(187),
    1,
    sym_comment,
    [9885] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1339),
    1,
    anon_sym_bitfield,
    ACTIONS(1341),
    1,
    anon_sym_RBRACE,
    STATE(185),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(188),
    1,
    sym_comment,
    STATE(268),
    1,
    sym_bitfield_spec,
    STATE(482),
    1,
    sym_bitfield,
    [9910] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1343),
    1,
    anon_sym_RBRACE,
    ACTIONS(1345),
    1,
    anon_sym_bitfield,
    STATE(268),
    1,
    sym_bitfield_spec,
    STATE(482),
    1,
    sym_bitfield,
    STATE(189),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [9933] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(190),
    1,
    sym_comment,
    ACTIONS(1348),
    5,
    anon_sym_RBRACE,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_provides,
    anon_sym_uses,
    [9950] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1329),
    1,
    anon_sym_AT,
    ACTIONS(1331),
    1,
    sym_identifier,
    STATE(191),
    1,
    sym_comment,
    STATE(244),
    1,
    aux_sym_interface_def_repeat1,
    STATE(344),
    1,
    sym_bit_value,
    STATE(393),
    1,
    sym_annotation_appl,
    [9975] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(578),
    1,
    sym_identifier,
    ACTIONS(1350),
    1,
    anon_sym_truncatable,
    STATE(192),
    1,
    sym_comment,
    STATE(228),
    1,
    sym_value_name,
    STATE(231),
    1,
    sym_scoped_name,
    [10000] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(193),
    1,
    sym_comment,
    ACTIONS(1352),
    5,
    anon_sym_RBRACE,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_provides,
    anon_sym_uses,
    [10017] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1339),
    1,
    anon_sym_bitfield,
    ACTIONS(1354),
    1,
    anon_sym_RBRACE,
    STATE(194),
    1,
    sym_comment,
    STATE(200),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(268),
    1,
    sym_bitfield_spec,
    STATE(482),
    1,
    sym_bitfield,
    [10042] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1310),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1312),
    1,
    sym_identifier,
    STATE(195),
    1,
    sym_comment,
    STATE(266),
    1,
    aux_sym_enumerator_repeat1,
    STATE(459),
    1,
    sym_enum_modifier,
    STATE(461),
    1,
    sym_enumerator,
    [10067] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1286),
    1,
    anon_sym_in,
    STATE(68),
    1,
    sym_param_attribute,
    STATE(196),
    1,
    sym_comment,
    STATE(430),
    1,
    sym_param_dcl,
    ACTIONS(1288),
    2,
    anon_sym_out,
    anon_sym_inout,
    [10090] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1356),
    1,
    anon_sym_LBRACE,
    ACTIONS(1358),
    1,
    anon_sym_COLON,
    ACTIONS(1360),
    1,
    anon_sym_SEMI,
    ACTIONS(1362),
    1,
    anon_sym_supports,
    STATE(197),
    1,
    sym_comment,
    STATE(529),
    1,
    sym_value_inheritance_spec,
    [10115] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1268),
    1,
    anon_sym_COMMA,
    ACTIONS(1364),
    1,
    anon_sym_SEMI,
    ACTIONS(1366),
    1,
    anon_sym_raises,
    STATE(198),
    1,
    sym_comment,
    STATE(354),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(532),
    1,
    sym_raises_expr,
    [10140] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1329),
    1,
    anon_sym_AT,
    ACTIONS(1331),
    1,
    sym_identifier,
    STATE(199),
    1,
    sym_comment,
    STATE(244),
    1,
    aux_sym_interface_def_repeat1,
    STATE(330),
    1,
    sym_bit_value,
    STATE(393),
    1,
    sym_annotation_appl,
    [10165] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1339),
    1,
    anon_sym_bitfield,
    ACTIONS(1368),
    1,
    anon_sym_RBRACE,
    STATE(189),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(200),
    1,
    sym_comment,
    STATE(268),
    1,
    sym_bitfield_spec,
    STATE(482),
    1,
    sym_bitfield,
    [10190] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1329),
    1,
    anon_sym_AT,
    ACTIONS(1331),
    1,
    sym_identifier,
    STATE(201),
    1,
    sym_comment,
    STATE(244),
    1,
    aux_sym_interface_def_repeat1,
    STATE(393),
    1,
    sym_annotation_appl,
    STATE(475),
    1,
    sym_bit_value,
    [10215] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1370),
    1,
    sym_identifier,
    STATE(202),
    1,
    sym_comment,
    STATE(211),
    1,
    sym_declarator,
    STATE(622),
    1,
    sym_declarators,
    STATE(325),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10238] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1370),
    1,
    sym_identifier,
    STATE(203),
    1,
    sym_comment,
    STATE(211),
    1,
    sym_declarator,
    STATE(315),
    1,
    sym_declarators,
    STATE(325),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10261] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1370),
    1,
    sym_identifier,
    STATE(204),
    1,
    sym_comment,
    STATE(211),
    1,
    sym_declarator,
    STATE(327),
    1,
    sym_declarators,
    STATE(325),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10284] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1370),
    1,
    sym_identifier,
    STATE(205),
    1,
    sym_comment,
    STATE(348),
    1,
    sym_any_declarator,
    STATE(564),
    1,
    sym_any_declarators,
    STATE(478),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10307] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1372),
    1,
    anon_sym_COMMA,
    ACTIONS(1374),
    1,
    anon_sym_LBRACE,
    ACTIONS(1376),
    1,
    anon_sym_supports,
    STATE(206),
    1,
    sym_comment,
    STATE(225),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    [10329] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(207),
    1,
    sym_comment,
    STATE(231),
    1,
    sym_scoped_name,
    STATE(308),
    1,
    sym_value_name,
    [10351] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1380),
    1,
    anon_sym_LBRACE,
    ACTIONS(1382),
    1,
    anon_sym_COLON,
    ACTIONS(1384),
    1,
    anon_sym_SEMI,
    STATE(208),
    1,
    sym_comment,
    STATE(552),
    1,
    sym_component_inheritance_spec,
    [10373] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1386),
    1,
    anon_sym_COMMA,
    ACTIONS(1388),
    1,
    anon_sym_RPAREN,
    STATE(209),
    1,
    sym_comment,
    STATE(299),
    1,
    aux_sym_raises_expr_repeat1,
    [10395] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1370),
    1,
    sym_identifier,
    STATE(210),
    1,
    sym_comment,
    STATE(334),
    1,
    sym_declarator,
    STATE(325),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10415] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1390),
    1,
    anon_sym_COMMA,
    STATE(211),
    1,
    sym_comment,
    STATE(212),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(1392),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [10435] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1390),
    1,
    anon_sym_COMMA,
    STATE(212),
    1,
    sym_comment,
    STATE(215),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(1394),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [10455] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(213),
    1,
    sym_comment,
    STATE(291),
    1,
    sym_scoped_name,
    STATE(468),
    1,
    sym_interface_name,
    [10477] = 6,
    ACTIONS(993),
    1,
    aux_sym_comment_token1,
    ACTIONS(1396),
    1,
    anon_sym_AT,
    ACTIONS(1399),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    anon_sym_SLASH_STAR,
    STATE(399),
    1,
    sym_annotation_appl,
    STATE(214),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    [10497] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1403),
    1,
    anon_sym_COMMA,
    ACTIONS(1406),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(215),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [10515] = 7,
    ACTIONS(1399),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1408),
    1,
    anon_sym_AT,
    ACTIONS(1410),
    1,
    aux_sym_comment_token1,
    STATE(214),
    1,
    aux_sym_interface_def_repeat1,
    STATE(216),
    1,
    sym_comment,
    STATE(399),
    1,
    sym_annotation_appl,
    [10537] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1412),
    1,
    anon_sym_LBRACE,
    ACTIONS(1414),
    1,
    anon_sym_COLON,
    ACTIONS(1416),
    1,
    anon_sym_SEMI,
    STATE(217),
    1,
    sym_comment,
    STATE(549),
    1,
    sym_interface_inheritance_spec,
    [10559] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1358),
    1,
    anon_sym_COLON,
    ACTIONS(1362),
    1,
    anon_sym_supports,
    ACTIONS(1418),
    1,
    anon_sym_LBRACE,
    STATE(218),
    1,
    sym_comment,
    STATE(505),
    1,
    sym_value_inheritance_spec,
    [10581] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1420),
    1,
    anon_sym_RPAREN,
    ACTIONS(1422),
    1,
    anon_sym_in,
    STATE(219),
    1,
    sym_comment,
    STATE(267),
    1,
    sym_factory_param_dcl,
    STATE(500),
    1,
    sym_factory_param_dcls,
    [10603] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1424),
    1,
    anon_sym_L,
    STATE(220),
    1,
    sym_comment,
    STATE(555),
    1,
    sym_string_literal,
    [10625] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1426),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1429),
    1,
    sym_identifier,
    STATE(459),
    1,
    sym_enum_modifier,
    STATE(221),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [10645] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1424),
    1,
    anon_sym_L,
    STATE(222),
    1,
    sym_comment,
    STATE(558),
    1,
    sym_string_literal,
    [10667] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1431),
    1,
    sym_identifier,
    STATE(223),
    1,
    sym_comment,
    STATE(388),
    1,
    sym_scoped_name,
    STATE(597),
    1,
    sym_interface_type,
    [10689] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1431),
    1,
    sym_identifier,
    STATE(224),
    1,
    sym_comment,
    STATE(388),
    1,
    sym_scoped_name,
    STATE(595),
    1,
    sym_interface_type,
    [10711] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1433),
    1,
    anon_sym_COMMA,
    ACTIONS(1436),
    2,
    anon_sym_LBRACE,
    anon_sym_supports,
    STATE(225),
    2,
    sym_comment,
    aux_sym_value_inheritance_spec_repeat1,
    [10729] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(226),
    1,
    sym_comment,
    STATE(291),
    1,
    sym_scoped_name,
    STATE(295),
    1,
    sym_interface_name,
    [10751] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1438),
    1,
    anon_sym_RPAREN,
    ACTIONS(1440),
    1,
    anon_sym_in,
    STATE(227),
    1,
    sym_comment,
    STATE(317),
    1,
    sym_init_param_dcl,
    STATE(495),
    1,
    sym_init_param_dcls,
    [10773] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1372),
    1,
    anon_sym_COMMA,
    ACTIONS(1442),
    1,
    anon_sym_LBRACE,
    ACTIONS(1444),
    1,
    anon_sym_supports,
    STATE(206),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    STATE(228),
    1,
    sym_comment,
    [10795] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1370),
    1,
    sym_identifier,
    STATE(229),
    1,
    sym_comment,
    STATE(632),
    1,
    sym_declarator,
    STATE(325),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10815] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(230),
    1,
    sym_comment,
    STATE(291),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_interface_name,
    [10837] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(1446),
    3,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    anon_sym_supports,
    [10855] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1372),
    1,
    anon_sym_COMMA,
    ACTIONS(1448),
    1,
    anon_sym_LBRACE,
    ACTIONS(1450),
    1,
    anon_sym_supports,
    STATE(225),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    STATE(232),
    1,
    sym_comment,
    [10877] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(233),
    1,
    sym_comment,
    STATE(291),
    1,
    sym_scoped_name,
    STATE(342),
    1,
    sym_interface_name,
    [10899] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1452),
    1,
    anon_sym_COLON_COLON,
    STATE(234),
    1,
    sym_comment,
    ACTIONS(1221),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [10917] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(231),
    1,
    sym_scoped_name,
    STATE(235),
    1,
    sym_comment,
    STATE(239),
    1,
    sym_value_name,
    [10939] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1386),
    1,
    anon_sym_COMMA,
    ACTIONS(1454),
    1,
    anon_sym_RPAREN,
    STATE(236),
    1,
    sym_comment,
    STATE(318),
    1,
    aux_sym_raises_expr_repeat1,
    [10961] = 6,
    ACTIONS(1399),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1456),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1458),
    1,
    anon_sym_LPAREN,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(1048),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [10981] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(238),
    1,
    sym_comment,
    STATE(291),
    1,
    sym_scoped_name,
    STATE(658),
    1,
    sym_interface_name,
    [11003] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1372),
    1,
    anon_sym_COMMA,
    ACTIONS(1374),
    1,
    anon_sym_LBRACE,
    ACTIONS(1376),
    1,
    anon_sym_supports,
    STATE(232),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    STATE(239),
    1,
    sym_comment,
    [11025] = 4,
    ACTIONS(1399),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    anon_sym_SLASH_STAR,
    STATE(240),
    1,
    sym_comment,
    ACTIONS(1032),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [11041] = 4,
    ACTIONS(1399),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    anon_sym_SLASH_STAR,
    STATE(241),
    1,
    sym_comment,
    ACTIONS(1028),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [11057] = 4,
    ACTIONS(1399),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    anon_sym_SLASH_STAR,
    STATE(242),
    1,
    sym_comment,
    ACTIONS(1020),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [11073] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1452),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1460),
    1,
    anon_sym_LPAREN,
    STATE(243),
    1,
    sym_comment,
    ACTIONS(1050),
    2,
    anon_sym_AT,
    sym_identifier,
    [11093] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(995),
    1,
    sym_identifier,
    ACTIONS(1462),
    1,
    anon_sym_AT,
    STATE(393),
    1,
    sym_annotation_appl,
    STATE(244),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    [11113] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(245),
    1,
    sym_comment,
    ACTIONS(1465),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11129] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1467),
    1,
    anon_sym_LBRACE,
    ACTIONS(1469),
    1,
    anon_sym_COLON,
    STATE(246),
    1,
    sym_comment,
    ACTIONS(1471),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [11149] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1473),
    1,
    anon_sym_LT,
    STATE(247),
    1,
    sym_comment,
    ACTIONS(1475),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11167] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1370),
    1,
    sym_identifier,
    STATE(248),
    1,
    sym_comment,
    STATE(392),
    1,
    sym_any_declarator,
    STATE(478),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [11187] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1424),
    1,
    anon_sym_L,
    ACTIONS(1477),
    1,
    anon_sym_RPAREN,
    STATE(249),
    1,
    sym_comment,
    STATE(282),
    1,
    sym_string_literal,
    [11209] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(250),
    1,
    sym_comment,
    ACTIONS(1479),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11225] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1366),
    1,
    anon_sym_raises,
    STATE(251),
    1,
    sym_comment,
    STATE(455),
    1,
    sym_raises_expr,
    ACTIONS(1481),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [11245] = 7,
    ACTIONS(1399),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1408),
    1,
    anon_sym_AT,
    ACTIONS(1483),
    1,
    aux_sym_comment_token2,
    STATE(216),
    1,
    aux_sym_interface_def_repeat1,
    STATE(252),
    1,
    sym_comment,
    STATE(399),
    1,
    sym_annotation_appl,
    [11267] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(253),
    1,
    sym_comment,
    ACTIONS(1485),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [11283] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1366),
    1,
    anon_sym_raises,
    STATE(254),
    1,
    sym_comment,
    STATE(434),
    1,
    sym_raises_expr,
    ACTIONS(1487),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [11303] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1489),
    1,
    anon_sym_RPAREN,
    ACTIONS(1491),
    1,
    anon_sym_in,
    STATE(255),
    1,
    sym_comment,
    STATE(363),
    1,
    sym_in_param_dcl,
    STATE(542),
    1,
    sym_in_parameter_dcls,
    [11325] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(256),
    1,
    sym_comment,
    ACTIONS(1493),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11341] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(257),
    1,
    sym_comment,
    ACTIONS(1495),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11357] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(258),
    1,
    sym_comment,
    ACTIONS(1497),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11373] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(259),
    1,
    sym_comment,
    ACTIONS(1499),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11389] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(260),
    1,
    sym_comment,
    STATE(291),
    1,
    sym_scoped_name,
    STATE(292),
    1,
    sym_interface_name,
    [11411] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(261),
    1,
    sym_comment,
    ACTIONS(1501),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11427] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(262),
    1,
    sym_comment,
    ACTIONS(1503),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11443] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(263),
    1,
    sym_comment,
    ACTIONS(1505),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11459] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(264),
    1,
    sym_comment,
    ACTIONS(1507),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [11475] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(265),
    1,
    sym_comment,
    ACTIONS(1509),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11491] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1310),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1511),
    1,
    sym_identifier,
    STATE(221),
    1,
    aux_sym_enumerator_repeat1,
    STATE(266),
    1,
    sym_comment,
    STATE(459),
    1,
    sym_enum_modifier,
    [11513] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1513),
    1,
    anon_sym_COMMA,
    ACTIONS(1515),
    1,
    anon_sym_RPAREN,
    STATE(267),
    1,
    sym_comment,
    STATE(353),
    1,
    aux_sym_factory_param_dcls_repeat1,
    [11532] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1517),
    1,
    anon_sym_SEMI,
    ACTIONS(1519),
    1,
    sym_identifier,
    STATE(268),
    1,
    sym_comment,
    STATE(337),
    1,
    aux_sym_bitfield_repeat1,
    [11551] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1335),
    1,
    anon_sym_RBRACE,
    ACTIONS(1521),
    1,
    anon_sym_COMMA,
    STATE(269),
    1,
    sym_comment,
    STATE(381),
    1,
    aux_sym_enum_dcl_repeat1,
    [11570] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1523),
    1,
    anon_sym_GT,
    ACTIONS(1525),
    1,
    anon_sym_COMMA,
    STATE(270),
    2,
    sym_comment,
    aux_sym_actual_parameters_repeat1,
    [11587] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1528),
    1,
    anon_sym_COMMA,
    ACTIONS(1530),
    1,
    anon_sym_RPAREN,
    STATE(271),
    1,
    sym_comment,
    STATE(303),
    1,
    aux_sym_parameter_dcls_repeat1,
    [11606] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1532),
    1,
    anon_sym_GT,
    ACTIONS(1534),
    1,
    anon_sym_COMMA,
    STATE(272),
    2,
    sym_comment,
    aux_sym_formal_parameters_repeat1,
    [11623] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(273),
    1,
    sym_comment,
    ACTIONS(1537),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [11638] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(274),
    1,
    sym_comment,
    ACTIONS(1539),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11653] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(275),
    1,
    sym_comment,
    ACTIONS(1541),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11668] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1543),
    1,
    anon_sym_COMMA,
    ACTIONS(1546),
    1,
    anon_sym_LBRACE,
    STATE(276),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [11685] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1548),
    1,
    anon_sym_GT,
    ACTIONS(1550),
    1,
    anon_sym_COMMA,
    STATE(277),
    1,
    sym_comment,
    STATE(373),
    1,
    aux_sym_actual_parameters_repeat1,
    [11704] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1552),
    1,
    anon_sym_COMMA,
    ACTIONS(1555),
    1,
    anon_sym_RPAREN,
    STATE(278),
    2,
    sym_comment,
    aux_sym_annotation_appl_params_repeat1,
    [11721] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1274),
    1,
    anon_sym_setraises,
    ACTIONS(1557),
    1,
    anon_sym_SEMI,
    STATE(279),
    1,
    sym_comment,
    STATE(538),
    1,
    sym_set_excep_expr,
    [11740] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1268),
    1,
    anon_sym_COMMA,
    ACTIONS(1559),
    1,
    anon_sym_SEMI,
    STATE(280),
    1,
    sym_comment,
    STATE(359),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [11759] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1561),
    1,
    anon_sym_GT,
    ACTIONS(1563),
    1,
    anon_sym_COMMA,
    STATE(281),
    1,
    sym_comment,
    STATE(368),
    1,
    aux_sym_formal_parameters_repeat1,
    [11778] = 6,
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
    anon_sym_RPAREN,
    STATE(282),
    1,
    sym_comment,
    STATE(370),
    1,
    aux_sym_context_expr_repeat1,
    [11797] = 6,
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
    anon_sym_RPAREN,
    STATE(283),
    1,
    sym_comment,
    STATE(364),
    1,
    aux_sym_annotation_appl_params_repeat1,
    [11816] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1573),
    1,
    anon_sym_COMMA,
    ACTIONS(1575),
    1,
    anon_sym_SEMI,
    STATE(284),
    1,
    sym_comment,
    STATE(374),
    1,
    aux_sym_any_declarators_repeat1,
    [11835] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1577),
    1,
    anon_sym_SEMI,
    ACTIONS(1579),
    1,
    anon_sym_switch,
    ACTIONS(1581),
    1,
    sym_identifier,
    STATE(285),
    1,
    sym_comment,
    [11854] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1528),
    1,
    anon_sym_COMMA,
    ACTIONS(1583),
    1,
    anon_sym_RPAREN,
    STATE(271),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(286),
    1,
    sym_comment,
    [11873] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(287),
    1,
    sym_comment,
    ACTIONS(1585),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11888] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1587),
    1,
    anon_sym_COMMA,
    ACTIONS(1590),
    1,
    anon_sym_RPAREN,
    STATE(288),
    2,
    sym_comment,
    aux_sym_factory_param_dcls_repeat1,
    [11905] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1592),
    1,
    anon_sym_COMMA,
    ACTIONS(1595),
    1,
    anon_sym_RPAREN,
    STATE(289),
    2,
    sym_comment,
    aux_sym_init_param_dcls_repeat1,
    [11922] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(290),
    1,
    sym_comment,
    STATE(395),
    1,
    sym_scoped_name,
    [11941] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    STATE(291),
    1,
    sym_comment,
    ACTIONS(1597),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [11958] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1599),
    1,
    anon_sym_COMMA,
    ACTIONS(1601),
    1,
    anon_sym_LBRACE,
    STATE(292),
    1,
    sym_comment,
    STATE(369),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [11977] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1034),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1603),
    1,
    anon_sym_LT,
    ACTIONS(1605),
    1,
    anon_sym_LBRACE,
    STATE(293),
    1,
    sym_comment,
    [11996] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1607),
    1,
    sym_identifier,
    STATE(163),
    1,
    sym_simple_declarator,
    STATE(294),
    1,
    sym_comment,
    STATE(646),
    1,
    sym_attr_declarator,
    [12015] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1599),
    1,
    anon_sym_COMMA,
    ACTIONS(1609),
    1,
    anon_sym_LBRACE,
    STATE(295),
    1,
    sym_comment,
    STATE(301),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [12034] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(296),
    1,
    sym_comment,
    ACTIONS(1611),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12049] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1599),
    1,
    anon_sym_COMMA,
    ACTIONS(1609),
    1,
    anon_sym_LBRACE,
    STATE(276),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(297),
    1,
    sym_comment,
    [12068] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(298),
    1,
    sym_comment,
    STATE(320),
    1,
    sym_scoped_name,
    [12087] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1386),
    1,
    anon_sym_COMMA,
    ACTIONS(1613),
    1,
    anon_sym_RPAREN,
    STATE(299),
    1,
    sym_comment,
    STATE(322),
    1,
    aux_sym_raises_expr_repeat1,
    [12106] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1615),
    1,
    anon_sym_COMMA,
    ACTIONS(1618),
    1,
    anon_sym_RPAREN,
    STATE(300),
    2,
    sym_comment,
    aux_sym_in_parameter_dcls_repeat1,
    [12123] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1599),
    1,
    anon_sym_COMMA,
    ACTIONS(1620),
    1,
    anon_sym_LBRACE,
    STATE(276),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(301),
    1,
    sym_comment,
    [12142] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(302),
    1,
    sym_comment,
    ACTIONS(1622),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12157] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1624),
    1,
    anon_sym_COMMA,
    ACTIONS(1627),
    1,
    anon_sym_RPAREN,
    STATE(303),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [12174] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(304),
    1,
    sym_comment,
    ACTIONS(1629),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12189] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1631),
    1,
    anon_sym_COMMA,
    ACTIONS(1633),
    1,
    anon_sym_RBRACE,
    STATE(305),
    1,
    sym_comment,
    STATE(307),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [12208] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(306),
    1,
    sym_comment,
    ACTIONS(1221),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12223] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1635),
    1,
    anon_sym_COMMA,
    ACTIONS(1638),
    1,
    anon_sym_RBRACE,
    STATE(307),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [12240] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(308),
    1,
    sym_comment,
    ACTIONS(1436),
    3,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    anon_sym_supports,
    [12255] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1640),
    1,
    anon_sym_GT,
    ACTIONS(1642),
    1,
    anon_sym_COMMA,
    STATE(309),
    1,
    sym_comment,
    STATE(329),
    1,
    aux_sym_formal_parameter_names_repeat1,
    [12274] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1448),
    1,
    anon_sym_LBRACE,
    ACTIONS(1599),
    1,
    anon_sym_COMMA,
    STATE(310),
    1,
    sym_comment,
    STATE(345),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [12293] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1644),
    1,
    anon_sym_COMMA,
    ACTIONS(1647),
    1,
    anon_sym_RPAREN,
    STATE(311),
    2,
    sym_comment,
    aux_sym_context_expr_repeat1,
    [12310] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1649),
    1,
    anon_sym_SEMI,
    ACTIONS(1651),
    1,
    sym_identifier,
    STATE(312),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [12327] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(313),
    1,
    sym_comment,
    ACTIONS(1654),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [12342] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1366),
    1,
    anon_sym_raises,
    ACTIONS(1656),
    1,
    anon_sym_SEMI,
    STATE(314),
    1,
    sym_comment,
    STATE(556),
    1,
    sym_raises_expr,
    [12361] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1658),
    1,
    anon_sym_SEMI,
    ACTIONS(1660),
    1,
    anon_sym_default,
    STATE(315),
    1,
    sym_comment,
    STATE(510),
    1,
    sym_default,
    [12380] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1327),
    1,
    anon_sym_RBRACE,
    ACTIONS(1631),
    1,
    anon_sym_COMMA,
    STATE(316),
    1,
    sym_comment,
    STATE(343),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [12399] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1662),
    1,
    anon_sym_COMMA,
    ACTIONS(1664),
    1,
    anon_sym_RPAREN,
    STATE(317),
    1,
    sym_comment,
    STATE(349),
    1,
    aux_sym_init_param_dcls_repeat1,
    [12418] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1386),
    1,
    anon_sym_COMMA,
    ACTIONS(1666),
    1,
    anon_sym_RPAREN,
    STATE(318),
    1,
    sym_comment,
    STATE(322),
    1,
    aux_sym_raises_expr_repeat1,
    [12437] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1521),
    1,
    anon_sym_COMMA,
    ACTIONS(1668),
    1,
    anon_sym_RBRACE,
    STATE(319),
    1,
    sym_comment,
    STATE(324),
    1,
    aux_sym_enum_dcl_repeat1,
    [12456] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    STATE(320),
    1,
    sym_comment,
    ACTIONS(1670),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [12473] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1366),
    1,
    anon_sym_raises,
    ACTIONS(1672),
    1,
    anon_sym_SEMI,
    STATE(321),
    1,
    sym_comment,
    STATE(562),
    1,
    sym_raises_expr,
    [12492] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1670),
    1,
    anon_sym_RPAREN,
    ACTIONS(1674),
    1,
    anon_sym_COMMA,
    STATE(322),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [12509] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(323),
    1,
    sym_comment,
    STATE(416),
    1,
    sym_scoped_name,
    [12528] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1677),
    1,
    anon_sym_COMMA,
    ACTIONS(1680),
    1,
    anon_sym_RBRACE,
    STATE(324),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [12545] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(325),
    1,
    sym_comment,
    ACTIONS(1682),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [12560] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1684),
    1,
    anon_sym_COMMA,
    ACTIONS(1686),
    1,
    anon_sym_RPAREN,
    STATE(300),
    1,
    aux_sym_in_parameter_dcls_repeat1,
    STATE(326),
    1,
    sym_comment,
    [12579] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1660),
    1,
    anon_sym_default,
    ACTIONS(1688),
    1,
    anon_sym_SEMI,
    STATE(327),
    1,
    sym_comment,
    STATE(607),
    1,
    sym_default,
    [12598] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(328),
    1,
    sym_comment,
    STATE(446),
    1,
    sym_scoped_name,
    [12617] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1642),
    1,
    anon_sym_COMMA,
    ACTIONS(1690),
    1,
    anon_sym_GT,
    STATE(329),
    1,
    sym_comment,
    STATE(331),
    1,
    aux_sym_formal_parameter_names_repeat1,
    [12636] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1631),
    1,
    anon_sym_COMMA,
    ACTIONS(1633),
    1,
    anon_sym_RBRACE,
    STATE(330),
    1,
    sym_comment,
    STATE(346),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [12655] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1692),
    1,
    anon_sym_GT,
    ACTIONS(1694),
    1,
    anon_sym_COMMA,
    STATE(331),
    2,
    sym_comment,
    aux_sym_formal_parameter_names_repeat1,
    [12672] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(236),
    1,
    sym_scoped_name,
    STATE(332),
    1,
    sym_comment,
    [12691] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1697),
    1,
    anon_sym_COLON,
    ACTIONS(1699),
    1,
    anon_sym_manages,
    STATE(333),
    1,
    sym_comment,
    STATE(550),
    1,
    sym_home_inheritance_spec,
    [12710] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(334),
    1,
    sym_comment,
    ACTIONS(1406),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [12725] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1412),
    1,
    anon_sym_LBRACE,
    ACTIONS(1414),
    1,
    anon_sym_COLON,
    STATE(335),
    1,
    sym_comment,
    STATE(549),
    1,
    sym_interface_inheritance_spec,
    [12744] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(336),
    1,
    sym_comment,
    ACTIONS(1701),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [12759] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1519),
    1,
    sym_identifier,
    ACTIONS(1703),
    1,
    anon_sym_SEMI,
    STATE(312),
    1,
    aux_sym_bitfield_repeat1,
    STATE(337),
    1,
    sym_comment,
    [12778] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1521),
    1,
    anon_sym_COMMA,
    ACTIONS(1705),
    1,
    anon_sym_RBRACE,
    STATE(319),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(338),
    1,
    sym_comment,
    [12797] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(339),
    1,
    sym_comment,
    STATE(483),
    1,
    sym_scoped_name,
    [12816] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(340),
    1,
    sym_comment,
    ACTIONS(1707),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12831] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(341),
    1,
    sym_comment,
    STATE(442),
    1,
    sym_scoped_name,
    [12850] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1599),
    1,
    anon_sym_COMMA,
    ACTIONS(1709),
    1,
    anon_sym_LBRACE,
    STATE(297),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(342),
    1,
    sym_comment,
    [12869] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1631),
    1,
    anon_sym_COMMA,
    ACTIONS(1711),
    1,
    anon_sym_RBRACE,
    STATE(307),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(343),
    1,
    sym_comment,
    [12888] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1631),
    1,
    anon_sym_COMMA,
    ACTIONS(1711),
    1,
    anon_sym_RBRACE,
    STATE(305),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(344),
    1,
    sym_comment,
    [12907] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1599),
    1,
    anon_sym_COMMA,
    ACTIONS(1709),
    1,
    anon_sym_LBRACE,
    STATE(276),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(345),
    1,
    sym_comment,
    [12926] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1631),
    1,
    anon_sym_COMMA,
    ACTIONS(1713),
    1,
    anon_sym_RBRACE,
    STATE(307),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(346),
    1,
    sym_comment,
    [12945] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1366),
    1,
    anon_sym_raises,
    ACTIONS(1715),
    1,
    anon_sym_SEMI,
    STATE(347),
    1,
    sym_comment,
    STATE(602),
    1,
    sym_raises_expr,
    [12964] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1573),
    1,
    anon_sym_COMMA,
    ACTIONS(1717),
    1,
    anon_sym_SEMI,
    STATE(284),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(348),
    1,
    sym_comment,
    [12983] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1662),
    1,
    anon_sym_COMMA,
    ACTIONS(1719),
    1,
    anon_sym_RPAREN,
    STATE(289),
    1,
    aux_sym_init_param_dcls_repeat1,
    STATE(349),
    1,
    sym_comment,
    [13002] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(350),
    1,
    sym_comment,
    ACTIONS(1721),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13017] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(351),
    1,
    sym_comment,
    ACTIONS(1723),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13032] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1725),
    1,
    anon_sym_SEMI,
    ACTIONS(1727),
    1,
    anon_sym_context,
    STATE(352),
    1,
    sym_comment,
    STATE(587),
    1,
    sym_context_expr,
    [13051] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1513),
    1,
    anon_sym_COMMA,
    ACTIONS(1729),
    1,
    anon_sym_RPAREN,
    STATE(288),
    1,
    aux_sym_factory_param_dcls_repeat1,
    STATE(353),
    1,
    sym_comment,
    [13070] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1268),
    1,
    anon_sym_COMMA,
    ACTIONS(1731),
    1,
    anon_sym_SEMI,
    STATE(354),
    1,
    sym_comment,
    STATE(359),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [13089] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(209),
    1,
    sym_scoped_name,
    STATE(355),
    1,
    sym_comment,
    [13108] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(356),
    1,
    sym_comment,
    ACTIONS(1733),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13123] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(220),
    1,
    sym_scoped_name,
    STATE(357),
    1,
    sym_comment,
    [13142] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(222),
    1,
    sym_scoped_name,
    STATE(358),
    1,
    sym_comment,
    [13161] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1735),
    1,
    anon_sym_COMMA,
    ACTIONS(1738),
    1,
    anon_sym_SEMI,
    STATE(359),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [13178] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1366),
    1,
    anon_sym_raises,
    ACTIONS(1740),
    1,
    anon_sym_SEMI,
    STATE(360),
    1,
    sym_comment,
    STATE(606),
    1,
    sym_raises_expr,
    [13197] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1742),
    1,
    sym_identifier,
    STATE(361),
    1,
    sym_comment,
    STATE(411),
    1,
    sym_scoped_name,
    [13216] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(362),
    1,
    sym_comment,
    STATE(469),
    1,
    sym_scoped_name,
    [13235] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1684),
    1,
    anon_sym_COMMA,
    ACTIONS(1744),
    1,
    anon_sym_RPAREN,
    STATE(326),
    1,
    aux_sym_in_parameter_dcls_repeat1,
    STATE(363),
    1,
    sym_comment,
    [13254] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1569),
    1,
    anon_sym_COMMA,
    ACTIONS(1746),
    1,
    anon_sym_RPAREN,
    STATE(278),
    1,
    aux_sym_annotation_appl_params_repeat1,
    STATE(364),
    1,
    sym_comment,
    [13273] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(570),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1424),
    1,
    anon_sym_L,
    STATE(365),
    1,
    sym_comment,
    STATE(435),
    1,
    sym_string_literal,
    [13292] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1607),
    1,
    sym_identifier,
    STATE(198),
    1,
    sym_simple_declarator,
    STATE(366),
    1,
    sym_comment,
    STATE(526),
    1,
    sym_readonly_attr_declarator,
    [13311] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(161),
    1,
    sym_scoped_name,
    STATE(367),
    1,
    sym_comment,
    [13330] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1563),
    1,
    anon_sym_COMMA,
    ACTIONS(1748),
    1,
    anon_sym_GT,
    STATE(272),
    1,
    aux_sym_formal_parameters_repeat1,
    STATE(368),
    1,
    sym_comment,
    [13349] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1599),
    1,
    anon_sym_COMMA,
    ACTIONS(1750),
    1,
    anon_sym_LBRACE,
    STATE(276),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(369),
    1,
    sym_comment,
    [13368] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1565),
    1,
    anon_sym_COMMA,
    ACTIONS(1752),
    1,
    anon_sym_RPAREN,
    STATE(311),
    1,
    aux_sym_context_expr_repeat1,
    STATE(370),
    1,
    sym_comment,
    [13387] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1754),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1756),
    1,
    sym_identifier,
    STATE(237),
    1,
    sym_scoped_name,
    STATE(371),
    1,
    sym_comment,
    [13406] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1727),
    1,
    anon_sym_context,
    ACTIONS(1758),
    1,
    anon_sym_SEMI,
    STATE(372),
    1,
    sym_comment,
    STATE(587),
    1,
    sym_context_expr,
    [13425] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1550),
    1,
    anon_sym_COMMA,
    ACTIONS(1760),
    1,
    anon_sym_GT,
    STATE(270),
    1,
    aux_sym_actual_parameters_repeat1,
    STATE(373),
    1,
    sym_comment,
    [13444] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1762),
    1,
    anon_sym_COMMA,
    ACTIONS(1765),
    1,
    anon_sym_SEMI,
    STATE(374),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [13461] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1767),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1769),
    1,
    sym_identifier,
    STATE(86),
    1,
    sym_scoped_name,
    STATE(375),
    1,
    sym_comment,
    [13480] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(376),
    1,
    sym_comment,
    STATE(444),
    1,
    sym_scoped_name,
    [13499] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1727),
    1,
    anon_sym_context,
    ACTIONS(1771),
    1,
    anon_sym_SEMI,
    STATE(377),
    1,
    sym_comment,
    STATE(587),
    1,
    sym_context_expr,
    [13518] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(91),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1431),
    1,
    sym_identifier,
    STATE(243),
    1,
    sym_scoped_name,
    STATE(378),
    1,
    sym_comment,
    [13537] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(560),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(379),
    1,
    sym_comment,
    STATE(445),
    1,
    sym_scoped_name,
    [13556] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(380),
    1,
    sym_comment,
    ACTIONS(1773),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13571] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1521),
    1,
    anon_sym_COMMA,
    ACTIONS(1705),
    1,
    anon_sym_RBRACE,
    STATE(324),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(381),
    1,
    sym_comment,
    [13590] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(382),
    1,
    sym_comment,
    ACTIONS(1775),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13605] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(383),
    1,
    sym_comment,
    ACTIONS(1777),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13619] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1779),
    1,
    sym_identifier,
    STATE(384),
    1,
    sym_comment,
    STATE(630),
    1,
    sym_formal_parameter_names,
    [13635] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(385),
    1,
    sym_comment,
    ACTIONS(1781),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [13649] = 5,
    ACTIONS(1399),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1783),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(1785),
    1,
    sym_preproc_arg,
    STATE(386),
    1,
    sym_comment,
    [13665] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1221),
    1,
    anon_sym_COMMA,
    STATE(387),
    1,
    sym_comment,
    [13681] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1452),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1787),
    1,
    sym_identifier,
    STATE(388),
    1,
    sym_comment,
    [13697] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1789),
    1,
    anon_sym_interface,
    ACTIONS(1791),
    1,
    anon_sym_valuetype,
    STATE(389),
    1,
    sym_comment,
    [13713] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(390),
    1,
    sym_comment,
    ACTIONS(1064),
    2,
    anon_sym_AT,
    sym_identifier,
    [13727] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1793),
    1,
    anon_sym_RPAREN,
    STATE(391),
    1,
    sym_comment,
    [13743] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(392),
    1,
    sym_comment,
    ACTIONS(1765),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [13757] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(393),
    1,
    sym_comment,
    ACTIONS(1060),
    2,
    anon_sym_AT,
    sym_identifier,
    [13771] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(394),
    1,
    sym_comment,
    ACTIONS(1795),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13785] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1797),
    1,
    anon_sym_LBRACE,
    STATE(395),
    1,
    sym_comment,
    [13801] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1607),
    1,
    sym_identifier,
    STATE(396),
    1,
    sym_comment,
    STATE(582),
    1,
    sym_simple_declarator,
    [13817] = 4,
    ACTIONS(1399),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    anon_sym_SLASH_STAR,
    STATE(397),
    1,
    sym_comment,
    ACTIONS(1062),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [13831] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(398),
    1,
    sym_comment,
    ACTIONS(1799),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [13845] = 4,
    ACTIONS(1399),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    anon_sym_SLASH_STAR,
    STATE(399),
    1,
    sym_comment,
    ACTIONS(1058),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [13859] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(400),
    1,
    sym_comment,
    ACTIONS(1692),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [13873] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(401),
    1,
    sym_comment,
    ACTIONS(1801),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [13887] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(402),
    1,
    sym_comment,
    ACTIONS(1803),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [13901] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1805),
    1,
    sym_identifier,
    STATE(403),
    1,
    sym_comment,
    STATE(450),
    1,
    sym_annotation_appl_param,
    [13917] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(404),
    1,
    sym_comment,
    ACTIONS(1807),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [13931] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1809),
    1,
    anon_sym_LBRACE,
    ACTIONS(1811),
    1,
    anon_sym_COLON,
    STATE(405),
    1,
    sym_comment,
    [13947] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(406),
    1,
    sym_comment,
    ACTIONS(1618),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13961] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(407),
    1,
    sym_comment,
    ACTIONS(1813),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13975] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(408),
    1,
    sym_comment,
    ACTIONS(1815),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [13989] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1817),
    1,
    anon_sym_SEMI,
    ACTIONS(1819),
    1,
    anon_sym_default,
    STATE(409),
    1,
    sym_comment,
    [14005] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(410),
    1,
    sym_comment,
    ACTIONS(1821),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14019] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1823),
    1,
    anon_sym_LT,
    STATE(411),
    1,
    sym_comment,
    [14035] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(412),
    1,
    sym_comment,
    ACTIONS(1825),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14049] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(413),
    1,
    sym_comment,
    ACTIONS(1827),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14063] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(414),
    1,
    sym_comment,
    ACTIONS(1829),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14077] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(415),
    1,
    sym_comment,
    ACTIONS(1831),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [14091] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1833),
    1,
    anon_sym_LBRACE,
    STATE(416),
    1,
    sym_comment,
    [14107] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(417),
    1,
    sym_comment,
    ACTIONS(1835),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14121] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(418),
    1,
    sym_comment,
    ACTIONS(1837),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14135] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(419),
    1,
    sym_comment,
    ACTIONS(1839),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14149] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(420),
    1,
    sym_comment,
    ACTIONS(1841),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14163] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1452),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1843),
    1,
    sym_identifier,
    STATE(421),
    1,
    sym_comment,
    [14179] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(422),
    1,
    sym_comment,
    ACTIONS(1590),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14193] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(423),
    1,
    sym_comment,
    ACTIONS(1845),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14207] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(424),
    1,
    sym_comment,
    ACTIONS(1595),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14221] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(425),
    1,
    sym_comment,
    ACTIONS(1847),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14235] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1849),
    1,
    anon_sym_GT,
    ACTIONS(1851),
    1,
    anon_sym_COMMA,
    STATE(426),
    1,
    sym_comment,
    [14251] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(427),
    1,
    sym_comment,
    ACTIONS(1853),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [14265] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(428),
    1,
    sym_comment,
    ACTIONS(1855),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14279] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(429),
    1,
    sym_comment,
    ACTIONS(1857),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14293] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(430),
    1,
    sym_comment,
    ACTIONS(1627),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14307] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(431),
    1,
    sym_comment,
    ACTIONS(1638),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14321] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(432),
    1,
    sym_comment,
    ACTIONS(1859),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14335] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(433),
    1,
    sym_comment,
    ACTIONS(1861),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14349] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(434),
    1,
    sym_comment,
    ACTIONS(1863),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14363] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(435),
    1,
    sym_comment,
    ACTIONS(1647),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14377] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1491),
    1,
    anon_sym_in,
    STATE(406),
    1,
    sym_in_param_dcl,
    STATE(436),
    1,
    sym_comment,
    [14393] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(437),
    1,
    sym_comment,
    ACTIONS(1865),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14407] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1607),
    1,
    sym_identifier,
    STATE(407),
    1,
    sym_simple_declarator,
    STATE(438),
    1,
    sym_comment,
    [14423] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1867),
    1,
    anon_sym_SEMI,
    STATE(439),
    1,
    sym_comment,
    [14439] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(440),
    1,
    sym_comment,
    ACTIONS(1869),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14453] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(441),
    1,
    sym_comment,
    ACTIONS(1871),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14467] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1873),
    1,
    anon_sym_LT,
    STATE(442),
    1,
    sym_comment,
    [14483] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(443),
    1,
    sym_comment,
    ACTIONS(1875),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14497] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1877),
    1,
    anon_sym_LBRACE,
    STATE(444),
    1,
    sym_comment,
    [14513] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1879),
    1,
    anon_sym_manages,
    STATE(445),
    1,
    sym_comment,
    [14529] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1881),
    1,
    anon_sym_LBRACE,
    STATE(446),
    1,
    sym_comment,
    [14545] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1422),
    1,
    anon_sym_in,
    STATE(422),
    1,
    sym_factory_param_dcl,
    STATE(447),
    1,
    sym_comment,
    [14561] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1607),
    1,
    sym_identifier,
    STATE(423),
    1,
    sym_simple_declarator,
    STATE(448),
    1,
    sym_comment,
    [14577] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(449),
    1,
    sym_comment,
    ACTIONS(1883),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14591] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(450),
    1,
    sym_comment,
    ACTIONS(1555),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14605] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1440),
    1,
    anon_sym_in,
    STATE(424),
    1,
    sym_init_param_dcl,
    STATE(451),
    1,
    sym_comment,
    [14621] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1607),
    1,
    sym_identifier,
    STATE(425),
    1,
    sym_simple_declarator,
    STATE(452),
    1,
    sym_comment,
    [14637] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(453),
    1,
    sym_comment,
    ACTIONS(1532),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14651] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1607),
    1,
    sym_identifier,
    STATE(428),
    1,
    sym_simple_declarator,
    STATE(454),
    1,
    sym_comment,
    [14667] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(455),
    1,
    sym_comment,
    ACTIONS(1487),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14681] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(456),
    1,
    sym_comment,
    ACTIONS(1523),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14695] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(457),
    1,
    sym_comment,
    ACTIONS(1885),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14709] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(458),
    1,
    sym_comment,
    ACTIONS(1887),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14723] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(459),
    1,
    sym_comment,
    ACTIONS(1889),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [14737] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(460),
    1,
    sym_comment,
    ACTIONS(1891),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [14751] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(461),
    1,
    sym_comment,
    ACTIONS(1680),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14765] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(462),
    1,
    sym_comment,
    ACTIONS(1893),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14779] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(463),
    1,
    sym_comment,
    ACTIONS(1895),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14793] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(464),
    1,
    sym_comment,
    ACTIONS(1897),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [14807] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(465),
    1,
    sym_comment,
    ACTIONS(1738),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [14821] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1899),
    1,
    anon_sym_GT,
    ACTIONS(1901),
    1,
    anon_sym_COMMA,
    STATE(466),
    1,
    sym_comment,
    [14837] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(467),
    1,
    sym_comment,
    ACTIONS(1903),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14851] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(468),
    1,
    sym_comment,
    ACTIONS(1546),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [14865] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1905),
    1,
    anon_sym_LBRACE,
    STATE(469),
    1,
    sym_comment,
    [14881] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(470),
    1,
    sym_comment,
    ACTIONS(1907),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14895] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(471),
    1,
    sym_comment,
    ACTIONS(1909),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14909] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1607),
    1,
    sym_identifier,
    STATE(465),
    1,
    sym_simple_declarator,
    STATE(472),
    1,
    sym_comment,
    [14925] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1911),
    1,
    anon_sym_LPAREN,
    STATE(460),
    1,
    sym_exception_list,
    STATE(473),
    1,
    sym_comment,
    [14941] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1911),
    1,
    anon_sym_LPAREN,
    STATE(474),
    1,
    sym_comment,
    STATE(537),
    1,
    sym_exception_list,
    [14957] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(475),
    1,
    sym_comment,
    ACTIONS(1913),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14971] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(476),
    1,
    sym_comment,
    ACTIONS(1915),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14985] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(477),
    1,
    sym_comment,
    ACTIONS(1917),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14999] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(478),
    1,
    sym_comment,
    ACTIONS(1919),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [15013] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1921),
    1,
    anon_sym_LBRACE,
    ACTIONS(1923),
    1,
    anon_sym_COLON,
    STATE(479),
    1,
    sym_comment,
    [15029] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(480),
    1,
    sym_comment,
    ACTIONS(1925),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15043] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(481),
    1,
    sym_comment,
    ACTIONS(1927),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15057] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(482),
    1,
    sym_comment,
    ACTIONS(1929),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [15071] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1133),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1931),
    1,
    anon_sym_LBRACE,
    STATE(483),
    1,
    sym_comment,
    [15087] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(484),
    1,
    sym_comment,
    ACTIONS(1933),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15101] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1935),
    1,
    anon_sym_LT,
    ACTIONS(1937),
    1,
    sym_identifier,
    STATE(485),
    1,
    sym_comment,
    [15117] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(486),
    1,
    sym_comment,
    ACTIONS(1939),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [15131] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1452),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1941),
    1,
    sym_identifier,
    STATE(487),
    1,
    sym_comment,
    [15147] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1607),
    1,
    sym_identifier,
    STATE(409),
    1,
    sym_simple_declarator,
    STATE(488),
    1,
    sym_comment,
    [15163] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1943),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1945),
    1,
    anon_sym_SQUOTE,
    STATE(489),
    1,
    sym_comment,
    [15179] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1947),
    1,
    anon_sym_LPAREN,
    STATE(490),
    1,
    sym_comment,
    [15192] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1949),
    1,
    sym_identifier,
    STATE(491),
    1,
    sym_comment,
    [15205] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1951),
    1,
    aux_sym_char_literal_token1,
    STATE(492),
    1,
    sym_comment,
    [15218] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1571),
    1,
    anon_sym_RPAREN,
    STATE(493),
    1,
    sym_comment,
    [15231] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1953),
    1,
    anon_sym_SEMI,
    STATE(494),
    1,
    sym_comment,
    [15244] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1955),
    1,
    anon_sym_RPAREN,
    STATE(495),
    1,
    sym_comment,
    [15257] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1957),
    1,
    sym_identifier,
    STATE(496),
    1,
    sym_comment,
    [15270] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1959),
    1,
    anon_sym_RPAREN,
    STATE(497),
    1,
    sym_comment,
    [15283] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1961),
    1,
    anon_sym_RPAREN,
    STATE(498),
    1,
    sym_comment,
    [15296] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1937),
    1,
    sym_identifier,
    STATE(499),
    1,
    sym_comment,
    [15309] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1963),
    1,
    anon_sym_RPAREN,
    STATE(500),
    1,
    sym_comment,
    [15322] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1965),
    1,
    anon_sym_GT,
    STATE(501),
    1,
    sym_comment,
    [15335] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1967),
    1,
    anon_sym_LT,
    STATE(502),
    1,
    sym_comment,
    [15348] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1969),
    1,
    sym_identifier,
    STATE(503),
    1,
    sym_comment,
    [15361] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1971),
    1,
    anon_sym_SEMI,
    STATE(504),
    1,
    sym_comment,
    [15374] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1973),
    1,
    anon_sym_LBRACE,
    STATE(505),
    1,
    sym_comment,
    [15387] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1975),
    1,
    anon_sym_SEMI,
    STATE(506),
    1,
    sym_comment,
    [15400] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1977),
    1,
    anon_sym_SEMI,
    STATE(507),
    1,
    sym_comment,
    [15413] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1979),
    1,
    anon_sym_SEMI,
    STATE(508),
    1,
    sym_comment,
    [15426] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1981),
    1,
    anon_sym_LBRACE,
    STATE(509),
    1,
    sym_comment,
    [15439] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1983),
    1,
    anon_sym_SEMI,
    STATE(510),
    1,
    sym_comment,
    [15452] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1985),
    1,
    anon_sym_SEMI,
    STATE(511),
    1,
    sym_comment,
    [15465] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1557),
    1,
    anon_sym_SEMI,
    STATE(512),
    1,
    sym_comment,
    [15478] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1987),
    1,
    anon_sym_SEMI,
    STATE(513),
    1,
    sym_comment,
    [15491] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1989),
    1,
    anon_sym_GT,
    STATE(514),
    1,
    sym_comment,
    [15504] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1559),
    1,
    anon_sym_SEMI,
    STATE(515),
    1,
    sym_comment,
    [15517] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1991),
    1,
    anon_sym_RBRACE,
    STATE(516),
    1,
    sym_comment,
    [15530] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1993),
    1,
    anon_sym_SEMI,
    STATE(517),
    1,
    sym_comment,
    [15543] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1995),
    1,
    sym_identifier,
    STATE(518),
    1,
    sym_comment,
    [15556] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1997),
    1,
    anon_sym_SEMI,
    STATE(519),
    1,
    sym_comment,
    [15569] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1999),
    1,
    anon_sym_SEMI,
    STATE(520),
    1,
    sym_comment,
    [15582] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2001),
    1,
    anon_sym_RBRACE,
    STATE(521),
    1,
    sym_comment,
    [15595] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2003),
    1,
    anon_sym_SEMI,
    STATE(522),
    1,
    sym_comment,
    [15608] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2005),
    1,
    anon_sym_SEMI,
    STATE(523),
    1,
    sym_comment,
    [15621] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2007),
    1,
    anon_sym_SEMI,
    STATE(524),
    1,
    sym_comment,
    [15634] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2009),
    1,
    anon_sym_LBRACE,
    STATE(525),
    1,
    sym_comment,
    [15647] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2011),
    1,
    anon_sym_SEMI,
    STATE(526),
    1,
    sym_comment,
    [15660] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2013),
    1,
    sym_identifier,
    STATE(527),
    1,
    sym_comment,
    [15673] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2015),
    1,
    anon_sym_SEMI,
    STATE(528),
    1,
    sym_comment,
    [15686] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2017),
    1,
    anon_sym_LBRACE,
    STATE(529),
    1,
    sym_comment,
    [15699] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2019),
    1,
    anon_sym_SEMI,
    STATE(530),
    1,
    sym_comment,
    [15712] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2021),
    1,
    anon_sym_LPAREN,
    STATE(531),
    1,
    sym_comment,
    [15725] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1731),
    1,
    anon_sym_SEMI,
    STATE(532),
    1,
    sym_comment,
    [15738] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2023),
    1,
    sym_identifier,
    STATE(533),
    1,
    sym_comment,
    [15751] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2025),
    1,
    anon_sym_GT,
    STATE(534),
    1,
    sym_comment,
    [15764] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(420),
    1,
    anon_sym_RBRACE,
    STATE(535),
    1,
    sym_comment,
    [15777] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2027),
    1,
    anon_sym_LBRACE,
    STATE(536),
    1,
    sym_comment,
    [15790] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2029),
    1,
    anon_sym_SEMI,
    STATE(537),
    1,
    sym_comment,
    [15803] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2031),
    1,
    anon_sym_SEMI,
    STATE(538),
    1,
    sym_comment,
    [15816] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1725),
    1,
    anon_sym_SEMI,
    STATE(539),
    1,
    sym_comment,
    [15829] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2033),
    1,
    anon_sym_GT,
    STATE(540),
    1,
    sym_comment,
    [15842] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2035),
    1,
    anon_sym_void,
    STATE(541),
    1,
    sym_comment,
    [15855] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2037),
    1,
    anon_sym_RPAREN,
    STATE(542),
    1,
    sym_comment,
    [15868] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2039),
    1,
    anon_sym_attribute,
    STATE(543),
    1,
    sym_comment,
    [15881] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2041),
    1,
    sym_identifier,
    STATE(544),
    1,
    sym_comment,
    [15894] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2043),
    1,
    anon_sym_SEMI,
    STATE(545),
    1,
    sym_comment,
    [15907] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1791),
    1,
    anon_sym_valuetype,
    STATE(546),
    1,
    sym_comment,
    [15920] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2045),
    1,
    anon_sym_SEMI,
    STATE(547),
    1,
    sym_comment,
    [15933] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2047),
    1,
    anon_sym_SEMI,
    STATE(548),
    1,
    sym_comment,
    [15946] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2049),
    1,
    anon_sym_LBRACE,
    STATE(549),
    1,
    sym_comment,
    [15959] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2051),
    1,
    anon_sym_manages,
    STATE(550),
    1,
    sym_comment,
    [15972] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2053),
    1,
    anon_sym_GT,
    STATE(551),
    1,
    sym_comment,
    [15985] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2055),
    1,
    anon_sym_LBRACE,
    STATE(552),
    1,
    sym_comment,
    [15998] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2057),
    1,
    anon_sym_DQUOTE,
    STATE(553),
    1,
    sym_comment,
    [16011] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2059),
    1,
    aux_sym_string_literal_token1,
    STATE(554),
    1,
    sym_comment,
    [16024] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2061),
    1,
    anon_sym_SEMI,
    STATE(555),
    1,
    sym_comment,
    [16037] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1715),
    1,
    anon_sym_SEMI,
    STATE(556),
    1,
    sym_comment,
    [16050] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2063),
    1,
    anon_sym_COMMA,
    STATE(557),
    1,
    sym_comment,
    [16063] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2065),
    1,
    anon_sym_SEMI,
    STATE(558),
    1,
    sym_comment,
    [16076] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2067),
    1,
    anon_sym_COMMA,
    STATE(559),
    1,
    sym_comment,
    [16089] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2069),
    1,
    sym_identifier,
    STATE(560),
    1,
    sym_comment,
    [16102] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1207),
    1,
    anon_sym_EQ,
    STATE(561),
    1,
    sym_comment,
    [16115] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1740),
    1,
    anon_sym_SEMI,
    STATE(562),
    1,
    sym_comment,
    [16128] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2071),
    1,
    anon_sym_RPAREN,
    STATE(563),
    1,
    sym_comment,
    [16141] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2073),
    1,
    anon_sym_SEMI,
    STATE(564),
    1,
    sym_comment,
    [16154] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2075),
    1,
    anon_sym_DQUOTE,
    STATE(565),
    1,
    sym_comment,
    [16167] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2077),
    1,
    anon_sym_EQ,
    STATE(566),
    1,
    sym_comment,
    [16180] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2079),
    1,
    anon_sym_LPAREN,
    STATE(567),
    1,
    sym_comment,
    [16193] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2081),
    1,
    sym_identifier,
    STATE(568),
    1,
    sym_comment,
    [16206] = 4,
    ACTIONS(1399),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2083),
    1,
    aux_sym_comment_token3,
    STATE(569),
    1,
    sym_comment,
    [16219] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2085),
    1,
    aux_sym_string_literal_token1,
    STATE(570),
    1,
    sym_comment,
    [16232] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2087),
    1,
    anon_sym_GT,
    STATE(571),
    1,
    sym_comment,
    [16245] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2089),
    1,
    anon_sym_GT,
    STATE(572),
    1,
    sym_comment,
    [16258] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2091),
    1,
    anon_sym_LBRACE,
    STATE(573),
    1,
    sym_comment,
    [16271] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2093),
    1,
    anon_sym_SEMI,
    STATE(574),
    1,
    sym_comment,
    [16284] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2095),
    1,
    sym_identifier,
    STATE(575),
    1,
    sym_comment,
    [16297] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2097),
    1,
    anon_sym_SEMI,
    STATE(576),
    1,
    sym_comment,
    [16310] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2099),
    1,
    sym_identifier,
    STATE(577),
    1,
    sym_comment,
    [16323] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2101),
    1,
    anon_sym_LPAREN,
    STATE(578),
    1,
    sym_comment,
    [16336] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2103),
    1,
    anon_sym_COLON,
    STATE(579),
    1,
    sym_comment,
    [16349] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2105),
    1,
    sym_identifier,
    STATE(580),
    1,
    sym_comment,
    [16362] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2107),
    1,
    sym_identifier,
    STATE(581),
    1,
    sym_comment,
    [16375] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2109),
    1,
    anon_sym_SEMI,
    STATE(582),
    1,
    sym_comment,
    [16388] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2111),
    1,
    anon_sym_SEMI,
    STATE(583),
    1,
    sym_comment,
    [16401] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2113),
    1,
    anon_sym_GT,
    STATE(584),
    1,
    sym_comment,
    [16414] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1867),
    1,
    anon_sym_SEMI,
    STATE(585),
    1,
    sym_comment,
    [16427] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2115),
    1,
    anon_sym_SQUOTE,
    STATE(586),
    1,
    sym_comment,
    [16440] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2117),
    1,
    anon_sym_SEMI,
    STATE(587),
    1,
    sym_comment,
    [16453] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2119),
    1,
    anon_sym_LBRACE,
    STATE(588),
    1,
    sym_comment,
    [16466] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1941),
    1,
    sym_identifier,
    STATE(589),
    1,
    sym_comment,
    [16479] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2121),
    1,
    anon_sym_GT,
    STATE(590),
    1,
    sym_comment,
    [16492] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2123),
    1,
    anon_sym_LPAREN,
    STATE(591),
    1,
    sym_comment,
    [16505] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2125),
    1,
    anon_sym_SEMI,
    STATE(592),
    1,
    sym_comment,
    [16518] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1943),
    1,
    anon_sym_DQUOTE,
    STATE(593),
    1,
    sym_comment,
    [16531] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2127),
    1,
    anon_sym_SEMI,
    STATE(594),
    1,
    sym_comment,
    [16544] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2129),
    1,
    sym_identifier,
    STATE(595),
    1,
    sym_comment,
    [16557] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2131),
    1,
    anon_sym_SEMI,
    STATE(596),
    1,
    sym_comment,
    [16570] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2133),
    1,
    sym_identifier,
    STATE(597),
    1,
    sym_comment,
    [16583] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2135),
    1,
    anon_sym_LT,
    STATE(598),
    1,
    sym_comment,
    [16596] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2137),
    1,
    anon_sym_LT,
    STATE(599),
    1,
    sym_comment,
    [16609] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2139),
    1,
    sym_identifier,
    STATE(600),
    1,
    sym_comment,
    [16622] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2141),
    1,
    anon_sym_SEMI,
    STATE(601),
    1,
    sym_comment,
    [16635] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2143),
    1,
    anon_sym_SEMI,
    STATE(602),
    1,
    sym_comment,
    [16648] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2145),
    1,
    anon_sym_SEMI,
    STATE(603),
    1,
    sym_comment,
    [16661] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2147),
    1,
    sym_identifier,
    STATE(604),
    1,
    sym_comment,
    [16674] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2149),
    1,
    anon_sym_LPAREN,
    STATE(605),
    1,
    sym_comment,
    [16687] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2151),
    1,
    anon_sym_SEMI,
    STATE(606),
    1,
    sym_comment,
    [16700] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2153),
    1,
    anon_sym_SEMI,
    STATE(607),
    1,
    sym_comment,
    [16713] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2155),
    1,
    anon_sym_SEMI,
    STATE(608),
    1,
    sym_comment,
    [16726] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2157),
    1,
    anon_sym_RBRACE,
    STATE(609),
    1,
    sym_comment,
    [16739] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2159),
    1,
    anon_sym_SEMI,
    STATE(610),
    1,
    sym_comment,
    [16752] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2161),
    1,
    anon_sym_SEMI,
    STATE(611),
    1,
    sym_comment,
    [16765] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2163),
    1,
    anon_sym_SEMI,
    STATE(612),
    1,
    sym_comment,
    [16778] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1935),
    1,
    anon_sym_LT,
    STATE(613),
    1,
    sym_comment,
    [16791] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2165),
    1,
    anon_sym_COLON,
    STATE(614),
    1,
    sym_comment,
    [16804] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2167),
    1,
    sym_identifier,
    STATE(615),
    1,
    sym_comment,
    [16817] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2169),
    1,
    anon_sym_SEMI,
    STATE(616),
    1,
    sym_comment,
    [16830] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2171),
    1,
    anon_sym_SEMI,
    STATE(617),
    1,
    sym_comment,
    [16843] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1843),
    1,
    sym_identifier,
    STATE(618),
    1,
    sym_comment,
    [16856] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2173),
    1,
    anon_sym_LBRACE,
    STATE(619),
    1,
    sym_comment,
    [16869] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2175),
    1,
    anon_sym_SEMI,
    STATE(620),
    1,
    sym_comment,
    [16882] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2177),
    1,
    sym_identifier,
    STATE(621),
    1,
    sym_comment,
    [16895] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2179),
    1,
    anon_sym_SEMI,
    STATE(622),
    1,
    sym_comment,
    [16908] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2181),
    1,
    anon_sym_SEMI,
    STATE(623),
    1,
    sym_comment,
    [16921] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2183),
    1,
    anon_sym_SEMI,
    STATE(624),
    1,
    sym_comment,
    [16934] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2185),
    1,
    anon_sym_RPAREN,
    STATE(625),
    1,
    sym_comment,
    [16947] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2187),
    1,
    anon_sym_LBRACE,
    STATE(626),
    1,
    sym_comment,
    [16960] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2189),
    1,
    aux_sym_char_literal_token1,
    STATE(627),
    1,
    sym_comment,
    [16973] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2191),
    1,
    sym_identifier,
    STATE(628),
    1,
    sym_comment,
    [16986] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2193),
    1,
    sym_identifier,
    STATE(629),
    1,
    sym_comment,
    [16999] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2195),
    1,
    anon_sym_GT,
    STATE(630),
    1,
    sym_comment,
    [17012] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2197),
    1,
    anon_sym_LBRACE,
    STATE(631),
    1,
    sym_comment,
    [17025] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2199),
    1,
    anon_sym_SEMI,
    STATE(632),
    1,
    sym_comment,
    [17038] = 4,
    ACTIONS(1399),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2201),
    1,
    aux_sym_preproc_call_token1,
    STATE(633),
    1,
    sym_comment,
    [17051] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2203),
    1,
    anon_sym_SQUOTE,
    STATE(634),
    1,
    sym_comment,
    [17064] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1410),
    1,
    anon_sym_SLASH,
    STATE(635),
    1,
    sym_comment,
    [17077] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2205),
    1,
    sym_identifier,
    STATE(636),
    1,
    sym_comment,
    [17090] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2207),
    1,
    sym_identifier,
    STATE(637),
    1,
    sym_comment,
    [17103] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2209),
    1,
    anon_sym_LBRACE,
    STATE(638),
    1,
    sym_comment,
    [17116] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2211),
    1,
    sym_identifier,
    STATE(639),
    1,
    sym_comment,
    [17129] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2213),
    1,
    anon_sym_LBRACE,
    STATE(640),
    1,
    sym_comment,
    [17142] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2215),
    1,
    sym_identifier,
    STATE(641),
    1,
    sym_comment,
    [17155] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2217),
    1,
    anon_sym_LPAREN,
    STATE(642),
    1,
    sym_comment,
    [17168] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2219),
    1,
    anon_sym_LBRACE,
    STATE(643),
    1,
    sym_comment,
    [17181] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2221),
    1,
    anon_sym_SEMI,
    STATE(644),
    1,
    sym_comment,
    [17194] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2223),
    1,
    anon_sym_SEMI,
    STATE(645),
    1,
    sym_comment,
    [17207] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2225),
    1,
    anon_sym_SEMI,
    STATE(646),
    1,
    sym_comment,
    [17220] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2227),
    1,
    anon_sym_enum,
    STATE(647),
    1,
    sym_comment,
    [17233] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2229),
    1,
    anon_sym_LBRACE,
    STATE(648),
    1,
    sym_comment,
    [17246] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2231),
    1,
    sym_identifier,
    STATE(649),
    1,
    sym_comment,
    [17259] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2233),
    1,
    anon_sym_SEMI,
    STATE(650),
    1,
    sym_comment,
    [17272] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2235),
    1,
    anon_sym_LBRACE,
    STATE(651),
    1,
    sym_comment,
    [17285] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2237),
    1,
    anon_sym_SEMI,
    STATE(652),
    1,
    sym_comment,
    [17298] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2239),
    1,
    anon_sym_SEMI,
    STATE(653),
    1,
    sym_comment,
    [17311] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2241),
    1,
    sym_identifier,
    STATE(654),
    1,
    sym_comment,
    [17324] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2243),
    1,
    anon_sym_SEMI,
    STATE(655),
    1,
    sym_comment,
    [17337] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2245),
    1,
    ts_builtin_sym_end,
    STATE(656),
    1,
    sym_comment,
    [17350] = 4,
    ACTIONS(1399),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2247),
    1,
    aux_sym_predefine_token1,
    STATE(657),
    1,
    sym_comment,
    [17363] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1442),
    1,
    anon_sym_LBRACE,
    STATE(658),
    1,
    sym_comment,
    [17376] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2249),
    1,
    sym_identifier,
    STATE(659),
    1,
    sym_comment,
    [17389] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2251),
    1,
    sym_identifier,
    STATE(660),
    1,
    sym_comment,
    [17402] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2253),
    1,
    anon_sym_enum,
    STATE(661),
    1,
    sym_comment,
    [17415] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1793),
    1,
    anon_sym_RPAREN,
    STATE(662),
    1,
    sym_comment,
    [17428] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2255),
    1,
    anon_sym_valuetype,
    STATE(663),
    1,
    sym_comment,
    [17441] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2257),
    1,
    sym_identifier,
    STATE(664),
    1,
    sym_comment,
    [17454] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2259),
    1,
    sym_identifier,
    STATE(665),
    1,
    sym_comment,
    [17467] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2261),
    1,
    sym_identifier,
    STATE(666),
    1,
    sym_comment,
    [17480] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2263),
    1,
    sym_identifier,
    STATE(667),
    1,
    sym_comment,
    [17493] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2265),
    1,
    anon_sym_RBRACK,
    STATE(668),
    1,
    sym_comment,
    [17506] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2267),
    1,
    sym_identifier,
    STATE(669),
    1,
    sym_comment,
    [17519] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2269),
    1,
    sym_identifier,
    STATE(670),
    1,
    sym_comment,
    [17532] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2271),
    1,
    sym_identifier,
    STATE(671),
    1,
    sym_comment,
    [17545] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1758),
    1,
    anon_sym_SEMI,
    STATE(672),
    1,
    sym_comment,
    [17558] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2273),
    1,
    sym_identifier,
    STATE(673),
    1,
    sym_comment,
    [17571] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2275),
    1,
    anon_sym_RPAREN,
    STATE(674),
    1,
    sym_comment,
    [17584] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2277),
    1,
    sym_identifier,
    STATE(675),
    1,
    sym_comment,
    [17597] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2279),
    1,
    sym_identifier,
    STATE(676),
    1,
    sym_comment,
    [17610] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2281),
    1,
    sym_identifier,
    STATE(677),
    1,
    sym_comment,
    [17623] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1771),
    1,
    anon_sym_SEMI,
    STATE(678),
    1,
    sym_comment,
    [17636] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2283),
    1,
    sym_identifier,
    STATE(679),
    1,
    sym_comment,
    [17649] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2285),
    1,
    anon_sym_RPAREN,
    STATE(680),
    1,
    sym_comment,
    [17662] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2287),
    1,
    anon_sym_RPAREN,
    STATE(681),
    1,
    sym_comment,
    [17675] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2289),
    1,
    sym_identifier,
    STATE(682),
    1,
    sym_comment,
    [17688] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2291),
    1,
    anon_sym_RPAREN,
    STATE(683),
    1,
    sym_comment,
    [17701] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2293),
    1,
    anon_sym_SEMI,
    STATE(684),
    1,
    sym_comment,
    [17714] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1789),
    1,
    anon_sym_interface,
    STATE(685),
    1,
    sym_comment,
    [17727] = 1,
    ACTIONS(2295),
    1,
    ts_builtin_sym_end,
    [17731] = 1,
    ACTIONS(2297),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(29)] = 0,
    [SMALL_STATE(30)] = 142,
    [SMALL_STATE(31)] = 284,
    [SMALL_STATE(32)] = 426,
    [SMALL_STATE(33)] = 568,
    [SMALL_STATE(34)] = 712,
    [SMALL_STATE(35)] = 856,
    [SMALL_STATE(36)] = 998,
    [SMALL_STATE(37)] = 1140,
    [SMALL_STATE(38)] = 1282,
    [SMALL_STATE(39)] = 1424,
    [SMALL_STATE(40)] = 1566,
    [SMALL_STATE(41)] = 1706,
    [SMALL_STATE(42)] = 1848,
    [SMALL_STATE(43)] = 1990,
    [SMALL_STATE(44)] = 2123,
    [SMALL_STATE(45)] = 2192,
    [SMALL_STATE(46)] = 2319,
    [SMALL_STATE(47)] = 2388,
    [SMALL_STATE(48)] = 2457,
    [SMALL_STATE(49)] = 2526,
    [SMALL_STATE(50)] = 2595,
    [SMALL_STATE(51)] = 2664,
    [SMALL_STATE(52)] = 2733,
    [SMALL_STATE(53)] = 2863,
    [SMALL_STATE(54)] = 2987,
    [SMALL_STATE(55)] = 3054,
    [SMALL_STATE(56)] = 3121,
    [SMALL_STATE(57)] = 3188,
    [SMALL_STATE(58)] = 3255,
    [SMALL_STATE(59)] = 3379,
    [SMALL_STATE(60)] = 3503,
    [SMALL_STATE(61)] = 3627,
    [SMALL_STATE(62)] = 3751,
    [SMALL_STATE(63)] = 3875,
    [SMALL_STATE(64)] = 3941,
    [SMALL_STATE(65)] = 4065,
    [SMALL_STATE(66)] = 4189,
    [SMALL_STATE(67)] = 4255,
    [SMALL_STATE(68)] = 4379,
    [SMALL_STATE(69)] = 4503,
    [SMALL_STATE(70)] = 4608,
    [SMALL_STATE(71)] = 4713,
    [SMALL_STATE(72)] = 4768,
    [SMALL_STATE(73)] = 4823,
    [SMALL_STATE(74)] = 4875,
    [SMALL_STATE(75)] = 4922,
    [SMALL_STATE(76)] = 4969,
    [SMALL_STATE(77)] = 5016,
    [SMALL_STATE(78)] = 5063,
    [SMALL_STATE(79)] = 5110,
    [SMALL_STATE(80)] = 5157,
    [SMALL_STATE(81)] = 5204,
    [SMALL_STATE(82)] = 5251,
    [SMALL_STATE(83)] = 5298,
    [SMALL_STATE(84)] = 5345,
    [SMALL_STATE(85)] = 5392,
    [SMALL_STATE(86)] = 5439,
    [SMALL_STATE(87)] = 5488,
    [SMALL_STATE(88)] = 5535,
    [SMALL_STATE(89)] = 5581,
    [SMALL_STATE(90)] = 5627,
    [SMALL_STATE(91)] = 5710,
    [SMALL_STATE(92)] = 5755,
    [SMALL_STATE(93)] = 5799,
    [SMALL_STATE(94)] = 5843,
    [SMALL_STATE(95)] = 5887,
    [SMALL_STATE(96)] = 5973,
    [SMALL_STATE(97)] = 6059,
    [SMALL_STATE(98)] = 6145,
    [SMALL_STATE(99)] = 6191,
    [SMALL_STATE(100)] = 6277,
    [SMALL_STATE(101)] = 6360,
    [SMALL_STATE(102)] = 6443,
    [SMALL_STATE(103)] = 6526,
    [SMALL_STATE(104)] = 6567,
    [SMALL_STATE(105)] = 6650,
    [SMALL_STATE(106)] = 6733,
    [SMALL_STATE(107)] = 6816,
    [SMALL_STATE(108)] = 6899,
    [SMALL_STATE(109)] = 6940,
    [SMALL_STATE(110)] = 6981,
    [SMALL_STATE(111)] = 7061,
    [SMALL_STATE(112)] = 7101,
    [SMALL_STATE(113)] = 7181,
    [SMALL_STATE(114)] = 7221,
    [SMALL_STATE(115)] = 7301,
    [SMALL_STATE(116)] = 7381,
    [SMALL_STATE(117)] = 7421,
    [SMALL_STATE(118)] = 7501,
    [SMALL_STATE(119)] = 7541,
    [SMALL_STATE(120)] = 7581,
    [SMALL_STATE(121)] = 7621,
    [SMALL_STATE(122)] = 7701,
    [SMALL_STATE(123)] = 7769,
    [SMALL_STATE(124)] = 7849,
    [SMALL_STATE(125)] = 7889,
    [SMALL_STATE(126)] = 7963,
    [SMALL_STATE(127)] = 8034,
    [SMALL_STATE(128)] = 8102,
    [SMALL_STATE(129)] = 8167,
    [SMALL_STATE(130)] = 8229,
    [SMALL_STATE(131)] = 8288,
    [SMALL_STATE(132)] = 8321,
    [SMALL_STATE(133)] = 8354,
    [SMALL_STATE(134)] = 8384,
    [SMALL_STATE(135)] = 8414,
    [SMALL_STATE(136)] = 8444,
    [SMALL_STATE(137)] = 8474,
    [SMALL_STATE(138)] = 8508,
    [SMALL_STATE(139)] = 8538,
    [SMALL_STATE(140)] = 8568,
    [SMALL_STATE(141)] = 8602,
    [SMALL_STATE(142)] = 8632,
    [SMALL_STATE(143)] = 8662,
    [SMALL_STATE(144)] = 8692,
    [SMALL_STATE(145)] = 8722,
    [SMALL_STATE(146)] = 8752,
    [SMALL_STATE(147)] = 8782,
    [SMALL_STATE(148)] = 8828,
    [SMALL_STATE(149)] = 8871,
    [SMALL_STATE(150)] = 8900,
    [SMALL_STATE(151)] = 8929,
    [SMALL_STATE(152)] = 8958,
    [SMALL_STATE(153)] = 8991,
    [SMALL_STATE(154)] = 9031,
    [SMALL_STATE(155)] = 9069,
    [SMALL_STATE(156)] = 9096,
    [SMALL_STATE(157)] = 9123,
    [SMALL_STATE(158)] = 9161,
    [SMALL_STATE(159)] = 9184,
    [SMALL_STATE(160)] = 9207,
    [SMALL_STATE(161)] = 9230,
    [SMALL_STATE(162)] = 9254,
    [SMALL_STATE(163)] = 9278,
    [SMALL_STATE(164)] = 9312,
    [SMALL_STATE(165)] = 9334,
    [SMALL_STATE(166)] = 9356,
    [SMALL_STATE(167)] = 9375,
    [SMALL_STATE(168)] = 9404,
    [SMALL_STATE(169)] = 9435,
    [SMALL_STATE(170)] = 9456,
    [SMALL_STATE(171)] = 9474,
    [SMALL_STATE(172)] = 9500,
    [SMALL_STATE(173)] = 9524,
    [SMALL_STATE(174)] = 9542,
    [SMALL_STATE(175)] = 9560,
    [SMALL_STATE(176)] = 9588,
    [SMALL_STATE(177)] = 9612,
    [SMALL_STATE(178)] = 9630,
    [SMALL_STATE(179)] = 9658,
    [SMALL_STATE(180)] = 9676,
    [SMALL_STATE(181)] = 9704,
    [SMALL_STATE(182)] = 9726,
    [SMALL_STATE(183)] = 9754,
    [SMALL_STATE(184)] = 9782,
    [SMALL_STATE(185)] = 9810,
    [SMALL_STATE(186)] = 9835,
    [SMALL_STATE(187)] = 9860,
    [SMALL_STATE(188)] = 9885,
    [SMALL_STATE(189)] = 9910,
    [SMALL_STATE(190)] = 9933,
    [SMALL_STATE(191)] = 9950,
    [SMALL_STATE(192)] = 9975,
    [SMALL_STATE(193)] = 10000,
    [SMALL_STATE(194)] = 10017,
    [SMALL_STATE(195)] = 10042,
    [SMALL_STATE(196)] = 10067,
    [SMALL_STATE(197)] = 10090,
    [SMALL_STATE(198)] = 10115,
    [SMALL_STATE(199)] = 10140,
    [SMALL_STATE(200)] = 10165,
    [SMALL_STATE(201)] = 10190,
    [SMALL_STATE(202)] = 10215,
    [SMALL_STATE(203)] = 10238,
    [SMALL_STATE(204)] = 10261,
    [SMALL_STATE(205)] = 10284,
    [SMALL_STATE(206)] = 10307,
    [SMALL_STATE(207)] = 10329,
    [SMALL_STATE(208)] = 10351,
    [SMALL_STATE(209)] = 10373,
    [SMALL_STATE(210)] = 10395,
    [SMALL_STATE(211)] = 10415,
    [SMALL_STATE(212)] = 10435,
    [SMALL_STATE(213)] = 10455,
    [SMALL_STATE(214)] = 10477,
    [SMALL_STATE(215)] = 10497,
    [SMALL_STATE(216)] = 10515,
    [SMALL_STATE(217)] = 10537,
    [SMALL_STATE(218)] = 10559,
    [SMALL_STATE(219)] = 10581,
    [SMALL_STATE(220)] = 10603,
    [SMALL_STATE(221)] = 10625,
    [SMALL_STATE(222)] = 10645,
    [SMALL_STATE(223)] = 10667,
    [SMALL_STATE(224)] = 10689,
    [SMALL_STATE(225)] = 10711,
    [SMALL_STATE(226)] = 10729,
    [SMALL_STATE(227)] = 10751,
    [SMALL_STATE(228)] = 10773,
    [SMALL_STATE(229)] = 10795,
    [SMALL_STATE(230)] = 10815,
    [SMALL_STATE(231)] = 10837,
    [SMALL_STATE(232)] = 10855,
    [SMALL_STATE(233)] = 10877,
    [SMALL_STATE(234)] = 10899,
    [SMALL_STATE(235)] = 10917,
    [SMALL_STATE(236)] = 10939,
    [SMALL_STATE(237)] = 10961,
    [SMALL_STATE(238)] = 10981,
    [SMALL_STATE(239)] = 11003,
    [SMALL_STATE(240)] = 11025,
    [SMALL_STATE(241)] = 11041,
    [SMALL_STATE(242)] = 11057,
    [SMALL_STATE(243)] = 11073,
    [SMALL_STATE(244)] = 11093,
    [SMALL_STATE(245)] = 11113,
    [SMALL_STATE(246)] = 11129,
    [SMALL_STATE(247)] = 11149,
    [SMALL_STATE(248)] = 11167,
    [SMALL_STATE(249)] = 11187,
    [SMALL_STATE(250)] = 11209,
    [SMALL_STATE(251)] = 11225,
    [SMALL_STATE(252)] = 11245,
    [SMALL_STATE(253)] = 11267,
    [SMALL_STATE(254)] = 11283,
    [SMALL_STATE(255)] = 11303,
    [SMALL_STATE(256)] = 11325,
    [SMALL_STATE(257)] = 11341,
    [SMALL_STATE(258)] = 11357,
    [SMALL_STATE(259)] = 11373,
    [SMALL_STATE(260)] = 11389,
    [SMALL_STATE(261)] = 11411,
    [SMALL_STATE(262)] = 11427,
    [SMALL_STATE(263)] = 11443,
    [SMALL_STATE(264)] = 11459,
    [SMALL_STATE(265)] = 11475,
    [SMALL_STATE(266)] = 11491,
    [SMALL_STATE(267)] = 11513,
    [SMALL_STATE(268)] = 11532,
    [SMALL_STATE(269)] = 11551,
    [SMALL_STATE(270)] = 11570,
    [SMALL_STATE(271)] = 11587,
    [SMALL_STATE(272)] = 11606,
    [SMALL_STATE(273)] = 11623,
    [SMALL_STATE(274)] = 11638,
    [SMALL_STATE(275)] = 11653,
    [SMALL_STATE(276)] = 11668,
    [SMALL_STATE(277)] = 11685,
    [SMALL_STATE(278)] = 11704,
    [SMALL_STATE(279)] = 11721,
    [SMALL_STATE(280)] = 11740,
    [SMALL_STATE(281)] = 11759,
    [SMALL_STATE(282)] = 11778,
    [SMALL_STATE(283)] = 11797,
    [SMALL_STATE(284)] = 11816,
    [SMALL_STATE(285)] = 11835,
    [SMALL_STATE(286)] = 11854,
    [SMALL_STATE(287)] = 11873,
    [SMALL_STATE(288)] = 11888,
    [SMALL_STATE(289)] = 11905,
    [SMALL_STATE(290)] = 11922,
    [SMALL_STATE(291)] = 11941,
    [SMALL_STATE(292)] = 11958,
    [SMALL_STATE(293)] = 11977,
    [SMALL_STATE(294)] = 11996,
    [SMALL_STATE(295)] = 12015,
    [SMALL_STATE(296)] = 12034,
    [SMALL_STATE(297)] = 12049,
    [SMALL_STATE(298)] = 12068,
    [SMALL_STATE(299)] = 12087,
    [SMALL_STATE(300)] = 12106,
    [SMALL_STATE(301)] = 12123,
    [SMALL_STATE(302)] = 12142,
    [SMALL_STATE(303)] = 12157,
    [SMALL_STATE(304)] = 12174,
    [SMALL_STATE(305)] = 12189,
    [SMALL_STATE(306)] = 12208,
    [SMALL_STATE(307)] = 12223,
    [SMALL_STATE(308)] = 12240,
    [SMALL_STATE(309)] = 12255,
    [SMALL_STATE(310)] = 12274,
    [SMALL_STATE(311)] = 12293,
    [SMALL_STATE(312)] = 12310,
    [SMALL_STATE(313)] = 12327,
    [SMALL_STATE(314)] = 12342,
    [SMALL_STATE(315)] = 12361,
    [SMALL_STATE(316)] = 12380,
    [SMALL_STATE(317)] = 12399,
    [SMALL_STATE(318)] = 12418,
    [SMALL_STATE(319)] = 12437,
    [SMALL_STATE(320)] = 12456,
    [SMALL_STATE(321)] = 12473,
    [SMALL_STATE(322)] = 12492,
    [SMALL_STATE(323)] = 12509,
    [SMALL_STATE(324)] = 12528,
    [SMALL_STATE(325)] = 12545,
    [SMALL_STATE(326)] = 12560,
    [SMALL_STATE(327)] = 12579,
    [SMALL_STATE(328)] = 12598,
    [SMALL_STATE(329)] = 12617,
    [SMALL_STATE(330)] = 12636,
    [SMALL_STATE(331)] = 12655,
    [SMALL_STATE(332)] = 12672,
    [SMALL_STATE(333)] = 12691,
    [SMALL_STATE(334)] = 12710,
    [SMALL_STATE(335)] = 12725,
    [SMALL_STATE(336)] = 12744,
    [SMALL_STATE(337)] = 12759,
    [SMALL_STATE(338)] = 12778,
    [SMALL_STATE(339)] = 12797,
    [SMALL_STATE(340)] = 12816,
    [SMALL_STATE(341)] = 12831,
    [SMALL_STATE(342)] = 12850,
    [SMALL_STATE(343)] = 12869,
    [SMALL_STATE(344)] = 12888,
    [SMALL_STATE(345)] = 12907,
    [SMALL_STATE(346)] = 12926,
    [SMALL_STATE(347)] = 12945,
    [SMALL_STATE(348)] = 12964,
    [SMALL_STATE(349)] = 12983,
    [SMALL_STATE(350)] = 13002,
    [SMALL_STATE(351)] = 13017,
    [SMALL_STATE(352)] = 13032,
    [SMALL_STATE(353)] = 13051,
    [SMALL_STATE(354)] = 13070,
    [SMALL_STATE(355)] = 13089,
    [SMALL_STATE(356)] = 13108,
    [SMALL_STATE(357)] = 13123,
    [SMALL_STATE(358)] = 13142,
    [SMALL_STATE(359)] = 13161,
    [SMALL_STATE(360)] = 13178,
    [SMALL_STATE(361)] = 13197,
    [SMALL_STATE(362)] = 13216,
    [SMALL_STATE(363)] = 13235,
    [SMALL_STATE(364)] = 13254,
    [SMALL_STATE(365)] = 13273,
    [SMALL_STATE(366)] = 13292,
    [SMALL_STATE(367)] = 13311,
    [SMALL_STATE(368)] = 13330,
    [SMALL_STATE(369)] = 13349,
    [SMALL_STATE(370)] = 13368,
    [SMALL_STATE(371)] = 13387,
    [SMALL_STATE(372)] = 13406,
    [SMALL_STATE(373)] = 13425,
    [SMALL_STATE(374)] = 13444,
    [SMALL_STATE(375)] = 13461,
    [SMALL_STATE(376)] = 13480,
    [SMALL_STATE(377)] = 13499,
    [SMALL_STATE(378)] = 13518,
    [SMALL_STATE(379)] = 13537,
    [SMALL_STATE(380)] = 13556,
    [SMALL_STATE(381)] = 13571,
    [SMALL_STATE(382)] = 13590,
    [SMALL_STATE(383)] = 13605,
    [SMALL_STATE(384)] = 13619,
    [SMALL_STATE(385)] = 13635,
    [SMALL_STATE(386)] = 13649,
    [SMALL_STATE(387)] = 13665,
    [SMALL_STATE(388)] = 13681,
    [SMALL_STATE(389)] = 13697,
    [SMALL_STATE(390)] = 13713,
    [SMALL_STATE(391)] = 13727,
    [SMALL_STATE(392)] = 13743,
    [SMALL_STATE(393)] = 13757,
    [SMALL_STATE(394)] = 13771,
    [SMALL_STATE(395)] = 13785,
    [SMALL_STATE(396)] = 13801,
    [SMALL_STATE(397)] = 13817,
    [SMALL_STATE(398)] = 13831,
    [SMALL_STATE(399)] = 13845,
    [SMALL_STATE(400)] = 13859,
    [SMALL_STATE(401)] = 13873,
    [SMALL_STATE(402)] = 13887,
    [SMALL_STATE(403)] = 13901,
    [SMALL_STATE(404)] = 13917,
    [SMALL_STATE(405)] = 13931,
    [SMALL_STATE(406)] = 13947,
    [SMALL_STATE(407)] = 13961,
    [SMALL_STATE(408)] = 13975,
    [SMALL_STATE(409)] = 13989,
    [SMALL_STATE(410)] = 14005,
    [SMALL_STATE(411)] = 14019,
    [SMALL_STATE(412)] = 14035,
    [SMALL_STATE(413)] = 14049,
    [SMALL_STATE(414)] = 14063,
    [SMALL_STATE(415)] = 14077,
    [SMALL_STATE(416)] = 14091,
    [SMALL_STATE(417)] = 14107,
    [SMALL_STATE(418)] = 14121,
    [SMALL_STATE(419)] = 14135,
    [SMALL_STATE(420)] = 14149,
    [SMALL_STATE(421)] = 14163,
    [SMALL_STATE(422)] = 14179,
    [SMALL_STATE(423)] = 14193,
    [SMALL_STATE(424)] = 14207,
    [SMALL_STATE(425)] = 14221,
    [SMALL_STATE(426)] = 14235,
    [SMALL_STATE(427)] = 14251,
    [SMALL_STATE(428)] = 14265,
    [SMALL_STATE(429)] = 14279,
    [SMALL_STATE(430)] = 14293,
    [SMALL_STATE(431)] = 14307,
    [SMALL_STATE(432)] = 14321,
    [SMALL_STATE(433)] = 14335,
    [SMALL_STATE(434)] = 14349,
    [SMALL_STATE(435)] = 14363,
    [SMALL_STATE(436)] = 14377,
    [SMALL_STATE(437)] = 14393,
    [SMALL_STATE(438)] = 14407,
    [SMALL_STATE(439)] = 14423,
    [SMALL_STATE(440)] = 14439,
    [SMALL_STATE(441)] = 14453,
    [SMALL_STATE(442)] = 14467,
    [SMALL_STATE(443)] = 14483,
    [SMALL_STATE(444)] = 14497,
    [SMALL_STATE(445)] = 14513,
    [SMALL_STATE(446)] = 14529,
    [SMALL_STATE(447)] = 14545,
    [SMALL_STATE(448)] = 14561,
    [SMALL_STATE(449)] = 14577,
    [SMALL_STATE(450)] = 14591,
    [SMALL_STATE(451)] = 14605,
    [SMALL_STATE(452)] = 14621,
    [SMALL_STATE(453)] = 14637,
    [SMALL_STATE(454)] = 14651,
    [SMALL_STATE(455)] = 14667,
    [SMALL_STATE(456)] = 14681,
    [SMALL_STATE(457)] = 14695,
    [SMALL_STATE(458)] = 14709,
    [SMALL_STATE(459)] = 14723,
    [SMALL_STATE(460)] = 14737,
    [SMALL_STATE(461)] = 14751,
    [SMALL_STATE(462)] = 14765,
    [SMALL_STATE(463)] = 14779,
    [SMALL_STATE(464)] = 14793,
    [SMALL_STATE(465)] = 14807,
    [SMALL_STATE(466)] = 14821,
    [SMALL_STATE(467)] = 14837,
    [SMALL_STATE(468)] = 14851,
    [SMALL_STATE(469)] = 14865,
    [SMALL_STATE(470)] = 14881,
    [SMALL_STATE(471)] = 14895,
    [SMALL_STATE(472)] = 14909,
    [SMALL_STATE(473)] = 14925,
    [SMALL_STATE(474)] = 14941,
    [SMALL_STATE(475)] = 14957,
    [SMALL_STATE(476)] = 14971,
    [SMALL_STATE(477)] = 14985,
    [SMALL_STATE(478)] = 14999,
    [SMALL_STATE(479)] = 15013,
    [SMALL_STATE(480)] = 15029,
    [SMALL_STATE(481)] = 15043,
    [SMALL_STATE(482)] = 15057,
    [SMALL_STATE(483)] = 15071,
    [SMALL_STATE(484)] = 15087,
    [SMALL_STATE(485)] = 15101,
    [SMALL_STATE(486)] = 15117,
    [SMALL_STATE(487)] = 15131,
    [SMALL_STATE(488)] = 15147,
    [SMALL_STATE(489)] = 15163,
    [SMALL_STATE(490)] = 15179,
    [SMALL_STATE(491)] = 15192,
    [SMALL_STATE(492)] = 15205,
    [SMALL_STATE(493)] = 15218,
    [SMALL_STATE(494)] = 15231,
    [SMALL_STATE(495)] = 15244,
    [SMALL_STATE(496)] = 15257,
    [SMALL_STATE(497)] = 15270,
    [SMALL_STATE(498)] = 15283,
    [SMALL_STATE(499)] = 15296,
    [SMALL_STATE(500)] = 15309,
    [SMALL_STATE(501)] = 15322,
    [SMALL_STATE(502)] = 15335,
    [SMALL_STATE(503)] = 15348,
    [SMALL_STATE(504)] = 15361,
    [SMALL_STATE(505)] = 15374,
    [SMALL_STATE(506)] = 15387,
    [SMALL_STATE(507)] = 15400,
    [SMALL_STATE(508)] = 15413,
    [SMALL_STATE(509)] = 15426,
    [SMALL_STATE(510)] = 15439,
    [SMALL_STATE(511)] = 15452,
    [SMALL_STATE(512)] = 15465,
    [SMALL_STATE(513)] = 15478,
    [SMALL_STATE(514)] = 15491,
    [SMALL_STATE(515)] = 15504,
    [SMALL_STATE(516)] = 15517,
    [SMALL_STATE(517)] = 15530,
    [SMALL_STATE(518)] = 15543,
    [SMALL_STATE(519)] = 15556,
    [SMALL_STATE(520)] = 15569,
    [SMALL_STATE(521)] = 15582,
    [SMALL_STATE(522)] = 15595,
    [SMALL_STATE(523)] = 15608,
    [SMALL_STATE(524)] = 15621,
    [SMALL_STATE(525)] = 15634,
    [SMALL_STATE(526)] = 15647,
    [SMALL_STATE(527)] = 15660,
    [SMALL_STATE(528)] = 15673,
    [SMALL_STATE(529)] = 15686,
    [SMALL_STATE(530)] = 15699,
    [SMALL_STATE(531)] = 15712,
    [SMALL_STATE(532)] = 15725,
    [SMALL_STATE(533)] = 15738,
    [SMALL_STATE(534)] = 15751,
    [SMALL_STATE(535)] = 15764,
    [SMALL_STATE(536)] = 15777,
    [SMALL_STATE(537)] = 15790,
    [SMALL_STATE(538)] = 15803,
    [SMALL_STATE(539)] = 15816,
    [SMALL_STATE(540)] = 15829,
    [SMALL_STATE(541)] = 15842,
    [SMALL_STATE(542)] = 15855,
    [SMALL_STATE(543)] = 15868,
    [SMALL_STATE(544)] = 15881,
    [SMALL_STATE(545)] = 15894,
    [SMALL_STATE(546)] = 15907,
    [SMALL_STATE(547)] = 15920,
    [SMALL_STATE(548)] = 15933,
    [SMALL_STATE(549)] = 15946,
    [SMALL_STATE(550)] = 15959,
    [SMALL_STATE(551)] = 15972,
    [SMALL_STATE(552)] = 15985,
    [SMALL_STATE(553)] = 15998,
    [SMALL_STATE(554)] = 16011,
    [SMALL_STATE(555)] = 16024,
    [SMALL_STATE(556)] = 16037,
    [SMALL_STATE(557)] = 16050,
    [SMALL_STATE(558)] = 16063,
    [SMALL_STATE(559)] = 16076,
    [SMALL_STATE(560)] = 16089,
    [SMALL_STATE(561)] = 16102,
    [SMALL_STATE(562)] = 16115,
    [SMALL_STATE(563)] = 16128,
    [SMALL_STATE(564)] = 16141,
    [SMALL_STATE(565)] = 16154,
    [SMALL_STATE(566)] = 16167,
    [SMALL_STATE(567)] = 16180,
    [SMALL_STATE(568)] = 16193,
    [SMALL_STATE(569)] = 16206,
    [SMALL_STATE(570)] = 16219,
    [SMALL_STATE(571)] = 16232,
    [SMALL_STATE(572)] = 16245,
    [SMALL_STATE(573)] = 16258,
    [SMALL_STATE(574)] = 16271,
    [SMALL_STATE(575)] = 16284,
    [SMALL_STATE(576)] = 16297,
    [SMALL_STATE(577)] = 16310,
    [SMALL_STATE(578)] = 16323,
    [SMALL_STATE(579)] = 16336,
    [SMALL_STATE(580)] = 16349,
    [SMALL_STATE(581)] = 16362,
    [SMALL_STATE(582)] = 16375,
    [SMALL_STATE(583)] = 16388,
    [SMALL_STATE(584)] = 16401,
    [SMALL_STATE(585)] = 16414,
    [SMALL_STATE(586)] = 16427,
    [SMALL_STATE(587)] = 16440,
    [SMALL_STATE(588)] = 16453,
    [SMALL_STATE(589)] = 16466,
    [SMALL_STATE(590)] = 16479,
    [SMALL_STATE(591)] = 16492,
    [SMALL_STATE(592)] = 16505,
    [SMALL_STATE(593)] = 16518,
    [SMALL_STATE(594)] = 16531,
    [SMALL_STATE(595)] = 16544,
    [SMALL_STATE(596)] = 16557,
    [SMALL_STATE(597)] = 16570,
    [SMALL_STATE(598)] = 16583,
    [SMALL_STATE(599)] = 16596,
    [SMALL_STATE(600)] = 16609,
    [SMALL_STATE(601)] = 16622,
    [SMALL_STATE(602)] = 16635,
    [SMALL_STATE(603)] = 16648,
    [SMALL_STATE(604)] = 16661,
    [SMALL_STATE(605)] = 16674,
    [SMALL_STATE(606)] = 16687,
    [SMALL_STATE(607)] = 16700,
    [SMALL_STATE(608)] = 16713,
    [SMALL_STATE(609)] = 16726,
    [SMALL_STATE(610)] = 16739,
    [SMALL_STATE(611)] = 16752,
    [SMALL_STATE(612)] = 16765,
    [SMALL_STATE(613)] = 16778,
    [SMALL_STATE(614)] = 16791,
    [SMALL_STATE(615)] = 16804,
    [SMALL_STATE(616)] = 16817,
    [SMALL_STATE(617)] = 16830,
    [SMALL_STATE(618)] = 16843,
    [SMALL_STATE(619)] = 16856,
    [SMALL_STATE(620)] = 16869,
    [SMALL_STATE(621)] = 16882,
    [SMALL_STATE(622)] = 16895,
    [SMALL_STATE(623)] = 16908,
    [SMALL_STATE(624)] = 16921,
    [SMALL_STATE(625)] = 16934,
    [SMALL_STATE(626)] = 16947,
    [SMALL_STATE(627)] = 16960,
    [SMALL_STATE(628)] = 16973,
    [SMALL_STATE(629)] = 16986,
    [SMALL_STATE(630)] = 16999,
    [SMALL_STATE(631)] = 17012,
    [SMALL_STATE(632)] = 17025,
    [SMALL_STATE(633)] = 17038,
    [SMALL_STATE(634)] = 17051,
    [SMALL_STATE(635)] = 17064,
    [SMALL_STATE(636)] = 17077,
    [SMALL_STATE(637)] = 17090,
    [SMALL_STATE(638)] = 17103,
    [SMALL_STATE(639)] = 17116,
    [SMALL_STATE(640)] = 17129,
    [SMALL_STATE(641)] = 17142,
    [SMALL_STATE(642)] = 17155,
    [SMALL_STATE(643)] = 17168,
    [SMALL_STATE(644)] = 17181,
    [SMALL_STATE(645)] = 17194,
    [SMALL_STATE(646)] = 17207,
    [SMALL_STATE(647)] = 17220,
    [SMALL_STATE(648)] = 17233,
    [SMALL_STATE(649)] = 17246,
    [SMALL_STATE(650)] = 17259,
    [SMALL_STATE(651)] = 17272,
    [SMALL_STATE(652)] = 17285,
    [SMALL_STATE(653)] = 17298,
    [SMALL_STATE(654)] = 17311,
    [SMALL_STATE(655)] = 17324,
    [SMALL_STATE(656)] = 17337,
    [SMALL_STATE(657)] = 17350,
    [SMALL_STATE(658)] = 17363,
    [SMALL_STATE(659)] = 17376,
    [SMALL_STATE(660)] = 17389,
    [SMALL_STATE(661)] = 17402,
    [SMALL_STATE(662)] = 17415,
    [SMALL_STATE(663)] = 17428,
    [SMALL_STATE(664)] = 17441,
    [SMALL_STATE(665)] = 17454,
    [SMALL_STATE(666)] = 17467,
    [SMALL_STATE(667)] = 17480,
    [SMALL_STATE(668)] = 17493,
    [SMALL_STATE(669)] = 17506,
    [SMALL_STATE(670)] = 17519,
    [SMALL_STATE(671)] = 17532,
    [SMALL_STATE(672)] = 17545,
    [SMALL_STATE(673)] = 17558,
    [SMALL_STATE(674)] = 17571,
    [SMALL_STATE(675)] = 17584,
    [SMALL_STATE(676)] = 17597,
    [SMALL_STATE(677)] = 17610,
    [SMALL_STATE(678)] = 17623,
    [SMALL_STATE(679)] = 17636,
    [SMALL_STATE(680)] = 17649,
    [SMALL_STATE(681)] = 17662,
    [SMALL_STATE(682)] = 17675,
    [SMALL_STATE(683)] = 17688,
    [SMALL_STATE(684)] = 17701,
    [SMALL_STATE(685)] = 17714,
    [SMALL_STATE(686)] = 17727,
    [SMALL_STATE(687)] = 17731,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(252),
    [5] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(569),
    [7] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0, 0, 0),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(386),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(636),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(685),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(389),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(679),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(675),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(673),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(669),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(367),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(361),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(667),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(666),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(665),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(664),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(663),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(661),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(358),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(357),
    [49] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(660),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(659),
    [55] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(396),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(657),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(256),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(259),
    [63] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(261),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(262),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(296),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(599),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(265),
    [75] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(263),
    [77] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(263),
    [79] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(258),
    [81] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(257),
    [83] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(257),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(340),
    [87] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(340),
    [89] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(250),
    [91] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(670),
    [93] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(247),
    [95] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(302),
    [97] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(613),
    [99] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(598),
    [101] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(636),
    [103] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(594),
    [105] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(546),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(544),
    [109] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(543),
    [111] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(675),
    [115] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(673),
    [117] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(367),
    [119] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(667),
    [121] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(666),
    [123] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(665),
    [125] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(664),
    [127] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(70),
    [129] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(663),
    [131] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(67),
    [133] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(527),
    [135] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(21),
    [137] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(358),
    [139] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(168),
    [141] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(541),
    [143] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(396),
    [145] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(177),
    [147] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(256),
    [150] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(259),
    [153] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(261),
    [156] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(261),
    [159] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(262),
    [162] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(296),
    [165] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(599),
    [168] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(265),
    [171] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [174] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [177] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(258),
    [180] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(257),
    [183] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(257),
    [186] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(340),
    [189] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(340),
    [192] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(250),
    [195] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(670),
    [198] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(247),
    [201] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(302),
    [204] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(613),
    [207] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(598),
    [210] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(636),
    [213] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    [215] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(546),
    [218] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(544),
    [221] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(543),
    [224] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(59),
    [227] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(675),
    [230] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(673),
    [233] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(367),
    [236] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(667),
    [239] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(666),
    [242] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(665),
    [245] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(664),
    [248] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(70),
    [251] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(663),
    [254] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(67),
    [257] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(527),
    [260] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(21),
    [263] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(661),
    [266] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(358),
    [269] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(168),
    [272] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(541),
    [275] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(396),
    [278] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(177),
    [281] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(528),
    [283] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(519),
    [285] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(518),
    [287] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_body, 1, 0, 0),
    [289] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(256),
    [292] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(259),
    [295] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(261),
    [298] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(261),
    [301] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(262),
    [304] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(296),
    [307] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(599),
    [310] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(265),
    [313] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [316] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [319] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(258),
    [322] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(257),
    [325] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(257),
    [328] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(340),
    [331] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(340),
    [334] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(250),
    [337] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(670),
    [340] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(247),
    [343] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(302),
    [346] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(613),
    [349] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(598),
    [352] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(636),
    [355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    [357] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(546),
    [360] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(544),
    [363] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(543),
    [366] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(59),
    [369] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(675),
    [372] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(673),
    [375] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(367),
    [378] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(667),
    [381] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(666),
    [384] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(665),
    [387] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(664),
    [390] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(70),
    [393] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(663),
    [396] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(518),
    [399] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(21),
    [402] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(661),
    [405] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(358),
    [408] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(168),
    [411] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(541),
    [414] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(396),
    [417] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(177),
    [420] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(574),
    [422] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(548),
    [424] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(611),
    [426] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(256),
    [429] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(259),
    [432] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(261),
    [435] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(261),
    [438] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(262),
    [441] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(296),
    [444] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(599),
    [447] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(265),
    [450] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [453] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [456] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(258),
    [459] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(257),
    [462] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(257),
    [465] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(340),
    [468] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(340),
    [471] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(250),
    [474] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(670),
    [477] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(247),
    [480] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(302),
    [483] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(613),
    [486] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(598),
    [489] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(636),
    [492] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    [494] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(546),
    [497] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(544),
    [500] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(543),
    [503] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(59),
    [506] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(675),
    [509] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(673),
    [512] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(367),
    [515] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(667),
    [518] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(666),
    [521] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(665),
    [524] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(664),
    [527] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(70),
    [530] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(663),
    [533] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(21),
    [536] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(661),
    [539] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(358),
    [542] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(168),
    [545] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(541),
    [548] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(396),
    [551] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(177),
    [554] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(511),
    [556] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1, 0, 0),
    [558] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(603),
    [560] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(621),
    [562] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(158),
    [564] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(110),
    [566] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [568] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(489),
    [570] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(570),
    [572] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(492),
    [574] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(135),
    [576] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(136),
    [578] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(94),
    [580] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 1, 0, 0),
    [582] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case, 1, 0, 0),
    [584] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(636),
    [587] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    [589] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(685),
    [592] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(389),
    [595] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(679),
    [598] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(675),
    [601] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(673),
    [604] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(669),
    [607] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(367),
    [610] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(361),
    [613] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(667),
    [616] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(666),
    [619] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(665),
    [622] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(664),
    [625] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(70),
    [628] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(341),
    [631] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(663),
    [634] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(21),
    [637] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(661),
    [640] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(358),
    [643] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(357),
    [646] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(168),
    [649] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(660),
    [652] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(659),
    [655] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(396),
    [658] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(657),
    [661] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1, 0, 0),
    [663] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(520),
    [665] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(341),
    [667] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(657),
    [669] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(576),
    [671] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    [673] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(636),
    [676] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(685),
    [679] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(389),
    [682] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(679),
    [685] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(675),
    [688] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(673),
    [691] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(669),
    [694] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(367),
    [697] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(361),
    [700] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(667),
    [703] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(666),
    [706] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(665),
    [709] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(664),
    [712] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(70),
    [715] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(663),
    [718] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(21),
    [721] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(661),
    [724] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(358),
    [727] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(357),
    [730] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(168),
    [733] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(660),
    [736] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(659),
    [739] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(396),
    [742] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(657),
    [745] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(653),
    [747] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2, 0, 0),
    [749] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(508),
    [751] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(470),
    [753] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(375),
    [755] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(506),
    [757] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(419),
    [759] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(471),
    [761] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(618),
    [763] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(615),
    [765] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(496),
    [767] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(494),
    [769] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(661),
    [771] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(624),
    [773] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(256),
    [776] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(259),
    [779] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(261),
    [782] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(261),
    [785] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(262),
    [788] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(618),
    [791] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(615),
    [794] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(265),
    [797] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [800] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [803] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(258),
    [806] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(257),
    [809] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(257),
    [812] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(340),
    [815] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(340),
    [818] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(250),
    [821] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(670),
    [824] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(247),
    [827] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(496),
    [830] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(613),
    [833] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    [835] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(664),
    [838] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(70),
    [841] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(21),
    [844] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(661),
    [847] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(177),
    [850] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(443),
    [852] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(394),
    [854] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(610),
    [856] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(481),
    [858] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(256),
    [861] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(259),
    [864] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(261),
    [867] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(261),
    [870] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(262),
    [873] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(296),
    [876] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(599),
    [879] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(265),
    [882] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [885] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(263),
    [888] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(258),
    [891] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(257),
    [894] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(257),
    [897] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(340),
    [900] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(340),
    [903] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(250),
    [906] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(670),
    [909] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(247),
    [912] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(302),
    [915] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(613),
    [918] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(598),
    [921] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    [923] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(375),
    [926] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(177),
    [929] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(458),
    [931] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_state_member, 4, 0, 0),
    [933] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_state_member, 4, 0, 0),
    [935] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(485),
    [937] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(499),
    [939] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [941] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_export, 2, 0, 0),
    [943] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2, 0, 0),
    [945] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 6, 0, 0),
    [947] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 6, 0, 0),
    [949] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 1, 0, 0),
    [951] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 1, 0, 0),
    [953] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_value_element, 1, 0, 0),
    [955] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_element, 1, 0, 0),
    [957] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 7, 0, 0),
    [959] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 7, 0, 0),
    [961] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 5, 0, 0),
    [963] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 5, 0, 0),
    [965] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(274),
    [967] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [969] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_home_export, 2, 0, 0),
    [971] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_export, 2, 0, 0),
    [973] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_home_body_repeat1, 1, 0, 0),
    [975] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_home_body_repeat1, 1, 0, 0),
    [977] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_home_export, 1, 0, 0),
    [979] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_export, 1, 0, 0),
    [981] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 1, 0, 0),
    [983] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 1, 0, 0),
    [985] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2, 0, 0),
    [987] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2, 0, 0),
    [989] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3, 0, 0),
    [991] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3, 0, 0),
    [993] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    [995] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    [997] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(375),
    [1000] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3, 0, 0),
    [1002] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3, 0, 0),
    [1004] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1, 0, 0),
    [1006] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1, 0, 0),
    [1008] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, 0, 3),
    [1010] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, 0, 3),
    [1012] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, 0, 6),
    [1014] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, 0, 6),
    [1016] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, 0, 3),
    [1018] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, 0, 3),
    [1020] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [1022] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [1024] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 1, 0, 0),
    [1026] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1, 0, 0),
    [1028] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [1030] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [1032] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [1034] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [1036] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 2, 0, 0),
    [1038] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 2, 0, 0),
    [1040] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5, 0, 0),
    [1042] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5, 0, 0),
    [1044] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, 0, 6),
    [1046] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, 0, 6),
    [1048] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 2, 0, 0),
    [1050] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 2, 0, 0),
    [1052] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [1054] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1, 0, 0),
    [1056] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1, 0, 0),
    [1058] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 1, 0, 0),
    [1060] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1, 0, 0),
    [1062] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 5, 0, 0),
    [1064] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 5, 0, 0),
    [1066] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(662),
    [1068] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1, 0, 0),
    [1070] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1, 0, 0),
    [1072] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(149),
    [1074] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    [1076] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    SHIFT_REPEAT(386),
    [1079] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    [1081] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1, 0, 0),
    [1083] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__definition, 1, 0, 0),
    [1085] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2, 0, 0),
    [1087] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_predefine, 2, 0, 0),
    [1089] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2, 0, 0),
    [1091] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__definition, 2, 0, 0),
    [1093] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1, 0, 0),
    [1095] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 1, 0, 0),
    [1097] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 1, 0, 0),
    [1099] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 1, 0, 0),
    [1101] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, 0, 1),
    [1103] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, 0, 1),
    [1105] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1, 0, 0),
    [1107] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1, 0, 0),
    [1109] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 2, 0, 0),
    [1111] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 2, 0, 0),
    [1113] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1, 0, 0),
    [1115] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1, 0, 0),
    [1117] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(256),
    [1119] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [1121] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(262),
    [1123] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(571),
    [1125] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(265),
    [1127] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [1129] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, 0, 2),
    [1131] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, 0, 2),
    [1133] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(560),
    [1135] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2, 0, 0),
    [1137] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2, 0, 0),
    [1139] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1, 0, 0),
    [1141] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1, 0, 0),
    [1143] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, 0, 4),
    [1145] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, 0, 4),
    [1147] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3, 0, 0),
    [1149] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3, 0, 0),
    [1151] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [1153] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [1155] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1, 0, 0),
    [1157] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1, 0, 0),
    [1159] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3, 0, 0),
    [1161] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3, 0, 0),
    [1163] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [1165] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(130),
    [1167] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4, 0, 0),
    [1169] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4, 0, 0),
    [1171] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, 0, 7),
    [1173] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, 0, 7),
    [1175] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1, 0, 0),
    [1177] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1, 0, 0),
    [1179] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [1181] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [1183] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1, 0, 0),
    [1185] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1, 0, 0),
    [1187] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4, 0, 0),
    [1189] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4, 0, 0),
    [1191] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3, 0, 0),
    [1193] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3, 0, 0),
    [1195] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [1197] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(524),
    [1199] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(543),
    [1201] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [1203] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(224),
    [1205] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(223),
    [1207] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(123),
    [1209] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1, 0, 0),
    [1211] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1, 0, 0),
    [1213] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(129),
    [1215] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3, 0, 0),
    [1217] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3, 0, 0),
    [1219] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_simple_type_spec, 1, 0, 0),
    [1221] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1, 0, 0),
    [1223] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_body, 1, 0, 0),
    [1225] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    [1227] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(543),
    [1230] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(59),
    [1233] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(224),
    [1236] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(223),
    [1239] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3, 0, 0),
    [1241] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3, 0, 0),
    [1243] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(128),
    [1245] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1, 0, 0),
    [1247] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1, 0, 0),
    [1249] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(580),
    [1251] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(577),
    [1253] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [1255] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [1257] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3, 0, 0),
    [1259] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(127),
    [1261] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1, 0, 0),
    [1263] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [1265] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(367),
    [1268] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(472),
    [1270] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1, 0, 0),
    [1272] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(473),
    [1274] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(474),
    [1276] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3, 0, 0),
    [1278] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(126),
    [1280] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1, 0, 0),
    [1282] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1, 0, 0),
    [1284] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(251),
    [1286] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(91),
    [1288] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [1290] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(593),
    [1292] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1, 0, 0),
    [1294] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(125),
    [1296] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    [1298] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(579),
    [1301] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(112),
    [1304] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2, 0, 0),
    [1306] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [1308] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(467),
    [1310] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(464),
    [1312] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(463),
    [1314] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(440),
    [1316] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(579),
    [1318] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(112),
    [1320] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(412),
    [1322] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2, 0, 0),
    [1324] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(101),
    [1327] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(410),
    [1329] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(378),
    [1331] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(486),
    [1333] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(484),
    [1335] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(417),
    [1337] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(476),
    [1339] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(502),
    [1341] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(429),
    [1343] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2, 0, 0),
    [1345] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(502),
    [1348] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 1, 0, 0),
    [1350] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(235),
    [1352] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_export, 2, 0, 0),
    [1354] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(480),
    [1356] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 2, 0, 0),
    [1358] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [1360] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_forward_dcl, 2, 0, 0),
    [1362] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [1364] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1, 0, 0),
    [1366] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(531),
    [1368] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(413),
    [1370] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [1372] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(207),
    [1374] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 3, 0, 0),
    [1376] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(233),
    [1378] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [1380] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_header, 2, 0, 0),
    [1382] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [1384] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_forward_dcl, 2, 0, 0),
    [1386] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(298),
    [1388] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(408),
    [1390] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(210),
    [1392] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1, 0, 0),
    [1394] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2, 0, 0),
    [1396] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(371),
    [1399] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(252),
    [1401] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(569),
    [1403] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2, 0, 0),
    SHIFT_REPEAT(210),
    [1406] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2, 0, 0),
    [1408] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(371),
    [1410] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(687),
    [1412] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2, 0, 0),
    [1414] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(260),
    [1416] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2, 0, 0),
    [1418] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [1420] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [1422] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [1424] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(593),
    [1426] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(464),
    [1429] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2, 0, 0),
    [1431] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [1433] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_inheritance_spec_repeat1, 2, 0, 0),
    SHIFT_REPEAT(207),
    [1436] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_inheritance_spec_repeat1, 2, 0, 0),
    [1438] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(314),
    [1440] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [1442] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 2, 0, 0),
    [1444] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(230),
    [1446] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_name, 1, 0, 0),
    [1448] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 4, 0, 0),
    [1450] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(226),
    [1452] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(671),
    [1454] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(404),
    [1456] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(677),
    [1458] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [1460] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [1462] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(378),
    [1465] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1, 0, 0),
    [1467] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [1469] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(362),
    [1471] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2, 0, 0),
    [1473] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [1475] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1, 0, 0),
    [1477] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(504),
    [1479] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1, 0, 0),
    [1481] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4, 0, 0),
    [1483] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(686),
    [1485] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1, 0, 0),
    [1487] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5, 0, 0),
    [1489] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(457),
    [1491] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [1493] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_short_int, 1, 0, 0),
    [1495] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_longlong_int, 1, 0, 0),
    [1497] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_long_int, 1, 0, 0),
    [1499] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_long_int, 1, 0, 0),
    [1501] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_longlong_int, 1, 0, 0),
    [1503] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1, 0, 0),
    [1505] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_short_int, 1, 0, 0),
    [1507] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3, 0, 0),
    [1509] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1, 0, 0),
    [1511] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(385),
    [1513] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(447),
    [1515] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_param_dcls, 1, 0, 0),
    [1517] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(415),
    [1519] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(414),
    [1521] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [1523] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2, 0, 0),
    [1525] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2, 0, 0),
    SHIFT_REPEAT(17),
    [1528] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [1530] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2, 0, 0),
    [1532] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0),
    [1534] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0),
    SHIFT_REPEAT(53),
    [1537] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1, 0, 0),
    [1539] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3, 0, 0),
    [1541] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5, 0, 0),
    [1543] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2, 0, 0),
    SHIFT_REPEAT(213),
    [1546] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2, 0, 0),
    [1548] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 1, 0, 0),
    [1550] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [1552] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    SHIFT_REPEAT(403),
    [1555] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    [1557] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1, 0, 0),
    [1559] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2, 0, 0),
    [1561] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 1, 0, 0),
    [1563] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [1565] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(365),
    [1567] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(545),
    [1569] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(403),
    [1571] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 1, 0, 0),
    [1573] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(248),
    [1575] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2, 0, 0),
    [1577] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2, 0, 0),
    [1579] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(567),
    [1581] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2, 0, 0),
    [1583] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1, 0, 0),
    [1585] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8, 0, 0),
    [1587] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_factory_param_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(447),
    [1590] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_factory_param_dcls_repeat1, 2, 0, 0),
    [1592] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(451),
    [1595] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2, 0, 0),
    [1597] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1, 0, 0),
    [1599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(213),
    [1601] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2, 0, 0),
    [1603] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [1605] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [1607] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [1609] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 6, 0, 0),
    [1611] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1, 0, 0),
    [1613] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(402),
    [1615] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_in_parameter_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(436),
    [1618] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_in_parameter_dcls_repeat1, 2, 0, 0),
    [1620] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 7, 0, 0),
    [1622] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1, 0, 0),
    [1624] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(196),
    [1627] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2, 0, 0),
    [1629] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1, 0, 0),
    [1631] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [1633] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(383),
    [1635] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(186),
    [1638] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2, 0, 0),
    [1640] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 1, 0, 0),
    [1642] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(639),
    [1644] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_context_expr_repeat1, 2, 0, 0),
    SHIFT_REPEAT(365),
    [1647] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_context_expr_repeat1, 2, 0, 0),
    [1649] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2, 0, 0),
    [1651] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2, 0, 0),
    SHIFT_REPEAT(414),
    [1654] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3, 0, 0),
    [1656] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [1658] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [1660] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(115),
    [1662] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(451),
    [1664] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 1, 0, 0),
    [1666] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(401),
    [1668] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(449),
    [1670] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2, 0, 0),
    [1672] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_dcl, 4, 0, 0),
    [1674] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2, 0, 0),
    SHIFT_REPEAT(298),
    [1677] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(195),
    [1680] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2, 0, 0),
    [1682] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1, 0, 0),
    [1684] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(436),
    [1686] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_parameter_dcls, 2, 0, 0),
    [1688] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [1690] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 2, 0, 0),
    [1692] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2, 0, 0),
    [1694] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2, 0, 0),
    SHIFT_REPEAT(639),
    [1697] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(379),
    [1699] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(376),
    [1701] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1, 0, 0),
    [1703] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(427),
    [1705] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(462),
    [1707] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1, 0, 0),
    [1709] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 5, 0, 0),
    [1711] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(433),
    [1713] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(420),
    [1715] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [1717] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1, 0, 0),
    [1719] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 2, 0, 0),
    [1721] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6, 0, 0),
    [1723] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6, 0, 0),
    [1725] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [1727] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(578),
    [1729] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_param_dcls, 2, 0, 0),
    [1731] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2, 0, 0),
    [1733] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1, 0, 0),
    [1735] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(472),
    [1738] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2, 0, 0),
    [1740] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_dcl, 5, 0, 0),
    [1742] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [1744] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_parameter_dcls, 1, 0, 0),
    [1746] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 2, 0, 0),
    [1748] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 2, 0, 0),
    [1750] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3, 0, 0),
    [1752] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(592),
    [1754] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(676),
    [1756] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(240),
    [1758] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [1760] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 2, 0, 0),
    [1762] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2, 0, 0),
    SHIFT_REPEAT(248),
    [1765] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2, 0, 0),
    [1767] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(682),
    [1769] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [1771] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [1773] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4, 0, 0),
    [1775] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4, 0, 0),
    [1777] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 7, 0, 0),
    [1779] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [1781] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2, 0, 0),
    [1783] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(116),
    [1785] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(633),
    [1787] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_type, 1, 0, 0),
    [1789] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(629),
    [1791] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(628),
    [1793] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1, 0, 0),
    [1795] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5, 0, 0),
    [1797] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_header, 5, 0, 0),
    [1799] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter, 2, 0, 0),
    [1801] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5, 0, 0),
    [1803] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4, 0, 0),
    [1805] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(561),
    [1807] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4, 0, 0),
    [1809] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(194),
    [1811] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(339),
    [1813] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_param_dcl, 3, 0, 0),
    [1815] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3, 0, 0),
    [1817] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [1819] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(117),
    [1821] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5, 0, 0),
    [1823] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [1825] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9, 0, 0),
    [1827] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5, 0, 0),
    [1829] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1, 0, 0),
    [1831] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2, 0, 0),
    [1833] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [1835] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5, 0, 0),
    [1837] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6, 0, 0),
    [1839] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, 0, 8),
    [1841] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 8, 0, 0),
    [1843] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1, 0, 0),
    [1845] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_param_dcl, 3, 0, 0),
    [1847] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcl, 3, 0, 0),
    [1849] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(477),
    [1851] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(122),
    [1853] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3, 0, 0),
    [1855] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3, 0, 0),
    [1857] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6, 0, 0),
    [1859] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameter, 1, 0, 0),
    [1861] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6, 0, 0),
    [1863] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6, 0, 0),
    [1865] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_oneway_dcl, 6, 0, 0),
    [1867] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_imported_scope, 1, 0, 0),
    [1869] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8, 0, 0),
    [1871] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_param, 3, 0, 0),
    [1873] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(384),
    [1875] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, 0, 8),
    [1877] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_header, 4, 0, 0),
    [1879] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_inheritance_spec, 2, 0, 0),
    [1881] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_inheritance_spec, 2, 0, 0),
    [1883] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7, 0, 0),
    [1885] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_oneway_dcl, 5, 0, 0),
    [1887] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, 0, 5),
    [1889] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1, 0, 0),
    [1891] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2, 0, 0),
    [1893] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6, 0, 0),
    [1895] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1, 0, 0),
    [1897] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1, 0, 0),
    [1899] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [1901] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(106),
    [1903] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4, 0, 0),
    [1905] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [1907] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, 0, 5),
    [1909] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4, 0, 0),
    [1911] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(355),
    [1913] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 3, 0, 0),
    [1915] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7, 0, 0),
    [1917] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4, 0, 0),
    [1919] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1, 0, 0),
    [1921] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [1923] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(323),
    [1925] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4, 0, 0),
    [1927] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, 0, 0),
    [1929] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1, 0, 0),
    [1931] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(188),
    [1933] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4, 0, 0),
    [1935] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [1937] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 1, 0, 0),
    [1939] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1, 0, 0),
    [1941] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1, 0, 0),
    [1943] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(554),
    [1945] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(627),
    [1947] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [1949] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(547),
    [1951] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(634),
    [1953] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4, 0, 0),
    [1955] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(347),
    [1957] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1, 0, 0),
    [1959] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(173),
    [1961] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(254),
    [1963] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [1965] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(643),
    [1967] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(107),
    [1969] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(398),
    [1971] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 3, 0, 0),
    [1973] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [1975] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 4, 0, 0),
    [1977] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2, 0, 0),
    [1979] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4, 0, 0),
    [1981] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [1983] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [1985] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_abs_def, 7, 0, 0),
    [1987] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [1989] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(491),
    [1991] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(608),
    [1993] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [1995] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(605),
    [1997] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_dcl, 3, 0, 0),
    [1999] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 7, 0, 0),
    [2001] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(601),
    [2003] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [2005] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(119),
    [2007] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_def, 3, 0, 0),
    [2009] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(184),
    [2011] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4, 0, 0),
    [2013] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(591),
    [2015] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 3, 0, 0),
    [2017] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 3, 0, 0),
    [2019] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1, 0, 0),
    [2021] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(332),
    [2023] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(490),
    [2025] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [2027] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(178),
    [2029] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2, 0, 0),
    [2031] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2, 0, 0),
    [2033] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(380),
    [2035] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(568),
    [2037] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(437),
    [2039] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [2041] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1, 0, 0),
    [2043] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 4, 0, 0),
    [2045] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_inst, 6, 0, 0),
    [2047] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3, 0, 0),
    [2049] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3, 0, 0),
    [2051] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(290),
    [2053] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(382),
    [2055] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_header, 3, 0, 0),
    [2057] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(141),
    [2059] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(565),
    [2061] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_prefix_dcl, 3, 0, 0),
    [2063] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [2065] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_id_dcl, 3, 0, 0),
    [2067] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [2069] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [2071] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [2073] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2, 0, 0),
    [2075] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [2077] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [2079] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [2081] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(642),
    [2083] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(635),
    [2085] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(553),
    [2087] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1, 0, 0),
    [2089] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(418),
    [2091] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [2093] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4, 0, 0),
    [2095] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(335),
    [2097] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 8, 0, 0),
    [2099] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(479),
    [2101] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(249),
    [2103] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [2105] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(509),
    [2107] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(525),
    [2109] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2, 0, 0),
    [2111] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_dcl, 2, 0, 0),
    [2113] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(287),
    [2115] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [2117] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_with_context, 2, 0, 0),
    [2119] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [2121] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(275),
    [2123] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(227),
    [2125] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 5, 0, 0),
    [2127] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 4, 0, 0),
    [2129] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(620),
    [2131] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2, 0, 0),
    [2133] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(617),
    [2135] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [2137] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [2139] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_kind, 2, 0, 0),
    [2141] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_def, 4, 0, 0),
    [2143] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [2145] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_abs_def, 6, 0, 0),
    [2147] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(566),
    [2149] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(219),
    [2151] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_factory_dcl, 6, 0, 0),
    [2153] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [2155] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_home_dcl, 4, 0, 0),
    [2157] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(612),
    [2159] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5, 0, 0),
    [2161] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_abs_def, 5, 0, 0),
    [2163] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5, 0, 0),
    [2165] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [2167] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1, 0, 0),
    [2169] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [2171] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_uses_dcl, 3, 0, 0),
    [2173] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(175),
    [2175] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_provides_dcl, 3, 0, 0),
    [2177] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [2179] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [2181] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [2183] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5, 0, 0),
    [2185] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [2187] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [2189] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(586),
    [2191] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(218),
    [2193] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_kind, 2, 0, 0),
    [2195] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(641),
    [2197] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [2199] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2, 0, 0),
    [2201] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [2203] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(133),
    [2205] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(631),
    [2207] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 2, 0, 0),
    [2209] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [2211] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(400),
    [2213] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(148),
    [2215] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(645),
    [2217] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(255),
    [2219] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [2221] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_dcl, 1, 0, 0),
    [2223] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_ref, 6, 0, 0),
    [2225] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3, 0, 0),
    [2227] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(581),
    [2229] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [2231] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(197),
    [2233] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_dcl, 1, 0, 0),
    [2235] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [2237] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1, 0, 0),
    [2239] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5, 0, 0),
    [2241] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(217),
    [2243] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(109),
    [2245] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [2247] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(108),
    [2249] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(333),
    [2251] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(208),
    [2253] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1, 0, 0),
    [2255] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(600),
    [2257] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(619),
    [2259] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(285),
    [2261] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(246),
    [2263] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_kind, 1, 0, 0),
    [2265] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(264),
    [2267] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(588),
    [2269] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [2271] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(174),
    [2273] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(626),
    [2275] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(397),
    [2277] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(405),
    [2279] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(241),
    [2281] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(242),
    [2283] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_kind, 1, 0, 0),
    [2285] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [2287] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(536),
    [2289] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [2291] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(390),
    [2293] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5, 0, 0),
    [2295] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_comment, 2, 0, 0),
    [2297] = { .entry = { .count = 1, .reusable = true } },
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
