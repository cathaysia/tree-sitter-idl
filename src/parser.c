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
#define STATE_COUNT 597
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 279
#define ALIAS_COUNT 0
#define TOKEN_COUNT 114
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
    anon_sym_interface = 60,
    anon_sym_COLON = 61,
    anon_sym_SEMI = 62,
    anon_sym_void = 63,
    anon_sym_in = 64,
    anon_sym_out = 65,
    anon_sym_inout = 66,
    anon_sym_raises = 67,
    anon_sym_readonly = 68,
    anon_sym_attribute = 69,
    anon_sym_getraises = 70,
    anon_sym_setraises = 71,
    anon_sym_bitset = 72,
    anon_sym_bitfield = 73,
    anon_sym_bitmask = 74,
    anon_sym_ATannotation = 75,
    anon_sym_default = 76,
    anon_sym_AT = 77,
    anon_sym_EQ = 78,
    anon_sym_module = 79,
    anon_sym_typename = 80,
    anon_sym_valuetype = 81,
    anon_sym_eventtype = 82,
    anon_sym_struct = 83,
    anon_sym_union = 84,
    anon_sym_enum = 85,
    anon_sym_const = 86,
    anon_sym_alias = 87,
    anon_sym_supports = 88,
    anon_sym_public = 89,
    anon_sym_private = 90,
    anon_sym_factory = 91,
    anon_sym_typedef = 92,
    anon_sym_LBRACK = 93,
    anon_sym_RBRACK = 94,
    anon_sym_ATdefault_literal = 95,
    anon_sym_ATignore_literal_names = 96,
    anon_sym_switch = 97,
    anon_sym_case = 98,
    anon_sym_typeid = 99,
    anon_sym_typeprefix = 100,
    anon_sym_import = 101,
    sym_object_type = 102,
    anon_sym_oneway = 103,
    anon_sym_context = 104,
    anon_sym_native = 105,
    anon_sym_POUNDdefine = 106,
    aux_sym_predefine_token1 = 107,
    sym_identifier = 108,
    anon_sym_SLASH_SLASH = 109,
    aux_sym_comment_token1 = 110,
    aux_sym_comment_token2 = 111,
    anon_sym_SLASH_STAR = 112,
    aux_sym_comment_token3 = 113,
    sym_specification = 114,
    sym_signed_short_int = 115,
    sym_signed_long_int = 116,
    sym_signed_longlong_int = 117,
    sym_unsigned_int = 118,
    sym_fixed_pt_const_type = 119,
    sym_integer_type = 120,
    sym_signed_int = 121,
    sym_unsigned_short_int = 122,
    sym_unsigned_long_int = 123,
    sym_unsigned_longlong_int = 124,
    sym_floating_pt_type = 125,
    sym_char_type = 126,
    sym_scoped_name = 127,
    sym_string_type = 128,
    sym_type_spec = 129,
    sym_simple_type_spec = 130,
    sym_base_type_spec = 131,
    sym_any_type = 132,
    sym_fixed_pt_type = 133,
    sym_template_type_spec = 134,
    sym_sequence_type = 135,
    sym_map_type = 136,
    sym_positive_int_const = 137,
    sym_const_expr = 138,
    sym_or_expr = 139,
    sym_xor_expr = 140,
    sym_and_expr = 141,
    sym_shift_expr = 142,
    sym_add_expr = 143,
    sym_mult_expr = 144,
    sym_unary_expr = 145,
    sym_unary_operator = 146,
    sym_literal = 147,
    sym_string_literal = 148,
    sym_char_literal = 149,
    sym_boolean_literal = 150,
    sym_preproc_call = 151,
    sym_except_dcl = 152,
    sym_interface_dcl = 153,
    sym_interface_kind = 154,
    sym_interface_forward_dcl = 155,
    sym_interface_def = 156,
    sym_interface_header = 157,
    sym_interface_inheritance_spec = 158,
    sym_interface_name = 159,
    sym_interface_body = 160,
    sym_export = 161,
    sym_op_dcl = 162,
    sym_op_type_spec = 163,
    sym_parameter_dcls = 164,
    sym_param_dcl = 165,
    sym_param_attribute = 166,
    sym_raises_expr = 167,
    sym_attr_dcl = 168,
    sym_readonly_attr_spec = 169,
    sym_readonly_attr_declarator = 170,
    sym_attr_spec = 171,
    sym_attr_declarator = 172,
    sym_attr_raises_expr = 173,
    sym_get_excep_expr = 174,
    sym_set_excep_expr = 175,
    sym_exception_list = 176,
    sym_bitset_dcl = 177,
    sym_bitfield = 178,
    sym_bitfield_spec = 179,
    sym_destination_type = 180,
    sym_bitmask_dcl = 181,
    sym_bit_value = 182,
    sym_annotation_dcl = 183,
    sym_annotation_body = 184,
    sym_annotation_member = 185,
    sym_annotation_member_type = 186,
    sym_any_const_type = 187,
    sym_annotation_appl = 188,
    sym_annotation_appl_params = 189,
    sym_annotation_appl_param = 190,
    sym_template_module_dcl = 191,
    sym_formal_parameters = 192,
    sym_formal_parameter = 193,
    sym_formal_parameter_type = 194,
    sym_tpl_definition = 195,
    sym_template_module_inst = 196,
    sym_actual_parameters = 197,
    sym_actual_parameter = 198,
    sym_template_module_ref = 199,
    sym_formal_parameter_names = 200,
    sym_value_dcl = 201,
    sym_value_def = 202,
    sym_value_header = 203,
    sym_value_inheritance_spec = 204,
    sym_value_name = 205,
    sym_value_element = 206,
    sym_state_member = 207,
    sym_init_dcl = 208,
    sym_init_param_dcls = 209,
    sym_init_param_dcl = 210,
    sym_value_forward_dcl = 211,
    sym_typedef_dcl = 212,
    sym_type_declarator = 213,
    sym_any_declarators = 214,
    sym_any_declarator = 215,
    sym_simple_declarator = 216,
    sym_declarator = 217,
    sym_declarators = 218,
    sym_array_declarator = 219,
    sym_fixed_array_size = 220,
    sym_enum_dcl = 221,
    sym_enumerator = 222,
    sym_enum_modifier = 223,
    sym_enum_anno = 224,
    sym_union_forward_dcl = 225,
    sym_union_def = 226,
    sym_case = 227,
    sym_case_label = 228,
    sym_element_spec = 229,
    sym_switch_type_spec = 230,
    sym_type_id_dcl = 231,
    sym_type_prefix_dcl = 232,
    sym_import_dcl = 233,
    sym_imported_scope = 234,
    sym_op_oneway_dcl = 235,
    sym_in_parameter_dcls = 236,
    sym_in_param_dcl = 237,
    sym_op_with_context = 238,
    sym_context_expr = 239,
    sym__definition = 240,
    sym_native_dcl = 241,
    sym_module_dcl = 242,
    sym_struct_forward_dcl = 243,
    sym_struct_def = 244,
    sym_member = 245,
    sym_default = 246,
    sym_predefine = 247,
    sym_const_dcl = 248,
    sym_const_type = 249,
    sym_comment = 250,
    aux_sym_specification_repeat1 = 251,
    aux_sym_specification_repeat2 = 252,
    aux_sym_except_dcl_repeat1 = 253,
    aux_sym_interface_def_repeat1 = 254,
    aux_sym_interface_inheritance_spec_repeat1 = 255,
    aux_sym_interface_body_repeat1 = 256,
    aux_sym_parameter_dcls_repeat1 = 257,
    aux_sym_raises_expr_repeat1 = 258,
    aux_sym_readonly_attr_declarator_repeat1 = 259,
    aux_sym_bitset_dcl_repeat1 = 260,
    aux_sym_bitfield_repeat1 = 261,
    aux_sym_bitmask_dcl_repeat1 = 262,
    aux_sym_annotation_dcl_repeat1 = 263,
    aux_sym_annotation_appl_params_repeat1 = 264,
    aux_sym_template_module_dcl_repeat1 = 265,
    aux_sym_formal_parameters_repeat1 = 266,
    aux_sym_actual_parameters_repeat1 = 267,
    aux_sym_formal_parameter_names_repeat1 = 268,
    aux_sym_value_def_repeat1 = 269,
    aux_sym_init_param_dcls_repeat1 = 270,
    aux_sym_any_declarators_repeat1 = 271,
    aux_sym_declarators_repeat1 = 272,
    aux_sym_array_declarator_repeat1 = 273,
    aux_sym_enum_dcl_repeat1 = 274,
    aux_sym_enumerator_repeat1 = 275,
    aux_sym_union_def_repeat1 = 276,
    aux_sym_in_parameter_dcls_repeat1 = 277,
    aux_sym_context_expr_repeat1 = 278,
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
    [aux_sym_init_param_dcls_repeat1] = "init_param_dcls_repeat1",
    [aux_sym_any_declarators_repeat1] = "any_declarators_repeat1",
    [aux_sym_declarators_repeat1] = "declarators_repeat1",
    [aux_sym_array_declarator_repeat1] = "array_declarator_repeat1",
    [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
    [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
    [aux_sym_union_def_repeat1] = "union_def_repeat1",
    [aux_sym_in_parameter_dcls_repeat1] = "in_parameter_dcls_repeat1",
    [aux_sym_context_expr_repeat1] = "context_expr_repeat1",
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
    [aux_sym_init_param_dcls_repeat1] = aux_sym_init_param_dcls_repeat1,
    [aux_sym_any_declarators_repeat1] = aux_sym_any_declarators_repeat1,
    [aux_sym_declarators_repeat1] = aux_sym_declarators_repeat1,
    [aux_sym_array_declarator_repeat1] = aux_sym_array_declarator_repeat1,
    [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
    [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
    [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
    [aux_sym_in_parameter_dcls_repeat1] = aux_sym_in_parameter_dcls_repeat1,
    [aux_sym_context_expr_repeat1] = aux_sym_context_expr_repeat1,
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
    [56] = 44,
    [57] = 57,
    [58] = 58,
    [59] = 59,
    [60] = 60,
    [61] = 61,
    [62] = 62,
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
    [74] = 74,
    [75] = 75,
    [76] = 76,
    [77] = 77,
    [78] = 78,
    [79] = 79,
    [80] = 69,
    [81] = 81,
    [82] = 81,
    [83] = 81,
    [84] = 81,
    [85] = 70,
    [86] = 71,
    [87] = 87,
    [88] = 88,
    [89] = 89,
    [90] = 90,
    [91] = 91,
    [92] = 92,
    [93] = 93,
    [94] = 94,
    [95] = 95,
    [96] = 96,
    [97] = 97,
    [98] = 98,
    [99] = 99,
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
    [150] = 67,
    [151] = 151,
    [152] = 152,
    [153] = 153,
    [154] = 64,
    [155] = 155,
    [156] = 71,
    [157] = 157,
    [158] = 158,
    [159] = 70,
    [160] = 160,
    [161] = 161,
    [162] = 162,
    [163] = 163,
    [164] = 69,
    [165] = 165,
    [166] = 166,
    [167] = 167,
    [168] = 168,
    [169] = 169,
    [170] = 170,
    [171] = 171,
    [172] = 76,
    [173] = 173,
    [174] = 78,
    [175] = 175,
    [176] = 176,
    [177] = 177,
    [178] = 178,
    [179] = 179,
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
    [214] = 214,
    [215] = 215,
    [216] = 67,
    [217] = 217,
    [218] = 218,
    [219] = 64,
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
    [230] = 69,
    [231] = 70,
    [232] = 71,
    [233] = 67,
    [234] = 64,
    [235] = 235,
    [236] = 236,
    [237] = 237,
    [238] = 238,
    [239] = 239,
    [240] = 238,
    [241] = 241,
    [242] = 238,
    [243] = 238,
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
    [326] = 241,
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
    [340] = 215,
    [341] = 341,
    [342] = 342,
    [343] = 343,
    [344] = 78,
    [345] = 345,
    [346] = 346,
    [347] = 76,
    [348] = 348,
    [349] = 349,
    [350] = 78,
    [351] = 351,
    [352] = 76,
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
    [581] = 492,
    [582] = 512,
    [583] = 563,
    [584] = 584,
    [585] = 473,
    [586] = 586,
    [587] = 492,
    [588] = 512,
    [589] = 473,
    [590] = 590,
    [591] = 492,
    [592] = 473,
    [593] = 593,
    [594] = 594,
    [595] = 595,
    [596] = 596,
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
                ADVANCE(441);
            ADVANCE_MAP(
                '"', 516,
                '#', 141,
                '$', 501,
                '%', 510,
                '\'', 518,
                '(', 511,
                ')', 512,
                '*', 508,
                '+', 504,
                ',', 494,
                '-', 506,
                '/', 509,
                ':', 597,
                ';', 598,
                '<', 489,
                '=', 622,
                '>', 491,
                '@', 621,
                'F', 520,
                'L', 514,
                'O', 528,
                'T', 521,
                '[', 648,
            );
            if(lookahead == '\\')
                SKIP(434);
            if(lookahead == ']')
                ADVANCE(649);
            if(lookahead == '^')
                ADVANCE(500);
            if(lookahead == 'a')
                ADVANCE(536);
            if(lookahead == 'b')
                ADVANCE(534);
            if(lookahead == 'c')
                ADVANCE(522);
            if(lookahead == 'd')
                ADVANCE(531);
            if(lookahead == 'e')
                ADVANCE(538);
            if(lookahead == 'f')
                ADVANCE(524);
            if(lookahead == 'g')
                ADVANCE(533);
            if(lookahead == 'i')
                ADVANCE(537);
            if(lookahead == 'l')
                ADVANCE(539);
            if(lookahead == 'm')
                ADVANCE(525);
            if(lookahead == 'n')
                ADVANCE(527);
            if(lookahead == 'o')
                ADVANCE(530);
            if(lookahead == 'p')
                ADVANCE(540);
            if(lookahead == 'r')
                ADVANCE(526);
            if(lookahead == 's')
                ADVANCE(532);
            if(lookahead == 't')
                ADVANCE(541);
            if(lookahead == 'u')
                ADVANCE(535);
            if(lookahead == 'v')
                ADVANCE(523);
            if(lookahead == 'w')
                ADVANCE(529);
            if(lookahead == '{')
                ADVANCE(591);
            if(lookahead == '|')
                ADVANCE(499);
            if(lookahead == '}')
                ADVANCE(592);
            if(lookahead == '~')
                ADVANCE(513);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(519);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(67);
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(67);
            if(lookahead == '\r')
                SKIP(1);
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(69);
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(69);
            if(lookahead == '\r')
                SKIP(3);
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(56);
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(56);
            if(lookahead == '\r')
                SKIP(5);
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(70);
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(70);
            if(lookahead == '\r')
                SKIP(7);
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(71);
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(71);
            if(lookahead == '\r')
                SKIP(9);
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(72);
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(72);
            if(lookahead == '\r')
                SKIP(11);
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(61);
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(61);
            if(lookahead == '\r')
                SKIP(13);
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(73);
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(73);
            if(lookahead == '\r')
                SKIP(15);
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(74);
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(74);
            if(lookahead == '\r')
                SKIP(17);
            END_STATE();
        case 19:
            if(lookahead == '\n')
                SKIP(75);
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(75);
            if(lookahead == '\r')
                SKIP(19);
            END_STATE();
        case 21:
            if(lookahead == '\n')
                SKIP(55);
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(55);
            if(lookahead == '\r')
                SKIP(21);
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(57);
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(57);
            if(lookahead == '\r')
                SKIP(23);
            END_STATE();
        case 25:
            if(lookahead == '\n')
                SKIP(59);
            END_STATE();
        case 26:
            if(lookahead == '\n')
                SKIP(59);
            if(lookahead == '\r')
                SKIP(25);
            END_STATE();
        case 27:
            if(lookahead == '\n')
                SKIP(58);
            END_STATE();
        case 28:
            if(lookahead == '\n')
                SKIP(58);
            if(lookahead == '\r')
                SKIP(27);
            END_STATE();
        case 29:
            if(lookahead == '\n')
                SKIP(60);
            END_STATE();
        case 30:
            if(lookahead == '\n')
                SKIP(60);
            if(lookahead == '\r')
                SKIP(29);
            END_STATE();
        case 31:
            if(lookahead == '\n')
                SKIP(76);
            END_STATE();
        case 32:
            if(lookahead == '\n')
                SKIP(76);
            if(lookahead == '\r')
                SKIP(31);
            END_STATE();
        case 33:
            if(lookahead == '\n')
                SKIP(35);
            END_STATE();
        case 34:
            if(lookahead == '\n')
                SKIP(35);
            if(lookahead == '\r')
                SKIP(33);
            END_STATE();
        case 35:
            if(lookahead == '\n')
                ADVANCE(914);
            if(lookahead == '\r')
                ADVANCE(35);
            if(lookahead == '(')
                ADVANCE(511);
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == ':')
                ADVANCE(90);
            if(lookahead == '@')
                ADVANCE(620);
            if(lookahead == '\\')
                SKIP(34);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(35);
            END_STATE();
        case 36:
            if(lookahead == '\n')
                SKIP(62);
            END_STATE();
        case 37:
            if(lookahead == '\n')
                SKIP(62);
            if(lookahead == '\r')
                SKIP(36);
            END_STATE();
        case 38:
            if(lookahead == '\n')
                ADVANCE(918);
            if(lookahead == '\r')
                ADVANCE(915);
            if(lookahead == '\\')
                ADVANCE(916);
            if(lookahead != 0)
                ADVANCE(919);
            END_STATE();
        case 39:
            if(lookahead == '\n')
                SKIP(77);
            END_STATE();
        case 40:
            if(lookahead == '\n')
                SKIP(77);
            if(lookahead == '\r')
                SKIP(39);
            END_STATE();
        case 41:
            if(lookahead == '\n')
                ADVANCE(576);
            if(lookahead == '\r')
                ADVANCE(44);
            if(lookahead == '/')
                ADVANCE(586);
            if(lookahead == '\\')
                ADVANCE(583);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(81);
            if(lookahead != 0)
                ADVANCE(587);
            END_STATE();
        case 42:
            if(lookahead == '\n')
                ADVANCE(576);
            if(lookahead == '\r')
                ADVANCE(43);
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == '\\')
                SKIP(50);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(80);
            END_STATE();
        case 43:
            if(lookahead == '\n')
                ADVANCE(576);
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == '\\')
                SKIP(50);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(80);
            END_STATE();
        case 44:
            if(lookahead == '\n')
                ADVANCE(576);
            if(lookahead == '/')
                ADVANCE(586);
            if(lookahead == '\\')
                ADVANCE(583);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(81);
            if(lookahead != 0)
                ADVANCE(587);
            END_STATE();
        case 45:
            if(lookahead == '\n')
                SKIP(78);
            END_STATE();
        case 46:
            if(lookahead == '\n')
                SKIP(78);
            if(lookahead == '\r')
                SKIP(45);
            END_STATE();
        case 47:
            if(lookahead == '\n')
                ADVANCE(64);
            if(lookahead == '\r')
                ADVANCE(48);
            if(lookahead == '*')
                ADVANCE(925);
            if(lookahead != 0)
                ADVANCE(65);
            END_STATE();
        case 48:
            if(lookahead == '\n')
                ADVANCE(64);
            if(lookahead == '*')
                ADVANCE(925);
            if(lookahead != 0)
                ADVANCE(65);
            END_STATE();
        case 49:
            if(lookahead == '\n')
                SKIP(80);
            END_STATE();
        case 50:
            if(lookahead == '\n')
                SKIP(80);
            if(lookahead == '\r')
                SKIP(49);
            END_STATE();
        case 51:
            if(lookahead == '\n')
                SKIP(79);
            END_STATE();
        case 52:
            if(lookahead == '\n')
                SKIP(79);
            if(lookahead == '\r')
                SKIP(51);
            END_STATE();
        case 53:
            if(lookahead == '\r')
                ADVANCE(920);
            if(lookahead == '\\')
                ADVANCE(916);
            if(lookahead != 0)
                ADVANCE(919);
            END_STATE();
        case 54:
            if(lookahead == ' ')
                ADVANCE(261);
            END_STATE();
        case 55:
            ADVANCE_MAP(
                '"', 516,
                '$', 501,
                '%', 510,
                '(', 511,
                ')', 512,
                '*', 508,
                '+', 504,
                ',', 494,
                '-', 506,
                '/', 509,
                ':', 597,
                ';', 598,
                '<', 489,
                '>', 491,
                '@', 620,
                'L', 514,
            );
            if(lookahead == '\\')
                SKIP(22);
            if(lookahead == ']')
                ADVANCE(649);
            if(lookahead == '^')
                ADVANCE(500);
            if(lookahead == 'b')
                ADVANCE(233);
            if(lookahead == 'i')
                ADVANCE(296);
            if(lookahead == 'l')
                ADVANCE(300);
            if(lookahead == 's')
                ADVANCE(385);
            if(lookahead == '{')
                ADVANCE(591);
            if(lookahead == '|')
                ADVANCE(499);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(55);
            END_STATE();
        case 56:
            ADVANCE_MAP(
                '"', 516,
                '\'', 518,
                '(', 511,
                '+', 505,
                '-', 507,
                '.', 427,
                '/', 63,
                '0', 553,
                ':', 90,
                'F', 685,
                'L', 515,
                'O', 709,
                'T', 689,
            );
            if(lookahead == '\\')
                SKIP(6);
            if(lookahead == 'a')
                ADVANCE(810);
            if(lookahead == 'b')
                ADVANCE(828);
            if(lookahead == 'c')
                ADVANCE(772);
            if(lookahead == 'd')
                ADVANCE(825);
            if(lookahead == 'f')
                ADVANCE(775);
            if(lookahead == 'i')
                ADVANCE(814);
            if(lookahead == 'l')
                ADVANCE(826);
            if(lookahead == 'm')
                ADVANCE(696);
            if(lookahead == 'o')
                ADVANCE(719);
            if(lookahead == 's')
                ADVANCE(734);
            if(lookahead == 'u')
                ADVANCE(783);
            if(lookahead == 'w')
                ADVANCE(713);
            if(lookahead == '~')
                ADVANCE(513);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(56);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(557);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 57:
            ADVANCE_MAP(
                '"', 516,
                '\'', 518,
                '(', 511,
                '+', 505,
                '-', 507,
                '.', 427,
                '/', 63,
                '0', 553,
                ':', 90,
                'F', 685,
                'L', 515,
                'T', 689,
            );
            if(lookahead == '\\')
                SKIP(24);
            if(lookahead == '~')
                ADVANCE(513);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(57);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(557);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 58:
            if(lookahead == '"')
                ADVANCE(516);
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == ':')
                ADVANCE(90);
            if(lookahead == 'L')
                ADVANCE(515);
            if(lookahead == '\\')
                SKIP(28);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(58);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 59:
            if(lookahead == '$')
                ADVANCE(501);
            if(lookahead == ')')
                ADVANCE(512);
            if(lookahead == ',')
                ADVANCE(494);
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == ':')
                ADVANCE(596);
            if(lookahead == ';')
                ADVANCE(598);
            if(lookahead == '>')
                ADVANCE(490);
            if(lookahead == '\\')
                SKIP(26);
            if(lookahead == ']')
                ADVANCE(649);
            if(lookahead == '^')
                ADVANCE(500);
            if(lookahead == 'i')
                ADVANCE(271);
            if(lookahead == 'o')
                ADVANCE(401);
            if(lookahead == '|')
                ADVANCE(499);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(59);
            END_STATE();
        case 60:
            ADVANCE_MAP(
                '(', 511,
                ')', 512,
                ',', 494,
                '/', 63,
                ':', 90,
                ';', 598,
                '<', 488,
                '>', 490,
                '@', 620,
            );
            if(lookahead == '\\')
                SKIP(30);
            if(lookahead == '}')
                ADVANCE(592);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(60);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 61:
            if(lookahead == '(')
                ADVANCE(511);
            if(lookahead == ',')
                ADVANCE(494);
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == ':')
                ADVANCE(90);
            if(lookahead == '>')
                ADVANCE(490);
            if(lookahead == '@')
                ADVANCE(620);
            if(lookahead == 'O')
                ADVANCE(709);
            if(lookahead == '\\')
                SKIP(14);
            if(lookahead == 'a')
                ADVANCE(810);
            if(lookahead == 'b')
                ADVANCE(828);
            if(lookahead == 'c')
                ADVANCE(772);
            if(lookahead == 'd')
                ADVANCE(825);
            if(lookahead == 'f')
                ADVANCE(775);
            if(lookahead == 'i')
                ADVANCE(814);
            if(lookahead == 'l')
                ADVANCE(826);
            if(lookahead == 'm')
                ADVANCE(696);
            if(lookahead == 'o')
                ADVANCE(719);
            if(lookahead == 's')
                ADVANCE(734);
            if(lookahead == 'u')
                ADVANCE(783);
            if(lookahead == 'w')
                ADVANCE(713);
            if(lookahead == '}')
                ADVANCE(592);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(61);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 62:
            if(lookahead == ')')
                ADVANCE(512);
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == '\\')
                SKIP(37);
            if(lookahead == 'i')
                ADVANCE(277);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(62);
            END_STATE();
        case 63:
            if(lookahead == '*')
                ADVANCE(921);
            if(lookahead == '/')
                ADVANCE(910);
            END_STATE();
        case 64:
            if(lookahead == '*')
                ADVANCE(925);
            if(lookahead == '/')
                ADVANCE(66);
            if(lookahead == '\\')
                ADVANCE(47);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(64);
            if(lookahead != 0)
                ADVANCE(65);
            END_STATE();
        case 65:
            if(lookahead == '*')
                ADVANCE(925);
            if(lookahead != 0)
                ADVANCE(65);
            END_STATE();
        case 66:
            if(lookahead == '*')
                ADVANCE(922);
            if(lookahead == '/')
                ADVANCE(911);
            if(lookahead != 0)
                ADVANCE(65);
            END_STATE();
        case 67:
            if(lookahead == ',')
                ADVANCE(494);
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == ':')
                ADVANCE(90);
            if(lookahead == '<')
                ADVANCE(488);
            if(lookahead == '>')
                ADVANCE(490);
            if(lookahead == '@')
                ADVANCE(620);
            if(lookahead == 'O')
                ADVANCE(709);
            if(lookahead == '\\')
                SKIP(2);
            if(lookahead == ']')
                ADVANCE(649);
            if(lookahead == 'a')
                ADVANCE(809);
            if(lookahead == 'b')
                ADVANCE(777);
            if(lookahead == 'c')
                ADVANCE(771);
            if(lookahead == 'd')
                ADVANCE(825);
            if(lookahead == 'e')
                ADVANCE(812);
            if(lookahead == 'f')
                ADVANCE(695);
            if(lookahead == 'i')
                ADVANCE(800);
            if(lookahead == 'l')
                ADVANCE(826);
            if(lookahead == 'm')
                ADVANCE(696);
            if(lookahead == 'n')
                ADVANCE(701);
            if(lookahead == 'o')
                ADVANCE(718);
            if(lookahead == 'p')
                ADVANCE(846);
            if(lookahead == 'r')
                ADVANCE(750);
            if(lookahead == 's')
                ADVANCE(732);
            if(lookahead == 't')
                ADVANCE(903);
            if(lookahead == 'u')
                ADVANCE(782);
            if(lookahead == 'v')
                ADVANCE(692);
            if(lookahead == 'w')
                ADVANCE(713);
            if(lookahead == '{')
                ADVANCE(591);
            if(lookahead == '}')
                ADVANCE(592);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(67);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 68:
            if(lookahead == '.')
                ADVANCE(427);
            if(lookahead == '0')
                ADVANCE(550);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(566);
            END_STATE();
        case 69:
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == ':')
                ADVANCE(90);
            if(lookahead == '@')
                ADVANCE(620);
            if(lookahead == 'O')
                ADVANCE(709);
            if(lookahead == '\\')
                SKIP(4);
            if(lookahead == 'a')
                ADVANCE(809);
            if(lookahead == 'b')
                ADVANCE(777);
            if(lookahead == 'c')
                ADVANCE(771);
            if(lookahead == 'd')
                ADVANCE(825);
            if(lookahead == 'e')
                ADVANCE(812);
            if(lookahead == 'f')
                ADVANCE(775);
            if(lookahead == 'i')
                ADVANCE(800);
            if(lookahead == 'l')
                ADVANCE(826);
            if(lookahead == 'm')
                ADVANCE(696);
            if(lookahead == 'n')
                ADVANCE(701);
            if(lookahead == 'o')
                ADVANCE(718);
            if(lookahead == 'r')
                ADVANCE(750);
            if(lookahead == 's')
                ADVANCE(732);
            if(lookahead == 't')
                ADVANCE(903);
            if(lookahead == 'u')
                ADVANCE(782);
            if(lookahead == 'v')
                ADVANCE(692);
            if(lookahead == 'w')
                ADVANCE(713);
            if(lookahead == '}')
                ADVANCE(592);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(69);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 70:
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == ':')
                ADVANCE(90);
            if(lookahead == '@')
                ADVANCE(620);
            if(lookahead == 'O')
                ADVANCE(709);
            if(lookahead == '\\')
                SKIP(8);
            if(lookahead == 'a')
                ADVANCE(810);
            if(lookahead == 'b')
                ADVANCE(777);
            if(lookahead == 'c')
                ADVANCE(702);
            if(lookahead == 'd')
                ADVANCE(748);
            if(lookahead == 'e')
                ADVANCE(813);
            if(lookahead == 'f')
                ADVANCE(775);
            if(lookahead == 'i')
                ADVANCE(814);
            if(lookahead == 'l')
                ADVANCE(826);
            if(lookahead == 'm')
                ADVANCE(696);
            if(lookahead == 'o')
                ADVANCE(719);
            if(lookahead == 's')
                ADVANCE(732);
            if(lookahead == 'u')
                ADVANCE(782);
            if(lookahead == 'w')
                ADVANCE(713);
            if(lookahead == '}')
                ADVANCE(592);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(70);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 71:
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == ':')
                ADVANCE(90);
            if(lookahead == '@')
                ADVANCE(620);
            if(lookahead == 'O')
                ADVANCE(709);
            if(lookahead == '\\')
                SKIP(10);
            if(lookahead == 'a')
                ADVANCE(810);
            if(lookahead == 'b')
                ADVANCE(777);
            if(lookahead == 'c')
                ADVANCE(772);
            if(lookahead == 'd')
                ADVANCE(825);
            if(lookahead == 'e')
                ADVANCE(813);
            if(lookahead == 'f')
                ADVANCE(775);
            if(lookahead == 'i')
                ADVANCE(814);
            if(lookahead == 'l')
                ADVANCE(826);
            if(lookahead == 'm')
                ADVANCE(696);
            if(lookahead == 'o')
                ADVANCE(719);
            if(lookahead == 's')
                ADVANCE(732);
            if(lookahead == 'u')
                ADVANCE(782);
            if(lookahead == 'w')
                ADVANCE(713);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(71);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 72:
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == ':')
                ADVANCE(90);
            if(lookahead == '@')
                ADVANCE(235);
            if(lookahead == '\\')
                SKIP(12);
            if(lookahead == 'a')
                ADVANCE(810);
            if(lookahead == 'b')
                ADVANCE(828);
            if(lookahead == 'c')
                ADVANCE(771);
            if(lookahead == 'd')
                ADVANCE(825);
            if(lookahead == 'e')
                ADVANCE(813);
            if(lookahead == 'f')
                ADVANCE(775);
            if(lookahead == 'i')
                ADVANCE(814);
            if(lookahead == 'l')
                ADVANCE(826);
            if(lookahead == 'o')
                ADVANCE(719);
            if(lookahead == 's')
                ADVANCE(734);
            if(lookahead == 't')
                ADVANCE(905);
            if(lookahead == 'u')
                ADVANCE(783);
            if(lookahead == 'w')
                ADVANCE(713);
            if(lookahead == '}')
                ADVANCE(592);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(72);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 73:
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == ':')
                ADVANCE(90);
            if(lookahead == 'O')
                ADVANCE(709);
            if(lookahead == '\\')
                SKIP(16);
            if(lookahead == 'a')
                ADVANCE(810);
            if(lookahead == 'b')
                ADVANCE(828);
            if(lookahead == 'c')
                ADVANCE(771);
            if(lookahead == 'd')
                ADVANCE(825);
            if(lookahead == 'e')
                ADVANCE(811);
            if(lookahead == 'f')
                ADVANCE(793);
            if(lookahead == 'i')
                ADVANCE(821);
            if(lookahead == 'l')
                ADVANCE(826);
            if(lookahead == 'o')
                ADVANCE(719);
            if(lookahead == 's')
                ADVANCE(733);
            if(lookahead == 't')
                ADVANCE(906);
            if(lookahead == 'u')
                ADVANCE(782);
            if(lookahead == 'v')
                ADVANCE(693);
            if(lookahead == 'w')
                ADVANCE(714);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(73);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 74:
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == ':')
                ADVANCE(90);
            if(lookahead == '\\')
                SKIP(18);
            if(lookahead == 'b')
                ADVANCE(828);
            if(lookahead == 'c')
                ADVANCE(772);
            if(lookahead == 'd')
                ADVANCE(825);
            if(lookahead == 'f')
                ADVANCE(775);
            if(lookahead == 'i')
                ADVANCE(814);
            if(lookahead == 'l')
                ADVANCE(826);
            if(lookahead == 'o')
                ADVANCE(719);
            if(lookahead == 's')
                ADVANCE(734);
            if(lookahead == 'u')
                ADVANCE(783);
            if(lookahead == 'w')
                ADVANCE(713);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(74);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 75:
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == ':')
                ADVANCE(90);
            if(lookahead == '\\')
                SKIP(20);
            if(lookahead == 'b')
                ADVANCE(828);
            if(lookahead == 'c')
                ADVANCE(772);
            if(lookahead == 'i')
                ADVANCE(814);
            if(lookahead == 'l')
                ADVANCE(835);
            if(lookahead == 's')
                ADVANCE(773);
            if(lookahead == 'u')
                ADVANCE(783);
            if(lookahead == 'w')
                ADVANCE(714);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(75);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 76:
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == ':')
                ADVANCE(596);
            if(lookahead == ';')
                ADVANCE(598);
            if(lookahead == '@')
                ADVANCE(153);
            if(lookahead == '\\')
                SKIP(32);
            if(lookahead == '{')
                ADVANCE(591);
            if(lookahead == '}')
                ADVANCE(592);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(76);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 77:
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == ';')
                ADVANCE(598);
            if(lookahead == '\\')
                SKIP(40);
            if(lookahead == 's')
                ADVANCE(897);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(77);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 78:
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == '\\')
                SKIP(46);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(78);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(517);
            END_STATE();
        case 79:
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == '\\')
                SKIP(52);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(79);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(519);
            END_STATE();
        case 80:
            if(lookahead == '/')
                ADVANCE(63);
            if(lookahead == '\\')
                SKIP(50);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(80);
            END_STATE();
        case 81:
            if(lookahead == '/')
                ADVANCE(586);
            if(lookahead == '\\')
                ADVANCE(583);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(81);
            if(lookahead != 0)
                ADVANCE(587);
            END_STATE();
        case 82:
            if(lookahead == '1')
                ADVANCE(88);
            if(lookahead == '3')
                ADVANCE(84);
            if(lookahead == '6')
                ADVANCE(86);
            if(lookahead == '8')
                ADVANCE(455);
            END_STATE();
        case 83:
            if(lookahead == '1')
                ADVANCE(89);
            if(lookahead == '3')
                ADVANCE(85);
            if(lookahead == '6')
                ADVANCE(87);
            if(lookahead == '8')
                ADVANCE(463);
            if(lookahead == 'e')
                ADVANCE(344);
            END_STATE();
        case 84:
            if(lookahead == '2')
                ADVANCE(469);
            END_STATE();
        case 85:
            if(lookahead == '2')
                ADVANCE(450);
            END_STATE();
        case 86:
            if(lookahead == '4')
                ADVANCE(472);
            END_STATE();
        case 87:
            if(lookahead == '4')
                ADVANCE(453);
            END_STATE();
        case 88:
            if(lookahead == '6')
                ADVANCE(466);
            END_STATE();
        case 89:
            if(lookahead == '6')
                ADVANCE(444);
            END_STATE();
        case 90:
            if(lookahead == ':')
                ADVANCE(483);
            END_STATE();
        case 91:
            if(lookahead == '<')
                ADVANCE(503);
            END_STATE();
        case 92:
            if(lookahead == 'E')
                ADVANCE(542);
            END_STATE();
        case 93:
            if(lookahead == 'E')
                ADVANCE(544);
            END_STATE();
        case 94:
            if(lookahead == 'L')
                ADVANCE(95);
            END_STATE();
        case 95:
            if(lookahead == 'S')
                ADVANCE(93);
            END_STATE();
        case 96:
            if(lookahead == 'U')
                ADVANCE(92);
            END_STATE();
        case 97:
            if(lookahead == '_')
                ADVANCE(294);
            END_STATE();
        case 98:
            if(lookahead == '_')
                ADVANCE(259);
            END_STATE();
        case 99:
            if(lookahead == '_')
                ADVANCE(263);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(353);
            if(lookahead == 'o')
                ADVANCE(272);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(250);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(250);
            if(lookahead == 'o')
                ADVANCE(224);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(419);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(346);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(151);
            END_STATE();
        case 106:
            if(lookahead == 'a')
                ADVANCE(269);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(234);
            END_STATE();
        case 108:
            if(lookahead == 'a')
                ADVANCE(383);
            END_STATE();
        case 109:
            if(lookahead == 'a')
                ADVANCE(347);
            END_STATE();
        case 110:
            if(lookahead == 'a')
                ADVANCE(329);
            END_STATE();
        case 111:
            if(lookahead == 'a')
                ADVANCE(246);
            END_STATE();
        case 112:
            if(lookahead == 'a')
                ADVANCE(330);
            END_STATE();
        case 113:
            if(lookahead == 'a')
                ADVANCE(402);
            END_STATE();
        case 114:
            if(lookahead == 'a')
                ADVANCE(248);
            END_STATE();
        case 115:
            if(lookahead == 'a')
                ADVANCE(274);
            END_STATE();
        case 116:
            if(lookahead == 'a')
                ADVANCE(364);
            END_STATE();
        case 117:
            if(lookahead == 'a')
                ADVANCE(247);
            END_STATE();
        case 118:
            if(lookahead == 'a')
                ADVANCE(270);
            END_STATE();
        case 119:
            if(lookahead == 'a')
                ADVANCE(388);
            END_STATE();
        case 120:
            if(lookahead == 'a')
                ADVANCE(406);
            END_STATE();
        case 121:
            if(lookahead == 'a')
                ADVANCE(140);
            END_STATE();
        case 122:
            if(lookahead == 'a')
                ADVANCE(237);
            END_STATE();
        case 123:
            if(lookahead == 'a')
                ADVANCE(396);
            END_STATE();
        case 124:
            if(lookahead == 'a')
                ADVANCE(238);
            END_STATE();
        case 125:
            if(lookahead == 'b')
                ADVANCE(253);
            END_STATE();
        case 126:
            if(lookahead == 'b')
                ADVANCE(254);
            END_STATE();
        case 127:
            if(lookahead == 'b')
                ADVANCE(409);
            END_STATE();
        case 128:
            if(lookahead == 'b')
                ADVANCE(257);
            END_STATE();
        case 129:
            if(lookahead == 'c')
                ADVANCE(640);
            END_STATE();
        case 130:
            if(lookahead == 'c')
                ADVANCE(213);
            END_STATE();
        case 131:
            if(lookahead == 'c')
                ADVANCE(384);
            END_STATE();
        case 132:
            if(lookahead == 'c')
                ADVANCE(177);
            END_STATE();
        case 133:
            if(lookahead == 'c')
                ADVANCE(394);
            END_STATE();
        case 134:
            if(lookahead == 'c')
                ADVANCE(111);
            END_STATE();
        case 135:
            if(lookahead == 'c')
                ADVANCE(111);
            if(lookahead == 'n')
                ADVANCE(204);
            END_STATE();
        case 136:
            if(lookahead == 'c')
                ADVANCE(111);
            if(lookahead == 'n')
                ADVANCE(210);
            END_STATE();
        case 137:
            if(lookahead == 'c')
                ADVANCE(368);
            END_STATE();
        case 138:
            if(lookahead == 'c')
                ADVANCE(371);
            END_STATE();
        case 139:
            if(lookahead == 'c')
                ADVANCE(162);
            END_STATE();
        case 140:
            if(lookahead == 'c')
                ADVANCE(169);
            END_STATE();
        case 141:
            if(lookahead == 'd')
                ADVANCE(577);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(425);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(582);
            END_STATE();
        case 142:
            if(lookahead == 'd')
                ADVANCE(599);
            END_STATE();
        case 143:
            if(lookahead == 'd')
                ADVANCE(459);
            END_STATE();
        case 144:
            if(lookahead == 'd')
                ADVANCE(656);
            END_STATE();
        case 145:
            if(lookahead == 'd')
                ADVANCE(614);
            END_STATE();
        case 146:
            if(lookahead == 'd')
                ADVANCE(54);
            END_STATE();
        case 147:
            if(lookahead == 'd')
                ADVANCE(408);
            END_STATE();
        case 148:
            if(lookahead == 'd')
                ADVANCE(317);
            if(lookahead == 'l')
                ADVANCE(305);
            END_STATE();
        case 149:
            if(lookahead == 'd')
                ADVANCE(172);
            if(lookahead == 'i')
                ADVANCE(144);
            if(lookahead == 'n')
                ADVANCE(106);
            if(lookahead == 'p')
                ADVANCE(339);
            END_STATE();
        case 150:
            if(lookahead == 'd')
                ADVANCE(172);
            if(lookahead == 'i')
                ADVANCE(144);
            if(lookahead == 'p')
                ADVANCE(339);
            END_STATE();
        case 151:
            if(lookahead == 'd')
                ADVANCE(303);
            END_STATE();
        case 152:
            if(lookahead == 'd')
                ADVANCE(191);
            END_STATE();
        case 153:
            if(lookahead == 'd')
                ADVANCE(195);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(198);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(414);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(654);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(149);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(476);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(623);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(666);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(642);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(495);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(624);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(608);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(628);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(626);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(478);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(150);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(594);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(98);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(668);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(197);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(417);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(200);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(348);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(143);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(323);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(350);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(251);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(351);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(146);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(292);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(352);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(344);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(115);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(366);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(369);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(381);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(137);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(289);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(201);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(337);
            END_STATE();
        case 193:
            if(lookahead == 'e')
                ADVANCE(338);
            END_STATE();
        case 194:
            if(lookahead == 'e')
                ADVANCE(395);
            END_STATE();
        case 195:
            if(lookahead == 'e')
                ADVANCE(203);
            END_STATE();
        case 196:
            if(lookahead == 'e')
                ADVANCE(398);
            if(lookahead == 'h')
                ADVANCE(301);
            if(lookahead == 't')
                ADVANCE(334);
            if(lookahead == 'u')
                ADVANCE(326);
            END_STATE();
        case 197:
            if(lookahead == 'f')
                ADVANCE(646);
            END_STATE();
        case 198:
            if(lookahead == 'f')
                ADVANCE(113);
            END_STATE();
        case 199:
            if(lookahead == 'f')
                ADVANCE(231);
            if(lookahead == 'm')
                ADVANCE(109);
            if(lookahead == 's')
                ADVANCE(187);
            END_STATE();
        case 200:
            if(lookahead == 'f')
                ADVANCE(223);
            END_STATE();
        case 201:
            if(lookahead == 'f')
                ADVANCE(236);
            END_STATE();
        case 202:
            if(lookahead == 'f')
                ADVANCE(121);
            END_STATE();
        case 203:
            if(lookahead == 'f')
                ADVANCE(120);
            END_STATE();
        case 204:
            if(lookahead == 'g')
                ADVANCE(446);
            END_STATE();
        case 205:
            if(lookahead == 'g')
                ADVANCE(484);
            END_STATE();
        case 206:
            if(lookahead == 'g')
                ADVANCE(486);
            END_STATE();
        case 207:
            if(lookahead == 'g')
                ADVANCE(452);
            END_STATE();
        case 208:
            if(lookahead == 'g')
                ADVANCE(468);
            END_STATE();
        case 209:
            if(lookahead == 'g')
                ADVANCE(471);
            END_STATE();
        case 210:
            if(lookahead == 'g')
                ADVANCE(448);
            END_STATE();
        case 211:
            if(lookahead == 'g')
                ADVANCE(290);
            END_STATE();
        case 212:
            if(lookahead == 'g')
                ADVANCE(295);
            END_STATE();
        case 213:
            if(lookahead == 'h')
                ADVANCE(652);
            END_STATE();
        case 214:
            if(lookahead == 'h')
                ADVANCE(112);
            END_STATE();
        case 215:
            if(lookahead == 'h')
                ADVANCE(315);
            END_STATE();
        case 216:
            if(lookahead == 'i')
                ADVANCE(412);
            END_STATE();
        case 217:
            if(lookahead == 'i')
                ADVANCE(360);
            if(lookahead == 'o')
                ADVANCE(298);
            END_STATE();
        case 218:
            if(lookahead == 'i')
                ADVANCE(127);
            END_STATE();
        case 219:
            if(lookahead == 'i')
                ADVANCE(211);
            END_STATE();
        case 220:
            if(lookahead == 'i')
                ADVANCE(413);
            END_STATE();
        case 221:
            if(lookahead == 'i')
                ADVANCE(287);
            if(lookahead == 'n')
                ADVANCE(226);
            END_STATE();
        case 222:
            if(lookahead == 'i')
                ADVANCE(104);
            END_STATE();
        case 223:
            if(lookahead == 'i')
                ADVANCE(415);
            END_STATE();
        case 224:
            if(lookahead == 'i')
                ADVANCE(142);
            END_STATE();
        case 225:
            if(lookahead == 'i')
                ADVANCE(302);
            END_STATE();
        case 226:
            if(lookahead == 'i')
                ADVANCE(302);
            if(lookahead == 's')
                ADVANCE(219);
            END_STATE();
        case 227:
            if(lookahead == 'i')
                ADVANCE(129);
            END_STATE();
        case 228:
            if(lookahead == 'i')
                ADVANCE(279);
            if(lookahead == 'u')
                ADVANCE(138);
            END_STATE();
        case 229:
            if(lookahead == 'i')
                ADVANCE(379);
            END_STATE();
        case 230:
            if(lookahead == 'i')
                ADVANCE(281);
            END_STATE();
        case 231:
            if(lookahead == 'i')
                ADVANCE(179);
            END_STATE();
        case 232:
            if(lookahead == 'i')
                ADVANCE(376);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(380);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(356);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(212);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(291);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(357);
            END_STATE();
        case 238:
            if(lookahead == 'i')
                ADVANCE(358);
            END_STATE();
        case 239:
            if(lookahead == 'i')
                ADVANCE(391);
            END_STATE();
        case 240:
            if(lookahead == 'i')
                ADVANCE(306);
            END_STATE();
        case 241:
            if(lookahead == 'i')
                ADVANCE(307);
            END_STATE();
        case 242:
            if(lookahead == 'i')
                ADVANCE(397);
            END_STATE();
        case 243:
            if(lookahead == 'j')
                ADVANCE(189);
            END_STATE();
        case 244:
            if(lookahead == 'k')
                ADVANCE(615);
            END_STATE();
        case 245:
            if(lookahead == 'l')
                ADVANCE(222);
            END_STATE();
        case 246:
            if(lookahead == 'l')
                ADVANCE(593);
            END_STATE();
        case 247:
            if(lookahead == 'l')
                ADVANCE(650);
            END_STATE();
        case 248:
            if(lookahead == 'l')
                ADVANCE(97);
            END_STATE();
        case 249:
            if(lookahead == 'l')
                ADVANCE(421);
            END_STATE();
        case 250:
            if(lookahead == 'l')
                ADVANCE(410);
            END_STATE();
        case 251:
            if(lookahead == 'l')
                ADVANCE(145);
            END_STATE();
        case 252:
            if(lookahead == 'l')
                ADVANCE(185);
            END_STATE();
        case 253:
            if(lookahead == 'l')
                ADVANCE(227);
            END_STATE();
        case 254:
            if(lookahead == 'l')
                ADVANCE(158);
            END_STATE();
        case 255:
            if(lookahead == 'l')
                ADVANCE(159);
            END_STATE();
        case 256:
            if(lookahead == 'l')
                ADVANCE(373);
            END_STATE();
        case 257:
            if(lookahead == 'l')
                ADVANCE(167);
            END_STATE();
        case 258:
            if(lookahead == 'l')
                ADVANCE(399);
            END_STATE();
        case 259:
            if(lookahead == 'l')
                ADVANCE(239);
            END_STATE();
        case 260:
            if(lookahead == 'l')
                ADVANCE(305);
            END_STATE();
        case 261:
            if(lookahead == 'l')
                ADVANCE(308);
            if(lookahead == 's')
                ADVANCE(215);
            END_STATE();
        case 262:
            if(lookahead == 'l')
                ADVANCE(310);
            END_STATE();
        case 263:
            if(lookahead == 'l')
                ADVANCE(242);
            END_STATE();
        case 264:
            if(lookahead == 'm')
                ADVANCE(324);
            if(lookahead == 'n')
                ADVANCE(375);
            END_STATE();
        case 265:
            if(lookahead == 'm')
                ADVANCE(324);
            if(lookahead == 'n')
                ADVANCE(392);
            END_STATE();
        case 266:
            if(lookahead == 'm')
                ADVANCE(634);
            END_STATE();
        case 267:
            if(lookahead == 'm')
                ADVANCE(109);
            END_STATE();
        case 268:
            if(lookahead == 'm')
                ADVANCE(109);
            if(lookahead == 's')
                ADVANCE(187);
            END_STATE();
        case 269:
            if(lookahead == 'm')
                ADVANCE(163);
            END_STATE();
        case 270:
            if(lookahead == 'm')
                ADVANCE(183);
            END_STATE();
        case 271:
            if(lookahead == 'n')
                ADVANCE(602);
            END_STATE();
        case 272:
            if(lookahead == 'n')
                ADVANCE(355);
            END_STATE();
        case 273:
            if(lookahead == 'n')
                ADVANCE(632);
            END_STATE();
        case 274:
            if(lookahead == 'n')
                ADVANCE(457);
            END_STATE();
        case 275:
            if(lookahead == 'n')
                ADVANCE(589);
            END_STATE();
        case 276:
            if(lookahead == 'n')
                ADVANCE(617);
            END_STATE();
        case 277:
            if(lookahead == 'n')
                ADVANCE(601);
            END_STATE();
        case 278:
            if(lookahead == 'n')
                ADVANCE(400);
            if(lookahead == 'x')
                ADVANCE(132);
            END_STATE();
        case 279:
            if(lookahead == 'n')
                ADVANCE(205);
            END_STATE();
        case 280:
            if(lookahead == 'n')
                ADVANCE(282);
            END_STATE();
        case 281:
            if(lookahead == 'n')
                ADVANCE(206);
            END_STATE();
        case 282:
            if(lookahead == 'n')
                ADVANCE(309);
            END_STATE();
        case 283:
            if(lookahead == 'n')
                ADVANCE(207);
            END_STATE();
        case 284:
            if(lookahead == 'n')
                ADVANCE(208);
            END_STATE();
        case 285:
            if(lookahead == 'n')
                ADVANCE(249);
            END_STATE();
        case 286:
            if(lookahead == 'n')
                ADVANCE(209);
            END_STATE();
        case 287:
            if(lookahead == 'n')
                ADVANCE(362);
            END_STATE();
        case 288:
            if(lookahead == 'n')
                ADVANCE(354);
            END_STATE();
        case 289:
            if(lookahead == 'n')
                ADVANCE(389);
            END_STATE();
        case 290:
            if(lookahead == 'n')
                ADVANCE(181);
            END_STATE();
        case 291:
            if(lookahead == 'n')
                ADVANCE(171);
            END_STATE();
        case 292:
            if(lookahead == 'n')
                ADVANCE(139);
            END_STATE();
        case 293:
            if(lookahead == 'n')
                ADVANCE(225);
            END_STATE();
        case 294:
            if(lookahead == 'n')
                ADVANCE(118);
            END_STATE();
        case 295:
            if(lookahead == 'n')
                ADVANCE(313);
            END_STATE();
        case 296:
            if(lookahead == 'n')
                ADVANCE(392);
            END_STATE();
        case 297:
            if(lookahead == 'o')
                ADVANCE(147);
            END_STATE();
        case 298:
            if(lookahead == 'o')
                ADVANCE(252);
            END_STATE();
        case 299:
            if(lookahead == 'o')
                ADVANCE(116);
            END_STATE();
        case 300:
            if(lookahead == 'o')
                ADVANCE(134);
            END_STATE();
        case 301:
            if(lookahead == 'o')
                ADVANCE(336);
            END_STATE();
        case 302:
            if(lookahead == 'o')
                ADVANCE(273);
            END_STATE();
        case 303:
            if(lookahead == 'o')
                ADVANCE(285);
            END_STATE();
        case 304:
            if(lookahead == 'o')
                ADVANCE(331);
            END_STATE();
        case 305:
            if(lookahead == 'o')
                ADVANCE(283);
            END_STATE();
        case 306:
            if(lookahead == 'o')
                ADVANCE(275);
            END_STATE();
        case 307:
            if(lookahead == 'o')
                ADVANCE(276);
            END_STATE();
        case 308:
            if(lookahead == 'o')
                ADVANCE(284);
            END_STATE();
        case 309:
            if(lookahead == 'o')
                ADVANCE(387);
            END_STATE();
        case 310:
            if(lookahead == 'o')
                ADVANCE(286);
            END_STATE();
        case 311:
            if(lookahead == 'o')
                ADVANCE(288);
            END_STATE();
        case 312:
            if(lookahead == 'o')
                ADVANCE(340);
            END_STATE();
        case 313:
            if(lookahead == 'o')
                ADVANCE(343);
            END_STATE();
        case 314:
            if(lookahead == 'o')
                ADVANCE(341);
            END_STATE();
        case 315:
            if(lookahead == 'o')
                ADVANCE(342);
            END_STATE();
        case 316:
            if(lookahead == 'o')
                ADVANCE(136);
            END_STATE();
        case 317:
            if(lookahead == 'o')
                ADVANCE(411);
            END_STATE();
        case 318:
            if(lookahead == 'p')
                ADVANCE(497);
            END_STATE();
        case 319:
            if(lookahead == 'p')
                ADVANCE(157);
            END_STATE();
        case 320:
            if(lookahead == 'p')
                ADVANCE(165);
            END_STATE();
        case 321:
            if(lookahead == 'p')
                ADVANCE(166);
            END_STATE();
        case 322:
            if(lookahead == 'p')
                ADVANCE(168);
            END_STATE();
        case 323:
            if(lookahead == 'p')
                ADVANCE(386);
            END_STATE();
        case 324:
            if(lookahead == 'p')
                ADVANCE(312);
            END_STATE();
        case 325:
            if(lookahead == 'p')
                ADVANCE(314);
            END_STATE();
        case 326:
            if(lookahead == 'p')
                ADVANCE(325);
            END_STATE();
        case 327:
            if(lookahead == 'q')
                ADVANCE(404);
            if(lookahead == 't')
                ADVANCE(345);
            END_STATE();
        case 328:
            if(lookahead == 'r')
                ADVANCE(228);
            END_STATE();
        case 329:
            if(lookahead == 'r')
                ADVANCE(479);
            END_STATE();
        case 330:
            if(lookahead == 'r')
                ADVANCE(481);
            END_STATE();
        case 331:
            if(lookahead == 'r')
                ADVANCE(420);
            END_STATE();
        case 332:
            if(lookahead == 'r')
                ADVANCE(218);
            END_STATE();
        case 333:
            if(lookahead == 'r')
                ADVANCE(122);
            END_STATE();
        case 334:
            if(lookahead == 'r')
                ADVANCE(407);
            END_STATE();
        case 335:
            if(lookahead == 'r')
                ADVANCE(230);
            END_STATE();
        case 336:
            if(lookahead == 'r')
                ADVANCE(367);
            END_STATE();
        case 337:
            if(lookahead == 'r')
                ADVANCE(114);
            END_STATE();
        case 338:
            if(lookahead == 'r')
                ADVANCE(117);
            END_STATE();
        case 339:
            if(lookahead == 'r')
                ADVANCE(174);
            END_STATE();
        case 340:
            if(lookahead == 'r')
                ADVANCE(370);
            END_STATE();
        case 341:
            if(lookahead == 'r')
                ADVANCE(382);
            END_STATE();
        case 342:
            if(lookahead == 'r')
                ADVANCE(374);
            END_STATE();
        case 343:
            if(lookahead == 'r')
                ADVANCE(170);
            END_STATE();
        case 344:
            if(lookahead == 'r')
                ADVANCE(202);
            END_STATE();
        case 345:
            if(lookahead == 'r')
                ADVANCE(124);
            END_STATE();
        case 346:
            if(lookahead == 's')
                ADVANCE(638);
            END_STATE();
        case 347:
            if(lookahead == 's')
                ADVANCE(244);
            END_STATE();
        case 348:
            if(lookahead == 's')
                ADVANCE(605);
            END_STATE();
        case 349:
            if(lookahead == 's')
                ADVANCE(639);
            END_STATE();
        case 350:
            if(lookahead == 's')
                ADVANCE(610);
            END_STATE();
        case 351:
            if(lookahead == 's')
                ADVANCE(611);
            END_STATE();
        case 352:
            if(lookahead == 's')
                ADVANCE(651);
            END_STATE();
        case 353:
            if(lookahead == 's')
                ADVANCE(156);
            END_STATE();
        case 354:
            if(lookahead == 's')
                ADVANCE(363);
            END_STATE();
        case 355:
            if(lookahead == 's')
                ADVANCE(363);
            if(lookahead == 't')
                ADVANCE(173);
            END_STATE();
        case 356:
            if(lookahead == 's')
                ADVANCE(175);
            END_STATE();
        case 357:
            if(lookahead == 's')
                ADVANCE(178);
            END_STATE();
        case 358:
            if(lookahead == 's')
                ADVANCE(180);
            END_STATE();
        case 359:
            if(lookahead == 't')
                ADVANCE(377);
            END_STATE();
        case 360:
            if(lookahead == 't')
                ADVANCE(199);
            END_STATE();
        case 361:
            if(lookahead == 't')
                ADVANCE(603);
            END_STATE();
        case 362:
            if(lookahead == 't')
                ADVANCE(82);
            END_STATE();
        case 363:
            if(lookahead == 't')
                ADVANCE(636);
            END_STATE();
        case 364:
            if(lookahead == 't')
                ADVANCE(474);
            END_STATE();
        case 365:
            if(lookahead == 't')
                ADVANCE(604);
            END_STATE();
        case 366:
            if(lookahead == 't')
                ADVANCE(461);
            END_STATE();
        case 367:
            if(lookahead == 't')
                ADVANCE(442);
            END_STATE();
        case 368:
            if(lookahead == 't')
                ADVANCE(661);
            END_STATE();
        case 369:
            if(lookahead == 't')
                ADVANCE(612);
            END_STATE();
        case 370:
            if(lookahead == 't')
                ADVANCE(659);
            END_STATE();
        case 371:
            if(lookahead == 't')
                ADVANCE(630);
            END_STATE();
        case 372:
            if(lookahead == 't')
                ADVANCE(665);
            END_STATE();
        case 373:
            if(lookahead == 't')
                ADVANCE(618);
            END_STATE();
        case 374:
            if(lookahead == 't')
                ADVANCE(465);
            END_STATE();
        case 375:
            if(lookahead == 't')
                ADVANCE(83);
            END_STATE();
        case 376:
            if(lookahead == 't')
                ADVANCE(268);
            END_STATE();
        case 377:
            if(lookahead == 't')
                ADVANCE(332);
            END_STATE();
        case 378:
            if(lookahead == 't')
                ADVANCE(422);
            END_STATE();
        case 379:
            if(lookahead == 't')
                ADVANCE(130);
            END_STATE();
        case 380:
            if(lookahead == 't')
                ADVANCE(267);
            END_STATE();
        case 381:
            if(lookahead == 't')
                ADVANCE(333);
            END_STATE();
        case 382:
            if(lookahead == 't')
                ADVANCE(349);
            END_STATE();
        case 383:
            if(lookahead == 't')
                ADVANCE(220);
            END_STATE();
        case 384:
            if(lookahead == 't')
                ADVANCE(186);
            END_STATE();
        case 385:
            if(lookahead == 't')
                ADVANCE(334);
            if(lookahead == 'u')
                ADVANCE(326);
            END_STATE();
        case 386:
            if(lookahead == 't')
                ADVANCE(240);
            END_STATE();
        case 387:
            if(lookahead == 't')
                ADVANCE(123);
            END_STATE();
        case 388:
            if(lookahead == 't')
                ADVANCE(161);
            END_STATE();
        case 389:
            if(lookahead == 't')
                ADVANCE(378);
            END_STATE();
        case 390:
            if(lookahead == 't')
                ADVANCE(164);
            END_STATE();
        case 391:
            if(lookahead == 't')
                ADVANCE(192);
            END_STATE();
        case 392:
            if(lookahead == 't')
                ADVANCE(184);
            END_STATE();
        case 393:
            if(lookahead == 't')
                ADVANCE(335);
            END_STATE();
        case 394:
            if(lookahead == 't')
                ADVANCE(304);
            END_STATE();
        case 395:
            if(lookahead == 't')
                ADVANCE(423);
            END_STATE();
        case 396:
            if(lookahead == 't')
                ADVANCE(241);
            END_STATE();
        case 397:
            if(lookahead == 't')
                ADVANCE(193);
            END_STATE();
        case 398:
            if(lookahead == 't')
                ADVANCE(345);
            END_STATE();
        case 399:
            if(lookahead == 't')
                ADVANCE(99);
            END_STATE();
        case 400:
            if(lookahead == 'u')
                ADVANCE(266);
            END_STATE();
        case 401:
            if(lookahead == 'u')
                ADVANCE(361);
            END_STATE();
        case 402:
            if(lookahead == 'u')
                ADVANCE(256);
            END_STATE();
        case 403:
            if(lookahead == 'u')
                ADVANCE(365);
            END_STATE();
        case 404:
            if(lookahead == 'u')
                ADVANCE(182);
            END_STATE();
        case 405:
            if(lookahead == 'u')
                ADVANCE(126);
            END_STATE();
        case 406:
            if(lookahead == 'u')
                ADVANCE(258);
            END_STATE();
        case 407:
            if(lookahead == 'u')
                ADVANCE(138);
            END_STATE();
        case 408:
            if(lookahead == 'u')
                ADVANCE(255);
            END_STATE();
        case 409:
            if(lookahead == 'u')
                ADVANCE(390);
            END_STATE();
        case 410:
            if(lookahead == 'u')
                ADVANCE(194);
            END_STATE();
        case 411:
            if(lookahead == 'u')
                ADVANCE(128);
            END_STATE();
        case 412:
            if(lookahead == 'v')
                ADVANCE(119);
            END_STATE();
        case 413:
            if(lookahead == 'v')
                ADVANCE(160);
            END_STATE();
        case 414:
            if(lookahead == 'w')
                ADVANCE(103);
            END_STATE();
        case 415:
            if(lookahead == 'x')
                ADVANCE(658);
            END_STATE();
        case 416:
            if(lookahead == 'x')
                ADVANCE(176);
            END_STATE();
        case 417:
            if(lookahead == 'x')
                ADVANCE(372);
            END_STATE();
        case 418:
            if(lookahead == 'y')
                ADVANCE(492);
            END_STATE();
        case 419:
            if(lookahead == 'y')
                ADVANCE(663);
            END_STATE();
        case 420:
            if(lookahead == 'y')
                ADVANCE(644);
            END_STATE();
        case 421:
            if(lookahead == 'y')
                ADVANCE(606);
            END_STATE();
        case 422:
            if(lookahead == 'y')
                ADVANCE(320);
            END_STATE();
        case 423:
            if(lookahead == 'y')
                ADVANCE(321);
            END_STATE();
        case 424:
            if(lookahead == 'y')
                ADVANCE(322);
            END_STATE();
        case 425:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(425);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(582);
            END_STATE();
        case 426:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(558);
            END_STATE();
        case 427:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            END_STATE();
        case 428:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(566);
            END_STATE();
        case 429:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(560);
            END_STATE();
        case 430:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(566);
            END_STATE();
        case 431:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(548);
            END_STATE();
        case 432:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(587);
            END_STATE();
        case 433:
            if(eof)
                ADVANCE(441);
            if(lookahead == '\n')
                SKIP(0);
            END_STATE();
        case 434:
            if(eof)
                ADVANCE(441);
            if(lookahead == '\n')
                SKIP(0);
            if(lookahead == '\r')
                SKIP(433);
            END_STATE();
        case 435:
            if(eof)
                ADVANCE(441);
            if(lookahead == '\n')
                SKIP(439);
            END_STATE();
        case 436:
            if(eof)
                ADVANCE(441);
            if(lookahead == '\n')
                SKIP(439);
            if(lookahead == '\r')
                SKIP(435);
            END_STATE();
        case 437:
            if(eof)
                ADVANCE(441);
            if(lookahead == '\n')
                SKIP(440);
            END_STATE();
        case 438:
            if(eof)
                ADVANCE(441);
            if(lookahead == '\n')
                SKIP(440);
            if(lookahead == '\r')
                SKIP(437);
            END_STATE();
        case 439:
            if(eof)
                ADVANCE(441);
            ADVANCE_MAP(
                '"', 516,
                '#', 141,
                '$', 501,
                '%', 510,
                ')', 512,
                '*', 508,
                '+', 504,
                ',', 494,
                '-', 506,
                '/', 509,
                ':', 597,
                ';', 598,
                '<', 91,
                '=', 622,
                '>', 491,
                '@', 621,
                'L', 514,
                '[', 648,
            );
            if(lookahead == '\\')
                SKIP(436);
            if(lookahead == ']')
                ADVANCE(649);
            if(lookahead == '^')
                ADVANCE(500);
            if(lookahead == 'a')
                ADVANCE(359);
            if(lookahead == 'b')
                ADVANCE(217);
            if(lookahead == 'c')
                ADVANCE(100);
            if(lookahead == 'd')
                ADVANCE(154);
            if(lookahead == 'e')
                ADVANCE(278);
            if(lookahead == 'g')
                ADVANCE(188);
            if(lookahead == 'i')
                ADVANCE(264);
            if(lookahead == 'l')
                ADVANCE(316);
            if(lookahead == 'm')
                ADVANCE(297);
            if(lookahead == 'n')
                ADVANCE(108);
            if(lookahead == 'o')
                ADVANCE(131);
            if(lookahead == 'r')
                ADVANCE(107);
            if(lookahead == 's')
                ADVANCE(196);
            if(lookahead == 't')
                ADVANCE(424);
            if(lookahead == 'u')
                ADVANCE(221);
            if(lookahead == 'v')
                ADVANCE(102);
            if(lookahead == '{')
                ADVANCE(591);
            if(lookahead == '|')
                ADVANCE(499);
            if(lookahead == '}')
                ADVANCE(592);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(439);
            END_STATE();
        case 440:
            if(eof)
                ADVANCE(441);
            ADVANCE_MAP(
                '#', 152,
                '$', 501,
                '%', 510,
                ')', 512,
                '*', 508,
                '+', 504,
                ',', 494,
                '-', 506,
                '/', 509,
                ':', 596,
                ';', 598,
                '<', 91,
                '>', 491,
                '@', 621,
            );
            if(lookahead == '\\')
                SKIP(438);
            if(lookahead == ']')
                ADVANCE(649);
            if(lookahead == '^')
                ADVANCE(500);
            if(lookahead == 'a')
                ADVANCE(245);
            if(lookahead == 'b')
                ADVANCE(232);
            if(lookahead == 'c')
                ADVANCE(311);
            if(lookahead == 'e')
                ADVANCE(278);
            if(lookahead == 'i')
                ADVANCE(265);
            if(lookahead == 'l')
                ADVANCE(300);
            if(lookahead == 'm')
                ADVANCE(297);
            if(lookahead == 'n')
                ADVANCE(108);
            if(lookahead == 's')
                ADVANCE(385);
            if(lookahead == 't')
                ADVANCE(424);
            if(lookahead == 'u')
                ADVANCE(293);
            if(lookahead == 'v')
                ADVANCE(101);
            if(lookahead == '{')
                ADVANCE(591);
            if(lookahead == '|')
                ADVANCE(499);
            if(lookahead == '}')
                ADVANCE(592);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(440);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(148);
            END_STATE();
        case 447:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(148);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(260);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(260);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(262);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(503);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(502);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(427);
            if(lookahead == '0')
                ADVANCE(554);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(558);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(427);
            if(lookahead == '0')
                ADVANCE(554);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(558);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '*')
                ADVANCE(921);
            if(lookahead == '/')
                ADVANCE(910);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(517);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(94);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(96);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(353);
            if(lookahead == 'h')
                ADVANCE(110);
            if(lookahead == 'o')
                ADVANCE(272);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(250);
            if(lookahead == 'o')
                ADVANCE(224);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(133);
            if(lookahead == 'i')
                ADVANCE(416);
            if(lookahead == 'l')
                ADVANCE(299);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(318);
            if(lookahead == 'o')
                ADVANCE(147);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(234);
            if(lookahead == 'e')
                ADVANCE(105);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(383);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'b')
                ADVANCE(243);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(214);
            if(lookahead == 's')
                ADVANCE(393);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(384);
            if(lookahead == 'n')
                ADVANCE(155);
            if(lookahead == 'u')
                ADVANCE(361);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(198);
            if(lookahead == 'o')
                ADVANCE(405);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(327);
            if(lookahead == 'h')
                ADVANCE(301);
            if(lookahead == 't')
                ADVANCE(328);
            if(lookahead == 'u')
                ADVANCE(326);
            if(lookahead == 'w')
                ADVANCE(229);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(381);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(360);
            if(lookahead == 'o')
                ADVANCE(298);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(287);
            if(lookahead == 'n')
                ADVANCE(226);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'l')
                ADVANCE(222);
            if(lookahead == 'n')
                ADVANCE(418);
            if(lookahead == 't')
                ADVANCE(377);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'm')
                ADVANCE(324);
            if(lookahead == 'n')
                ADVANCE(602);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(400);
            if(lookahead == 'v')
                ADVANCE(190);
            if(lookahead == 'x')
                ADVANCE(132);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(135);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'r')
                ADVANCE(216);
            if(lookahead == 'u')
                ADVANCE(125);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'y')
                ADVANCE(319);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(427);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(575);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 431,
                'B', 547,
                'D', 547,
                'F', 547,
                'b', 547,
                'd', 547,
                'f', 547,
                'L', 574,
                'U', 574,
                'W', 574,
                'l', 574,
                'u', 574,
                'w', 574,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(547);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 431,
                'B', 548,
                'D', 548,
                'F', 548,
                'b', 548,
                'd', 548,
                'f', 548,
                'L', 575,
                'U', 575,
                'W', 575,
                'l', 575,
                'u', 575,
                'w', 575,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(548);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 428,
                '.', 571,
                'B', 563,
                'b', 563,
                'E', 561,
                'e', 561,
                'P', 569,
                'p', 569,
                'X', 908,
                'x', 908,
                'A', 564,
                'C', 564,
                'a', 564,
                'c', 564,
                'D', 564,
                'F', 564,
                'd', 564,
                'f', 564,
                'L', 574,
                'U', 574,
                'W', 574,
                'l', 574,
                'u', 574,
                'w', 574,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(551);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 428,
                '.', 571,
                'B', 565,
                'b', 565,
                'E', 562,
                'e', 562,
                'P', 570,
                'p', 570,
                'X', 430,
                'x', 430,
                'A', 566,
                'C', 566,
                'a', 566,
                'c', 566,
                'D', 566,
                'F', 566,
                'd', 566,
                'f', 566,
                'L', 575,
                'U', 575,
                'W', 575,
                'l', 575,
                'u', 575,
                'w', 575,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 428,
                '.', 571,
                'E', 561,
                'e', 561,
                'P', 569,
                'p', 569,
                'A', 564,
                'C', 564,
                'a', 564,
                'c', 564,
                'B', 564,
                'D', 564,
                'F', 564,
                'b', 564,
                'd', 564,
                'f', 564,
                'L', 574,
                'U', 574,
                'W', 574,
                'l', 574,
                'u', 574,
                'w', 574,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(551);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 428,
                '.', 571,
                'E', 562,
                'e', 562,
                'P', 570,
                'p', 570,
                'A', 566,
                'C', 566,
                'a', 566,
                'c', 566,
                'B', 566,
                'D', 566,
                'F', 566,
                'b', 566,
                'd', 566,
                'f', 566,
                'L', 575,
                'U', 575,
                'W', 575,
                'l', 575,
                'u', 575,
                'w', 575,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 426,
                '.', 571,
                'B', 567,
                'b', 567,
                'X', 675,
                'x', 675,
                'E', 569,
                'P', 569,
                'e', 569,
                'p', 569,
                'D', 574,
                'F', 574,
                'L', 574,
                'U', 574,
                'W', 574,
                'd', 574,
                'f', 574,
                'l', 574,
                'u', 574,
                'w', 574,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(557);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 426,
                '.', 571,
                'B', 568,
                'b', 568,
                'X', 68,
                'x', 68,
                'E', 570,
                'P', 570,
                'e', 570,
                'p', 570,
                'D', 575,
                'F', 575,
                'L', 575,
                'U', 575,
                'W', 575,
                'd', 575,
                'f', 575,
                'l', 575,
                'u', 575,
                'w', 575,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(558);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 426,
                '.', 571,
                'B', 572,
                'b', 572,
                'X', 908,
                'x', 908,
                'E', 569,
                'P', 569,
                'e', 569,
                'p', 569,
                'D', 574,
                'F', 574,
                'L', 574,
                'U', 574,
                'W', 574,
                'd', 574,
                'f', 574,
                'l', 574,
                'u', 574,
                'w', 574,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(557);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 426,
                '.', 571,
                'B', 573,
                'b', 573,
                'X', 430,
                'x', 430,
                'E', 570,
                'P', 570,
                'e', 570,
                'p', 570,
                'D', 575,
                'F', 575,
                'L', 575,
                'U', 575,
                'W', 575,
                'd', 575,
                'f', 575,
                'l', 575,
                'u', 575,
                'w', 575,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(558);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(426);
            if(lookahead == '.')
                ADVANCE(571);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(557);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(574);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(426);
            if(lookahead == '.')
                ADVANCE(571);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(558);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(575);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 429,
                '+', 431,
                '-', 431,
                'E', 559,
                'e', 559,
                'P', 570,
                'p', 570,
                'B', 560,
                'D', 560,
                'F', 560,
                'b', 560,
                'd', 560,
                'f', 560,
                'L', 575,
                'U', 575,
                'W', 575,
                'l', 575,
                'u', 575,
                'w', 575,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(560);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 429,
                'E', 559,
                'e', 559,
                'P', 570,
                'p', 570,
                'B', 560,
                'D', 560,
                'F', 560,
                'b', 560,
                'd', 560,
                'f', 560,
                'L', 575,
                'U', 575,
                'W', 575,
                'l', 575,
                'u', 575,
                'w', 575,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(560);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 430,
                '.', 571,
                '+', 431,
                '-', 431,
                'E', 561,
                'e', 561,
                'P', 569,
                'p', 569,
                'B', 564,
                'D', 564,
                'F', 564,
                'b', 564,
                'd', 564,
                'f', 564,
                'L', 574,
                'U', 574,
                'W', 574,
                'l', 574,
                'u', 574,
                'w', 574,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(564);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 430,
                '.', 571,
                '+', 431,
                '-', 431,
                'E', 562,
                'e', 562,
                'P', 570,
                'p', 570,
                'B', 566,
                'D', 566,
                'F', 566,
                'b', 566,
                'd', 566,
                'f', 566,
                'L', 575,
                'U', 575,
                'W', 575,
                'l', 575,
                'u', 575,
                'w', 575,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(566);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 430,
                '.', 571,
                'E', 561,
                'e', 561,
                'P', 569,
                'p', 569,
                'A', 564,
                'C', 564,
                'a', 564,
                'c', 564,
                'B', 564,
                'D', 564,
                'F', 564,
                'b', 564,
                'd', 564,
                'f', 564,
                'L', 574,
                'U', 574,
                'W', 574,
                'l', 574,
                'u', 574,
                'w', 574,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(551);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 430,
                '.', 571,
                'E', 561,
                'e', 561,
                'P', 569,
                'p', 569,
                'B', 564,
                'D', 564,
                'F', 564,
                'b', 564,
                'd', 564,
                'f', 564,
                'L', 574,
                'U', 574,
                'W', 574,
                'l', 574,
                'u', 574,
                'w', 574,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(564);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 430,
                '.', 571,
                'E', 562,
                'e', 562,
                'P', 570,
                'p', 570,
                'A', 566,
                'C', 566,
                'a', 566,
                'c', 566,
                'B', 566,
                'D', 566,
                'F', 566,
                'b', 566,
                'd', 566,
                'f', 566,
                'L', 575,
                'U', 575,
                'W', 575,
                'l', 575,
                'u', 575,
                'w', 575,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 430,
                '.', 571,
                'E', 562,
                'e', 562,
                'P', 570,
                'p', 570,
                'B', 566,
                'D', 566,
                'F', 566,
                'b', 566,
                'd', 566,
                'f', 566,
                'L', 575,
                'U', 575,
                'W', 575,
                'l', 575,
                'u', 575,
                'w', 575,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(566);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(427);
            if(lookahead == '0')
                ADVANCE(555);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(557);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(574);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(427);
            if(lookahead == '0')
                ADVANCE(556);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(558);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(575);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 431,
                '-', 431,
                'B', 547,
                'D', 547,
                'F', 547,
                'b', 547,
                'd', 547,
                'f', 547,
                'L', 574,
                'U', 574,
                'W', 574,
                'l', 574,
                'u', 574,
                'w', 574,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(547);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 431,
                '-', 431,
                'B', 548,
                'D', 548,
                'F', 548,
                'b', 548,
                'd', 548,
                'f', 548,
                'L', 575,
                'U', 575,
                'W', 575,
                'l', 575,
                'u', 575,
                'w', 575,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(548);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'E', 559,
                'e', 559,
                'P', 570,
                'p', 570,
                'B', 560,
                'D', 560,
                'F', 560,
                'b', 560,
                'd', 560,
                'f', 560,
                'L', 575,
                'U', 575,
                'W', 575,
                'l', 575,
                'u', 575,
                'w', 575,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(560);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(557);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(574);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(558);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(575);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 574,
                'D', 574,
                'F', 574,
                'L', 574,
                'U', 574,
                'W', 574,
                'b', 574,
                'd', 574,
                'f', 574,
                'l', 574,
                'u', 574,
                'w', 574,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 575,
                'D', 575,
                'F', 575,
                'L', 575,
                'U', 575,
                'W', 575,
                'b', 575,
                'd', 575,
                'f', 575,
                'l', 575,
                'u', 575,
                'w', 575,
            );
            END_STATE();
        case 576:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(579);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(582);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(669);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(582);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(580);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(582);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(581);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(582);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(578);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(582);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(582);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(81);
            if(lookahead == '\r')
                ADVANCE(584);
            if(lookahead == '/')
                ADVANCE(432);
            if(lookahead == '\\')
                ADVANCE(585);
            if(lookahead != 0)
                ADVANCE(587);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(81);
            if(lookahead == '/')
                ADVANCE(432);
            if(lookahead == '\\')
                ADVANCE(585);
            if(lookahead != 0)
                ADVANCE(587);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\r')
                ADVANCE(588);
            if(lookahead == '/')
                ADVANCE(432);
            if(lookahead == '\\')
                ADVANCE(585);
            if(lookahead != 0)
                ADVANCE(587);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '*')
                ADVANCE(921);
            if(lookahead == '/')
                ADVANCE(910);
            if(lookahead == '\\')
                ADVANCE(585);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(587);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(432);
            if(lookahead == '\\')
                ADVANCE(585);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(587);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(432);
            if(lookahead == '\\')
                ADVANCE(585);
            if(lookahead != 0)
                ADVANCE(587);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_exception);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_interface);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_COLON);
            if(lookahead == ':')
                ADVANCE(483);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_in);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(403);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(anon_sym_bitset);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_bitmask);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == 'a')
                ADVANCE(280);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_typename);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_typename);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_valuetype);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(anon_sym_valuetype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_eventtype);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_eventtype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(anon_sym_const);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(anon_sym_alias);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(anon_sym_supports);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_public);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_public);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_private);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_private);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(anon_sym_factory);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_factory);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(anon_sym_case);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(anon_sym_typeid);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(anon_sym_typeid);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(anon_sym_typeprefix);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(anon_sym_import);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(anon_sym_import);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_object_type);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(sym_object_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(anon_sym_oneway);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(anon_sym_oneway);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(anon_sym_context);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(anon_sym_native);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(582);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(673);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(673);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '*')
                ADVANCE(924);
            if(lookahead == '/')
                ADVANCE(913);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(673);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(671);
            if(lookahead == '\\')
                ADVANCE(670);
            if(lookahead == '\t' ||
               (0x0b <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(672);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead))
                ADVANCE(673);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(673);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(261);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(427);
            if(lookahead == '0')
                ADVANCE(549);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(551);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(564);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(683);
            if(lookahead == '3')
                ADVANCE(679);
            if(lookahead == '6')
                ADVANCE(681);
            if(lookahead == '8')
                ADVANCE(464);
            if(lookahead == 'e')
                ADVANCE(857);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(683);
            if(lookahead == '3')
                ADVANCE(679);
            if(lookahead == '6')
                ADVANCE(681);
            if(lookahead == '8')
                ADVANCE(464);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(684);
            if(lookahead == '3')
                ADVANCE(680);
            if(lookahead == '6')
                ADVANCE(682);
            if(lookahead == '8')
                ADVANCE(456);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(451);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(470);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(454);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(473);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(445);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(467);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(543);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(545);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(691);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(687);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(799);
            if(lookahead == 'o')
                ADVANCE(780);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(799);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(720);
            if(lookahead == 'i')
                ADVANCE(898);
            if(lookahead == 'l')
                ADVANCE(834);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(837);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(858);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(803);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(900);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(848);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(882);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(861);
            if(lookahead == 'h')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(888);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(849);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(865);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(807);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(880);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(724);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(791);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(795);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(892);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(796);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(774);
            if(lookahead == 's')
                ADVANCE(883);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(774);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(641);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(770);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(878);
            if(lookahead == 'n')
                ADVANCE(735);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(878);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(877);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(868);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(871);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(747);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(600);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(460);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(657);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(674);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(739);
            if(lookahead == 'i')
                ADVANCE(727);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(831);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(845);
            if(lookahead == 'h')
                ADVANCE(829);
            if(lookahead == 't')
                ADVANCE(847);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(845);
            if(lookahead == 'h')
                ADVANCE(829);
            if(lookahead == 't')
                ADVANCE(852);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(845);
            if(lookahead == 'h')
                ADVANCE(829);
            if(lookahead == 't')
                ADVANCE(854);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(896);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(729);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(477);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(667);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(762);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(643);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(496);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(609);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(627);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(655);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(595);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(763);
            if(lookahead == 'o')
                ADVANCE(890);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(726);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(839);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(728);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(730);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(823);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(866);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(869);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(819);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(884);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(721);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(822);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(647);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(703);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(447);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(485);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(487);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(449);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(820);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(700);
            if(lookahead == 'o')
                ADVANCE(804);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(829);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(898);
            if(lookahead == 'l')
                ADVANCE(834);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(895);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(862);
            if(lookahead == 'o')
                ADVANCE(827);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(894);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(818);
            if(lookahead == 'n')
                ADVANCE(789);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(818);
            if(lookahead == 'n')
                ADVANCE(859);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(715);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(815);
            if(lookahead == 'u')
                ADVANCE(723);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(815);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(816);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(876);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(830);
            if(lookahead == 's')
                ADVANCE(778);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(833);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'j')
                ADVANCE(760);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(834);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(902);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(784);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(737);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(872);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(754);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(893);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(844);
            if(lookahead == 'n')
                ADVANCE(863);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(635);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(697);
            if(lookahead == 's')
                ADVANCE(757);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(860);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(765);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(633);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(458);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(590);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(899);
            if(lookahead == 't')
                ADVANCE(874);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(899);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(887);
            if(lookahead == 'v')
                ADVANCE(761);
            if(lookahead == 'x')
                ADVANCE(717);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(887);
            if(lookahead == 'x')
                ADVANCE(717);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(887);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(863);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(766);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(767);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(794);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(875);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(873);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(886);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 823:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(722);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 824:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(768);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 825:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(890);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 826:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(805);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 827:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(798);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 828:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(827);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 829:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(855);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 830:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(806);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 831:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(817);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 832:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(850);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 833:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(808);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 834:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(705);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 835:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(824);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 836:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(856);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 837:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(498);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 838:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 839:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(879);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 840:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 841:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(753);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 842:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 843:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(746);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 844:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(836);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 845:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(889);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 846:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(776);
            if(lookahead == 'u')
                ADVANCE(710);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 847:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(785);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 848:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 849:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(482);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 850:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(901);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 851:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(781);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 852:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(891);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 853:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(787);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 854:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(786);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 855:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(867);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 856:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(870);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 857:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 858:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(792);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 859:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(778);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 860:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(864);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 861:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 862:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(802);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 863:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(677);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 864:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(637);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 865:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(475);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 866:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(462);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 867:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(443);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 868:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 869:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(613);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 870:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(660);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 871:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(631);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 872:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(619);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 873:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(676);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 874:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(851);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 875:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 876:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 877:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(832);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 878:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 879:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 880:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(740);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 881:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 882:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(779);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 883:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(853);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 884:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(904);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 885:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(907);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 886:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(885);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 887:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(801);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 888:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 889:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(755);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 890:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 891:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(723);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 892:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(881);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 893:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 894:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(738);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 895:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 896:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(699);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 897:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(788);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 898:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 899:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(493);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 900:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(664);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 901:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(645);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 902:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(607);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 903:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(838);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 904:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(840);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 905:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(841);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 906:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(842);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 907:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(843);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 908:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(564);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 909:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(909);
            END_STATE();
        case 910:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 911:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '*')
                ADVANCE(925);
            if(lookahead != 0)
                ADVANCE(65);
            END_STATE();
        case 912:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(53);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(919);
            END_STATE();
        case 913:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(673);
            END_STATE();
        case 914:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(914);
            if(lookahead == '\r')
                ADVANCE(35);
            if(lookahead == '@')
                ADVANCE(620);
            END_STATE();
        case 915:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(918);
            if(lookahead == '\\')
                ADVANCE(53);
            if(lookahead != 0)
                ADVANCE(919);
            END_STATE();
        case 916:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\r')
                ADVANCE(920);
            if(lookahead == '\\')
                ADVANCE(916);
            if(lookahead != 0)
                ADVANCE(919);
            END_STATE();
        case 917:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '*')
                ADVANCE(923);
            if(lookahead == '/')
                ADVANCE(912);
            if(lookahead == '\\')
                ADVANCE(53);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(919);
            END_STATE();
        case 918:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '/')
                ADVANCE(917);
            if(lookahead == '@')
                ADVANCE(620);
            if(lookahead == '\\')
                ADVANCE(38);
            if(lookahead == '\t' ||
               (0x0b <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(918);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead))
                ADVANCE(919);
            END_STATE();
        case 919:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\\')
                ADVANCE(53);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(919);
            END_STATE();
        case 920:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\\')
                ADVANCE(53);
            if(lookahead != 0)
                ADVANCE(919);
            END_STATE();
        case 921:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            END_STATE();
        case 922:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead == '*')
                ADVANCE(925);
            if(lookahead != 0 &&
               lookahead != '/')
                ADVANCE(65);
            END_STATE();
        case 923:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead == '\\')
                ADVANCE(53);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(919);
            END_STATE();
        case 924:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(673);
            END_STATE();
        case 925:
            ACCEPT_TOKEN(aux_sym_comment_token3);
            if(lookahead == '*')
                ADVANCE(925);
            if(lookahead != 0 &&
               lookahead != '/')
                ADVANCE(65);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 439 },
    [2] = { .lex_state = 67 },
    [3] = { .lex_state = 67 },
    [4] = { .lex_state = 67 },
    [5] = { .lex_state = 69 },
    [6] = { .lex_state = 69 },
    [7] = { .lex_state = 69 },
    [8] = { .lex_state = 69 },
    [9] = { .lex_state = 56 },
    [10] = { .lex_state = 56 },
    [11] = { .lex_state = 70 },
    [12] = { .lex_state = 71 },
    [13] = { .lex_state = 72 },
    [14] = { .lex_state = 72 },
    [15] = { .lex_state = 72 },
    [16] = { .lex_state = 440 },
    [17] = { .lex_state = 61 },
    [18] = { .lex_state = 61 },
    [19] = { .lex_state = 439 },
    [20] = { .lex_state = 61 },
    [21] = { .lex_state = 61 },
    [22] = { .lex_state = 61 },
    [23] = { .lex_state = 61 },
    [24] = { .lex_state = 61 },
    [25] = { .lex_state = 61 },
    [26] = { .lex_state = 61 },
    [27] = { .lex_state = 440 },
    [28] = { .lex_state = 61 },
    [29] = { .lex_state = 61 },
    [30] = { .lex_state = 440 },
    [31] = { .lex_state = 440 },
    [32] = { .lex_state = 440 },
    [33] = { .lex_state = 73 },
    [34] = { .lex_state = 440 },
    [35] = { .lex_state = 440 },
    [36] = { .lex_state = 61 },
    [37] = { .lex_state = 440 },
    [38] = { .lex_state = 73 },
    [39] = { .lex_state = 61 },
    [40] = { .lex_state = 67 },
    [41] = { .lex_state = 67 },
    [42] = { .lex_state = 67 },
    [43] = { .lex_state = 67 },
    [44] = { .lex_state = 67 },
    [45] = { .lex_state = 67 },
    [46] = { .lex_state = 67 },
    [47] = { .lex_state = 61 },
    [48] = { .lex_state = 61 },
    [49] = { .lex_state = 61 },
    [50] = { .lex_state = 61 },
    [51] = { .lex_state = 61 },
    [52] = { .lex_state = 61 },
    [53] = { .lex_state = 61 },
    [54] = { .lex_state = 61 },
    [55] = { .lex_state = 69 },
    [56] = { .lex_state = 69 },
    [57] = { .lex_state = 74 },
    [58] = { .lex_state = 74 },
    [59] = { .lex_state = 70 },
    [60] = { .lex_state = 70 },
    [61] = { .lex_state = 72 },
    [62] = { .lex_state = 72 },
    [63] = { .lex_state = 72 },
    [64] = { .lex_state = 61 },
    [65] = { .lex_state = 72 },
    [66] = { .lex_state = 72 },
    [67] = { .lex_state = 61 },
    [68] = { .lex_state = 61 },
    [69] = { .lex_state = 61 },
    [70] = { .lex_state = 61 },
    [71] = { .lex_state = 61 },
    [72] = { .lex_state = 61 },
    [73] = { .lex_state = 61 },
    [74] = { .lex_state = 61 },
    [75] = { .lex_state = 61 },
    [76] = { .lex_state = 61 },
    [77] = { .lex_state = 75 },
    [78] = { .lex_state = 61 },
    [79] = { .lex_state = 61 },
    [80] = { .lex_state = 55 },
    [81] = { .lex_state = 57 },
    [82] = { .lex_state = 57 },
    [83] = { .lex_state = 57 },
    [84] = { .lex_state = 57 },
    [85] = { .lex_state = 55 },
    [86] = { .lex_state = 55 },
    [87] = { .lex_state = 57 },
    [88] = { .lex_state = 57 },
    [89] = { .lex_state = 57 },
    [90] = { .lex_state = 57 },
    [91] = { .lex_state = 57 },
    [92] = { .lex_state = 57 },
    [93] = { .lex_state = 57 },
    [94] = { .lex_state = 57 },
    [95] = { .lex_state = 57 },
    [96] = { .lex_state = 57 },
    [97] = { .lex_state = 439 },
    [98] = { .lex_state = 57 },
    [99] = { .lex_state = 57 },
    [100] = { .lex_state = 57 },
    [101] = { .lex_state = 57 },
    [102] = { .lex_state = 439 },
    [103] = { .lex_state = 57 },
    [104] = { .lex_state = 57 },
    [105] = { .lex_state = 440 },
    [106] = { .lex_state = 440 },
    [107] = { .lex_state = 440 },
    [108] = { .lex_state = 57 },
    [109] = { .lex_state = 440 },
    [110] = { .lex_state = 439 },
    [111] = { .lex_state = 439 },
    [112] = { .lex_state = 440 },
    [113] = { .lex_state = 440 },
    [114] = { .lex_state = 439 },
    [115] = { .lex_state = 440 },
    [116] = { .lex_state = 57 },
    [117] = { .lex_state = 57 },
    [118] = { .lex_state = 57 },
    [119] = { .lex_state = 439 },
    [120] = { .lex_state = 439 },
    [121] = { .lex_state = 440 },
    [122] = { .lex_state = 440 },
    [123] = { .lex_state = 440 },
    [124] = { .lex_state = 440 },
    [125] = { .lex_state = 440 },
    [126] = { .lex_state = 440 },
    [127] = { .lex_state = 440 },
    [128] = { .lex_state = 440 },
    [129] = { .lex_state = 440 },
    [130] = { .lex_state = 440 },
    [131] = { .lex_state = 440 },
    [132] = { .lex_state = 440 },
    [133] = { .lex_state = 440 },
    [134] = { .lex_state = 440 },
    [135] = { .lex_state = 57 },
    [136] = { .lex_state = 440 },
    [137] = { .lex_state = 440 },
    [138] = { .lex_state = 439 },
    [139] = { .lex_state = 439 },
    [140] = { .lex_state = 440 },
    [141] = { .lex_state = 440 },
    [142] = { .lex_state = 59 },
    [143] = { .lex_state = 59 },
    [144] = { .lex_state = 57 },
    [145] = { .lex_state = 55 },
    [146] = { .lex_state = 59 },
    [147] = { .lex_state = 59 },
    [148] = { .lex_state = 439 },
    [149] = { .lex_state = 59 },
    [150] = { .lex_state = 55 },
    [151] = { .lex_state = 58 },
    [152] = { .lex_state = 439 },
    [153] = { .lex_state = 59 },
    [154] = { .lex_state = 55 },
    [155] = { .lex_state = 439 },
    [156] = { .lex_state = 60 },
    [157] = { .lex_state = 439 },
    [158] = { .lex_state = 76 },
    [159] = { .lex_state = 60 },
    [160] = { .lex_state = 439 },
    [161] = { .lex_state = 76 },
    [162] = { .lex_state = 60 },
    [163] = { .lex_state = 439 },
    [164] = { .lex_state = 60 },
    [165] = { .lex_state = 439 },
    [166] = { .lex_state = 439 },
    [167] = { .lex_state = 60 },
    [168] = { .lex_state = 439 },
    [169] = { .lex_state = 60 },
    [170] = { .lex_state = 60 },
    [171] = { .lex_state = 76 },
    [172] = { .lex_state = 55 },
    [173] = { .lex_state = 60 },
    [174] = { .lex_state = 55 },
    [175] = { .lex_state = 439 },
    [176] = { .lex_state = 439 },
    [177] = { .lex_state = 439 },
    [178] = { .lex_state = 60 },
    [179] = { .lex_state = 439 },
    [180] = { .lex_state = 60 },
    [181] = { .lex_state = 439 },
    [182] = { .lex_state = 60 },
    [183] = { .lex_state = 60 },
    [184] = { .lex_state = 60 },
    [185] = { .lex_state = 59 },
    [186] = { .lex_state = 55 },
    [187] = { .lex_state = 440 },
    [188] = { .lex_state = 60 },
    [189] = { .lex_state = 60 },
    [190] = { .lex_state = 0 },
    [191] = { .lex_state = 35 },
    [192] = { .lex_state = 440 },
    [193] = { .lex_state = 62 },
    [194] = { .lex_state = 60 },
    [195] = { .lex_state = 439 },
    [196] = { .lex_state = 60 },
    [197] = { .lex_state = 60 },
    [198] = { .lex_state = 439 },
    [199] = { .lex_state = 60 },
    [200] = { .lex_state = 60 },
    [201] = { .lex_state = 60 },
    [202] = { .lex_state = 60 },
    [203] = { .lex_state = 60 },
    [204] = { .lex_state = 439 },
    [205] = { .lex_state = 60 },
    [206] = { .lex_state = 60 },
    [207] = { .lex_state = 60 },
    [208] = { .lex_state = 60 },
    [209] = { .lex_state = 60 },
    [210] = { .lex_state = 60 },
    [211] = { .lex_state = 76 },
    [212] = { .lex_state = 76 },
    [213] = { .lex_state = 0 },
    [214] = { .lex_state = 439 },
    [215] = { .lex_state = 60 },
    [216] = { .lex_state = 35 },
    [217] = { .lex_state = 439 },
    [218] = { .lex_state = 439 },
    [219] = { .lex_state = 35 },
    [220] = { .lex_state = 439 },
    [221] = { .lex_state = 60 },
    [222] = { .lex_state = 439 },
    [223] = { .lex_state = 439 },
    [224] = { .lex_state = 918 },
    [225] = { .lex_state = 60 },
    [226] = { .lex_state = 76 },
    [227] = { .lex_state = 439 },
    [228] = { .lex_state = 62 },
    [229] = { .lex_state = 60 },
    [230] = { .lex_state = 35 },
    [231] = { .lex_state = 35 },
    [232] = { .lex_state = 35 },
    [233] = { .lex_state = 60 },
    [234] = { .lex_state = 60 },
    [235] = { .lex_state = 60 },
    [236] = { .lex_state = 0 },
    [237] = { .lex_state = 439 },
    [238] = { .lex_state = 60 },
    [239] = { .lex_state = 0 },
    [240] = { .lex_state = 60 },
    [241] = { .lex_state = 439 },
    [242] = { .lex_state = 60 },
    [243] = { .lex_state = 60 },
    [244] = { .lex_state = 60 },
    [245] = { .lex_state = 60 },
    [246] = { .lex_state = 0 },
    [247] = { .lex_state = 60 },
    [248] = { .lex_state = 67 },
    [249] = { .lex_state = 67 },
    [250] = { .lex_state = 60 },
    [251] = { .lex_state = 67 },
    [252] = { .lex_state = 0 },
    [253] = { .lex_state = 0 },
    [254] = { .lex_state = 0 },
    [255] = { .lex_state = 0 },
    [256] = { .lex_state = 0 },
    [257] = { .lex_state = 60 },
    [258] = { .lex_state = 439 },
    [259] = { .lex_state = 67 },
    [260] = { .lex_state = 0 },
    [261] = { .lex_state = 0 },
    [262] = { .lex_state = 60 },
    [263] = { .lex_state = 60 },
    [264] = { .lex_state = 0 },
    [265] = { .lex_state = 0 },
    [266] = { .lex_state = 0 },
    [267] = { .lex_state = 0 },
    [268] = { .lex_state = 67 },
    [269] = { .lex_state = 60 },
    [270] = { .lex_state = 67 },
    [271] = { .lex_state = 60 },
    [272] = { .lex_state = 439 },
    [273] = { .lex_state = 439 },
    [274] = { .lex_state = 67 },
    [275] = { .lex_state = 439 },
    [276] = { .lex_state = 0 },
    [277] = { .lex_state = 0 },
    [278] = { .lex_state = 439 },
    [279] = { .lex_state = 0 },
    [280] = { .lex_state = 77 },
    [281] = { .lex_state = 0 },
    [282] = { .lex_state = 60 },
    [283] = { .lex_state = 0 },
    [284] = { .lex_state = 439 },
    [285] = { .lex_state = 0 },
    [286] = { .lex_state = 0 },
    [287] = { .lex_state = 60 },
    [288] = { .lex_state = 0 },
    [289] = { .lex_state = 0 },
    [290] = { .lex_state = 0 },
    [291] = { .lex_state = 60 },
    [292] = { .lex_state = 60 },
    [293] = { .lex_state = 60 },
    [294] = { .lex_state = 60 },
    [295] = { .lex_state = 60 },
    [296] = { .lex_state = 60 },
    [297] = { .lex_state = 60 },
    [298] = { .lex_state = 439 },
    [299] = { .lex_state = 0 },
    [300] = { .lex_state = 0 },
    [301] = { .lex_state = 0 },
    [302] = { .lex_state = 0 },
    [303] = { .lex_state = 439 },
    [304] = { .lex_state = 0 },
    [305] = { .lex_state = 0 },
    [306] = { .lex_state = 60 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 439 },
    [309] = { .lex_state = 0 },
    [310] = { .lex_state = 0 },
    [311] = { .lex_state = 60 },
    [312] = { .lex_state = 0 },
    [313] = { .lex_state = 67 },
    [314] = { .lex_state = 67 },
    [315] = { .lex_state = 67 },
    [316] = { .lex_state = 0 },
    [317] = { .lex_state = 60 },
    [318] = { .lex_state = 67 },
    [319] = { .lex_state = 60 },
    [320] = { .lex_state = 0 },
    [321] = { .lex_state = 440 },
    [322] = { .lex_state = 0 },
    [323] = { .lex_state = 0 },
    [324] = { .lex_state = 60 },
    [325] = { .lex_state = 439 },
    [326] = { .lex_state = 439 },
    [327] = { .lex_state = 0 },
    [328] = { .lex_state = 60 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 60 },
    [331] = { .lex_state = 0 },
    [332] = { .lex_state = 60 },
    [333] = { .lex_state = 60 },
    [334] = { .lex_state = 439 },
    [335] = { .lex_state = 60 },
    [336] = { .lex_state = 440 },
    [337] = { .lex_state = 60 },
    [338] = { .lex_state = 0 },
    [339] = { .lex_state = 41 },
    [340] = { .lex_state = 0 },
    [341] = { .lex_state = 60 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 60 },
    [344] = { .lex_state = 60 },
    [345] = { .lex_state = 76 },
    [346] = { .lex_state = 0 },
    [347] = { .lex_state = 60 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 76 },
    [350] = { .lex_state = 35 },
    [351] = { .lex_state = 60 },
    [352] = { .lex_state = 35 },
    [353] = { .lex_state = 67 },
    [354] = { .lex_state = 439 },
    [355] = { .lex_state = 439 },
    [356] = { .lex_state = 0 },
    [357] = { .lex_state = 439 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 0 },
    [360] = { .lex_state = 439 },
    [361] = { .lex_state = 60 },
    [362] = { .lex_state = 60 },
    [363] = { .lex_state = 67 },
    [364] = { .lex_state = 439 },
    [365] = { .lex_state = 60 },
    [366] = { .lex_state = 60 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 60 },
    [369] = { .lex_state = 60 },
    [370] = { .lex_state = 60 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 60 },
    [373] = { .lex_state = 0 },
    [374] = { .lex_state = 0 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 0 },
    [378] = { .lex_state = 0 },
    [379] = { .lex_state = 439 },
    [380] = { .lex_state = 60 },
    [381] = { .lex_state = 67 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 62 },
    [384] = { .lex_state = 60 },
    [385] = { .lex_state = 440 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 60 },
    [388] = { .lex_state = 60 },
    [389] = { .lex_state = 67 },
    [390] = { .lex_state = 67 },
    [391] = { .lex_state = 67 },
    [392] = { .lex_state = 67 },
    [393] = { .lex_state = 60 },
    [394] = { .lex_state = 60 },
    [395] = { .lex_state = 60 },
    [396] = { .lex_state = 60 },
    [397] = { .lex_state = 62 },
    [398] = { .lex_state = 0 },
    [399] = { .lex_state = 60 },
    [400] = { .lex_state = 67 },
    [401] = { .lex_state = 439 },
    [402] = { .lex_state = 60 },
    [403] = { .lex_state = 67 },
    [404] = { .lex_state = 60 },
    [405] = { .lex_state = 0 },
    [406] = { .lex_state = 60 },
    [407] = { .lex_state = 60 },
    [408] = { .lex_state = 439 },
    [409] = { .lex_state = 60 },
    [410] = { .lex_state = 0 },
    [411] = { .lex_state = 0 },
    [412] = { .lex_state = 439 },
    [413] = { .lex_state = 60 },
    [414] = { .lex_state = 60 },
    [415] = { .lex_state = 60 },
    [416] = { .lex_state = 439 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 439 },
    [419] = { .lex_state = 60 },
    [420] = { .lex_state = 0 },
    [421] = { .lex_state = 60 },
    [422] = { .lex_state = 0 },
    [423] = { .lex_state = 439 },
    [424] = { .lex_state = 60 },
    [425] = { .lex_state = 60 },
    [426] = { .lex_state = 0 },
    [427] = { .lex_state = 0 },
    [428] = { .lex_state = 0 },
    [429] = { .lex_state = 60 },
    [430] = { .lex_state = 439 },
    [431] = { .lex_state = 60 },
    [432] = { .lex_state = 0 },
    [433] = { .lex_state = 0 },
    [434] = { .lex_state = 0 },
    [435] = { .lex_state = 60 },
    [436] = { .lex_state = 0 },
    [437] = { .lex_state = 60 },
    [438] = { .lex_state = 0 },
    [439] = { .lex_state = 0 },
    [440] = { .lex_state = 0 },
    [441] = { .lex_state = 0 },
    [442] = { .lex_state = 0 },
    [443] = { .lex_state = 60 },
    [444] = { .lex_state = 0 },
    [445] = { .lex_state = 78 },
    [446] = { .lex_state = 0 },
    [447] = { .lex_state = 0 },
    [448] = { .lex_state = 0 },
    [449] = { .lex_state = 0 },
    [450] = { .lex_state = 60 },
    [451] = { .lex_state = 0 },
    [452] = { .lex_state = 67 },
    [453] = { .lex_state = 0 },
    [454] = { .lex_state = 0 },
    [455] = { .lex_state = 67 },
    [456] = { .lex_state = 79 },
    [457] = { .lex_state = 0 },
    [458] = { .lex_state = 60 },
    [459] = { .lex_state = 67 },
    [460] = { .lex_state = 0 },
    [461] = { .lex_state = 0 },
    [462] = { .lex_state = 0 },
    [463] = { .lex_state = 0 },
    [464] = { .lex_state = 0 },
    [465] = { .lex_state = 0 },
    [466] = { .lex_state = 0 },
    [467] = { .lex_state = 0 },
    [468] = { .lex_state = 60 },
    [469] = { .lex_state = 0 },
    [470] = { .lex_state = 79 },
    [471] = { .lex_state = 0 },
    [472] = { .lex_state = 0 },
    [473] = { .lex_state = 0 },
    [474] = { .lex_state = 0 },
    [475] = { .lex_state = 64 },
    [476] = { .lex_state = 0 },
    [477] = { .lex_state = 60 },
    [478] = { .lex_state = 0 },
    [479] = { .lex_state = 0 },
    [480] = { .lex_state = 0 },
    [481] = { .lex_state = 60 },
    [482] = { .lex_state = 67 },
    [483] = { .lex_state = 67 },
    [484] = { .lex_state = 0 },
    [485] = { .lex_state = 0 },
    [486] = { .lex_state = 60 },
    [487] = { .lex_state = 0 },
    [488] = { .lex_state = 0 },
    [489] = { .lex_state = 0 },
    [490] = { .lex_state = 67 },
    [491] = { .lex_state = 67 },
    [492] = { .lex_state = 60 },
    [493] = { .lex_state = 0 },
    [494] = { .lex_state = 0 },
    [495] = { .lex_state = 0 },
    [496] = { .lex_state = 0 },
    [497] = { .lex_state = 60 },
    [498] = { .lex_state = 440 },
    [499] = { .lex_state = 67 },
    [500] = { .lex_state = 67 },
    [501] = { .lex_state = 60 },
    [502] = { .lex_state = 0 },
    [503] = { .lex_state = 67 },
    [504] = { .lex_state = 0 },
    [505] = { .lex_state = 42 },
    [506] = { .lex_state = 0 },
    [507] = { .lex_state = 60 },
    [508] = { .lex_state = 0 },
    [509] = { .lex_state = 0 },
    [510] = { .lex_state = 0 },
    [511] = { .lex_state = 0 },
    [512] = { .lex_state = 60 },
    [513] = { .lex_state = 0 },
    [514] = { .lex_state = 0 },
    [515] = { .lex_state = 60 },
    [516] = { .lex_state = 60 },
    [517] = { .lex_state = 0 },
    [518] = { .lex_state = 0 },
    [519] = { .lex_state = 0 },
    [520] = { .lex_state = 0 },
    [521] = { .lex_state = 0 },
    [522] = { .lex_state = 0 },
    [523] = { .lex_state = 0 },
    [524] = { .lex_state = 0 },
    [525] = { .lex_state = 78 },
    [526] = { .lex_state = 60 },
    [527] = { .lex_state = 440 },
    [528] = { .lex_state = 439 },
    [529] = { .lex_state = 0 },
    [530] = { .lex_state = 0 },
    [531] = { .lex_state = 0 },
    [532] = { .lex_state = 67 },
    [533] = { .lex_state = 0 },
    [534] = { .lex_state = 60 },
    [535] = { .lex_state = 0 },
    [536] = { .lex_state = 0 },
    [537] = { .lex_state = 0 },
    [538] = { .lex_state = 0 },
    [539] = { .lex_state = 0 },
    [540] = { .lex_state = 0 },
    [541] = { .lex_state = 0 },
    [542] = { .lex_state = 67 },
    [543] = { .lex_state = 0 },
    [544] = { .lex_state = 0 },
    [545] = { .lex_state = 0 },
    [546] = { .lex_state = 60 },
    [547] = { .lex_state = 60 },
    [548] = { .lex_state = 0 },
    [549] = { .lex_state = 0 },
    [550] = { .lex_state = 0 },
    [551] = { .lex_state = 60 },
    [552] = { .lex_state = 0 },
    [553] = { .lex_state = 60 },
    [554] = { .lex_state = 439 },
    [555] = { .lex_state = 439 },
    [556] = { .lex_state = 67 },
    [557] = { .lex_state = 0 },
    [558] = { .lex_state = 0 },
    [559] = { .lex_state = 60 },
    [560] = { .lex_state = 0 },
    [561] = { .lex_state = 0 },
    [562] = { .lex_state = 672 },
    [563] = { .lex_state = 0 },
    [564] = { .lex_state = 67 },
    [565] = { .lex_state = 0 },
    [566] = { .lex_state = 0 },
    [567] = { .lex_state = 439 },
    [568] = { .lex_state = 60 },
    [569] = { .lex_state = 60 },
    [570] = { .lex_state = 60 },
    [571] = { .lex_state = 60 },
    [572] = { .lex_state = 0 },
    [573] = { .lex_state = 0 },
    [574] = { .lex_state = 0 },
    [575] = { .lex_state = 60 },
    [576] = { .lex_state = 60 },
    [577] = { .lex_state = 60 },
    [578] = { .lex_state = 60 },
    [579] = { .lex_state = 0 },
    [580] = { .lex_state = 0 },
    [581] = { .lex_state = 60 },
    [582] = { .lex_state = 60 },
    [583] = { .lex_state = 0 },
    [584] = { .lex_state = 60 },
    [585] = { .lex_state = 0 },
    [586] = { .lex_state = 0 },
    [587] = { .lex_state = 60 },
    [588] = { .lex_state = 60 },
    [589] = { .lex_state = 0 },
    [590] = { .lex_state = 0 },
    [591] = { .lex_state = 60 },
    [592] = { .lex_state = 0 },
    [593] = { .lex_state = 0 },
    [594] = { .lex_state = 439 },
    [595] = { (TSStateId)(-1) },
    [596] = { (TSStateId)(-1) },
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
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [1] = {
        [sym_specification] = STATE(561),
        [sym_preproc_call] = STATE(114),
        [sym_except_dcl] = STATE(560),
        [sym_interface_dcl] = STATE(560),
        [sym_interface_kind] = STATE(559),
        [sym_interface_forward_dcl] = STATE(543),
        [sym_interface_def] = STATE(543),
        [sym_interface_header] = STATE(540),
        [sym_bitset_dcl] = STATE(560),
        [sym_bitmask_dcl] = STATE(560),
        [sym_annotation_dcl] = STATE(560),
        [sym_annotation_appl] = STATE(172),
        [sym_template_module_dcl] = STATE(560),
        [sym_template_module_inst] = STATE(560),
        [sym_value_dcl] = STATE(560),
        [sym_value_def] = STATE(533),
        [sym_value_header] = STATE(531),
        [sym_value_forward_dcl] = STATE(533),
        [sym_typedef_dcl] = STATE(560),
        [sym_enum_dcl] = STATE(560),
        [sym_enum_anno] = STATE(528),
        [sym_union_forward_dcl] = STATE(560),
        [sym_union_def] = STATE(560),
        [sym_type_id_dcl] = STATE(560),
        [sym_type_prefix_dcl] = STATE(560),
        [sym_import_dcl] = STATE(560),
        [sym__definition] = STATE(113),
        [sym_native_dcl] = STATE(560),
        [sym_module_dcl] = STATE(560),
        [sym_struct_forward_dcl] = STATE(560),
        [sym_struct_def] = STATE(560),
        [sym_predefine] = STATE(107),
        [sym_const_dcl] = STATE(560),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(19),
        [aux_sym_specification_repeat2] = STATE(34),
        [aux_sym_interface_def_repeat1] = STATE(145),
        [ts_builtin_sym_end] = ACTIONS(7),
        [sym_preproc_directive] = ACTIONS(9),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_interface] = ACTIONS(15),
        [anon_sym_bitset] = ACTIONS(17),
        [anon_sym_bitmask] = ACTIONS(19),
        [anon_sym_ATannotation] = ACTIONS(21),
        [anon_sym_AT] = ACTIONS(23),
        [anon_sym_module] = ACTIONS(25),
        [anon_sym_valuetype] = ACTIONS(27),
        [anon_sym_struct] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(31),
        [anon_sym_enum] = ACTIONS(33),
        [anon_sym_const] = ACTIONS(35),
        [anon_sym_typedef] = ACTIONS(37),
        [anon_sym_ATignore_literal_names] = ACTIONS(39),
        [anon_sym_typeid] = ACTIONS(41),
        [anon_sym_typeprefix] = ACTIONS(43),
        [anon_sym_import] = ACTIONS(45),
        [anon_sym_native] = ACTIONS(47),
        [anon_sym_POUNDdefine] = ACTIONS(49),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [2] = {
        [sym_signed_short_int] = STATE(203),
        [sym_signed_long_int] = STATE(203),
        [sym_signed_longlong_int] = STATE(203),
        [sym_unsigned_int] = STATE(210),
        [sym_integer_type] = STATE(294),
        [sym_signed_int] = STATE(210),
        [sym_unsigned_short_int] = STATE(202),
        [sym_unsigned_long_int] = STATE(202),
        [sym_unsigned_longlong_int] = STATE(202),
        [sym_floating_pt_type] = STATE(294),
        [sym_char_type] = STATE(294),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(296),
        [sym_type_spec] = STATE(546),
        [sym_simple_type_spec] = STATE(328),
        [sym_base_type_spec] = STATE(297),
        [sym_any_type] = STATE(294),
        [sym_fixed_pt_type] = STATE(296),
        [sym_template_type_spec] = STATE(328),
        [sym_sequence_type] = STATE(296),
        [sym_map_type] = STATE(296),
        [sym_except_dcl] = STATE(583),
        [sym_export] = STATE(41),
        [sym_op_dcl] = STATE(241),
        [sym_op_type_spec] = STATE(534),
        [sym_attr_dcl] = STATE(583),
        [sym_readonly_attr_spec] = STATE(574),
        [sym_attr_spec] = STATE(574),
        [sym_bitset_dcl] = STATE(583),
        [sym_bitmask_dcl] = STATE(583),
        [sym_annotation_appl] = STATE(172),
        [sym_value_dcl] = STATE(583),
        [sym_value_def] = STATE(533),
        [sym_value_header] = STATE(531),
        [sym_value_element] = STATE(42),
        [sym_state_member] = STATE(41),
        [sym_init_dcl] = STATE(41),
        [sym_value_forward_dcl] = STATE(533),
        [sym_typedef_dcl] = STATE(583),
        [sym_enum_dcl] = STATE(583),
        [sym_enum_anno] = STATE(528),
        [sym_union_forward_dcl] = STATE(583),
        [sym_union_def] = STATE(583),
        [sym_type_id_dcl] = STATE(583),
        [sym_import_dcl] = STATE(583),
        [sym_op_oneway_dcl] = STATE(241),
        [sym_op_with_context] = STATE(583),
        [sym_native_dcl] = STATE(583),
        [sym_struct_forward_dcl] = STATE(583),
        [sym_struct_def] = STATE(583),
        [sym_const_dcl] = STATE(583),
        [sym_comment] = STATE(2),
        [aux_sym_interface_def_repeat1] = STATE(186),
        [aux_sym_value_def_repeat1] = STATE(3),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_exception] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(95),
        [anon_sym_void] = ACTIONS(97),
        [anon_sym_readonly] = ACTIONS(99),
        [anon_sym_attribute] = ACTIONS(101),
        [anon_sym_bitset] = ACTIONS(103),
        [anon_sym_bitmask] = ACTIONS(105),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_valuetype] = ACTIONS(109),
        [anon_sym_struct] = ACTIONS(111),
        [anon_sym_union] = ACTIONS(113),
        [anon_sym_enum] = ACTIONS(115),
        [anon_sym_const] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(119),
        [anon_sym_private] = ACTIONS(119),
        [anon_sym_factory] = ACTIONS(121),
        [anon_sym_typedef] = ACTIONS(123),
        [anon_sym_ATignore_literal_names] = ACTIONS(39),
        [anon_sym_typeid] = ACTIONS(125),
        [anon_sym_import] = ACTIONS(127),
        [sym_object_type] = ACTIONS(61),
        [anon_sym_oneway] = ACTIONS(129),
        [anon_sym_native] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [3] = {
        [sym_signed_short_int] = STATE(203),
        [sym_signed_long_int] = STATE(203),
        [sym_signed_longlong_int] = STATE(203),
        [sym_unsigned_int] = STATE(210),
        [sym_integer_type] = STATE(294),
        [sym_signed_int] = STATE(210),
        [sym_unsigned_short_int] = STATE(202),
        [sym_unsigned_long_int] = STATE(202),
        [sym_unsigned_longlong_int] = STATE(202),
        [sym_floating_pt_type] = STATE(294),
        [sym_char_type] = STATE(294),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(296),
        [sym_type_spec] = STATE(546),
        [sym_simple_type_spec] = STATE(328),
        [sym_base_type_spec] = STATE(297),
        [sym_any_type] = STATE(294),
        [sym_fixed_pt_type] = STATE(296),
        [sym_template_type_spec] = STATE(328),
        [sym_sequence_type] = STATE(296),
        [sym_map_type] = STATE(296),
        [sym_except_dcl] = STATE(583),
        [sym_export] = STATE(41),
        [sym_op_dcl] = STATE(241),
        [sym_op_type_spec] = STATE(534),
        [sym_attr_dcl] = STATE(583),
        [sym_readonly_attr_spec] = STATE(574),
        [sym_attr_spec] = STATE(574),
        [sym_bitset_dcl] = STATE(583),
        [sym_bitmask_dcl] = STATE(583),
        [sym_annotation_appl] = STATE(172),
        [sym_value_dcl] = STATE(583),
        [sym_value_def] = STATE(533),
        [sym_value_header] = STATE(531),
        [sym_value_element] = STATE(42),
        [sym_state_member] = STATE(41),
        [sym_init_dcl] = STATE(41),
        [sym_value_forward_dcl] = STATE(533),
        [sym_typedef_dcl] = STATE(583),
        [sym_enum_dcl] = STATE(583),
        [sym_enum_anno] = STATE(528),
        [sym_union_forward_dcl] = STATE(583),
        [sym_union_def] = STATE(583),
        [sym_type_id_dcl] = STATE(583),
        [sym_import_dcl] = STATE(583),
        [sym_op_oneway_dcl] = STATE(241),
        [sym_op_with_context] = STATE(583),
        [sym_native_dcl] = STATE(583),
        [sym_struct_forward_dcl] = STATE(583),
        [sym_struct_def] = STATE(583),
        [sym_const_dcl] = STATE(583),
        [sym_comment] = STATE(3),
        [aux_sym_interface_def_repeat1] = STATE(186),
        [aux_sym_value_def_repeat1] = STATE(3),
        [anon_sym_short] = ACTIONS(135),
        [anon_sym_int16] = ACTIONS(135),
        [anon_sym_long] = ACTIONS(138),
        [anon_sym_int32] = ACTIONS(138),
        [anon_sym_longlong] = ACTIONS(141),
        [anon_sym_int64] = ACTIONS(144),
        [sym_unsigned_tiny_int] = ACTIONS(147),
        [sym_boolean_type] = ACTIONS(150),
        [anon_sym_fixed] = ACTIONS(153),
        [sym_octet_type] = ACTIONS(150),
        [sym_signed_tiny_int] = ACTIONS(156),
        [anon_sym_unsignedshort] = ACTIONS(159),
        [anon_sym_uint16] = ACTIONS(162),
        [anon_sym_unsignedlong] = ACTIONS(165),
        [anon_sym_uint32] = ACTIONS(165),
        [anon_sym_unsignedlonglong] = ACTIONS(168),
        [anon_sym_uint64] = ACTIONS(171),
        [anon_sym_float] = ACTIONS(174),
        [anon_sym_double] = ACTIONS(174),
        [anon_sym_longdouble] = ACTIONS(177),
        [anon_sym_char] = ACTIONS(180),
        [anon_sym_wchar] = ACTIONS(180),
        [anon_sym_COLON_COLON] = ACTIONS(183),
        [anon_sym_string] = ACTIONS(186),
        [anon_sym_wstring] = ACTIONS(186),
        [anon_sym_any] = ACTIONS(189),
        [anon_sym_sequence] = ACTIONS(192),
        [anon_sym_map] = ACTIONS(195),
        [anon_sym_exception] = ACTIONS(198),
        [anon_sym_RBRACE] = ACTIONS(201),
        [anon_sym_void] = ACTIONS(203),
        [anon_sym_readonly] = ACTIONS(206),
        [anon_sym_attribute] = ACTIONS(209),
        [anon_sym_bitset] = ACTIONS(212),
        [anon_sym_bitmask] = ACTIONS(215),
        [anon_sym_AT] = ACTIONS(218),
        [anon_sym_valuetype] = ACTIONS(221),
        [anon_sym_struct] = ACTIONS(224),
        [anon_sym_union] = ACTIONS(227),
        [anon_sym_enum] = ACTIONS(230),
        [anon_sym_const] = ACTIONS(233),
        [anon_sym_public] = ACTIONS(236),
        [anon_sym_private] = ACTIONS(236),
        [anon_sym_factory] = ACTIONS(239),
        [anon_sym_typedef] = ACTIONS(242),
        [anon_sym_ATignore_literal_names] = ACTIONS(245),
        [anon_sym_typeid] = ACTIONS(248),
        [anon_sym_import] = ACTIONS(251),
        [sym_object_type] = ACTIONS(150),
        [anon_sym_oneway] = ACTIONS(254),
        [anon_sym_native] = ACTIONS(257),
        [sym_identifier] = ACTIONS(260),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [4] = {
        [sym_signed_short_int] = STATE(203),
        [sym_signed_long_int] = STATE(203),
        [sym_signed_longlong_int] = STATE(203),
        [sym_unsigned_int] = STATE(210),
        [sym_integer_type] = STATE(294),
        [sym_signed_int] = STATE(210),
        [sym_unsigned_short_int] = STATE(202),
        [sym_unsigned_long_int] = STATE(202),
        [sym_unsigned_longlong_int] = STATE(202),
        [sym_floating_pt_type] = STATE(294),
        [sym_char_type] = STATE(294),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(296),
        [sym_type_spec] = STATE(546),
        [sym_simple_type_spec] = STATE(328),
        [sym_base_type_spec] = STATE(297),
        [sym_any_type] = STATE(294),
        [sym_fixed_pt_type] = STATE(296),
        [sym_template_type_spec] = STATE(328),
        [sym_sequence_type] = STATE(296),
        [sym_map_type] = STATE(296),
        [sym_except_dcl] = STATE(583),
        [sym_export] = STATE(41),
        [sym_op_dcl] = STATE(241),
        [sym_op_type_spec] = STATE(534),
        [sym_attr_dcl] = STATE(583),
        [sym_readonly_attr_spec] = STATE(574),
        [sym_attr_spec] = STATE(574),
        [sym_bitset_dcl] = STATE(583),
        [sym_bitmask_dcl] = STATE(583),
        [sym_annotation_appl] = STATE(172),
        [sym_value_dcl] = STATE(583),
        [sym_value_def] = STATE(533),
        [sym_value_header] = STATE(531),
        [sym_value_element] = STATE(42),
        [sym_state_member] = STATE(41),
        [sym_init_dcl] = STATE(41),
        [sym_value_forward_dcl] = STATE(533),
        [sym_typedef_dcl] = STATE(583),
        [sym_enum_dcl] = STATE(583),
        [sym_enum_anno] = STATE(528),
        [sym_union_forward_dcl] = STATE(583),
        [sym_union_def] = STATE(583),
        [sym_type_id_dcl] = STATE(583),
        [sym_import_dcl] = STATE(583),
        [sym_op_oneway_dcl] = STATE(241),
        [sym_op_with_context] = STATE(583),
        [sym_native_dcl] = STATE(583),
        [sym_struct_forward_dcl] = STATE(583),
        [sym_struct_def] = STATE(583),
        [sym_const_dcl] = STATE(583),
        [sym_comment] = STATE(4),
        [aux_sym_interface_def_repeat1] = STATE(186),
        [aux_sym_value_def_repeat1] = STATE(2),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_exception] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(263),
        [anon_sym_void] = ACTIONS(97),
        [anon_sym_readonly] = ACTIONS(99),
        [anon_sym_attribute] = ACTIONS(101),
        [anon_sym_bitset] = ACTIONS(103),
        [anon_sym_bitmask] = ACTIONS(105),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_valuetype] = ACTIONS(109),
        [anon_sym_struct] = ACTIONS(111),
        [anon_sym_union] = ACTIONS(113),
        [anon_sym_enum] = ACTIONS(115),
        [anon_sym_const] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(119),
        [anon_sym_private] = ACTIONS(119),
        [anon_sym_factory] = ACTIONS(121),
        [anon_sym_typedef] = ACTIONS(123),
        [anon_sym_ATignore_literal_names] = ACTIONS(39),
        [anon_sym_typeid] = ACTIONS(125),
        [anon_sym_import] = ACTIONS(127),
        [sym_object_type] = ACTIONS(61),
        [anon_sym_oneway] = ACTIONS(129),
        [anon_sym_native] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [5] = {
        [sym_signed_short_int] = STATE(203),
        [sym_signed_long_int] = STATE(203),
        [sym_signed_longlong_int] = STATE(203),
        [sym_unsigned_int] = STATE(210),
        [sym_integer_type] = STATE(294),
        [sym_signed_int] = STATE(210),
        [sym_unsigned_short_int] = STATE(202),
        [sym_unsigned_long_int] = STATE(202),
        [sym_unsigned_longlong_int] = STATE(202),
        [sym_floating_pt_type] = STATE(294),
        [sym_char_type] = STATE(294),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(296),
        [sym_type_spec] = STATE(546),
        [sym_simple_type_spec] = STATE(328),
        [sym_base_type_spec] = STATE(297),
        [sym_any_type] = STATE(294),
        [sym_fixed_pt_type] = STATE(296),
        [sym_template_type_spec] = STATE(328),
        [sym_sequence_type] = STATE(296),
        [sym_map_type] = STATE(296),
        [sym_except_dcl] = STATE(563),
        [sym_interface_body] = STATE(565),
        [sym_export] = STATE(55),
        [sym_op_dcl] = STATE(326),
        [sym_op_type_spec] = STATE(534),
        [sym_attr_dcl] = STATE(563),
        [sym_readonly_attr_spec] = STATE(574),
        [sym_attr_spec] = STATE(574),
        [sym_bitset_dcl] = STATE(563),
        [sym_bitmask_dcl] = STATE(563),
        [sym_annotation_appl] = STATE(172),
        [sym_value_dcl] = STATE(563),
        [sym_value_def] = STATE(533),
        [sym_value_header] = STATE(531),
        [sym_value_forward_dcl] = STATE(533),
        [sym_typedef_dcl] = STATE(563),
        [sym_enum_dcl] = STATE(563),
        [sym_enum_anno] = STATE(528),
        [sym_union_forward_dcl] = STATE(563),
        [sym_union_def] = STATE(563),
        [sym_type_id_dcl] = STATE(563),
        [sym_import_dcl] = STATE(563),
        [sym_op_oneway_dcl] = STATE(326),
        [sym_op_with_context] = STATE(563),
        [sym_native_dcl] = STATE(563),
        [sym_struct_forward_dcl] = STATE(563),
        [sym_struct_def] = STATE(563),
        [sym_const_dcl] = STATE(563),
        [sym_comment] = STATE(5),
        [aux_sym_interface_def_repeat1] = STATE(186),
        [aux_sym_interface_body_repeat1] = STATE(7),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_exception] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(265),
        [anon_sym_void] = ACTIONS(97),
        [anon_sym_readonly] = ACTIONS(99),
        [anon_sym_attribute] = ACTIONS(101),
        [anon_sym_bitset] = ACTIONS(103),
        [anon_sym_bitmask] = ACTIONS(105),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_valuetype] = ACTIONS(109),
        [anon_sym_struct] = ACTIONS(111),
        [anon_sym_union] = ACTIONS(113),
        [anon_sym_enum] = ACTIONS(115),
        [anon_sym_const] = ACTIONS(117),
        [anon_sym_typedef] = ACTIONS(123),
        [anon_sym_ATignore_literal_names] = ACTIONS(39),
        [anon_sym_typeid] = ACTIONS(125),
        [anon_sym_import] = ACTIONS(127),
        [sym_object_type] = ACTIONS(61),
        [anon_sym_oneway] = ACTIONS(129),
        [anon_sym_native] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [6] = {
        [sym_signed_short_int] = STATE(203),
        [sym_signed_long_int] = STATE(203),
        [sym_signed_longlong_int] = STATE(203),
        [sym_unsigned_int] = STATE(210),
        [sym_integer_type] = STATE(294),
        [sym_signed_int] = STATE(210),
        [sym_unsigned_short_int] = STATE(202),
        [sym_unsigned_long_int] = STATE(202),
        [sym_unsigned_longlong_int] = STATE(202),
        [sym_floating_pt_type] = STATE(294),
        [sym_char_type] = STATE(294),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(296),
        [sym_type_spec] = STATE(546),
        [sym_simple_type_spec] = STATE(328),
        [sym_base_type_spec] = STATE(297),
        [sym_any_type] = STATE(294),
        [sym_fixed_pt_type] = STATE(296),
        [sym_template_type_spec] = STATE(328),
        [sym_sequence_type] = STATE(296),
        [sym_map_type] = STATE(296),
        [sym_except_dcl] = STATE(563),
        [sym_interface_body] = STATE(504),
        [sym_export] = STATE(55),
        [sym_op_dcl] = STATE(326),
        [sym_op_type_spec] = STATE(534),
        [sym_attr_dcl] = STATE(563),
        [sym_readonly_attr_spec] = STATE(574),
        [sym_attr_spec] = STATE(574),
        [sym_bitset_dcl] = STATE(563),
        [sym_bitmask_dcl] = STATE(563),
        [sym_annotation_appl] = STATE(172),
        [sym_value_dcl] = STATE(563),
        [sym_value_def] = STATE(533),
        [sym_value_header] = STATE(531),
        [sym_value_forward_dcl] = STATE(533),
        [sym_typedef_dcl] = STATE(563),
        [sym_enum_dcl] = STATE(563),
        [sym_enum_anno] = STATE(528),
        [sym_union_forward_dcl] = STATE(563),
        [sym_union_def] = STATE(563),
        [sym_type_id_dcl] = STATE(563),
        [sym_import_dcl] = STATE(563),
        [sym_op_oneway_dcl] = STATE(326),
        [sym_op_with_context] = STATE(563),
        [sym_native_dcl] = STATE(563),
        [sym_struct_forward_dcl] = STATE(563),
        [sym_struct_def] = STATE(563),
        [sym_const_dcl] = STATE(563),
        [sym_comment] = STATE(6),
        [aux_sym_interface_def_repeat1] = STATE(186),
        [aux_sym_interface_body_repeat1] = STATE(7),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_exception] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(267),
        [anon_sym_void] = ACTIONS(97),
        [anon_sym_readonly] = ACTIONS(99),
        [anon_sym_attribute] = ACTIONS(101),
        [anon_sym_bitset] = ACTIONS(103),
        [anon_sym_bitmask] = ACTIONS(105),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_valuetype] = ACTIONS(109),
        [anon_sym_struct] = ACTIONS(111),
        [anon_sym_union] = ACTIONS(113),
        [anon_sym_enum] = ACTIONS(115),
        [anon_sym_const] = ACTIONS(117),
        [anon_sym_typedef] = ACTIONS(123),
        [anon_sym_ATignore_literal_names] = ACTIONS(39),
        [anon_sym_typeid] = ACTIONS(125),
        [anon_sym_import] = ACTIONS(127),
        [sym_object_type] = ACTIONS(61),
        [anon_sym_oneway] = ACTIONS(129),
        [anon_sym_native] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [7] = {
        [sym_signed_short_int] = STATE(203),
        [sym_signed_long_int] = STATE(203),
        [sym_signed_longlong_int] = STATE(203),
        [sym_unsigned_int] = STATE(210),
        [sym_integer_type] = STATE(294),
        [sym_signed_int] = STATE(210),
        [sym_unsigned_short_int] = STATE(202),
        [sym_unsigned_long_int] = STATE(202),
        [sym_unsigned_longlong_int] = STATE(202),
        [sym_floating_pt_type] = STATE(294),
        [sym_char_type] = STATE(294),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(296),
        [sym_type_spec] = STATE(546),
        [sym_simple_type_spec] = STATE(328),
        [sym_base_type_spec] = STATE(297),
        [sym_any_type] = STATE(294),
        [sym_fixed_pt_type] = STATE(296),
        [sym_template_type_spec] = STATE(328),
        [sym_sequence_type] = STATE(296),
        [sym_map_type] = STATE(296),
        [sym_except_dcl] = STATE(563),
        [sym_export] = STATE(55),
        [sym_op_dcl] = STATE(326),
        [sym_op_type_spec] = STATE(534),
        [sym_attr_dcl] = STATE(563),
        [sym_readonly_attr_spec] = STATE(574),
        [sym_attr_spec] = STATE(574),
        [sym_bitset_dcl] = STATE(563),
        [sym_bitmask_dcl] = STATE(563),
        [sym_annotation_appl] = STATE(172),
        [sym_value_dcl] = STATE(563),
        [sym_value_def] = STATE(533),
        [sym_value_header] = STATE(531),
        [sym_value_forward_dcl] = STATE(533),
        [sym_typedef_dcl] = STATE(563),
        [sym_enum_dcl] = STATE(563),
        [sym_enum_anno] = STATE(528),
        [sym_union_forward_dcl] = STATE(563),
        [sym_union_def] = STATE(563),
        [sym_type_id_dcl] = STATE(563),
        [sym_import_dcl] = STATE(563),
        [sym_op_oneway_dcl] = STATE(326),
        [sym_op_with_context] = STATE(563),
        [sym_native_dcl] = STATE(563),
        [sym_struct_forward_dcl] = STATE(563),
        [sym_struct_def] = STATE(563),
        [sym_const_dcl] = STATE(563),
        [sym_comment] = STATE(7),
        [aux_sym_interface_def_repeat1] = STATE(186),
        [aux_sym_interface_body_repeat1] = STATE(8),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_exception] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(269),
        [anon_sym_void] = ACTIONS(97),
        [anon_sym_readonly] = ACTIONS(99),
        [anon_sym_attribute] = ACTIONS(101),
        [anon_sym_bitset] = ACTIONS(103),
        [anon_sym_bitmask] = ACTIONS(105),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_valuetype] = ACTIONS(109),
        [anon_sym_struct] = ACTIONS(111),
        [anon_sym_union] = ACTIONS(113),
        [anon_sym_enum] = ACTIONS(115),
        [anon_sym_const] = ACTIONS(117),
        [anon_sym_typedef] = ACTIONS(123),
        [anon_sym_ATignore_literal_names] = ACTIONS(39),
        [anon_sym_typeid] = ACTIONS(125),
        [anon_sym_import] = ACTIONS(127),
        [sym_object_type] = ACTIONS(61),
        [anon_sym_oneway] = ACTIONS(129),
        [anon_sym_native] = ACTIONS(131),
        [sym_identifier] = ACTIONS(133),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [8] = {
        [sym_signed_short_int] = STATE(203),
        [sym_signed_long_int] = STATE(203),
        [sym_signed_longlong_int] = STATE(203),
        [sym_unsigned_int] = STATE(210),
        [sym_integer_type] = STATE(294),
        [sym_signed_int] = STATE(210),
        [sym_unsigned_short_int] = STATE(202),
        [sym_unsigned_long_int] = STATE(202),
        [sym_unsigned_longlong_int] = STATE(202),
        [sym_floating_pt_type] = STATE(294),
        [sym_char_type] = STATE(294),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(296),
        [sym_type_spec] = STATE(546),
        [sym_simple_type_spec] = STATE(328),
        [sym_base_type_spec] = STATE(297),
        [sym_any_type] = STATE(294),
        [sym_fixed_pt_type] = STATE(296),
        [sym_template_type_spec] = STATE(328),
        [sym_sequence_type] = STATE(296),
        [sym_map_type] = STATE(296),
        [sym_except_dcl] = STATE(563),
        [sym_export] = STATE(55),
        [sym_op_dcl] = STATE(326),
        [sym_op_type_spec] = STATE(534),
        [sym_attr_dcl] = STATE(563),
        [sym_readonly_attr_spec] = STATE(574),
        [sym_attr_spec] = STATE(574),
        [sym_bitset_dcl] = STATE(563),
        [sym_bitmask_dcl] = STATE(563),
        [sym_annotation_appl] = STATE(172),
        [sym_value_dcl] = STATE(563),
        [sym_value_def] = STATE(533),
        [sym_value_header] = STATE(531),
        [sym_value_forward_dcl] = STATE(533),
        [sym_typedef_dcl] = STATE(563),
        [sym_enum_dcl] = STATE(563),
        [sym_enum_anno] = STATE(528),
        [sym_union_forward_dcl] = STATE(563),
        [sym_union_def] = STATE(563),
        [sym_type_id_dcl] = STATE(563),
        [sym_import_dcl] = STATE(563),
        [sym_op_oneway_dcl] = STATE(326),
        [sym_op_with_context] = STATE(563),
        [sym_native_dcl] = STATE(563),
        [sym_struct_forward_dcl] = STATE(563),
        [sym_struct_def] = STATE(563),
        [sym_const_dcl] = STATE(563),
        [sym_comment] = STATE(8),
        [aux_sym_interface_def_repeat1] = STATE(186),
        [aux_sym_interface_body_repeat1] = STATE(8),
        [anon_sym_short] = ACTIONS(271),
        [anon_sym_int16] = ACTIONS(271),
        [anon_sym_long] = ACTIONS(274),
        [anon_sym_int32] = ACTIONS(274),
        [anon_sym_longlong] = ACTIONS(277),
        [anon_sym_int64] = ACTIONS(280),
        [sym_unsigned_tiny_int] = ACTIONS(283),
        [sym_boolean_type] = ACTIONS(286),
        [anon_sym_fixed] = ACTIONS(289),
        [sym_octet_type] = ACTIONS(286),
        [sym_signed_tiny_int] = ACTIONS(292),
        [anon_sym_unsignedshort] = ACTIONS(295),
        [anon_sym_uint16] = ACTIONS(298),
        [anon_sym_unsignedlong] = ACTIONS(301),
        [anon_sym_uint32] = ACTIONS(301),
        [anon_sym_unsignedlonglong] = ACTIONS(304),
        [anon_sym_uint64] = ACTIONS(307),
        [anon_sym_float] = ACTIONS(310),
        [anon_sym_double] = ACTIONS(310),
        [anon_sym_longdouble] = ACTIONS(313),
        [anon_sym_char] = ACTIONS(316),
        [anon_sym_wchar] = ACTIONS(316),
        [anon_sym_COLON_COLON] = ACTIONS(319),
        [anon_sym_string] = ACTIONS(322),
        [anon_sym_wstring] = ACTIONS(322),
        [anon_sym_any] = ACTIONS(325),
        [anon_sym_sequence] = ACTIONS(328),
        [anon_sym_map] = ACTIONS(331),
        [anon_sym_exception] = ACTIONS(334),
        [anon_sym_RBRACE] = ACTIONS(337),
        [anon_sym_void] = ACTIONS(339),
        [anon_sym_readonly] = ACTIONS(342),
        [anon_sym_attribute] = ACTIONS(345),
        [anon_sym_bitset] = ACTIONS(348),
        [anon_sym_bitmask] = ACTIONS(351),
        [anon_sym_AT] = ACTIONS(354),
        [anon_sym_valuetype] = ACTIONS(357),
        [anon_sym_struct] = ACTIONS(360),
        [anon_sym_union] = ACTIONS(363),
        [anon_sym_enum] = ACTIONS(366),
        [anon_sym_const] = ACTIONS(369),
        [anon_sym_typedef] = ACTIONS(372),
        [anon_sym_ATignore_literal_names] = ACTIONS(375),
        [anon_sym_typeid] = ACTIONS(378),
        [anon_sym_import] = ACTIONS(381),
        [sym_object_type] = ACTIONS(286),
        [anon_sym_oneway] = ACTIONS(384),
        [anon_sym_native] = ACTIONS(387),
        [sym_identifier] = ACTIONS(390),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [9] = {
        [sym_signed_short_int] = STATE(203),
        [sym_signed_long_int] = STATE(203),
        [sym_signed_longlong_int] = STATE(203),
        [sym_unsigned_int] = STATE(210),
        [sym_integer_type] = STATE(294),
        [sym_signed_int] = STATE(210),
        [sym_unsigned_short_int] = STATE(202),
        [sym_unsigned_long_int] = STATE(202),
        [sym_unsigned_longlong_int] = STATE(202),
        [sym_floating_pt_type] = STATE(294),
        [sym_char_type] = STATE(294),
        [sym_scoped_name] = STATE(139),
        [sym_string_type] = STATE(296),
        [sym_type_spec] = STATE(381),
        [sym_simple_type_spec] = STATE(328),
        [sym_base_type_spec] = STATE(297),
        [sym_any_type] = STATE(294),
        [sym_fixed_pt_type] = STATE(296),
        [sym_template_type_spec] = STATE(328),
        [sym_sequence_type] = STATE(296),
        [sym_map_type] = STATE(296),
        [sym_const_expr] = STATE(381),
        [sym_or_expr] = STATE(153),
        [sym_xor_expr] = STATE(146),
        [sym_and_expr] = STATE(142),
        [sym_shift_expr] = STATE(140),
        [sym_add_expr] = STATE(137),
        [sym_mult_expr] = STATE(122),
        [sym_unary_expr] = STATE(133),
        [sym_unary_operator] = STATE(135),
        [sym_literal] = STATE(128),
        [sym_string_literal] = STATE(127),
        [sym_char_literal] = STATE(127),
        [sym_boolean_literal] = STATE(127),
        [sym_actual_parameters] = STATE(532),
        [sym_actual_parameter] = STATE(268),
        [sym_comment] = STATE(9),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(393),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_PLUS] = ACTIONS(395),
        [anon_sym_DASH] = ACTIONS(395),
        [anon_sym_LPAREN] = ACTIONS(397),
        [anon_sym_TILDE] = ACTIONS(399),
        [anon_sym_L] = ACTIONS(401),
        [anon_sym_DQUOTE] = ACTIONS(403),
        [anon_sym_SQUOTE] = ACTIONS(405),
        [anon_sym_TRUE] = ACTIONS(407),
        [anon_sym_FALSE] = ACTIONS(407),
        [sym_number_literal] = ACTIONS(409),
        [sym_object_type] = ACTIONS(61),
        [sym_identifier] = ACTIONS(411),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [10] = {
        [sym_signed_short_int] = STATE(203),
        [sym_signed_long_int] = STATE(203),
        [sym_signed_longlong_int] = STATE(203),
        [sym_unsigned_int] = STATE(210),
        [sym_integer_type] = STATE(294),
        [sym_signed_int] = STATE(210),
        [sym_unsigned_short_int] = STATE(202),
        [sym_unsigned_long_int] = STATE(202),
        [sym_unsigned_longlong_int] = STATE(202),
        [sym_floating_pt_type] = STATE(294),
        [sym_char_type] = STATE(294),
        [sym_scoped_name] = STATE(139),
        [sym_string_type] = STATE(296),
        [sym_type_spec] = STATE(381),
        [sym_simple_type_spec] = STATE(328),
        [sym_base_type_spec] = STATE(297),
        [sym_any_type] = STATE(294),
        [sym_fixed_pt_type] = STATE(296),
        [sym_template_type_spec] = STATE(328),
        [sym_sequence_type] = STATE(296),
        [sym_map_type] = STATE(296),
        [sym_const_expr] = STATE(381),
        [sym_or_expr] = STATE(153),
        [sym_xor_expr] = STATE(146),
        [sym_and_expr] = STATE(142),
        [sym_shift_expr] = STATE(140),
        [sym_add_expr] = STATE(137),
        [sym_mult_expr] = STATE(122),
        [sym_unary_expr] = STATE(133),
        [sym_unary_operator] = STATE(135),
        [sym_literal] = STATE(128),
        [sym_string_literal] = STATE(127),
        [sym_char_literal] = STATE(127),
        [sym_boolean_literal] = STATE(127),
        [sym_actual_parameter] = STATE(392),
        [sym_comment] = STATE(10),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(393),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_PLUS] = ACTIONS(395),
        [anon_sym_DASH] = ACTIONS(395),
        [anon_sym_LPAREN] = ACTIONS(397),
        [anon_sym_TILDE] = ACTIONS(399),
        [anon_sym_L] = ACTIONS(401),
        [anon_sym_DQUOTE] = ACTIONS(403),
        [anon_sym_SQUOTE] = ACTIONS(405),
        [anon_sym_TRUE] = ACTIONS(407),
        [anon_sym_FALSE] = ACTIONS(407),
        [sym_number_literal] = ACTIONS(409),
        [sym_object_type] = ACTIONS(61),
        [sym_identifier] = ACTIONS(411),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [11] = {
        [sym_signed_short_int] = STATE(203),
        [sym_signed_long_int] = STATE(203),
        [sym_signed_longlong_int] = STATE(203),
        [sym_unsigned_int] = STATE(210),
        [sym_integer_type] = STATE(294),
        [sym_signed_int] = STATE(210),
        [sym_unsigned_short_int] = STATE(202),
        [sym_unsigned_long_int] = STATE(202),
        [sym_unsigned_longlong_int] = STATE(202),
        [sym_floating_pt_type] = STATE(294),
        [sym_char_type] = STATE(294),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(296),
        [sym_type_spec] = STATE(194),
        [sym_simple_type_spec] = STATE(328),
        [sym_base_type_spec] = STATE(297),
        [sym_any_type] = STATE(294),
        [sym_fixed_pt_type] = STATE(296),
        [sym_template_type_spec] = STATE(328),
        [sym_sequence_type] = STATE(296),
        [sym_map_type] = STATE(296),
        [sym_bitset_dcl] = STATE(194),
        [sym_bitmask_dcl] = STATE(194),
        [sym_annotation_appl] = STATE(172),
        [sym_enum_dcl] = STATE(194),
        [sym_enum_anno] = STATE(528),
        [sym_union_forward_dcl] = STATE(194),
        [sym_union_def] = STATE(194),
        [sym_element_spec] = STATE(529),
        [sym_struct_forward_dcl] = STATE(194),
        [sym_struct_def] = STATE(194),
        [sym_comment] = STATE(11),
        [aux_sym_interface_def_repeat1] = STATE(186),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(413),
        [anon_sym_bitset] = ACTIONS(103),
        [anon_sym_bitmask] = ACTIONS(105),
        [anon_sym_default] = ACTIONS(415),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(111),
        [anon_sym_union] = ACTIONS(113),
        [anon_sym_enum] = ACTIONS(115),
        [anon_sym_ATignore_literal_names] = ACTIONS(39),
        [anon_sym_case] = ACTIONS(415),
        [sym_object_type] = ACTIONS(61),
        [sym_identifier] = ACTIONS(133),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [12] = {
        [sym_signed_short_int] = STATE(203),
        [sym_signed_long_int] = STATE(203),
        [sym_signed_longlong_int] = STATE(203),
        [sym_unsigned_int] = STATE(210),
        [sym_integer_type] = STATE(294),
        [sym_signed_int] = STATE(210),
        [sym_unsigned_short_int] = STATE(202),
        [sym_unsigned_long_int] = STATE(202),
        [sym_unsigned_longlong_int] = STATE(202),
        [sym_floating_pt_type] = STATE(294),
        [sym_char_type] = STATE(294),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(296),
        [sym_simple_type_spec] = STATE(180),
        [sym_base_type_spec] = STATE(297),
        [sym_any_type] = STATE(294),
        [sym_fixed_pt_type] = STATE(296),
        [sym_template_type_spec] = STATE(180),
        [sym_sequence_type] = STATE(296),
        [sym_map_type] = STATE(296),
        [sym_bitset_dcl] = STATE(180),
        [sym_bitmask_dcl] = STATE(180),
        [sym_annotation_appl] = STATE(172),
        [sym_type_declarator] = STATE(448),
        [sym_enum_dcl] = STATE(180),
        [sym_enum_anno] = STATE(528),
        [sym_union_forward_dcl] = STATE(180),
        [sym_union_def] = STATE(180),
        [sym_struct_forward_dcl] = STATE(180),
        [sym_struct_def] = STATE(180),
        [sym_comment] = STATE(12),
        [aux_sym_interface_def_repeat1] = STATE(186),
        [anon_sym_short] = ACTIONS(51),
        [anon_sym_int16] = ACTIONS(51),
        [anon_sym_long] = ACTIONS(53),
        [anon_sym_int32] = ACTIONS(53),
        [anon_sym_longlong] = ACTIONS(55),
        [anon_sym_int64] = ACTIONS(57),
        [sym_unsigned_tiny_int] = ACTIONS(59),
        [sym_boolean_type] = ACTIONS(61),
        [anon_sym_fixed] = ACTIONS(63),
        [sym_octet_type] = ACTIONS(61),
        [sym_signed_tiny_int] = ACTIONS(65),
        [anon_sym_unsignedshort] = ACTIONS(67),
        [anon_sym_uint16] = ACTIONS(69),
        [anon_sym_unsignedlong] = ACTIONS(71),
        [anon_sym_uint32] = ACTIONS(71),
        [anon_sym_unsignedlonglong] = ACTIONS(73),
        [anon_sym_uint64] = ACTIONS(75),
        [anon_sym_float] = ACTIONS(77),
        [anon_sym_double] = ACTIONS(77),
        [anon_sym_longdouble] = ACTIONS(79),
        [anon_sym_char] = ACTIONS(81),
        [anon_sym_wchar] = ACTIONS(81),
        [anon_sym_COLON_COLON] = ACTIONS(83),
        [anon_sym_string] = ACTIONS(85),
        [anon_sym_wstring] = ACTIONS(85),
        [anon_sym_any] = ACTIONS(87),
        [anon_sym_sequence] = ACTIONS(89),
        [anon_sym_map] = ACTIONS(91),
        [anon_sym_bitset] = ACTIONS(103),
        [anon_sym_bitmask] = ACTIONS(105),
        [anon_sym_AT] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(111),
        [anon_sym_union] = ACTIONS(113),
        [anon_sym_enum] = ACTIONS(115),
        [anon_sym_ATignore_literal_names] = ACTIONS(39),
        [sym_object_type] = ACTIONS(61),
        [sym_identifier] = ACTIONS(133),
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
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(115),
    1,
    anon_sym_enum,
    ACTIONS(117),
    1,
    anon_sym_const,
    ACTIONS(123),
    1,
    anon_sym_typedef,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(419),
    1,
    anon_sym_fixed,
    ACTIONS(421),
    1,
    anon_sym_any,
    ACTIONS(423),
    1,
    anon_sym_RBRACE,
    ACTIONS(425),
    1,
    anon_sym_ATignore_literal_names,
    STATE(13),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(63),
    1,
    sym_annotation_body,
    STATE(65),
    1,
    sym_annotation_member,
    STATE(413),
    1,
    sym_scoped_name,
    STATE(419),
    1,
    sym_annotation_member_type,
    STATE(528),
    1,
    sym_enum_anno,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(417),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(450),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(461),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(516),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [144] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(433),
    1,
    anon_sym_longlong,
    ACTIONS(436),
    1,
    anon_sym_int64,
    ACTIONS(439),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(445),
    1,
    anon_sym_fixed,
    ACTIONS(448),
    1,
    sym_signed_tiny_int,
    ACTIONS(451),
    1,
    anon_sym_unsignedshort,
    ACTIONS(454),
    1,
    anon_sym_uint16,
    ACTIONS(460),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(463),
    1,
    anon_sym_uint64,
    ACTIONS(469),
    1,
    anon_sym_longdouble,
    ACTIONS(475),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(481),
    1,
    anon_sym_any,
    ACTIONS(484),
    1,
    anon_sym_sequence,
    ACTIONS(487),
    1,
    anon_sym_RBRACE,
    ACTIONS(489),
    1,
    anon_sym_enum,
    ACTIONS(492),
    1,
    anon_sym_const,
    ACTIONS(495),
    1,
    anon_sym_typedef,
    ACTIONS(498),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(501),
    1,
    sym_identifier,
    STATE(63),
    1,
    sym_annotation_body,
    STATE(65),
    1,
    sym_annotation_member,
    STATE(413),
    1,
    sym_scoped_name,
    STATE(419),
    1,
    sym_annotation_member_type,
    STATE(528),
    1,
    sym_enum_anno,
    ACTIONS(427),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(430),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(442),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(457),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(466),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(472),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(478),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(14),
    2,
    sym_comment,
    aux_sym_annotation_dcl_repeat1,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(450),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(461),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(516),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [286] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(115),
    1,
    anon_sym_enum,
    ACTIONS(117),
    1,
    anon_sym_const,
    ACTIONS(123),
    1,
    anon_sym_typedef,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(419),
    1,
    anon_sym_fixed,
    ACTIONS(421),
    1,
    anon_sym_any,
    ACTIONS(425),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(504),
    1,
    anon_sym_RBRACE,
    STATE(13),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(15),
    1,
    sym_comment,
    STATE(63),
    1,
    sym_annotation_body,
    STATE(65),
    1,
    sym_annotation_member,
    STATE(413),
    1,
    sym_scoped_name,
    STATE(419),
    1,
    sym_annotation_member_type,
    STATE(528),
    1,
    sym_enum_anno,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(417),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(450),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(461),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(516),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [430] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(11),
    1,
    anon_sym_exception,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_interface,
    ACTIONS(17),
    1,
    anon_sym_bitset,
    ACTIONS(19),
    1,
    anon_sym_bitmask,
    ACTIONS(21),
    1,
    anon_sym_ATannotation,
    ACTIONS(23),
    1,
    anon_sym_AT,
    ACTIONS(25),
    1,
    anon_sym_module,
    ACTIONS(27),
    1,
    anon_sym_valuetype,
    ACTIONS(29),
    1,
    anon_sym_struct,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_enum,
    ACTIONS(35),
    1,
    anon_sym_const,
    ACTIONS(37),
    1,
    anon_sym_typedef,
    ACTIONS(39),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(41),
    1,
    anon_sym_typeid,
    ACTIONS(43),
    1,
    anon_sym_typeprefix,
    ACTIONS(45),
    1,
    anon_sym_import,
    ACTIONS(47),
    1,
    anon_sym_native,
    ACTIONS(506),
    1,
    anon_sym_RBRACE,
    ACTIONS(508),
    1,
    anon_sym_alias,
    ACTIONS(510),
    1,
    anon_sym_POUNDdefine,
    STATE(16),
    1,
    sym_comment,
    STATE(27),
    1,
    aux_sym_template_module_dcl_repeat1,
    STATE(107),
    1,
    sym_predefine,
    STATE(112),
    1,
    sym__definition,
    STATE(115),
    1,
    sym_tpl_definition,
    STATE(145),
    1,
    aux_sym_interface_def_repeat1,
    STATE(172),
    1,
    sym_annotation_appl,
    STATE(457),
    1,
    sym_template_module_ref,
    STATE(528),
    1,
    sym_enum_anno,
    STATE(531),
    1,
    sym_value_header,
    STATE(540),
    1,
    sym_interface_header,
    STATE(559),
    1,
    sym_interface_kind,
    STATE(533),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(543),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(560),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [569] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(512),
    1,
    anon_sym_RBRACE,
    ACTIONS(514),
    1,
    anon_sym_AT,
    STATE(17),
    1,
    sym_comment,
    STATE(28),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(36),
    1,
    aux_sym_interface_def_repeat1,
    STATE(68),
    1,
    sym_member,
    STATE(76),
    1,
    sym_annotation_appl,
    STATE(169),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [710] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(514),
    1,
    anon_sym_AT,
    ACTIONS(516),
    1,
    anon_sym_RBRACE,
    STATE(18),
    1,
    sym_comment,
    STATE(26),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(36),
    1,
    aux_sym_interface_def_repeat1,
    STATE(68),
    1,
    sym_member,
    STATE(76),
    1,
    sym_annotation_appl,
    STATE(169),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [851] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(9),
    1,
    sym_preproc_directive,
    ACTIONS(11),
    1,
    anon_sym_exception,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_interface,
    ACTIONS(17),
    1,
    anon_sym_bitset,
    ACTIONS(19),
    1,
    anon_sym_bitmask,
    ACTIONS(21),
    1,
    anon_sym_ATannotation,
    ACTIONS(23),
    1,
    anon_sym_AT,
    ACTIONS(25),
    1,
    anon_sym_module,
    ACTIONS(27),
    1,
    anon_sym_valuetype,
    ACTIONS(29),
    1,
    anon_sym_struct,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_enum,
    ACTIONS(35),
    1,
    anon_sym_const,
    ACTIONS(37),
    1,
    anon_sym_typedef,
    ACTIONS(39),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(41),
    1,
    anon_sym_typeid,
    ACTIONS(43),
    1,
    anon_sym_typeprefix,
    ACTIONS(45),
    1,
    anon_sym_import,
    ACTIONS(47),
    1,
    anon_sym_native,
    ACTIONS(49),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(518),
    1,
    ts_builtin_sym_end,
    STATE(19),
    1,
    sym_comment,
    STATE(35),
    1,
    aux_sym_specification_repeat2,
    STATE(102),
    1,
    aux_sym_specification_repeat1,
    STATE(107),
    1,
    sym_predefine,
    STATE(113),
    1,
    sym__definition,
    STATE(114),
    1,
    sym_preproc_call,
    STATE(145),
    1,
    aux_sym_interface_def_repeat1,
    STATE(172),
    1,
    sym_annotation_appl,
    STATE(528),
    1,
    sym_enum_anno,
    STATE(531),
    1,
    sym_value_header,
    STATE(540),
    1,
    sym_interface_header,
    STATE(559),
    1,
    sym_interface_kind,
    STATE(533),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(543),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(560),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [990] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(514),
    1,
    anon_sym_AT,
    ACTIONS(520),
    1,
    anon_sym_RBRACE,
    STATE(20),
    1,
    sym_comment,
    STATE(29),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(36),
    1,
    aux_sym_interface_def_repeat1,
    STATE(68),
    1,
    sym_member,
    STATE(76),
    1,
    sym_annotation_appl,
    STATE(169),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1131] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(514),
    1,
    anon_sym_AT,
    ACTIONS(522),
    1,
    anon_sym_RBRACE,
    STATE(21),
    1,
    sym_comment,
    STATE(24),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(36),
    1,
    aux_sym_interface_def_repeat1,
    STATE(68),
    1,
    sym_member,
    STATE(76),
    1,
    sym_annotation_appl,
    STATE(169),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1272] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(514),
    1,
    anon_sym_AT,
    ACTIONS(524),
    1,
    anon_sym_RBRACE,
    STATE(22),
    1,
    sym_comment,
    STATE(26),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(36),
    1,
    aux_sym_interface_def_repeat1,
    STATE(68),
    1,
    sym_member,
    STATE(76),
    1,
    sym_annotation_appl,
    STATE(169),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1413] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(514),
    1,
    anon_sym_AT,
    ACTIONS(524),
    1,
    anon_sym_RBRACE,
    STATE(18),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(23),
    1,
    sym_comment,
    STATE(36),
    1,
    aux_sym_interface_def_repeat1,
    STATE(68),
    1,
    sym_member,
    STATE(76),
    1,
    sym_annotation_appl,
    STATE(169),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1554] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(514),
    1,
    anon_sym_AT,
    ACTIONS(526),
    1,
    anon_sym_RBRACE,
    STATE(24),
    1,
    sym_comment,
    STATE(26),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(36),
    1,
    aux_sym_interface_def_repeat1,
    STATE(68),
    1,
    sym_member,
    STATE(76),
    1,
    sym_annotation_appl,
    STATE(169),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1695] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(514),
    1,
    anon_sym_AT,
    ACTIONS(528),
    1,
    anon_sym_RBRACE,
    STATE(22),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(25),
    1,
    sym_comment,
    STATE(36),
    1,
    aux_sym_interface_def_repeat1,
    STATE(68),
    1,
    sym_member,
    STATE(76),
    1,
    sym_annotation_appl,
    STATE(169),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1836] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(536),
    1,
    anon_sym_longlong,
    ACTIONS(539),
    1,
    anon_sym_int64,
    ACTIONS(542),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(548),
    1,
    anon_sym_fixed,
    ACTIONS(551),
    1,
    sym_signed_tiny_int,
    ACTIONS(554),
    1,
    anon_sym_unsignedshort,
    ACTIONS(557),
    1,
    anon_sym_uint16,
    ACTIONS(563),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(566),
    1,
    anon_sym_uint64,
    ACTIONS(572),
    1,
    anon_sym_longdouble,
    ACTIONS(578),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(584),
    1,
    anon_sym_any,
    ACTIONS(587),
    1,
    anon_sym_sequence,
    ACTIONS(590),
    1,
    anon_sym_map,
    ACTIONS(593),
    1,
    anon_sym_RBRACE,
    ACTIONS(595),
    1,
    anon_sym_AT,
    ACTIONS(598),
    1,
    sym_identifier,
    STATE(36),
    1,
    aux_sym_interface_def_repeat1,
    STATE(68),
    1,
    sym_member,
    STATE(76),
    1,
    sym_annotation_appl,
    STATE(169),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    ACTIONS(530),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(533),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(560),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(569),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(575),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(581),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(26),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(545),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1975] = 38,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(601),
    1,
    anon_sym_exception,
    ACTIONS(604),
    1,
    anon_sym_RBRACE,
    ACTIONS(606),
    1,
    anon_sym_local,
    ACTIONS(609),
    1,
    anon_sym_interface,
    ACTIONS(612),
    1,
    anon_sym_bitset,
    ACTIONS(615),
    1,
    anon_sym_bitmask,
    ACTIONS(618),
    1,
    anon_sym_ATannotation,
    ACTIONS(621),
    1,
    anon_sym_AT,
    ACTIONS(624),
    1,
    anon_sym_module,
    ACTIONS(627),
    1,
    anon_sym_valuetype,
    ACTIONS(630),
    1,
    anon_sym_struct,
    ACTIONS(633),
    1,
    anon_sym_union,
    ACTIONS(636),
    1,
    anon_sym_enum,
    ACTIONS(639),
    1,
    anon_sym_const,
    ACTIONS(642),
    1,
    anon_sym_alias,
    ACTIONS(645),
    1,
    anon_sym_typedef,
    ACTIONS(648),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(651),
    1,
    anon_sym_typeid,
    ACTIONS(654),
    1,
    anon_sym_typeprefix,
    ACTIONS(657),
    1,
    anon_sym_import,
    ACTIONS(660),
    1,
    anon_sym_native,
    ACTIONS(663),
    1,
    anon_sym_POUNDdefine,
    STATE(107),
    1,
    sym_predefine,
    STATE(112),
    1,
    sym__definition,
    STATE(115),
    1,
    sym_tpl_definition,
    STATE(145),
    1,
    aux_sym_interface_def_repeat1,
    STATE(172),
    1,
    sym_annotation_appl,
    STATE(457),
    1,
    sym_template_module_ref,
    STATE(528),
    1,
    sym_enum_anno,
    STATE(531),
    1,
    sym_value_header,
    STATE(540),
    1,
    sym_interface_header,
    STATE(559),
    1,
    sym_interface_kind,
    STATE(27),
    2,
    sym_comment,
    aux_sym_template_module_dcl_repeat1,
    STATE(533),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(543),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(560),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [2112] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(514),
    1,
    anon_sym_AT,
    ACTIONS(666),
    1,
    anon_sym_RBRACE,
    STATE(26),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(28),
    1,
    sym_comment,
    STATE(36),
    1,
    aux_sym_interface_def_repeat1,
    STATE(68),
    1,
    sym_member,
    STATE(76),
    1,
    sym_annotation_appl,
    STATE(169),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2253] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(514),
    1,
    anon_sym_AT,
    ACTIONS(668),
    1,
    anon_sym_RBRACE,
    STATE(26),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(29),
    1,
    sym_comment,
    STATE(36),
    1,
    aux_sym_interface_def_repeat1,
    STATE(68),
    1,
    sym_member,
    STATE(76),
    1,
    sym_annotation_appl,
    STATE(169),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2394] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(11),
    1,
    anon_sym_exception,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_interface,
    ACTIONS(17),
    1,
    anon_sym_bitset,
    ACTIONS(19),
    1,
    anon_sym_bitmask,
    ACTIONS(21),
    1,
    anon_sym_ATannotation,
    ACTIONS(23),
    1,
    anon_sym_AT,
    ACTIONS(25),
    1,
    anon_sym_module,
    ACTIONS(27),
    1,
    anon_sym_valuetype,
    ACTIONS(29),
    1,
    anon_sym_struct,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_enum,
    ACTIONS(35),
    1,
    anon_sym_const,
    ACTIONS(37),
    1,
    anon_sym_typedef,
    ACTIONS(39),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(41),
    1,
    anon_sym_typeid,
    ACTIONS(43),
    1,
    anon_sym_typeprefix,
    ACTIONS(45),
    1,
    anon_sym_import,
    ACTIONS(47),
    1,
    anon_sym_native,
    ACTIONS(508),
    1,
    anon_sym_alias,
    ACTIONS(510),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(670),
    1,
    anon_sym_RBRACE,
    STATE(16),
    1,
    aux_sym_template_module_dcl_repeat1,
    STATE(30),
    1,
    sym_comment,
    STATE(107),
    1,
    sym_predefine,
    STATE(112),
    1,
    sym__definition,
    STATE(115),
    1,
    sym_tpl_definition,
    STATE(145),
    1,
    aux_sym_interface_def_repeat1,
    STATE(172),
    1,
    sym_annotation_appl,
    STATE(457),
    1,
    sym_template_module_ref,
    STATE(528),
    1,
    sym_enum_anno,
    STATE(531),
    1,
    sym_value_header,
    STATE(540),
    1,
    sym_interface_header,
    STATE(559),
    1,
    sym_interface_kind,
    STATE(533),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(543),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(560),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [2533] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(674),
    1,
    anon_sym_exception,
    ACTIONS(677),
    1,
    anon_sym_local,
    ACTIONS(680),
    1,
    anon_sym_interface,
    ACTIONS(683),
    1,
    anon_sym_bitset,
    ACTIONS(686),
    1,
    anon_sym_bitmask,
    ACTIONS(689),
    1,
    anon_sym_ATannotation,
    ACTIONS(692),
    1,
    anon_sym_AT,
    ACTIONS(695),
    1,
    anon_sym_module,
    ACTIONS(698),
    1,
    anon_sym_valuetype,
    ACTIONS(701),
    1,
    anon_sym_struct,
    ACTIONS(704),
    1,
    anon_sym_union,
    ACTIONS(707),
    1,
    anon_sym_enum,
    ACTIONS(710),
    1,
    anon_sym_const,
    ACTIONS(713),
    1,
    anon_sym_typedef,
    ACTIONS(716),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(719),
    1,
    anon_sym_typeid,
    ACTIONS(722),
    1,
    anon_sym_typeprefix,
    ACTIONS(725),
    1,
    anon_sym_import,
    ACTIONS(728),
    1,
    anon_sym_native,
    ACTIONS(731),
    1,
    anon_sym_POUNDdefine,
    STATE(107),
    1,
    sym_predefine,
    STATE(113),
    1,
    sym__definition,
    STATE(145),
    1,
    aux_sym_interface_def_repeat1,
    STATE(172),
    1,
    sym_annotation_appl,
    STATE(528),
    1,
    sym_enum_anno,
    STATE(531),
    1,
    sym_value_header,
    STATE(540),
    1,
    sym_interface_header,
    STATE(559),
    1,
    sym_interface_kind,
    ACTIONS(672),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(31),
    2,
    sym_comment,
    aux_sym_specification_repeat2,
    STATE(533),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(543),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(560),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [2662] = 36,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(11),
    1,
    anon_sym_exception,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_interface,
    ACTIONS(17),
    1,
    anon_sym_bitset,
    ACTIONS(19),
    1,
    anon_sym_bitmask,
    ACTIONS(21),
    1,
    anon_sym_ATannotation,
    ACTIONS(23),
    1,
    anon_sym_AT,
    ACTIONS(25),
    1,
    anon_sym_module,
    ACTIONS(27),
    1,
    anon_sym_valuetype,
    ACTIONS(29),
    1,
    anon_sym_struct,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_enum,
    ACTIONS(35),
    1,
    anon_sym_const,
    ACTIONS(37),
    1,
    anon_sym_typedef,
    ACTIONS(39),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(41),
    1,
    anon_sym_typeid,
    ACTIONS(43),
    1,
    anon_sym_typeprefix,
    ACTIONS(45),
    1,
    anon_sym_import,
    ACTIONS(47),
    1,
    anon_sym_native,
    ACTIONS(510),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(734),
    1,
    anon_sym_RBRACE,
    STATE(31),
    1,
    aux_sym_specification_repeat2,
    STATE(32),
    1,
    sym_comment,
    STATE(107),
    1,
    sym_predefine,
    STATE(113),
    1,
    sym__definition,
    STATE(145),
    1,
    aux_sym_interface_def_repeat1,
    STATE(172),
    1,
    sym_annotation_appl,
    STATE(528),
    1,
    sym_enum_anno,
    STATE(531),
    1,
    sym_value_header,
    STATE(540),
    1,
    sym_interface_header,
    STATE(559),
    1,
    sym_interface_kind,
    STATE(533),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(543),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(560),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [2792] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(736),
    1,
    anon_sym_sequence,
    ACTIONS(740),
    1,
    anon_sym_const,
    STATE(33),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(270),
    1,
    sym_formal_parameter,
    STATE(297),
    1,
    sym_base_type_spec,
    STATE(500),
    1,
    sym_formal_parameters,
    STATE(507),
    1,
    sym_formal_parameter_type,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(486),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(738),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [2918] = 36,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(11),
    1,
    anon_sym_exception,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_interface,
    ACTIONS(17),
    1,
    anon_sym_bitset,
    ACTIONS(19),
    1,
    anon_sym_bitmask,
    ACTIONS(21),
    1,
    anon_sym_ATannotation,
    ACTIONS(23),
    1,
    anon_sym_AT,
    ACTIONS(25),
    1,
    anon_sym_module,
    ACTIONS(27),
    1,
    anon_sym_valuetype,
    ACTIONS(29),
    1,
    anon_sym_struct,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_enum,
    ACTIONS(35),
    1,
    anon_sym_const,
    ACTIONS(37),
    1,
    anon_sym_typedef,
    ACTIONS(39),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(41),
    1,
    anon_sym_typeid,
    ACTIONS(43),
    1,
    anon_sym_typeprefix,
    ACTIONS(45),
    1,
    anon_sym_import,
    ACTIONS(47),
    1,
    anon_sym_native,
    ACTIONS(510),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(518),
    1,
    ts_builtin_sym_end,
    STATE(31),
    1,
    aux_sym_specification_repeat2,
    STATE(34),
    1,
    sym_comment,
    STATE(107),
    1,
    sym_predefine,
    STATE(113),
    1,
    sym__definition,
    STATE(145),
    1,
    aux_sym_interface_def_repeat1,
    STATE(172),
    1,
    sym_annotation_appl,
    STATE(528),
    1,
    sym_enum_anno,
    STATE(531),
    1,
    sym_value_header,
    STATE(540),
    1,
    sym_interface_header,
    STATE(559),
    1,
    sym_interface_kind,
    STATE(533),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(543),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(560),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [3048] = 36,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(11),
    1,
    anon_sym_exception,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_interface,
    ACTIONS(17),
    1,
    anon_sym_bitset,
    ACTIONS(19),
    1,
    anon_sym_bitmask,
    ACTIONS(21),
    1,
    anon_sym_ATannotation,
    ACTIONS(23),
    1,
    anon_sym_AT,
    ACTIONS(25),
    1,
    anon_sym_module,
    ACTIONS(27),
    1,
    anon_sym_valuetype,
    ACTIONS(29),
    1,
    anon_sym_struct,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_enum,
    ACTIONS(35),
    1,
    anon_sym_const,
    ACTIONS(37),
    1,
    anon_sym_typedef,
    ACTIONS(39),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(41),
    1,
    anon_sym_typeid,
    ACTIONS(43),
    1,
    anon_sym_typeprefix,
    ACTIONS(45),
    1,
    anon_sym_import,
    ACTIONS(47),
    1,
    anon_sym_native,
    ACTIONS(510),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(742),
    1,
    ts_builtin_sym_end,
    STATE(31),
    1,
    aux_sym_specification_repeat2,
    STATE(35),
    1,
    sym_comment,
    STATE(107),
    1,
    sym_predefine,
    STATE(113),
    1,
    sym__definition,
    STATE(145),
    1,
    aux_sym_interface_def_repeat1,
    STATE(172),
    1,
    sym_annotation_appl,
    STATE(528),
    1,
    sym_enum_anno,
    STATE(531),
    1,
    sym_value_header,
    STATE(540),
    1,
    sym_interface_header,
    STATE(559),
    1,
    sym_interface_kind,
    STATE(533),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(543),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(560),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [3178] = 37,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(514),
    1,
    anon_sym_AT,
    STATE(36),
    1,
    sym_comment,
    STATE(64),
    1,
    aux_sym_interface_def_repeat1,
    STATE(76),
    1,
    sym_annotation_appl,
    STATE(178),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3310] = 36,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(11),
    1,
    anon_sym_exception,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_interface,
    ACTIONS(17),
    1,
    anon_sym_bitset,
    ACTIONS(19),
    1,
    anon_sym_bitmask,
    ACTIONS(21),
    1,
    anon_sym_ATannotation,
    ACTIONS(23),
    1,
    anon_sym_AT,
    ACTIONS(25),
    1,
    anon_sym_module,
    ACTIONS(27),
    1,
    anon_sym_valuetype,
    ACTIONS(29),
    1,
    anon_sym_struct,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_enum,
    ACTIONS(35),
    1,
    anon_sym_const,
    ACTIONS(37),
    1,
    anon_sym_typedef,
    ACTIONS(39),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(41),
    1,
    anon_sym_typeid,
    ACTIONS(43),
    1,
    anon_sym_typeprefix,
    ACTIONS(45),
    1,
    anon_sym_import,
    ACTIONS(47),
    1,
    anon_sym_native,
    ACTIONS(510),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(744),
    1,
    anon_sym_RBRACE,
    STATE(32),
    1,
    aux_sym_specification_repeat2,
    STATE(37),
    1,
    sym_comment,
    STATE(107),
    1,
    sym_predefine,
    STATE(113),
    1,
    sym__definition,
    STATE(145),
    1,
    aux_sym_interface_def_repeat1,
    STATE(172),
    1,
    sym_annotation_appl,
    STATE(528),
    1,
    sym_enum_anno,
    STATE(531),
    1,
    sym_value_header,
    STATE(540),
    1,
    sym_interface_header,
    STATE(559),
    1,
    sym_interface_kind,
    STATE(533),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(543),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(560),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [3440] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(736),
    1,
    anon_sym_sequence,
    ACTIONS(740),
    1,
    anon_sym_const,
    STATE(38),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    STATE(389),
    1,
    sym_formal_parameter,
    STATE(507),
    1,
    sym_formal_parameter_type,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(486),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(738),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [3563] = 36,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(746),
    1,
    anon_sym_GT,
    ACTIONS(748),
    1,
    anon_sym_COMMA,
    STATE(39),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    STATE(556),
    1,
    sym_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3692] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(40),
    1,
    sym_comment,
    ACTIONS(752),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(750),
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
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    anon_sym_native,
    sym_identifier,
    [3758] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(41),
    1,
    sym_comment,
    ACTIONS(756),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(754),
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
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    anon_sym_native,
    sym_identifier,
    [3824] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(42),
    1,
    sym_comment,
    ACTIONS(760),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(758),
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
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    anon_sym_native,
    sym_identifier,
    [3890] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(43),
    1,
    sym_comment,
    ACTIONS(764),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(762),
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
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    anon_sym_native,
    sym_identifier,
    [3956] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(44),
    1,
    sym_comment,
    ACTIONS(768),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(766),
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
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    anon_sym_native,
    sym_identifier,
    [4022] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(45),
    1,
    sym_comment,
    ACTIONS(772),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(770),
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
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    anon_sym_native,
    sym_identifier,
    [4088] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(46),
    1,
    sym_comment,
    ACTIONS(776),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(774),
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
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    anon_sym_native,
    sym_identifier,
    [4154] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    STATE(47),
    1,
    sym_comment,
    STATE(170),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [4277] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    STATE(48),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(257),
    1,
    sym_type_spec,
    STATE(297),
    1,
    sym_base_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [4400] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(49),
    1,
    sym_comment,
    STATE(297),
    1,
    sym_base_type_spec,
    STATE(340),
    1,
    sym_scoped_name,
    STATE(550),
    1,
    sym_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [4523] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    STATE(50),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    STATE(402),
    1,
    sym_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [4646] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    STATE(51),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    STATE(406),
    1,
    sym_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [4769] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    STATE(52),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    STATE(384),
    1,
    sym_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [4892] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    STATE(53),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    STATE(324),
    1,
    sym_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [5015] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    anon_sym_fixed,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_any,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(91),
    1,
    anon_sym_map,
    ACTIONS(133),
    1,
    sym_identifier,
    STATE(54),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(297),
    1,
    sym_base_type_spec,
    STATE(403),
    1,
    sym_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(328),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(61),
    3,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(294),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(296),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [5138] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(55),
    1,
    sym_comment,
    ACTIONS(780),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(778),
    42,
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
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    anon_sym_native,
    sym_identifier,
    [5201] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(56),
    1,
    sym_comment,
    ACTIONS(768),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(766),
    42,
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
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    anon_sym_native,
    sym_identifier,
    [5264] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(419),
    1,
    anon_sym_fixed,
    STATE(57),
    1,
    sym_comment,
    STATE(335),
    1,
    sym_scoped_name,
    STATE(515),
    1,
    sym_const_type,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(417),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(516),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [5369] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(79),
    1,
    anon_sym_longdouble,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(89),
    1,
    anon_sym_sequence,
    ACTIONS(133),
    1,
    sym_identifier,
    ACTIONS(419),
    1,
    anon_sym_fixed,
    STATE(58),
    1,
    sym_comment,
    STATE(335),
    1,
    sym_scoped_name,
    STATE(458),
    1,
    sym_const_type,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(77),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(85),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(417),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(516),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [5474] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(59),
    1,
    sym_comment,
    ACTIONS(784),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(782),
    33,
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
    sym_identifier,
    [5528] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(60),
    1,
    sym_comment,
    ACTIONS(788),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(786),
    33,
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
    sym_identifier,
    [5582] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(61),
    1,
    sym_comment,
    ACTIONS(792),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(790),
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
    [5629] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(62),
    1,
    sym_comment,
    ACTIONS(796),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(794),
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
    [5676] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(63),
    1,
    sym_comment,
    ACTIONS(800),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(798),
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
    [5723] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(806),
    1,
    anon_sym_AT,
    STATE(76),
    1,
    sym_annotation_appl,
    STATE(64),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    ACTIONS(804),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(802),
    25,
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
    sym_identifier,
    [5774] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(65),
    1,
    sym_comment,
    ACTIONS(811),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(809),
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
    [5821] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(66),
    1,
    sym_comment,
    ACTIONS(815),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(813),
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
    [5868] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(821),
    1,
    anon_sym_LPAREN,
    STATE(67),
    1,
    sym_comment,
    ACTIONS(819),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
    ACTIONS(817),
    25,
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
    sym_identifier,
    [5916] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(68),
    1,
    sym_comment,
    ACTIONS(825),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(823),
    25,
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
    sym_identifier,
    [5962] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(69),
    1,
    sym_comment,
    ACTIONS(829),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(827),
    25,
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
    sym_identifier,
    [6008] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(70),
    1,
    sym_comment,
    ACTIONS(833),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(831),
    25,
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
    sym_identifier,
    [6054] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(71),
    1,
    sym_comment,
    ACTIONS(837),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(835),
    25,
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
    sym_identifier,
    [6100] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(72),
    1,
    sym_comment,
    ACTIONS(841),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(839),
    25,
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
    sym_identifier,
    [6146] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(845),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(843),
    25,
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
    sym_identifier,
    [6192] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(849),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(847),
    25,
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
    sym_identifier,
    [6238] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(75),
    1,
    sym_comment,
    ACTIONS(853),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(851),
    25,
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
    sym_identifier,
    [6284] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(76),
    1,
    sym_comment,
    ACTIONS(857),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
    ACTIONS(855),
    25,
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
    sym_identifier,
    [6329] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(55),
    1,
    anon_sym_longlong,
    ACTIONS(57),
    1,
    anon_sym_int64,
    ACTIONS(59),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(65),
    1,
    sym_signed_tiny_int,
    ACTIONS(67),
    1,
    anon_sym_unsignedshort,
    ACTIONS(69),
    1,
    anon_sym_uint16,
    ACTIONS(73),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(75),
    1,
    anon_sym_uint64,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(411),
    1,
    sym_identifier,
    ACTIONS(859),
    1,
    sym_boolean_type,
    STATE(77),
    1,
    sym_comment,
    STATE(371),
    1,
    sym_scoped_name,
    STATE(465),
    1,
    sym_switch_type_spec,
    ACTIONS(51),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(53),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(71),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(81),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(522),
    2,
    sym_integer_type,
    sym_char_type,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [6412] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(863),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
    ACTIONS(861),
    25,
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
    sym_identifier,
    [6457] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(867),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(865),
    25,
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
    sym_identifier,
    [6501] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(827),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(829),
    24,
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
    anon_sym_interface,
    anon_sym_SEMI,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_supports,
    anon_sym_RBRACK,
    [6543] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(869),
    1,
    sym_identifier,
    STATE(81),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(279),
    1,
    sym_annotation_appl_param,
    STATE(471),
    1,
    sym_const_expr,
    STATE(585),
    1,
    sym_annotation_appl_params,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6629] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(869),
    1,
    sym_identifier,
    STATE(82),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(279),
    1,
    sym_annotation_appl_param,
    STATE(471),
    1,
    sym_const_expr,
    STATE(589),
    1,
    sym_annotation_appl_params,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6715] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(869),
    1,
    sym_identifier,
    STATE(83),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(279),
    1,
    sym_annotation_appl_param,
    STATE(471),
    1,
    sym_const_expr,
    STATE(592),
    1,
    sym_annotation_appl_params,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6801] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(869),
    1,
    sym_identifier,
    STATE(84),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(279),
    1,
    sym_annotation_appl_param,
    STATE(471),
    1,
    sym_const_expr,
    STATE(473),
    1,
    sym_annotation_appl_params,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6887] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(85),
    1,
    sym_comment,
    ACTIONS(831),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(833),
    24,
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
    anon_sym_interface,
    anon_sym_SEMI,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_supports,
    anon_sym_RBRACK,
    [6929] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(835),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(837),
    24,
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
    anon_sym_interface,
    anon_sym_SEMI,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_supports,
    anon_sym_RBRACK,
    [6971] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(87),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(249),
    1,
    sym_const_expr,
    STATE(363),
    1,
    sym_positive_int_const,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7054] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(88),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(249),
    1,
    sym_const_expr,
    STATE(503),
    1,
    sym_positive_int_const,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7137] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(89),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(249),
    1,
    sym_const_expr,
    STATE(499),
    1,
    sym_positive_int_const,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7220] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(90),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(249),
    1,
    sym_const_expr,
    STATE(580),
    1,
    sym_positive_int_const,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7303] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(91),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(249),
    1,
    sym_const_expr,
    STATE(564),
    1,
    sym_positive_int_const,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7386] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(92),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(249),
    1,
    sym_const_expr,
    STATE(482),
    1,
    sym_positive_int_const,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7469] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(93),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(249),
    1,
    sym_const_expr,
    STATE(552),
    1,
    sym_positive_int_const,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7552] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(94),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(447),
    1,
    sym_const_expr,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7632] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(95),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(527),
    1,
    sym_const_expr,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7712] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(96),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(508),
    1,
    sym_const_expr,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7792] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(53),
    1,
    anon_sym_long,
    ACTIONS(71),
    1,
    anon_sym_unsignedlong,
    ACTIONS(873),
    1,
    anon_sym_int32,
    ACTIONS(875),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(879),
    1,
    sym_signed_tiny_int,
    ACTIONS(881),
    1,
    anon_sym_uint32,
    STATE(97),
    1,
    sym_comment,
    STATE(490),
    1,
    sym_integer_type,
    STATE(491),
    1,
    sym_destination_type,
    ACTIONS(55),
    2,
    anon_sym_longlong,
    anon_sym_int64,
    ACTIONS(67),
    2,
    anon_sym_unsignedshort,
    anon_sym_uint16,
    ACTIONS(73),
    2,
    anon_sym_unsignedlonglong,
    anon_sym_uint64,
    ACTIONS(871),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(877),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(210),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(202),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(203),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [7860] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(98),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(593),
    1,
    sym_const_expr,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7940] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(99),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(460),
    1,
    sym_const_expr,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8020] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(100),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(377),
    1,
    sym_const_expr,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8100] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(101),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(146),
    1,
    sym_xor_expr,
    STATE(153),
    1,
    sym_or_expr,
    STATE(451),
    1,
    sym_const_expr,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8180] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(885),
    1,
    sym_preproc_directive,
    STATE(114),
    1,
    sym_preproc_call,
    STATE(102),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(888),
    3,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(883),
    18,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_native,
    [8222] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(103),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(147),
    1,
    sym_xor_expr,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8296] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(104),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(143),
    1,
    sym_and_expr,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8367] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(105),
    1,
    sym_comment,
    ACTIONS(892),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(890),
    21,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8404] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(106),
    1,
    sym_comment,
    ACTIONS(896),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(894),
    21,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8441] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(900),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(898),
    21,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8478] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(108),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(137),
    1,
    sym_add_expr,
    STATE(141),
    1,
    sym_shift_expr,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8546] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(904),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(902),
    20,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8582] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(908),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(906),
    18,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_native,
    [8618] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(111),
    1,
    sym_comment,
    ACTIONS(912),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(910),
    18,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_native,
    [8654] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(916),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(914),
    20,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8690] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(920),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(918),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8726] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(924),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(922),
    18,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_native,
    [8762] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(928),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(926),
    20,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8798] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(116),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(122),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    STATE(136),
    1,
    sym_add_expr,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8863] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(117),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(132),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8925] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_LPAREN,
    ACTIONS(399),
    1,
    anon_sym_TILDE,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    STATE(118),
    1,
    sym_comment,
    STATE(120),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(129),
    1,
    sym_unary_expr,
    STATE(135),
    1,
    sym_unary_operator,
    ACTIONS(395),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8984] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(932),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(934),
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
    [9017] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(936),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(938),
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
    [9050] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(121),
    1,
    sym_comment,
    ACTIONS(932),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(934),
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
    [9080] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(940),
    1,
    anon_sym_GT,
    ACTIONS(946),
    1,
    anon_sym_SLASH,
    STATE(122),
    1,
    sym_comment,
    ACTIONS(944),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(942),
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
    [9114] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(123),
    1,
    sym_comment,
    ACTIONS(948),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(950),
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
    [9144] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(952),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(954),
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
    [9174] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(125),
    1,
    sym_comment,
    ACTIONS(956),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(958),
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
    [9204] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(126),
    1,
    sym_comment,
    ACTIONS(960),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(962),
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
    [9234] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(127),
    1,
    sym_comment,
    ACTIONS(964),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(966),
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
    [9264] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(936),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(938),
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
    [9294] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(129),
    1,
    sym_comment,
    ACTIONS(968),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(970),
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
    [9324] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(130),
    1,
    sym_comment,
    ACTIONS(972),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(974),
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
    [9354] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(131),
    1,
    sym_comment,
    ACTIONS(976),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(978),
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
    [9384] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(946),
    1,
    anon_sym_SLASH,
    ACTIONS(980),
    1,
    anon_sym_GT,
    STATE(132),
    1,
    sym_comment,
    ACTIONS(944),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(982),
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
    [9418] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(133),
    1,
    sym_comment,
    ACTIONS(984),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(986),
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
    [9448] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(134),
    1,
    sym_comment,
    ACTIONS(988),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(990),
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
    [9478] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(401),
    1,
    anon_sym_L,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(405),
    1,
    anon_sym_SQUOTE,
    ACTIONS(409),
    1,
    sym_number_literal,
    ACTIONS(411),
    1,
    sym_identifier,
    ACTIONS(992),
    1,
    anon_sym_LPAREN,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(121),
    1,
    sym_literal,
    STATE(135),
    1,
    sym_comment,
    ACTIONS(407),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [9524] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(994),
    1,
    anon_sym_GT,
    STATE(136),
    1,
    sym_comment,
    ACTIONS(998),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(996),
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
    [9553] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1000),
    1,
    anon_sym_GT,
    STATE(137),
    1,
    sym_comment,
    ACTIONS(998),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(1002),
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
    [9582] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(827),
    1,
    anon_sym_SLASH,
    ACTIONS(1004),
    1,
    anon_sym_EQ,
    STATE(138),
    1,
    sym_comment,
    ACTIONS(829),
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
    [9611] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(936),
    1,
    anon_sym_SLASH,
    ACTIONS(1006),
    1,
    anon_sym_GT,
    ACTIONS(1008),
    1,
    anon_sym_COMMA,
    STATE(139),
    1,
    sym_comment,
    ACTIONS(938),
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
    [9644] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1010),
    1,
    anon_sym_GT,
    STATE(140),
    1,
    sym_comment,
    ACTIONS(1014),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(1012),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9671] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1016),
    1,
    anon_sym_GT,
    STATE(141),
    1,
    sym_comment,
    ACTIONS(1014),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(1018),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9698] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1022),
    1,
    anon_sym_DOLLAR,
    STATE(142),
    1,
    sym_comment,
    ACTIONS(1020),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9721] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1022),
    1,
    anon_sym_DOLLAR,
    STATE(143),
    1,
    sym_comment,
    ACTIONS(1024),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9744] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(144),
    1,
    sym_comment,
    ACTIONS(1026),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(1028),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [9767] = 12,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_interface,
    ACTIONS(107),
    1,
    anon_sym_AT,
    ACTIONS(1030),
    1,
    anon_sym_bitmask,
    ACTIONS(1032),
    1,
    anon_sym_struct,
    STATE(145),
    1,
    sym_comment,
    STATE(154),
    1,
    aux_sym_interface_def_repeat1,
    STATE(172),
    1,
    sym_annotation_appl,
    STATE(481),
    1,
    sym_interface_kind,
    STATE(485),
    1,
    sym_interface_header,
    [9804] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1036),
    1,
    anon_sym_CARET,
    STATE(146),
    1,
    sym_comment,
    ACTIONS(1034),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9826] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1036),
    1,
    anon_sym_CARET,
    STATE(147),
    1,
    sym_comment,
    ACTIONS(1038),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9848] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1040),
    1,
    anon_sym_COMMA,
    ACTIONS(1042),
    1,
    anon_sym_SEMI,
    ACTIONS(1044),
    1,
    anon_sym_getraises,
    ACTIONS(1046),
    1,
    anon_sym_setraises,
    STATE(148),
    1,
    sym_comment,
    STATE(307),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(308),
    1,
    sym_get_excep_expr,
    STATE(434),
    1,
    sym_set_excep_expr,
    STATE(467),
    1,
    sym_attr_raises_expr,
    [9882] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1048),
    1,
    anon_sym_RPAREN,
    ACTIONS(1050),
    1,
    anon_sym_in,
    STATE(51),
    1,
    sym_param_attribute,
    STATE(149),
    1,
    sym_comment,
    STATE(304),
    1,
    sym_param_dcl,
    STATE(439),
    1,
    sym_parameter_dcls,
    ACTIONS(1052),
    2,
    anon_sym_out,
    anon_sym_inout,
    [9911] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1054),
    1,
    anon_sym_LPAREN,
    STATE(150),
    1,
    sym_comment,
    ACTIONS(819),
    5,
    anon_sym_local,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [9934] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(411),
    1,
    sym_identifier,
    ACTIONS(1056),
    1,
    anon_sym_L,
    STATE(151),
    1,
    sym_comment,
    STATE(426),
    1,
    sym_scoped_name,
    STATE(440),
    1,
    sym_imported_scope,
    STATE(441),
    1,
    sym_string_literal,
    [9965] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(152),
    1,
    sym_comment,
    ACTIONS(1058),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [9984] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1062),
    1,
    anon_sym_PIPE,
    STATE(153),
    1,
    sym_comment,
    ACTIONS(1060),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [10005] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1064),
    1,
    anon_sym_AT,
    STATE(172),
    1,
    sym_annotation_appl,
    STATE(154),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    ACTIONS(804),
    4,
    anon_sym_local,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_struct,
    [10028] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1069),
    1,
    anon_sym_LBRACK,
    STATE(155),
    1,
    sym_comment,
    STATE(160),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(227),
    1,
    sym_fixed_array_size,
    ACTIONS(1067),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [10052] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(156),
    1,
    sym_comment,
    ACTIONS(837),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [10070] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1071),
    1,
    anon_sym_RBRACE,
    ACTIONS(1073),
    1,
    anon_sym_default,
    ACTIONS(1075),
    1,
    anon_sym_case,
    STATE(11),
    1,
    sym_case_label,
    STATE(157),
    1,
    sym_comment,
    STATE(163),
    1,
    aux_sym_union_def_repeat1,
    STATE(272),
    1,
    sym_case,
    [10098] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1077),
    1,
    anon_sym_RBRACE,
    ACTIONS(1079),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1081),
    1,
    sym_identifier,
    STATE(158),
    1,
    sym_comment,
    STATE(226),
    1,
    aux_sym_enumerator_repeat1,
    STATE(246),
    1,
    sym_enumerator,
    STATE(349),
    1,
    sym_enum_modifier,
    [10126] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(159),
    1,
    sym_comment,
    ACTIONS(833),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [10144] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1085),
    1,
    anon_sym_LBRACK,
    STATE(227),
    1,
    sym_fixed_array_size,
    STATE(160),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(1083),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [10166] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1079),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1081),
    1,
    sym_identifier,
    ACTIONS(1088),
    1,
    anon_sym_RBRACE,
    STATE(161),
    1,
    sym_comment,
    STATE(226),
    1,
    aux_sym_enumerator_repeat1,
    STATE(331),
    1,
    sym_enumerator,
    STATE(349),
    1,
    sym_enum_modifier,
    [10194] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1090),
    1,
    anon_sym_RBRACE,
    ACTIONS(1092),
    1,
    anon_sym_AT,
    ACTIONS(1094),
    1,
    sym_identifier,
    STATE(162),
    1,
    sym_comment,
    STATE(184),
    1,
    aux_sym_interface_def_repeat1,
    STATE(289),
    1,
    sym_bit_value,
    STATE(347),
    1,
    sym_annotation_appl,
    [10222] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1096),
    1,
    anon_sym_RBRACE,
    ACTIONS(1098),
    1,
    anon_sym_default,
    ACTIONS(1101),
    1,
    anon_sym_case,
    STATE(11),
    1,
    sym_case_label,
    STATE(272),
    1,
    sym_case,
    STATE(163),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [10248] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(164),
    1,
    sym_comment,
    ACTIONS(829),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [10266] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1073),
    1,
    anon_sym_default,
    ACTIONS(1075),
    1,
    anon_sym_case,
    ACTIONS(1104),
    1,
    anon_sym_RBRACE,
    STATE(11),
    1,
    sym_case_label,
    STATE(157),
    1,
    aux_sym_union_def_repeat1,
    STATE(165),
    1,
    sym_comment,
    STATE(272),
    1,
    sym_case,
    [10294] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1069),
    1,
    anon_sym_LBRACK,
    STATE(155),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(166),
    1,
    sym_comment,
    STATE(227),
    1,
    sym_fixed_array_size,
    ACTIONS(1058),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [10318] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1092),
    1,
    anon_sym_AT,
    ACTIONS(1094),
    1,
    sym_identifier,
    ACTIONS(1106),
    1,
    anon_sym_RBRACE,
    STATE(167),
    1,
    sym_comment,
    STATE(182),
    1,
    aux_sym_interface_def_repeat1,
    STATE(302),
    1,
    sym_bit_value,
    STATE(347),
    1,
    sym_annotation_appl,
    [10346] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1108),
    1,
    anon_sym_RBRACE,
    ACTIONS(1110),
    1,
    anon_sym_bitfield,
    STATE(168),
    1,
    sym_comment,
    STATE(177),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(306),
    1,
    sym_bitfield_spec,
    STATE(418),
    1,
    sym_bitfield,
    [10371] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1112),
    1,
    sym_identifier,
    STATE(169),
    1,
    sym_comment,
    STATE(214),
    1,
    sym_declarator,
    STATE(275),
    1,
    sym_declarators,
    STATE(273),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10394] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1112),
    1,
    sym_identifier,
    STATE(170),
    1,
    sym_comment,
    STATE(214),
    1,
    sym_declarator,
    STATE(558),
    1,
    sym_declarators,
    STATE(273),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10417] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1079),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1081),
    1,
    sym_identifier,
    STATE(171),
    1,
    sym_comment,
    STATE(226),
    1,
    aux_sym_enumerator_repeat1,
    STATE(349),
    1,
    sym_enum_modifier,
    STATE(398),
    1,
    sym_enumerator,
    [10442] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(172),
    1,
    sym_comment,
    ACTIONS(857),
    5,
    anon_sym_local,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [10459] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1092),
    1,
    anon_sym_AT,
    ACTIONS(1094),
    1,
    sym_identifier,
    STATE(173),
    1,
    sym_comment,
    STATE(234),
    1,
    aux_sym_interface_def_repeat1,
    STATE(347),
    1,
    sym_annotation_appl,
    STATE(427),
    1,
    sym_bit_value,
    [10484] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(174),
    1,
    sym_comment,
    ACTIONS(863),
    5,
    anon_sym_local,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [10501] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1110),
    1,
    anon_sym_bitfield,
    ACTIONS(1114),
    1,
    anon_sym_RBRACE,
    STATE(175),
    1,
    sym_comment,
    STATE(179),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(306),
    1,
    sym_bitfield_spec,
    STATE(418),
    1,
    sym_bitfield,
    [10526] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1040),
    1,
    anon_sym_COMMA,
    ACTIONS(1116),
    1,
    anon_sym_SEMI,
    ACTIONS(1118),
    1,
    anon_sym_raises,
    STATE(176),
    1,
    sym_comment,
    STATE(290),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(464),
    1,
    sym_raises_expr,
    [10551] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1110),
    1,
    anon_sym_bitfield,
    ACTIONS(1120),
    1,
    anon_sym_RBRACE,
    STATE(177),
    1,
    sym_comment,
    STATE(179),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(306),
    1,
    sym_bitfield_spec,
    STATE(418),
    1,
    sym_bitfield,
    [10576] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1112),
    1,
    sym_identifier,
    STATE(178),
    1,
    sym_comment,
    STATE(214),
    1,
    sym_declarator,
    STATE(325),
    1,
    sym_declarators,
    STATE(273),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10599] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1122),
    1,
    anon_sym_RBRACE,
    ACTIONS(1124),
    1,
    anon_sym_bitfield,
    STATE(306),
    1,
    sym_bitfield_spec,
    STATE(418),
    1,
    sym_bitfield,
    STATE(179),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [10622] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1112),
    1,
    sym_identifier,
    STATE(180),
    1,
    sym_comment,
    STATE(320),
    1,
    sym_any_declarator,
    STATE(518),
    1,
    sym_any_declarators,
    STATE(373),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10645] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1110),
    1,
    anon_sym_bitfield,
    ACTIONS(1127),
    1,
    anon_sym_RBRACE,
    STATE(175),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(181),
    1,
    sym_comment,
    STATE(306),
    1,
    sym_bitfield_spec,
    STATE(418),
    1,
    sym_bitfield,
    [10670] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1092),
    1,
    anon_sym_AT,
    ACTIONS(1094),
    1,
    sym_identifier,
    STATE(182),
    1,
    sym_comment,
    STATE(234),
    1,
    aux_sym_interface_def_repeat1,
    STATE(289),
    1,
    sym_bit_value,
    STATE(347),
    1,
    sym_annotation_appl,
    [10695] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1092),
    1,
    anon_sym_AT,
    ACTIONS(1094),
    1,
    sym_identifier,
    STATE(173),
    1,
    aux_sym_interface_def_repeat1,
    STATE(183),
    1,
    sym_comment,
    STATE(347),
    1,
    sym_annotation_appl,
    STATE(367),
    1,
    sym_bit_value,
    [10720] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1092),
    1,
    anon_sym_AT,
    ACTIONS(1094),
    1,
    sym_identifier,
    STATE(184),
    1,
    sym_comment,
    STATE(234),
    1,
    aux_sym_interface_def_repeat1,
    STATE(299),
    1,
    sym_bit_value,
    STATE(347),
    1,
    sym_annotation_appl,
    [10745] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1050),
    1,
    anon_sym_in,
    STATE(51),
    1,
    sym_param_attribute,
    STATE(185),
    1,
    sym_comment,
    STATE(378),
    1,
    sym_param_dcl,
    ACTIONS(1052),
    2,
    anon_sym_out,
    anon_sym_inout,
    [10768] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(107),
    1,
    anon_sym_AT,
    ACTIONS(1030),
    1,
    anon_sym_bitmask,
    ACTIONS(1032),
    1,
    anon_sym_struct,
    STATE(154),
    1,
    aux_sym_interface_def_repeat1,
    STATE(172),
    1,
    sym_annotation_appl,
    STATE(186),
    1,
    sym_comment,
    [10793] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1129),
    1,
    anon_sym_LBRACE,
    ACTIONS(1131),
    1,
    anon_sym_COLON,
    ACTIONS(1133),
    1,
    anon_sym_SEMI,
    ACTIONS(1135),
    1,
    anon_sym_supports,
    STATE(187),
    1,
    sym_comment,
    STATE(513),
    1,
    sym_value_inheritance_spec,
    [10818] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1137),
    1,
    sym_identifier,
    STATE(188),
    1,
    sym_comment,
    STATE(239),
    1,
    sym_scoped_name,
    STATE(590),
    1,
    sym_interface_name,
    [10840] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1137),
    1,
    sym_identifier,
    STATE(189),
    1,
    sym_comment,
    STATE(239),
    1,
    sym_scoped_name,
    STATE(487),
    1,
    sym_interface_name,
    [10862] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1139),
    1,
    anon_sym_COMMA,
    ACTIONS(1141),
    1,
    anon_sym_RPAREN,
    STATE(190),
    1,
    sym_comment,
    STATE(261),
    1,
    aux_sym_raises_expr_repeat1,
    [10884] = 7,
    ACTIONS(1143),
    1,
    anon_sym_AT,
    ACTIONS(1145),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1147),
    1,
    aux_sym_comment_token1,
    ACTIONS(1149),
    1,
    anon_sym_SLASH_STAR,
    STATE(191),
    1,
    sym_comment,
    STATE(219),
    1,
    aux_sym_interface_def_repeat1,
    STATE(352),
    1,
    sym_annotation_appl,
    [10906] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1151),
    1,
    anon_sym_LBRACE,
    ACTIONS(1153),
    1,
    anon_sym_COLON,
    ACTIONS(1155),
    1,
    anon_sym_SEMI,
    STATE(192),
    1,
    sym_comment,
    STATE(537),
    1,
    sym_interface_inheritance_spec,
    [10928] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1157),
    1,
    anon_sym_RPAREN,
    ACTIONS(1159),
    1,
    anon_sym_in,
    STATE(193),
    1,
    sym_comment,
    STATE(285),
    1,
    sym_in_param_dcl,
    STATE(469),
    1,
    sym_in_parameter_dcls,
    [10950] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1112),
    1,
    sym_identifier,
    STATE(194),
    1,
    sym_comment,
    STATE(544),
    1,
    sym_declarator,
    STATE(273),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10970] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1118),
    1,
    anon_sym_raises,
    STATE(195),
    1,
    sym_comment,
    STATE(379),
    1,
    sym_raises_expr,
    ACTIONS(1161),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [10990] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(196),
    1,
    sym_comment,
    ACTIONS(1163),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11006] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1112),
    1,
    sym_identifier,
    STATE(197),
    1,
    sym_comment,
    STATE(298),
    1,
    sym_declarator,
    STATE(273),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [11026] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1165),
    1,
    anon_sym_COMMA,
    STATE(198),
    1,
    sym_comment,
    STATE(217),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(1167),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [11046] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1137),
    1,
    sym_identifier,
    STATE(199),
    1,
    sym_comment,
    STATE(239),
    1,
    sym_scoped_name,
    STATE(256),
    1,
    sym_interface_name,
    [11068] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(200),
    1,
    sym_comment,
    ACTIONS(1169),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11084] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(201),
    1,
    sym_comment,
    ACTIONS(1171),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11100] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(202),
    1,
    sym_comment,
    ACTIONS(1173),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11116] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(203),
    1,
    sym_comment,
    ACTIONS(1175),
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
    STATE(204),
    1,
    sym_comment,
    ACTIONS(1177),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [11148] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(205),
    1,
    sym_comment,
    ACTIONS(1179),
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
    STATE(206),
    1,
    sym_comment,
    ACTIONS(1181),
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
    STATE(207),
    1,
    sym_comment,
    ACTIONS(1183),
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
    STATE(208),
    1,
    sym_comment,
    ACTIONS(1185),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11212] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1187),
    1,
    anon_sym_LT,
    STATE(209),
    1,
    sym_comment,
    ACTIONS(1189),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11230] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(210),
    1,
    sym_comment,
    ACTIONS(1191),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11246] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1193),
    1,
    anon_sym_LBRACE,
    ACTIONS(1195),
    1,
    anon_sym_COLON,
    STATE(211),
    1,
    sym_comment,
    ACTIONS(1197),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [11266] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1199),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1202),
    1,
    sym_identifier,
    STATE(349),
    1,
    sym_enum_modifier,
    STATE(212),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [11286] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1139),
    1,
    anon_sym_COMMA,
    ACTIONS(1204),
    1,
    anon_sym_RPAREN,
    STATE(213),
    1,
    sym_comment,
    STATE(255),
    1,
    aux_sym_raises_expr_repeat1,
    [11308] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1165),
    1,
    anon_sym_COMMA,
    STATE(198),
    1,
    aux_sym_declarators_repeat1,
    STATE(214),
    1,
    sym_comment,
    ACTIONS(1206),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [11328] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1208),
    1,
    anon_sym_COLON_COLON,
    STATE(215),
    1,
    sym_comment,
    ACTIONS(1008),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11346] = 6,
    ACTIONS(1145),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1149),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1210),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1212),
    1,
    anon_sym_LPAREN,
    STATE(216),
    1,
    sym_comment,
    ACTIONS(817),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [11366] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1214),
    1,
    anon_sym_COMMA,
    ACTIONS(1217),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(217),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [11384] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1219),
    1,
    anon_sym_L,
    STATE(218),
    1,
    sym_comment,
    STATE(523),
    1,
    sym_string_literal,
    [11406] = 6,
    ACTIONS(802),
    1,
    aux_sym_comment_token1,
    ACTIONS(1145),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1149),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1221),
    1,
    anon_sym_AT,
    STATE(352),
    1,
    sym_annotation_appl,
    STATE(219),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    [11426] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1219),
    1,
    anon_sym_L,
    STATE(220),
    1,
    sym_comment,
    STATE(524),
    1,
    sym_string_literal,
    [11448] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1137),
    1,
    sym_identifier,
    STATE(221),
    1,
    sym_comment,
    STATE(239),
    1,
    sym_scoped_name,
    STATE(405),
    1,
    sym_interface_name,
    [11470] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1118),
    1,
    anon_sym_raises,
    STATE(222),
    1,
    sym_comment,
    STATE(408),
    1,
    sym_raises_expr,
    ACTIONS(1224),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [11490] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1219),
    1,
    anon_sym_L,
    ACTIONS(1226),
    1,
    anon_sym_RPAREN,
    STATE(223),
    1,
    sym_comment,
    STATE(305),
    1,
    sym_string_literal,
    [11512] = 7,
    ACTIONS(1143),
    1,
    anon_sym_AT,
    ACTIONS(1145),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1149),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1228),
    1,
    aux_sym_comment_token2,
    STATE(191),
    1,
    aux_sym_interface_def_repeat1,
    STATE(224),
    1,
    sym_comment,
    STATE(352),
    1,
    sym_annotation_appl,
    [11534] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1137),
    1,
    sym_identifier,
    STATE(225),
    1,
    sym_comment,
    STATE(237),
    1,
    sym_scoped_name,
    STATE(416),
    1,
    sym_value_name,
    [11556] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1079),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1230),
    1,
    sym_identifier,
    STATE(212),
    1,
    aux_sym_enumerator_repeat1,
    STATE(226),
    1,
    sym_comment,
    STATE(349),
    1,
    sym_enum_modifier,
    [11578] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(227),
    1,
    sym_comment,
    ACTIONS(1232),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [11594] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1234),
    1,
    anon_sym_RPAREN,
    ACTIONS(1236),
    1,
    anon_sym_in,
    STATE(228),
    1,
    sym_comment,
    STATE(301),
    1,
    sym_init_param_dcl,
    STATE(442),
    1,
    sym_init_param_dcls,
    [11616] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1112),
    1,
    sym_identifier,
    STATE(229),
    1,
    sym_comment,
    STATE(346),
    1,
    sym_any_declarator,
    STATE(373),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [11636] = 4,
    ACTIONS(1145),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1149),
    1,
    anon_sym_SLASH_STAR,
    STATE(230),
    1,
    sym_comment,
    ACTIONS(827),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [11652] = 4,
    ACTIONS(1145),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1149),
    1,
    anon_sym_SLASH_STAR,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(831),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [11668] = 4,
    ACTIONS(1145),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1149),
    1,
    anon_sym_SLASH_STAR,
    STATE(232),
    1,
    sym_comment,
    ACTIONS(835),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [11684] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1208),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1238),
    1,
    anon_sym_LPAREN,
    STATE(233),
    1,
    sym_comment,
    ACTIONS(819),
    2,
    anon_sym_AT,
    sym_identifier,
    [11704] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(804),
    1,
    sym_identifier,
    ACTIONS(1240),
    1,
    anon_sym_AT,
    STATE(347),
    1,
    sym_annotation_appl,
    STATE(234),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    [11724] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1137),
    1,
    sym_identifier,
    STATE(235),
    1,
    sym_comment,
    STATE(390),
    1,
    sym_scoped_name,
    [11743] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1243),
    1,
    anon_sym_COMMA,
    ACTIONS(1245),
    1,
    anon_sym_LBRACE,
    STATE(236),
    1,
    sym_comment,
    STATE(310),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [11762] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(1247),
    2,
    anon_sym_LBRACE,
    anon_sym_supports,
    [11779] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(83),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1249),
    1,
    sym_identifier,
    STATE(233),
    1,
    sym_scoped_name,
    STATE(238),
    1,
    sym_comment,
    [11798] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    STATE(239),
    1,
    sym_comment,
    ACTIONS(1251),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [11815] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1253),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1255),
    1,
    sym_identifier,
    STATE(67),
    1,
    sym_scoped_name,
    STATE(240),
    1,
    sym_comment,
    [11834] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1257),
    1,
    anon_sym_SEMI,
    ACTIONS(1259),
    1,
    anon_sym_context,
    STATE(241),
    1,
    sym_comment,
    STATE(539),
    1,
    sym_context_expr,
    [11853] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1261),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1263),
    1,
    sym_identifier,
    STATE(216),
    1,
    sym_scoped_name,
    STATE(242),
    1,
    sym_comment,
    [11872] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1137),
    1,
    sym_identifier,
    STATE(150),
    1,
    sym_scoped_name,
    STATE(243),
    1,
    sym_comment,
    [11891] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1265),
    1,
    sym_identifier,
    STATE(244),
    1,
    sym_comment,
    STATE(391),
    1,
    sym_scoped_name,
    [11910] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1137),
    1,
    sym_identifier,
    STATE(218),
    1,
    sym_scoped_name,
    STATE(245),
    1,
    sym_comment,
    [11929] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1088),
    1,
    anon_sym_RBRACE,
    ACTIONS(1267),
    1,
    anon_sym_COMMA,
    STATE(246),
    1,
    sym_comment,
    STATE(327),
    1,
    aux_sym_enum_dcl_repeat1,
    [11948] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1137),
    1,
    sym_identifier,
    STATE(220),
    1,
    sym_scoped_name,
    STATE(247),
    1,
    sym_comment,
    [11967] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1269),
    1,
    anon_sym_GT,
    ACTIONS(1271),
    1,
    anon_sym_COMMA,
    STATE(248),
    2,
    sym_comment,
    aux_sym_formal_parameter_names_repeat1,
    [11984] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(249),
    1,
    sym_comment,
    ACTIONS(1274),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [11999] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(250),
    1,
    sym_comment,
    ACTIONS(1276),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12014] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1278),
    1,
    anon_sym_GT,
    ACTIONS(1280),
    1,
    anon_sym_COMMA,
    STATE(248),
    1,
    aux_sym_formal_parameter_names_repeat1,
    STATE(251),
    1,
    sym_comment,
    [12033] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1282),
    1,
    anon_sym_COMMA,
    ACTIONS(1285),
    1,
    anon_sym_RPAREN,
    STATE(252),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [12050] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    STATE(253),
    1,
    sym_comment,
    ACTIONS(1285),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [12067] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1287),
    1,
    anon_sym_COMMA,
    ACTIONS(1289),
    1,
    anon_sym_SEMI,
    STATE(254),
    1,
    sym_comment,
    STATE(329),
    1,
    aux_sym_any_declarators_repeat1,
    [12086] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1139),
    1,
    anon_sym_COMMA,
    ACTIONS(1291),
    1,
    anon_sym_RPAREN,
    STATE(252),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(255),
    1,
    sym_comment,
    [12105] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1243),
    1,
    anon_sym_COMMA,
    ACTIONS(1293),
    1,
    anon_sym_LBRACE,
    STATE(236),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(256),
    1,
    sym_comment,
    [12124] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1295),
    1,
    sym_identifier,
    STATE(148),
    1,
    sym_simple_declarator,
    STATE(257),
    1,
    sym_comment,
    STATE(572),
    1,
    sym_attr_declarator,
    [12143] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(258),
    1,
    sym_comment,
    ACTIONS(1297),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [12158] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1280),
    1,
    anon_sym_COMMA,
    ACTIONS(1299),
    1,
    anon_sym_GT,
    STATE(251),
    1,
    aux_sym_formal_parameter_names_repeat1,
    STATE(259),
    1,
    sym_comment,
    [12177] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1301),
    1,
    anon_sym_COMMA,
    ACTIONS(1304),
    1,
    anon_sym_RPAREN,
    STATE(260),
    2,
    sym_comment,
    aux_sym_in_parameter_dcls_repeat1,
    [12194] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1139),
    1,
    anon_sym_COMMA,
    ACTIONS(1306),
    1,
    anon_sym_RPAREN,
    STATE(252),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(261),
    1,
    sym_comment,
    [12213] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1137),
    1,
    sym_identifier,
    STATE(253),
    1,
    sym_scoped_name,
    STATE(262),
    1,
    sym_comment,
    [12232] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(263),
    1,
    sym_comment,
    ACTIONS(1308),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12247] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1310),
    1,
    anon_sym_COMMA,
    ACTIONS(1313),
    1,
    anon_sym_RPAREN,
    STATE(264),
    2,
    sym_comment,
    aux_sym_init_param_dcls_repeat1,
    [12264] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1315),
    1,
    anon_sym_COMMA,
    ACTIONS(1318),
    1,
    anon_sym_RPAREN,
    STATE(265),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [12281] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1320),
    1,
    anon_sym_COMMA,
    ACTIONS(1323),
    1,
    anon_sym_RPAREN,
    STATE(266),
    2,
    sym_comment,
    aux_sym_context_expr_repeat1,
    [12298] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1325),
    1,
    anon_sym_COMMA,
    ACTIONS(1327),
    1,
    anon_sym_RPAREN,
    STATE(260),
    1,
    aux_sym_in_parameter_dcls_repeat1,
    STATE(267),
    1,
    sym_comment,
    [12317] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1329),
    1,
    anon_sym_GT,
    ACTIONS(1331),
    1,
    anon_sym_COMMA,
    STATE(268),
    1,
    sym_comment,
    STATE(318),
    1,
    aux_sym_actual_parameters_repeat1,
    [12336] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1137),
    1,
    sym_identifier,
    STATE(213),
    1,
    sym_scoped_name,
    STATE(269),
    1,
    sym_comment,
    [12355] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1333),
    1,
    anon_sym_GT,
    ACTIONS(1335),
    1,
    anon_sym_COMMA,
    STATE(270),
    1,
    sym_comment,
    STATE(313),
    1,
    aux_sym_formal_parameters_repeat1,
    [12374] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1137),
    1,
    sym_identifier,
    STATE(271),
    1,
    sym_comment,
    STATE(356),
    1,
    sym_scoped_name,
    [12393] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(272),
    1,
    sym_comment,
    ACTIONS(1337),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [12408] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(273),
    1,
    sym_comment,
    ACTIONS(1339),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [12423] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(829),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1341),
    1,
    anon_sym_LT,
    ACTIONS(1343),
    1,
    anon_sym_LBRACE,
    STATE(274),
    1,
    sym_comment,
    [12442] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1345),
    1,
    anon_sym_SEMI,
    ACTIONS(1347),
    1,
    anon_sym_default,
    STATE(275),
    1,
    sym_comment,
    STATE(530),
    1,
    sym_default,
    [12461] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1349),
    1,
    anon_sym_COMMA,
    ACTIONS(1351),
    1,
    anon_sym_RBRACE,
    STATE(276),
    1,
    sym_comment,
    STATE(323),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [12480] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1353),
    1,
    anon_sym_COMMA,
    ACTIONS(1355),
    1,
    anon_sym_RPAREN,
    STATE(264),
    1,
    aux_sym_init_param_dcls_repeat1,
    STATE(277),
    1,
    sym_comment,
    [12499] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1118),
    1,
    anon_sym_raises,
    ACTIONS(1357),
    1,
    anon_sym_SEMI,
    STATE(278),
    1,
    sym_comment,
    STATE(519),
    1,
    sym_raises_expr,
    [12518] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1359),
    1,
    anon_sym_COMMA,
    ACTIONS(1361),
    1,
    anon_sym_RPAREN,
    STATE(279),
    1,
    sym_comment,
    STATE(309),
    1,
    aux_sym_annotation_appl_params_repeat1,
    [12537] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1363),
    1,
    anon_sym_SEMI,
    ACTIONS(1365),
    1,
    anon_sym_switch,
    ACTIONS(1367),
    1,
    sym_identifier,
    STATE(280),
    1,
    sym_comment,
    [12556] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1369),
    1,
    anon_sym_COMMA,
    ACTIONS(1371),
    1,
    anon_sym_RPAREN,
    STATE(265),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(281),
    1,
    sym_comment,
    [12575] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1373),
    1,
    anon_sym_SEMI,
    ACTIONS(1375),
    1,
    sym_identifier,
    STATE(282),
    1,
    sym_comment,
    STATE(333),
    1,
    aux_sym_bitfield_repeat1,
    [12594] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1377),
    1,
    anon_sym_COMMA,
    ACTIONS(1379),
    1,
    anon_sym_RPAREN,
    STATE(266),
    1,
    aux_sym_context_expr_repeat1,
    STATE(283),
    1,
    sym_comment,
    [12613] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(403),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1219),
    1,
    anon_sym_L,
    STATE(284),
    1,
    sym_comment,
    STATE(382),
    1,
    sym_string_literal,
    [12632] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1325),
    1,
    anon_sym_COMMA,
    ACTIONS(1381),
    1,
    anon_sym_RPAREN,
    STATE(267),
    1,
    aux_sym_in_parameter_dcls_repeat1,
    STATE(285),
    1,
    sym_comment,
    [12651] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1383),
    1,
    anon_sym_COMMA,
    ACTIONS(1386),
    1,
    anon_sym_SEMI,
    STATE(286),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [12668] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1137),
    1,
    sym_identifier,
    STATE(190),
    1,
    sym_scoped_name,
    STATE(287),
    1,
    sym_comment,
    [12687] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1349),
    1,
    anon_sym_COMMA,
    ACTIONS(1388),
    1,
    anon_sym_RBRACE,
    STATE(288),
    1,
    sym_comment,
    STATE(323),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [12706] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1349),
    1,
    anon_sym_COMMA,
    ACTIONS(1388),
    1,
    anon_sym_RBRACE,
    STATE(289),
    1,
    sym_comment,
    STATE(322),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [12725] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1040),
    1,
    anon_sym_COMMA,
    ACTIONS(1390),
    1,
    anon_sym_SEMI,
    STATE(286),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(290),
    1,
    sym_comment,
    [12744] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(291),
    1,
    sym_comment,
    ACTIONS(1392),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12759] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(292),
    1,
    sym_comment,
    ACTIONS(1394),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12774] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(293),
    1,
    sym_comment,
    ACTIONS(1396),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12789] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(294),
    1,
    sym_comment,
    ACTIONS(1398),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12804] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(295),
    1,
    sym_comment,
    ACTIONS(1400),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12819] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(296),
    1,
    sym_comment,
    ACTIONS(1402),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12834] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(297),
    1,
    sym_comment,
    ACTIONS(1008),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12849] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(298),
    1,
    sym_comment,
    ACTIONS(1217),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [12864] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1349),
    1,
    anon_sym_COMMA,
    ACTIONS(1404),
    1,
    anon_sym_RBRACE,
    STATE(276),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(299),
    1,
    sym_comment,
    [12883] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1267),
    1,
    anon_sym_COMMA,
    ACTIONS(1406),
    1,
    anon_sym_RBRACE,
    STATE(300),
    1,
    sym_comment,
    STATE(312),
    1,
    aux_sym_enum_dcl_repeat1,
    [12902] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1353),
    1,
    anon_sym_COMMA,
    ACTIONS(1408),
    1,
    anon_sym_RPAREN,
    STATE(277),
    1,
    aux_sym_init_param_dcls_repeat1,
    STATE(301),
    1,
    sym_comment,
    [12921] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1090),
    1,
    anon_sym_RBRACE,
    ACTIONS(1349),
    1,
    anon_sym_COMMA,
    STATE(288),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(302),
    1,
    sym_comment,
    [12940] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1118),
    1,
    anon_sym_raises,
    ACTIONS(1410),
    1,
    anon_sym_SEMI,
    STATE(303),
    1,
    sym_comment,
    STATE(480),
    1,
    sym_raises_expr,
    [12959] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1369),
    1,
    anon_sym_COMMA,
    ACTIONS(1412),
    1,
    anon_sym_RPAREN,
    STATE(281),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(304),
    1,
    sym_comment,
    [12978] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1377),
    1,
    anon_sym_COMMA,
    ACTIONS(1414),
    1,
    anon_sym_RPAREN,
    STATE(283),
    1,
    aux_sym_context_expr_repeat1,
    STATE(305),
    1,
    sym_comment,
    [12997] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1375),
    1,
    sym_identifier,
    ACTIONS(1416),
    1,
    anon_sym_SEMI,
    STATE(282),
    1,
    aux_sym_bitfield_repeat1,
    STATE(306),
    1,
    sym_comment,
    [13016] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1040),
    1,
    anon_sym_COMMA,
    ACTIONS(1418),
    1,
    anon_sym_SEMI,
    STATE(286),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(307),
    1,
    sym_comment,
    [13035] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1046),
    1,
    anon_sym_setraises,
    ACTIONS(1420),
    1,
    anon_sym_SEMI,
    STATE(308),
    1,
    sym_comment,
    STATE(466),
    1,
    sym_set_excep_expr,
    [13054] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1359),
    1,
    anon_sym_COMMA,
    ACTIONS(1422),
    1,
    anon_sym_RPAREN,
    STATE(309),
    1,
    sym_comment,
    STATE(316),
    1,
    aux_sym_annotation_appl_params_repeat1,
    [13073] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1424),
    1,
    anon_sym_COMMA,
    ACTIONS(1427),
    1,
    anon_sym_LBRACE,
    STATE(310),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [13090] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(311),
    1,
    sym_comment,
    ACTIONS(1429),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13105] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1431),
    1,
    anon_sym_COMMA,
    ACTIONS(1434),
    1,
    anon_sym_RBRACE,
    STATE(312),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [13122] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1335),
    1,
    anon_sym_COMMA,
    ACTIONS(1436),
    1,
    anon_sym_GT,
    STATE(313),
    1,
    sym_comment,
    STATE(315),
    1,
    aux_sym_formal_parameters_repeat1,
    [13141] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1438),
    1,
    anon_sym_GT,
    ACTIONS(1440),
    1,
    anon_sym_COMMA,
    STATE(314),
    2,
    sym_comment,
    aux_sym_actual_parameters_repeat1,
    [13158] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1443),
    1,
    anon_sym_GT,
    ACTIONS(1445),
    1,
    anon_sym_COMMA,
    STATE(315),
    2,
    sym_comment,
    aux_sym_formal_parameters_repeat1,
    [13175] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1448),
    1,
    anon_sym_COMMA,
    ACTIONS(1451),
    1,
    anon_sym_RPAREN,
    STATE(316),
    2,
    sym_comment,
    aux_sym_annotation_appl_params_repeat1,
    [13192] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1137),
    1,
    sym_identifier,
    STATE(317),
    1,
    sym_comment,
    STATE(422),
    1,
    sym_scoped_name,
    [13211] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1331),
    1,
    anon_sym_COMMA,
    ACTIONS(1453),
    1,
    anon_sym_GT,
    STATE(314),
    1,
    aux_sym_actual_parameters_repeat1,
    STATE(318),
    1,
    sym_comment,
    [13230] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(393),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1137),
    1,
    sym_identifier,
    STATE(319),
    1,
    sym_comment,
    STATE(342),
    1,
    sym_scoped_name,
    [13249] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1287),
    1,
    anon_sym_COMMA,
    ACTIONS(1455),
    1,
    anon_sym_SEMI,
    STATE(254),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(320),
    1,
    sym_comment,
    [13268] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1151),
    1,
    anon_sym_LBRACE,
    ACTIONS(1153),
    1,
    anon_sym_COLON,
    STATE(321),
    1,
    sym_comment,
    STATE(537),
    1,
    sym_interface_inheritance_spec,
    [13287] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1349),
    1,
    anon_sym_COMMA,
    ACTIONS(1404),
    1,
    anon_sym_RBRACE,
    STATE(322),
    1,
    sym_comment,
    STATE(323),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [13306] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1457),
    1,
    anon_sym_COMMA,
    ACTIONS(1460),
    1,
    anon_sym_RBRACE,
    STATE(323),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [13323] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1295),
    1,
    sym_identifier,
    STATE(176),
    1,
    sym_simple_declarator,
    STATE(324),
    1,
    sym_comment,
    STATE(478),
    1,
    sym_readonly_attr_declarator,
    [13342] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1347),
    1,
    anon_sym_default,
    ACTIONS(1462),
    1,
    anon_sym_SEMI,
    STATE(325),
    1,
    sym_comment,
    STATE(449),
    1,
    sym_default,
    [13361] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1259),
    1,
    anon_sym_context,
    ACTIONS(1464),
    1,
    anon_sym_SEMI,
    STATE(326),
    1,
    sym_comment,
    STATE(539),
    1,
    sym_context_expr,
    [13380] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1267),
    1,
    anon_sym_COMMA,
    ACTIONS(1466),
    1,
    anon_sym_RBRACE,
    STATE(312),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(327),
    1,
    sym_comment,
    [13399] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(328),
    1,
    sym_comment,
    ACTIONS(1468),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13414] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1470),
    1,
    anon_sym_COMMA,
    ACTIONS(1473),
    1,
    anon_sym_SEMI,
    STATE(329),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [13431] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(330),
    1,
    sym_comment,
    ACTIONS(1475),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13446] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1267),
    1,
    anon_sym_COMMA,
    ACTIONS(1466),
    1,
    anon_sym_RBRACE,
    STATE(300),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(331),
    1,
    sym_comment,
    [13465] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(332),
    1,
    sym_comment,
    ACTIONS(1477),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13480] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1479),
    1,
    anon_sym_SEMI,
    ACTIONS(1481),
    1,
    sym_identifier,
    STATE(333),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [13497] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(334),
    1,
    sym_comment,
    ACTIONS(1484),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [13511] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1208),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1486),
    1,
    sym_identifier,
    STATE(335),
    1,
    sym_comment,
    [13527] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1488),
    1,
    anon_sym_LBRACE,
    ACTIONS(1490),
    1,
    anon_sym_COLON,
    STATE(336),
    1,
    sym_comment,
    [13543] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(337),
    1,
    sym_comment,
    ACTIONS(1492),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13557] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(338),
    1,
    sym_comment,
    ACTIONS(1494),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [13571] = 5,
    ACTIONS(1145),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1149),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1496),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(1498),
    1,
    sym_preproc_arg,
    STATE(339),
    1,
    sym_comment,
    [13587] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1008),
    1,
    anon_sym_COMMA,
    STATE(340),
    1,
    sym_comment,
    [13603] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(341),
    1,
    sym_comment,
    ACTIONS(1500),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13617] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1502),
    1,
    anon_sym_LBRACE,
    STATE(342),
    1,
    sym_comment,
    [13633] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(343),
    1,
    sym_comment,
    ACTIONS(1504),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13647] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(344),
    1,
    sym_comment,
    ACTIONS(863),
    2,
    anon_sym_AT,
    sym_identifier,
    [13661] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(345),
    1,
    sym_comment,
    ACTIONS(1506),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [13675] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(346),
    1,
    sym_comment,
    ACTIONS(1473),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [13689] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(347),
    1,
    sym_comment,
    ACTIONS(857),
    2,
    anon_sym_AT,
    sym_identifier,
    [13703] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(348),
    1,
    sym_comment,
    ACTIONS(1508),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [13717] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(349),
    1,
    sym_comment,
    ACTIONS(1510),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [13731] = 4,
    ACTIONS(1145),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1149),
    1,
    anon_sym_SLASH_STAR,
    STATE(350),
    1,
    sym_comment,
    ACTIONS(861),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [13745] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1295),
    1,
    sym_identifier,
    STATE(351),
    1,
    sym_comment,
    STATE(438),
    1,
    sym_simple_declarator,
    [13761] = 4,
    ACTIONS(1145),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1149),
    1,
    anon_sym_SLASH_STAR,
    STATE(352),
    1,
    sym_comment,
    ACTIONS(855),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [13775] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(353),
    1,
    sym_comment,
    ACTIONS(1269),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [13789] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(354),
    1,
    sym_comment,
    ACTIONS(1512),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [13803] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(355),
    1,
    sym_comment,
    ACTIONS(1514),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [13817] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1516),
    1,
    anon_sym_LBRACE,
    STATE(356),
    1,
    sym_comment,
    [13833] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(357),
    1,
    sym_comment,
    ACTIONS(1518),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [13847] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(358),
    1,
    sym_comment,
    ACTIONS(1304),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13861] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(359),
    1,
    sym_comment,
    ACTIONS(1520),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13875] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(360),
    1,
    sym_comment,
    ACTIONS(1522),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [13889] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(361),
    1,
    sym_comment,
    ACTIONS(1524),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13903] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1526),
    1,
    sym_identifier,
    STATE(362),
    1,
    sym_comment,
    STATE(542),
    1,
    sym_formal_parameter_names,
    [13919] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1528),
    1,
    anon_sym_GT,
    ACTIONS(1530),
    1,
    anon_sym_COMMA,
    STATE(363),
    1,
    sym_comment,
    [13935] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(364),
    1,
    sym_comment,
    ACTIONS(1532),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [13949] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(365),
    1,
    sym_comment,
    ACTIONS(1534),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13963] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(366),
    1,
    sym_comment,
    ACTIONS(1536),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13977] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(367),
    1,
    sym_comment,
    ACTIONS(1460),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [13991] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(368),
    1,
    sym_comment,
    ACTIONS(1538),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14005] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(369),
    1,
    sym_comment,
    ACTIONS(1540),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14019] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(370),
    1,
    sym_comment,
    ACTIONS(1542),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14033] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1544),
    1,
    anon_sym_RPAREN,
    STATE(371),
    1,
    sym_comment,
    [14049] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(372),
    1,
    sym_comment,
    ACTIONS(1546),
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
    STATE(373),
    1,
    sym_comment,
    ACTIONS(1548),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [14077] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(374),
    1,
    sym_comment,
    ACTIONS(1313),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14091] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(375),
    1,
    sym_comment,
    ACTIONS(1550),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14105] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(376),
    1,
    sym_comment,
    ACTIONS(1552),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14119] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(377),
    1,
    sym_comment,
    ACTIONS(1554),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14133] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(378),
    1,
    sym_comment,
    ACTIONS(1318),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14147] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(379),
    1,
    sym_comment,
    ACTIONS(1556),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14161] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(380),
    1,
    sym_comment,
    ACTIONS(1558),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14175] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(381),
    1,
    sym_comment,
    ACTIONS(1560),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14189] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(382),
    1,
    sym_comment,
    ACTIONS(1323),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14203] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1159),
    1,
    anon_sym_in,
    STATE(358),
    1,
    sym_in_param_dcl,
    STATE(383),
    1,
    sym_comment,
    [14219] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1295),
    1,
    sym_identifier,
    STATE(359),
    1,
    sym_simple_declarator,
    STATE(384),
    1,
    sym_comment,
    [14235] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1562),
    1,
    anon_sym_LBRACE,
    ACTIONS(1564),
    1,
    anon_sym_COLON,
    STATE(385),
    1,
    sym_comment,
    [14251] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(386),
    1,
    sym_comment,
    ACTIONS(1451),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14265] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(387),
    1,
    sym_comment,
    ACTIONS(1566),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14279] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(388),
    1,
    sym_comment,
    ACTIONS(1568),
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
    STATE(389),
    1,
    sym_comment,
    ACTIONS(1443),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14307] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1570),
    1,
    anon_sym_LT,
    STATE(390),
    1,
    sym_comment,
    [14323] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1572),
    1,
    anon_sym_LT,
    STATE(391),
    1,
    sym_comment,
    [14339] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(392),
    1,
    sym_comment,
    ACTIONS(1438),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14353] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(393),
    1,
    sym_comment,
    ACTIONS(1574),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14367] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(394),
    1,
    sym_comment,
    ACTIONS(1576),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14381] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(395),
    1,
    sym_comment,
    ACTIONS(1578),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14395] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1580),
    1,
    anon_sym_LT,
    ACTIONS(1582),
    1,
    sym_identifier,
    STATE(396),
    1,
    sym_comment,
    [14411] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1236),
    1,
    anon_sym_in,
    STATE(374),
    1,
    sym_init_param_dcl,
    STATE(397),
    1,
    sym_comment,
    [14427] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(398),
    1,
    sym_comment,
    ACTIONS(1434),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14441] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(399),
    1,
    sym_comment,
    ACTIONS(1584),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14455] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(400),
    1,
    sym_comment,
    ACTIONS(1586),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14469] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(401),
    1,
    sym_comment,
    ACTIONS(1588),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [14483] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1295),
    1,
    sym_identifier,
    STATE(375),
    1,
    sym_simple_declarator,
    STATE(402),
    1,
    sym_comment,
    [14499] = 5,
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
    STATE(403),
    1,
    sym_comment,
    [14515] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(404),
    1,
    sym_comment,
    ACTIONS(1594),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14529] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(405),
    1,
    sym_comment,
    ACTIONS(1427),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [14543] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1295),
    1,
    sym_identifier,
    STATE(376),
    1,
    sym_simple_declarator,
    STATE(406),
    1,
    sym_comment,
    [14559] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(407),
    1,
    sym_comment,
    ACTIONS(1596),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14573] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(408),
    1,
    sym_comment,
    ACTIONS(1161),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14587] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1295),
    1,
    sym_identifier,
    STATE(409),
    1,
    sym_comment,
    STATE(420),
    1,
    sym_simple_declarator,
    [14603] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1598),
    1,
    anon_sym_LPAREN,
    STATE(410),
    1,
    sym_comment,
    STATE(430),
    1,
    sym_exception_list,
    [14619] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1598),
    1,
    anon_sym_LPAREN,
    STATE(411),
    1,
    sym_comment,
    STATE(432),
    1,
    sym_exception_list,
    [14635] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(412),
    1,
    sym_comment,
    ACTIONS(1600),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14649] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1208),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1602),
    1,
    sym_identifier,
    STATE(413),
    1,
    sym_comment,
    [14665] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(414),
    1,
    sym_comment,
    ACTIONS(1604),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14679] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1606),
    1,
    sym_identifier,
    STATE(386),
    1,
    sym_annotation_appl_param,
    STATE(415),
    1,
    sym_comment,
    [14695] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1608),
    1,
    anon_sym_LBRACE,
    ACTIONS(1610),
    1,
    anon_sym_supports,
    STATE(416),
    1,
    sym_comment,
    [14711] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1612),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1614),
    1,
    anon_sym_SQUOTE,
    STATE(417),
    1,
    sym_comment,
    [14727] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(418),
    1,
    sym_comment,
    ACTIONS(1616),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [14741] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1295),
    1,
    sym_identifier,
    STATE(419),
    1,
    sym_comment,
    STATE(423),
    1,
    sym_simple_declarator,
    [14757] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(420),
    1,
    sym_comment,
    ACTIONS(1386),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [14771] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(421),
    1,
    sym_comment,
    ACTIONS(1618),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14785] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1620),
    1,
    anon_sym_LBRACE,
    STATE(422),
    1,
    sym_comment,
    [14801] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1622),
    1,
    anon_sym_SEMI,
    ACTIONS(1624),
    1,
    anon_sym_default,
    STATE(423),
    1,
    sym_comment,
    [14817] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(424),
    1,
    sym_comment,
    ACTIONS(1626),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14831] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(425),
    1,
    sym_comment,
    ACTIONS(1628),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14845] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(930),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1630),
    1,
    anon_sym_SEMI,
    STATE(426),
    1,
    sym_comment,
    [14861] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(427),
    1,
    sym_comment,
    ACTIONS(1632),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14875] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(428),
    1,
    sym_comment,
    ACTIONS(1634),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14889] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(429),
    1,
    sym_comment,
    ACTIONS(1636),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14903] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(430),
    1,
    sym_comment,
    ACTIONS(1638),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [14917] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(431),
    1,
    sym_comment,
    ACTIONS(1640),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14931] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1642),
    1,
    anon_sym_SEMI,
    STATE(432),
    1,
    sym_comment,
    [14944] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1644),
    1,
    anon_sym_SEMI,
    STATE(433),
    1,
    sym_comment,
    [14957] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1420),
    1,
    anon_sym_SEMI,
    STATE(434),
    1,
    sym_comment,
    [14970] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1646),
    1,
    sym_identifier,
    STATE(435),
    1,
    sym_comment,
    [14983] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1648),
    1,
    anon_sym_SEMI,
    STATE(436),
    1,
    sym_comment,
    [14996] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1650),
    1,
    sym_identifier,
    STATE(437),
    1,
    sym_comment,
    [15009] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1652),
    1,
    anon_sym_SEMI,
    STATE(438),
    1,
    sym_comment,
    [15022] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1654),
    1,
    anon_sym_RPAREN,
    STATE(439),
    1,
    sym_comment,
    [15035] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1656),
    1,
    anon_sym_SEMI,
    STATE(440),
    1,
    sym_comment,
    [15048] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1630),
    1,
    anon_sym_SEMI,
    STATE(441),
    1,
    sym_comment,
    [15061] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1658),
    1,
    anon_sym_RPAREN,
    STATE(442),
    1,
    sym_comment,
    [15074] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1660),
    1,
    sym_identifier,
    STATE(443),
    1,
    sym_comment,
    [15087] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1662),
    1,
    anon_sym_SEMI,
    STATE(444),
    1,
    sym_comment,
    [15100] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1664),
    1,
    aux_sym_string_literal_token1,
    STATE(445),
    1,
    sym_comment,
    [15113] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1612),
    1,
    anon_sym_DQUOTE,
    STATE(446),
    1,
    sym_comment,
    [15126] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1666),
    1,
    anon_sym_SEMI,
    STATE(447),
    1,
    sym_comment,
    [15139] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1668),
    1,
    anon_sym_SEMI,
    STATE(448),
    1,
    sym_comment,
    [15152] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1670),
    1,
    anon_sym_SEMI,
    STATE(449),
    1,
    sym_comment,
    [15165] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1602),
    1,
    sym_identifier,
    STATE(450),
    1,
    sym_comment,
    [15178] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1672),
    1,
    anon_sym_SEMI,
    STATE(451),
    1,
    sym_comment,
    [15191] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1674),
    1,
    anon_sym_LT,
    STATE(452),
    1,
    sym_comment,
    [15204] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1676),
    1,
    anon_sym_SQUOTE,
    STATE(453),
    1,
    sym_comment,
    [15217] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1678),
    1,
    anon_sym_SEMI,
    STATE(454),
    1,
    sym_comment,
    [15230] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1680),
    1,
    anon_sym_LT,
    STATE(455),
    1,
    sym_comment,
    [15243] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1682),
    1,
    aux_sym_char_literal_token1,
    STATE(456),
    1,
    sym_comment,
    [15256] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1684),
    1,
    anon_sym_SEMI,
    STATE(457),
    1,
    sym_comment,
    [15269] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1686),
    1,
    sym_identifier,
    STATE(458),
    1,
    sym_comment,
    [15282] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1580),
    1,
    anon_sym_LT,
    STATE(459),
    1,
    sym_comment,
    [15295] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1688),
    1,
    anon_sym_RPAREN,
    STATE(460),
    1,
    sym_comment,
    [15308] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1690),
    1,
    anon_sym_SEMI,
    STATE(461),
    1,
    sym_comment,
    [15321] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1692),
    1,
    anon_sym_SEMI,
    STATE(462),
    1,
    sym_comment,
    [15334] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1694),
    1,
    anon_sym_LPAREN,
    STATE(463),
    1,
    sym_comment,
    [15347] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1390),
    1,
    anon_sym_SEMI,
    STATE(464),
    1,
    sym_comment,
    [15360] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1696),
    1,
    anon_sym_RPAREN,
    STATE(465),
    1,
    sym_comment,
    [15373] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1698),
    1,
    anon_sym_SEMI,
    STATE(466),
    1,
    sym_comment,
    [15386] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1418),
    1,
    anon_sym_SEMI,
    STATE(467),
    1,
    sym_comment,
    [15399] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1700),
    1,
    sym_identifier,
    STATE(468),
    1,
    sym_comment,
    [15412] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1702),
    1,
    anon_sym_RPAREN,
    STATE(469),
    1,
    sym_comment,
    [15425] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1704),
    1,
    aux_sym_char_literal_token1,
    STATE(470),
    1,
    sym_comment,
    [15438] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1361),
    1,
    anon_sym_RPAREN,
    STATE(471),
    1,
    sym_comment,
    [15451] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1706),
    1,
    anon_sym_SEMI,
    STATE(472),
    1,
    sym_comment,
    [15464] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1708),
    1,
    anon_sym_RPAREN,
    STATE(473),
    1,
    sym_comment,
    [15477] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1710),
    1,
    anon_sym_LBRACE,
    STATE(474),
    1,
    sym_comment,
    [15490] = 4,
    ACTIONS(1145),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1149),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1712),
    1,
    aux_sym_comment_token3,
    STATE(475),
    1,
    sym_comment,
    [15503] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1714),
    1,
    anon_sym_LBRACE,
    STATE(476),
    1,
    sym_comment,
    [15516] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1716),
    1,
    sym_identifier,
    STATE(477),
    1,
    sym_comment,
    [15529] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1718),
    1,
    anon_sym_SEMI,
    STATE(478),
    1,
    sym_comment,
    [15542] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1720),
    1,
    anon_sym_LBRACE,
    STATE(479),
    1,
    sym_comment,
    [15555] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1357),
    1,
    anon_sym_SEMI,
    STATE(480),
    1,
    sym_comment,
    [15568] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1722),
    1,
    sym_identifier,
    STATE(481),
    1,
    sym_comment,
    [15581] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1724),
    1,
    anon_sym_GT,
    STATE(482),
    1,
    sym_comment,
    [15594] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1726),
    1,
    anon_sym_LT,
    STATE(483),
    1,
    sym_comment,
    [15607] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1728),
    1,
    anon_sym_LBRACE,
    STATE(484),
    1,
    sym_comment,
    [15620] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1730),
    1,
    anon_sym_LBRACE,
    STATE(485),
    1,
    sym_comment,
    [15633] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1582),
    1,
    sym_identifier,
    STATE(486),
    1,
    sym_comment,
    [15646] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1732),
    1,
    anon_sym_LBRACE,
    STATE(487),
    1,
    sym_comment,
    [15659] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1734),
    1,
    anon_sym_SEMI,
    STATE(488),
    1,
    sym_comment,
    [15672] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1736),
    1,
    anon_sym_SEMI,
    STATE(489),
    1,
    sym_comment,
    [15685] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1738),
    1,
    anon_sym_GT,
    STATE(490),
    1,
    sym_comment,
    [15698] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1740),
    1,
    anon_sym_GT,
    STATE(491),
    1,
    sym_comment,
    [15711] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1742),
    1,
    sym_identifier,
    STATE(492),
    1,
    sym_comment,
    [15724] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1744),
    1,
    anon_sym_SEMI,
    STATE(493),
    1,
    sym_comment,
    [15737] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1746),
    1,
    anon_sym_LBRACE,
    STATE(494),
    1,
    sym_comment,
    [15750] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1748),
    1,
    anon_sym_SEMI,
    STATE(495),
    1,
    sym_comment,
    [15763] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1750),
    1,
    anon_sym_LBRACE,
    STATE(496),
    1,
    sym_comment,
    [15776] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1752),
    1,
    sym_identifier,
    STATE(497),
    1,
    sym_comment,
    [15789] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1754),
    1,
    anon_sym_COLON,
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
    ACTIONS(1756),
    1,
    anon_sym_GT,
    STATE(499),
    1,
    sym_comment,
    [15815] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1758),
    1,
    anon_sym_GT,
    STATE(500),
    1,
    sym_comment,
    [15828] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1760),
    1,
    sym_identifier,
    STATE(501),
    1,
    sym_comment,
    [15841] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1762),
    1,
    anon_sym_LBRACE,
    STATE(502),
    1,
    sym_comment,
    [15854] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1764),
    1,
    anon_sym_GT,
    STATE(503),
    1,
    sym_comment,
    [15867] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1766),
    1,
    anon_sym_RBRACE,
    STATE(504),
    1,
    sym_comment,
    [15880] = 4,
    ACTIONS(1145),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1149),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1768),
    1,
    aux_sym_preproc_call_token1,
    STATE(505),
    1,
    sym_comment,
    [15893] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1004),
    1,
    anon_sym_EQ,
    STATE(506),
    1,
    sym_comment,
    [15906] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1770),
    1,
    sym_identifier,
    STATE(507),
    1,
    sym_comment,
    [15919] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1772),
    1,
    anon_sym_RPAREN,
    STATE(508),
    1,
    sym_comment,
    [15932] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1774),
    1,
    anon_sym_SEMI,
    STATE(509),
    1,
    sym_comment,
    [15945] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1776),
    1,
    anon_sym_SEMI,
    STATE(510),
    1,
    sym_comment,
    [15958] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1778),
    1,
    anon_sym_SEMI,
    STATE(511),
    1,
    sym_comment,
    [15971] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1780),
    1,
    sym_identifier,
    STATE(512),
    1,
    sym_comment,
    [15984] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1782),
    1,
    anon_sym_LBRACE,
    STATE(513),
    1,
    sym_comment,
    [15997] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1784),
    1,
    anon_sym_LPAREN,
    STATE(514),
    1,
    sym_comment,
    [16010] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1786),
    1,
    sym_identifier,
    STATE(515),
    1,
    sym_comment,
    [16023] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1486),
    1,
    sym_identifier,
    STATE(516),
    1,
    sym_comment,
    [16036] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1147),
    1,
    anon_sym_SLASH,
    STATE(517),
    1,
    sym_comment,
    [16049] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1788),
    1,
    anon_sym_SEMI,
    STATE(518),
    1,
    sym_comment,
    [16062] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1790),
    1,
    anon_sym_SEMI,
    STATE(519),
    1,
    sym_comment,
    [16075] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1792),
    1,
    anon_sym_SQUOTE,
    STATE(520),
    1,
    sym_comment,
    [16088] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1794),
    1,
    anon_sym_LPAREN,
    STATE(521),
    1,
    sym_comment,
    [16101] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1544),
    1,
    anon_sym_RPAREN,
    STATE(522),
    1,
    sym_comment,
    [16114] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1796),
    1,
    anon_sym_SEMI,
    STATE(523),
    1,
    sym_comment,
    [16127] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1798),
    1,
    anon_sym_SEMI,
    STATE(524),
    1,
    sym_comment,
    [16140] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1800),
    1,
    aux_sym_string_literal_token1,
    STATE(525),
    1,
    sym_comment,
    [16153] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1802),
    1,
    sym_identifier,
    STATE(526),
    1,
    sym_comment,
    [16166] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1804),
    1,
    anon_sym_COLON,
    STATE(527),
    1,
    sym_comment,
    [16179] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1806),
    1,
    anon_sym_enum,
    STATE(528),
    1,
    sym_comment,
    [16192] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1808),
    1,
    anon_sym_SEMI,
    STATE(529),
    1,
    sym_comment,
    [16205] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1810),
    1,
    anon_sym_SEMI,
    STATE(530),
    1,
    sym_comment,
    [16218] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1812),
    1,
    anon_sym_LBRACE,
    STATE(531),
    1,
    sym_comment,
    [16231] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1814),
    1,
    anon_sym_GT,
    STATE(532),
    1,
    sym_comment,
    [16244] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1816),
    1,
    anon_sym_SEMI,
    STATE(533),
    1,
    sym_comment,
    [16257] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1818),
    1,
    sym_identifier,
    STATE(534),
    1,
    sym_comment,
    [16270] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1820),
    1,
    anon_sym_DQUOTE,
    STATE(535),
    1,
    sym_comment,
    [16283] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1822),
    1,
    anon_sym_LPAREN,
    STATE(536),
    1,
    sym_comment,
    [16296] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1824),
    1,
    anon_sym_LBRACE,
    STATE(537),
    1,
    sym_comment,
    [16309] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1826),
    1,
    anon_sym_SEMI,
    STATE(538),
    1,
    sym_comment,
    [16322] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1828),
    1,
    anon_sym_SEMI,
    STATE(539),
    1,
    sym_comment,
    [16335] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1830),
    1,
    anon_sym_LBRACE,
    STATE(540),
    1,
    sym_comment,
    [16348] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1832),
    1,
    anon_sym_LPAREN,
    STATE(541),
    1,
    sym_comment,
    [16361] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1834),
    1,
    anon_sym_GT,
    STATE(542),
    1,
    sym_comment,
    [16374] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1836),
    1,
    anon_sym_SEMI,
    STATE(543),
    1,
    sym_comment,
    [16387] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1838),
    1,
    anon_sym_SEMI,
    STATE(544),
    1,
    sym_comment,
    [16400] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1840),
    1,
    anon_sym_SEMI,
    STATE(545),
    1,
    sym_comment,
    [16413] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1842),
    1,
    sym_identifier,
    STATE(546),
    1,
    sym_comment,
    [16426] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1844),
    1,
    sym_identifier,
    STATE(547),
    1,
    sym_comment,
    [16439] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1846),
    1,
    anon_sym_DQUOTE,
    STATE(548),
    1,
    sym_comment,
    [16452] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1848),
    1,
    anon_sym_SEMI,
    STATE(549),
    1,
    sym_comment,
    [16465] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1850),
    1,
    anon_sym_COMMA,
    STATE(550),
    1,
    sym_comment,
    [16478] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1852),
    1,
    sym_identifier,
    STATE(551),
    1,
    sym_comment,
    [16491] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1854),
    1,
    anon_sym_COMMA,
    STATE(552),
    1,
    sym_comment,
    [16504] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1856),
    1,
    sym_identifier,
    STATE(553),
    1,
    sym_comment,
    [16517] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1858),
    1,
    anon_sym_attribute,
    STATE(554),
    1,
    sym_comment,
    [16530] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1860),
    1,
    anon_sym_void,
    STATE(555),
    1,
    sym_comment,
    [16543] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1862),
    1,
    anon_sym_GT,
    STATE(556),
    1,
    sym_comment,
    [16556] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1864),
    1,
    anon_sym_SEMI,
    STATE(557),
    1,
    sym_comment,
    [16569] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1866),
    1,
    anon_sym_SEMI,
    STATE(558),
    1,
    sym_comment,
    [16582] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1868),
    1,
    sym_identifier,
    STATE(559),
    1,
    sym_comment,
    [16595] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1870),
    1,
    anon_sym_SEMI,
    STATE(560),
    1,
    sym_comment,
    [16608] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1872),
    1,
    ts_builtin_sym_end,
    STATE(561),
    1,
    sym_comment,
    [16621] = 4,
    ACTIONS(1145),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1149),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1874),
    1,
    aux_sym_predefine_token1,
    STATE(562),
    1,
    sym_comment,
    [16634] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1464),
    1,
    anon_sym_SEMI,
    STATE(563),
    1,
    sym_comment,
    [16647] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1876),
    1,
    anon_sym_GT,
    STATE(564),
    1,
    sym_comment,
    [16660] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(267),
    1,
    anon_sym_RBRACE,
    STATE(565),
    1,
    sym_comment,
    [16673] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1878),
    1,
    anon_sym_LPAREN,
    STATE(566),
    1,
    sym_comment,
    [16686] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1880),
    1,
    anon_sym_enum,
    STATE(567),
    1,
    sym_comment,
    [16699] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1882),
    1,
    sym_identifier,
    STATE(568),
    1,
    sym_comment,
    [16712] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1884),
    1,
    sym_identifier,
    STATE(569),
    1,
    sym_comment,
    [16725] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1886),
    1,
    sym_identifier,
    STATE(570),
    1,
    sym_comment,
    [16738] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1888),
    1,
    sym_identifier,
    STATE(571),
    1,
    sym_comment,
    [16751] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1890),
    1,
    anon_sym_SEMI,
    STATE(572),
    1,
    sym_comment,
    [16764] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1892),
    1,
    anon_sym_EQ,
    STATE(573),
    1,
    sym_comment,
    [16777] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1894),
    1,
    anon_sym_SEMI,
    STATE(574),
    1,
    sym_comment,
    [16790] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1896),
    1,
    sym_identifier,
    STATE(575),
    1,
    sym_comment,
    [16803] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1898),
    1,
    sym_identifier,
    STATE(576),
    1,
    sym_comment,
    [16816] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1900),
    1,
    sym_identifier,
    STATE(577),
    1,
    sym_comment,
    [16829] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1902),
    1,
    sym_identifier,
    STATE(578),
    1,
    sym_comment,
    [16842] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1904),
    1,
    anon_sym_SEMI,
    STATE(579),
    1,
    sym_comment,
    [16855] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1906),
    1,
    anon_sym_RBRACK,
    STATE(580),
    1,
    sym_comment,
    [16868] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1908),
    1,
    sym_identifier,
    STATE(581),
    1,
    sym_comment,
    [16881] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1910),
    1,
    sym_identifier,
    STATE(582),
    1,
    sym_comment,
    [16894] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1257),
    1,
    anon_sym_SEMI,
    STATE(583),
    1,
    sym_comment,
    [16907] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1912),
    1,
    sym_identifier,
    STATE(584),
    1,
    sym_comment,
    [16920] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1914),
    1,
    anon_sym_RPAREN,
    STATE(585),
    1,
    sym_comment,
    [16933] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1916),
    1,
    anon_sym_LBRACE,
    STATE(586),
    1,
    sym_comment,
    [16946] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1918),
    1,
    sym_identifier,
    STATE(587),
    1,
    sym_comment,
    [16959] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1920),
    1,
    sym_identifier,
    STATE(588),
    1,
    sym_comment,
    [16972] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1922),
    1,
    anon_sym_RPAREN,
    STATE(589),
    1,
    sym_comment,
    [16985] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1608),
    1,
    anon_sym_LBRACE,
    STATE(590),
    1,
    sym_comment,
    [16998] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1924),
    1,
    sym_identifier,
    STATE(591),
    1,
    sym_comment,
    [17011] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1926),
    1,
    anon_sym_RPAREN,
    STATE(592),
    1,
    sym_comment,
    [17024] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1928),
    1,
    anon_sym_SEMI,
    STATE(593),
    1,
    sym_comment,
    [17037] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1930),
    1,
    anon_sym_interface,
    STATE(594),
    1,
    sym_comment,
    [17050] = 1,
    ACTIONS(1932),
    1,
    ts_builtin_sym_end,
    [17054] = 1,
    ACTIONS(1934),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(13)] = 0,
    [SMALL_STATE(14)] = 144,
    [SMALL_STATE(15)] = 286,
    [SMALL_STATE(16)] = 430,
    [SMALL_STATE(17)] = 569,
    [SMALL_STATE(18)] = 710,
    [SMALL_STATE(19)] = 851,
    [SMALL_STATE(20)] = 990,
    [SMALL_STATE(21)] = 1131,
    [SMALL_STATE(22)] = 1272,
    [SMALL_STATE(23)] = 1413,
    [SMALL_STATE(24)] = 1554,
    [SMALL_STATE(25)] = 1695,
    [SMALL_STATE(26)] = 1836,
    [SMALL_STATE(27)] = 1975,
    [SMALL_STATE(28)] = 2112,
    [SMALL_STATE(29)] = 2253,
    [SMALL_STATE(30)] = 2394,
    [SMALL_STATE(31)] = 2533,
    [SMALL_STATE(32)] = 2662,
    [SMALL_STATE(33)] = 2792,
    [SMALL_STATE(34)] = 2918,
    [SMALL_STATE(35)] = 3048,
    [SMALL_STATE(36)] = 3178,
    [SMALL_STATE(37)] = 3310,
    [SMALL_STATE(38)] = 3440,
    [SMALL_STATE(39)] = 3563,
    [SMALL_STATE(40)] = 3692,
    [SMALL_STATE(41)] = 3758,
    [SMALL_STATE(42)] = 3824,
    [SMALL_STATE(43)] = 3890,
    [SMALL_STATE(44)] = 3956,
    [SMALL_STATE(45)] = 4022,
    [SMALL_STATE(46)] = 4088,
    [SMALL_STATE(47)] = 4154,
    [SMALL_STATE(48)] = 4277,
    [SMALL_STATE(49)] = 4400,
    [SMALL_STATE(50)] = 4523,
    [SMALL_STATE(51)] = 4646,
    [SMALL_STATE(52)] = 4769,
    [SMALL_STATE(53)] = 4892,
    [SMALL_STATE(54)] = 5015,
    [SMALL_STATE(55)] = 5138,
    [SMALL_STATE(56)] = 5201,
    [SMALL_STATE(57)] = 5264,
    [SMALL_STATE(58)] = 5369,
    [SMALL_STATE(59)] = 5474,
    [SMALL_STATE(60)] = 5528,
    [SMALL_STATE(61)] = 5582,
    [SMALL_STATE(62)] = 5629,
    [SMALL_STATE(63)] = 5676,
    [SMALL_STATE(64)] = 5723,
    [SMALL_STATE(65)] = 5774,
    [SMALL_STATE(66)] = 5821,
    [SMALL_STATE(67)] = 5868,
    [SMALL_STATE(68)] = 5916,
    [SMALL_STATE(69)] = 5962,
    [SMALL_STATE(70)] = 6008,
    [SMALL_STATE(71)] = 6054,
    [SMALL_STATE(72)] = 6100,
    [SMALL_STATE(73)] = 6146,
    [SMALL_STATE(74)] = 6192,
    [SMALL_STATE(75)] = 6238,
    [SMALL_STATE(76)] = 6284,
    [SMALL_STATE(77)] = 6329,
    [SMALL_STATE(78)] = 6412,
    [SMALL_STATE(79)] = 6457,
    [SMALL_STATE(80)] = 6501,
    [SMALL_STATE(81)] = 6543,
    [SMALL_STATE(82)] = 6629,
    [SMALL_STATE(83)] = 6715,
    [SMALL_STATE(84)] = 6801,
    [SMALL_STATE(85)] = 6887,
    [SMALL_STATE(86)] = 6929,
    [SMALL_STATE(87)] = 6971,
    [SMALL_STATE(88)] = 7054,
    [SMALL_STATE(89)] = 7137,
    [SMALL_STATE(90)] = 7220,
    [SMALL_STATE(91)] = 7303,
    [SMALL_STATE(92)] = 7386,
    [SMALL_STATE(93)] = 7469,
    [SMALL_STATE(94)] = 7552,
    [SMALL_STATE(95)] = 7632,
    [SMALL_STATE(96)] = 7712,
    [SMALL_STATE(97)] = 7792,
    [SMALL_STATE(98)] = 7860,
    [SMALL_STATE(99)] = 7940,
    [SMALL_STATE(100)] = 8020,
    [SMALL_STATE(101)] = 8100,
    [SMALL_STATE(102)] = 8180,
    [SMALL_STATE(103)] = 8222,
    [SMALL_STATE(104)] = 8296,
    [SMALL_STATE(105)] = 8367,
    [SMALL_STATE(106)] = 8404,
    [SMALL_STATE(107)] = 8441,
    [SMALL_STATE(108)] = 8478,
    [SMALL_STATE(109)] = 8546,
    [SMALL_STATE(110)] = 8582,
    [SMALL_STATE(111)] = 8618,
    [SMALL_STATE(112)] = 8654,
    [SMALL_STATE(113)] = 8690,
    [SMALL_STATE(114)] = 8726,
    [SMALL_STATE(115)] = 8762,
    [SMALL_STATE(116)] = 8798,
    [SMALL_STATE(117)] = 8863,
    [SMALL_STATE(118)] = 8925,
    [SMALL_STATE(119)] = 8984,
    [SMALL_STATE(120)] = 9017,
    [SMALL_STATE(121)] = 9050,
    [SMALL_STATE(122)] = 9080,
    [SMALL_STATE(123)] = 9114,
    [SMALL_STATE(124)] = 9144,
    [SMALL_STATE(125)] = 9174,
    [SMALL_STATE(126)] = 9204,
    [SMALL_STATE(127)] = 9234,
    [SMALL_STATE(128)] = 9264,
    [SMALL_STATE(129)] = 9294,
    [SMALL_STATE(130)] = 9324,
    [SMALL_STATE(131)] = 9354,
    [SMALL_STATE(132)] = 9384,
    [SMALL_STATE(133)] = 9418,
    [SMALL_STATE(134)] = 9448,
    [SMALL_STATE(135)] = 9478,
    [SMALL_STATE(136)] = 9524,
    [SMALL_STATE(137)] = 9553,
    [SMALL_STATE(138)] = 9582,
    [SMALL_STATE(139)] = 9611,
    [SMALL_STATE(140)] = 9644,
    [SMALL_STATE(141)] = 9671,
    [SMALL_STATE(142)] = 9698,
    [SMALL_STATE(143)] = 9721,
    [SMALL_STATE(144)] = 9744,
    [SMALL_STATE(145)] = 9767,
    [SMALL_STATE(146)] = 9804,
    [SMALL_STATE(147)] = 9826,
    [SMALL_STATE(148)] = 9848,
    [SMALL_STATE(149)] = 9882,
    [SMALL_STATE(150)] = 9911,
    [SMALL_STATE(151)] = 9934,
    [SMALL_STATE(152)] = 9965,
    [SMALL_STATE(153)] = 9984,
    [SMALL_STATE(154)] = 10005,
    [SMALL_STATE(155)] = 10028,
    [SMALL_STATE(156)] = 10052,
    [SMALL_STATE(157)] = 10070,
    [SMALL_STATE(158)] = 10098,
    [SMALL_STATE(159)] = 10126,
    [SMALL_STATE(160)] = 10144,
    [SMALL_STATE(161)] = 10166,
    [SMALL_STATE(162)] = 10194,
    [SMALL_STATE(163)] = 10222,
    [SMALL_STATE(164)] = 10248,
    [SMALL_STATE(165)] = 10266,
    [SMALL_STATE(166)] = 10294,
    [SMALL_STATE(167)] = 10318,
    [SMALL_STATE(168)] = 10346,
    [SMALL_STATE(169)] = 10371,
    [SMALL_STATE(170)] = 10394,
    [SMALL_STATE(171)] = 10417,
    [SMALL_STATE(172)] = 10442,
    [SMALL_STATE(173)] = 10459,
    [SMALL_STATE(174)] = 10484,
    [SMALL_STATE(175)] = 10501,
    [SMALL_STATE(176)] = 10526,
    [SMALL_STATE(177)] = 10551,
    [SMALL_STATE(178)] = 10576,
    [SMALL_STATE(179)] = 10599,
    [SMALL_STATE(180)] = 10622,
    [SMALL_STATE(181)] = 10645,
    [SMALL_STATE(182)] = 10670,
    [SMALL_STATE(183)] = 10695,
    [SMALL_STATE(184)] = 10720,
    [SMALL_STATE(185)] = 10745,
    [SMALL_STATE(186)] = 10768,
    [SMALL_STATE(187)] = 10793,
    [SMALL_STATE(188)] = 10818,
    [SMALL_STATE(189)] = 10840,
    [SMALL_STATE(190)] = 10862,
    [SMALL_STATE(191)] = 10884,
    [SMALL_STATE(192)] = 10906,
    [SMALL_STATE(193)] = 10928,
    [SMALL_STATE(194)] = 10950,
    [SMALL_STATE(195)] = 10970,
    [SMALL_STATE(196)] = 10990,
    [SMALL_STATE(197)] = 11006,
    [SMALL_STATE(198)] = 11026,
    [SMALL_STATE(199)] = 11046,
    [SMALL_STATE(200)] = 11068,
    [SMALL_STATE(201)] = 11084,
    [SMALL_STATE(202)] = 11100,
    [SMALL_STATE(203)] = 11116,
    [SMALL_STATE(204)] = 11132,
    [SMALL_STATE(205)] = 11148,
    [SMALL_STATE(206)] = 11164,
    [SMALL_STATE(207)] = 11180,
    [SMALL_STATE(208)] = 11196,
    [SMALL_STATE(209)] = 11212,
    [SMALL_STATE(210)] = 11230,
    [SMALL_STATE(211)] = 11246,
    [SMALL_STATE(212)] = 11266,
    [SMALL_STATE(213)] = 11286,
    [SMALL_STATE(214)] = 11308,
    [SMALL_STATE(215)] = 11328,
    [SMALL_STATE(216)] = 11346,
    [SMALL_STATE(217)] = 11366,
    [SMALL_STATE(218)] = 11384,
    [SMALL_STATE(219)] = 11406,
    [SMALL_STATE(220)] = 11426,
    [SMALL_STATE(221)] = 11448,
    [SMALL_STATE(222)] = 11470,
    [SMALL_STATE(223)] = 11490,
    [SMALL_STATE(224)] = 11512,
    [SMALL_STATE(225)] = 11534,
    [SMALL_STATE(226)] = 11556,
    [SMALL_STATE(227)] = 11578,
    [SMALL_STATE(228)] = 11594,
    [SMALL_STATE(229)] = 11616,
    [SMALL_STATE(230)] = 11636,
    [SMALL_STATE(231)] = 11652,
    [SMALL_STATE(232)] = 11668,
    [SMALL_STATE(233)] = 11684,
    [SMALL_STATE(234)] = 11704,
    [SMALL_STATE(235)] = 11724,
    [SMALL_STATE(236)] = 11743,
    [SMALL_STATE(237)] = 11762,
    [SMALL_STATE(238)] = 11779,
    [SMALL_STATE(239)] = 11798,
    [SMALL_STATE(240)] = 11815,
    [SMALL_STATE(241)] = 11834,
    [SMALL_STATE(242)] = 11853,
    [SMALL_STATE(243)] = 11872,
    [SMALL_STATE(244)] = 11891,
    [SMALL_STATE(245)] = 11910,
    [SMALL_STATE(246)] = 11929,
    [SMALL_STATE(247)] = 11948,
    [SMALL_STATE(248)] = 11967,
    [SMALL_STATE(249)] = 11984,
    [SMALL_STATE(250)] = 11999,
    [SMALL_STATE(251)] = 12014,
    [SMALL_STATE(252)] = 12033,
    [SMALL_STATE(253)] = 12050,
    [SMALL_STATE(254)] = 12067,
    [SMALL_STATE(255)] = 12086,
    [SMALL_STATE(256)] = 12105,
    [SMALL_STATE(257)] = 12124,
    [SMALL_STATE(258)] = 12143,
    [SMALL_STATE(259)] = 12158,
    [SMALL_STATE(260)] = 12177,
    [SMALL_STATE(261)] = 12194,
    [SMALL_STATE(262)] = 12213,
    [SMALL_STATE(263)] = 12232,
    [SMALL_STATE(264)] = 12247,
    [SMALL_STATE(265)] = 12264,
    [SMALL_STATE(266)] = 12281,
    [SMALL_STATE(267)] = 12298,
    [SMALL_STATE(268)] = 12317,
    [SMALL_STATE(269)] = 12336,
    [SMALL_STATE(270)] = 12355,
    [SMALL_STATE(271)] = 12374,
    [SMALL_STATE(272)] = 12393,
    [SMALL_STATE(273)] = 12408,
    [SMALL_STATE(274)] = 12423,
    [SMALL_STATE(275)] = 12442,
    [SMALL_STATE(276)] = 12461,
    [SMALL_STATE(277)] = 12480,
    [SMALL_STATE(278)] = 12499,
    [SMALL_STATE(279)] = 12518,
    [SMALL_STATE(280)] = 12537,
    [SMALL_STATE(281)] = 12556,
    [SMALL_STATE(282)] = 12575,
    [SMALL_STATE(283)] = 12594,
    [SMALL_STATE(284)] = 12613,
    [SMALL_STATE(285)] = 12632,
    [SMALL_STATE(286)] = 12651,
    [SMALL_STATE(287)] = 12668,
    [SMALL_STATE(288)] = 12687,
    [SMALL_STATE(289)] = 12706,
    [SMALL_STATE(290)] = 12725,
    [SMALL_STATE(291)] = 12744,
    [SMALL_STATE(292)] = 12759,
    [SMALL_STATE(293)] = 12774,
    [SMALL_STATE(294)] = 12789,
    [SMALL_STATE(295)] = 12804,
    [SMALL_STATE(296)] = 12819,
    [SMALL_STATE(297)] = 12834,
    [SMALL_STATE(298)] = 12849,
    [SMALL_STATE(299)] = 12864,
    [SMALL_STATE(300)] = 12883,
    [SMALL_STATE(301)] = 12902,
    [SMALL_STATE(302)] = 12921,
    [SMALL_STATE(303)] = 12940,
    [SMALL_STATE(304)] = 12959,
    [SMALL_STATE(305)] = 12978,
    [SMALL_STATE(306)] = 12997,
    [SMALL_STATE(307)] = 13016,
    [SMALL_STATE(308)] = 13035,
    [SMALL_STATE(309)] = 13054,
    [SMALL_STATE(310)] = 13073,
    [SMALL_STATE(311)] = 13090,
    [SMALL_STATE(312)] = 13105,
    [SMALL_STATE(313)] = 13122,
    [SMALL_STATE(314)] = 13141,
    [SMALL_STATE(315)] = 13158,
    [SMALL_STATE(316)] = 13175,
    [SMALL_STATE(317)] = 13192,
    [SMALL_STATE(318)] = 13211,
    [SMALL_STATE(319)] = 13230,
    [SMALL_STATE(320)] = 13249,
    [SMALL_STATE(321)] = 13268,
    [SMALL_STATE(322)] = 13287,
    [SMALL_STATE(323)] = 13306,
    [SMALL_STATE(324)] = 13323,
    [SMALL_STATE(325)] = 13342,
    [SMALL_STATE(326)] = 13361,
    [SMALL_STATE(327)] = 13380,
    [SMALL_STATE(328)] = 13399,
    [SMALL_STATE(329)] = 13414,
    [SMALL_STATE(330)] = 13431,
    [SMALL_STATE(331)] = 13446,
    [SMALL_STATE(332)] = 13465,
    [SMALL_STATE(333)] = 13480,
    [SMALL_STATE(334)] = 13497,
    [SMALL_STATE(335)] = 13511,
    [SMALL_STATE(336)] = 13527,
    [SMALL_STATE(337)] = 13543,
    [SMALL_STATE(338)] = 13557,
    [SMALL_STATE(339)] = 13571,
    [SMALL_STATE(340)] = 13587,
    [SMALL_STATE(341)] = 13603,
    [SMALL_STATE(342)] = 13617,
    [SMALL_STATE(343)] = 13633,
    [SMALL_STATE(344)] = 13647,
    [SMALL_STATE(345)] = 13661,
    [SMALL_STATE(346)] = 13675,
    [SMALL_STATE(347)] = 13689,
    [SMALL_STATE(348)] = 13703,
    [SMALL_STATE(349)] = 13717,
    [SMALL_STATE(350)] = 13731,
    [SMALL_STATE(351)] = 13745,
    [SMALL_STATE(352)] = 13761,
    [SMALL_STATE(353)] = 13775,
    [SMALL_STATE(354)] = 13789,
    [SMALL_STATE(355)] = 13803,
    [SMALL_STATE(356)] = 13817,
    [SMALL_STATE(357)] = 13833,
    [SMALL_STATE(358)] = 13847,
    [SMALL_STATE(359)] = 13861,
    [SMALL_STATE(360)] = 13875,
    [SMALL_STATE(361)] = 13889,
    [SMALL_STATE(362)] = 13903,
    [SMALL_STATE(363)] = 13919,
    [SMALL_STATE(364)] = 13935,
    [SMALL_STATE(365)] = 13949,
    [SMALL_STATE(366)] = 13963,
    [SMALL_STATE(367)] = 13977,
    [SMALL_STATE(368)] = 13991,
    [SMALL_STATE(369)] = 14005,
    [SMALL_STATE(370)] = 14019,
    [SMALL_STATE(371)] = 14033,
    [SMALL_STATE(372)] = 14049,
    [SMALL_STATE(373)] = 14063,
    [SMALL_STATE(374)] = 14077,
    [SMALL_STATE(375)] = 14091,
    [SMALL_STATE(376)] = 14105,
    [SMALL_STATE(377)] = 14119,
    [SMALL_STATE(378)] = 14133,
    [SMALL_STATE(379)] = 14147,
    [SMALL_STATE(380)] = 14161,
    [SMALL_STATE(381)] = 14175,
    [SMALL_STATE(382)] = 14189,
    [SMALL_STATE(383)] = 14203,
    [SMALL_STATE(384)] = 14219,
    [SMALL_STATE(385)] = 14235,
    [SMALL_STATE(386)] = 14251,
    [SMALL_STATE(387)] = 14265,
    [SMALL_STATE(388)] = 14279,
    [SMALL_STATE(389)] = 14293,
    [SMALL_STATE(390)] = 14307,
    [SMALL_STATE(391)] = 14323,
    [SMALL_STATE(392)] = 14339,
    [SMALL_STATE(393)] = 14353,
    [SMALL_STATE(394)] = 14367,
    [SMALL_STATE(395)] = 14381,
    [SMALL_STATE(396)] = 14395,
    [SMALL_STATE(397)] = 14411,
    [SMALL_STATE(398)] = 14427,
    [SMALL_STATE(399)] = 14441,
    [SMALL_STATE(400)] = 14455,
    [SMALL_STATE(401)] = 14469,
    [SMALL_STATE(402)] = 14483,
    [SMALL_STATE(403)] = 14499,
    [SMALL_STATE(404)] = 14515,
    [SMALL_STATE(405)] = 14529,
    [SMALL_STATE(406)] = 14543,
    [SMALL_STATE(407)] = 14559,
    [SMALL_STATE(408)] = 14573,
    [SMALL_STATE(409)] = 14587,
    [SMALL_STATE(410)] = 14603,
    [SMALL_STATE(411)] = 14619,
    [SMALL_STATE(412)] = 14635,
    [SMALL_STATE(413)] = 14649,
    [SMALL_STATE(414)] = 14665,
    [SMALL_STATE(415)] = 14679,
    [SMALL_STATE(416)] = 14695,
    [SMALL_STATE(417)] = 14711,
    [SMALL_STATE(418)] = 14727,
    [SMALL_STATE(419)] = 14741,
    [SMALL_STATE(420)] = 14757,
    [SMALL_STATE(421)] = 14771,
    [SMALL_STATE(422)] = 14785,
    [SMALL_STATE(423)] = 14801,
    [SMALL_STATE(424)] = 14817,
    [SMALL_STATE(425)] = 14831,
    [SMALL_STATE(426)] = 14845,
    [SMALL_STATE(427)] = 14861,
    [SMALL_STATE(428)] = 14875,
    [SMALL_STATE(429)] = 14889,
    [SMALL_STATE(430)] = 14903,
    [SMALL_STATE(431)] = 14917,
    [SMALL_STATE(432)] = 14931,
    [SMALL_STATE(433)] = 14944,
    [SMALL_STATE(434)] = 14957,
    [SMALL_STATE(435)] = 14970,
    [SMALL_STATE(436)] = 14983,
    [SMALL_STATE(437)] = 14996,
    [SMALL_STATE(438)] = 15009,
    [SMALL_STATE(439)] = 15022,
    [SMALL_STATE(440)] = 15035,
    [SMALL_STATE(441)] = 15048,
    [SMALL_STATE(442)] = 15061,
    [SMALL_STATE(443)] = 15074,
    [SMALL_STATE(444)] = 15087,
    [SMALL_STATE(445)] = 15100,
    [SMALL_STATE(446)] = 15113,
    [SMALL_STATE(447)] = 15126,
    [SMALL_STATE(448)] = 15139,
    [SMALL_STATE(449)] = 15152,
    [SMALL_STATE(450)] = 15165,
    [SMALL_STATE(451)] = 15178,
    [SMALL_STATE(452)] = 15191,
    [SMALL_STATE(453)] = 15204,
    [SMALL_STATE(454)] = 15217,
    [SMALL_STATE(455)] = 15230,
    [SMALL_STATE(456)] = 15243,
    [SMALL_STATE(457)] = 15256,
    [SMALL_STATE(458)] = 15269,
    [SMALL_STATE(459)] = 15282,
    [SMALL_STATE(460)] = 15295,
    [SMALL_STATE(461)] = 15308,
    [SMALL_STATE(462)] = 15321,
    [SMALL_STATE(463)] = 15334,
    [SMALL_STATE(464)] = 15347,
    [SMALL_STATE(465)] = 15360,
    [SMALL_STATE(466)] = 15373,
    [SMALL_STATE(467)] = 15386,
    [SMALL_STATE(468)] = 15399,
    [SMALL_STATE(469)] = 15412,
    [SMALL_STATE(470)] = 15425,
    [SMALL_STATE(471)] = 15438,
    [SMALL_STATE(472)] = 15451,
    [SMALL_STATE(473)] = 15464,
    [SMALL_STATE(474)] = 15477,
    [SMALL_STATE(475)] = 15490,
    [SMALL_STATE(476)] = 15503,
    [SMALL_STATE(477)] = 15516,
    [SMALL_STATE(478)] = 15529,
    [SMALL_STATE(479)] = 15542,
    [SMALL_STATE(480)] = 15555,
    [SMALL_STATE(481)] = 15568,
    [SMALL_STATE(482)] = 15581,
    [SMALL_STATE(483)] = 15594,
    [SMALL_STATE(484)] = 15607,
    [SMALL_STATE(485)] = 15620,
    [SMALL_STATE(486)] = 15633,
    [SMALL_STATE(487)] = 15646,
    [SMALL_STATE(488)] = 15659,
    [SMALL_STATE(489)] = 15672,
    [SMALL_STATE(490)] = 15685,
    [SMALL_STATE(491)] = 15698,
    [SMALL_STATE(492)] = 15711,
    [SMALL_STATE(493)] = 15724,
    [SMALL_STATE(494)] = 15737,
    [SMALL_STATE(495)] = 15750,
    [SMALL_STATE(496)] = 15763,
    [SMALL_STATE(497)] = 15776,
    [SMALL_STATE(498)] = 15789,
    [SMALL_STATE(499)] = 15802,
    [SMALL_STATE(500)] = 15815,
    [SMALL_STATE(501)] = 15828,
    [SMALL_STATE(502)] = 15841,
    [SMALL_STATE(503)] = 15854,
    [SMALL_STATE(504)] = 15867,
    [SMALL_STATE(505)] = 15880,
    [SMALL_STATE(506)] = 15893,
    [SMALL_STATE(507)] = 15906,
    [SMALL_STATE(508)] = 15919,
    [SMALL_STATE(509)] = 15932,
    [SMALL_STATE(510)] = 15945,
    [SMALL_STATE(511)] = 15958,
    [SMALL_STATE(512)] = 15971,
    [SMALL_STATE(513)] = 15984,
    [SMALL_STATE(514)] = 15997,
    [SMALL_STATE(515)] = 16010,
    [SMALL_STATE(516)] = 16023,
    [SMALL_STATE(517)] = 16036,
    [SMALL_STATE(518)] = 16049,
    [SMALL_STATE(519)] = 16062,
    [SMALL_STATE(520)] = 16075,
    [SMALL_STATE(521)] = 16088,
    [SMALL_STATE(522)] = 16101,
    [SMALL_STATE(523)] = 16114,
    [SMALL_STATE(524)] = 16127,
    [SMALL_STATE(525)] = 16140,
    [SMALL_STATE(526)] = 16153,
    [SMALL_STATE(527)] = 16166,
    [SMALL_STATE(528)] = 16179,
    [SMALL_STATE(529)] = 16192,
    [SMALL_STATE(530)] = 16205,
    [SMALL_STATE(531)] = 16218,
    [SMALL_STATE(532)] = 16231,
    [SMALL_STATE(533)] = 16244,
    [SMALL_STATE(534)] = 16257,
    [SMALL_STATE(535)] = 16270,
    [SMALL_STATE(536)] = 16283,
    [SMALL_STATE(537)] = 16296,
    [SMALL_STATE(538)] = 16309,
    [SMALL_STATE(539)] = 16322,
    [SMALL_STATE(540)] = 16335,
    [SMALL_STATE(541)] = 16348,
    [SMALL_STATE(542)] = 16361,
    [SMALL_STATE(543)] = 16374,
    [SMALL_STATE(544)] = 16387,
    [SMALL_STATE(545)] = 16400,
    [SMALL_STATE(546)] = 16413,
    [SMALL_STATE(547)] = 16426,
    [SMALL_STATE(548)] = 16439,
    [SMALL_STATE(549)] = 16452,
    [SMALL_STATE(550)] = 16465,
    [SMALL_STATE(551)] = 16478,
    [SMALL_STATE(552)] = 16491,
    [SMALL_STATE(553)] = 16504,
    [SMALL_STATE(554)] = 16517,
    [SMALL_STATE(555)] = 16530,
    [SMALL_STATE(556)] = 16543,
    [SMALL_STATE(557)] = 16556,
    [SMALL_STATE(558)] = 16569,
    [SMALL_STATE(559)] = 16582,
    [SMALL_STATE(560)] = 16595,
    [SMALL_STATE(561)] = 16608,
    [SMALL_STATE(562)] = 16621,
    [SMALL_STATE(563)] = 16634,
    [SMALL_STATE(564)] = 16647,
    [SMALL_STATE(565)] = 16660,
    [SMALL_STATE(566)] = 16673,
    [SMALL_STATE(567)] = 16686,
    [SMALL_STATE(568)] = 16699,
    [SMALL_STATE(569)] = 16712,
    [SMALL_STATE(570)] = 16725,
    [SMALL_STATE(571)] = 16738,
    [SMALL_STATE(572)] = 16751,
    [SMALL_STATE(573)] = 16764,
    [SMALL_STATE(574)] = 16777,
    [SMALL_STATE(575)] = 16790,
    [SMALL_STATE(576)] = 16803,
    [SMALL_STATE(577)] = 16816,
    [SMALL_STATE(578)] = 16829,
    [SMALL_STATE(579)] = 16842,
    [SMALL_STATE(580)] = 16855,
    [SMALL_STATE(581)] = 16868,
    [SMALL_STATE(582)] = 16881,
    [SMALL_STATE(583)] = 16894,
    [SMALL_STATE(584)] = 16907,
    [SMALL_STATE(585)] = 16920,
    [SMALL_STATE(586)] = 16933,
    [SMALL_STATE(587)] = 16946,
    [SMALL_STATE(588)] = 16959,
    [SMALL_STATE(589)] = 16972,
    [SMALL_STATE(590)] = 16985,
    [SMALL_STATE(591)] = 16998,
    [SMALL_STATE(592)] = 17011,
    [SMALL_STATE(593)] = 17024,
    [SMALL_STATE(594)] = 17037,
    [SMALL_STATE(595)] = 17050,
    [SMALL_STATE(596)] = 17054,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(224),
    [5] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(475),
    [7] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0, 0, 0),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(339),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(526),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(594),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(578),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(577),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(576),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(575),
    [23] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(243),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(244),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(571),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(570),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(569),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(568),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [39] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(567),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(245),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(247),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(562),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(196),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(200),
    [55] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(201),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(202),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(294),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(455),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(203),
    [67] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(205),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(205),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(206),
    [73] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(207),
    [75] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(207),
    [77] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(291),
    [79] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(291),
    [81] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(208),
    [83] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(581),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(209),
    [87] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(295),
    [89] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(459),
    [91] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(452),
    [93] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(526),
    [95] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(433),
    [97] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(546),
    [99] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(554),
    [101] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(48),
    [103] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(577),
    [105] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(576),
    [107] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(243),
    [109] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(571),
    [111] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(570),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(569),
    [115] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(568),
    [117] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [119] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [121] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(584),
    [123] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(12),
    [125] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(245),
    [127] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(151),
    [129] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(555),
    [131] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(351),
    [133] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(164),
    [135] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(196),
    [138] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(200),
    [141] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [144] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [147] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(202),
    [150] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(294),
    [153] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(455),
    [156] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(203),
    [159] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(205),
    [162] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(205),
    [165] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(206),
    [168] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(207),
    [171] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(207),
    [174] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(291),
    [177] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(291),
    [180] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(208),
    [183] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(581),
    [186] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(209),
    [189] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(295),
    [192] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(459),
    [195] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(452),
    [198] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(526),
    [201] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    [203] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(546),
    [206] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(554),
    [209] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(48),
    [212] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(577),
    [215] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(576),
    [218] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [221] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(571),
    [224] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(570),
    [227] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(569),
    [230] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(568),
    [233] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(58),
    [236] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(47),
    [239] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(584),
    [242] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(12),
    [245] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(567),
    [248] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(245),
    [251] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(151),
    [254] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(555),
    [257] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(351),
    [260] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(164),
    [263] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(579),
    [265] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(538),
    [267] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(545),
    [269] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1, 0, 0),
    [271] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(196),
    [274] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(200),
    [277] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [280] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [283] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(202),
    [286] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(294),
    [289] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(455),
    [292] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(203),
    [295] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(205),
    [298] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(205),
    [301] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(206),
    [304] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(207),
    [307] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(207),
    [310] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(291),
    [313] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(291),
    [316] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(208),
    [319] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(581),
    [322] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(209),
    [325] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(295),
    [328] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(459),
    [331] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(452),
    [334] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(526),
    [337] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    [339] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(546),
    [342] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(554),
    [345] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(48),
    [348] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(577),
    [351] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(576),
    [354] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [357] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(571),
    [360] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(570),
    [363] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(569),
    [366] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(568),
    [369] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(58),
    [372] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(12),
    [375] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(567),
    [378] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(245),
    [381] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(151),
    [384] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(555),
    [387] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(351),
    [390] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(164),
    [393] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(492),
    [395] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(144),
    [397] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [399] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [401] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(417),
    [403] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(445),
    [405] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(470),
    [407] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(126),
    [409] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [411] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(80),
    [413] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 1, 0, 0),
    [415] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case, 1, 0, 0),
    [417] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(516),
    [419] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(468),
    [421] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(443),
    [423] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(462),
    [425] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(567),
    [427] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(196),
    [430] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(200),
    [433] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [436] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [439] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(202),
    [442] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(516),
    [445] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(468),
    [448] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(203),
    [451] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(205),
    [454] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(205),
    [457] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(206),
    [460] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(207),
    [463] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(207),
    [466] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(291),
    [469] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(291),
    [472] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(208),
    [475] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(581),
    [478] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(209),
    [481] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(443),
    [484] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(459),
    [487] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    [489] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(568),
    [492] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(58),
    [495] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(12),
    [498] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(567),
    [501] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(164),
    [504] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(444),
    [506] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(495),
    [508] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(235),
    [510] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(562),
    [512] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(395),
    [514] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(240),
    [516] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(431),
    [518] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1, 0, 0),
    [520] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(510),
    [522] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(393),
    [524] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(380),
    [526] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(368),
    [528] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(341),
    [530] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(196),
    [533] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(200),
    [536] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [539] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [542] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(202),
    [545] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(294),
    [548] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(455),
    [551] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(203),
    [554] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(205),
    [557] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(205),
    [560] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(206),
    [563] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(207),
    [566] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(207),
    [569] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(291),
    [572] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(291),
    [575] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(208),
    [578] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(581),
    [581] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(209),
    [584] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(295),
    [587] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(459),
    [590] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(452),
    [593] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    [595] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(240),
    [598] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(164),
    [601] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(526),
    [604] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    [606] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(594),
    [609] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(578),
    [612] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(577),
    [615] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(576),
    [618] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(575),
    [621] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [624] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [627] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(571),
    [630] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(570),
    [633] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(569),
    [636] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(568),
    [639] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(58),
    [642] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(235),
    [645] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(12),
    [648] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(567),
    [651] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(245),
    [654] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(247),
    [657] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(151),
    [660] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(351),
    [663] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(562),
    [666] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(414),
    [668] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(489),
    [670] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(454),
    [672] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    [674] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(526),
    [677] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(594),
    [680] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(578),
    [683] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(577),
    [686] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(576),
    [689] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(575),
    [692] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(243),
    [695] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(244),
    [698] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(571),
    [701] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(570),
    [704] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(569),
    [707] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(568),
    [710] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(58),
    [713] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(12),
    [716] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(567),
    [719] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(245),
    [722] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(247),
    [725] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(151),
    [728] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(351),
    [731] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(562),
    [734] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(488),
    [736] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(396),
    [738] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(486),
    [740] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [742] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2, 0, 0),
    [744] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(509),
    [746] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [748] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [750] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 5, 0, 0),
    [752] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 5, 0, 0),
    [754] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_value_element, 1, 0, 0),
    [756] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_element, 1, 0, 0),
    [758] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 1, 0, 0),
    [760] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 1, 0, 0),
    [762] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 6, 0, 0),
    [764] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 6, 0, 0),
    [766] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_export, 2, 0, 0),
    [768] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2, 0, 0),
    [770] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 7, 0, 0),
    [772] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 7, 0, 0),
    [774] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_state_member, 4, 0, 0),
    [776] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_state_member, 4, 0, 0),
    [778] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 1, 0, 0),
    [780] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 1, 0, 0),
    [782] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2, 0, 0),
    [784] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2, 0, 0),
    [786] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3, 0, 0),
    [788] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3, 0, 0),
    [790] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3, 0, 0),
    [792] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3, 0, 0),
    [794] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 2, 0, 0),
    [796] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 2, 0, 0),
    [798] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1, 0, 0),
    [800] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1, 0, 0),
    [802] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    [804] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    [806] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(240),
    [809] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 1, 0, 0),
    [811] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1, 0, 0),
    [813] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5, 0, 0),
    [815] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5, 0, 0),
    [817] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 2, 0, 0),
    [819] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 2, 0, 0),
    [821] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [823] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1, 0, 0),
    [825] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1, 0, 0),
    [827] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [829] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [831] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [833] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [835] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [837] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [839] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, 0, 6),
    [841] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, 0, 6),
    [843] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, 0, 6),
    [845] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, 0, 6),
    [847] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, 0, 3),
    [849] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, 0, 3),
    [851] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, 0, 3),
    [853] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, 0, 3),
    [855] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 1, 0, 0),
    [857] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1, 0, 0),
    [859] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(522),
    [861] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 5, 0, 0),
    [863] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 5, 0, 0),
    [865] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1, 0, 0),
    [867] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1, 0, 0),
    [869] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(138),
    [871] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [873] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(200),
    [875] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(202),
    [877] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(490),
    [879] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [881] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(206),
    [883] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    [885] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    SHIFT_REPEAT(339),
    [888] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    [890] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2, 0, 0),
    [892] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__definition, 2, 0, 0),
    [894] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2, 0, 0),
    [896] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_predefine, 2, 0, 0),
    [898] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1, 0, 0),
    [900] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__definition, 1, 0, 0),
    [902] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 2, 0, 0),
    [904] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 2, 0, 0),
    [906] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, 0, 2),
    [908] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, 0, 2),
    [910] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, 0, 1),
    [912] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, 0, 1),
    [914] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 1, 0, 0),
    [916] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 1, 0, 0),
    [918] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1, 0, 0),
    [920] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 1, 0, 0),
    [922] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1, 0, 0),
    [924] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1, 0, 0),
    [926] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1, 0, 0),
    [928] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1, 0, 0),
    [930] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(512),
    [932] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2, 0, 0),
    [934] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2, 0, 0),
    [936] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1, 0, 0),
    [938] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1, 0, 0),
    [940] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1, 0, 0),
    [942] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1, 0, 0),
    [944] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(118),
    [946] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(118),
    [948] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [950] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [952] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, 0, 7),
    [954] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, 0, 7),
    [956] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4, 0, 0),
    [958] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4, 0, 0),
    [960] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [962] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [964] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1, 0, 0),
    [966] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1, 0, 0),
    [968] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3, 0, 0),
    [970] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3, 0, 0),
    [972] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3, 0, 0),
    [974] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3, 0, 0),
    [976] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, 0, 4),
    [978] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, 0, 4),
    [980] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3, 0, 0),
    [982] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3, 0, 0),
    [984] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1, 0, 0),
    [986] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1, 0, 0),
    [988] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4, 0, 0),
    [990] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4, 0, 0),
    [992] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [994] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3, 0, 0),
    [996] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3, 0, 0),
    [998] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(117),
    [1000] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1, 0, 0),
    [1002] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1, 0, 0),
    [1004] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [1006] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_simple_type_spec, 1, 0, 0),
    [1008] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1, 0, 0),
    [1010] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1, 0, 0),
    [1012] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1, 0, 0),
    [1014] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(116),
    [1016] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3, 0, 0),
    [1018] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3, 0, 0),
    [1020] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1, 0, 0),
    [1022] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(108),
    [1024] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3, 0, 0),
    [1026] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [1028] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [1030] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(435),
    [1032] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(477),
    [1034] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1, 0, 0),
    [1036] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [1038] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3, 0, 0),
    [1040] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(409),
    [1042] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1, 0, 0),
    [1044] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(410),
    [1046] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(411),
    [1048] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(222),
    [1050] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [1052] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [1054] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [1056] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(446),
    [1058] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1, 0, 0),
    [1060] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1, 0, 0),
    [1062] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [1064] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [1067] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2, 0, 0),
    [1069] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [1071] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(361),
    [1073] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(498),
    [1075] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [1077] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(343),
    [1079] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(345),
    [1081] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(348),
    [1083] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2, 0, 0),
    [1085] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(90),
    [1088] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(337),
    [1090] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(370),
    [1092] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [1094] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(428),
    [1096] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    [1098] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(498),
    [1101] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(95),
    [1104] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(388),
    [1106] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(425),
    [1108] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(387),
    [1110] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(483),
    [1112] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [1114] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(424),
    [1116] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1, 0, 0),
    [1118] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(463),
    [1120] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(407),
    [1122] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2, 0, 0),
    [1124] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(483),
    [1127] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(365),
    [1129] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 2, 0, 0),
    [1131] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(225),
    [1133] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_forward_dcl, 2, 0, 0),
    [1135] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(188),
    [1137] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [1139] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(262),
    [1141] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [1143] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(242),
    [1145] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(224),
    [1147] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(596),
    [1149] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(475),
    [1151] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2, 0, 0),
    [1153] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [1155] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2, 0, 0),
    [1157] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(412),
    [1159] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [1161] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5, 0, 0),
    [1163] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_short_int, 1, 0, 0),
    [1165] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(197),
    [1167] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2, 0, 0),
    [1169] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_long_int, 1, 0, 0),
    [1171] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_longlong_int, 1, 0, 0),
    [1173] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1, 0, 0),
    [1175] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1, 0, 0),
    [1177] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3, 0, 0),
    [1179] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_short_int, 1, 0, 0),
    [1181] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_long_int, 1, 0, 0),
    [1183] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_longlong_int, 1, 0, 0),
    [1185] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1, 0, 0),
    [1187] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [1189] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1, 0, 0),
    [1191] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1, 0, 0),
    [1193] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [1195] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(319),
    [1197] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2, 0, 0),
    [1199] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(345),
    [1202] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2, 0, 0),
    [1204] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(357),
    [1206] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1, 0, 0),
    [1208] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(582),
    [1210] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(588),
    [1212] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(81),
    [1214] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2, 0, 0),
    SHIFT_REPEAT(197),
    [1217] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2, 0, 0),
    [1219] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(446),
    [1221] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [1224] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4, 0, 0),
    [1226] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(436),
    [1228] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(595),
    [1230] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(338),
    [1232] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1, 0, 0),
    [1234] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(303),
    [1236] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [1238] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [1240] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(238),
    [1243] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(221),
    [1245] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3, 0, 0),
    [1247] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_name, 1, 0, 0),
    [1249] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(164),
    [1251] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1, 0, 0),
    [1253] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(591),
    [1255] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [1257] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [1259] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(541),
    [1261] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(587),
    [1263] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(230),
    [1265] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(274),
    [1267] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [1269] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2, 0, 0),
    [1271] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2, 0, 0),
    SHIFT_REPEAT(551),
    [1274] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1, 0, 0),
    [1276] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3, 0, 0),
    [1278] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 2, 0, 0),
    [1280] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(551),
    [1282] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2, 0, 0),
    SHIFT_REPEAT(262),
    [1285] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2, 0, 0),
    [1287] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(229),
    [1289] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2, 0, 0),
    [1291] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(354),
    [1293] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2, 0, 0),
    [1295] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(152),
    [1297] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3, 0, 0),
    [1299] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 1, 0, 0),
    [1301] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_in_parameter_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(383),
    [1304] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_in_parameter_dcls_repeat1, 2, 0, 0),
    [1306] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(355),
    [1308] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8, 0, 0),
    [1310] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(397),
    [1313] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2, 0, 0),
    [1315] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(185),
    [1318] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2, 0, 0),
    [1320] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_context_expr_repeat1, 2, 0, 0),
    SHIFT_REPEAT(284),
    [1323] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_context_expr_repeat1, 2, 0, 0),
    [1325] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(383),
    [1327] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_parameter_dcls, 2, 0, 0),
    [1329] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 1, 0, 0),
    [1331] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [1333] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 1, 0, 0),
    [1335] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [1337] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1, 0, 0),
    [1339] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1, 0, 0),
    [1341] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [1343] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [1345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [1347] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [1349] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [1351] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(372),
    [1353] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(397),
    [1355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 2, 0, 0),
    [1357] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [1359] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(415),
    [1361] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 1, 0, 0),
    [1363] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2, 0, 0),
    [1365] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(514),
    [1367] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2, 0, 0),
    [1369] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
    [1371] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2, 0, 0),
    [1373] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(364),
    [1375] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(404),
    [1377] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(284),
    [1379] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(511),
    [1381] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_parameter_dcls, 1, 0, 0),
    [1383] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(409),
    [1386] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2, 0, 0),
    [1388] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(369),
    [1390] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2, 0, 0),
    [1392] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1, 0, 0),
    [1394] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6, 0, 0),
    [1396] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6, 0, 0),
    [1398] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1, 0, 0),
    [1400] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1, 0, 0),
    [1402] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1, 0, 0),
    [1404] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(429),
    [1406] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(394),
    [1408] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 1, 0, 0),
    [1410] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [1412] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1, 0, 0),
    [1414] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(472),
    [1416] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(401),
    [1418] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2, 0, 0),
    [1420] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1, 0, 0),
    [1422] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 2, 0, 0),
    [1424] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2, 0, 0),
    SHIFT_REPEAT(221),
    [1427] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2, 0, 0),
    [1429] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5, 0, 0),
    [1431] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(171),
    [1434] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2, 0, 0),
    [1436] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 2, 0, 0),
    [1438] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2, 0, 0),
    [1440] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2, 0, 0),
    SHIFT_REPEAT(10),
    [1443] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0),
    [1445] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0),
    SHIFT_REPEAT(38),
    [1448] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    SHIFT_REPEAT(415),
    [1451] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    [1453] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 2, 0, 0),
    [1455] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1, 0, 0),
    [1457] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(183),
    [1460] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2, 0, 0),
    [1462] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [1464] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [1466] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(399),
    [1468] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1, 0, 0),
    [1470] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2, 0, 0),
    SHIFT_REPEAT(229),
    [1473] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2, 0, 0),
    [1475] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4, 0, 0),
    [1477] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4, 0, 0),
    [1479] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2, 0, 0),
    [1481] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2, 0, 0),
    SHIFT_REPEAT(404),
    [1484] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_oneway_dcl, 6, 0, 0),
    [1486] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1, 0, 0),
    [1488] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [1490] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(271),
    [1492] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5, 0, 0),
    [1494] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2, 0, 0),
    [1496] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(111),
    [1498] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(505),
    [1500] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4, 0, 0),
    [1502] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [1504] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4, 0, 0),
    [1506] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1, 0, 0),
    [1508] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1, 0, 0),
    [1510] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1, 0, 0),
    [1512] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5, 0, 0),
    [1514] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4, 0, 0),
    [1516] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [1518] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4, 0, 0),
    [1520] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_param_dcl, 3, 0, 0),
    [1522] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3, 0, 0),
    [1524] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9, 0, 0),
    [1526] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [1528] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(421),
    [1530] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [1532] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3, 0, 0),
    [1534] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6, 0, 0),
    [1536] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6, 0, 0),
    [1538] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, 0, 8),
    [1540] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6, 0, 0),
    [1542] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5, 0, 0),
    [1544] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1, 0, 0),
    [1546] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 8, 0, 0),
    [1548] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1, 0, 0),
    [1550] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcl, 3, 0, 0),
    [1552] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3, 0, 0),
    [1554] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_param, 3, 0, 0),
    [1556] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6, 0, 0),
    [1558] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5, 0, 0),
    [1560] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameter, 1, 0, 0),
    [1562] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [1564] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(317),
    [1566] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4, 0, 0),
    [1568] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8, 0, 0),
    [1570] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(362),
    [1572] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [1574] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, 0, 8),
    [1576] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7, 0, 0),
    [1578] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, 0, 5),
    [1580] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [1582] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 1, 0, 0),
    [1584] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6, 0, 0),
    [1586] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter, 2, 0, 0),
    [1588] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2, 0, 0),
    [1590] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(292),
    [1592] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [1594] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1, 0, 0),
    [1596] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5, 0, 0),
    [1598] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(287),
    [1600] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_oneway_dcl, 5, 0, 0),
    [1602] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1, 0, 0),
    [1604] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, 0, 5),
    [1606] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(506),
    [1608] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 2, 0, 0),
    [1610] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(189),
    [1612] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(525),
    [1614] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(456),
    [1616] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1, 0, 0),
    [1618] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4, 0, 0),
    [1620] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [1622] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [1624] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [1626] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7, 0, 0),
    [1628] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4, 0, 0),
    [1630] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_imported_scope, 1, 0, 0),
    [1632] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 3, 0, 0),
    [1634] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1, 0, 0),
    [1636] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 7, 0, 0),
    [1638] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2, 0, 0),
    [1640] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, 0, 0),
    [1642] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2, 0, 0),
    [1644] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 4, 0, 0),
    [1646] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(474),
    [1648] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 3, 0, 0),
    [1650] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(586),
    [1652] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2, 0, 0),
    [1654] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [1656] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_dcl, 2, 0, 0),
    [1658] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(278),
    [1660] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1, 0, 0),
    [1662] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4, 0, 0),
    [1664] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(535),
    [1666] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2, 0, 0),
    [1668] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2, 0, 0),
    [1670] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [1672] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [1674] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [1676] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(131),
    [1678] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 7, 0, 0),
    [1680] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [1682] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(520),
    [1684] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(109),
    [1686] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(573),
    [1688] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [1690] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [1692] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5, 0, 0),
    [1694] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(269),
    [1696] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(484),
    [1698] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2, 0, 0),
    [1700] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1, 0, 0),
    [1702] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [1704] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(453),
    [1706] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 4, 0, 0),
    [1708] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(174),
    [1710] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(162),
    [1712] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(517),
    [1714] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [1716] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(336),
    [1718] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4, 0, 0),
    [1720] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [1722] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [1724] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [1726] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [1728] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [1730] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [1732] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 4, 0, 0),
    [1734] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5, 0, 0),
    [1736] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5, 0, 0),
    [1738] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1, 0, 0),
    [1740] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(366),
    [1742] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [1744] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_inst, 6, 0, 0),
    [1746] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [1748] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 8, 0, 0),
    [1750] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [1752] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(493),
    [1754] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [1756] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(311),
    [1758] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(479),
    [1760] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_kind, 2, 0, 0),
    [1762] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [1764] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(263),
    [1766] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(549),
    [1768] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(110),
    [1770] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(400),
    [1772] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(134),
    [1774] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4, 0, 0),
    [1776] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 4, 0, 0),
    [1778] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 5, 0, 0),
    [1780] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [1782] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 3, 0, 0),
    [1784] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [1786] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 2, 0, 0),
    [1788] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2, 0, 0),
    [1790] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [1792] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [1794] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(228),
    [1796] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_id_dcl, 3, 0, 0),
    [1798] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_prefix_dcl, 3, 0, 0),
    [1800] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(548),
    [1802] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(502),
    [1804] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [1806] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(437),
    [1808] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [1810] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [1812] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [1814] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(497),
    [1816] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_dcl, 1, 0, 0),
    [1818] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(536),
    [1820] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(123),
    [1822] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [1824] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3, 0, 0),
    [1826] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3, 0, 0),
    [1828] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_with_context, 2, 0, 0),
    [1830] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [1832] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(223),
    [1834] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(553),
    [1836] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1, 0, 0),
    [1838] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2, 0, 0),
    [1840] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4, 0, 0),
    [1842] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1, 0, 0),
    [1844] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(566),
    [1846] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(125),
    [1848] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5, 0, 0),
    [1850] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [1852] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(353),
    [1854] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [1856] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(557),
    [1858] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [1860] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(547),
    [1862] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(332),
    [1864] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_ref, 6, 0, 0),
    [1866] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [1868] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [1870] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [1872] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1874] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(106),
    [1876] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(330),
    [1878] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [1880] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1, 0, 0),
    [1882] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(476),
    [1884] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(280),
    [1886] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(211),
    [1888] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(187),
    [1890] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3, 0, 0),
    [1892] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [1894] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1, 0, 0),
    [1896] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(494),
    [1898] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(496),
    [1900] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(385),
    [1902] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_kind, 1, 0, 0),
    [1904] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 3, 0, 0),
    [1906] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(204),
    [1908] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(159),
    [1910] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(156),
    [1912] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(521),
    [1914] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [1916] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [1918] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(231),
    [1920] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(232),
    [1922] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [1924] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [1926] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(344),
    [1928] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5, 0, 0),
    [1930] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(501),
    [1932] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_comment, 2, 0, 0),
    [1934] = { .entry = { .count = 1, .reusable = true } },
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
