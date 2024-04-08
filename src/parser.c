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
#define STATE_COUNT 480
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 232
#define ALIAS_COUNT 3
#define TOKEN_COUNT 107
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
    sym_signed_short_int = 1,
    sym_signed_long_int = 2,
    sym_signed_longlong_int = 3,
    sym_boolean_type = 4,
    anon_sym_fixed = 5,
    sym_octet_type = 6,
    sym_unsigned_short_int = 7,
    sym_unsigned_long_int = 8,
    sym_unsigned_longlong_int = 9,
    anon_sym_float = 10,
    anon_sym_double = 11,
    anon_sym_longdouble = 12,
    anon_sym_char = 13,
    anon_sym_wchar = 14,
    anon_sym_COLON_COLON = 15,
    anon_sym_string = 16,
    anon_sym_wstring = 17,
    anon_sym_LT = 18,
    anon_sym_GT = 19,
    anon_sym_COMMA = 20,
    anon_sym_sequence = 21,
    anon_sym_map = 22,
    anon_sym_PIPE = 23,
    anon_sym_CARET = 24,
    anon_sym_DOLLAR = 25,
    anon_sym_GT_GT = 26,
    anon_sym_LT_LT = 27,
    anon_sym_PLUS = 28,
    anon_sym_DASH = 29,
    anon_sym_STAR = 30,
    anon_sym_SLASH = 31,
    anon_sym_PERCENT = 32,
    anon_sym_LPAREN = 33,
    anon_sym_RPAREN = 34,
    anon_sym_TILDE = 35,
    anon_sym_L = 36,
    anon_sym_DQUOTE = 37,
    aux_sym_string_literal_token1 = 38,
    anon_sym_SQUOTE = 39,
    aux_sym_char_literal_token1 = 40,
    anon_sym_TRUE = 41,
    anon_sym_FALSE = 42,
    sym_number_literal = 43,
    aux_sym_preproc_call_token1 = 44,
    sym_preproc_directive = 45,
    sym_preproc_arg = 46,
    anon_sym_SEMI = 47,
    anon_sym_exception = 48,
    anon_sym_LBRACE = 49,
    anon_sym_RBRACE = 50,
    anon_sym_native = 51,
    anon_sym_module = 52,
    anon_sym_struct = 53,
    anon_sym_COLON = 54,
    anon_sym_default = 55,
    anon_sym_enum = 56,
    anon_sym_ATdefault_literal = 57,
    anon_sym_ATignore_literal_names = 58,
    anon_sym_ATannotation = 59,
    sym_any_const_type = 60,
    anon_sym_AT = 61,
    anon_sym_LBRACK = 62,
    anon_sym_RBRACK = 63,
    anon_sym_EQ = 64,
    anon_sym_union = 65,
    anon_sym_switch = 66,
    anon_sym_case = 67,
    anon_sym_bitset = 68,
    anon_sym_bitfield = 69,
    anon_sym_bitmask = 70,
    anon_sym_typedef = 71,
    anon_sym_POUNDdefine = 72,
    aux_sym_predefine_token1 = 73,
    anon_sym_interface = 74,
    anon_sym_local = 75,
    anon_sym_void = 76,
    anon_sym_in = 77,
    anon_sym_out = 78,
    anon_sym_inout = 79,
    anon_sym_raises = 80,
    anon_sym_readonly = 81,
    anon_sym_attribute = 82,
    anon_sym_getraises = 83,
    anon_sym_setraises = 84,
    sym_dds_service = 85,
    anon_sym_ATDDSRequestTopic = 86,
    anon_sym_name = 87,
    anon_sym_ATDDSReplyTopic = 88,
    anon_sym_const = 89,
    sym_optional = 90,
    sym_key = 91,
    sym_must_understand = 92,
    sym_non_serialized = 93,
    sym_id = 94,
    sym_external = 95,
    anon_sym_AThashid = 96,
    anon_sym_LPAREN_DQUOTE = 97,
    anon_sym_ATtry_construct = 98,
    sym_final = 99,
    anon_sym_ATdata_representation = 100,
    anon_sym_XCDR = 101,
    anon_sym_XCDR2 = 102,
    sym_identifier = 103,
    anon_sym_SLASH_SLASH = 104,
    aux_sym_comment_token1 = 105,
    sym__eof = 106,
    sym_specification = 107,
    sym_unsigned_int = 108,
    sym_fixed_pt_const_type = 109,
    sym_integer_type = 110,
    sym_signed_int = 111,
    sym_floating_pt_type = 112,
    sym_char_type = 113,
    sym_scoped_name = 114,
    sym_string_type = 115,
    sym_type_spec = 116,
    sym_simple_type_spec = 117,
    sym_base_type_spec = 118,
    sym_fixed_pt_type = 119,
    sym_template_type_spec = 120,
    sym_sequence_type = 121,
    sym_map_type = 122,
    sym_const_expr = 123,
    sym_or_expr = 124,
    sym_xor_expr = 125,
    sym_and_expr = 126,
    sym_shift_expr = 127,
    sym_add_expr = 128,
    sym_mult_expr = 129,
    sym_unary_expr = 130,
    sym_unary_operator = 131,
    sym_literal = 132,
    sym_string_literal = 133,
    sym_char_literal = 134,
    sym_boolean_literal = 135,
    sym_preproc_call = 136,
    sym__definition = 137,
    sym_except_dcl = 138,
    sym_native_dcl = 139,
    sym_module_dcl = 140,
    sym_struct_forward_dcl = 141,
    sym_struct_def = 142,
    sym_member = 143,
    sym_default = 144,
    sym_enum_dcl = 145,
    sym_enumerator = 146,
    sym_enum_modifier = 147,
    sym_enum_anno = 148,
    sym_annotation_dcl = 149,
    sym_annotation_body = 150,
    sym_annotation_member = 151,
    sym_annotation_member_type = 152,
    sym_union_forward_dcl = 153,
    sym_union_def = 154,
    sym_case = 155,
    sym_case_label = 156,
    sym_element_spec = 157,
    sym_switch_type_spec = 158,
    sym_bitset_dcl = 159,
    sym_bitfield = 160,
    sym_bitfield_spec = 161,
    sym_destination_type = 162,
    sym_bitmask_dcl = 163,
    sym_bit_value = 164,
    sym_typedef_dcl = 165,
    sym_predefine = 166,
    sym_interface_dcl = 167,
    sym_interface_forward_dcl = 168,
    sym_interface_def = 169,
    sym_interface_header = 170,
    sym_interface_inheritance_spec = 171,
    sym_interface_name = 172,
    sym_interface_body = 173,
    sym_export = 174,
    sym_op_dcl = 175,
    sym_op_type_spec = 176,
    sym_parameter_dcls = 177,
    sym_param_dcl = 178,
    sym_param_attribute = 179,
    sym_raises_expr = 180,
    sym_attr_dcl = 181,
    sym_readonly_attr_spec = 182,
    sym_readonly_attr_declarator = 183,
    sym_attr_spec = 184,
    sym_attr_declarator = 185,
    sym_attr_raises_expr = 186,
    sym_get_excep_expr = 187,
    sym_set_excep_expr = 188,
    sym_exception_list = 189,
    sym_dds_request_topic = 190,
    sym_dds_reply_topic = 191,
    sym_interface_anno = 192,
    sym_const_dcl = 193,
    sym_const_type = 194,
    sym_hashid = 195,
    sym_try_construct = 196,
    sym_data_representation = 197,
    sym_struct_modifier = 198,
    sym_simple_declarator = 199,
    sym_declarator = 200,
    sym_declarators = 201,
    sym_array_declarator = 202,
    sym_positive_int_const = 203,
    sym_fixed_array_size = 204,
    sym_type_declarator = 205,
    sym_any_declarators = 206,
    sym_any_declarator = 207,
    sym_comment = 208,
    aux_sym_specification_repeat1 = 209,
    aux_sym_specification_repeat2 = 210,
    aux_sym_except_dcl_repeat1 = 211,
    aux_sym_struct_def_repeat1 = 212,
    aux_sym_member_repeat1 = 213,
    aux_sym_enum_dcl_repeat1 = 214,
    aux_sym_enumerator_repeat1 = 215,
    aux_sym_annotation_body_repeat1 = 216,
    aux_sym_union_def_repeat1 = 217,
    aux_sym_bitset_dcl_repeat1 = 218,
    aux_sym_bitfield_repeat1 = 219,
    aux_sym_bitmask_dcl_repeat1 = 220,
    aux_sym_interface_def_repeat1 = 221,
    aux_sym_interface_inheritance_spec_repeat1 = 222,
    aux_sym_interface_body_repeat1 = 223,
    aux_sym_parameter_dcls_repeat1 = 224,
    aux_sym_raises_expr_repeat1 = 225,
    aux_sym_readonly_attr_declarator_repeat1 = 226,
    aux_sym_attr_raises_expr_repeat1 = 227,
    aux_sym_data_representation_repeat1 = 228,
    aux_sym_declarators_repeat1 = 229,
    aux_sym_array_declarator_repeat1 = 230,
    aux_sym_any_declarators_repeat1 = 231,
    alias_sym_data_rep = 232,
    alias_sym_hashid_value = 233,
    alias_sym_try_construct_value = 234,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [sym_signed_short_int] = "signed_short_int",
    [sym_signed_long_int] = "signed_long_int",
    [sym_signed_longlong_int] = "signed_longlong_int",
    [sym_boolean_type] = "boolean_type",
    [anon_sym_fixed] = "fixed",
    [sym_octet_type] = "octet_type",
    [sym_unsigned_short_int] = "unsigned_short_int",
    [sym_unsigned_long_int] = "unsigned_long_int",
    [sym_unsigned_longlong_int] = "unsigned_longlong_int",
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
    [anon_sym_SEMI] = ";",
    [anon_sym_exception] = "exception",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_native] = "native",
    [anon_sym_module] = "module",
    [anon_sym_struct] = "struct",
    [anon_sym_COLON] = ":",
    [anon_sym_default] = "default",
    [anon_sym_enum] = "enum",
    [anon_sym_ATdefault_literal] = "@default_literal",
    [anon_sym_ATignore_literal_names] = "@ignore_literal_names",
    [anon_sym_ATannotation] = "@annotation",
    [sym_any_const_type] = "any_const_type",
    [anon_sym_AT] = "@",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_EQ] = "=",
    [anon_sym_union] = "union",
    [anon_sym_switch] = "switch",
    [anon_sym_case] = "case",
    [anon_sym_bitset] = "bitset",
    [anon_sym_bitfield] = "bitfield",
    [anon_sym_bitmask] = "bitmask",
    [anon_sym_typedef] = "typedef",
    [anon_sym_POUNDdefine] = "#define",
    [aux_sym_predefine_token1] = "predefine_token1",
    [anon_sym_interface] = "interface",
    [anon_sym_local] = "local",
    [anon_sym_void] = "void",
    [anon_sym_in] = "in",
    [anon_sym_out] = "out",
    [anon_sym_inout] = "inout",
    [anon_sym_raises] = "raises",
    [anon_sym_readonly] = "readonly",
    [anon_sym_attribute] = "attribute",
    [anon_sym_getraises] = "getraises",
    [anon_sym_setraises] = "setraises",
    [sym_dds_service] = "dds_service",
    [anon_sym_ATDDSRequestTopic] = "@DDSRequestTopic",
    [anon_sym_name] = "name",
    [anon_sym_ATDDSReplyTopic] = "@DDSReplyTopic",
    [anon_sym_const] = "const",
    [sym_optional] = "optional",
    [sym_key] = "key",
    [sym_must_understand] = "must_understand",
    [sym_non_serialized] = "non_serialized",
    [sym_id] = "id",
    [sym_external] = "external",
    [anon_sym_AThashid] = "@hashid",
    [anon_sym_LPAREN_DQUOTE] = "(\"",
    [anon_sym_ATtry_construct] = "@try_construct",
    [sym_final] = "final",
    [anon_sym_ATdata_representation] = "@data_representation",
    [anon_sym_XCDR] = "XCDR",
    [anon_sym_XCDR2] = "XCDR2",
    [sym_identifier] = "identifier",
    [anon_sym_SLASH_SLASH] = "//",
    [aux_sym_comment_token1] = "comment_token1",
    [sym__eof] = "_eof",
    [sym_specification] = "specification",
    [sym_unsigned_int] = "unsigned_int",
    [sym_fixed_pt_const_type] = "fixed_pt_const_type",
    [sym_integer_type] = "integer_type",
    [sym_signed_int] = "signed_int",
    [sym_floating_pt_type] = "floating_pt_type",
    [sym_char_type] = "char_type",
    [sym_scoped_name] = "scoped_name",
    [sym_string_type] = "string_type",
    [sym_type_spec] = "type_spec",
    [sym_simple_type_spec] = "simple_type_spec",
    [sym_base_type_spec] = "base_type_spec",
    [sym_fixed_pt_type] = "fixed_pt_type",
    [sym_template_type_spec] = "template_type_spec",
    [sym_sequence_type] = "sequence_type",
    [sym_map_type] = "map_type",
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
    [sym__definition] = "_definition",
    [sym_except_dcl] = "except_dcl",
    [sym_native_dcl] = "native_dcl",
    [sym_module_dcl] = "module_dcl",
    [sym_struct_forward_dcl] = "struct_forward_dcl",
    [sym_struct_def] = "struct_def",
    [sym_member] = "member",
    [sym_default] = "default",
    [sym_enum_dcl] = "enum_dcl",
    [sym_enumerator] = "enumerator",
    [sym_enum_modifier] = "enum_modifier",
    [sym_enum_anno] = "enum_anno",
    [sym_annotation_dcl] = "annotation_dcl",
    [sym_annotation_body] = "annotation_body",
    [sym_annotation_member] = "annotation_member",
    [sym_annotation_member_type] = "annotation_member_type",
    [sym_union_forward_dcl] = "union_forward_dcl",
    [sym_union_def] = "union_def",
    [sym_case] = "case",
    [sym_case_label] = "case_label",
    [sym_element_spec] = "element_spec",
    [sym_switch_type_spec] = "switch_type_spec",
    [sym_bitset_dcl] = "bitset_dcl",
    [sym_bitfield] = "bitfield",
    [sym_bitfield_spec] = "bitfield_spec",
    [sym_destination_type] = "destination_type",
    [sym_bitmask_dcl] = "bitmask_dcl",
    [sym_bit_value] = "bit_value",
    [sym_typedef_dcl] = "typedef_dcl",
    [sym_predefine] = "predefine",
    [sym_interface_dcl] = "interface_dcl",
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
    [sym_dds_request_topic] = "dds_request_topic",
    [sym_dds_reply_topic] = "dds_reply_topic",
    [sym_interface_anno] = "interface_anno",
    [sym_const_dcl] = "const_dcl",
    [sym_const_type] = "const_type",
    [sym_hashid] = "hashid",
    [sym_try_construct] = "try_construct",
    [sym_data_representation] = "data_representation",
    [sym_struct_modifier] = "struct_modifier",
    [sym_simple_declarator] = "simple_declarator",
    [sym_declarator] = "declarator",
    [sym_declarators] = "declarators",
    [sym_array_declarator] = "array_declarator",
    [sym_positive_int_const] = "positive_int_const",
    [sym_fixed_array_size] = "fixed_array_size",
    [sym_type_declarator] = "type_declarator",
    [sym_any_declarators] = "any_declarators",
    [sym_any_declarator] = "any_declarator",
    [sym_comment] = "comment",
    [aux_sym_specification_repeat1] = "specification_repeat1",
    [aux_sym_specification_repeat2] = "specification_repeat2",
    [aux_sym_except_dcl_repeat1] = "except_dcl_repeat1",
    [aux_sym_struct_def_repeat1] = "struct_def_repeat1",
    [aux_sym_member_repeat1] = "member_repeat1",
    [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
    [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
    [aux_sym_annotation_body_repeat1] = "annotation_body_repeat1",
    [aux_sym_union_def_repeat1] = "union_def_repeat1",
    [aux_sym_bitset_dcl_repeat1] = "bitset_dcl_repeat1",
    [aux_sym_bitfield_repeat1] = "bitfield_repeat1",
    [aux_sym_bitmask_dcl_repeat1] = "bitmask_dcl_repeat1",
    [aux_sym_interface_def_repeat1] = "interface_def_repeat1",
    [aux_sym_interface_inheritance_spec_repeat1] = "interface_inheritance_spec_repeat1",
    [aux_sym_interface_body_repeat1] = "interface_body_repeat1",
    [aux_sym_parameter_dcls_repeat1] = "parameter_dcls_repeat1",
    [aux_sym_raises_expr_repeat1] = "raises_expr_repeat1",
    [aux_sym_readonly_attr_declarator_repeat1] = "readonly_attr_declarator_repeat1",
    [aux_sym_attr_raises_expr_repeat1] = "attr_raises_expr_repeat1",
    [aux_sym_data_representation_repeat1] = "data_representation_repeat1",
    [aux_sym_declarators_repeat1] = "declarators_repeat1",
    [aux_sym_array_declarator_repeat1] = "array_declarator_repeat1",
    [aux_sym_any_declarators_repeat1] = "any_declarators_repeat1",
    [alias_sym_data_rep] = "data_rep",
    [alias_sym_hashid_value] = "hashid_value",
    [alias_sym_try_construct_value] = "try_construct_value",
};

static const TSSymbol ts_symbol_map[] = {
    [ts_builtin_sym_end] = ts_builtin_sym_end,
    [sym_signed_short_int] = sym_signed_short_int,
    [sym_signed_long_int] = sym_signed_long_int,
    [sym_signed_longlong_int] = sym_signed_longlong_int,
    [sym_boolean_type] = sym_boolean_type,
    [anon_sym_fixed] = anon_sym_fixed,
    [sym_octet_type] = sym_octet_type,
    [sym_unsigned_short_int] = sym_unsigned_short_int,
    [sym_unsigned_long_int] = sym_unsigned_long_int,
    [sym_unsigned_longlong_int] = sym_unsigned_longlong_int,
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
    [anon_sym_SEMI] = anon_sym_SEMI,
    [anon_sym_exception] = anon_sym_exception,
    [anon_sym_LBRACE] = anon_sym_LBRACE,
    [anon_sym_RBRACE] = anon_sym_RBRACE,
    [anon_sym_native] = anon_sym_native,
    [anon_sym_module] = anon_sym_module,
    [anon_sym_struct] = anon_sym_struct,
    [anon_sym_COLON] = anon_sym_COLON,
    [anon_sym_default] = anon_sym_default,
    [anon_sym_enum] = anon_sym_enum,
    [anon_sym_ATdefault_literal] = anon_sym_ATdefault_literal,
    [anon_sym_ATignore_literal_names] = anon_sym_ATignore_literal_names,
    [anon_sym_ATannotation] = anon_sym_ATannotation,
    [sym_any_const_type] = sym_any_const_type,
    [anon_sym_AT] = anon_sym_AT,
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
    [anon_sym_EQ] = anon_sym_EQ,
    [anon_sym_union] = anon_sym_union,
    [anon_sym_switch] = anon_sym_switch,
    [anon_sym_case] = anon_sym_case,
    [anon_sym_bitset] = anon_sym_bitset,
    [anon_sym_bitfield] = anon_sym_bitfield,
    [anon_sym_bitmask] = anon_sym_bitmask,
    [anon_sym_typedef] = anon_sym_typedef,
    [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
    [aux_sym_predefine_token1] = aux_sym_predefine_token1,
    [anon_sym_interface] = anon_sym_interface,
    [anon_sym_local] = anon_sym_local,
    [anon_sym_void] = anon_sym_void,
    [anon_sym_in] = anon_sym_in,
    [anon_sym_out] = anon_sym_out,
    [anon_sym_inout] = anon_sym_inout,
    [anon_sym_raises] = anon_sym_raises,
    [anon_sym_readonly] = anon_sym_readonly,
    [anon_sym_attribute] = anon_sym_attribute,
    [anon_sym_getraises] = anon_sym_getraises,
    [anon_sym_setraises] = anon_sym_setraises,
    [sym_dds_service] = sym_dds_service,
    [anon_sym_ATDDSRequestTopic] = anon_sym_ATDDSRequestTopic,
    [anon_sym_name] = anon_sym_name,
    [anon_sym_ATDDSReplyTopic] = anon_sym_ATDDSReplyTopic,
    [anon_sym_const] = anon_sym_const,
    [sym_optional] = sym_optional,
    [sym_key] = sym_key,
    [sym_must_understand] = sym_must_understand,
    [sym_non_serialized] = sym_non_serialized,
    [sym_id] = sym_id,
    [sym_external] = sym_external,
    [anon_sym_AThashid] = anon_sym_AThashid,
    [anon_sym_LPAREN_DQUOTE] = anon_sym_LPAREN_DQUOTE,
    [anon_sym_ATtry_construct] = anon_sym_ATtry_construct,
    [sym_final] = sym_final,
    [anon_sym_ATdata_representation] = anon_sym_ATdata_representation,
    [anon_sym_XCDR] = anon_sym_XCDR,
    [anon_sym_XCDR2] = anon_sym_XCDR2,
    [sym_identifier] = sym_identifier,
    [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
    [aux_sym_comment_token1] = aux_sym_comment_token1,
    [sym__eof] = sym__eof,
    [sym_specification] = sym_specification,
    [sym_unsigned_int] = sym_unsigned_int,
    [sym_fixed_pt_const_type] = sym_fixed_pt_const_type,
    [sym_integer_type] = sym_integer_type,
    [sym_signed_int] = sym_signed_int,
    [sym_floating_pt_type] = sym_floating_pt_type,
    [sym_char_type] = sym_char_type,
    [sym_scoped_name] = sym_scoped_name,
    [sym_string_type] = sym_string_type,
    [sym_type_spec] = sym_type_spec,
    [sym_simple_type_spec] = sym_simple_type_spec,
    [sym_base_type_spec] = sym_base_type_spec,
    [sym_fixed_pt_type] = sym_fixed_pt_type,
    [sym_template_type_spec] = sym_template_type_spec,
    [sym_sequence_type] = sym_sequence_type,
    [sym_map_type] = sym_map_type,
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
    [sym__definition] = sym__definition,
    [sym_except_dcl] = sym_except_dcl,
    [sym_native_dcl] = sym_native_dcl,
    [sym_module_dcl] = sym_module_dcl,
    [sym_struct_forward_dcl] = sym_struct_forward_dcl,
    [sym_struct_def] = sym_struct_def,
    [sym_member] = sym_member,
    [sym_default] = sym_default,
    [sym_enum_dcl] = sym_enum_dcl,
    [sym_enumerator] = sym_enumerator,
    [sym_enum_modifier] = sym_enum_modifier,
    [sym_enum_anno] = sym_enum_anno,
    [sym_annotation_dcl] = sym_annotation_dcl,
    [sym_annotation_body] = sym_annotation_body,
    [sym_annotation_member] = sym_annotation_member,
    [sym_annotation_member_type] = sym_annotation_member_type,
    [sym_union_forward_dcl] = sym_union_forward_dcl,
    [sym_union_def] = sym_union_def,
    [sym_case] = sym_case,
    [sym_case_label] = sym_case_label,
    [sym_element_spec] = sym_element_spec,
    [sym_switch_type_spec] = sym_switch_type_spec,
    [sym_bitset_dcl] = sym_bitset_dcl,
    [sym_bitfield] = sym_bitfield,
    [sym_bitfield_spec] = sym_bitfield_spec,
    [sym_destination_type] = sym_destination_type,
    [sym_bitmask_dcl] = sym_bitmask_dcl,
    [sym_bit_value] = sym_bit_value,
    [sym_typedef_dcl] = sym_typedef_dcl,
    [sym_predefine] = sym_predefine,
    [sym_interface_dcl] = sym_interface_dcl,
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
    [sym_dds_request_topic] = sym_dds_request_topic,
    [sym_dds_reply_topic] = sym_dds_reply_topic,
    [sym_interface_anno] = sym_interface_anno,
    [sym_const_dcl] = sym_const_dcl,
    [sym_const_type] = sym_const_type,
    [sym_hashid] = sym_hashid,
    [sym_try_construct] = sym_try_construct,
    [sym_data_representation] = sym_data_representation,
    [sym_struct_modifier] = sym_struct_modifier,
    [sym_simple_declarator] = sym_simple_declarator,
    [sym_declarator] = sym_declarator,
    [sym_declarators] = sym_declarators,
    [sym_array_declarator] = sym_array_declarator,
    [sym_positive_int_const] = sym_positive_int_const,
    [sym_fixed_array_size] = sym_fixed_array_size,
    [sym_type_declarator] = sym_type_declarator,
    [sym_any_declarators] = sym_any_declarators,
    [sym_any_declarator] = sym_any_declarator,
    [sym_comment] = sym_comment,
    [aux_sym_specification_repeat1] = aux_sym_specification_repeat1,
    [aux_sym_specification_repeat2] = aux_sym_specification_repeat2,
    [aux_sym_except_dcl_repeat1] = aux_sym_except_dcl_repeat1,
    [aux_sym_struct_def_repeat1] = aux_sym_struct_def_repeat1,
    [aux_sym_member_repeat1] = aux_sym_member_repeat1,
    [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
    [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
    [aux_sym_annotation_body_repeat1] = aux_sym_annotation_body_repeat1,
    [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
    [aux_sym_bitset_dcl_repeat1] = aux_sym_bitset_dcl_repeat1,
    [aux_sym_bitfield_repeat1] = aux_sym_bitfield_repeat1,
    [aux_sym_bitmask_dcl_repeat1] = aux_sym_bitmask_dcl_repeat1,
    [aux_sym_interface_def_repeat1] = aux_sym_interface_def_repeat1,
    [aux_sym_interface_inheritance_spec_repeat1] = aux_sym_interface_inheritance_spec_repeat1,
    [aux_sym_interface_body_repeat1] = aux_sym_interface_body_repeat1,
    [aux_sym_parameter_dcls_repeat1] = aux_sym_parameter_dcls_repeat1,
    [aux_sym_raises_expr_repeat1] = aux_sym_raises_expr_repeat1,
    [aux_sym_readonly_attr_declarator_repeat1] = aux_sym_readonly_attr_declarator_repeat1,
    [aux_sym_attr_raises_expr_repeat1] = aux_sym_attr_raises_expr_repeat1,
    [aux_sym_data_representation_repeat1] = aux_sym_data_representation_repeat1,
    [aux_sym_declarators_repeat1] = aux_sym_declarators_repeat1,
    [aux_sym_array_declarator_repeat1] = aux_sym_array_declarator_repeat1,
    [aux_sym_any_declarators_repeat1] = aux_sym_any_declarators_repeat1,
    [alias_sym_data_rep] = alias_sym_data_rep,
    [alias_sym_hashid_value] = alias_sym_hashid_value,
    [alias_sym_try_construct_value] = alias_sym_try_construct_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
    [ts_builtin_sym_end] = {
        .visible = false,
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
    [anon_sym_SEMI] = {
        .visible = true,
        .named = false,
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
    [anon_sym_native] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_module] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_struct] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COLON] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_default] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_enum] = {
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
    [anon_sym_ATannotation] = {
        .visible = true,
        .named = false,
    },
    [sym_any_const_type] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_AT] = {
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
    [anon_sym_EQ] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_union] = {
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
    [anon_sym_typedef] = {
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
    [anon_sym_interface] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_local] = {
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
    [sym_dds_service] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_ATDDSRequestTopic] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_name] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATDDSReplyTopic] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_const] = {
        .visible = true,
        .named = false,
    },
    [sym_optional] = {
        .visible = true,
        .named = true,
    },
    [sym_key] = {
        .visible = true,
        .named = true,
    },
    [sym_must_understand] = {
        .visible = true,
        .named = true,
    },
    [sym_non_serialized] = {
        .visible = true,
        .named = true,
    },
    [sym_id] = {
        .visible = true,
        .named = true,
    },
    [sym_external] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_AThashid] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LPAREN_DQUOTE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATtry_construct] = {
        .visible = true,
        .named = false,
    },
    [sym_final] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_ATdata_representation] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_XCDR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_XCDR2] = {
        .visible = true,
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
    [sym__eof] = {
        .visible = false,
        .named = true,
    },
    [sym_specification] = {
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
    [sym__definition] = {
        .visible = false,
        .named = true,
    },
    [sym_except_dcl] = {
        .visible = true,
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
    [sym_typedef_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_predefine] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_dcl] = {
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
    [sym_dds_request_topic] = {
        .visible = true,
        .named = true,
    },
    [sym_dds_reply_topic] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_anno] = {
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
    [sym_hashid] = {
        .visible = true,
        .named = true,
    },
    [sym_try_construct] = {
        .visible = true,
        .named = true,
    },
    [sym_data_representation] = {
        .visible = true,
        .named = true,
    },
    [sym_struct_modifier] = {
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
    [sym_positive_int_const] = {
        .visible = true,
        .named = true,
    },
    [sym_fixed_array_size] = {
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
    [aux_sym_struct_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_member_repeat1] = {
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
    [aux_sym_annotation_body_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_union_def_repeat1] = {
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
    [aux_sym_attr_raises_expr_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_data_representation_repeat1] = {
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
    [aux_sym_any_declarators_repeat1] = {
        .visible = false,
        .named = false,
    },
    [alias_sym_data_rep] = {
        .visible = true,
        .named = true,
    },
    [alias_sym_hashid_value] = {
        .visible = true,
        .named = true,
    },
    [alias_sym_try_construct_value] = {
        .visible = true,
        .named = true,
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
    [5] = { .index = 3, .length = 2 },
    [6] = { .index = 5, .length = 1 },
    [7] = { .index = 6, .length = 1 },
    [9] = { .index = 7, .length = 2 },
    [10] = { .index = 9, .length = 1 },
    [11] = { .index = 10, .length = 1 },
};

static const TSFieldMapEntry ts_field_map_entries[] = {
    [0] = { field_directive, 0 },
    [1] = { field_argument, 1 },
    { field_directive, 0 },
    [3] = { field_identifier, 1 },
    { field_type, 0 },
    [5] = { field_parent, 3 },
    [6] = { field_value, 1 },
    [7] = { field_identifier, 2 },
    { field_type, 1 },
    [9] = { field_value, 2 },
    [10] = { field_parent, 4 },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
    [3] = {
        [2] = alias_sym_data_rep,
    },
    [4] = {
        [1] = alias_sym_try_construct_value,
    },
    [8] = {
        [2] = alias_sym_hashid_value,
    },
};

static const uint16_t ts_non_terminal_alias_map[] = {
    aux_sym_data_representation_repeat1,
    2,
    aux_sym_data_representation_repeat1,
    alias_sym_data_rep,
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
    [42] = 37,
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
    [59] = 55,
    [60] = 60,
    [61] = 61,
    [62] = 62,
    [63] = 62,
    [64] = 64,
    [65] = 65,
    [66] = 66,
    [67] = 67,
    [68] = 68,
    [69] = 64,
    [70] = 70,
    [71] = 71,
    [72] = 72,
    [73] = 73,
    [74] = 74,
    [75] = 72,
    [76] = 76,
    [77] = 77,
    [78] = 78,
    [79] = 79,
    [80] = 80,
    [81] = 81,
    [82] = 81,
    [83] = 83,
    [84] = 84,
    [85] = 84,
    [86] = 86,
    [87] = 87,
    [88] = 88,
    [89] = 88,
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
    [110] = 109,
    [111] = 111,
    [112] = 112,
    [113] = 113,
    [114] = 90,
    [115] = 91,
    [116] = 105,
    [117] = 106,
    [118] = 118,
    [119] = 108,
    [120] = 120,
    [121] = 107,
    [122] = 122,
    [123] = 123,
    [124] = 124,
    [125] = 125,
    [126] = 126,
    [127] = 111,
    [128] = 128,
    [129] = 129,
    [130] = 130,
    [131] = 112,
    [132] = 132,
    [133] = 133,
    [134] = 134,
    [135] = 120,
    [136] = 136,
    [137] = 137,
    [138] = 118,
    [139] = 139,
    [140] = 140,
    [141] = 141,
    [142] = 137,
    [143] = 143,
    [144] = 144,
    [145] = 145,
    [146] = 140,
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
    [164] = 126,
    [165] = 165,
    [166] = 166,
    [167] = 167,
    [168] = 124,
    [169] = 169,
    [170] = 170,
    [171] = 171,
    [172] = 172,
    [173] = 173,
    [174] = 174,
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
    [227] = 130,
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
    [241] = 90,
    [242] = 91,
    [243] = 243,
    [244] = 244,
    [245] = 245,
    [246] = 246,
    [247] = 224,
    [248] = 248,
    [249] = 249,
    [250] = 250,
    [251] = 251,
    [252] = 252,
    [253] = 253,
    [254] = 254,
    [255] = 255,
    [256] = 256,
    [257] = 213,
    [258] = 128,
    [259] = 259,
    [260] = 260,
    [261] = 261,
    [262] = 262,
    [263] = 263,
    [264] = 240,
    [265] = 251,
    [266] = 266,
    [267] = 267,
    [268] = 268,
    [269] = 269,
    [270] = 270,
    [271] = 271,
    [272] = 272,
    [273] = 134,
    [274] = 207,
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
    [426] = 207,
    [427] = 427,
    [428] = 428,
    [429] = 429,
    [430] = 430,
    [431] = 431,
    [432] = 432,
    [433] = 433,
    [434] = 434,
    [435] = 435,
    [436] = 332,
    [437] = 437,
    [438] = 438,
    [439] = 439,
    [440] = 304,
    [441] = 441,
    [442] = 442,
    [443] = 443,
    [444] = 444,
    [445] = 445,
    [446] = 446,
    [447] = 444,
    [448] = 301,
    [449] = 449,
    [450] = 450,
    [451] = 451,
    [452] = 452,
    [453] = 453,
    [454] = 314,
    [455] = 455,
    [456] = 456,
    [457] = 457,
    [458] = 431,
    [459] = 459,
    [460] = 390,
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
    [472] = 431,
    [473] = 438,
    [474] = 408,
    [475] = 387,
    [476] = 467,
    [477] = 477,
    [478] = 405,
    [479] = 479,
};

static inline bool sym_number_literal_character_set_1(int32_t c) {
    return (c < 'b' ? (c < 'L' ? (c < 'D' ? c == 'B' : c <= 'F') : (c <= 'L' || (c < 'W' ? c == 'U' : c <= 'W'))) : (c <= 'b' || (c < 'u' ? (c < 'l' ? (c >= 'd' && c <= 'f') : c <= 'l') : (c <= 'u' || c == 'w'))));
}

static inline bool sym_number_literal_character_set_2(int32_t c) {
    return (c < 'b' ? (c < 'L' ? (c < 'D' ? c == 'B' : (c <= 'D' || c == 'F')) : (c <= 'L' || (c < 'W' ? c == 'U' : c <= 'W'))) : (c <= 'b' || (c < 'l' ? (c < 'f' ? c == 'd' : c <= 'f') : (c <= 'l' || (c < 'w' ? c == 'u' : c <= 'w')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(450);
            if(lookahead == '"')
                ADVANCE(507);
            if(lookahead == '#')
                ADVANCE(126);
            if(lookahead == '$')
                ADVANCE(492);
            if(lookahead == '%')
                ADVANCE(501);
            if(lookahead == '\'')
                ADVANCE(509);
            if(lookahead == '(')
                ADVANCE(502);
            if(lookahead == ')')
                ADVANCE(503);
            if(lookahead == '*')
                ADVANCE(499);
            if(lookahead == '+')
                ADVANCE(495);
            if(lookahead == ',')
                ADVANCE(485);
            if(lookahead == '-')
                ADVANCE(497);
            if(lookahead == '/')
                ADVANCE(500);
            if(lookahead == ':')
                ADVANCE(587);
            if(lookahead == ';')
                ADVANCE(579);
            if(lookahead == '<')
                ADVANCE(482);
            if(lookahead == '=')
                ADVANCE(599);
            if(lookahead == '>')
                ADVANCE(484);
            if(lookahead == '@')
                ADVANCE(596);
            if(lookahead == 'F')
                ADVANCE(511);
            if(lookahead == 'L')
                ADVANCE(505);
            if(lookahead == 'T')
                ADVANCE(513);
            if(lookahead == 'X')
                ADVANCE(512);
            if(lookahead == '[')
                ADVANCE(597);
            if(lookahead == '\\')
                SKIP(443)
            if(lookahead == ']')
                ADVANCE(598);
            if(lookahead == '^')
                ADVANCE(491);
            if(lookahead == 'a')
                ADVANCE(525);
            if(lookahead == 'b')
                ADVANCE(524);
            if(lookahead == 'c')
                ADVANCE(514);
            if(lookahead == 'd')
                ADVANCE(520);
            if(lookahead == 'e')
                ADVANCE(528);
            if(lookahead == 'f')
                ADVANCE(523);
            if(lookahead == 'g')
                ADVANCE(522);
            if(lookahead == 'i')
                ADVANCE(526);
            if(lookahead == 'l')
                ADVANCE(529);
            if(lookahead == 'm')
                ADVANCE(515);
            if(lookahead == 'n')
                ADVANCE(516);
            if(lookahead == 'o')
                ADVANCE(519);
            if(lookahead == 'r')
                ADVANCE(517);
            if(lookahead == 's')
                ADVANCE(521);
            if(lookahead == 't')
                ADVANCE(531);
            if(lookahead == 'u')
                ADVANCE(527);
            if(lookahead == 'v')
                ADVANCE(530);
            if(lookahead == 'w')
                ADVANCE(518);
            if(lookahead == '{')
                ADVANCE(581);
            if(lookahead == '|')
                ADVANCE(490);
            if(lookahead == '}')
                ADVANCE(582);
            if(lookahead == '~')
                ADVANCE(504);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(510);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(43)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(43)
            if(lookahead == '\r')
                SKIP(1)
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(46)
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(46)
            if(lookahead == '\r')
                SKIP(3)
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(48)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(48)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(47)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(47)
            if(lookahead == '\r')
                SKIP(7)
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(49)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(49)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(37)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(37)
            if(lookahead == '\r')
                SKIP(11)
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(39)
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(39)
            if(lookahead == '\r')
                SKIP(13)
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(50)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(50)
            if(lookahead == '\r')
                SKIP(15)
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(40)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(40)
            if(lookahead == '\r')
                SKIP(17)
            END_STATE();
        case 19:
            if(lookahead == '\n')
                SKIP(42)
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(42)
            if(lookahead == '\r')
                SKIP(19)
            END_STATE();
        case 21:
            if(lookahead == '\n')
                SKIP(41)
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(41)
            if(lookahead == '\r')
                SKIP(21)
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(51)
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(51)
            if(lookahead == '\r')
                SKIP(23)
            END_STATE();
        case 25:
            if(lookahead == '\n')
                ADVANCE(566);
            if(lookahead == '\r')
                ADVANCE(28);
            if(lookahead == '/')
                ADVANCE(575);
            if(lookahead == '\\')
                ADVANCE(573);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(55)
            if(lookahead != 0)
                ADVANCE(576);
            END_STATE();
        case 26:
            if(lookahead == '\n')
                ADVANCE(566);
            if(lookahead == '\r')
                ADVANCE(27);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(33)
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(54)
            END_STATE();
        case 27:
            if(lookahead == '\n')
                ADVANCE(566);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(33)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(54)
            END_STATE();
        case 28:
            if(lookahead == '\n')
                ADVANCE(566);
            if(lookahead == '/')
                ADVANCE(575);
            if(lookahead == '\\')
                ADVANCE(573);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(55)
            if(lookahead != 0)
                ADVANCE(576);
            END_STATE();
        case 29:
            if(lookahead == '\n')
                SKIP(52)
            END_STATE();
        case 30:
            if(lookahead == '\n')
                SKIP(52)
            if(lookahead == '\r')
                SKIP(29)
            END_STATE();
        case 31:
            if(lookahead == '\n')
                ADVANCE(771);
            if(lookahead == '\r')
                ADVANCE(770);
            if(lookahead == '\\')
                ADVANCE(774);
            if(lookahead != 0)
                ADVANCE(773);
            END_STATE();
        case 32:
            if(lookahead == '\n')
                SKIP(54)
            END_STATE();
        case 33:
            if(lookahead == '\n')
                SKIP(54)
            if(lookahead == '\r')
                SKIP(32)
            END_STATE();
        case 34:
            if(lookahead == '\n')
                SKIP(53)
            END_STATE();
        case 35:
            if(lookahead == '\n')
                SKIP(53)
            if(lookahead == '\r')
                SKIP(34)
            END_STATE();
        case 36:
            if(lookahead == ' ')
                ADVANCE(257);
            END_STATE();
        case 37:
            if(lookahead == '"')
                ADVANCE(507);
            if(lookahead == '\'')
                ADVANCE(509);
            if(lookahead == '(')
                ADVANCE(502);
            if(lookahead == '+')
                ADVANCE(496);
            if(lookahead == '-')
                ADVANCE(498);
            if(lookahead == '.')
                ADVANCE(435);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '0')
                ADVANCE(543);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == 'F')
                ADVANCE(650);
            if(lookahead == 'L')
                ADVANCE(506);
            if(lookahead == 'T')
                ADVANCE(654);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == '~')
                ADVANCE(504);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(37)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 38:
            if(lookahead == '"')
                ADVANCE(642);
            END_STATE();
        case 39:
            if(lookahead == '$')
                ADVANCE(492);
            if(lookahead == '%')
                ADVANCE(501);
            if(lookahead == ')')
                ADVANCE(503);
            if(lookahead == '*')
                ADVANCE(499);
            if(lookahead == '+')
                ADVANCE(495);
            if(lookahead == ',')
                ADVANCE(485);
            if(lookahead == '-')
                ADVANCE(497);
            if(lookahead == '/')
                ADVANCE(500);
            if(lookahead == ':')
                ADVANCE(587);
            if(lookahead == ';')
                ADVANCE(579);
            if(lookahead == '<')
                ADVANCE(57);
            if(lookahead == '>')
                ADVANCE(484);
            if(lookahead == '@')
                ADVANCE(142);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == ']')
                ADVANCE(598);
            if(lookahead == '^')
                ADVANCE(491);
            if(lookahead == '{')
                ADVANCE(581);
            if(lookahead == '|')
                ADVANCE(490);
            if(lookahead == '}')
                ADVANCE(582);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(39)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 40:
            if(lookahead == '$')
                ADVANCE(492);
            if(lookahead == '%')
                ADVANCE(501);
            if(lookahead == '*')
                ADVANCE(499);
            if(lookahead == '+')
                ADVANCE(495);
            if(lookahead == '-')
                ADVANCE(497);
            if(lookahead == '/')
                ADVANCE(500);
            if(lookahead == '<')
                ADVANCE(57);
            if(lookahead == '>')
                ADVANCE(58);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == '^')
                ADVANCE(491);
            if(lookahead == 't')
                ADVANCE(764);
            if(lookahead == '|')
                ADVANCE(490);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(40)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 41:
            if(lookahead == ')')
                ADVANCE(503);
            if(lookahead == ',')
                ADVANCE(485);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == '<')
                ADVANCE(481);
            if(lookahead == '>')
                ADVANCE(483);
            if(lookahead == '\\')
                SKIP(22)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(41)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 42:
            if(lookahead == ')')
                ADVANCE(503);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == 'i')
                ADVANCE(264);
            if(lookahead == 'o')
                ADVANCE(411);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(42)
            END_STATE();
        case 43:
            if(lookahead == ',')
                ADVANCE(485);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == '<')
                ADVANCE(481);
            if(lookahead == '>')
                ADVANCE(483);
            if(lookahead == '@')
                ADVANCE(157);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(598);
            if(lookahead == 'b')
                ADVANCE(731);
            if(lookahead == 'c')
                ADVANCE(696);
            if(lookahead == 'd')
                ADVANCE(725);
            if(lookahead == 'f')
                ADVANCE(699);
            if(lookahead == 'l')
                ADVANCE(727);
            if(lookahead == 'm')
                ADVANCE(657);
            if(lookahead == 'o')
                ADVANCE(665);
            if(lookahead == 's')
                ADVANCE(676);
            if(lookahead == 'u')
                ADVANCE(712);
            if(lookahead == 'w')
                ADVANCE(669);
            if(lookahead == '}')
                ADVANCE(582);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(43)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 44:
            if(lookahead == '.')
                ADVANCE(435);
            if(lookahead == '0')
                ADVANCE(540);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(542);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(556);
            END_STATE();
        case 45:
            if(lookahead == '/')
                ADVANCE(767);
            END_STATE();
        case 46:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == '@')
                ADVANCE(141);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'b')
                ADVANCE(731);
            if(lookahead == 'c')
                ADVANCE(696);
            if(lookahead == 'd')
                ADVANCE(725);
            if(lookahead == 'e')
                ADVANCE(720);
            if(lookahead == 'f')
                ADVANCE(699);
            if(lookahead == 'l')
                ADVANCE(727);
            if(lookahead == 'm')
                ADVANCE(657);
            if(lookahead == 'o')
                ADVANCE(665);
            if(lookahead == 's')
                ADVANCE(677);
            if(lookahead == 'u')
                ADVANCE(715);
            if(lookahead == 'w')
                ADVANCE(669);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(46)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 47:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == '@')
                ADVANCE(229);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'a')
                ADVANCE(719);
            if(lookahead == 'b')
                ADVANCE(731);
            if(lookahead == 'c')
                ADVANCE(696);
            if(lookahead == 'd')
                ADVANCE(725);
            if(lookahead == 'e')
                ADVANCE(720);
            if(lookahead == 'f')
                ADVANCE(699);
            if(lookahead == 'l')
                ADVANCE(727);
            if(lookahead == 'o')
                ADVANCE(665);
            if(lookahead == 's')
                ADVANCE(676);
            if(lookahead == 'u')
                ADVANCE(712);
            if(lookahead == 'w')
                ADVANCE(669);
            if(lookahead == '}')
                ADVANCE(582);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(47)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 48:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(754);
            if(lookahead == 'b')
                ADVANCE(731);
            if(lookahead == 'c')
                ADVANCE(696);
            if(lookahead == 'd')
                ADVANCE(725);
            if(lookahead == 'f')
                ADVANCE(699);
            if(lookahead == 'l')
                ADVANCE(727);
            if(lookahead == 'm')
                ADVANCE(657);
            if(lookahead == 'o')
                ADVANCE(665);
            if(lookahead == 'r')
                ADVANCE(687);
            if(lookahead == 's')
                ADVANCE(676);
            if(lookahead == 'u')
                ADVANCE(712);
            if(lookahead == 'v')
                ADVANCE(730);
            if(lookahead == 'w')
                ADVANCE(669);
            if(lookahead == '}')
                ADVANCE(582);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(48)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 49:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == 'b')
                ADVANCE(731);
            if(lookahead == 'c')
                ADVANCE(696);
            if(lookahead == 'd')
                ADVANCE(725);
            if(lookahead == 'f')
                ADVANCE(699);
            if(lookahead == 'l')
                ADVANCE(727);
            if(lookahead == 'o')
                ADVANCE(665);
            if(lookahead == 's')
                ADVANCE(676);
            if(lookahead == 'u')
                ADVANCE(712);
            if(lookahead == 'w')
                ADVANCE(669);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(49)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 50:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(56);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == 'b')
                ADVANCE(731);
            if(lookahead == 'c')
                ADVANCE(696);
            if(lookahead == 'l')
                ADVANCE(734);
            if(lookahead == 's')
                ADVANCE(697);
            if(lookahead == 'u')
                ADVANCE(712);
            if(lookahead == 'w')
                ADVANCE(670);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(50)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 51:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ';')
                ADVANCE(579);
            if(lookahead == '\\')
                SKIP(24)
            if(lookahead == 's')
                ADVANCE(760);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(51)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 52:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(30)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(52)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(508);
            END_STATE();
        case 53:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(35)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(53)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(510);
            END_STATE();
        case 54:
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == '\\')
                SKIP(33)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(54)
            END_STATE();
        case 55:
            if(lookahead == '/')
                ADVANCE(575);
            if(lookahead == '\\')
                ADVANCE(573);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(55)
            if(lookahead != 0)
                ADVANCE(576);
            END_STATE();
        case 56:
            if(lookahead == ':')
                ADVANCE(476);
            END_STATE();
        case 57:
            if(lookahead == '<')
                ADVANCE(494);
            END_STATE();
        case 58:
            if(lookahead == '>')
                ADVANCE(493);
            END_STATE();
        case 59:
            if(lookahead == 'C')
                ADVANCE(60);
            END_STATE();
        case 60:
            if(lookahead == 'D')
                ADVANCE(66);
            END_STATE();
        case 61:
            if(lookahead == 'D')
                ADVANCE(62);
            if(lookahead == 'a')
                ADVANCE(284);
            if(lookahead == 'd')
                ADVANCE(100);
            if(lookahead == 'f')
                ADVANCE(223);
            if(lookahead == 'i')
                ADVANCE(203);
            END_STATE();
        case 62:
            if(lookahead == 'D')
                ADVANCE(68);
            END_STATE();
        case 63:
            if(lookahead == 'E')
                ADVANCE(532);
            END_STATE();
        case 64:
            if(lookahead == 'E')
                ADVANCE(534);
            END_STATE();
        case 65:
            if(lookahead == 'L')
                ADVANCE(69);
            END_STATE();
        case 66:
            if(lookahead == 'R')
                ADVANCE(646);
            END_STATE();
        case 67:
            if(lookahead == 'R')
                ADVANCE(152);
            if(lookahead == 'S')
                ADVANCE(176);
            END_STATE();
        case 68:
            if(lookahead == 'S')
                ADVANCE(67);
            END_STATE();
        case 69:
            if(lookahead == 'S')
                ADVANCE(64);
            END_STATE();
        case 70:
            if(lookahead == 'T')
                ADVANCE(302);
            END_STATE();
        case 71:
            if(lookahead == 'T')
                ADVANCE(313);
            END_STATE();
        case 72:
            if(lookahead == 'U')
                ADVANCE(63);
            END_STATE();
        case 73:
            if(lookahead == '_')
                ADVANCE(121);
            END_STATE();
        case 74:
            if(lookahead == '_')
                ADVANCE(256);
            END_STATE();
        case 75:
            if(lookahead == '_')
                ADVANCE(414);
            END_STATE();
        case 76:
            if(lookahead == '_')
                ADVANCE(347);
            END_STATE();
        case 77:
            if(lookahead == '_')
                ADVANCE(285);
            END_STATE();
        case 78:
            if(lookahead == '_')
                ADVANCE(366);
            END_STATE();
        case 79:
            if(lookahead == '_')
                ADVANCE(259);
            END_STATE();
        case 80:
            if(lookahead == 'a')
                ADVANCE(351);
            if(lookahead == 'o')
                ADVANCE(271);
            END_STATE();
        case 81:
            if(lookahead == 'a')
                ADVANCE(261);
            END_STATE();
        case 82:
            if(lookahead == 'a')
                ADVANCE(227);
            END_STATE();
        case 83:
            if(lookahead == 'a')
                ADVANCE(76);
            END_STATE();
        case 84:
            if(lookahead == 'a')
                ADVANCE(136);
            END_STATE();
        case 85:
            if(lookahead == 'a')
                ADVANCE(239);
            END_STATE();
        case 86:
            if(lookahead == 'a')
                ADVANCE(263);
            END_STATE();
        case 87:
            if(lookahead == 'a')
                ADVANCE(352);
            END_STATE();
        case 88:
            if(lookahead == 'a')
                ADVANCE(330);
            END_STATE();
        case 89:
            if(lookahead == 'a')
                ADVANCE(410);
            END_STATE();
        case 90:
            if(lookahead == 'a')
                ADVANCE(331);
            END_STATE();
        case 91:
            if(lookahead == 'a')
                ADVANCE(372);
            END_STATE();
        case 92:
            if(lookahead == 'a')
                ADVANCE(267);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(240);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(357);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(245);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(241);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(242);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(253);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(243);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(390);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(283);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(384);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(417);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(397);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(124);
            END_STATE();
        case 106:
            if(lookahead == 'a')
                ADVANCE(399);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(231);
            END_STATE();
        case 108:
            if(lookahead == 'a')
                ADVANCE(233);
            END_STATE();
        case 109:
            if(lookahead == 'b')
                ADVANCE(416);
            END_STATE();
        case 110:
            if(lookahead == 'b')
                ADVANCE(250);
            END_STATE();
        case 111:
            if(lookahead == 'b')
                ADVANCE(254);
            END_STATE();
        case 112:
            if(lookahead == 'c')
                ADVANCE(633);
            END_STATE();
        case 113:
            if(lookahead == 'c')
                ADVANCE(631);
            END_STATE();
        case 114:
            if(lookahead == 'c')
                ADVANCE(204);
            END_STATE();
        case 115:
            if(lookahead == 'c')
                ADVANCE(160);
            END_STATE();
        case 116:
            if(lookahead == 'c')
                ADVANCE(386);
            END_STATE();
        case 117:
            if(lookahead == 'c')
                ADVANCE(85);
            END_STATE();
        case 118:
            if(lookahead == 'c')
                ADVANCE(85);
            if(lookahead == 'n')
                ADVANCE(195);
            END_STATE();
        case 119:
            if(lookahead == 'c')
                ADVANCE(85);
            if(lookahead == 'n')
                ADVANCE(201);
            END_STATE();
        case 120:
            if(lookahead == 'c')
                ADVANCE(377);
            END_STATE();
        case 121:
            if(lookahead == 'c')
                ADVANCE(312);
            END_STATE();
        case 122:
            if(lookahead == 'c')
                ADVANCE(149);
            END_STATE();
        case 123:
            if(lookahead == 'c')
                ADVANCE(380);
            END_STATE();
        case 124:
            if(lookahead == 'c')
                ADVANCE(153);
            END_STATE();
        case 125:
            if(lookahead == 'c')
                ADVANCE(154);
            END_STATE();
        case 126:
            if(lookahead == 'd')
                ADVANCE(567);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(433);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(572);
            END_STATE();
        case 127:
            if(lookahead == 'd')
                ADVANCE(618);
            END_STATE();
        case 128:
            if(lookahead == 'd')
                ADVANCE(460);
            END_STATE();
        case 129:
            if(lookahead == 'd')
                ADVANCE(606);
            END_STATE();
        case 130:
            if(lookahead == 'd')
                ADVANCE(36);
            END_STATE();
        case 131:
            if(lookahead == 'd')
                ADVANCE(639);
            END_STATE();
        case 132:
            if(lookahead == 'd')
                ADVANCE(641);
            END_STATE();
        case 133:
            if(lookahead == 'd')
                ADVANCE(638);
            END_STATE();
        case 134:
            if(lookahead == 'd')
                ADVANCE(637);
            END_STATE();
        case 135:
            if(lookahead == 'd')
                ADVANCE(418);
            END_STATE();
        case 136:
            if(lookahead == 'd')
                ADVANCE(301);
            END_STATE();
        case 137:
            if(lookahead == 'd')
                ADVANCE(319);
            if(lookahead == 'l')
                ADVANCE(315);
            END_STATE();
        case 138:
            if(lookahead == 'd')
                ADVANCE(156);
            END_STATE();
        case 139:
            if(lookahead == 'd')
                ADVANCE(179);
            END_STATE();
        case 140:
            if(lookahead == 'd')
                ADVANCE(159);
            END_STATE();
        case 141:
            if(lookahead == 'd')
                ADVANCE(100);
            if(lookahead == 'f')
                ADVANCE(223);
            if(lookahead == 'i')
                ADVANCE(203);
            END_STATE();
        case 142:
            if(lookahead == 'd')
                ADVANCE(187);
            END_STATE();
        case 143:
            if(lookahead == 'e')
                ADVANCE(190);
            END_STATE();
        case 144:
            if(lookahead == 'e')
                ADVANCE(604);
            END_STATE();
        case 145:
            if(lookahead == 'e')
                ADVANCE(632);
            END_STATE();
        case 146:
            if(lookahead == 'e')
                ADVANCE(469);
            END_STATE();
        case 147:
            if(lookahead == 'e')
                ADVANCE(584);
            END_STATE();
        case 148:
            if(lookahead == 'e')
                ADVANCE(583);
            END_STATE();
        case 149:
            if(lookahead == 'e')
                ADVANCE(486);
            END_STATE();
        case 150:
            if(lookahead == 'e')
                ADVANCE(626);
            END_STATE();
        case 151:
            if(lookahead == 'e')
                ADVANCE(471);
            END_STATE();
        case 152:
            if(lookahead == 'e')
                ADVANCE(321);
            END_STATE();
        case 153:
            if(lookahead == 'e')
                ADVANCE(616);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(630);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(610);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(189);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(425);
            if(lookahead == 'h')
                ADVANCE(94);
            if(lookahead == 'i')
                ADVANCE(131);
            if(lookahead == 'k')
                ADVANCE(165);
            if(lookahead == 'm')
                ADVANCE(419);
            if(lookahead == 'n')
                ADVANCE(310);
            if(lookahead == 'o')
                ADVANCE(327);
            if(lookahead == 't')
                ADVANCE(333);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(74);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(193);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(322);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(353);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(326);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(128);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(247);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(429);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(354);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(290);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(138);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(355);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(356);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(130);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(92);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(346);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(374);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(133);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(332);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(376);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(343);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(349);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(295);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(385);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(362);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(339);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(341);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(342);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(365);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(194);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(405);
            if(lookahead == 'h')
                ADVANCE(303);
            if(lookahead == 't')
                ADVANCE(336);
            END_STATE();
        case 189:
            if(lookahead == 'f')
                ADVANCE(608);
            END_STATE();
        case 190:
            if(lookahead == 'f')
                ADVANCE(89);
            END_STATE();
        case 191:
            if(lookahead == 'f')
                ADVANCE(222);
            if(lookahead == 'm')
                ADVANCE(87);
            if(lookahead == 's')
                ADVANCE(177);
            END_STATE();
        case 192:
            if(lookahead == 'f')
                ADVANCE(105);
            END_STATE();
        case 193:
            if(lookahead == 'f')
                ADVANCE(226);
            END_STATE();
        case 194:
            if(lookahead == 'f')
                ADVANCE(103);
            END_STATE();
        case 195:
            if(lookahead == 'g')
                ADVANCE(453);
            END_STATE();
        case 196:
            if(lookahead == 'g')
                ADVANCE(477);
            END_STATE();
        case 197:
            if(lookahead == 'g')
                ADVANCE(479);
            END_STATE();
        case 198:
            if(lookahead == 'g')
                ADVANCE(457);
            END_STATE();
        case 199:
            if(lookahead == 'g')
                ADVANCE(465);
            END_STATE();
        case 200:
            if(lookahead == 'g')
                ADVANCE(466);
            END_STATE();
        case 201:
            if(lookahead == 'g')
                ADVANCE(455);
            END_STATE();
        case 202:
            if(lookahead == 'g')
                ADVANCE(294);
            END_STATE();
        case 203:
            if(lookahead == 'g')
                ADVANCE(291);
            END_STATE();
        case 204:
            if(lookahead == 'h')
                ADVANCE(602);
            END_STATE();
        case 205:
            if(lookahead == 'h')
                ADVANCE(221);
            END_STATE();
        case 206:
            if(lookahead == 'h')
                ADVANCE(90);
            END_STATE();
        case 207:
            if(lookahead == 'h')
                ADVANCE(314);
            END_STATE();
        case 208:
            if(lookahead == 'i')
                ADVANCE(423);
            END_STATE();
        case 209:
            if(lookahead == 'i')
                ADVANCE(432);
            END_STATE();
        case 210:
            if(lookahead == 'i')
                ADVANCE(369);
            if(lookahead == 'o')
                ADVANCE(298);
            END_STATE();
        case 211:
            if(lookahead == 'i')
                ADVANCE(273);
            if(lookahead == 'u')
                ADVANCE(120);
            END_STATE();
        case 212:
            if(lookahead == 'i')
                ADVANCE(109);
            END_STATE();
        case 213:
            if(lookahead == 'i')
                ADVANCE(202);
            END_STATE();
        case 214:
            if(lookahead == 'i')
                ADVANCE(127);
            END_STATE();
        case 215:
            if(lookahead == 'i')
                ADVANCE(299);
            END_STATE();
        case 216:
            if(lookahead == 'i')
                ADVANCE(299);
            if(lookahead == 's')
                ADVANCE(213);
            END_STATE();
        case 217:
            if(lookahead == 'i')
                ADVANCE(112);
            END_STATE();
        case 218:
            if(lookahead == 'i')
                ADVANCE(383);
            END_STATE();
        case 219:
            if(lookahead == 'i')
                ADVANCE(113);
            END_STATE();
        case 220:
            if(lookahead == 'i')
                ADVANCE(305);
            END_STATE();
        case 221:
            if(lookahead == 'i')
                ADVANCE(132);
            END_STATE();
        case 222:
            if(lookahead == 'i')
                ADVANCE(164);
            END_STATE();
        case 223:
            if(lookahead == 'i')
                ADVANCE(282);
            END_STATE();
        case 224:
            if(lookahead == 'i')
                ADVANCE(98);
            END_STATE();
        case 225:
            if(lookahead == 'i')
                ADVANCE(381);
            END_STATE();
        case 226:
            if(lookahead == 'i')
                ADVANCE(289);
            END_STATE();
        case 227:
            if(lookahead == 'i')
                ADVANCE(359);
            END_STATE();
        case 228:
            if(lookahead == 'i')
                ADVANCE(274);
            END_STATE();
        case 229:
            if(lookahead == 'i')
                ADVANCE(203);
            END_STATE();
        case 230:
            if(lookahead == 'i')
                ADVANCE(307);
            END_STATE();
        case 231:
            if(lookahead == 'i')
                ADVANCE(360);
            END_STATE();
        case 232:
            if(lookahead == 'i')
                ADVANCE(309);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(361);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(125);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(394);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(311);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(404);
            END_STATE();
        case 238:
            if(lookahead == 'k')
                ADVANCE(607);
            END_STATE();
        case 239:
            if(lookahead == 'l')
                ADVANCE(617);
            END_STATE();
        case 240:
            if(lookahead == 'l')
                ADVANCE(644);
            END_STATE();
        case 241:
            if(lookahead == 'l')
                ADVANCE(640);
            END_STATE();
        case 242:
            if(lookahead == 'l')
                ADVANCE(635);
            END_STATE();
        case 243:
            if(lookahead == 'l')
                ADVANCE(591);
            END_STATE();
        case 244:
            if(lookahead == 'l')
                ADVANCE(427);
            END_STATE();
        case 245:
            if(lookahead == 'l')
                ADVANCE(77);
            END_STATE();
        case 246:
            if(lookahead == 'l')
                ADVANCE(428);
            END_STATE();
        case 247:
            if(lookahead == 'l')
                ADVANCE(129);
            END_STATE();
        case 248:
            if(lookahead == 'l')
                ADVANCE(172);
            END_STATE();
        case 249:
            if(lookahead == 'l')
                ADVANCE(315);
            END_STATE();
        case 250:
            if(lookahead == 'l')
                ADVANCE(146);
            END_STATE();
        case 251:
            if(lookahead == 'l')
                ADVANCE(147);
            END_STATE();
        case 252:
            if(lookahead == 'l')
                ADVANCE(378);
            END_STATE();
        case 253:
            if(lookahead == 'l')
                ADVANCE(209);
            END_STATE();
        case 254:
            if(lookahead == 'l')
                ADVANCE(151);
            END_STATE();
        case 255:
            if(lookahead == 'l')
                ADVANCE(406);
            END_STATE();
        case 256:
            if(lookahead == 'l')
                ADVANCE(235);
            END_STATE();
        case 257:
            if(lookahead == 'l')
                ADVANCE(316);
            if(lookahead == 's')
                ADVANCE(207);
            END_STATE();
        case 258:
            if(lookahead == 'l')
                ADVANCE(317);
            END_STATE();
        case 259:
            if(lookahead == 'l')
                ADVANCE(237);
            END_STATE();
        case 260:
            if(lookahead == 'm')
                ADVANCE(589);
            END_STATE();
        case 261:
            if(lookahead == 'm')
                ADVANCE(145);
            if(lookahead == 't')
                ADVANCE(208);
            END_STATE();
        case 262:
            if(lookahead == 'm')
                ADVANCE(87);
            if(lookahead == 's')
                ADVANCE(177);
            END_STATE();
        case 263:
            if(lookahead == 'm')
                ADVANCE(170);
            END_STATE();
        case 264:
            if(lookahead == 'n')
                ADVANCE(620);
            END_STATE();
        case 265:
            if(lookahead == 'n')
                ADVANCE(216);
            END_STATE();
        case 266:
            if(lookahead == 'n')
                ADVANCE(600);
            END_STATE();
        case 267:
            if(lookahead == 'n')
                ADVANCE(458);
            END_STATE();
        case 268:
            if(lookahead == 'n')
                ADVANCE(580);
            END_STATE();
        case 269:
            if(lookahead == 'n')
                ADVANCE(593);
            END_STATE();
        case 270:
            if(lookahead == 'n')
                ADVANCE(645);
            END_STATE();
        case 271:
            if(lookahead == 'n')
                ADVANCE(358);
            END_STATE();
        case 272:
            if(lookahead == 'n')
                ADVANCE(408);
            if(lookahead == 'x')
                ADVANCE(115);
            END_STATE();
        case 273:
            if(lookahead == 'n')
                ADVANCE(196);
            END_STATE();
        case 274:
            if(lookahead == 'n')
                ADVANCE(197);
            END_STATE();
        case 275:
            if(lookahead == 'n')
                ADVANCE(78);
            END_STATE();
        case 276:
            if(lookahead == 'n')
                ADVANCE(244);
            END_STATE();
        case 277:
            if(lookahead == 'n')
                ADVANCE(198);
            END_STATE();
        case 278:
            if(lookahead == 'n')
                ADVANCE(199);
            END_STATE();
        case 279:
            if(lookahead == 'n')
                ADVANCE(200);
            END_STATE();
        case 280:
            if(lookahead == 'n')
                ADVANCE(367);
            END_STATE();
        case 281:
            if(lookahead == 'n')
                ADVANCE(308);
            END_STATE();
        case 282:
            if(lookahead == 'n')
                ADVANCE(93);
            END_STATE();
        case 283:
            if(lookahead == 'n')
                ADVANCE(134);
            END_STATE();
        case 284:
            if(lookahead == 'n')
                ADVANCE(281);
            END_STATE();
        case 285:
            if(lookahead == 'n')
                ADVANCE(86);
            END_STATE();
        case 286:
            if(lookahead == 'n')
                ADVANCE(96);
            END_STATE();
        case 287:
            if(lookahead == 'n')
                ADVANCE(97);
            END_STATE();
        case 288:
            if(lookahead == 'n')
                ADVANCE(215);
            END_STATE();
        case 289:
            if(lookahead == 'n')
                ADVANCE(155);
            END_STATE();
        case 290:
            if(lookahead == 'n')
                ADVANCE(122);
            END_STATE();
        case 291:
            if(lookahead == 'n')
                ADVANCE(306);
            END_STATE();
        case 292:
            if(lookahead == 'n')
                ADVANCE(139);
            END_STATE();
        case 293:
            if(lookahead == 'n')
                ADVANCE(393);
            END_STATE();
        case 294:
            if(lookahead == 'n')
                ADVANCE(171);
            END_STATE();
        case 295:
            if(lookahead == 'n')
                ADVANCE(400);
            END_STATE();
        case 296:
            if(lookahead == 'o')
                ADVANCE(271);
            END_STATE();
        case 297:
            if(lookahead == 'o')
                ADVANCE(135);
            END_STATE();
        case 298:
            if(lookahead == 'o')
                ADVANCE(248);
            END_STATE();
        case 299:
            if(lookahead == 'o')
                ADVANCE(266);
            END_STATE();
        case 300:
            if(lookahead == 'o')
                ADVANCE(91);
            END_STATE();
        case 301:
            if(lookahead == 'o')
                ADVANCE(276);
            END_STATE();
        case 302:
            if(lookahead == 'o')
                ADVANCE(323);
            END_STATE();
        case 303:
            if(lookahead == 'o')
                ADVANCE(338);
            END_STATE();
        case 304:
            if(lookahead == 'o')
                ADVANCE(117);
            END_STATE();
        case 305:
            if(lookahead == 'o')
                ADVANCE(268);
            END_STATE();
        case 306:
            if(lookahead == 'o')
                ADVANCE(344);
            END_STATE();
        case 307:
            if(lookahead == 'o')
                ADVANCE(269);
            END_STATE();
        case 308:
            if(lookahead == 'o')
                ADVANCE(398);
            END_STATE();
        case 309:
            if(lookahead == 'o')
                ADVANCE(270);
            END_STATE();
        case 310:
            if(lookahead == 'o')
                ADVANCE(275);
            END_STATE();
        case 311:
            if(lookahead == 'o')
                ADVANCE(287);
            END_STATE();
        case 312:
            if(lookahead == 'o')
                ADVANCE(280);
            END_STATE();
        case 313:
            if(lookahead == 'o')
                ADVANCE(324);
            END_STATE();
        case 314:
            if(lookahead == 'o')
                ADVANCE(340);
            END_STATE();
        case 315:
            if(lookahead == 'o')
                ADVANCE(277);
            END_STATE();
        case 316:
            if(lookahead == 'o')
                ADVANCE(278);
            END_STATE();
        case 317:
            if(lookahead == 'o')
                ADVANCE(279);
            END_STATE();
        case 318:
            if(lookahead == 'o')
                ADVANCE(119);
            END_STATE();
        case 319:
            if(lookahead == 'o')
                ADVANCE(421);
            END_STATE();
        case 320:
            if(lookahead == 'p')
                ADVANCE(488);
            END_STATE();
        case 321:
            if(lookahead == 'p')
                ADVANCE(246);
            if(lookahead == 'q')
                ADVANCE(415);
            END_STATE();
        case 322:
            if(lookahead == 'p')
                ADVANCE(389);
            END_STATE();
        case 323:
            if(lookahead == 'p')
                ADVANCE(217);
            END_STATE();
        case 324:
            if(lookahead == 'p')
                ADVANCE(219);
            END_STATE();
        case 325:
            if(lookahead == 'p')
                ADVANCE(168);
            END_STATE();
        case 326:
            if(lookahead == 'p')
                ADVANCE(345);
            END_STATE();
        case 327:
            if(lookahead == 'p')
                ADVANCE(401);
            END_STATE();
        case 328:
            if(lookahead == 'q')
                ADVANCE(413);
            if(lookahead == 't')
                ADVANCE(350);
            END_STATE();
        case 329:
            if(lookahead == 'r')
                ADVANCE(211);
            END_STATE();
        case 330:
            if(lookahead == 'r')
                ADVANCE(472);
            END_STATE();
        case 331:
            if(lookahead == 'r')
                ADVANCE(474);
            END_STATE();
        case 332:
            if(lookahead == 'r')
                ADVANCE(422);
            END_STATE();
        case 333:
            if(lookahead == 'r')
                ADVANCE(431);
            END_STATE();
        case 334:
            if(lookahead == 'r')
                ADVANCE(212);
            END_STATE();
        case 335:
            if(lookahead == 'r')
                ADVANCE(107);
            END_STATE();
        case 336:
            if(lookahead == 'r')
                ADVANCE(409);
            END_STATE();
        case 337:
            if(lookahead == 'r')
                ADVANCE(228);
            END_STATE();
        case 338:
            if(lookahead == 'r')
                ADVANCE(375);
            END_STATE();
        case 339:
            if(lookahead == 'r')
                ADVANCE(95);
            END_STATE();
        case 340:
            if(lookahead == 'r')
                ADVANCE(379);
            END_STATE();
        case 341:
            if(lookahead == 'r')
                ADVANCE(224);
            END_STATE();
        case 342:
            if(lookahead == 'r')
                ADVANCE(99);
            END_STATE();
        case 343:
            if(lookahead == 'r')
                ADVANCE(286);
            END_STATE();
        case 344:
            if(lookahead == 'r')
                ADVANCE(158);
            END_STATE();
        case 345:
            if(lookahead == 'r')
                ADVANCE(186);
            END_STATE();
        case 346:
            if(lookahead == 'r')
                ADVANCE(192);
            END_STATE();
        case 347:
            if(lookahead == 'r')
                ADVANCE(162);
            END_STATE();
        case 348:
            if(lookahead == 'r')
                ADVANCE(420);
            END_STATE();
        case 349:
            if(lookahead == 'r')
                ADVANCE(364);
            END_STATE();
        case 350:
            if(lookahead == 'r')
                ADVANCE(108);
            END_STATE();
        case 351:
            if(lookahead == 's')
                ADVANCE(144);
            END_STATE();
        case 352:
            if(lookahead == 's')
                ADVANCE(238);
            END_STATE();
        case 353:
            if(lookahead == 's')
                ADVANCE(623);
            END_STATE();
        case 354:
            if(lookahead == 's')
                ADVANCE(628);
            END_STATE();
        case 355:
            if(lookahead == 's')
                ADVANCE(629);
            END_STATE();
        case 356:
            if(lookahead == 's')
                ADVANCE(592);
            END_STATE();
        case 357:
            if(lookahead == 's')
                ADVANCE(205);
            END_STATE();
        case 358:
            if(lookahead == 's')
                ADVANCE(371);
            END_STATE();
        case 359:
            if(lookahead == 's')
                ADVANCE(161);
            END_STATE();
        case 360:
            if(lookahead == 's')
                ADVANCE(166);
            END_STATE();
        case 361:
            if(lookahead == 's')
                ADVANCE(169);
            END_STATE();
        case 362:
            if(lookahead == 's')
                ADVANCE(402);
            END_STATE();
        case 363:
            if(lookahead == 's')
                ADVANCE(387);
            END_STATE();
        case 364:
            if(lookahead == 's')
                ADVANCE(392);
            END_STATE();
        case 365:
            if(lookahead == 's')
                ADVANCE(180);
            END_STATE();
        case 366:
            if(lookahead == 's')
                ADVANCE(184);
            END_STATE();
        case 367:
            if(lookahead == 's')
                ADVANCE(403);
            END_STATE();
        case 368:
            if(lookahead == 't')
                ADVANCE(382);
            END_STATE();
        case 369:
            if(lookahead == 't')
                ADVANCE(191);
            END_STATE();
        case 370:
            if(lookahead == 't')
                ADVANCE(621);
            END_STATE();
        case 371:
            if(lookahead == 't')
                ADVANCE(634);
            END_STATE();
        case 372:
            if(lookahead == 't')
                ADVANCE(467);
            END_STATE();
        case 373:
            if(lookahead == 't')
                ADVANCE(622);
            END_STATE();
        case 374:
            if(lookahead == 't')
                ADVANCE(462);
            END_STATE();
        case 375:
            if(lookahead == 't')
                ADVANCE(451);
            END_STATE();
        case 376:
            if(lookahead == 't')
                ADVANCE(605);
            END_STATE();
        case 377:
            if(lookahead == 't')
                ADVANCE(585);
            END_STATE();
        case 378:
            if(lookahead == 't')
                ADVANCE(588);
            END_STATE();
        case 379:
            if(lookahead == 't')
                ADVANCE(464);
            END_STATE();
        case 380:
            if(lookahead == 't')
                ADVANCE(643);
            END_STATE();
        case 381:
            if(lookahead == 't')
                ADVANCE(262);
            END_STATE();
        case 382:
            if(lookahead == 't')
                ADVANCE(334);
            END_STATE();
        case 383:
            if(lookahead == 't')
                ADVANCE(114);
            END_STATE();
        case 384:
            if(lookahead == 't')
                ADVANCE(208);
            END_STATE();
        case 385:
            if(lookahead == 't')
                ADVANCE(335);
            END_STATE();
        case 386:
            if(lookahead == 't')
                ADVANCE(174);
            END_STATE();
        case 387:
            if(lookahead == 't')
                ADVANCE(75);
            END_STATE();
        case 388:
            if(lookahead == 't')
                ADVANCE(336);
            END_STATE();
        case 389:
            if(lookahead == 't')
                ADVANCE(220);
            END_STATE();
        case 390:
            if(lookahead == 't')
                ADVANCE(83);
            END_STATE();
        case 391:
            if(lookahead == 't')
                ADVANCE(150);
            END_STATE();
        case 392:
            if(lookahead == 't')
                ADVANCE(101);
            END_STATE();
        case 393:
            if(lookahead == 't')
                ADVANCE(173);
            END_STATE();
        case 394:
            if(lookahead == 't')
                ADVANCE(183);
            END_STATE();
        case 395:
            if(lookahead == 't')
                ADVANCE(178);
            END_STATE();
        case 396:
            if(lookahead == 't')
                ADVANCE(337);
            END_STATE();
        case 397:
            if(lookahead == 't')
                ADVANCE(230);
            END_STATE();
        case 398:
            if(lookahead == 't')
                ADVANCE(104);
            END_STATE();
        case 399:
            if(lookahead == 't')
                ADVANCE(232);
            END_STATE();
        case 400:
            if(lookahead == 't')
                ADVANCE(106);
            END_STATE();
        case 401:
            if(lookahead == 't')
                ADVANCE(236);
            END_STATE();
        case 402:
            if(lookahead == 't')
                ADVANCE(71);
            END_STATE();
        case 403:
            if(lookahead == 't')
                ADVANCE(348);
            END_STATE();
        case 404:
            if(lookahead == 't')
                ADVANCE(185);
            END_STATE();
        case 405:
            if(lookahead == 't')
                ADVANCE(350);
            END_STATE();
        case 406:
            if(lookahead == 't')
                ADVANCE(79);
            END_STATE();
        case 407:
            if(lookahead == 'u')
                ADVANCE(110);
            END_STATE();
        case 408:
            if(lookahead == 'u')
                ADVANCE(260);
            END_STATE();
        case 409:
            if(lookahead == 'u')
                ADVANCE(120);
            END_STATE();
        case 410:
            if(lookahead == 'u')
                ADVANCE(252);
            END_STATE();
        case 411:
            if(lookahead == 'u')
                ADVANCE(370);
            END_STATE();
        case 412:
            if(lookahead == 'u')
                ADVANCE(373);
            END_STATE();
        case 413:
            if(lookahead == 'u')
                ADVANCE(167);
            END_STATE();
        case 414:
            if(lookahead == 'u')
                ADVANCE(292);
            END_STATE();
        case 415:
            if(lookahead == 'u')
                ADVANCE(182);
            END_STATE();
        case 416:
            if(lookahead == 'u')
                ADVANCE(391);
            END_STATE();
        case 417:
            if(lookahead == 'u')
                ADVANCE(255);
            END_STATE();
        case 418:
            if(lookahead == 'u')
                ADVANCE(251);
            END_STATE();
        case 419:
            if(lookahead == 'u')
                ADVANCE(363);
            END_STATE();
        case 420:
            if(lookahead == 'u')
                ADVANCE(123);
            END_STATE();
        case 421:
            if(lookahead == 'u')
                ADVANCE(111);
            END_STATE();
        case 422:
            if(lookahead == 'v')
                ADVANCE(234);
            END_STATE();
        case 423:
            if(lookahead == 'v')
                ADVANCE(148);
            END_STATE();
        case 424:
            if(lookahead == 'x')
                ADVANCE(163);
            END_STATE();
        case 425:
            if(lookahead == 'x')
                ADVANCE(395);
            END_STATE();
        case 426:
            if(lookahead == 'y')
                ADVANCE(594);
            END_STATE();
        case 427:
            if(lookahead == 'y')
                ADVANCE(624);
            END_STATE();
        case 428:
            if(lookahead == 'y')
                ADVANCE(70);
            END_STATE();
        case 429:
            if(lookahead == 'y')
                ADVANCE(636);
            END_STATE();
        case 430:
            if(lookahead == 'y')
                ADVANCE(325);
            END_STATE();
        case 431:
            if(lookahead == 'y')
                ADVANCE(73);
            END_STATE();
        case 432:
            if(lookahead == 'z')
                ADVANCE(175);
            END_STATE();
        case 433:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(433);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(572);
            END_STATE();
        case 434:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(548);
            END_STATE();
        case 435:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(536);
            END_STATE();
        case 436:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(542);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(556);
            END_STATE();
        case 437:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(550);
            END_STATE();
        case 438:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(556);
            END_STATE();
        case 439:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(538);
            END_STATE();
        case 440:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(773);
            if(lookahead == '\r')
                ADVANCE(775);
            if(lookahead == '\\')
                ADVANCE(774);
            END_STATE();
        case 441:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(576);
            END_STATE();
        case 442:
            if(eof)
                ADVANCE(450);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 443:
            if(eof)
                ADVANCE(450);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(442)
            END_STATE();
        case 444:
            if(eof)
                ADVANCE(450);
            if(lookahead == '\n')
                SKIP(448)
            END_STATE();
        case 445:
            if(eof)
                ADVANCE(450);
            if(lookahead == '\n')
                SKIP(448)
            if(lookahead == '\r')
                SKIP(444)
            END_STATE();
        case 446:
            if(eof)
                ADVANCE(450);
            if(lookahead == '\n')
                SKIP(449)
            END_STATE();
        case 447:
            if(eof)
                ADVANCE(450);
            if(lookahead == '\n')
                SKIP(449)
            if(lookahead == '\r')
                SKIP(446)
            END_STATE();
        case 448:
            if(eof)
                ADVANCE(450);
            if(lookahead == '#')
                ADVANCE(126);
            if(lookahead == '$')
                ADVANCE(492);
            if(lookahead == '%')
                ADVANCE(501);
            if(lookahead == '(')
                ADVANCE(38);
            if(lookahead == ')')
                ADVANCE(503);
            if(lookahead == '*')
                ADVANCE(499);
            if(lookahead == '+')
                ADVANCE(495);
            if(lookahead == ',')
                ADVANCE(485);
            if(lookahead == '-')
                ADVANCE(497);
            if(lookahead == '/')
                ADVANCE(500);
            if(lookahead == ':')
                ADVANCE(587);
            if(lookahead == ';')
                ADVANCE(579);
            if(lookahead == '<')
                ADVANCE(57);
            if(lookahead == '>')
                ADVANCE(484);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == 'X')
                ADVANCE(59);
            if(lookahead == '[')
                ADVANCE(597);
            if(lookahead == '\\')
                SKIP(445)
            if(lookahead == ']')
                ADVANCE(598);
            if(lookahead == '^')
                ADVANCE(491);
            if(lookahead == 'a')
                ADVANCE(368);
            if(lookahead == 'b')
                ADVANCE(210);
            if(lookahead == 'c')
                ADVANCE(80);
            if(lookahead == 'd')
                ADVANCE(143);
            if(lookahead == 'e')
                ADVANCE(272);
            if(lookahead == 'g')
                ADVANCE(181);
            if(lookahead == 'i')
                ADVANCE(293);
            if(lookahead == 'l')
                ADVANCE(318);
            if(lookahead == 'm')
                ADVANCE(297);
            if(lookahead == 'n')
                ADVANCE(81);
            if(lookahead == 'o')
                ADVANCE(116);
            if(lookahead == 'r')
                ADVANCE(82);
            if(lookahead == 's')
                ADVANCE(188);
            if(lookahead == 't')
                ADVANCE(430);
            if(lookahead == 'u')
                ADVANCE(265);
            if(lookahead == '|')
                ADVANCE(490);
            if(lookahead == '}')
                ADVANCE(582);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(448)
            END_STATE();
        case 449:
            if(eof)
                ADVANCE(450);
            if(lookahead == '#')
                ADVANCE(140);
            if(lookahead == '$')
                ADVANCE(492);
            if(lookahead == ')')
                ADVANCE(503);
            if(lookahead == ',')
                ADVANCE(485);
            if(lookahead == '/')
                ADVANCE(45);
            if(lookahead == ':')
                ADVANCE(587);
            if(lookahead == ';')
                ADVANCE(579);
            if(lookahead == '>')
                ADVANCE(483);
            if(lookahead == '@')
                ADVANCE(61);
            if(lookahead == '\\')
                SKIP(447)
            if(lookahead == ']')
                ADVANCE(598);
            if(lookahead == '^')
                ADVANCE(491);
            if(lookahead == 'b')
                ADVANCE(225);
            if(lookahead == 'c')
                ADVANCE(296);
            if(lookahead == 'e')
                ADVANCE(272);
            if(lookahead == 'i')
                ADVANCE(293);
            if(lookahead == 'l')
                ADVANCE(304);
            if(lookahead == 'm')
                ADVANCE(297);
            if(lookahead == 'n')
                ADVANCE(102);
            if(lookahead == 's')
                ADVANCE(388);
            if(lookahead == 't')
                ADVANCE(430);
            if(lookahead == 'u')
                ADVANCE(288);
            if(lookahead == '|')
                ADVANCE(490);
            if(lookahead == '}')
                ADVANCE(582);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(449)
            END_STATE();
        case 450:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(sym_signed_short_int);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(sym_signed_short_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(137);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(137);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(249);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(249);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(sym_signed_longlong_int);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(sym_unsigned_short_int);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(sym_unsigned_long_int);
            if(lookahead == ' ')
                ADVANCE(258);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(sym_unsigned_longlong_int);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(494);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(493);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(435);
            if(lookahead == '0')
                ADVANCE(544);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(548);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(435);
            if(lookahead == '0')
                ADVANCE(544);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(548);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(767);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(508);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(65);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'C')
                ADVANCE(60);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(72);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(351);
            if(lookahead == 'h')
                ADVANCE(88);
            if(lookahead == 'o')
                ADVANCE(271);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(320);
            if(lookahead == 'o')
                ADVANCE(135);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(261);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(227);
            if(lookahead == 'e')
                ADVANCE(84);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(206);
            if(lookahead == 's')
                ADVANCE(396);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(386);
            if(lookahead == 'u')
                ADVANCE(370);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(190);
            if(lookahead == 'o')
                ADVANCE(407);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(328);
            if(lookahead == 'h')
                ADVANCE(303);
            if(lookahead == 't')
                ADVANCE(329);
            if(lookahead == 'w')
                ADVANCE(218);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(385);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(424);
            if(lookahead == 'l')
                ADVANCE(300);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(369);
            if(lookahead == 'o')
                ADVANCE(298);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(426);
            if(lookahead == 't')
                ADVANCE(382);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(620);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(216);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(408);
            if(lookahead == 'x')
                ADVANCE(115);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(118);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(214);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'y')
                ADVANCE(325);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(435);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(560);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(536);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(565);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(439);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(537);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(537);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(439);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(538);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(538);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(436);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(553);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(551);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(559);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(765);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(554);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(554);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(541);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(436);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(555);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(552);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(560);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(438);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(556);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(556);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(542);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(436);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(551);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(559);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(554);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(554);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(541);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(436);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(552);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(560);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(556);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(556);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(542);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(434);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(557);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(649);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(559);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(434);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(558);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(44);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(560);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(548);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(434);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(562);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(765);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(559);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(434);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(563);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(438);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(560);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(548);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(434);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(559);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(564);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(434);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(560);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(548);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(565);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(439);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(549);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(560);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(550);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(550);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(549);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(560);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(550);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(550);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(438);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(439);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(551);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(559);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(554);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(554);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(438);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(439);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(552);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(560);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(556);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(556);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(438);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(551);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(559);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(554);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(554);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(541);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(438);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(551);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(559);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(554);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(554);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(438);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(552);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(560);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(556);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(556);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(542);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(438);
            if(lookahead == '.')
                ADVANCE(561);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(552);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(560);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(556);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(556);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(435);
            if(lookahead == '0')
                ADVANCE(545);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(564);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(435);
            if(lookahead == '0')
                ADVANCE(546);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(548);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(565);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(439);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(537);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(537);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(439);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(538);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(538);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(549);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(560);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(550);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(550);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(564);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(548);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(565);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(565);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(572);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(611);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(572);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(572);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(571);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(572);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(568);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(572);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(572);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(55)
            if(lookahead == '\r')
                ADVANCE(574);
            if(lookahead == '/')
                ADVANCE(441);
            if(lookahead == '\\')
                ADVANCE(577);
            if(lookahead != 0)
                ADVANCE(576);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(55)
            if(lookahead == '/')
                ADVANCE(441);
            if(lookahead == '\\')
                ADVANCE(577);
            if(lookahead != 0)
                ADVANCE(576);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(767);
            if(lookahead == '\\')
                ADVANCE(577);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(576);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(441);
            if(lookahead == '\\')
                ADVANCE(577);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(576);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(576);
            if(lookahead == '\r')
                ADVANCE(578);
            if(lookahead == '/')
                ADVANCE(441);
            if(lookahead == '\\')
                ADVANCE(577);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(576);
            if(lookahead == '/')
                ADVANCE(441);
            if(lookahead == '\\')
                ADVANCE(577);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(sym_any_const_type);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(sym_any_const_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(572);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(615);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(615);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(614);
            if(lookahead == '\\')
                ADVANCE(612);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(613);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(615);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(769);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(615);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(615);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(412);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(647);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(257);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(435);
            if(lookahead == '0')
                ADVANCE(539);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(541);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(554);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(533);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(535);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(655);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(656);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(652);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(651);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(735);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(746);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(675);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(740);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(714);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(710);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(680);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(698);
            if(lookahead == 's')
                ADVANCE(755);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(461);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(648);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(619);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(682);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(737);
            if(lookahead == 'h')
                ADVANCE(729);
            if(lookahead == 't')
                ADVANCE(738);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(737);
            if(lookahead == 'h')
                ADVANCE(729);
            if(lookahead == 't')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(671);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(470);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(487);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(627);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(689);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(672);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(717);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(747);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(660);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(674);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(609);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(454);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(478);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(456);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(723);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(603);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(658);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(729);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(661);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(761);
            if(lookahead == 'l')
                ADVANCE(728);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(663);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(721);
            if(lookahead == 'u')
                ADVANCE(667);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(721);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(673);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(732);
            if(lookahead == 's')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(722);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(762);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(684);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(679);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(590);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(459);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(705);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(668);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(757);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(691);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(692);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(683);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(693);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(709);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(713);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(659);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(726);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(718);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(724);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(489);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(703);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(473);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(475);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(702);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(468);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(463);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(452);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(586);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(666);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(681);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(753);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(664);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(685);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(595);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(554);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(766);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(440);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(773);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(615);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(771);
            if(lookahead == '\\')
                ADVANCE(440);
            if(lookahead != 0)
                ADVANCE(773);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(772);
            if(lookahead == '\\')
                ADVANCE(31);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(771);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(773);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(768);
            if(lookahead == '\\')
                ADVANCE(440);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(773);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(440);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(773);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(773);
            if(lookahead == '\r')
                ADVANCE(775);
            if(lookahead == '\\')
                ADVANCE(774);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(773);
            if(lookahead == '\\')
                ADVANCE(440);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 448 },
    [2] = { .lex_state = 448 },
    [3] = { .lex_state = 43 },
    [4] = { .lex_state = 43 },
    [5] = { .lex_state = 43 },
    [6] = { .lex_state = 43 },
    [7] = { .lex_state = 449 },
    [8] = { .lex_state = 43 },
    [9] = { .lex_state = 43 },
    [10] = { .lex_state = 43 },
    [11] = { .lex_state = 43 },
    [12] = { .lex_state = 43 },
    [13] = { .lex_state = 43 },
    [14] = { .lex_state = 43 },
    [15] = { .lex_state = 449 },
    [16] = { .lex_state = 449 },
    [17] = { .lex_state = 449 },
    [18] = { .lex_state = 46 },
    [19] = { .lex_state = 449 },
    [20] = { .lex_state = 43 },
    [21] = { .lex_state = 48 },
    [22] = { .lex_state = 48 },
    [23] = { .lex_state = 48 },
    [24] = { .lex_state = 48 },
    [25] = { .lex_state = 47 },
    [26] = { .lex_state = 47 },
    [27] = { .lex_state = 47 },
    [28] = { .lex_state = 43 },
    [29] = { .lex_state = 43 },
    [30] = { .lex_state = 43 },
    [31] = { .lex_state = 43 },
    [32] = { .lex_state = 43 },
    [33] = { .lex_state = 43 },
    [34] = { .lex_state = 43 },
    [35] = { .lex_state = 43 },
    [36] = { .lex_state = 43 },
    [37] = { .lex_state = 49 },
    [38] = { .lex_state = 43 },
    [39] = { .lex_state = 43 },
    [40] = { .lex_state = 43 },
    [41] = { .lex_state = 43 },
    [42] = { .lex_state = 49 },
    [43] = { .lex_state = 43 },
    [44] = { .lex_state = 43 },
    [45] = { .lex_state = 43 },
    [46] = { .lex_state = 43 },
    [47] = { .lex_state = 37 },
    [48] = { .lex_state = 37 },
    [49] = { .lex_state = 37 },
    [50] = { .lex_state = 37 },
    [51] = { .lex_state = 37 },
    [52] = { .lex_state = 37 },
    [53] = { .lex_state = 37 },
    [54] = { .lex_state = 37 },
    [55] = { .lex_state = 37 },
    [56] = { .lex_state = 37 },
    [57] = { .lex_state = 37 },
    [58] = { .lex_state = 37 },
    [59] = { .lex_state = 37 },
    [60] = { .lex_state = 37 },
    [61] = { .lex_state = 448 },
    [62] = { .lex_state = 37 },
    [63] = { .lex_state = 37 },
    [64] = { .lex_state = 37 },
    [65] = { .lex_state = 47 },
    [66] = { .lex_state = 47 },
    [67] = { .lex_state = 47 },
    [68] = { .lex_state = 47 },
    [69] = { .lex_state = 37 },
    [70] = { .lex_state = 449 },
    [71] = { .lex_state = 449 },
    [72] = { .lex_state = 37 },
    [73] = { .lex_state = 449 },
    [74] = { .lex_state = 448 },
    [75] = { .lex_state = 37 },
    [76] = { .lex_state = 449 },
    [77] = { .lex_state = 449 },
    [78] = { .lex_state = 449 },
    [79] = { .lex_state = 448 },
    [80] = { .lex_state = 448 },
    [81] = { .lex_state = 37 },
    [82] = { .lex_state = 37 },
    [83] = { .lex_state = 43 },
    [84] = { .lex_state = 37 },
    [85] = { .lex_state = 37 },
    [86] = { .lex_state = 43 },
    [87] = { .lex_state = 43 },
    [88] = { .lex_state = 37 },
    [89] = { .lex_state = 37 },
    [90] = { .lex_state = 39 },
    [91] = { .lex_state = 39 },
    [92] = { .lex_state = 50 },
    [93] = { .lex_state = 448 },
    [94] = { .lex_state = 448 },
    [95] = { .lex_state = 448 },
    [96] = { .lex_state = 448 },
    [97] = { .lex_state = 448 },
    [98] = { .lex_state = 448 },
    [99] = { .lex_state = 448 },
    [100] = { .lex_state = 448 },
    [101] = { .lex_state = 448 },
    [102] = { .lex_state = 448 },
    [103] = { .lex_state = 448 },
    [104] = { .lex_state = 448 },
    [105] = { .lex_state = 39 },
    [106] = { .lex_state = 39 },
    [107] = { .lex_state = 448 },
    [108] = { .lex_state = 448 },
    [109] = { .lex_state = 37 },
    [110] = { .lex_state = 37 },
    [111] = { .lex_state = 448 },
    [112] = { .lex_state = 448 },
    [113] = { .lex_state = 448 },
    [114] = { .lex_state = 40 },
    [115] = { .lex_state = 40 },
    [116] = { .lex_state = 40 },
    [117] = { .lex_state = 40 },
    [118] = { .lex_state = 448 },
    [119] = { .lex_state = 448 },
    [120] = { .lex_state = 448 },
    [121] = { .lex_state = 448 },
    [122] = { .lex_state = 448 },
    [123] = { .lex_state = 448 },
    [124] = { .lex_state = 449 },
    [125] = { .lex_state = 37 },
    [126] = { .lex_state = 449 },
    [127] = { .lex_state = 448 },
    [128] = { .lex_state = 449 },
    [129] = { .lex_state = 448 },
    [130] = { .lex_state = 449 },
    [131] = { .lex_state = 448 },
    [132] = { .lex_state = 42 },
    [133] = { .lex_state = 448 },
    [134] = { .lex_state = 449 },
    [135] = { .lex_state = 448 },
    [136] = { .lex_state = 448 },
    [137] = { .lex_state = 39 },
    [138] = { .lex_state = 448 },
    [139] = { .lex_state = 448 },
    [140] = { .lex_state = 39 },
    [141] = { .lex_state = 448 },
    [142] = { .lex_state = 39 },
    [143] = { .lex_state = 448 },
    [144] = { .lex_state = 448 },
    [145] = { .lex_state = 448 },
    [146] = { .lex_state = 39 },
    [147] = { .lex_state = 448 },
    [148] = { .lex_state = 39 },
    [149] = { .lex_state = 448 },
    [150] = { .lex_state = 448 },
    [151] = { .lex_state = 448 },
    [152] = { .lex_state = 39 },
    [153] = { .lex_state = 448 },
    [154] = { .lex_state = 39 },
    [155] = { .lex_state = 448 },
    [156] = { .lex_state = 448 },
    [157] = { .lex_state = 42 },
    [158] = { .lex_state = 448 },
    [159] = { .lex_state = 448 },
    [160] = { .lex_state = 39 },
    [161] = { .lex_state = 448 },
    [162] = { .lex_state = 448 },
    [163] = { .lex_state = 448 },
    [164] = { .lex_state = 448 },
    [165] = { .lex_state = 39 },
    [166] = { .lex_state = 41 },
    [167] = { .lex_state = 39 },
    [168] = { .lex_state = 448 },
    [169] = { .lex_state = 448 },
    [170] = { .lex_state = 448 },
    [171] = { .lex_state = 41 },
    [172] = { .lex_state = 448 },
    [173] = { .lex_state = 41 },
    [174] = { .lex_state = 0 },
    [175] = { .lex_state = 448 },
    [176] = { .lex_state = 448 },
    [177] = { .lex_state = 39 },
    [178] = { .lex_state = 41 },
    [179] = { .lex_state = 448 },
    [180] = { .lex_state = 39 },
    [181] = { .lex_state = 448 },
    [182] = { .lex_state = 41 },
    [183] = { .lex_state = 39 },
    [184] = { .lex_state = 39 },
    [185] = { .lex_state = 41 },
    [186] = { .lex_state = 448 },
    [187] = { .lex_state = 41 },
    [188] = { .lex_state = 448 },
    [189] = { .lex_state = 41 },
    [190] = { .lex_state = 41 },
    [191] = { .lex_state = 39 },
    [192] = { .lex_state = 39 },
    [193] = { .lex_state = 448 },
    [194] = { .lex_state = 0 },
    [195] = { .lex_state = 41 },
    [196] = { .lex_state = 0 },
    [197] = { .lex_state = 39 },
    [198] = { .lex_state = 0 },
    [199] = { .lex_state = 0 },
    [200] = { .lex_state = 0 },
    [201] = { .lex_state = 41 },
    [202] = { .lex_state = 41 },
    [203] = { .lex_state = 41 },
    [204] = { .lex_state = 0 },
    [205] = { .lex_state = 39 },
    [206] = { .lex_state = 0 },
    [207] = { .lex_state = 41 },
    [208] = { .lex_state = 39 },
    [209] = { .lex_state = 51 },
    [210] = { .lex_state = 0 },
    [211] = { .lex_state = 448 },
    [212] = { .lex_state = 0 },
    [213] = { .lex_state = 0 },
    [214] = { .lex_state = 41 },
    [215] = { .lex_state = 448 },
    [216] = { .lex_state = 41 },
    [217] = { .lex_state = 448 },
    [218] = { .lex_state = 43 },
    [219] = { .lex_state = 448 },
    [220] = { .lex_state = 41 },
    [221] = { .lex_state = 448 },
    [222] = { .lex_state = 39 },
    [223] = { .lex_state = 0 },
    [224] = { .lex_state = 0 },
    [225] = { .lex_state = 41 },
    [226] = { .lex_state = 39 },
    [227] = { .lex_state = 448 },
    [228] = { .lex_state = 448 },
    [229] = { .lex_state = 41 },
    [230] = { .lex_state = 448 },
    [231] = { .lex_state = 0 },
    [232] = { .lex_state = 448 },
    [233] = { .lex_state = 41 },
    [234] = { .lex_state = 448 },
    [235] = { .lex_state = 41 },
    [236] = { .lex_state = 41 },
    [237] = { .lex_state = 0 },
    [238] = { .lex_state = 0 },
    [239] = { .lex_state = 0 },
    [240] = { .lex_state = 0 },
    [241] = { .lex_state = 41 },
    [242] = { .lex_state = 41 },
    [243] = { .lex_state = 0 },
    [244] = { .lex_state = 39 },
    [245] = { .lex_state = 0 },
    [246] = { .lex_state = 41 },
    [247] = { .lex_state = 0 },
    [248] = { .lex_state = 0 },
    [249] = { .lex_state = 39 },
    [250] = { .lex_state = 0 },
    [251] = { .lex_state = 0 },
    [252] = { .lex_state = 0 },
    [253] = { .lex_state = 39 },
    [254] = { .lex_state = 0 },
    [255] = { .lex_state = 448 },
    [256] = { .lex_state = 0 },
    [257] = { .lex_state = 0 },
    [258] = { .lex_state = 448 },
    [259] = { .lex_state = 41 },
    [260] = { .lex_state = 448 },
    [261] = { .lex_state = 0 },
    [262] = { .lex_state = 0 },
    [263] = { .lex_state = 448 },
    [264] = { .lex_state = 0 },
    [265] = { .lex_state = 0 },
    [266] = { .lex_state = 41 },
    [267] = { .lex_state = 41 },
    [268] = { .lex_state = 39 },
    [269] = { .lex_state = 0 },
    [270] = { .lex_state = 25 },
    [271] = { .lex_state = 39 },
    [272] = { .lex_state = 0 },
    [273] = { .lex_state = 448 },
    [274] = { .lex_state = 39 },
    [275] = { .lex_state = 448 },
    [276] = { .lex_state = 0 },
    [277] = { .lex_state = 448 },
    [278] = { .lex_state = 448 },
    [279] = { .lex_state = 448 },
    [280] = { .lex_state = 39 },
    [281] = { .lex_state = 39 },
    [282] = { .lex_state = 39 },
    [283] = { .lex_state = 0 },
    [284] = { .lex_state = 0 },
    [285] = { .lex_state = 39 },
    [286] = { .lex_state = 0 },
    [287] = { .lex_state = 39 },
    [288] = { .lex_state = 39 },
    [289] = { .lex_state = 448 },
    [290] = { .lex_state = 448 },
    [291] = { .lex_state = 448 },
    [292] = { .lex_state = 0 },
    [293] = { .lex_state = 39 },
    [294] = { .lex_state = 39 },
    [295] = { .lex_state = 39 },
    [296] = { .lex_state = 448 },
    [297] = { .lex_state = 39 },
    [298] = { .lex_state = 39 },
    [299] = { .lex_state = 448 },
    [300] = { .lex_state = 0 },
    [301] = { .lex_state = 39 },
    [302] = { .lex_state = 0 },
    [303] = { .lex_state = 448 },
    [304] = { .lex_state = 39 },
    [305] = { .lex_state = 39 },
    [306] = { .lex_state = 448 },
    [307] = { .lex_state = 43 },
    [308] = { .lex_state = 448 },
    [309] = { .lex_state = 448 },
    [310] = { .lex_state = 0 },
    [311] = { .lex_state = 0 },
    [312] = { .lex_state = 0 },
    [313] = { .lex_state = 39 },
    [314] = { .lex_state = 39 },
    [315] = { .lex_state = 39 },
    [316] = { .lex_state = 39 },
    [317] = { .lex_state = 0 },
    [318] = { .lex_state = 0 },
    [319] = { .lex_state = 0 },
    [320] = { .lex_state = 39 },
    [321] = { .lex_state = 448 },
    [322] = { .lex_state = 39 },
    [323] = { .lex_state = 39 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 39 },
    [326] = { .lex_state = 39 },
    [327] = { .lex_state = 0 },
    [328] = { .lex_state = 448 },
    [329] = { .lex_state = 43 },
    [330] = { .lex_state = 39 },
    [331] = { .lex_state = 0 },
    [332] = { .lex_state = 39 },
    [333] = { .lex_state = 0 },
    [334] = { .lex_state = 0 },
    [335] = { .lex_state = 0 },
    [336] = { .lex_state = 39 },
    [337] = { .lex_state = 0 },
    [338] = { .lex_state = 0 },
    [339] = { .lex_state = 0 },
    [340] = { .lex_state = 52 },
    [341] = { .lex_state = 52 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 43 },
    [346] = { .lex_state = 43 },
    [347] = { .lex_state = 0 },
    [348] = { .lex_state = 43 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 53 },
    [351] = { .lex_state = 52 },
    [352] = { .lex_state = 0 },
    [353] = { .lex_state = 0 },
    [354] = { .lex_state = 0 },
    [355] = { .lex_state = 0 },
    [356] = { .lex_state = 43 },
    [357] = { .lex_state = 0 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 0 },
    [360] = { .lex_state = 0 },
    [361] = { .lex_state = 0 },
    [362] = { .lex_state = 39 },
    [363] = { .lex_state = 0 },
    [364] = { .lex_state = 0 },
    [365] = { .lex_state = 0 },
    [366] = { .lex_state = 0 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 0 },
    [369] = { .lex_state = 39 },
    [370] = { .lex_state = 448 },
    [371] = { .lex_state = 771 },
    [372] = { .lex_state = 0 },
    [373] = { .lex_state = 43 },
    [374] = { .lex_state = 0 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 39 },
    [377] = { .lex_state = 0 },
    [378] = { .lex_state = 0 },
    [379] = { .lex_state = 0 },
    [380] = { .lex_state = 0 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 448 },
    [384] = { .lex_state = 0 },
    [385] = { .lex_state = 39 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 0 },
    [388] = { .lex_state = 0 },
    [389] = { .lex_state = 0 },
    [390] = { .lex_state = 0 },
    [391] = { .lex_state = 0 },
    [392] = { .lex_state = 0 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 0 },
    [395] = { .lex_state = 0 },
    [396] = { .lex_state = 0 },
    [397] = { .lex_state = 0 },
    [398] = { .lex_state = 0 },
    [399] = { .lex_state = 43 },
    [400] = { .lex_state = 43 },
    [401] = { .lex_state = 43 },
    [402] = { .lex_state = 0 },
    [403] = { .lex_state = 0 },
    [404] = { .lex_state = 39 },
    [405] = { .lex_state = 39 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 0 },
    [408] = { .lex_state = 39 },
    [409] = { .lex_state = 0 },
    [410] = { .lex_state = 0 },
    [411] = { .lex_state = 39 },
    [412] = { .lex_state = 0 },
    [413] = { .lex_state = 39 },
    [414] = { .lex_state = 0 },
    [415] = { .lex_state = 0 },
    [416] = { .lex_state = 39 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 448 },
    [419] = { .lex_state = 0 },
    [420] = { .lex_state = 448 },
    [421] = { .lex_state = 0 },
    [422] = { .lex_state = 52 },
    [423] = { .lex_state = 39 },
    [424] = { .lex_state = 0 },
    [425] = { .lex_state = 0 },
    [426] = { .lex_state = 39 },
    [427] = { .lex_state = 0 },
    [428] = { .lex_state = 43 },
    [429] = { .lex_state = 43 },
    [430] = { .lex_state = 0 },
    [431] = { .lex_state = 39 },
    [432] = { .lex_state = 0 },
    [433] = { .lex_state = 43 },
    [434] = { .lex_state = 0 },
    [435] = { .lex_state = 0 },
    [436] = { .lex_state = 448 },
    [437] = { .lex_state = 0 },
    [438] = { .lex_state = 0 },
    [439] = { .lex_state = 0 },
    [440] = { .lex_state = 448 },
    [441] = { .lex_state = 0 },
    [442] = { .lex_state = 0 },
    [443] = { .lex_state = 26 },
    [444] = { .lex_state = 448 },
    [445] = { .lex_state = 0 },
    [446] = { .lex_state = 0 },
    [447] = { .lex_state = 448 },
    [448] = { .lex_state = 448 },
    [449] = { .lex_state = 0 },
    [450] = { .lex_state = 0 },
    [451] = { .lex_state = 0 },
    [452] = { .lex_state = 0 },
    [453] = { .lex_state = 0 },
    [454] = { .lex_state = 448 },
    [455] = { .lex_state = 0 },
    [456] = { .lex_state = 53 },
    [457] = { .lex_state = 39 },
    [458] = { .lex_state = 39 },
    [459] = { .lex_state = 613 },
    [460] = { .lex_state = 0 },
    [461] = { .lex_state = 39 },
    [462] = { .lex_state = 0 },
    [463] = { .lex_state = 39 },
    [464] = { .lex_state = 39 },
    [465] = { .lex_state = 39 },
    [466] = { .lex_state = 448 },
    [467] = { .lex_state = 39 },
    [468] = { .lex_state = 39 },
    [469] = { .lex_state = 39 },
    [470] = { .lex_state = 0 },
    [471] = { .lex_state = 39 },
    [472] = { .lex_state = 39 },
    [473] = { .lex_state = 0 },
    [474] = { .lex_state = 39 },
    [475] = { .lex_state = 0 },
    [476] = { .lex_state = 39 },
    [477] = { .lex_state = 39 },
    [478] = { .lex_state = 39 },
    [479] = { (TSStateId)(-1) },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_comment] = STATE(0),
        [ts_builtin_sym_end] = ACTIONS(1),
        [sym_signed_short_int] = ACTIONS(1),
        [sym_signed_long_int] = ACTIONS(1),
        [sym_signed_longlong_int] = ACTIONS(1),
        [sym_boolean_type] = ACTIONS(1),
        [anon_sym_fixed] = ACTIONS(1),
        [sym_octet_type] = ACTIONS(1),
        [sym_unsigned_short_int] = ACTIONS(1),
        [sym_unsigned_long_int] = ACTIONS(1),
        [sym_unsigned_longlong_int] = ACTIONS(1),
        [anon_sym_float] = ACTIONS(1),
        [anon_sym_double] = ACTIONS(1),
        [anon_sym_longdouble] = ACTIONS(1),
        [anon_sym_char] = ACTIONS(1),
        [anon_sym_wchar] = ACTIONS(1),
        [anon_sym_string] = ACTIONS(1),
        [anon_sym_wstring] = ACTIONS(1),
        [anon_sym_LT] = ACTIONS(1),
        [anon_sym_GT] = ACTIONS(1),
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
        [anon_sym_SEMI] = ACTIONS(1),
        [anon_sym_exception] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(1),
        [anon_sym_RBRACE] = ACTIONS(1),
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_module] = ACTIONS(1),
        [anon_sym_struct] = ACTIONS(1),
        [anon_sym_COLON] = ACTIONS(1),
        [anon_sym_default] = ACTIONS(1),
        [anon_sym_enum] = ACTIONS(1),
        [sym_any_const_type] = ACTIONS(1),
        [anon_sym_AT] = ACTIONS(1),
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [anon_sym_union] = ACTIONS(1),
        [anon_sym_switch] = ACTIONS(1),
        [anon_sym_case] = ACTIONS(1),
        [anon_sym_bitset] = ACTIONS(1),
        [anon_sym_bitfield] = ACTIONS(1),
        [anon_sym_bitmask] = ACTIONS(1),
        [anon_sym_typedef] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_local] = ACTIONS(1),
        [anon_sym_void] = ACTIONS(1),
        [anon_sym_in] = ACTIONS(1),
        [anon_sym_out] = ACTIONS(1),
        [anon_sym_inout] = ACTIONS(1),
        [anon_sym_raises] = ACTIONS(1),
        [anon_sym_readonly] = ACTIONS(1),
        [anon_sym_attribute] = ACTIONS(1),
        [anon_sym_getraises] = ACTIONS(1),
        [anon_sym_setraises] = ACTIONS(1),
        [anon_sym_name] = ACTIONS(1),
        [anon_sym_const] = ACTIONS(1),
        [anon_sym_XCDR] = ACTIONS(1),
        [anon_sym_XCDR2] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(450),
        [sym_preproc_call] = STATE(80),
        [sym__definition] = STATE(71),
        [sym_except_dcl] = STATE(70),
        [sym_native_dcl] = STATE(449),
        [sym_module_dcl] = STATE(449),
        [sym_struct_forward_dcl] = STATE(449),
        [sym_struct_def] = STATE(449),
        [sym_enum_dcl] = STATE(449),
        [sym_enum_anno] = STATE(447),
        [sym_annotation_dcl] = STATE(449),
        [sym_union_forward_dcl] = STATE(449),
        [sym_union_def] = STATE(449),
        [sym_bitset_dcl] = STATE(449),
        [sym_bitmask_dcl] = STATE(449),
        [sym_typedef_dcl] = STATE(449),
        [sym_predefine] = STATE(70),
        [sym_interface_dcl] = STATE(449),
        [sym_interface_forward_dcl] = STATE(446),
        [sym_interface_def] = STATE(446),
        [sym_interface_header] = STATE(445),
        [sym_dds_request_topic] = STATE(151),
        [sym_dds_reply_topic] = STATE(151),
        [sym_interface_anno] = STATE(147),
        [sym_const_dcl] = STATE(449),
        [sym_data_representation] = STATE(228),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(2),
        [aux_sym_specification_repeat2] = STATE(16),
        [aux_sym_struct_def_repeat1] = STATE(162),
        [aux_sym_interface_def_repeat1] = STATE(122),
        [ts_builtin_sym_end] = ACTIONS(5),
        [sym_preproc_directive] = ACTIONS(7),
        [anon_sym_exception] = ACTIONS(9),
        [anon_sym_native] = ACTIONS(11),
        [anon_sym_module] = ACTIONS(13),
        [anon_sym_struct] = ACTIONS(15),
        [anon_sym_enum] = ACTIONS(17),
        [anon_sym_ATignore_literal_names] = ACTIONS(19),
        [anon_sym_ATannotation] = ACTIONS(21),
        [anon_sym_union] = ACTIONS(23),
        [anon_sym_bitset] = ACTIONS(25),
        [anon_sym_bitmask] = ACTIONS(27),
        [anon_sym_typedef] = ACTIONS(29),
        [anon_sym_POUNDdefine] = ACTIONS(31),
        [anon_sym_interface] = ACTIONS(33),
        [anon_sym_local] = ACTIONS(35),
        [sym_dds_service] = ACTIONS(37),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(39),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(41),
        [anon_sym_const] = ACTIONS(43),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 38,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(7),
    1,
    sym_preproc_directive,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_native,
    ACTIONS(13),
    1,
    anon_sym_module,
    ACTIONS(15),
    1,
    anon_sym_struct,
    ACTIONS(17),
    1,
    anon_sym_enum,
    ACTIONS(19),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(21),
    1,
    anon_sym_ATannotation,
    ACTIONS(23),
    1,
    anon_sym_union,
    ACTIONS(25),
    1,
    anon_sym_bitset,
    ACTIONS(27),
    1,
    anon_sym_bitmask,
    ACTIONS(29),
    1,
    anon_sym_typedef,
    ACTIONS(31),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(33),
    1,
    anon_sym_interface,
    ACTIONS(35),
    1,
    anon_sym_local,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(43),
    1,
    anon_sym_const,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(49),
    1,
    ts_builtin_sym_end,
    STATE(2),
    1,
    sym_comment,
    STATE(17),
    1,
    aux_sym_specification_repeat2,
    STATE(61),
    1,
    aux_sym_specification_repeat1,
    STATE(71),
    1,
    sym__definition,
    STATE(80),
    1,
    sym_preproc_call,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(162),
    1,
    aux_sym_struct_def_repeat1,
    STATE(228),
    1,
    sym_data_representation,
    STATE(445),
    1,
    sym_interface_header,
    STATE(447),
    1,
    sym_enum_anno,
    STATE(70),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(151),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(446),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(449),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [130] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(77),
    1,
    anon_sym_RBRACE,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    STATE(3),
    1,
    sym_comment,
    STATE(11),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(152),
    1,
    sym_type_spec,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [246] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(87),
    1,
    anon_sym_RBRACE,
    STATE(4),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(152),
    1,
    sym_type_spec,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [362] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(89),
    1,
    anon_sym_RBRACE,
    STATE(5),
    1,
    sym_comment,
    STATE(11),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(152),
    1,
    sym_type_spec,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [478] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(91),
    1,
    anon_sym_RBRACE,
    STATE(6),
    1,
    sym_comment,
    STATE(9),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(152),
    1,
    sym_type_spec,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [594] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(95),
    1,
    anon_sym_exception,
    ACTIONS(98),
    1,
    anon_sym_native,
    ACTIONS(101),
    1,
    anon_sym_module,
    ACTIONS(104),
    1,
    anon_sym_struct,
    ACTIONS(107),
    1,
    anon_sym_enum,
    ACTIONS(110),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(113),
    1,
    anon_sym_ATannotation,
    ACTIONS(116),
    1,
    anon_sym_union,
    ACTIONS(119),
    1,
    anon_sym_bitset,
    ACTIONS(122),
    1,
    anon_sym_bitmask,
    ACTIONS(125),
    1,
    anon_sym_typedef,
    ACTIONS(128),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(131),
    1,
    anon_sym_interface,
    ACTIONS(134),
    1,
    anon_sym_local,
    ACTIONS(137),
    1,
    sym_dds_service,
    ACTIONS(140),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(143),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(146),
    1,
    anon_sym_const,
    ACTIONS(149),
    1,
    sym_final,
    ACTIONS(152),
    1,
    anon_sym_ATdata_representation,
    STATE(71),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(162),
    1,
    aux_sym_struct_def_repeat1,
    STATE(228),
    1,
    sym_data_representation,
    STATE(445),
    1,
    sym_interface_header,
    STATE(447),
    1,
    sym_enum_anno,
    ACTIONS(93),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(7),
    2,
    sym_comment,
    aux_sym_specification_repeat2,
    STATE(70),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(151),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(446),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(449),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [714] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(155),
    1,
    anon_sym_RBRACE,
    STATE(5),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(8),
    1,
    sym_comment,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(152),
    1,
    sym_type_spec,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [830] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(157),
    1,
    anon_sym_RBRACE,
    STATE(9),
    1,
    sym_comment,
    STATE(11),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(152),
    1,
    sym_type_spec,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [946] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(89),
    1,
    anon_sym_RBRACE,
    STATE(10),
    1,
    sym_comment,
    STATE(13),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(152),
    1,
    sym_type_spec,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1062] = 31,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(162),
    1,
    sym_signed_longlong_int,
    ACTIONS(168),
    1,
    anon_sym_fixed,
    ACTIONS(174),
    1,
    sym_unsigned_long_int,
    ACTIONS(180),
    1,
    anon_sym_longdouble,
    ACTIONS(186),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(192),
    1,
    anon_sym_sequence,
    ACTIONS(195),
    1,
    anon_sym_map,
    ACTIONS(198),
    1,
    anon_sym_RBRACE,
    ACTIONS(203),
    1,
    anon_sym_AThashid,
    ACTIONS(206),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(209),
    1,
    sym_identifier,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(152),
    1,
    sym_type_spec,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(159),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(165),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(171),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(177),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(183),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(189),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(11),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(200),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1176] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(212),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(12),
    1,
    sym_comment,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(152),
    1,
    sym_type_spec,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1292] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(214),
    1,
    anon_sym_RBRACE,
    STATE(11),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(13),
    1,
    sym_comment,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(152),
    1,
    sym_type_spec,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1408] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(216),
    1,
    anon_sym_RBRACE,
    STATE(11),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    sym_comment,
    STATE(20),
    1,
    aux_sym_member_repeat1,
    STATE(36),
    1,
    sym_member,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(152),
    1,
    sym_type_spec,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1524] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_native,
    ACTIONS(13),
    1,
    anon_sym_module,
    ACTIONS(15),
    1,
    anon_sym_struct,
    ACTIONS(17),
    1,
    anon_sym_enum,
    ACTIONS(19),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(21),
    1,
    anon_sym_ATannotation,
    ACTIONS(23),
    1,
    anon_sym_union,
    ACTIONS(25),
    1,
    anon_sym_bitset,
    ACTIONS(27),
    1,
    anon_sym_bitmask,
    ACTIONS(29),
    1,
    anon_sym_typedef,
    ACTIONS(33),
    1,
    anon_sym_interface,
    ACTIONS(35),
    1,
    anon_sym_local,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(43),
    1,
    anon_sym_const,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(218),
    1,
    anon_sym_RBRACE,
    ACTIONS(220),
    1,
    anon_sym_POUNDdefine,
    STATE(15),
    1,
    sym_comment,
    STATE(19),
    1,
    aux_sym_specification_repeat2,
    STATE(71),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(162),
    1,
    aux_sym_struct_def_repeat1,
    STATE(228),
    1,
    sym_data_representation,
    STATE(445),
    1,
    sym_interface_header,
    STATE(447),
    1,
    sym_enum_anno,
    STATE(70),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(151),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(446),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(449),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [1645] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_native,
    ACTIONS(13),
    1,
    anon_sym_module,
    ACTIONS(15),
    1,
    anon_sym_struct,
    ACTIONS(17),
    1,
    anon_sym_enum,
    ACTIONS(19),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(21),
    1,
    anon_sym_ATannotation,
    ACTIONS(23),
    1,
    anon_sym_union,
    ACTIONS(25),
    1,
    anon_sym_bitset,
    ACTIONS(27),
    1,
    anon_sym_bitmask,
    ACTIONS(29),
    1,
    anon_sym_typedef,
    ACTIONS(33),
    1,
    anon_sym_interface,
    ACTIONS(35),
    1,
    anon_sym_local,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(43),
    1,
    anon_sym_const,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(49),
    1,
    ts_builtin_sym_end,
    ACTIONS(220),
    1,
    anon_sym_POUNDdefine,
    STATE(7),
    1,
    aux_sym_specification_repeat2,
    STATE(16),
    1,
    sym_comment,
    STATE(71),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(162),
    1,
    aux_sym_struct_def_repeat1,
    STATE(228),
    1,
    sym_data_representation,
    STATE(445),
    1,
    sym_interface_header,
    STATE(447),
    1,
    sym_enum_anno,
    STATE(70),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(151),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(446),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(449),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [1766] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_native,
    ACTIONS(13),
    1,
    anon_sym_module,
    ACTIONS(15),
    1,
    anon_sym_struct,
    ACTIONS(17),
    1,
    anon_sym_enum,
    ACTIONS(19),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(21),
    1,
    anon_sym_ATannotation,
    ACTIONS(23),
    1,
    anon_sym_union,
    ACTIONS(25),
    1,
    anon_sym_bitset,
    ACTIONS(27),
    1,
    anon_sym_bitmask,
    ACTIONS(29),
    1,
    anon_sym_typedef,
    ACTIONS(33),
    1,
    anon_sym_interface,
    ACTIONS(35),
    1,
    anon_sym_local,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(43),
    1,
    anon_sym_const,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(220),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(222),
    1,
    ts_builtin_sym_end,
    STATE(7),
    1,
    aux_sym_specification_repeat2,
    STATE(17),
    1,
    sym_comment,
    STATE(71),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(162),
    1,
    aux_sym_struct_def_repeat1,
    STATE(228),
    1,
    sym_data_representation,
    STATE(445),
    1,
    sym_interface_header,
    STATE(447),
    1,
    sym_enum_anno,
    STATE(70),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(151),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(446),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(449),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [1887] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(19),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(224),
    1,
    anon_sym_struct,
    ACTIONS(226),
    1,
    anon_sym_enum,
    ACTIONS(228),
    1,
    anon_sym_union,
    STATE(18),
    1,
    sym_comment,
    STATE(162),
    1,
    aux_sym_struct_def_repeat1,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(228),
    1,
    sym_data_representation,
    STATE(424),
    1,
    sym_type_declarator,
    STATE(426),
    1,
    sym_scoped_name,
    STATE(447),
    1,
    sym_enum_anno,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(160),
    7,
    sym_simple_type_spec,
    sym_template_type_spec,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    [2002] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_native,
    ACTIONS(13),
    1,
    anon_sym_module,
    ACTIONS(15),
    1,
    anon_sym_struct,
    ACTIONS(17),
    1,
    anon_sym_enum,
    ACTIONS(19),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(21),
    1,
    anon_sym_ATannotation,
    ACTIONS(23),
    1,
    anon_sym_union,
    ACTIONS(25),
    1,
    anon_sym_bitset,
    ACTIONS(27),
    1,
    anon_sym_bitmask,
    ACTIONS(29),
    1,
    anon_sym_typedef,
    ACTIONS(33),
    1,
    anon_sym_interface,
    ACTIONS(35),
    1,
    anon_sym_local,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(43),
    1,
    anon_sym_const,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(220),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(230),
    1,
    anon_sym_RBRACE,
    STATE(7),
    1,
    aux_sym_specification_repeat2,
    STATE(19),
    1,
    sym_comment,
    STATE(71),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(162),
    1,
    aux_sym_struct_def_repeat1,
    STATE(228),
    1,
    sym_data_representation,
    STATE(445),
    1,
    sym_interface_header,
    STATE(447),
    1,
    sym_enum_anno,
    STATE(70),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(151),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(446),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(449),
    13,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [2123] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(81),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(85),
    1,
    sym_identifier,
    STATE(20),
    1,
    sym_comment,
    STATE(35),
    1,
    aux_sym_member_repeat1,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(154),
    1,
    sym_type_spec,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(79),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [2230] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(232),
    1,
    anon_sym_RBRACE,
    ACTIONS(234),
    1,
    anon_sym_void,
    ACTIONS(236),
    1,
    anon_sym_readonly,
    ACTIONS(238),
    1,
    anon_sym_attribute,
    STATE(21),
    1,
    sym_comment,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(238),
    1,
    sym_export,
    STATE(376),
    1,
    sym_op_type_spec,
    STATE(382),
    1,
    sym_interface_body,
    STATE(385),
    1,
    sym_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(333),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(378),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2342] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(234),
    1,
    anon_sym_void,
    ACTIONS(236),
    1,
    anon_sym_readonly,
    ACTIONS(238),
    1,
    anon_sym_attribute,
    ACTIONS(240),
    1,
    anon_sym_RBRACE,
    STATE(22),
    1,
    sym_comment,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(238),
    1,
    sym_export,
    STATE(342),
    1,
    sym_interface_body,
    STATE(376),
    1,
    sym_op_type_spec,
    STATE(385),
    1,
    sym_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(333),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(378),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2454] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(234),
    1,
    anon_sym_void,
    ACTIONS(236),
    1,
    anon_sym_readonly,
    ACTIONS(238),
    1,
    anon_sym_attribute,
    ACTIONS(242),
    1,
    anon_sym_RBRACE,
    STATE(23),
    1,
    sym_comment,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(238),
    1,
    sym_export,
    STATE(376),
    1,
    sym_op_type_spec,
    STATE(385),
    1,
    sym_type_spec,
    STATE(407),
    1,
    sym_interface_body,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(333),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(378),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2566] = 30,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(234),
    1,
    anon_sym_void,
    ACTIONS(236),
    1,
    anon_sym_readonly,
    ACTIONS(238),
    1,
    anon_sym_attribute,
    STATE(24),
    1,
    sym_comment,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(284),
    1,
    sym_export,
    STATE(376),
    1,
    sym_op_type_spec,
    STATE(385),
    1,
    sym_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(333),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(378),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2672] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(19),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(246),
    1,
    anon_sym_fixed,
    ACTIONS(248),
    1,
    anon_sym_RBRACE,
    ACTIONS(250),
    1,
    anon_sym_enum,
    ACTIONS(252),
    1,
    sym_any_const_type,
    STATE(25),
    1,
    sym_comment,
    STATE(26),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(66),
    1,
    sym_annotation_member,
    STATE(325),
    1,
    sym_annotation_member_type,
    STATE(328),
    1,
    sym_enum_dcl,
    STATE(359),
    1,
    sym_annotation_body,
    STATE(362),
    1,
    sym_const_type,
    STATE(444),
    1,
    sym_enum_anno,
    STATE(477),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(244),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(416),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2772] = 28,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(19),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(246),
    1,
    anon_sym_fixed,
    ACTIONS(250),
    1,
    anon_sym_enum,
    ACTIONS(252),
    1,
    sym_any_const_type,
    ACTIONS(254),
    1,
    anon_sym_RBRACE,
    STATE(26),
    1,
    sym_comment,
    STATE(27),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(66),
    1,
    sym_annotation_member,
    STATE(325),
    1,
    sym_annotation_member_type,
    STATE(328),
    1,
    sym_enum_dcl,
    STATE(362),
    1,
    sym_const_type,
    STATE(444),
    1,
    sym_enum_anno,
    STATE(477),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(244),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(416),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2869] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(259),
    1,
    sym_signed_longlong_int,
    ACTIONS(265),
    1,
    anon_sym_fixed,
    ACTIONS(271),
    1,
    sym_unsigned_long_int,
    ACTIONS(277),
    1,
    anon_sym_longdouble,
    ACTIONS(283),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(289),
    1,
    anon_sym_sequence,
    ACTIONS(292),
    1,
    anon_sym_RBRACE,
    ACTIONS(294),
    1,
    anon_sym_enum,
    ACTIONS(297),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(300),
    1,
    sym_any_const_type,
    ACTIONS(303),
    1,
    sym_identifier,
    STATE(66),
    1,
    sym_annotation_member,
    STATE(325),
    1,
    sym_annotation_member_type,
    STATE(328),
    1,
    sym_enum_dcl,
    STATE(362),
    1,
    sym_const_type,
    STATE(444),
    1,
    sym_enum_anno,
    STATE(477),
    1,
    sym_scoped_name,
    ACTIONS(256),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(262),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(268),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(274),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(280),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(286),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(27),
    2,
    sym_comment,
    aux_sym_annotation_body_repeat1,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(416),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2964] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(306),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(308),
    1,
    anon_sym_GT,
    ACTIONS(310),
    1,
    anon_sym_COMMA,
    ACTIONS(312),
    1,
    sym_identifier,
    STATE(28),
    1,
    sym_comment,
    STATE(207),
    1,
    sym_scoped_name,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(345),
    1,
    sym_type_spec,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3053] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    STATE(29),
    1,
    sym_comment,
    STATE(191),
    1,
    sym_type_spec,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(414),
    1,
    sym_element_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3139] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    STATE(30),
    1,
    sym_comment,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(274),
    1,
    sym_scoped_name,
    STATE(344),
    1,
    sym_type_spec,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3222] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(306),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(312),
    1,
    sym_identifier,
    STATE(31),
    1,
    sym_comment,
    STATE(207),
    1,
    sym_scoped_name,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(329),
    1,
    sym_type_spec,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3305] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    STATE(32),
    1,
    sym_comment,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(297),
    1,
    sym_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3388] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    STATE(33),
    1,
    sym_comment,
    STATE(208),
    1,
    sym_type_spec,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3471] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(57),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(85),
    1,
    sym_identifier,
    STATE(34),
    1,
    sym_comment,
    STATE(220),
    1,
    sym_base_type_spec,
    STATE(249),
    1,
    sym_type_spec,
    STATE(426),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(55),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(246),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(216),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3554] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(321),
    1,
    anon_sym_AThashid,
    ACTIONS(324),
    1,
    anon_sym_ATtry_construct,
    STATE(44),
    1,
    sym_struct_modifier,
    STATE(35),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(316),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(318),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(314),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3607] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(36),
    1,
    sym_comment,
    ACTIONS(329),
    14,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(327),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3647] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(246),
    1,
    anon_sym_fixed,
    STATE(37),
    1,
    sym_comment,
    STATE(411),
    1,
    sym_scoped_name,
    STATE(474),
    1,
    sym_const_type,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(244),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(416),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [3717] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(38),
    1,
    sym_comment,
    ACTIONS(333),
    14,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(331),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3757] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(39),
    1,
    sym_comment,
    ACTIONS(337),
    14,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(335),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3797] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(40),
    1,
    sym_comment,
    ACTIONS(341),
    14,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(339),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3837] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(41),
    1,
    sym_comment,
    ACTIONS(345),
    14,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(343),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3877] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(65),
    1,
    anon_sym_longdouble,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(246),
    1,
    anon_sym_fixed,
    STATE(42),
    1,
    sym_comment,
    STATE(408),
    1,
    sym_const_type,
    STATE(411),
    1,
    sym_scoped_name,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(63),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(71),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(244),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(416),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [3947] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(43),
    1,
    sym_comment,
    ACTIONS(349),
    13,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(347),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3986] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(44),
    1,
    sym_comment,
    ACTIONS(353),
    13,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(351),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [4025] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(45),
    1,
    sym_comment,
    ACTIONS(357),
    13,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(355),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [4064] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(46),
    1,
    sym_comment,
    ACTIONS(361),
    13,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(359),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [4103] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(47),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(128),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(218),
    1,
    sym_const_expr,
    STATE(401),
    1,
    sym_positive_int_const,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4183] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(48),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(128),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(218),
    1,
    sym_const_expr,
    STATE(307),
    1,
    sym_positive_int_const,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4263] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(49),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(128),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(218),
    1,
    sym_const_expr,
    STATE(346),
    1,
    sym_positive_int_const,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4343] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(50),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(128),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(218),
    1,
    sym_const_expr,
    STATE(377),
    1,
    sym_positive_int_const,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4423] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(51),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(128),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(218),
    1,
    sym_const_expr,
    STATE(373),
    1,
    sym_positive_int_const,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4503] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(52),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(128),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(218),
    1,
    sym_const_expr,
    STATE(349),
    1,
    sym_positive_int_const,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4583] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(53),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(128),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(218),
    1,
    sym_const_expr,
    STATE(348),
    1,
    sym_positive_int_const,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4663] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(54),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(128),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(366),
    1,
    sym_const_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4740] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(55),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(128),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(279),
    1,
    sym_const_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4817] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(56),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(128),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(347),
    1,
    sym_const_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4894] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(57),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(128),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(364),
    1,
    sym_const_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4971] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(58),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(128),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(417),
    1,
    sym_const_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5048] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    ACTIONS(379),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(381),
    1,
    sym_identifier,
    STATE(59),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_scoped_name,
    STATE(119),
    1,
    sym_mult_expr,
    STATE(127),
    1,
    sym_add_expr,
    STATE(138),
    1,
    sym_shift_expr,
    STATE(168),
    1,
    sym_and_expr,
    STATE(258),
    1,
    sym_xor_expr,
    STATE(273),
    1,
    sym_or_expr,
    STATE(279),
    1,
    sym_const_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5125] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(60),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(128),
    1,
    sym_xor_expr,
    STATE(134),
    1,
    sym_or_expr,
    STATE(412),
    1,
    sym_const_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5202] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(385),
    1,
    sym_preproc_directive,
    ACTIONS(388),
    1,
    anon_sym_POUNDdefine,
    STATE(80),
    1,
    sym_preproc_call,
    STATE(61),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(383),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5241] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    ACTIONS(379),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(381),
    1,
    sym_identifier,
    STATE(62),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_scoped_name,
    STATE(119),
    1,
    sym_mult_expr,
    STATE(127),
    1,
    sym_add_expr,
    STATE(138),
    1,
    sym_shift_expr,
    STATE(168),
    1,
    sym_and_expr,
    STATE(227),
    1,
    sym_xor_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5312] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(63),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5383] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    ACTIONS(379),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(381),
    1,
    sym_identifier,
    STATE(64),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_scoped_name,
    STATE(119),
    1,
    sym_mult_expr,
    STATE(127),
    1,
    sym_add_expr,
    STATE(138),
    1,
    sym_shift_expr,
    STATE(164),
    1,
    sym_and_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5451] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(65),
    1,
    sym_comment,
    ACTIONS(392),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(390),
    16,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_enum,
    sym_any_const_type,
    sym_identifier,
    [5485] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(66),
    1,
    sym_comment,
    ACTIONS(396),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(394),
    16,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_enum,
    sym_any_const_type,
    sym_identifier,
    [5519] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(67),
    1,
    sym_comment,
    ACTIONS(400),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(398),
    16,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_enum,
    sym_any_const_type,
    sym_identifier,
    [5553] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(68),
    1,
    sym_comment,
    ACTIONS(404),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(402),
    16,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_enum,
    sym_any_const_type,
    sym_identifier,
    [5587] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(69),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(118),
    1,
    sym_shift_expr,
    STATE(126),
    1,
    sym_and_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5655] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(70),
    1,
    sym_comment,
    ACTIONS(406),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5686] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(71),
    1,
    sym_comment,
    ACTIONS(408),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5717] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    ACTIONS(379),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(381),
    1,
    sym_identifier,
    STATE(72),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_scoped_name,
    STATE(119),
    1,
    sym_mult_expr,
    STATE(127),
    1,
    sym_add_expr,
    STATE(135),
    1,
    sym_shift_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5782] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(410),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5813] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(414),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(412),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5846] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(75),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(111),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5911] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(76),
    1,
    sym_comment,
    ACTIONS(416),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5942] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(418),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5973] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(420),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [6004] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(424),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(422),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [6037] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(428),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(426),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_ATannotation,
    anon_sym_union,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [6070] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    ACTIONS(379),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(381),
    1,
    sym_identifier,
    STATE(81),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_scoped_name,
    STATE(119),
    1,
    sym_mult_expr,
    STATE(131),
    1,
    sym_add_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6132] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(82),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6194] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(432),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(430),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [6225] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    ACTIONS(379),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(381),
    1,
    sym_identifier,
    STATE(84),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_scoped_name,
    STATE(121),
    1,
    sym_mult_expr,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6284] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(85),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(101),
    1,
    sym_unary_expr,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_unary_operator,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6343] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(436),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(434),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [6374] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(87),
    1,
    sym_comment,
    ACTIONS(440),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(438),
    15,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [6405] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    ACTIONS(379),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(381),
    1,
    sym_identifier,
    STATE(88),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(109),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_scoped_name,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6461] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(365),
    1,
    anon_sym_LPAREN,
    ACTIONS(367),
    1,
    anon_sym_TILDE,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    STATE(89),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_unary_operator,
    ACTIONS(363),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6517] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(90),
    1,
    sym_comment,
    ACTIONS(442),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(444),
    16,
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
    anon_sym_LBRACE,
    anon_sym_COLON,
    anon_sym_RBRACK,
    sym_identifier,
    [6546] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(446),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(448),
    16,
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
    anon_sym_LBRACE,
    anon_sym_COLON,
    anon_sym_RBRACK,
    sym_identifier,
    [6575] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    sym_signed_longlong_int,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(450),
    1,
    sym_boolean_type,
    STATE(92),
    1,
    sym_comment,
    STATE(293),
    1,
    sym_scoped_name,
    STATE(402),
    1,
    sym_switch_type_spec,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(397),
    2,
    sym_integer_type,
    sym_char_type,
    [6623] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(452),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(454),
    15,
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
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6651] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(456),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(458),
    15,
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
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6679] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(460),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(462),
    15,
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
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6707] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(96),
    1,
    sym_comment,
    ACTIONS(464),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(466),
    15,
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
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6735] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(468),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(470),
    15,
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
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6763] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(98),
    1,
    sym_comment,
    ACTIONS(472),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(474),
    15,
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
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6791] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(99),
    1,
    sym_comment,
    ACTIONS(476),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(478),
    15,
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
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6819] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(100),
    1,
    sym_comment,
    ACTIONS(480),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(482),
    15,
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
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6847] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(101),
    1,
    sym_comment,
    ACTIONS(484),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(486),
    15,
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
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6875] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(102),
    1,
    sym_comment,
    ACTIONS(488),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(490),
    15,
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
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6903] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(103),
    1,
    sym_comment,
    ACTIONS(492),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(494),
    15,
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
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6931] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(496),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(498),
    15,
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
    anon_sym_COLON,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6959] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(500),
    1,
    sym_identifier,
    STATE(105),
    1,
    sym_comment,
    ACTIONS(472),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(474),
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
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [6989] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(500),
    1,
    sym_identifier,
    STATE(106),
    1,
    sym_comment,
    ACTIONS(476),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(478),
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
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7019] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(502),
    1,
    anon_sym_GT,
    ACTIONS(508),
    1,
    anon_sym_SLASH,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(506),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(504),
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
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7050] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(508),
    1,
    anon_sym_SLASH,
    ACTIONS(510),
    1,
    anon_sym_GT,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(506),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(512),
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
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7081] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    ACTIONS(379),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(381),
    1,
    sym_identifier,
    ACTIONS(514),
    1,
    anon_sym_LPAREN,
    STATE(99),
    1,
    sym_literal,
    STATE(109),
    1,
    sym_comment,
    STATE(117),
    1,
    sym_scoped_name,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7124] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    sym_identifier,
    ACTIONS(369),
    1,
    anon_sym_L,
    ACTIONS(371),
    1,
    anon_sym_DQUOTE,
    ACTIONS(373),
    1,
    anon_sym_SQUOTE,
    ACTIONS(377),
    1,
    sym_number_literal,
    ACTIONS(514),
    1,
    anon_sym_LPAREN,
    STATE(99),
    1,
    sym_literal,
    STATE(106),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(375),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7167] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(516),
    1,
    anon_sym_GT,
    STATE(111),
    1,
    sym_comment,
    ACTIONS(520),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(518),
    10,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7193] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(522),
    1,
    anon_sym_GT,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(520),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(524),
    10,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7219] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_long_int,
    ACTIONS(61),
    1,
    sym_unsigned_long_int,
    STATE(113),
    1,
    sym_comment,
    STATE(399),
    1,
    sym_integer_type,
    STATE(400),
    1,
    sym_destination_type,
    ACTIONS(53),
    2,
    sym_signed_short_int,
    sym_signed_longlong_int,
    ACTIONS(59),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(526),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(182),
    2,
    sym_unsigned_int,
    sym_signed_int,
    [7254] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(442),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
    ACTIONS(444),
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
    [7277] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(446),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
    ACTIONS(448),
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
    [7300] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(528),
    1,
    sym_identifier,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(472),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(474),
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
    [7325] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(528),
    1,
    sym_identifier,
    STATE(117),
    1,
    sym_comment,
    ACTIONS(476),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(478),
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
    [7350] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(530),
    1,
    anon_sym_GT,
    STATE(118),
    1,
    sym_comment,
    ACTIONS(534),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(532),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7374] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(538),
    1,
    anon_sym_SLASH,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(536),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(512),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [7398] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(540),
    1,
    anon_sym_GT,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(534),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(542),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7422] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(538),
    1,
    anon_sym_SLASH,
    STATE(121),
    1,
    sym_comment,
    ACTIONS(536),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(504),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [7446] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(544),
    1,
    anon_sym_interface,
    ACTIONS(546),
    1,
    anon_sym_local,
    STATE(122),
    1,
    sym_comment,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(421),
    1,
    sym_interface_header,
    STATE(151),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [7481] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(550),
    1,
    sym_dds_service,
    ACTIONS(553),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(556),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(147),
    1,
    sym_interface_anno,
    ACTIONS(548),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(123),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(151),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [7509] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(561),
    1,
    anon_sym_DOLLAR,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(559),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7529] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(125),
    1,
    sym_comment,
    ACTIONS(563),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(565),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [7549] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(561),
    1,
    anon_sym_DOLLAR,
    STATE(126),
    1,
    sym_comment,
    ACTIONS(567),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7569] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(127),
    1,
    sym_comment,
    ACTIONS(569),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(518),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [7588] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(573),
    1,
    anon_sym_CARET,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(571),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7607] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(575),
    1,
    anon_sym_COMMA,
    ACTIONS(577),
    1,
    anon_sym_SEMI,
    ACTIONS(579),
    1,
    anon_sym_getraises,
    ACTIONS(581),
    1,
    anon_sym_setraises,
    STATE(129),
    1,
    sym_comment,
    STATE(170),
    1,
    sym_get_excep_expr,
    STATE(256),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(354),
    1,
    sym_attr_raises_expr,
    STATE(355),
    1,
    sym_set_excep_expr,
    [7638] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(573),
    1,
    anon_sym_CARET,
    STATE(130),
    1,
    sym_comment,
    ACTIONS(583),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7657] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(131),
    1,
    sym_comment,
    ACTIONS(569),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(524),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [7676] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(585),
    1,
    anon_sym_RPAREN,
    ACTIONS(587),
    1,
    anon_sym_in,
    STATE(32),
    1,
    sym_param_attribute,
    STATE(132),
    1,
    sym_comment,
    STATE(204),
    1,
    sym_param_dcl,
    STATE(358),
    1,
    sym_parameter_dcls,
    ACTIONS(589),
    2,
    anon_sym_out,
    anon_sym_inout,
    [7702] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(133),
    1,
    sym_comment,
    ACTIONS(591),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    [7718] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(595),
    1,
    anon_sym_PIPE,
    STATE(134),
    1,
    sym_comment,
    ACTIONS(593),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RBRACK,
    [7736] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(135),
    1,
    sym_comment,
    ACTIONS(597),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(542),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [7753] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(599),
    1,
    anon_sym_RBRACE,
    ACTIONS(601),
    1,
    anon_sym_default,
    ACTIONS(604),
    1,
    anon_sym_case,
    STATE(29),
    1,
    sym_case_label,
    STATE(232),
    1,
    sym_case,
    STATE(136),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [7776] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(607),
    1,
    anon_sym_RBRACE,
    ACTIONS(609),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(611),
    1,
    sym_identifier,
    STATE(137),
    1,
    sym_comment,
    STATE(184),
    1,
    aux_sym_enumerator_repeat1,
    STATE(213),
    1,
    sym_enumerator,
    STATE(322),
    1,
    sym_enum_modifier,
    [7801] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(138),
    1,
    sym_comment,
    ACTIONS(597),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(532),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [7818] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(613),
    1,
    anon_sym_RBRACE,
    ACTIONS(615),
    1,
    anon_sym_default,
    ACTIONS(617),
    1,
    anon_sym_case,
    STATE(29),
    1,
    sym_case_label,
    STATE(139),
    1,
    sym_comment,
    STATE(141),
    1,
    aux_sym_union_def_repeat1,
    STATE(232),
    1,
    sym_case,
    [7843] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(609),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(611),
    1,
    sym_identifier,
    ACTIONS(619),
    1,
    anon_sym_RBRACE,
    STATE(140),
    1,
    sym_comment,
    STATE(184),
    1,
    aux_sym_enumerator_repeat1,
    STATE(265),
    1,
    sym_enumerator,
    STATE(322),
    1,
    sym_enum_modifier,
    [7868] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(615),
    1,
    anon_sym_default,
    ACTIONS(617),
    1,
    anon_sym_case,
    ACTIONS(621),
    1,
    anon_sym_RBRACE,
    STATE(29),
    1,
    sym_case_label,
    STATE(136),
    1,
    aux_sym_union_def_repeat1,
    STATE(141),
    1,
    sym_comment,
    STATE(232),
    1,
    sym_case,
    [7893] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(609),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(611),
    1,
    sym_identifier,
    ACTIONS(623),
    1,
    anon_sym_RBRACE,
    STATE(142),
    1,
    sym_comment,
    STATE(184),
    1,
    aux_sym_enumerator_repeat1,
    STATE(257),
    1,
    sym_enumerator,
    STATE(322),
    1,
    sym_enum_modifier,
    [7918] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(625),
    1,
    anon_sym_LBRACK,
    STATE(143),
    1,
    sym_comment,
    STATE(145),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(193),
    1,
    sym_fixed_array_size,
    ACTIONS(591),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [7939] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(629),
    1,
    anon_sym_LBRACK,
    STATE(193),
    1,
    sym_fixed_array_size,
    STATE(144),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(627),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [7958] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(625),
    1,
    anon_sym_LBRACK,
    STATE(144),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(145),
    1,
    sym_comment,
    STATE(193),
    1,
    sym_fixed_array_size,
    ACTIONS(632),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [7979] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(609),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(611),
    1,
    sym_identifier,
    ACTIONS(634),
    1,
    anon_sym_RBRACE,
    STATE(146),
    1,
    sym_comment,
    STATE(184),
    1,
    aux_sym_enumerator_repeat1,
    STATE(251),
    1,
    sym_enumerator,
    STATE(322),
    1,
    sym_enum_modifier,
    [8004] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(147),
    1,
    sym_comment,
    ACTIONS(636),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [8018] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(609),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(611),
    1,
    sym_identifier,
    STATE(148),
    1,
    sym_comment,
    STATE(184),
    1,
    aux_sym_enumerator_repeat1,
    STATE(300),
    1,
    sym_enumerator,
    STATE(322),
    1,
    sym_enum_modifier,
    [8040] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(638),
    1,
    anon_sym_RBRACE,
    ACTIONS(640),
    1,
    anon_sym_bitfield,
    STATE(149),
    1,
    sym_comment,
    STATE(163),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(253),
    1,
    sym_bitfield_spec,
    STATE(321),
    1,
    sym_bitfield,
    [8062] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(642),
    1,
    anon_sym_RBRACE,
    ACTIONS(644),
    1,
    anon_sym_bitfield,
    STATE(253),
    1,
    sym_bitfield_spec,
    STATE(321),
    1,
    sym_bitfield,
    STATE(150),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [8082] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(151),
    1,
    sym_comment,
    ACTIONS(647),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [8096] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(649),
    1,
    sym_identifier,
    STATE(152),
    1,
    sym_comment,
    STATE(179),
    1,
    sym_declarator,
    STATE(221),
    1,
    sym_declarators,
    STATE(219),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8116] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(640),
    1,
    anon_sym_bitfield,
    ACTIONS(651),
    1,
    anon_sym_RBRACE,
    STATE(153),
    1,
    sym_comment,
    STATE(158),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(253),
    1,
    sym_bitfield_spec,
    STATE(321),
    1,
    sym_bitfield,
    [8138] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(649),
    1,
    sym_identifier,
    STATE(154),
    1,
    sym_comment,
    STATE(179),
    1,
    sym_declarator,
    STATE(234),
    1,
    sym_declarators,
    STATE(219),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8158] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(155),
    1,
    sym_comment,
    ACTIONS(653),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [8172] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(156),
    1,
    sym_comment,
    ACTIONS(655),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [8186] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(587),
    1,
    anon_sym_in,
    STATE(32),
    1,
    sym_param_attribute,
    STATE(157),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_param_dcl,
    ACTIONS(589),
    2,
    anon_sym_out,
    anon_sym_inout,
    [8206] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(640),
    1,
    anon_sym_bitfield,
    ACTIONS(657),
    1,
    anon_sym_RBRACE,
    STATE(150),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(158),
    1,
    sym_comment,
    STATE(253),
    1,
    sym_bitfield_spec,
    STATE(321),
    1,
    sym_bitfield,
    [8228] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(659),
    1,
    anon_sym_struct,
    ACTIONS(661),
    1,
    sym_final,
    ACTIONS(664),
    1,
    anon_sym_ATdata_representation,
    STATE(228),
    1,
    sym_data_representation,
    STATE(159),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [8248] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(649),
    1,
    sym_identifier,
    STATE(160),
    1,
    sym_comment,
    STATE(199),
    1,
    sym_any_declarator,
    STATE(396),
    1,
    sym_any_declarators,
    STATE(292),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8268] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(575),
    1,
    anon_sym_COMMA,
    ACTIONS(667),
    1,
    anon_sym_SEMI,
    ACTIONS(669),
    1,
    anon_sym_raises,
    STATE(161),
    1,
    sym_comment,
    STATE(237),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(375),
    1,
    sym_raises_expr,
    [8290] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(671),
    1,
    anon_sym_struct,
    STATE(159),
    1,
    aux_sym_struct_def_repeat1,
    STATE(162),
    1,
    sym_comment,
    STATE(228),
    1,
    sym_data_representation,
    [8312] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(640),
    1,
    anon_sym_bitfield,
    ACTIONS(673),
    1,
    anon_sym_RBRACE,
    STATE(150),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(163),
    1,
    sym_comment,
    STATE(253),
    1,
    sym_bitfield_spec,
    STATE(321),
    1,
    sym_bitfield,
    [8334] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(675),
    1,
    anon_sym_DOLLAR,
    STATE(164),
    1,
    sym_comment,
    ACTIONS(567),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [8349] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(649),
    1,
    sym_identifier,
    STATE(165),
    1,
    sym_comment,
    STATE(211),
    1,
    sym_declarator,
    STATE(219),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8366] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(677),
    1,
    sym_identifier,
    STATE(166),
    1,
    sym_comment,
    STATE(197),
    1,
    sym_scoped_name,
    STATE(198),
    1,
    sym_interface_name,
    [8385] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(500),
    1,
    sym_identifier,
    ACTIONS(679),
    1,
    anon_sym_COMMA,
    ACTIONS(681),
    1,
    anon_sym_RPAREN,
    STATE(167),
    1,
    sym_comment,
    STATE(206),
    1,
    aux_sym_raises_expr_repeat1,
    [8404] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(675),
    1,
    anon_sym_DOLLAR,
    STATE(168),
    1,
    sym_comment,
    ACTIONS(559),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [8419] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(683),
    1,
    anon_sym_RPAREN,
    ACTIONS(685),
    1,
    anon_sym_XCDR,
    ACTIONS(687),
    1,
    anon_sym_XCDR2,
    STATE(169),
    1,
    sym_comment,
    STATE(186),
    1,
    aux_sym_data_representation_repeat1,
    [8438] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(581),
    1,
    anon_sym_setraises,
    ACTIONS(689),
    1,
    anon_sym_SEMI,
    STATE(170),
    1,
    sym_comment,
    STATE(172),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(303),
    1,
    sym_set_excep_expr,
    [8457] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(677),
    1,
    sym_identifier,
    STATE(171),
    1,
    sym_comment,
    STATE(197),
    1,
    sym_scoped_name,
    STATE(331),
    1,
    sym_interface_name,
    [8476] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(581),
    1,
    anon_sym_setraises,
    ACTIONS(691),
    1,
    anon_sym_SEMI,
    STATE(172),
    1,
    sym_comment,
    STATE(188),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(303),
    1,
    sym_set_excep_expr,
    [8495] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(677),
    1,
    sym_identifier,
    ACTIONS(693),
    1,
    anon_sym_RPAREN,
    STATE(173),
    1,
    sym_comment,
    STATE(180),
    1,
    sym_scoped_name,
    [8514] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(695),
    1,
    anon_sym_SEMI,
    ACTIONS(697),
    1,
    anon_sym_LBRACE,
    ACTIONS(699),
    1,
    anon_sym_COLON,
    STATE(174),
    1,
    sym_comment,
    STATE(395),
    1,
    sym_interface_inheritance_spec,
    [8533] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(701),
    1,
    anon_sym_COMMA,
    STATE(175),
    1,
    sym_comment,
    STATE(181),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(703),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8550] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(176),
    1,
    sym_comment,
    ACTIONS(705),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [8563] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(707),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(710),
    1,
    sym_identifier,
    STATE(322),
    1,
    sym_enum_modifier,
    STATE(177),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [8580] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(677),
    1,
    sym_identifier,
    ACTIONS(712),
    1,
    anon_sym_RPAREN,
    STATE(167),
    1,
    sym_scoped_name,
    STATE(178),
    1,
    sym_comment,
    [8599] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(701),
    1,
    anon_sym_COMMA,
    STATE(175),
    1,
    aux_sym_declarators_repeat1,
    STATE(179),
    1,
    sym_comment,
    ACTIONS(714),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8616] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(500),
    1,
    sym_identifier,
    ACTIONS(679),
    1,
    anon_sym_COMMA,
    ACTIONS(716),
    1,
    anon_sym_RPAREN,
    STATE(180),
    1,
    sym_comment,
    STATE(223),
    1,
    aux_sym_raises_expr_repeat1,
    [8635] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(718),
    1,
    anon_sym_COMMA,
    ACTIONS(721),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(181),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [8650] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(182),
    1,
    sym_comment,
    ACTIONS(723),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8663] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(727),
    1,
    anon_sym_LBRACE,
    ACTIONS(729),
    1,
    anon_sym_COLON,
    STATE(183),
    1,
    sym_comment,
    ACTIONS(725),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8680] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(609),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(731),
    1,
    sym_identifier,
    STATE(177),
    1,
    aux_sym_enumerator_repeat1,
    STATE(184),
    1,
    sym_comment,
    STATE(322),
    1,
    sym_enum_modifier,
    [8699] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(733),
    1,
    anon_sym_LT,
    STATE(185),
    1,
    sym_comment,
    ACTIONS(735),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8714] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(737),
    1,
    anon_sym_RPAREN,
    ACTIONS(739),
    1,
    anon_sym_XCDR,
    ACTIONS(742),
    1,
    anon_sym_XCDR2,
    STATE(186),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [8731] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(187),
    1,
    sym_comment,
    ACTIONS(745),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8744] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(747),
    1,
    anon_sym_SEMI,
    ACTIONS(749),
    1,
    anon_sym_setraises,
    STATE(303),
    1,
    sym_set_excep_expr,
    STATE(188),
    2,
    sym_comment,
    aux_sym_attr_raises_expr_repeat1,
    [8761] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(189),
    1,
    sym_comment,
    ACTIONS(752),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8774] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(190),
    1,
    sym_comment,
    ACTIONS(754),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8787] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(649),
    1,
    sym_identifier,
    STATE(191),
    1,
    sym_comment,
    STATE(425),
    1,
    sym_declarator,
    STATE(219),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8804] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(649),
    1,
    sym_identifier,
    STATE(192),
    1,
    sym_comment,
    STATE(272),
    1,
    sym_any_declarator,
    STATE(292),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8821] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(193),
    1,
    sym_comment,
    ACTIONS(756),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [8834] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(758),
    1,
    anon_sym_COMMA,
    ACTIONS(761),
    1,
    anon_sym_RBRACE,
    STATE(194),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [8848] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(195),
    1,
    sym_comment,
    ACTIONS(763),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8860] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(765),
    1,
    anon_sym_COMMA,
    ACTIONS(767),
    1,
    anon_sym_SEMI,
    STATE(196),
    1,
    sym_comment,
    STATE(254),
    1,
    aux_sym_any_declarators_repeat1,
    [8876] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(500),
    1,
    sym_identifier,
    STATE(197),
    1,
    sym_comment,
    ACTIONS(769),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [8890] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(771),
    1,
    anon_sym_COMMA,
    ACTIONS(773),
    1,
    anon_sym_LBRACE,
    STATE(198),
    1,
    sym_comment,
    STATE(252),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [8906] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(765),
    1,
    anon_sym_COMMA,
    ACTIONS(775),
    1,
    anon_sym_SEMI,
    STATE(196),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(199),
    1,
    sym_comment,
    [8922] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(777),
    1,
    anon_sym_COMMA,
    ACTIONS(780),
    1,
    anon_sym_RPAREN,
    STATE(200),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [8936] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(201),
    1,
    sym_comment,
    ACTIONS(782),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8948] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(202),
    1,
    sym_comment,
    ACTIONS(784),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8960] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(203),
    1,
    sym_comment,
    ACTIONS(786),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8972] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(788),
    1,
    anon_sym_COMMA,
    ACTIONS(790),
    1,
    anon_sym_RPAREN,
    STATE(204),
    1,
    sym_comment,
    STATE(261),
    1,
    aux_sym_parameter_dcls_repeat1,
    [8988] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(500),
    1,
    sym_identifier,
    STATE(205),
    1,
    sym_comment,
    ACTIONS(792),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [9002] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(679),
    1,
    anon_sym_COMMA,
    ACTIONS(794),
    1,
    anon_sym_RPAREN,
    STATE(206),
    1,
    sym_comment,
    STATE(231),
    1,
    aux_sym_raises_expr_repeat1,
    [9018] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(798),
    1,
    sym_identifier,
    STATE(207),
    1,
    sym_comment,
    ACTIONS(796),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [9032] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(800),
    1,
    sym_identifier,
    STATE(129),
    1,
    sym_simple_declarator,
    STATE(208),
    1,
    sym_comment,
    STATE(415),
    1,
    sym_attr_declarator,
    [9048] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(802),
    1,
    anon_sym_SEMI,
    ACTIONS(804),
    1,
    anon_sym_switch,
    ACTIONS(806),
    1,
    sym_identifier,
    STATE(209),
    1,
    sym_comment,
    [9064] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(808),
    1,
    anon_sym_COMMA,
    ACTIONS(810),
    1,
    anon_sym_RBRACE,
    STATE(210),
    1,
    sym_comment,
    STATE(245),
    1,
    aux_sym_interface_body_repeat1,
    [9080] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(211),
    1,
    sym_comment,
    ACTIONS(721),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9092] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(812),
    1,
    anon_sym_COMMA,
    ACTIONS(815),
    1,
    anon_sym_RBRACE,
    STATE(212),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [9106] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(634),
    1,
    anon_sym_RBRACE,
    ACTIONS(817),
    1,
    anon_sym_COMMA,
    STATE(213),
    1,
    sym_comment,
    STATE(240),
    1,
    aux_sym_enum_dcl_repeat1,
    [9122] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(677),
    1,
    sym_identifier,
    STATE(214),
    1,
    sym_comment,
    STATE(288),
    1,
    sym_scoped_name,
    [9138] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(215),
    1,
    sym_comment,
    ACTIONS(819),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [9150] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(216),
    1,
    sym_comment,
    ACTIONS(821),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9162] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(685),
    1,
    anon_sym_XCDR,
    ACTIONS(687),
    1,
    anon_sym_XCDR2,
    STATE(169),
    1,
    aux_sym_data_representation_repeat1,
    STATE(217),
    1,
    sym_comment,
    [9178] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(218),
    1,
    sym_comment,
    ACTIONS(823),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [9190] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(219),
    1,
    sym_comment,
    ACTIONS(825),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9202] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(220),
    1,
    sym_comment,
    ACTIONS(796),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9214] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(827),
    1,
    anon_sym_SEMI,
    ACTIONS(829),
    1,
    anon_sym_default,
    STATE(221),
    1,
    sym_comment,
    STATE(393),
    1,
    sym_default,
    [9230] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(831),
    1,
    anon_sym_SEMI,
    ACTIONS(833),
    1,
    sym_identifier,
    STATE(222),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [9244] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(679),
    1,
    anon_sym_COMMA,
    ACTIONS(836),
    1,
    anon_sym_RPAREN,
    STATE(223),
    1,
    sym_comment,
    STATE(231),
    1,
    aux_sym_raises_expr_repeat1,
    [9260] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(817),
    1,
    anon_sym_COMMA,
    ACTIONS(838),
    1,
    anon_sym_RBRACE,
    STATE(194),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(224),
    1,
    sym_comment,
    [9276] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(677),
    1,
    sym_identifier,
    STATE(225),
    1,
    sym_comment,
    STATE(315),
    1,
    sym_scoped_name,
    [9292] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(840),
    1,
    anon_sym_RBRACE,
    ACTIONS(842),
    1,
    sym_identifier,
    STATE(226),
    1,
    sym_comment,
    STATE(243),
    1,
    sym_bit_value,
    [9308] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(844),
    1,
    anon_sym_CARET,
    STATE(227),
    1,
    sym_comment,
    ACTIONS(583),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [9322] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(228),
    1,
    sym_comment,
    ACTIONS(846),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [9334] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(677),
    1,
    sym_identifier,
    STATE(229),
    1,
    sym_comment,
    STATE(313),
    1,
    sym_scoped_name,
    [9350] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(230),
    1,
    sym_comment,
    ACTIONS(848),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [9362] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(792),
    1,
    anon_sym_RPAREN,
    ACTIONS(850),
    1,
    anon_sym_COMMA,
    STATE(231),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [9376] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(232),
    1,
    sym_comment,
    ACTIONS(853),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [9388] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(233),
    1,
    sym_comment,
    ACTIONS(855),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9400] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(829),
    1,
    anon_sym_default,
    ACTIONS(857),
    1,
    anon_sym_SEMI,
    STATE(234),
    1,
    sym_comment,
    STATE(365),
    1,
    sym_default,
    [9416] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(235),
    1,
    sym_comment,
    ACTIONS(859),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9428] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(236),
    1,
    sym_comment,
    ACTIONS(861),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9440] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(575),
    1,
    anon_sym_COMMA,
    ACTIONS(863),
    1,
    anon_sym_SEMI,
    STATE(237),
    1,
    sym_comment,
    STATE(248),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [9456] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(808),
    1,
    anon_sym_COMMA,
    ACTIONS(865),
    1,
    anon_sym_RBRACE,
    STATE(210),
    1,
    aux_sym_interface_body_repeat1,
    STATE(238),
    1,
    sym_comment,
    [9472] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(867),
    1,
    anon_sym_COMMA,
    ACTIONS(870),
    1,
    anon_sym_LBRACE,
    STATE(239),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [9486] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(817),
    1,
    anon_sym_COMMA,
    ACTIONS(872),
    1,
    anon_sym_RBRACE,
    STATE(194),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(240),
    1,
    sym_comment,
    [9502] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(241),
    1,
    sym_comment,
    ACTIONS(444),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9514] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(242),
    1,
    sym_comment,
    ACTIONS(448),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9526] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(874),
    1,
    anon_sym_COMMA,
    ACTIONS(876),
    1,
    anon_sym_RBRACE,
    STATE(243),
    1,
    sym_comment,
    STATE(250),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [9542] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(878),
    1,
    anon_sym_SEMI,
    ACTIONS(880),
    1,
    sym_identifier,
    STATE(222),
    1,
    aux_sym_bitfield_repeat1,
    STATE(244),
    1,
    sym_comment,
    [9558] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(882),
    1,
    anon_sym_COMMA,
    ACTIONS(885),
    1,
    anon_sym_RBRACE,
    STATE(245),
    2,
    sym_comment,
    aux_sym_interface_body_repeat1,
    [9572] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(246),
    1,
    sym_comment,
    ACTIONS(887),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9584] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(817),
    1,
    anon_sym_COMMA,
    ACTIONS(889),
    1,
    anon_sym_RBRACE,
    STATE(194),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(247),
    1,
    sym_comment,
    [9600] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(891),
    1,
    anon_sym_COMMA,
    ACTIONS(894),
    1,
    anon_sym_SEMI,
    STATE(248),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [9614] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(800),
    1,
    sym_identifier,
    STATE(161),
    1,
    sym_simple_declarator,
    STATE(249),
    1,
    sym_comment,
    STATE(353),
    1,
    sym_readonly_attr_declarator,
    [9630] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(874),
    1,
    anon_sym_COMMA,
    ACTIONS(896),
    1,
    anon_sym_RBRACE,
    STATE(212),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(250),
    1,
    sym_comment,
    [9646] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(817),
    1,
    anon_sym_COMMA,
    ACTIONS(872),
    1,
    anon_sym_RBRACE,
    STATE(247),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(251),
    1,
    sym_comment,
    [9662] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(771),
    1,
    anon_sym_COMMA,
    ACTIONS(898),
    1,
    anon_sym_LBRACE,
    STATE(239),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(252),
    1,
    sym_comment,
    [9678] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(880),
    1,
    sym_identifier,
    ACTIONS(900),
    1,
    anon_sym_SEMI,
    STATE(244),
    1,
    aux_sym_bitfield_repeat1,
    STATE(253),
    1,
    sym_comment,
    [9694] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(902),
    1,
    anon_sym_COMMA,
    ACTIONS(905),
    1,
    anon_sym_SEMI,
    STATE(254),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [9708] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(669),
    1,
    anon_sym_raises,
    ACTIONS(907),
    1,
    anon_sym_SEMI,
    STATE(255),
    1,
    sym_comment,
    STATE(334),
    1,
    sym_raises_expr,
    [9724] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(575),
    1,
    anon_sym_COMMA,
    ACTIONS(909),
    1,
    anon_sym_SEMI,
    STATE(248),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(256),
    1,
    sym_comment,
    [9740] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(619),
    1,
    anon_sym_RBRACE,
    ACTIONS(817),
    1,
    anon_sym_COMMA,
    STATE(257),
    1,
    sym_comment,
    STATE(264),
    1,
    aux_sym_enum_dcl_repeat1,
    [9756] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(844),
    1,
    anon_sym_CARET,
    STATE(258),
    1,
    sym_comment,
    ACTIONS(571),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [9770] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(677),
    1,
    sym_identifier,
    STATE(205),
    1,
    sym_scoped_name,
    STATE(259),
    1,
    sym_comment,
    [9786] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(913),
    1,
    anon_sym_XCDR,
    STATE(260),
    1,
    sym_comment,
    ACTIONS(911),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [9800] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(788),
    1,
    anon_sym_COMMA,
    ACTIONS(915),
    1,
    anon_sym_RPAREN,
    STATE(200),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(261),
    1,
    sym_comment,
    [9816] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(697),
    1,
    anon_sym_LBRACE,
    ACTIONS(699),
    1,
    anon_sym_COLON,
    STATE(262),
    1,
    sym_comment,
    STATE(395),
    1,
    sym_interface_inheritance_spec,
    [9832] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(669),
    1,
    anon_sym_raises,
    ACTIONS(917),
    1,
    anon_sym_SEMI,
    STATE(263),
    1,
    sym_comment,
    STATE(384),
    1,
    sym_raises_expr,
    [9848] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(817),
    1,
    anon_sym_COMMA,
    ACTIONS(919),
    1,
    anon_sym_RBRACE,
    STATE(194),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(264),
    1,
    sym_comment,
    [9864] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(817),
    1,
    anon_sym_COMMA,
    ACTIONS(919),
    1,
    anon_sym_RBRACE,
    STATE(224),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(265),
    1,
    sym_comment,
    [9880] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(266),
    1,
    sym_comment,
    ACTIONS(921),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9892] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(267),
    1,
    sym_comment,
    ACTIONS(923),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9904] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(268),
    1,
    sym_comment,
    ACTIONS(925),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9915] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(927),
    1,
    anon_sym_DQUOTE,
    ACTIONS(929),
    1,
    anon_sym_SQUOTE,
    STATE(269),
    1,
    sym_comment,
    [9928] = 4,
    ACTIONS(931),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(933),
    1,
    sym_preproc_arg,
    ACTIONS(935),
    1,
    anon_sym_SLASH_SLASH,
    STATE(270),
    1,
    sym_comment,
    [9941] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(800),
    1,
    sym_identifier,
    STATE(271),
    1,
    sym_comment,
    STATE(441),
    1,
    sym_simple_declarator,
    [9954] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(272),
    1,
    sym_comment,
    ACTIONS(905),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [9965] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(593),
    1,
    anon_sym_typedef,
    ACTIONS(937),
    1,
    anon_sym_PIPE,
    STATE(273),
    1,
    sym_comment,
    [9978] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(500),
    1,
    sym_identifier,
    ACTIONS(796),
    1,
    anon_sym_COMMA,
    STATE(274),
    1,
    sym_comment,
    [9991] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(544),
    1,
    anon_sym_interface,
    STATE(275),
    1,
    sym_comment,
    STATE(421),
    1,
    sym_interface_header,
    [10004] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(939),
    1,
    anon_sym_LBRACE,
    ACTIONS(941),
    1,
    anon_sym_COLON,
    STATE(276),
    1,
    sym_comment,
    [10017] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(277),
    1,
    sym_comment,
    ACTIONS(943),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10028] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(278),
    1,
    sym_comment,
    ACTIONS(945),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10039] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(279),
    1,
    sym_comment,
    ACTIONS(947),
    2,
    anon_sym_SEMI,
    anon_sym_typedef,
    [10050] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(280),
    1,
    sym_comment,
    ACTIONS(949),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10061] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(281),
    1,
    sym_comment,
    ACTIONS(951),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10072] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(282),
    1,
    sym_comment,
    ACTIONS(953),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10083] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(283),
    1,
    sym_comment,
    ACTIONS(955),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10094] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(284),
    1,
    sym_comment,
    ACTIONS(885),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10105] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(842),
    1,
    sym_identifier,
    STATE(285),
    1,
    sym_comment,
    STATE(312),
    1,
    sym_bit_value,
    [10118] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(286),
    1,
    sym_comment,
    ACTIONS(780),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10129] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(287),
    1,
    sym_comment,
    ACTIONS(957),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10140] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(500),
    1,
    sym_identifier,
    ACTIONS(959),
    1,
    anon_sym_LBRACE,
    STATE(288),
    1,
    sym_comment,
    [10153] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(289),
    1,
    sym_comment,
    ACTIONS(961),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10164] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(544),
    1,
    anon_sym_interface,
    STATE(290),
    1,
    sym_comment,
    STATE(372),
    1,
    sym_interface_header,
    [10177] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(291),
    1,
    sym_comment,
    ACTIONS(963),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10188] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(292),
    1,
    sym_comment,
    ACTIONS(965),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [10199] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(500),
    1,
    sym_identifier,
    ACTIONS(967),
    1,
    anon_sym_RPAREN,
    STATE(293),
    1,
    sym_comment,
    [10212] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(294),
    1,
    sym_comment,
    ACTIONS(969),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10223] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(295),
    1,
    sym_comment,
    ACTIONS(971),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10234] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(973),
    1,
    anon_sym_SEMI,
    ACTIONS(975),
    1,
    anon_sym_default,
    STATE(296),
    1,
    sym_comment,
    [10247] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(800),
    1,
    sym_identifier,
    STATE(283),
    1,
    sym_simple_declarator,
    STATE(297),
    1,
    sym_comment,
    [10260] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(298),
    1,
    sym_comment,
    ACTIONS(977),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10271] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(29),
    1,
    anon_sym_typedef,
    STATE(299),
    1,
    sym_comment,
    STATE(388),
    1,
    sym_typedef_dcl,
    [10284] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(300),
    1,
    sym_comment,
    ACTIONS(761),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10295] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(301),
    1,
    sym_comment,
    ACTIONS(979),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10306] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(302),
    1,
    sym_comment,
    ACTIONS(981),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10317] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(303),
    1,
    sym_comment,
    ACTIONS(983),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10328] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(304),
    1,
    sym_comment,
    ACTIONS(985),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10339] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(305),
    1,
    sym_comment,
    ACTIONS(987),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10350] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(306),
    1,
    sym_comment,
    ACTIONS(989),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10361] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(991),
    1,
    anon_sym_GT,
    ACTIONS(993),
    1,
    anon_sym_COMMA,
    STATE(307),
    1,
    sym_comment,
    [10374] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(308),
    1,
    sym_comment,
    ACTIONS(995),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10385] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(309),
    1,
    sym_comment,
    ACTIONS(997),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10396] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(310),
    1,
    sym_comment,
    ACTIONS(894),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [10407] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(311),
    1,
    sym_comment,
    ACTIONS(999),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10418] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(312),
    1,
    sym_comment,
    ACTIONS(815),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10429] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(500),
    1,
    sym_identifier,
    ACTIONS(1001),
    1,
    anon_sym_LBRACE,
    STATE(313),
    1,
    sym_comment,
    [10442] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(314),
    1,
    sym_comment,
    ACTIONS(1003),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10453] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(500),
    1,
    sym_identifier,
    ACTIONS(1005),
    1,
    anon_sym_LBRACE,
    STATE(315),
    1,
    sym_comment,
    [10466] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(800),
    1,
    sym_identifier,
    STATE(310),
    1,
    sym_simple_declarator,
    STATE(316),
    1,
    sym_comment,
    [10479] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1007),
    1,
    anon_sym_LPAREN,
    STATE(309),
    1,
    sym_exception_list,
    STATE(317),
    1,
    sym_comment,
    [10492] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(318),
    1,
    sym_comment,
    ACTIONS(1009),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10503] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1007),
    1,
    anon_sym_LPAREN,
    STATE(306),
    1,
    sym_exception_list,
    STATE(319),
    1,
    sym_comment,
    [10516] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(320),
    1,
    sym_comment,
    ACTIONS(1011),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10527] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(321),
    1,
    sym_comment,
    ACTIONS(1013),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10538] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(322),
    1,
    sym_comment,
    ACTIONS(1015),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [10549] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(323),
    1,
    sym_comment,
    ACTIONS(1017),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10560] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(324),
    1,
    sym_comment,
    ACTIONS(1019),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10571] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(800),
    1,
    sym_identifier,
    STATE(296),
    1,
    sym_simple_declarator,
    STATE(325),
    1,
    sym_comment,
    [10584] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(326),
    1,
    sym_comment,
    ACTIONS(1021),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [10595] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1023),
    1,
    anon_sym_LBRACE,
    ACTIONS(1025),
    1,
    anon_sym_COLON,
    STATE(327),
    1,
    sym_comment,
    [10608] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1027),
    1,
    anon_sym_const,
    STATE(299),
    1,
    sym_const_dcl,
    STATE(328),
    1,
    sym_comment,
    [10621] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1029),
    1,
    anon_sym_GT,
    ACTIONS(1031),
    1,
    anon_sym_COMMA,
    STATE(329),
    1,
    sym_comment,
    [10634] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(330),
    1,
    sym_comment,
    ACTIONS(1033),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10645] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(331),
    1,
    sym_comment,
    ACTIONS(870),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [10656] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(332),
    1,
    sym_comment,
    ACTIONS(1035),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10667] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1037),
    1,
    anon_sym_SEMI,
    STATE(333),
    1,
    sym_comment,
    [10677] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1039),
    1,
    anon_sym_SEMI,
    STATE(334),
    1,
    sym_comment,
    [10687] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1041),
    1,
    anon_sym_SEMI,
    STATE(335),
    1,
    sym_comment,
    [10697] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1043),
    1,
    sym_identifier,
    STATE(336),
    1,
    sym_comment,
    [10707] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1045),
    1,
    anon_sym_LPAREN,
    STATE(337),
    1,
    sym_comment,
    [10717] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1047),
    1,
    anon_sym_DQUOTE,
    STATE(338),
    1,
    sym_comment,
    [10727] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1049),
    1,
    anon_sym_SQUOTE,
    STATE(339),
    1,
    sym_comment,
    [10737] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1051),
    1,
    aux_sym_string_literal_token1,
    STATE(340),
    1,
    sym_comment,
    [10747] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1053),
    1,
    aux_sym_string_literal_token1,
    STATE(341),
    1,
    sym_comment,
    [10757] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(242),
    1,
    anon_sym_RBRACE,
    STATE(342),
    1,
    sym_comment,
    [10767] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1055),
    1,
    anon_sym_SEMI,
    STATE(343),
    1,
    sym_comment,
    [10777] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1057),
    1,
    anon_sym_COMMA,
    STATE(344),
    1,
    sym_comment,
    [10787] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1059),
    1,
    anon_sym_GT,
    STATE(345),
    1,
    sym_comment,
    [10797] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1061),
    1,
    anon_sym_GT,
    STATE(346),
    1,
    sym_comment,
    [10807] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1063),
    1,
    anon_sym_RPAREN,
    STATE(347),
    1,
    sym_comment,
    [10817] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1065),
    1,
    anon_sym_GT,
    STATE(348),
    1,
    sym_comment,
    [10827] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1067),
    1,
    anon_sym_COMMA,
    STATE(349),
    1,
    sym_comment,
    [10837] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1069),
    1,
    aux_sym_char_literal_token1,
    STATE(350),
    1,
    sym_comment,
    [10847] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1071),
    1,
    aux_sym_string_literal_token1,
    STATE(351),
    1,
    sym_comment,
    [10857] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1073),
    1,
    anon_sym_SEMI,
    STATE(352),
    1,
    sym_comment,
    [10867] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1075),
    1,
    anon_sym_SEMI,
    STATE(353),
    1,
    sym_comment,
    [10877] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(909),
    1,
    anon_sym_SEMI,
    STATE(354),
    1,
    sym_comment,
    [10887] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(689),
    1,
    anon_sym_SEMI,
    STATE(355),
    1,
    sym_comment,
    [10897] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1077),
    1,
    anon_sym_LT,
    STATE(356),
    1,
    sym_comment,
    [10907] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1079),
    1,
    anon_sym_SEMI,
    STATE(357),
    1,
    sym_comment,
    [10917] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1081),
    1,
    anon_sym_RPAREN,
    STATE(358),
    1,
    sym_comment,
    [10927] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1083),
    1,
    anon_sym_RBRACE,
    STATE(359),
    1,
    sym_comment,
    [10937] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1085),
    1,
    anon_sym_SEMI,
    STATE(360),
    1,
    sym_comment,
    [10947] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1087),
    1,
    anon_sym_SEMI,
    STATE(361),
    1,
    sym_comment,
    [10957] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1089),
    1,
    sym_identifier,
    STATE(362),
    1,
    sym_comment,
    [10967] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1091),
    1,
    anon_sym_SEMI,
    STATE(363),
    1,
    sym_comment,
    [10977] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1093),
    1,
    anon_sym_SEMI,
    STATE(364),
    1,
    sym_comment,
    [10987] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1095),
    1,
    anon_sym_SEMI,
    STATE(365),
    1,
    sym_comment,
    [10997] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1097),
    1,
    anon_sym_SEMI,
    STATE(366),
    1,
    sym_comment,
    [11007] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1099),
    1,
    anon_sym_SEMI,
    STATE(367),
    1,
    sym_comment,
    [11017] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1101),
    1,
    anon_sym_SEMI,
    STATE(368),
    1,
    sym_comment,
    [11027] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1103),
    1,
    sym_identifier,
    STATE(369),
    1,
    sym_comment,
    [11037] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1105),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(370),
    1,
    sym_comment,
    [11047] = 3,
    ACTIONS(935),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1107),
    1,
    aux_sym_comment_token1,
    STATE(371),
    1,
    sym_comment,
    [11057] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1109),
    1,
    anon_sym_LBRACE,
    STATE(372),
    1,
    sym_comment,
    [11067] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1111),
    1,
    anon_sym_GT,
    STATE(373),
    1,
    sym_comment,
    [11077] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1113),
    1,
    anon_sym_LPAREN,
    STATE(374),
    1,
    sym_comment,
    [11087] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(863),
    1,
    anon_sym_SEMI,
    STATE(375),
    1,
    sym_comment,
    [11097] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1115),
    1,
    sym_identifier,
    STATE(376),
    1,
    sym_comment,
    [11107] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1117),
    1,
    anon_sym_RBRACK,
    STATE(377),
    1,
    sym_comment,
    [11117] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1119),
    1,
    anon_sym_SEMI,
    STATE(378),
    1,
    sym_comment,
    [11127] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1121),
    1,
    anon_sym_SEMI,
    STATE(379),
    1,
    sym_comment,
    [11137] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1123),
    1,
    anon_sym_SEMI,
    STATE(380),
    1,
    sym_comment,
    [11147] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1125),
    1,
    anon_sym_LBRACE,
    STATE(381),
    1,
    sym_comment,
    [11157] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(240),
    1,
    anon_sym_RBRACE,
    STATE(382),
    1,
    sym_comment,
    [11167] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1127),
    1,
    anon_sym_attribute,
    STATE(383),
    1,
    sym_comment,
    [11177] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(907),
    1,
    anon_sym_SEMI,
    STATE(384),
    1,
    sym_comment,
    [11187] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1129),
    1,
    sym_identifier,
    STATE(385),
    1,
    sym_comment,
    [11197] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1131),
    1,
    anon_sym_SEMI,
    STATE(386),
    1,
    sym_comment,
    [11207] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1133),
    1,
    anon_sym_LBRACE,
    STATE(387),
    1,
    sym_comment,
    [11217] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1135),
    1,
    anon_sym_SEMI,
    STATE(388),
    1,
    sym_comment,
    [11227] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1137),
    1,
    anon_sym_SEMI,
    STATE(389),
    1,
    sym_comment,
    [11237] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1139),
    1,
    anon_sym_EQ,
    STATE(390),
    1,
    sym_comment,
    [11247] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1141),
    1,
    anon_sym_EQ,
    STATE(391),
    1,
    sym_comment,
    [11257] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1143),
    1,
    anon_sym_EQ,
    STATE(392),
    1,
    sym_comment,
    [11267] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1145),
    1,
    anon_sym_SEMI,
    STATE(393),
    1,
    sym_comment,
    [11277] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1147),
    1,
    anon_sym_COLON,
    STATE(394),
    1,
    sym_comment,
    [11287] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1149),
    1,
    anon_sym_LBRACE,
    STATE(395),
    1,
    sym_comment,
    [11297] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1151),
    1,
    anon_sym_SEMI,
    STATE(396),
    1,
    sym_comment,
    [11307] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(967),
    1,
    anon_sym_RPAREN,
    STATE(397),
    1,
    sym_comment,
    [11317] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1153),
    1,
    anon_sym_LPAREN,
    STATE(398),
    1,
    sym_comment,
    [11327] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1155),
    1,
    anon_sym_GT,
    STATE(399),
    1,
    sym_comment,
    [11337] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1157),
    1,
    anon_sym_GT,
    STATE(400),
    1,
    sym_comment,
    [11347] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1159),
    1,
    anon_sym_GT,
    STATE(401),
    1,
    sym_comment,
    [11357] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1161),
    1,
    anon_sym_RPAREN,
    STATE(402),
    1,
    sym_comment,
    [11367] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1163),
    1,
    anon_sym_DQUOTE,
    STATE(403),
    1,
    sym_comment,
    [11377] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1165),
    1,
    sym_identifier,
    STATE(404),
    1,
    sym_comment,
    [11387] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1167),
    1,
    sym_identifier,
    STATE(405),
    1,
    sym_comment,
    [11397] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1169),
    1,
    anon_sym_SEMI,
    STATE(406),
    1,
    sym_comment,
    [11407] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1171),
    1,
    anon_sym_RBRACE,
    STATE(407),
    1,
    sym_comment,
    [11417] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1173),
    1,
    sym_identifier,
    STATE(408),
    1,
    sym_comment,
    [11427] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1175),
    1,
    anon_sym_SEMI,
    STATE(409),
    1,
    sym_comment,
    [11437] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1177),
    1,
    anon_sym_SEMI,
    STATE(410),
    1,
    sym_comment,
    [11447] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1179),
    1,
    sym_identifier,
    STATE(411),
    1,
    sym_comment,
    [11457] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_COLON,
    STATE(412),
    1,
    sym_comment,
    [11467] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1183),
    1,
    sym_identifier,
    STATE(413),
    1,
    sym_comment,
    [11477] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1185),
    1,
    anon_sym_SEMI,
    STATE(414),
    1,
    sym_comment,
    [11487] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1187),
    1,
    anon_sym_SEMI,
    STATE(415),
    1,
    sym_comment,
    [11497] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1179),
    1,
    sym_identifier,
    STATE(416),
    1,
    sym_comment,
    [11507] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1189),
    1,
    anon_sym_RPAREN,
    STATE(417),
    1,
    sym_comment,
    [11517] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1191),
    1,
    anon_sym_name,
    STATE(418),
    1,
    sym_comment,
    [11527] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1193),
    1,
    anon_sym_SEMI,
    STATE(419),
    1,
    sym_comment,
    [11537] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1195),
    1,
    anon_sym_name,
    STATE(420),
    1,
    sym_comment,
    [11547] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1197),
    1,
    anon_sym_LBRACE,
    STATE(421),
    1,
    sym_comment,
    [11557] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1199),
    1,
    aux_sym_string_literal_token1,
    STATE(422),
    1,
    sym_comment,
    [11567] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1201),
    1,
    sym_identifier,
    STATE(423),
    1,
    sym_comment,
    [11577] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1203),
    1,
    anon_sym_SEMI,
    STATE(424),
    1,
    sym_comment,
    [11587] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1205),
    1,
    anon_sym_SEMI,
    STATE(425),
    1,
    sym_comment,
    [11597] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(796),
    1,
    sym_identifier,
    STATE(426),
    1,
    sym_comment,
    [11607] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1207),
    1,
    anon_sym_SEMI,
    STATE(427),
    1,
    sym_comment,
    [11617] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1209),
    1,
    anon_sym_LT,
    STATE(428),
    1,
    sym_comment,
    [11627] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1211),
    1,
    anon_sym_LT,
    STATE(429),
    1,
    sym_comment,
    [11637] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1213),
    1,
    anon_sym_RPAREN,
    STATE(430),
    1,
    sym_comment,
    [11647] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(500),
    1,
    sym_identifier,
    STATE(431),
    1,
    sym_comment,
    [11657] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1215),
    1,
    anon_sym_SEMI,
    STATE(432),
    1,
    sym_comment,
    [11667] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1217),
    1,
    anon_sym_LT,
    STATE(433),
    1,
    sym_comment,
    [11677] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1219),
    1,
    anon_sym_LBRACE,
    STATE(434),
    1,
    sym_comment,
    [11687] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1221),
    1,
    anon_sym_RPAREN,
    STATE(435),
    1,
    sym_comment,
    [11697] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1035),
    1,
    anon_sym_const,
    STATE(436),
    1,
    sym_comment,
    [11707] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1223),
    1,
    anon_sym_LBRACE,
    STATE(437),
    1,
    sym_comment,
    [11717] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1225),
    1,
    anon_sym_LBRACE,
    STATE(438),
    1,
    sym_comment,
    [11727] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1227),
    1,
    anon_sym_LBRACE,
    STATE(439),
    1,
    sym_comment,
    [11737] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(985),
    1,
    anon_sym_const,
    STATE(440),
    1,
    sym_comment,
    [11747] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1229),
    1,
    anon_sym_SEMI,
    STATE(441),
    1,
    sym_comment,
    [11757] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1231),
    1,
    anon_sym_LBRACE,
    STATE(442),
    1,
    sym_comment,
    [11767] = 3,
    ACTIONS(935),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1233),
    1,
    aux_sym_preproc_call_token1,
    STATE(443),
    1,
    sym_comment,
    [11777] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1235),
    1,
    anon_sym_enum,
    STATE(444),
    1,
    sym_comment,
    [11787] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1237),
    1,
    anon_sym_LBRACE,
    STATE(445),
    1,
    sym_comment,
    [11797] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1239),
    1,
    anon_sym_SEMI,
    STATE(446),
    1,
    sym_comment,
    [11807] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1241),
    1,
    anon_sym_enum,
    STATE(447),
    1,
    sym_comment,
    [11817] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(979),
    1,
    anon_sym_const,
    STATE(448),
    1,
    sym_comment,
    [11827] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1243),
    1,
    anon_sym_SEMI,
    STATE(449),
    1,
    sym_comment,
    [11837] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1245),
    1,
    ts_builtin_sym_end,
    STATE(450),
    1,
    sym_comment,
    [11847] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1247),
    1,
    anon_sym_LPAREN,
    STATE(451),
    1,
    sym_comment,
    [11857] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1249),
    1,
    anon_sym_LPAREN,
    STATE(452),
    1,
    sym_comment,
    [11867] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1251),
    1,
    anon_sym_LPAREN,
    STATE(453),
    1,
    sym_comment,
    [11877] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1003),
    1,
    anon_sym_const,
    STATE(454),
    1,
    sym_comment,
    [11887] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1253),
    1,
    anon_sym_SEMI,
    STATE(455),
    1,
    sym_comment,
    [11897] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1255),
    1,
    aux_sym_char_literal_token1,
    STATE(456),
    1,
    sym_comment,
    [11907] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1257),
    1,
    sym_identifier,
    STATE(457),
    1,
    sym_comment,
    [11917] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(798),
    1,
    sym_identifier,
    STATE(458),
    1,
    sym_comment,
    [11927] = 3,
    ACTIONS(935),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1259),
    1,
    aux_sym_predefine_token1,
    STATE(459),
    1,
    sym_comment,
    [11937] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1261),
    1,
    anon_sym_EQ,
    STATE(460),
    1,
    sym_comment,
    [11947] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1263),
    1,
    sym_identifier,
    STATE(461),
    1,
    sym_comment,
    [11957] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_DQUOTE,
    STATE(462),
    1,
    sym_comment,
    [11967] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1267),
    1,
    sym_identifier,
    STATE(463),
    1,
    sym_comment,
    [11977] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1269),
    1,
    sym_identifier,
    STATE(464),
    1,
    sym_comment,
    [11987] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1271),
    1,
    sym_identifier,
    STATE(465),
    1,
    sym_comment,
    [11997] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1273),
    1,
    anon_sym_enum,
    STATE(466),
    1,
    sym_comment,
    [12007] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1275),
    1,
    sym_identifier,
    STATE(467),
    1,
    sym_comment,
    [12017] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1277),
    1,
    sym_identifier,
    STATE(468),
    1,
    sym_comment,
    [12027] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1279),
    1,
    sym_identifier,
    STATE(469),
    1,
    sym_comment,
    [12037] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1281),
    1,
    anon_sym_SQUOTE,
    STATE(470),
    1,
    sym_comment,
    [12047] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1283),
    1,
    sym_identifier,
    STATE(471),
    1,
    sym_comment,
    [12057] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1285),
    1,
    sym_identifier,
    STATE(472),
    1,
    sym_comment,
    [12067] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1287),
    1,
    anon_sym_LBRACE,
    STATE(473),
    1,
    sym_comment,
    [12077] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1289),
    1,
    sym_identifier,
    STATE(474),
    1,
    sym_comment,
    [12087] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1291),
    1,
    anon_sym_LBRACE,
    STATE(475),
    1,
    sym_comment,
    [12097] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1293),
    1,
    sym_identifier,
    STATE(476),
    1,
    sym_comment,
    [12107] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1179),
    1,
    sym_identifier,
    STATE(477),
    1,
    sym_comment,
    [12117] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1295),
    1,
    sym_identifier,
    STATE(478),
    1,
    sym_comment,
    [12127] = 1,
    ACTIONS(1297),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(2)] = 0,
    [SMALL_STATE(3)] = 130,
    [SMALL_STATE(4)] = 246,
    [SMALL_STATE(5)] = 362,
    [SMALL_STATE(6)] = 478,
    [SMALL_STATE(7)] = 594,
    [SMALL_STATE(8)] = 714,
    [SMALL_STATE(9)] = 830,
    [SMALL_STATE(10)] = 946,
    [SMALL_STATE(11)] = 1062,
    [SMALL_STATE(12)] = 1176,
    [SMALL_STATE(13)] = 1292,
    [SMALL_STATE(14)] = 1408,
    [SMALL_STATE(15)] = 1524,
    [SMALL_STATE(16)] = 1645,
    [SMALL_STATE(17)] = 1766,
    [SMALL_STATE(18)] = 1887,
    [SMALL_STATE(19)] = 2002,
    [SMALL_STATE(20)] = 2123,
    [SMALL_STATE(21)] = 2230,
    [SMALL_STATE(22)] = 2342,
    [SMALL_STATE(23)] = 2454,
    [SMALL_STATE(24)] = 2566,
    [SMALL_STATE(25)] = 2672,
    [SMALL_STATE(26)] = 2772,
    [SMALL_STATE(27)] = 2869,
    [SMALL_STATE(28)] = 2964,
    [SMALL_STATE(29)] = 3053,
    [SMALL_STATE(30)] = 3139,
    [SMALL_STATE(31)] = 3222,
    [SMALL_STATE(32)] = 3305,
    [SMALL_STATE(33)] = 3388,
    [SMALL_STATE(34)] = 3471,
    [SMALL_STATE(35)] = 3554,
    [SMALL_STATE(36)] = 3607,
    [SMALL_STATE(37)] = 3647,
    [SMALL_STATE(38)] = 3717,
    [SMALL_STATE(39)] = 3757,
    [SMALL_STATE(40)] = 3797,
    [SMALL_STATE(41)] = 3837,
    [SMALL_STATE(42)] = 3877,
    [SMALL_STATE(43)] = 3947,
    [SMALL_STATE(44)] = 3986,
    [SMALL_STATE(45)] = 4025,
    [SMALL_STATE(46)] = 4064,
    [SMALL_STATE(47)] = 4103,
    [SMALL_STATE(48)] = 4183,
    [SMALL_STATE(49)] = 4263,
    [SMALL_STATE(50)] = 4343,
    [SMALL_STATE(51)] = 4423,
    [SMALL_STATE(52)] = 4503,
    [SMALL_STATE(53)] = 4583,
    [SMALL_STATE(54)] = 4663,
    [SMALL_STATE(55)] = 4740,
    [SMALL_STATE(56)] = 4817,
    [SMALL_STATE(57)] = 4894,
    [SMALL_STATE(58)] = 4971,
    [SMALL_STATE(59)] = 5048,
    [SMALL_STATE(60)] = 5125,
    [SMALL_STATE(61)] = 5202,
    [SMALL_STATE(62)] = 5241,
    [SMALL_STATE(63)] = 5312,
    [SMALL_STATE(64)] = 5383,
    [SMALL_STATE(65)] = 5451,
    [SMALL_STATE(66)] = 5485,
    [SMALL_STATE(67)] = 5519,
    [SMALL_STATE(68)] = 5553,
    [SMALL_STATE(69)] = 5587,
    [SMALL_STATE(70)] = 5655,
    [SMALL_STATE(71)] = 5686,
    [SMALL_STATE(72)] = 5717,
    [SMALL_STATE(73)] = 5782,
    [SMALL_STATE(74)] = 5813,
    [SMALL_STATE(75)] = 5846,
    [SMALL_STATE(76)] = 5911,
    [SMALL_STATE(77)] = 5942,
    [SMALL_STATE(78)] = 5973,
    [SMALL_STATE(79)] = 6004,
    [SMALL_STATE(80)] = 6037,
    [SMALL_STATE(81)] = 6070,
    [SMALL_STATE(82)] = 6132,
    [SMALL_STATE(83)] = 6194,
    [SMALL_STATE(84)] = 6225,
    [SMALL_STATE(85)] = 6284,
    [SMALL_STATE(86)] = 6343,
    [SMALL_STATE(87)] = 6374,
    [SMALL_STATE(88)] = 6405,
    [SMALL_STATE(89)] = 6461,
    [SMALL_STATE(90)] = 6517,
    [SMALL_STATE(91)] = 6546,
    [SMALL_STATE(92)] = 6575,
    [SMALL_STATE(93)] = 6623,
    [SMALL_STATE(94)] = 6651,
    [SMALL_STATE(95)] = 6679,
    [SMALL_STATE(96)] = 6707,
    [SMALL_STATE(97)] = 6735,
    [SMALL_STATE(98)] = 6763,
    [SMALL_STATE(99)] = 6791,
    [SMALL_STATE(100)] = 6819,
    [SMALL_STATE(101)] = 6847,
    [SMALL_STATE(102)] = 6875,
    [SMALL_STATE(103)] = 6903,
    [SMALL_STATE(104)] = 6931,
    [SMALL_STATE(105)] = 6959,
    [SMALL_STATE(106)] = 6989,
    [SMALL_STATE(107)] = 7019,
    [SMALL_STATE(108)] = 7050,
    [SMALL_STATE(109)] = 7081,
    [SMALL_STATE(110)] = 7124,
    [SMALL_STATE(111)] = 7167,
    [SMALL_STATE(112)] = 7193,
    [SMALL_STATE(113)] = 7219,
    [SMALL_STATE(114)] = 7254,
    [SMALL_STATE(115)] = 7277,
    [SMALL_STATE(116)] = 7300,
    [SMALL_STATE(117)] = 7325,
    [SMALL_STATE(118)] = 7350,
    [SMALL_STATE(119)] = 7374,
    [SMALL_STATE(120)] = 7398,
    [SMALL_STATE(121)] = 7422,
    [SMALL_STATE(122)] = 7446,
    [SMALL_STATE(123)] = 7481,
    [SMALL_STATE(124)] = 7509,
    [SMALL_STATE(125)] = 7529,
    [SMALL_STATE(126)] = 7549,
    [SMALL_STATE(127)] = 7569,
    [SMALL_STATE(128)] = 7588,
    [SMALL_STATE(129)] = 7607,
    [SMALL_STATE(130)] = 7638,
    [SMALL_STATE(131)] = 7657,
    [SMALL_STATE(132)] = 7676,
    [SMALL_STATE(133)] = 7702,
    [SMALL_STATE(134)] = 7718,
    [SMALL_STATE(135)] = 7736,
    [SMALL_STATE(136)] = 7753,
    [SMALL_STATE(137)] = 7776,
    [SMALL_STATE(138)] = 7801,
    [SMALL_STATE(139)] = 7818,
    [SMALL_STATE(140)] = 7843,
    [SMALL_STATE(141)] = 7868,
    [SMALL_STATE(142)] = 7893,
    [SMALL_STATE(143)] = 7918,
    [SMALL_STATE(144)] = 7939,
    [SMALL_STATE(145)] = 7958,
    [SMALL_STATE(146)] = 7979,
    [SMALL_STATE(147)] = 8004,
    [SMALL_STATE(148)] = 8018,
    [SMALL_STATE(149)] = 8040,
    [SMALL_STATE(150)] = 8062,
    [SMALL_STATE(151)] = 8082,
    [SMALL_STATE(152)] = 8096,
    [SMALL_STATE(153)] = 8116,
    [SMALL_STATE(154)] = 8138,
    [SMALL_STATE(155)] = 8158,
    [SMALL_STATE(156)] = 8172,
    [SMALL_STATE(157)] = 8186,
    [SMALL_STATE(158)] = 8206,
    [SMALL_STATE(159)] = 8228,
    [SMALL_STATE(160)] = 8248,
    [SMALL_STATE(161)] = 8268,
    [SMALL_STATE(162)] = 8290,
    [SMALL_STATE(163)] = 8312,
    [SMALL_STATE(164)] = 8334,
    [SMALL_STATE(165)] = 8349,
    [SMALL_STATE(166)] = 8366,
    [SMALL_STATE(167)] = 8385,
    [SMALL_STATE(168)] = 8404,
    [SMALL_STATE(169)] = 8419,
    [SMALL_STATE(170)] = 8438,
    [SMALL_STATE(171)] = 8457,
    [SMALL_STATE(172)] = 8476,
    [SMALL_STATE(173)] = 8495,
    [SMALL_STATE(174)] = 8514,
    [SMALL_STATE(175)] = 8533,
    [SMALL_STATE(176)] = 8550,
    [SMALL_STATE(177)] = 8563,
    [SMALL_STATE(178)] = 8580,
    [SMALL_STATE(179)] = 8599,
    [SMALL_STATE(180)] = 8616,
    [SMALL_STATE(181)] = 8635,
    [SMALL_STATE(182)] = 8650,
    [SMALL_STATE(183)] = 8663,
    [SMALL_STATE(184)] = 8680,
    [SMALL_STATE(185)] = 8699,
    [SMALL_STATE(186)] = 8714,
    [SMALL_STATE(187)] = 8731,
    [SMALL_STATE(188)] = 8744,
    [SMALL_STATE(189)] = 8761,
    [SMALL_STATE(190)] = 8774,
    [SMALL_STATE(191)] = 8787,
    [SMALL_STATE(192)] = 8804,
    [SMALL_STATE(193)] = 8821,
    [SMALL_STATE(194)] = 8834,
    [SMALL_STATE(195)] = 8848,
    [SMALL_STATE(196)] = 8860,
    [SMALL_STATE(197)] = 8876,
    [SMALL_STATE(198)] = 8890,
    [SMALL_STATE(199)] = 8906,
    [SMALL_STATE(200)] = 8922,
    [SMALL_STATE(201)] = 8936,
    [SMALL_STATE(202)] = 8948,
    [SMALL_STATE(203)] = 8960,
    [SMALL_STATE(204)] = 8972,
    [SMALL_STATE(205)] = 8988,
    [SMALL_STATE(206)] = 9002,
    [SMALL_STATE(207)] = 9018,
    [SMALL_STATE(208)] = 9032,
    [SMALL_STATE(209)] = 9048,
    [SMALL_STATE(210)] = 9064,
    [SMALL_STATE(211)] = 9080,
    [SMALL_STATE(212)] = 9092,
    [SMALL_STATE(213)] = 9106,
    [SMALL_STATE(214)] = 9122,
    [SMALL_STATE(215)] = 9138,
    [SMALL_STATE(216)] = 9150,
    [SMALL_STATE(217)] = 9162,
    [SMALL_STATE(218)] = 9178,
    [SMALL_STATE(219)] = 9190,
    [SMALL_STATE(220)] = 9202,
    [SMALL_STATE(221)] = 9214,
    [SMALL_STATE(222)] = 9230,
    [SMALL_STATE(223)] = 9244,
    [SMALL_STATE(224)] = 9260,
    [SMALL_STATE(225)] = 9276,
    [SMALL_STATE(226)] = 9292,
    [SMALL_STATE(227)] = 9308,
    [SMALL_STATE(228)] = 9322,
    [SMALL_STATE(229)] = 9334,
    [SMALL_STATE(230)] = 9350,
    [SMALL_STATE(231)] = 9362,
    [SMALL_STATE(232)] = 9376,
    [SMALL_STATE(233)] = 9388,
    [SMALL_STATE(234)] = 9400,
    [SMALL_STATE(235)] = 9416,
    [SMALL_STATE(236)] = 9428,
    [SMALL_STATE(237)] = 9440,
    [SMALL_STATE(238)] = 9456,
    [SMALL_STATE(239)] = 9472,
    [SMALL_STATE(240)] = 9486,
    [SMALL_STATE(241)] = 9502,
    [SMALL_STATE(242)] = 9514,
    [SMALL_STATE(243)] = 9526,
    [SMALL_STATE(244)] = 9542,
    [SMALL_STATE(245)] = 9558,
    [SMALL_STATE(246)] = 9572,
    [SMALL_STATE(247)] = 9584,
    [SMALL_STATE(248)] = 9600,
    [SMALL_STATE(249)] = 9614,
    [SMALL_STATE(250)] = 9630,
    [SMALL_STATE(251)] = 9646,
    [SMALL_STATE(252)] = 9662,
    [SMALL_STATE(253)] = 9678,
    [SMALL_STATE(254)] = 9694,
    [SMALL_STATE(255)] = 9708,
    [SMALL_STATE(256)] = 9724,
    [SMALL_STATE(257)] = 9740,
    [SMALL_STATE(258)] = 9756,
    [SMALL_STATE(259)] = 9770,
    [SMALL_STATE(260)] = 9786,
    [SMALL_STATE(261)] = 9800,
    [SMALL_STATE(262)] = 9816,
    [SMALL_STATE(263)] = 9832,
    [SMALL_STATE(264)] = 9848,
    [SMALL_STATE(265)] = 9864,
    [SMALL_STATE(266)] = 9880,
    [SMALL_STATE(267)] = 9892,
    [SMALL_STATE(268)] = 9904,
    [SMALL_STATE(269)] = 9915,
    [SMALL_STATE(270)] = 9928,
    [SMALL_STATE(271)] = 9941,
    [SMALL_STATE(272)] = 9954,
    [SMALL_STATE(273)] = 9965,
    [SMALL_STATE(274)] = 9978,
    [SMALL_STATE(275)] = 9991,
    [SMALL_STATE(276)] = 10004,
    [SMALL_STATE(277)] = 10017,
    [SMALL_STATE(278)] = 10028,
    [SMALL_STATE(279)] = 10039,
    [SMALL_STATE(280)] = 10050,
    [SMALL_STATE(281)] = 10061,
    [SMALL_STATE(282)] = 10072,
    [SMALL_STATE(283)] = 10083,
    [SMALL_STATE(284)] = 10094,
    [SMALL_STATE(285)] = 10105,
    [SMALL_STATE(286)] = 10118,
    [SMALL_STATE(287)] = 10129,
    [SMALL_STATE(288)] = 10140,
    [SMALL_STATE(289)] = 10153,
    [SMALL_STATE(290)] = 10164,
    [SMALL_STATE(291)] = 10177,
    [SMALL_STATE(292)] = 10188,
    [SMALL_STATE(293)] = 10199,
    [SMALL_STATE(294)] = 10212,
    [SMALL_STATE(295)] = 10223,
    [SMALL_STATE(296)] = 10234,
    [SMALL_STATE(297)] = 10247,
    [SMALL_STATE(298)] = 10260,
    [SMALL_STATE(299)] = 10271,
    [SMALL_STATE(300)] = 10284,
    [SMALL_STATE(301)] = 10295,
    [SMALL_STATE(302)] = 10306,
    [SMALL_STATE(303)] = 10317,
    [SMALL_STATE(304)] = 10328,
    [SMALL_STATE(305)] = 10339,
    [SMALL_STATE(306)] = 10350,
    [SMALL_STATE(307)] = 10361,
    [SMALL_STATE(308)] = 10374,
    [SMALL_STATE(309)] = 10385,
    [SMALL_STATE(310)] = 10396,
    [SMALL_STATE(311)] = 10407,
    [SMALL_STATE(312)] = 10418,
    [SMALL_STATE(313)] = 10429,
    [SMALL_STATE(314)] = 10442,
    [SMALL_STATE(315)] = 10453,
    [SMALL_STATE(316)] = 10466,
    [SMALL_STATE(317)] = 10479,
    [SMALL_STATE(318)] = 10492,
    [SMALL_STATE(319)] = 10503,
    [SMALL_STATE(320)] = 10516,
    [SMALL_STATE(321)] = 10527,
    [SMALL_STATE(322)] = 10538,
    [SMALL_STATE(323)] = 10549,
    [SMALL_STATE(324)] = 10560,
    [SMALL_STATE(325)] = 10571,
    [SMALL_STATE(326)] = 10584,
    [SMALL_STATE(327)] = 10595,
    [SMALL_STATE(328)] = 10608,
    [SMALL_STATE(329)] = 10621,
    [SMALL_STATE(330)] = 10634,
    [SMALL_STATE(331)] = 10645,
    [SMALL_STATE(332)] = 10656,
    [SMALL_STATE(333)] = 10667,
    [SMALL_STATE(334)] = 10677,
    [SMALL_STATE(335)] = 10687,
    [SMALL_STATE(336)] = 10697,
    [SMALL_STATE(337)] = 10707,
    [SMALL_STATE(338)] = 10717,
    [SMALL_STATE(339)] = 10727,
    [SMALL_STATE(340)] = 10737,
    [SMALL_STATE(341)] = 10747,
    [SMALL_STATE(342)] = 10757,
    [SMALL_STATE(343)] = 10767,
    [SMALL_STATE(344)] = 10777,
    [SMALL_STATE(345)] = 10787,
    [SMALL_STATE(346)] = 10797,
    [SMALL_STATE(347)] = 10807,
    [SMALL_STATE(348)] = 10817,
    [SMALL_STATE(349)] = 10827,
    [SMALL_STATE(350)] = 10837,
    [SMALL_STATE(351)] = 10847,
    [SMALL_STATE(352)] = 10857,
    [SMALL_STATE(353)] = 10867,
    [SMALL_STATE(354)] = 10877,
    [SMALL_STATE(355)] = 10887,
    [SMALL_STATE(356)] = 10897,
    [SMALL_STATE(357)] = 10907,
    [SMALL_STATE(358)] = 10917,
    [SMALL_STATE(359)] = 10927,
    [SMALL_STATE(360)] = 10937,
    [SMALL_STATE(361)] = 10947,
    [SMALL_STATE(362)] = 10957,
    [SMALL_STATE(363)] = 10967,
    [SMALL_STATE(364)] = 10977,
    [SMALL_STATE(365)] = 10987,
    [SMALL_STATE(366)] = 10997,
    [SMALL_STATE(367)] = 11007,
    [SMALL_STATE(368)] = 11017,
    [SMALL_STATE(369)] = 11027,
    [SMALL_STATE(370)] = 11037,
    [SMALL_STATE(371)] = 11047,
    [SMALL_STATE(372)] = 11057,
    [SMALL_STATE(373)] = 11067,
    [SMALL_STATE(374)] = 11077,
    [SMALL_STATE(375)] = 11087,
    [SMALL_STATE(376)] = 11097,
    [SMALL_STATE(377)] = 11107,
    [SMALL_STATE(378)] = 11117,
    [SMALL_STATE(379)] = 11127,
    [SMALL_STATE(380)] = 11137,
    [SMALL_STATE(381)] = 11147,
    [SMALL_STATE(382)] = 11157,
    [SMALL_STATE(383)] = 11167,
    [SMALL_STATE(384)] = 11177,
    [SMALL_STATE(385)] = 11187,
    [SMALL_STATE(386)] = 11197,
    [SMALL_STATE(387)] = 11207,
    [SMALL_STATE(388)] = 11217,
    [SMALL_STATE(389)] = 11227,
    [SMALL_STATE(390)] = 11237,
    [SMALL_STATE(391)] = 11247,
    [SMALL_STATE(392)] = 11257,
    [SMALL_STATE(393)] = 11267,
    [SMALL_STATE(394)] = 11277,
    [SMALL_STATE(395)] = 11287,
    [SMALL_STATE(396)] = 11297,
    [SMALL_STATE(397)] = 11307,
    [SMALL_STATE(398)] = 11317,
    [SMALL_STATE(399)] = 11327,
    [SMALL_STATE(400)] = 11337,
    [SMALL_STATE(401)] = 11347,
    [SMALL_STATE(402)] = 11357,
    [SMALL_STATE(403)] = 11367,
    [SMALL_STATE(404)] = 11377,
    [SMALL_STATE(405)] = 11387,
    [SMALL_STATE(406)] = 11397,
    [SMALL_STATE(407)] = 11407,
    [SMALL_STATE(408)] = 11417,
    [SMALL_STATE(409)] = 11427,
    [SMALL_STATE(410)] = 11437,
    [SMALL_STATE(411)] = 11447,
    [SMALL_STATE(412)] = 11457,
    [SMALL_STATE(413)] = 11467,
    [SMALL_STATE(414)] = 11477,
    [SMALL_STATE(415)] = 11487,
    [SMALL_STATE(416)] = 11497,
    [SMALL_STATE(417)] = 11507,
    [SMALL_STATE(418)] = 11517,
    [SMALL_STATE(419)] = 11527,
    [SMALL_STATE(420)] = 11537,
    [SMALL_STATE(421)] = 11547,
    [SMALL_STATE(422)] = 11557,
    [SMALL_STATE(423)] = 11567,
    [SMALL_STATE(424)] = 11577,
    [SMALL_STATE(425)] = 11587,
    [SMALL_STATE(426)] = 11597,
    [SMALL_STATE(427)] = 11607,
    [SMALL_STATE(428)] = 11617,
    [SMALL_STATE(429)] = 11627,
    [SMALL_STATE(430)] = 11637,
    [SMALL_STATE(431)] = 11647,
    [SMALL_STATE(432)] = 11657,
    [SMALL_STATE(433)] = 11667,
    [SMALL_STATE(434)] = 11677,
    [SMALL_STATE(435)] = 11687,
    [SMALL_STATE(436)] = 11697,
    [SMALL_STATE(437)] = 11707,
    [SMALL_STATE(438)] = 11717,
    [SMALL_STATE(439)] = 11727,
    [SMALL_STATE(440)] = 11737,
    [SMALL_STATE(441)] = 11747,
    [SMALL_STATE(442)] = 11757,
    [SMALL_STATE(443)] = 11767,
    [SMALL_STATE(444)] = 11777,
    [SMALL_STATE(445)] = 11787,
    [SMALL_STATE(446)] = 11797,
    [SMALL_STATE(447)] = 11807,
    [SMALL_STATE(448)] = 11817,
    [SMALL_STATE(449)] = 11827,
    [SMALL_STATE(450)] = 11837,
    [SMALL_STATE(451)] = 11847,
    [SMALL_STATE(452)] = 11857,
    [SMALL_STATE(453)] = 11867,
    [SMALL_STATE(454)] = 11877,
    [SMALL_STATE(455)] = 11887,
    [SMALL_STATE(456)] = 11897,
    [SMALL_STATE(457)] = 11907,
    [SMALL_STATE(458)] = 11917,
    [SMALL_STATE(459)] = 11927,
    [SMALL_STATE(460)] = 11937,
    [SMALL_STATE(461)] = 11947,
    [SMALL_STATE(462)] = 11957,
    [SMALL_STATE(463)] = 11967,
    [SMALL_STATE(464)] = 11977,
    [SMALL_STATE(465)] = 11987,
    [SMALL_STATE(466)] = 11997,
    [SMALL_STATE(467)] = 12007,
    [SMALL_STATE(468)] = 12017,
    [SMALL_STATE(469)] = 12027,
    [SMALL_STATE(470)] = 12037,
    [SMALL_STATE(471)] = 12047,
    [SMALL_STATE(472)] = 12057,
    [SMALL_STATE(473)] = 12067,
    [SMALL_STATE(474)] = 12077,
    [SMALL_STATE(475)] = 12087,
    [SMALL_STATE(476)] = 12097,
    [SMALL_STATE(477)] = 12107,
    [SMALL_STATE(478)] = 12117,
    [SMALL_STATE(479)] = 12127,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(371),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(270),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(471),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(271),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(469),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(468),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(467),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(466),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(465),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(464),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(463),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(461),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [31] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(459),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(457),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(275),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(453),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(452),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(228),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(451),
    [49] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(189),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(189),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(201),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(433),
    [59] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(190),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(202),
    [65] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(202),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(187),
    [69] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(431),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(185),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(429),
    [75] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(428),
    [77] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(268),
    [79] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [81] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(370),
    [83] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(369),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(90),
    [87] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(295),
    [89] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [91] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [93] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    [95] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(471),
    [98] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(271),
    [101] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(469),
    [104] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(468),
    [107] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(467),
    [110] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(466),
    [113] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(465),
    [116] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(464),
    [119] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(463),
    [122] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(461),
    [125] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(18),
    [128] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(459),
    [131] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(457),
    [134] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(275),
    [137] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(151),
    [140] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(453),
    [143] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(452),
    [146] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(42),
    [149] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(228),
    [152] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(451),
    [155] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(320),
    [157] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(406),
    [159] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(189),
    [162] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(189),
    [165] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(201),
    [168] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(433),
    [171] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(190),
    [174] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(190),
    [177] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(202),
    [180] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(202),
    [183] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(187),
    [186] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(431),
    [189] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(185),
    [192] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(429),
    [195] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(428),
    [198] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [200] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(43),
    [203] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(370),
    [206] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(369),
    [209] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(90),
    [212] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(298),
    [214] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(330),
    [216] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [218] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(367),
    [220] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(459),
    [222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2),
    [224] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(468),
    [226] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(467),
    [228] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(464),
    [230] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(380),
    [232] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(386),
    [234] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(385),
    [236] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(383),
    [238] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [240] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(343),
    [242] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(455),
    [244] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(416),
    [246] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(413),
    [248] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(363),
    [250] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(476),
    [252] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(362),
    [254] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1),
    [256] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(189),
    [259] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(189),
    [262] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(416),
    [265] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(413),
    [268] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(190),
    [271] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(190),
    [274] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(202),
    [277] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(202),
    [280] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(187),
    [283] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(431),
    [286] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(185),
    [289] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(429),
    [292] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    [294] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(476),
    [297] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(466),
    [300] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(362),
    [303] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(90),
    [306] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(458),
    [308] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [310] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [312] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(241),
    [314] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [316] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [318] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(43),
    [321] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(370),
    [324] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(369),
    [327] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [329] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [331] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 9),
    [333] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 9),
    [335] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 5),
    [337] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 5),
    [339] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 9),
    [341] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 9),
    [343] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 5),
    [345] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 5),
    [347] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [349] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [351] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [353] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [355] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [357] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [359] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [361] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [363] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(125),
    [365] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [367] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(125),
    [369] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(269),
    [371] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [373] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [375] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [377] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(104),
    [379] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(472),
    [381] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(114),
    [383] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [385] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(270),
    [388] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [390] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [392] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [394] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [396] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [398] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3),
    [400] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3),
    [402] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5),
    [404] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5),
    [406] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [408] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1),
    [410] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [412] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [414] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [416] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [418] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 6),
    [420] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [422] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [424] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [426] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [428] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [430] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [432] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [434] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [436] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [438] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [440] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [442] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [444] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [446] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [448] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [450] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(397),
    [452] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [454] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [456] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3),
    [458] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3),
    [460] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 7),
    [462] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 7),
    [464] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4),
    [466] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4),
    [468] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [470] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [472] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [474] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [476] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [478] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [480] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [482] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [484] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [486] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [488] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [490] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [492] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1),
    [494] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1),
    [496] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [498] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [500] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [502] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [504] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [506] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [508] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [510] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [512] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [514] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [516] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [518] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [520] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [522] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [524] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [526] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(399),
    [528] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(115),
    [530] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [532] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [534] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [536] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [538] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(88),
    [540] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [542] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [544] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(423),
    [546] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(290),
    [548] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [550] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(151),
    [553] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(453),
    [556] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(452),
    [559] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [561] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [563] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [565] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [567] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [569] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [571] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [573] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [575] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(316),
    [577] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [579] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(317),
    [581] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(319),
    [583] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [585] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(263),
    [587] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(83),
    [589] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [591] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [593] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [595] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [597] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [599] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [601] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(394),
    [604] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(60),
    [607] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(332),
    [609] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [611] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(324),
    [613] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(294),
    [615] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(394),
    [617] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [619] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(440),
    [621] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(281),
    [623] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(436),
    [625] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [627] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [629] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(50),
    [632] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [634] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(304),
    [636] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [638] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(357),
    [640] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(356),
    [642] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    [644] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    SHIFT_REPEAT(356),
    [647] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [649] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(143),
    [651] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(379),
    [653] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [655] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [657] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(368),
    [659] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [661] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(228),
    [664] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(451),
    [667] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [669] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(374),
    [671] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(404),
    [673] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(409),
    [675] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [677] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [679] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [681] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(427),
    [683] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(230),
    [685] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(260),
    [687] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(260),
    [689] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [691] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [693] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(289),
    [695] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [697] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [699] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [701] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [703] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [705] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [707] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(326),
    [710] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [712] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(419),
    [714] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [716] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(278),
    [718] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(165),
    [721] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [723] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1),
    [725] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [727] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [729] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(229),
    [731] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(302),
    [733] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [735] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [737] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [739] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(260),
    [742] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(260),
    [745] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1),
    [747] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    [749] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    SHIFT_REPEAT(319),
    [752] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1),
    [754] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1),
    [756] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [758] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(148),
    [761] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [763] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8),
    [765] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [767] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [769] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [771] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [773] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [775] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [777] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(157),
    [780] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [782] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1),
    [784] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1),
    [786] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [788] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(157),
    [790] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [792] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [794] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(432),
    [796] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [798] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(242),
    [800] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(133),
    [802] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [804] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(398),
    [806] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [808] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [810] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 2),
    [812] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(285),
    [815] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    [817] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(148),
    [819] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [821] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [823] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [825] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [827] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [829] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [831] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    [833] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    SHIFT_REPEAT(287),
    [836] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(277),
    [838] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(454),
    [840] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(352),
    [842] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(311),
    [844] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [846] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [848] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 3),
    [850] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(259),
    [853] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [855] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [857] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [859] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [861] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6),
    [863] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [865] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [867] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(171),
    [870] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [872] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(301),
    [874] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(285),
    [876] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(410),
    [878] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(308),
    [880] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(287),
    [882] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(24),
    [885] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [887] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [889] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(314),
    [891] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(316),
    [894] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [896] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(335),
    [898] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [900] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(291),
    [902] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(192),
    [905] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [907] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [909] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [911] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [913] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [915] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [917] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [919] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(448),
    [921] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [923] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [925] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 6),
    [927] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(422),
    [929] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(456),
    [931] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [933] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(443),
    [935] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(371),
    [937] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [939] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [941] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(225),
    [943] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [945] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [947] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [949] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6),
    [951] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [953] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 11),
    [955] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [957] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1),
    [959] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [961] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 2),
    [963] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2),
    [965] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [967] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [969] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [971] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 11),
    [973] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [975] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [977] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 6),
    [979] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [981] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [983] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 1),
    [985] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [987] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [989] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [991] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(323),
    [993] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(113),
    [995] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3),
    [997] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [999] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1),
    [1001] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [1003] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [1005] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [1007] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(173),
    [1009] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [1011] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [1013] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1),
    [1015] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [1017] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4),
    [1019] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [1021] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [1023] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [1025] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(214),
    [1027] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [1029] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [1031] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [1033] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [1035] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [1037] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1039] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [1041] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6),
    [1043] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(403),
    [1045] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(132),
    [1047] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [1049] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [1051] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(430),
    [1053] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(435),
    [1055] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [1057] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [1059] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(267),
    [1061] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(266),
    [1063] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [1065] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(235),
    [1067] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [1069] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(470),
    [1071] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(462),
    [1073] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4),
    [1075] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [1077] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [1079] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4),
    [1081] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(255),
    [1083] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(389),
    [1085] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [1087] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [1089] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1),
    [1091] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4),
    [1093] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [1095] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [1097] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [1099] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [1101] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7),
    [1103] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [1105] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(336),
    [1107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(479),
    [1109] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [1111] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(233),
    [1113] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(178),
    [1115] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(337),
    [1117] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [1119] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(318),
    [1121] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6),
    [1123] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [1125] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [1127] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [1129] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [1131] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [1133] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [1135] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [1137] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5),
    [1139] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [1141] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(340),
    [1143] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(341),
    [1145] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [1147] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [1149] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [1151] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [1153] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [1155] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1),
    [1157] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(280),
    [1159] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [1161] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(381),
    [1163] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [1165] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(327),
    [1167] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(387),
    [1169] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [1171] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(361),
    [1173] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(390),
    [1175] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5),
    [1177] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5),
    [1179] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [1181] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [1183] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1),
    [1185] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(215),
    [1187] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [1189] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [1191] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(391),
    [1193] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 3),
    [1195] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(392),
    [1197] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [1199] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(338),
    [1201] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(262),
    [1203] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [1205] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1207] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1209] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [1211] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [1213] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [1215] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1217] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [1219] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(226),
    [1221] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(156),
    [1223] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [1225] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(137),
    [1227] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [1229] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [1231] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [1233] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [1235] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(478),
    [1237] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [1239] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [1241] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(405),
    [1243] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [1245] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1247] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(217),
    [1249] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(418),
    [1251] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(420),
    [1253] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [1255] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(339),
    [1257] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(174),
    [1259] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(78),
    [1261] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [1263] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(434),
    [1265] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [1267] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(276),
    [1269] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(209),
    [1271] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(437),
    [1273] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [1275] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(438),
    [1277] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [1279] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(439),
    [1281] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [1283] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(442),
    [1285] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(115),
    [1287] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(142),
    [1289] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(460),
    [1291] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(140),
    [1293] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(473),
    [1295] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(475),
    [1297] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_comment, 2),
};

enum ts_external_scanner_symbol_identifiers {
    ts_external_token__eof = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
    [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
    [1] = {
        [ts_external_token__eof] = true,
    },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_idl_external_scanner_create(void);
void tree_sitter_idl_external_scanner_destroy(void *);
bool tree_sitter_idl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_idl_external_scanner_serialize(void *, char *);
void tree_sitter_idl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_idl() {
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
        .external_scanner = {
            &ts_external_scanner_states[0][0],
            ts_external_scanner_symbol_map,
            tree_sitter_idl_external_scanner_create,
            tree_sitter_idl_external_scanner_destroy,
            tree_sitter_idl_external_scanner_scan,
            tree_sitter_idl_external_scanner_serialize,
            tree_sitter_idl_external_scanner_deserialize,
        },
        .primary_state_ids = ts_primary_state_ids,
    };
    return &language;
}
#ifdef __cplusplus
}
#endif
