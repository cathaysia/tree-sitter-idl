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
#define STATE_COUNT 474
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 233
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
    anon_sym_any = 20,
    anon_sym_COMMA = 21,
    anon_sym_sequence = 22,
    anon_sym_map = 23,
    anon_sym_PIPE = 24,
    anon_sym_CARET = 25,
    anon_sym_DOLLAR = 26,
    anon_sym_GT_GT = 27,
    anon_sym_LT_LT = 28,
    anon_sym_PLUS = 29,
    anon_sym_DASH = 30,
    anon_sym_STAR = 31,
    anon_sym_SLASH = 32,
    anon_sym_PERCENT = 33,
    anon_sym_LPAREN = 34,
    anon_sym_RPAREN = 35,
    anon_sym_TILDE = 36,
    anon_sym_L = 37,
    anon_sym_DQUOTE = 38,
    aux_sym_string_literal_token1 = 39,
    anon_sym_SQUOTE = 40,
    aux_sym_char_literal_token1 = 41,
    anon_sym_TRUE = 42,
    anon_sym_FALSE = 43,
    sym_number_literal = 44,
    aux_sym_preproc_call_token1 = 45,
    sym_preproc_directive = 46,
    sym_preproc_arg = 47,
    anon_sym_exception = 48,
    anon_sym_LBRACE = 49,
    anon_sym_RBRACE = 50,
    anon_sym_interface = 51,
    anon_sym_local = 52,
    anon_sym_COLON = 53,
    anon_sym_SEMI = 54,
    anon_sym_void = 55,
    anon_sym_in = 56,
    anon_sym_out = 57,
    anon_sym_inout = 58,
    anon_sym_raises = 59,
    anon_sym_readonly = 60,
    anon_sym_attribute = 61,
    anon_sym_getraises = 62,
    anon_sym_setraises = 63,
    anon_sym_bitset = 64,
    anon_sym_bitfield = 65,
    anon_sym_bitmask = 66,
    anon_sym_ATannotation = 67,
    anon_sym_default = 68,
    anon_sym_AT = 69,
    anon_sym_LBRACK = 70,
    anon_sym_RBRACK = 71,
    anon_sym_EQ = 72,
    anon_sym_native = 73,
    anon_sym_module = 74,
    anon_sym_struct = 75,
    anon_sym_enum = 76,
    anon_sym_ATdefault_literal = 77,
    anon_sym_ATignore_literal_names = 78,
    anon_sym_union = 79,
    anon_sym_switch = 80,
    anon_sym_case = 81,
    anon_sym_typedef = 82,
    anon_sym_POUNDdefine = 83,
    aux_sym_predefine_token1 = 84,
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
    sym_any_type = 119,
    sym_fixed_pt_type = 120,
    sym_template_type_spec = 121,
    sym_sequence_type = 122,
    sym_map_type = 123,
    sym_const_expr = 124,
    sym_or_expr = 125,
    sym_xor_expr = 126,
    sym_and_expr = 127,
    sym_shift_expr = 128,
    sym_add_expr = 129,
    sym_mult_expr = 130,
    sym_unary_expr = 131,
    sym_unary_operator = 132,
    sym_literal = 133,
    sym_string_literal = 134,
    sym_char_literal = 135,
    sym_boolean_literal = 136,
    sym_preproc_call = 137,
    sym_except_dcl = 138,
    sym_interface_dcl = 139,
    sym_interface_forward_dcl = 140,
    sym_interface_def = 141,
    sym_interface_header = 142,
    sym_interface_inheritance_spec = 143,
    sym_interface_name = 144,
    sym_interface_body = 145,
    sym_export = 146,
    sym_op_dcl = 147,
    sym_op_type_spec = 148,
    sym_parameter_dcls = 149,
    sym_param_dcl = 150,
    sym_param_attribute = 151,
    sym_raises_expr = 152,
    sym_attr_dcl = 153,
    sym_readonly_attr_spec = 154,
    sym_readonly_attr_declarator = 155,
    sym_attr_spec = 156,
    sym_attr_declarator = 157,
    sym_attr_raises_expr = 158,
    sym_get_excep_expr = 159,
    sym_set_excep_expr = 160,
    sym_exception_list = 161,
    sym_interface_anno = 162,
    sym_bitset_dcl = 163,
    sym_bitfield = 164,
    sym_bitfield_spec = 165,
    sym_destination_type = 166,
    sym_bitmask_dcl = 167,
    sym_bit_value = 168,
    sym_annotation_dcl = 169,
    sym_annotation_body = 170,
    sym_annotation_member = 171,
    sym_annotation_member_type = 172,
    sym_any_const_type = 173,
    sym__definition = 174,
    sym_native_dcl = 175,
    sym_module_dcl = 176,
    sym_struct_forward_dcl = 177,
    sym_struct_def = 178,
    sym_member = 179,
    sym_default = 180,
    sym_enum_dcl = 181,
    sym_enumerator = 182,
    sym_enum_modifier = 183,
    sym_enum_anno = 184,
    sym_union_forward_dcl = 185,
    sym_union_def = 186,
    sym_case = 187,
    sym_case_label = 188,
    sym_element_spec = 189,
    sym_switch_type_spec = 190,
    sym_typedef_dcl = 191,
    sym_predefine = 192,
    sym_dds_request_topic = 193,
    sym_dds_reply_topic = 194,
    sym_const_dcl = 195,
    sym_const_type = 196,
    sym_hashid = 197,
    sym_try_construct = 198,
    sym_data_representation = 199,
    sym_struct_modifier = 200,
    sym_simple_declarator = 201,
    sym_declarator = 202,
    sym_declarators = 203,
    sym_array_declarator = 204,
    sym_positive_int_const = 205,
    sym_fixed_array_size = 206,
    sym_type_declarator = 207,
    sym_any_declarators = 208,
    sym_any_declarator = 209,
    sym_comment = 210,
    aux_sym_specification_repeat1 = 211,
    aux_sym_specification_repeat2 = 212,
    aux_sym_except_dcl_repeat1 = 213,
    aux_sym_interface_def_repeat1 = 214,
    aux_sym_interface_inheritance_spec_repeat1 = 215,
    aux_sym_interface_body_repeat1 = 216,
    aux_sym_parameter_dcls_repeat1 = 217,
    aux_sym_raises_expr_repeat1 = 218,
    aux_sym_readonly_attr_declarator_repeat1 = 219,
    aux_sym_bitset_dcl_repeat1 = 220,
    aux_sym_bitfield_repeat1 = 221,
    aux_sym_bitmask_dcl_repeat1 = 222,
    aux_sym_annotation_body_repeat1 = 223,
    aux_sym_struct_def_repeat1 = 224,
    aux_sym_member_repeat1 = 225,
    aux_sym_enum_dcl_repeat1 = 226,
    aux_sym_enumerator_repeat1 = 227,
    aux_sym_union_def_repeat1 = 228,
    aux_sym_data_representation_repeat1 = 229,
    aux_sym_declarators_repeat1 = 230,
    aux_sym_array_declarator_repeat1 = 231,
    aux_sym_any_declarators_repeat1 = 232,
    alias_sym_data_rep = 233,
    alias_sym_hashid_value = 234,
    alias_sym_try_construct_value = 235,
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
    [anon_sym_interface] = "interface",
    [anon_sym_local] = "local",
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
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_EQ] = "=",
    [anon_sym_native] = "native",
    [anon_sym_module] = "module",
    [anon_sym_struct] = "struct",
    [anon_sym_enum] = "enum",
    [anon_sym_ATdefault_literal] = "@default_literal",
    [anon_sym_ATignore_literal_names] = "@ignore_literal_names",
    [anon_sym_union] = "union",
    [anon_sym_switch] = "switch",
    [anon_sym_case] = "case",
    [anon_sym_typedef] = "typedef",
    [anon_sym_POUNDdefine] = "#define",
    [aux_sym_predefine_token1] = "predefine_token1",
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
    [sym_any_type] = "any_type",
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
    [sym_except_dcl] = "except_dcl",
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
    [sym_interface_anno] = "interface_anno",
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
    [sym__definition] = "_definition",
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
    [sym_union_forward_dcl] = "union_forward_dcl",
    [sym_union_def] = "union_def",
    [sym_case] = "case",
    [sym_case_label] = "case_label",
    [sym_element_spec] = "element_spec",
    [sym_switch_type_spec] = "switch_type_spec",
    [sym_typedef_dcl] = "typedef_dcl",
    [sym_predefine] = "predefine",
    [sym_dds_request_topic] = "dds_request_topic",
    [sym_dds_reply_topic] = "dds_reply_topic",
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
    [aux_sym_interface_def_repeat1] = "interface_def_repeat1",
    [aux_sym_interface_inheritance_spec_repeat1] = "interface_inheritance_spec_repeat1",
    [aux_sym_interface_body_repeat1] = "interface_body_repeat1",
    [aux_sym_parameter_dcls_repeat1] = "parameter_dcls_repeat1",
    [aux_sym_raises_expr_repeat1] = "raises_expr_repeat1",
    [aux_sym_readonly_attr_declarator_repeat1] = "readonly_attr_declarator_repeat1",
    [aux_sym_bitset_dcl_repeat1] = "bitset_dcl_repeat1",
    [aux_sym_bitfield_repeat1] = "bitfield_repeat1",
    [aux_sym_bitmask_dcl_repeat1] = "bitmask_dcl_repeat1",
    [aux_sym_annotation_body_repeat1] = "annotation_body_repeat1",
    [aux_sym_struct_def_repeat1] = "struct_def_repeat1",
    [aux_sym_member_repeat1] = "member_repeat1",
    [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
    [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
    [aux_sym_union_def_repeat1] = "union_def_repeat1",
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
    [anon_sym_interface] = anon_sym_interface,
    [anon_sym_local] = anon_sym_local,
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
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
    [anon_sym_EQ] = anon_sym_EQ,
    [anon_sym_native] = anon_sym_native,
    [anon_sym_module] = anon_sym_module,
    [anon_sym_struct] = anon_sym_struct,
    [anon_sym_enum] = anon_sym_enum,
    [anon_sym_ATdefault_literal] = anon_sym_ATdefault_literal,
    [anon_sym_ATignore_literal_names] = anon_sym_ATignore_literal_names,
    [anon_sym_union] = anon_sym_union,
    [anon_sym_switch] = anon_sym_switch,
    [anon_sym_case] = anon_sym_case,
    [anon_sym_typedef] = anon_sym_typedef,
    [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
    [aux_sym_predefine_token1] = aux_sym_predefine_token1,
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
    [sym_any_type] = sym_any_type,
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
    [sym_except_dcl] = sym_except_dcl,
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
    [sym_interface_anno] = sym_interface_anno,
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
    [sym__definition] = sym__definition,
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
    [sym_union_forward_dcl] = sym_union_forward_dcl,
    [sym_union_def] = sym_union_def,
    [sym_case] = sym_case,
    [sym_case_label] = sym_case_label,
    [sym_element_spec] = sym_element_spec,
    [sym_switch_type_spec] = sym_switch_type_spec,
    [sym_typedef_dcl] = sym_typedef_dcl,
    [sym_predefine] = sym_predefine,
    [sym_dds_request_topic] = sym_dds_request_topic,
    [sym_dds_reply_topic] = sym_dds_reply_topic,
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
    [aux_sym_interface_def_repeat1] = aux_sym_interface_def_repeat1,
    [aux_sym_interface_inheritance_spec_repeat1] = aux_sym_interface_inheritance_spec_repeat1,
    [aux_sym_interface_body_repeat1] = aux_sym_interface_body_repeat1,
    [aux_sym_parameter_dcls_repeat1] = aux_sym_parameter_dcls_repeat1,
    [aux_sym_raises_expr_repeat1] = aux_sym_raises_expr_repeat1,
    [aux_sym_readonly_attr_declarator_repeat1] = aux_sym_readonly_attr_declarator_repeat1,
    [aux_sym_bitset_dcl_repeat1] = aux_sym_bitset_dcl_repeat1,
    [aux_sym_bitfield_repeat1] = aux_sym_bitfield_repeat1,
    [aux_sym_bitmask_dcl_repeat1] = aux_sym_bitmask_dcl_repeat1,
    [aux_sym_annotation_body_repeat1] = aux_sym_annotation_body_repeat1,
    [aux_sym_struct_def_repeat1] = aux_sym_struct_def_repeat1,
    [aux_sym_member_repeat1] = aux_sym_member_repeat1,
    [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
    [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
    [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
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
    [anon_sym_interface] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_local] = {
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
    [sym_interface_anno] = {
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
    [sym_typedef_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_predefine] = {
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
    [aux_sym_annotation_body_repeat1] = {
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
    [aux_sym_union_def_repeat1] = {
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
    [42] = 42,
    [43] = 43,
    [44] = 44,
    [45] = 45,
    [46] = 46,
    [47] = 47,
    [48] = 47,
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
    [59] = 58,
    [60] = 60,
    [61] = 61,
    [62] = 62,
    [63] = 63,
    [64] = 64,
    [65] = 65,
    [66] = 66,
    [67] = 67,
    [68] = 66,
    [69] = 69,
    [70] = 70,
    [71] = 70,
    [72] = 72,
    [73] = 73,
    [74] = 74,
    [75] = 75,
    [76] = 76,
    [77] = 77,
    [78] = 75,
    [79] = 79,
    [80] = 80,
    [81] = 81,
    [82] = 82,
    [83] = 83,
    [84] = 84,
    [85] = 84,
    [86] = 86,
    [87] = 87,
    [88] = 87,
    [89] = 89,
    [90] = 89,
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
    [111] = 110,
    [112] = 112,
    [113] = 113,
    [114] = 114,
    [115] = 105,
    [116] = 91,
    [117] = 92,
    [118] = 96,
    [119] = 109,
    [120] = 108,
    [121] = 121,
    [122] = 122,
    [123] = 123,
    [124] = 124,
    [125] = 125,
    [126] = 126,
    [127] = 127,
    [128] = 112,
    [129] = 113,
    [130] = 130,
    [131] = 131,
    [132] = 132,
    [133] = 133,
    [134] = 134,
    [135] = 135,
    [136] = 136,
    [137] = 121,
    [138] = 138,
    [139] = 139,
    [140] = 140,
    [141] = 122,
    [142] = 142,
    [143] = 143,
    [144] = 142,
    [145] = 145,
    [146] = 146,
    [147] = 146,
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
    [175] = 125,
    [176] = 176,
    [177] = 177,
    [178] = 178,
    [179] = 179,
    [180] = 180,
    [181] = 181,
    [182] = 182,
    [183] = 183,
    [184] = 124,
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
    [196] = 91,
    [197] = 197,
    [198] = 198,
    [199] = 199,
    [200] = 200,
    [201] = 201,
    [202] = 202,
    [203] = 203,
    [204] = 194,
    [205] = 193,
    [206] = 206,
    [207] = 92,
    [208] = 208,
    [209] = 209,
    [210] = 130,
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
    [230] = 190,
    [231] = 231,
    [232] = 232,
    [233] = 233,
    [234] = 234,
    [235] = 235,
    [236] = 236,
    [237] = 131,
    [238] = 238,
    [239] = 239,
    [240] = 240,
    [241] = 241,
    [242] = 197,
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
    [328] = 213,
    [329] = 329,
    [330] = 330,
    [331] = 331,
    [332] = 135,
    [333] = 333,
    [334] = 334,
    [335] = 335,
    [336] = 213,
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
    [412] = 411,
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
    [430] = 323,
    [431] = 431,
    [432] = 432,
    [433] = 433,
    [434] = 279,
    [435] = 435,
    [436] = 436,
    [437] = 437,
    [438] = 438,
    [439] = 439,
    [440] = 440,
    [441] = 441,
    [442] = 312,
    [443] = 443,
    [444] = 444,
    [445] = 445,
    [446] = 446,
    [447] = 447,
    [448] = 299,
    [449] = 449,
    [450] = 450,
    [451] = 451,
    [452] = 420,
    [453] = 453,
    [454] = 386,
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
    [466] = 420,
    [467] = 364,
    [468] = 359,
    [469] = 416,
    [470] = 440,
    [471] = 471,
    [472] = 345,
    [473] = 473,
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
                ADVANCE(453);
            if(lookahead == '"')
                ADVANCE(512);
            if(lookahead == '#')
                ADVANCE(130);
            if(lookahead == '$')
                ADVANCE(497);
            if(lookahead == '%')
                ADVANCE(506);
            if(lookahead == '\'')
                ADVANCE(514);
            if(lookahead == '(')
                ADVANCE(507);
            if(lookahead == ')')
                ADVANCE(508);
            if(lookahead == '*')
                ADVANCE(504);
            if(lookahead == '+')
                ADVANCE(500);
            if(lookahead == ',')
                ADVANCE(490);
            if(lookahead == '-')
                ADVANCE(502);
            if(lookahead == '/')
                ADVANCE(505);
            if(lookahead == ':')
                ADVANCE(590);
            if(lookahead == ';')
                ADVANCE(591);
            if(lookahead == '<')
                ADVANCE(485);
            if(lookahead == '=')
                ADVANCE(615);
            if(lookahead == '>')
                ADVANCE(487);
            if(lookahead == '@')
                ADVANCE(612);
            if(lookahead == 'F')
                ADVANCE(516);
            if(lookahead == 'L')
                ADVANCE(510);
            if(lookahead == 'T')
                ADVANCE(518);
            if(lookahead == 'X')
                ADVANCE(517);
            if(lookahead == '[')
                ADVANCE(613);
            if(lookahead == '\\')
                SKIP(446)
            if(lookahead == ']')
                ADVANCE(614);
            if(lookahead == '^')
                ADVANCE(496);
            if(lookahead == 'a')
                ADVANCE(530);
            if(lookahead == 'b')
                ADVANCE(529);
            if(lookahead == 'c')
                ADVANCE(519);
            if(lookahead == 'd')
                ADVANCE(525);
            if(lookahead == 'e')
                ADVANCE(533);
            if(lookahead == 'f')
                ADVANCE(528);
            if(lookahead == 'g')
                ADVANCE(527);
            if(lookahead == 'i')
                ADVANCE(531);
            if(lookahead == 'l')
                ADVANCE(534);
            if(lookahead == 'm')
                ADVANCE(520);
            if(lookahead == 'n')
                ADVANCE(521);
            if(lookahead == 'o')
                ADVANCE(524);
            if(lookahead == 'r')
                ADVANCE(522);
            if(lookahead == 's')
                ADVANCE(526);
            if(lookahead == 't')
                ADVANCE(536);
            if(lookahead == 'u')
                ADVANCE(532);
            if(lookahead == 'v')
                ADVANCE(535);
            if(lookahead == 'w')
                ADVANCE(523);
            if(lookahead == '{')
                ADVANCE(586);
            if(lookahead == '|')
                ADVANCE(495);
            if(lookahead == '}')
                ADVANCE(587);
            if(lookahead == '~')
                ADVANCE(509);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(515);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(45)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(45)
            if(lookahead == '\r')
                SKIP(1)
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(49)
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(49)
            if(lookahead == '\r')
                SKIP(3)
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(46)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(46)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(51)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(51)
            if(lookahead == '\r')
                SKIP(7)
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(50)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(50)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(52)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(52)
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
                SKIP(41)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(41)
            if(lookahead == '\r')
                SKIP(15)
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(53)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(53)
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
                SKIP(44)
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(44)
            if(lookahead == '\r')
                SKIP(21)
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(43)
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(43)
            if(lookahead == '\r')
                SKIP(23)
            END_STATE();
        case 25:
            if(lookahead == '\n')
                SKIP(54)
            END_STATE();
        case 26:
            if(lookahead == '\n')
                SKIP(54)
            if(lookahead == '\r')
                SKIP(25)
            END_STATE();
        case 27:
            if(lookahead == '\n')
                ADVANCE(571);
            if(lookahead == '\r')
                ADVANCE(30);
            if(lookahead == '/')
                ADVANCE(580);
            if(lookahead == '\\')
                ADVANCE(578);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(58)
            if(lookahead != 0)
                ADVANCE(581);
            END_STATE();
        case 28:
            if(lookahead == '\n')
                ADVANCE(571);
            if(lookahead == '\r')
                ADVANCE(29);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(35)
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(57)
            END_STATE();
        case 29:
            if(lookahead == '\n')
                ADVANCE(571);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(35)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(57)
            END_STATE();
        case 30:
            if(lookahead == '\n')
                ADVANCE(571);
            if(lookahead == '/')
                ADVANCE(580);
            if(lookahead == '\\')
                ADVANCE(578);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(58)
            if(lookahead != 0)
                ADVANCE(581);
            END_STATE();
        case 31:
            if(lookahead == '\n')
                ADVANCE(815);
            if(lookahead == '\r')
                ADVANCE(814);
            if(lookahead == '\\')
                ADVANCE(818);
            if(lookahead != 0)
                ADVANCE(817);
            END_STATE();
        case 32:
            if(lookahead == '\n')
                SKIP(55)
            END_STATE();
        case 33:
            if(lookahead == '\n')
                SKIP(55)
            if(lookahead == '\r')
                SKIP(32)
            END_STATE();
        case 34:
            if(lookahead == '\n')
                SKIP(57)
            END_STATE();
        case 35:
            if(lookahead == '\n')
                SKIP(57)
            if(lookahead == '\r')
                SKIP(34)
            END_STATE();
        case 36:
            if(lookahead == '\n')
                SKIP(56)
            END_STATE();
        case 37:
            if(lookahead == '\n')
                SKIP(56)
            if(lookahead == '\r')
                SKIP(36)
            END_STATE();
        case 38:
            if(lookahead == ' ')
                ADVANCE(260);
            END_STATE();
        case 39:
            if(lookahead == '"')
                ADVANCE(512);
            if(lookahead == '\'')
                ADVANCE(514);
            if(lookahead == '(')
                ADVANCE(507);
            if(lookahead == '+')
                ADVANCE(501);
            if(lookahead == '-')
                ADVANCE(503);
            if(lookahead == '.')
                ADVANCE(438);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == '0')
                ADVANCE(548);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == 'F')
                ADVANCE(660);
            if(lookahead == 'L')
                ADVANCE(511);
            if(lookahead == 'T')
                ADVANCE(664);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == '~')
                ADVANCE(509);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(39)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 40:
            if(lookahead == '"')
                ADVANCE(652);
            END_STATE();
        case 41:
            if(lookahead == '$')
                ADVANCE(497);
            if(lookahead == '%')
                ADVANCE(506);
            if(lookahead == ')')
                ADVANCE(508);
            if(lookahead == '*')
                ADVANCE(504);
            if(lookahead == '+')
                ADVANCE(500);
            if(lookahead == ',')
                ADVANCE(490);
            if(lookahead == '-')
                ADVANCE(502);
            if(lookahead == '/')
                ADVANCE(505);
            if(lookahead == ':')
                ADVANCE(590);
            if(lookahead == ';')
                ADVANCE(591);
            if(lookahead == '<')
                ADVANCE(60);
            if(lookahead == '>')
                ADVANCE(487);
            if(lookahead == '@')
                ADVANCE(145);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == ']')
                ADVANCE(614);
            if(lookahead == '^')
                ADVANCE(496);
            if(lookahead == '{')
                ADVANCE(586);
            if(lookahead == '|')
                ADVANCE(495);
            if(lookahead == '}')
                ADVANCE(587);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(41)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 42:
            if(lookahead == '$')
                ADVANCE(497);
            if(lookahead == '%')
                ADVANCE(506);
            if(lookahead == '*')
                ADVANCE(504);
            if(lookahead == '+')
                ADVANCE(500);
            if(lookahead == '-')
                ADVANCE(502);
            if(lookahead == '/')
                ADVANCE(505);
            if(lookahead == '<')
                ADVANCE(60);
            if(lookahead == '>')
                ADVANCE(61);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == '^')
                ADVANCE(496);
            if(lookahead == 't')
                ADVANCE(808);
            if(lookahead == '|')
                ADVANCE(495);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(42)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 43:
            if(lookahead == ')')
                ADVANCE(508);
            if(lookahead == ',')
                ADVANCE(490);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '<')
                ADVANCE(484);
            if(lookahead == '>')
                ADVANCE(486);
            if(lookahead == '\\')
                SKIP(24)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(43)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 44:
            if(lookahead == ')')
                ADVANCE(508);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(22)
            if(lookahead == 'i')
                ADVANCE(267);
            if(lookahead == 'o')
                ADVANCE(414);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(44)
            END_STATE();
        case 45:
            if(lookahead == ',')
                ADVANCE(490);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '<')
                ADVANCE(484);
            if(lookahead == '>')
                ADVANCE(486);
            if(lookahead == '@')
                ADVANCE(99);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(614);
            if(lookahead == 'a')
                ADVANCE(746);
            if(lookahead == 'b')
                ADVANCE(723);
            if(lookahead == 'c')
                ADVANCE(717);
            if(lookahead == 'd')
                ADVANCE(757);
            if(lookahead == 'e')
                ADVANCE(748);
            if(lookahead == 'f')
                ADVANCE(721);
            if(lookahead == 'l')
                ADVANCE(760);
            if(lookahead == 'm')
                ADVANCE(667);
            if(lookahead == 'n')
                ADVANCE(670);
            if(lookahead == 'o')
                ADVANCE(683);
            if(lookahead == 'r')
                ADVANCE(702);
            if(lookahead == 's')
                ADVANCE(691);
            if(lookahead == 't')
                ADVANCE(808);
            if(lookahead == 'u')
                ADVANCE(740);
            if(lookahead == 'v')
                ADVANCE(758);
            if(lookahead == 'w')
                ADVANCE(679);
            if(lookahead == '}')
                ADVANCE(587);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(45)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 46:
            if(lookahead == ',')
                ADVANCE(490);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '>')
                ADVANCE(486);
            if(lookahead == '@')
                ADVANCE(160);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(747);
            if(lookahead == 'b')
                ADVANCE(761);
            if(lookahead == 'c')
                ADVANCE(718);
            if(lookahead == 'd')
                ADVANCE(757);
            if(lookahead == 'f')
                ADVANCE(721);
            if(lookahead == 'l')
                ADVANCE(760);
            if(lookahead == 'm')
                ADVANCE(667);
            if(lookahead == 'o')
                ADVANCE(683);
            if(lookahead == 's')
                ADVANCE(692);
            if(lookahead == 'u')
                ADVANCE(751);
            if(lookahead == 'w')
                ADVANCE(679);
            if(lookahead == '}')
                ADVANCE(587);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(46)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 47:
            if(lookahead == '.')
                ADVANCE(438);
            if(lookahead == '0')
                ADVANCE(545);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            END_STATE();
        case 48:
            if(lookahead == '/')
                ADVANCE(811);
            END_STATE();
        case 49:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '@')
                ADVANCE(99);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'a')
                ADVANCE(747);
            if(lookahead == 'b')
                ADVANCE(723);
            if(lookahead == 'c')
                ADVANCE(718);
            if(lookahead == 'd')
                ADVANCE(757);
            if(lookahead == 'e')
                ADVANCE(749);
            if(lookahead == 'f')
                ADVANCE(721);
            if(lookahead == 'l')
                ADVANCE(760);
            if(lookahead == 'm')
                ADVANCE(667);
            if(lookahead == 'o')
                ADVANCE(683);
            if(lookahead == 's')
                ADVANCE(691);
            if(lookahead == 'u')
                ADVANCE(740);
            if(lookahead == 'w')
                ADVANCE(679);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(49)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 50:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '@')
                ADVANCE(232);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == 'a')
                ADVANCE(747);
            if(lookahead == 'b')
                ADVANCE(761);
            if(lookahead == 'c')
                ADVANCE(718);
            if(lookahead == 'd')
                ADVANCE(757);
            if(lookahead == 'e')
                ADVANCE(749);
            if(lookahead == 'f')
                ADVANCE(721);
            if(lookahead == 'l')
                ADVANCE(760);
            if(lookahead == 'o')
                ADVANCE(683);
            if(lookahead == 's')
                ADVANCE(692);
            if(lookahead == 'u')
                ADVANCE(751);
            if(lookahead == 'w')
                ADVANCE(679);
            if(lookahead == '}')
                ADVANCE(587);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(50)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 51:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'a')
                ADVANCE(747);
            if(lookahead == 'b')
                ADVANCE(761);
            if(lookahead == 'c')
                ADVANCE(672);
            if(lookahead == 'd')
                ADVANCE(699);
            if(lookahead == 'f')
                ADVANCE(721);
            if(lookahead == 'l')
                ADVANCE(760);
            if(lookahead == 'm')
                ADVANCE(667);
            if(lookahead == 'o')
                ADVANCE(683);
            if(lookahead == 's')
                ADVANCE(692);
            if(lookahead == 'u')
                ADVANCE(751);
            if(lookahead == 'w')
                ADVANCE(679);
            if(lookahead == '}')
                ADVANCE(587);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(51)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 52:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == 'b')
                ADVANCE(761);
            if(lookahead == 'c')
                ADVANCE(718);
            if(lookahead == 'd')
                ADVANCE(757);
            if(lookahead == 'f')
                ADVANCE(721);
            if(lookahead == 'l')
                ADVANCE(760);
            if(lookahead == 'o')
                ADVANCE(683);
            if(lookahead == 's')
                ADVANCE(692);
            if(lookahead == 'u')
                ADVANCE(751);
            if(lookahead == 'w')
                ADVANCE(679);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(52)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 53:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(59);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == 'b')
                ADVANCE(761);
            if(lookahead == 'c')
                ADVANCE(718);
            if(lookahead == 'l')
                ADVANCE(767);
            if(lookahead == 's')
                ADVANCE(719);
            if(lookahead == 'u')
                ADVANCE(751);
            if(lookahead == 'w')
                ADVANCE(680);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(53)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 54:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ';')
                ADVANCE(591);
            if(lookahead == '\\')
                SKIP(26)
            if(lookahead == 's')
                ADVANCE(804);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(54)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 55:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(33)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(55)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(515);
            END_STATE();
        case 56:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(37)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(56)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(513);
            END_STATE();
        case 57:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(35)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(57)
            END_STATE();
        case 58:
            if(lookahead == '/')
                ADVANCE(580);
            if(lookahead == '\\')
                ADVANCE(578);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(58)
            if(lookahead != 0)
                ADVANCE(581);
            END_STATE();
        case 59:
            if(lookahead == ':')
                ADVANCE(479);
            END_STATE();
        case 60:
            if(lookahead == '<')
                ADVANCE(499);
            END_STATE();
        case 61:
            if(lookahead == '>')
                ADVANCE(498);
            END_STATE();
        case 62:
            if(lookahead == 'C')
                ADVANCE(63);
            END_STATE();
        case 63:
            if(lookahead == 'D')
                ADVANCE(69);
            END_STATE();
        case 64:
            if(lookahead == 'D')
                ADVANCE(65);
            if(lookahead == 'a')
                ADVANCE(287);
            if(lookahead == 'd')
                ADVANCE(104);
            if(lookahead == 'f')
                ADVANCE(226);
            if(lookahead == 'i')
                ADVANCE(206);
            END_STATE();
        case 65:
            if(lookahead == 'D')
                ADVANCE(71);
            END_STATE();
        case 66:
            if(lookahead == 'E')
                ADVANCE(537);
            END_STATE();
        case 67:
            if(lookahead == 'E')
                ADVANCE(539);
            END_STATE();
        case 68:
            if(lookahead == 'L')
                ADVANCE(72);
            END_STATE();
        case 69:
            if(lookahead == 'R')
                ADVANCE(656);
            END_STATE();
        case 70:
            if(lookahead == 'R')
                ADVANCE(155);
            if(lookahead == 'S')
                ADVANCE(179);
            END_STATE();
        case 71:
            if(lookahead == 'S')
                ADVANCE(70);
            END_STATE();
        case 72:
            if(lookahead == 'S')
                ADVANCE(67);
            END_STATE();
        case 73:
            if(lookahead == 'T')
                ADVANCE(305);
            END_STATE();
        case 74:
            if(lookahead == 'T')
                ADVANCE(316);
            END_STATE();
        case 75:
            if(lookahead == 'U')
                ADVANCE(66);
            END_STATE();
        case 76:
            if(lookahead == '_')
                ADVANCE(125);
            END_STATE();
        case 77:
            if(lookahead == '_')
                ADVANCE(259);
            END_STATE();
        case 78:
            if(lookahead == '_')
                ADVANCE(417);
            END_STATE();
        case 79:
            if(lookahead == '_')
                ADVANCE(350);
            END_STATE();
        case 80:
            if(lookahead == '_')
                ADVANCE(288);
            END_STATE();
        case 81:
            if(lookahead == '_')
                ADVANCE(369);
            END_STATE();
        case 82:
            if(lookahead == '_')
                ADVANCE(262);
            END_STATE();
        case 83:
            if(lookahead == 'a')
                ADVANCE(354);
            if(lookahead == 'o')
                ADVANCE(274);
            END_STATE();
        case 84:
            if(lookahead == 'a')
                ADVANCE(264);
            END_STATE();
        case 85:
            if(lookahead == 'a')
                ADVANCE(230);
            END_STATE();
        case 86:
            if(lookahead == 'a')
                ADVANCE(79);
            END_STATE();
        case 87:
            if(lookahead == 'a')
                ADVANCE(140);
            END_STATE();
        case 88:
            if(lookahead == 'a')
                ADVANCE(242);
            END_STATE();
        case 89:
            if(lookahead == 'a')
                ADVANCE(266);
            END_STATE();
        case 90:
            if(lookahead == 'a')
                ADVANCE(355);
            END_STATE();
        case 91:
            if(lookahead == 'a')
                ADVANCE(333);
            END_STATE();
        case 92:
            if(lookahead == 'a')
                ADVANCE(413);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(334);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(375);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(270);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(243);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(360);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(248);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(287);
            if(lookahead == 'd')
                ADVANCE(104);
            if(lookahead == 'f')
                ADVANCE(226);
            if(lookahead == 'i')
                ADVANCE(206);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(244);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(245);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(256);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(246);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(393);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(286);
            END_STATE();
        case 106:
            if(lookahead == 'a')
                ADVANCE(387);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(420);
            END_STATE();
        case 108:
            if(lookahead == 'a')
                ADVANCE(400);
            END_STATE();
        case 109:
            if(lookahead == 'a')
                ADVANCE(128);
            END_STATE();
        case 110:
            if(lookahead == 'a')
                ADVANCE(402);
            END_STATE();
        case 111:
            if(lookahead == 'a')
                ADVANCE(234);
            END_STATE();
        case 112:
            if(lookahead == 'a')
                ADVANCE(236);
            END_STATE();
        case 113:
            if(lookahead == 'b')
                ADVANCE(419);
            END_STATE();
        case 114:
            if(lookahead == 'b')
                ADVANCE(253);
            END_STATE();
        case 115:
            if(lookahead == 'b')
                ADVANCE(257);
            END_STATE();
        case 116:
            if(lookahead == 'c')
                ADVANCE(642);
            END_STATE();
        case 117:
            if(lookahead == 'c')
                ADVANCE(640);
            END_STATE();
        case 118:
            if(lookahead == 'c')
                ADVANCE(207);
            END_STATE();
        case 119:
            if(lookahead == 'c')
                ADVANCE(163);
            END_STATE();
        case 120:
            if(lookahead == 'c')
                ADVANCE(389);
            END_STATE();
        case 121:
            if(lookahead == 'c')
                ADVANCE(88);
            END_STATE();
        case 122:
            if(lookahead == 'c')
                ADVANCE(88);
            if(lookahead == 'n')
                ADVANCE(198);
            END_STATE();
        case 123:
            if(lookahead == 'c')
                ADVANCE(88);
            if(lookahead == 'n')
                ADVANCE(204);
            END_STATE();
        case 124:
            if(lookahead == 'c')
                ADVANCE(380);
            END_STATE();
        case 125:
            if(lookahead == 'c')
                ADVANCE(315);
            END_STATE();
        case 126:
            if(lookahead == 'c')
                ADVANCE(152);
            END_STATE();
        case 127:
            if(lookahead == 'c')
                ADVANCE(383);
            END_STATE();
        case 128:
            if(lookahead == 'c')
                ADVANCE(156);
            END_STATE();
        case 129:
            if(lookahead == 'c')
                ADVANCE(157);
            END_STATE();
        case 130:
            if(lookahead == 'd')
                ADVANCE(572);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 131:
            if(lookahead == 'd')
                ADVANCE(592);
            END_STATE();
        case 132:
            if(lookahead == 'd')
                ADVANCE(463);
            END_STATE();
        case 133:
            if(lookahead == 'd')
                ADVANCE(606);
            END_STATE();
        case 134:
            if(lookahead == 'd')
                ADVANCE(38);
            END_STATE();
        case 135:
            if(lookahead == 'd')
                ADVANCE(649);
            END_STATE();
        case 136:
            if(lookahead == 'd')
                ADVANCE(651);
            END_STATE();
        case 137:
            if(lookahead == 'd')
                ADVANCE(648);
            END_STATE();
        case 138:
            if(lookahead == 'd')
                ADVANCE(647);
            END_STATE();
        case 139:
            if(lookahead == 'd')
                ADVANCE(421);
            END_STATE();
        case 140:
            if(lookahead == 'd')
                ADVANCE(304);
            END_STATE();
        case 141:
            if(lookahead == 'd')
                ADVANCE(322);
            if(lookahead == 'l')
                ADVANCE(318);
            END_STATE();
        case 142:
            if(lookahead == 'd')
                ADVANCE(159);
            END_STATE();
        case 143:
            if(lookahead == 'd')
                ADVANCE(182);
            END_STATE();
        case 144:
            if(lookahead == 'd')
                ADVANCE(162);
            END_STATE();
        case 145:
            if(lookahead == 'd')
                ADVANCE(190);
            END_STATE();
        case 146:
            if(lookahead == 'e')
                ADVANCE(193);
            END_STATE();
        case 147:
            if(lookahead == 'e')
                ADVANCE(629);
            END_STATE();
        case 148:
            if(lookahead == 'e')
                ADVANCE(641);
            END_STATE();
        case 149:
            if(lookahead == 'e')
                ADVANCE(472);
            END_STATE();
        case 150:
            if(lookahead == 'e')
                ADVANCE(618);
            END_STATE();
        case 151:
            if(lookahead == 'e')
                ADVANCE(616);
            END_STATE();
        case 152:
            if(lookahead == 'e')
                ADVANCE(491);
            END_STATE();
        case 153:
            if(lookahead == 'e')
                ADVANCE(600);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(474);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(324);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(588);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(639);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(633);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(192);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(428);
            if(lookahead == 'h')
                ADVANCE(97);
            if(lookahead == 'i')
                ADVANCE(135);
            if(lookahead == 'k')
                ADVANCE(168);
            if(lookahead == 'm')
                ADVANCE(422);
            if(lookahead == 'n')
                ADVANCE(313);
            if(lookahead == 'o')
                ADVANCE(330);
            if(lookahead == 't')
                ADVANCE(336);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(77);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(196);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(325);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(356);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(329);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(132);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(250);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(432);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(357);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(293);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(142);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(358);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(359);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(134);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(95);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(349);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(377);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(137);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(335);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(379);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(346);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(352);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(298);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(388);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(365);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(342);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(344);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(345);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(368);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(197);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(408);
            if(lookahead == 'h')
                ADVANCE(306);
            if(lookahead == 't')
                ADVANCE(339);
            END_STATE();
        case 192:
            if(lookahead == 'f')
                ADVANCE(631);
            END_STATE();
        case 193:
            if(lookahead == 'f')
                ADVANCE(92);
            END_STATE();
        case 194:
            if(lookahead == 'f')
                ADVANCE(225);
            if(lookahead == 'm')
                ADVANCE(90);
            if(lookahead == 's')
                ADVANCE(180);
            END_STATE();
        case 195:
            if(lookahead == 'f')
                ADVANCE(109);
            END_STATE();
        case 196:
            if(lookahead == 'f')
                ADVANCE(229);
            END_STATE();
        case 197:
            if(lookahead == 'f')
                ADVANCE(107);
            END_STATE();
        case 198:
            if(lookahead == 'g')
                ADVANCE(456);
            END_STATE();
        case 199:
            if(lookahead == 'g')
                ADVANCE(480);
            END_STATE();
        case 200:
            if(lookahead == 'g')
                ADVANCE(482);
            END_STATE();
        case 201:
            if(lookahead == 'g')
                ADVANCE(460);
            END_STATE();
        case 202:
            if(lookahead == 'g')
                ADVANCE(468);
            END_STATE();
        case 203:
            if(lookahead == 'g')
                ADVANCE(469);
            END_STATE();
        case 204:
            if(lookahead == 'g')
                ADVANCE(458);
            END_STATE();
        case 205:
            if(lookahead == 'g')
                ADVANCE(297);
            END_STATE();
        case 206:
            if(lookahead == 'g')
                ADVANCE(294);
            END_STATE();
        case 207:
            if(lookahead == 'h')
                ADVANCE(627);
            END_STATE();
        case 208:
            if(lookahead == 'h')
                ADVANCE(224);
            END_STATE();
        case 209:
            if(lookahead == 'h')
                ADVANCE(93);
            END_STATE();
        case 210:
            if(lookahead == 'h')
                ADVANCE(317);
            END_STATE();
        case 211:
            if(lookahead == 'i')
                ADVANCE(426);
            END_STATE();
        case 212:
            if(lookahead == 'i')
                ADVANCE(435);
            END_STATE();
        case 213:
            if(lookahead == 'i')
                ADVANCE(372);
            if(lookahead == 'o')
                ADVANCE(301);
            END_STATE();
        case 214:
            if(lookahead == 'i')
                ADVANCE(276);
            if(lookahead == 'u')
                ADVANCE(124);
            END_STATE();
        case 215:
            if(lookahead == 'i')
                ADVANCE(113);
            END_STATE();
        case 216:
            if(lookahead == 'i')
                ADVANCE(205);
            END_STATE();
        case 217:
            if(lookahead == 'i')
                ADVANCE(131);
            END_STATE();
        case 218:
            if(lookahead == 'i')
                ADVANCE(302);
            END_STATE();
        case 219:
            if(lookahead == 'i')
                ADVANCE(302);
            if(lookahead == 's')
                ADVANCE(216);
            END_STATE();
        case 220:
            if(lookahead == 'i')
                ADVANCE(116);
            END_STATE();
        case 221:
            if(lookahead == 'i')
                ADVANCE(386);
            END_STATE();
        case 222:
            if(lookahead == 'i')
                ADVANCE(117);
            END_STATE();
        case 223:
            if(lookahead == 'i')
                ADVANCE(308);
            END_STATE();
        case 224:
            if(lookahead == 'i')
                ADVANCE(136);
            END_STATE();
        case 225:
            if(lookahead == 'i')
                ADVANCE(167);
            END_STATE();
        case 226:
            if(lookahead == 'i')
                ADVANCE(285);
            END_STATE();
        case 227:
            if(lookahead == 'i')
                ADVANCE(102);
            END_STATE();
        case 228:
            if(lookahead == 'i')
                ADVANCE(384);
            END_STATE();
        case 229:
            if(lookahead == 'i')
                ADVANCE(292);
            END_STATE();
        case 230:
            if(lookahead == 'i')
                ADVANCE(362);
            END_STATE();
        case 231:
            if(lookahead == 'i')
                ADVANCE(277);
            END_STATE();
        case 232:
            if(lookahead == 'i')
                ADVANCE(206);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(310);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(363);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(312);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(364);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(129);
            END_STATE();
        case 238:
            if(lookahead == 'i')
                ADVANCE(397);
            END_STATE();
        case 239:
            if(lookahead == 'i')
                ADVANCE(314);
            END_STATE();
        case 240:
            if(lookahead == 'i')
                ADVANCE(407);
            END_STATE();
        case 241:
            if(lookahead == 'k')
                ADVANCE(607);
            END_STATE();
        case 242:
            if(lookahead == 'l')
                ADVANCE(589);
            END_STATE();
        case 243:
            if(lookahead == 'l')
                ADVANCE(654);
            END_STATE();
        case 244:
            if(lookahead == 'l')
                ADVANCE(650);
            END_STATE();
        case 245:
            if(lookahead == 'l')
                ADVANCE(645);
            END_STATE();
        case 246:
            if(lookahead == 'l')
                ADVANCE(623);
            END_STATE();
        case 247:
            if(lookahead == 'l')
                ADVANCE(430);
            END_STATE();
        case 248:
            if(lookahead == 'l')
                ADVANCE(80);
            END_STATE();
        case 249:
            if(lookahead == 'l')
                ADVANCE(431);
            END_STATE();
        case 250:
            if(lookahead == 'l')
                ADVANCE(133);
            END_STATE();
        case 251:
            if(lookahead == 'l')
                ADVANCE(175);
            END_STATE();
        case 252:
            if(lookahead == 'l')
                ADVANCE(318);
            END_STATE();
        case 253:
            if(lookahead == 'l')
                ADVANCE(149);
            END_STATE();
        case 254:
            if(lookahead == 'l')
                ADVANCE(150);
            END_STATE();
        case 255:
            if(lookahead == 'l')
                ADVANCE(381);
            END_STATE();
        case 256:
            if(lookahead == 'l')
                ADVANCE(212);
            END_STATE();
        case 257:
            if(lookahead == 'l')
                ADVANCE(154);
            END_STATE();
        case 258:
            if(lookahead == 'l')
                ADVANCE(409);
            END_STATE();
        case 259:
            if(lookahead == 'l')
                ADVANCE(238);
            END_STATE();
        case 260:
            if(lookahead == 'l')
                ADVANCE(319);
            if(lookahead == 's')
                ADVANCE(210);
            END_STATE();
        case 261:
            if(lookahead == 'l')
                ADVANCE(320);
            END_STATE();
        case 262:
            if(lookahead == 'l')
                ADVANCE(240);
            END_STATE();
        case 263:
            if(lookahead == 'm')
                ADVANCE(621);
            END_STATE();
        case 264:
            if(lookahead == 'm')
                ADVANCE(148);
            if(lookahead == 't')
                ADVANCE(211);
            END_STATE();
        case 265:
            if(lookahead == 'm')
                ADVANCE(90);
            if(lookahead == 's')
                ADVANCE(180);
            END_STATE();
        case 266:
            if(lookahead == 'm')
                ADVANCE(173);
            END_STATE();
        case 267:
            if(lookahead == 'n')
                ADVANCE(594);
            END_STATE();
        case 268:
            if(lookahead == 'n')
                ADVANCE(219);
            END_STATE();
        case 269:
            if(lookahead == 'n')
                ADVANCE(625);
            END_STATE();
        case 270:
            if(lookahead == 'n')
                ADVANCE(461);
            END_STATE();
        case 271:
            if(lookahead == 'n')
                ADVANCE(584);
            END_STATE();
        case 272:
            if(lookahead == 'n')
                ADVANCE(609);
            END_STATE();
        case 273:
            if(lookahead == 'n')
                ADVANCE(655);
            END_STATE();
        case 274:
            if(lookahead == 'n')
                ADVANCE(361);
            END_STATE();
        case 275:
            if(lookahead == 'n')
                ADVANCE(411);
            if(lookahead == 'x')
                ADVANCE(119);
            END_STATE();
        case 276:
            if(lookahead == 'n')
                ADVANCE(199);
            END_STATE();
        case 277:
            if(lookahead == 'n')
                ADVANCE(200);
            END_STATE();
        case 278:
            if(lookahead == 'n')
                ADVANCE(81);
            END_STATE();
        case 279:
            if(lookahead == 'n')
                ADVANCE(247);
            END_STATE();
        case 280:
            if(lookahead == 'n')
                ADVANCE(201);
            END_STATE();
        case 281:
            if(lookahead == 'n')
                ADVANCE(202);
            END_STATE();
        case 282:
            if(lookahead == 'n')
                ADVANCE(203);
            END_STATE();
        case 283:
            if(lookahead == 'n')
                ADVANCE(370);
            END_STATE();
        case 284:
            if(lookahead == 'n')
                ADVANCE(311);
            END_STATE();
        case 285:
            if(lookahead == 'n')
                ADVANCE(96);
            END_STATE();
        case 286:
            if(lookahead == 'n')
                ADVANCE(138);
            END_STATE();
        case 287:
            if(lookahead == 'n')
                ADVANCE(284);
            END_STATE();
        case 288:
            if(lookahead == 'n')
                ADVANCE(89);
            END_STATE();
        case 289:
            if(lookahead == 'n')
                ADVANCE(100);
            END_STATE();
        case 290:
            if(lookahead == 'n')
                ADVANCE(101);
            END_STATE();
        case 291:
            if(lookahead == 'n')
                ADVANCE(218);
            END_STATE();
        case 292:
            if(lookahead == 'n')
                ADVANCE(158);
            END_STATE();
        case 293:
            if(lookahead == 'n')
                ADVANCE(126);
            END_STATE();
        case 294:
            if(lookahead == 'n')
                ADVANCE(309);
            END_STATE();
        case 295:
            if(lookahead == 'n')
                ADVANCE(143);
            END_STATE();
        case 296:
            if(lookahead == 'n')
                ADVANCE(396);
            END_STATE();
        case 297:
            if(lookahead == 'n')
                ADVANCE(174);
            END_STATE();
        case 298:
            if(lookahead == 'n')
                ADVANCE(403);
            END_STATE();
        case 299:
            if(lookahead == 'o')
                ADVANCE(274);
            END_STATE();
        case 300:
            if(lookahead == 'o')
                ADVANCE(139);
            END_STATE();
        case 301:
            if(lookahead == 'o')
                ADVANCE(251);
            END_STATE();
        case 302:
            if(lookahead == 'o')
                ADVANCE(269);
            END_STATE();
        case 303:
            if(lookahead == 'o')
                ADVANCE(94);
            END_STATE();
        case 304:
            if(lookahead == 'o')
                ADVANCE(279);
            END_STATE();
        case 305:
            if(lookahead == 'o')
                ADVANCE(326);
            END_STATE();
        case 306:
            if(lookahead == 'o')
                ADVANCE(341);
            END_STATE();
        case 307:
            if(lookahead == 'o')
                ADVANCE(121);
            END_STATE();
        case 308:
            if(lookahead == 'o')
                ADVANCE(271);
            END_STATE();
        case 309:
            if(lookahead == 'o')
                ADVANCE(347);
            END_STATE();
        case 310:
            if(lookahead == 'o')
                ADVANCE(272);
            END_STATE();
        case 311:
            if(lookahead == 'o')
                ADVANCE(401);
            END_STATE();
        case 312:
            if(lookahead == 'o')
                ADVANCE(273);
            END_STATE();
        case 313:
            if(lookahead == 'o')
                ADVANCE(278);
            END_STATE();
        case 314:
            if(lookahead == 'o')
                ADVANCE(290);
            END_STATE();
        case 315:
            if(lookahead == 'o')
                ADVANCE(283);
            END_STATE();
        case 316:
            if(lookahead == 'o')
                ADVANCE(327);
            END_STATE();
        case 317:
            if(lookahead == 'o')
                ADVANCE(343);
            END_STATE();
        case 318:
            if(lookahead == 'o')
                ADVANCE(280);
            END_STATE();
        case 319:
            if(lookahead == 'o')
                ADVANCE(281);
            END_STATE();
        case 320:
            if(lookahead == 'o')
                ADVANCE(282);
            END_STATE();
        case 321:
            if(lookahead == 'o')
                ADVANCE(123);
            END_STATE();
        case 322:
            if(lookahead == 'o')
                ADVANCE(424);
            END_STATE();
        case 323:
            if(lookahead == 'p')
                ADVANCE(493);
            END_STATE();
        case 324:
            if(lookahead == 'p')
                ADVANCE(249);
            if(lookahead == 'q')
                ADVANCE(418);
            END_STATE();
        case 325:
            if(lookahead == 'p')
                ADVANCE(392);
            END_STATE();
        case 326:
            if(lookahead == 'p')
                ADVANCE(220);
            END_STATE();
        case 327:
            if(lookahead == 'p')
                ADVANCE(222);
            END_STATE();
        case 328:
            if(lookahead == 'p')
                ADVANCE(171);
            END_STATE();
        case 329:
            if(lookahead == 'p')
                ADVANCE(348);
            END_STATE();
        case 330:
            if(lookahead == 'p')
                ADVANCE(404);
            END_STATE();
        case 331:
            if(lookahead == 'q')
                ADVANCE(416);
            if(lookahead == 't')
                ADVANCE(353);
            END_STATE();
        case 332:
            if(lookahead == 'r')
                ADVANCE(214);
            END_STATE();
        case 333:
            if(lookahead == 'r')
                ADVANCE(475);
            END_STATE();
        case 334:
            if(lookahead == 'r')
                ADVANCE(477);
            END_STATE();
        case 335:
            if(lookahead == 'r')
                ADVANCE(425);
            END_STATE();
        case 336:
            if(lookahead == 'r')
                ADVANCE(434);
            END_STATE();
        case 337:
            if(lookahead == 'r')
                ADVANCE(215);
            END_STATE();
        case 338:
            if(lookahead == 'r')
                ADVANCE(111);
            END_STATE();
        case 339:
            if(lookahead == 'r')
                ADVANCE(412);
            END_STATE();
        case 340:
            if(lookahead == 'r')
                ADVANCE(231);
            END_STATE();
        case 341:
            if(lookahead == 'r')
                ADVANCE(378);
            END_STATE();
        case 342:
            if(lookahead == 'r')
                ADVANCE(98);
            END_STATE();
        case 343:
            if(lookahead == 'r')
                ADVANCE(382);
            END_STATE();
        case 344:
            if(lookahead == 'r')
                ADVANCE(227);
            END_STATE();
        case 345:
            if(lookahead == 'r')
                ADVANCE(103);
            END_STATE();
        case 346:
            if(lookahead == 'r')
                ADVANCE(289);
            END_STATE();
        case 347:
            if(lookahead == 'r')
                ADVANCE(161);
            END_STATE();
        case 348:
            if(lookahead == 'r')
                ADVANCE(189);
            END_STATE();
        case 349:
            if(lookahead == 'r')
                ADVANCE(195);
            END_STATE();
        case 350:
            if(lookahead == 'r')
                ADVANCE(165);
            END_STATE();
        case 351:
            if(lookahead == 'r')
                ADVANCE(423);
            END_STATE();
        case 352:
            if(lookahead == 'r')
                ADVANCE(367);
            END_STATE();
        case 353:
            if(lookahead == 'r')
                ADVANCE(112);
            END_STATE();
        case 354:
            if(lookahead == 's')
                ADVANCE(147);
            END_STATE();
        case 355:
            if(lookahead == 's')
                ADVANCE(241);
            END_STATE();
        case 356:
            if(lookahead == 's')
                ADVANCE(597);
            END_STATE();
        case 357:
            if(lookahead == 's')
                ADVANCE(602);
            END_STATE();
        case 358:
            if(lookahead == 's')
                ADVANCE(603);
            END_STATE();
        case 359:
            if(lookahead == 's')
                ADVANCE(624);
            END_STATE();
        case 360:
            if(lookahead == 's')
                ADVANCE(208);
            END_STATE();
        case 361:
            if(lookahead == 's')
                ADVANCE(374);
            END_STATE();
        case 362:
            if(lookahead == 's')
                ADVANCE(164);
            END_STATE();
        case 363:
            if(lookahead == 's')
                ADVANCE(169);
            END_STATE();
        case 364:
            if(lookahead == 's')
                ADVANCE(172);
            END_STATE();
        case 365:
            if(lookahead == 's')
                ADVANCE(405);
            END_STATE();
        case 366:
            if(lookahead == 's')
                ADVANCE(390);
            END_STATE();
        case 367:
            if(lookahead == 's')
                ADVANCE(395);
            END_STATE();
        case 368:
            if(lookahead == 's')
                ADVANCE(183);
            END_STATE();
        case 369:
            if(lookahead == 's')
                ADVANCE(187);
            END_STATE();
        case 370:
            if(lookahead == 's')
                ADVANCE(406);
            END_STATE();
        case 371:
            if(lookahead == 't')
                ADVANCE(385);
            END_STATE();
        case 372:
            if(lookahead == 't')
                ADVANCE(194);
            END_STATE();
        case 373:
            if(lookahead == 't')
                ADVANCE(595);
            END_STATE();
        case 374:
            if(lookahead == 't')
                ADVANCE(643);
            END_STATE();
        case 375:
            if(lookahead == 't')
                ADVANCE(470);
            END_STATE();
        case 376:
            if(lookahead == 't')
                ADVANCE(596);
            END_STATE();
        case 377:
            if(lookahead == 't')
                ADVANCE(465);
            END_STATE();
        case 378:
            if(lookahead == 't')
                ADVANCE(454);
            END_STATE();
        case 379:
            if(lookahead == 't')
                ADVANCE(604);
            END_STATE();
        case 380:
            if(lookahead == 't')
                ADVANCE(619);
            END_STATE();
        case 381:
            if(lookahead == 't')
                ADVANCE(610);
            END_STATE();
        case 382:
            if(lookahead == 't')
                ADVANCE(467);
            END_STATE();
        case 383:
            if(lookahead == 't')
                ADVANCE(653);
            END_STATE();
        case 384:
            if(lookahead == 't')
                ADVANCE(265);
            END_STATE();
        case 385:
            if(lookahead == 't')
                ADVANCE(337);
            END_STATE();
        case 386:
            if(lookahead == 't')
                ADVANCE(118);
            END_STATE();
        case 387:
            if(lookahead == 't')
                ADVANCE(211);
            END_STATE();
        case 388:
            if(lookahead == 't')
                ADVANCE(338);
            END_STATE();
        case 389:
            if(lookahead == 't')
                ADVANCE(177);
            END_STATE();
        case 390:
            if(lookahead == 't')
                ADVANCE(78);
            END_STATE();
        case 391:
            if(lookahead == 't')
                ADVANCE(339);
            END_STATE();
        case 392:
            if(lookahead == 't')
                ADVANCE(223);
            END_STATE();
        case 393:
            if(lookahead == 't')
                ADVANCE(86);
            END_STATE();
        case 394:
            if(lookahead == 't')
                ADVANCE(153);
            END_STATE();
        case 395:
            if(lookahead == 't')
                ADVANCE(105);
            END_STATE();
        case 396:
            if(lookahead == 't')
                ADVANCE(176);
            END_STATE();
        case 397:
            if(lookahead == 't')
                ADVANCE(186);
            END_STATE();
        case 398:
            if(lookahead == 't')
                ADVANCE(181);
            END_STATE();
        case 399:
            if(lookahead == 't')
                ADVANCE(340);
            END_STATE();
        case 400:
            if(lookahead == 't')
                ADVANCE(233);
            END_STATE();
        case 401:
            if(lookahead == 't')
                ADVANCE(108);
            END_STATE();
        case 402:
            if(lookahead == 't')
                ADVANCE(235);
            END_STATE();
        case 403:
            if(lookahead == 't')
                ADVANCE(110);
            END_STATE();
        case 404:
            if(lookahead == 't')
                ADVANCE(239);
            END_STATE();
        case 405:
            if(lookahead == 't')
                ADVANCE(74);
            END_STATE();
        case 406:
            if(lookahead == 't')
                ADVANCE(351);
            END_STATE();
        case 407:
            if(lookahead == 't')
                ADVANCE(188);
            END_STATE();
        case 408:
            if(lookahead == 't')
                ADVANCE(353);
            END_STATE();
        case 409:
            if(lookahead == 't')
                ADVANCE(82);
            END_STATE();
        case 410:
            if(lookahead == 'u')
                ADVANCE(114);
            END_STATE();
        case 411:
            if(lookahead == 'u')
                ADVANCE(263);
            END_STATE();
        case 412:
            if(lookahead == 'u')
                ADVANCE(124);
            END_STATE();
        case 413:
            if(lookahead == 'u')
                ADVANCE(255);
            END_STATE();
        case 414:
            if(lookahead == 'u')
                ADVANCE(373);
            END_STATE();
        case 415:
            if(lookahead == 'u')
                ADVANCE(376);
            END_STATE();
        case 416:
            if(lookahead == 'u')
                ADVANCE(170);
            END_STATE();
        case 417:
            if(lookahead == 'u')
                ADVANCE(295);
            END_STATE();
        case 418:
            if(lookahead == 'u')
                ADVANCE(185);
            END_STATE();
        case 419:
            if(lookahead == 'u')
                ADVANCE(394);
            END_STATE();
        case 420:
            if(lookahead == 'u')
                ADVANCE(258);
            END_STATE();
        case 421:
            if(lookahead == 'u')
                ADVANCE(254);
            END_STATE();
        case 422:
            if(lookahead == 'u')
                ADVANCE(366);
            END_STATE();
        case 423:
            if(lookahead == 'u')
                ADVANCE(127);
            END_STATE();
        case 424:
            if(lookahead == 'u')
                ADVANCE(115);
            END_STATE();
        case 425:
            if(lookahead == 'v')
                ADVANCE(237);
            END_STATE();
        case 426:
            if(lookahead == 'v')
                ADVANCE(151);
            END_STATE();
        case 427:
            if(lookahead == 'x')
                ADVANCE(166);
            END_STATE();
        case 428:
            if(lookahead == 'x')
                ADVANCE(398);
            END_STATE();
        case 429:
            if(lookahead == 'y')
                ADVANCE(488);
            END_STATE();
        case 430:
            if(lookahead == 'y')
                ADVANCE(598);
            END_STATE();
        case 431:
            if(lookahead == 'y')
                ADVANCE(73);
            END_STATE();
        case 432:
            if(lookahead == 'y')
                ADVANCE(646);
            END_STATE();
        case 433:
            if(lookahead == 'y')
                ADVANCE(328);
            END_STATE();
        case 434:
            if(lookahead == 'y')
                ADVANCE(76);
            END_STATE();
        case 435:
            if(lookahead == 'z')
                ADVANCE(178);
            END_STATE();
        case 436:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 437:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            END_STATE();
        case 438:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(541);
            END_STATE();
        case 439:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            END_STATE();
        case 440:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(555);
            END_STATE();
        case 441:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            END_STATE();
        case 442:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(543);
            END_STATE();
        case 443:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(817);
            if(lookahead == '\r')
                ADVANCE(819);
            if(lookahead == '\\')
                ADVANCE(818);
            END_STATE();
        case 444:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(581);
            END_STATE();
        case 445:
            if(eof)
                ADVANCE(453);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 446:
            if(eof)
                ADVANCE(453);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(445)
            END_STATE();
        case 447:
            if(eof)
                ADVANCE(453);
            if(lookahead == '\n')
                SKIP(451)
            END_STATE();
        case 448:
            if(eof)
                ADVANCE(453);
            if(lookahead == '\n')
                SKIP(451)
            if(lookahead == '\r')
                SKIP(447)
            END_STATE();
        case 449:
            if(eof)
                ADVANCE(453);
            if(lookahead == '\n')
                SKIP(452)
            END_STATE();
        case 450:
            if(eof)
                ADVANCE(453);
            if(lookahead == '\n')
                SKIP(452)
            if(lookahead == '\r')
                SKIP(449)
            END_STATE();
        case 451:
            if(eof)
                ADVANCE(453);
            if(lookahead == '#')
                ADVANCE(130);
            if(lookahead == '$')
                ADVANCE(497);
            if(lookahead == '%')
                ADVANCE(506);
            if(lookahead == '(')
                ADVANCE(40);
            if(lookahead == ')')
                ADVANCE(508);
            if(lookahead == '*')
                ADVANCE(504);
            if(lookahead == '+')
                ADVANCE(500);
            if(lookahead == ',')
                ADVANCE(490);
            if(lookahead == '-')
                ADVANCE(502);
            if(lookahead == '/')
                ADVANCE(505);
            if(lookahead == ':')
                ADVANCE(590);
            if(lookahead == ';')
                ADVANCE(591);
            if(lookahead == '<')
                ADVANCE(60);
            if(lookahead == '>')
                ADVANCE(487);
            if(lookahead == '@')
                ADVANCE(64);
            if(lookahead == 'X')
                ADVANCE(62);
            if(lookahead == '[')
                ADVANCE(613);
            if(lookahead == '\\')
                SKIP(448)
            if(lookahead == ']')
                ADVANCE(614);
            if(lookahead == '^')
                ADVANCE(496);
            if(lookahead == 'a')
                ADVANCE(371);
            if(lookahead == 'b')
                ADVANCE(213);
            if(lookahead == 'c')
                ADVANCE(83);
            if(lookahead == 'd')
                ADVANCE(146);
            if(lookahead == 'e')
                ADVANCE(275);
            if(lookahead == 'g')
                ADVANCE(184);
            if(lookahead == 'i')
                ADVANCE(296);
            if(lookahead == 'l')
                ADVANCE(321);
            if(lookahead == 'm')
                ADVANCE(300);
            if(lookahead == 'n')
                ADVANCE(84);
            if(lookahead == 'o')
                ADVANCE(120);
            if(lookahead == 'r')
                ADVANCE(85);
            if(lookahead == 's')
                ADVANCE(191);
            if(lookahead == 't')
                ADVANCE(433);
            if(lookahead == 'u')
                ADVANCE(268);
            if(lookahead == '|')
                ADVANCE(495);
            if(lookahead == '}')
                ADVANCE(587);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(451)
            END_STATE();
        case 452:
            if(eof)
                ADVANCE(453);
            if(lookahead == '#')
                ADVANCE(144);
            if(lookahead == '$')
                ADVANCE(497);
            if(lookahead == ')')
                ADVANCE(508);
            if(lookahead == ',')
                ADVANCE(490);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(590);
            if(lookahead == ';')
                ADVANCE(591);
            if(lookahead == '>')
                ADVANCE(486);
            if(lookahead == '@')
                ADVANCE(64);
            if(lookahead == '\\')
                SKIP(450)
            if(lookahead == ']')
                ADVANCE(614);
            if(lookahead == '^')
                ADVANCE(496);
            if(lookahead == 'b')
                ADVANCE(228);
            if(lookahead == 'c')
                ADVANCE(299);
            if(lookahead == 'e')
                ADVANCE(275);
            if(lookahead == 'i')
                ADVANCE(296);
            if(lookahead == 'l')
                ADVANCE(307);
            if(lookahead == 'm')
                ADVANCE(300);
            if(lookahead == 'n')
                ADVANCE(106);
            if(lookahead == 's')
                ADVANCE(391);
            if(lookahead == 't')
                ADVANCE(433);
            if(lookahead == 'u')
                ADVANCE(291);
            if(lookahead == '|')
                ADVANCE(495);
            if(lookahead == '}')
                ADVANCE(587);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(452)
            END_STATE();
        case 453:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(sym_signed_short_int);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(sym_signed_short_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(141);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(141);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(252);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(252);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(sym_signed_longlong_int);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(sym_unsigned_short_int);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(sym_unsigned_long_int);
            if(lookahead == ' ')
                ADVANCE(261);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(sym_unsigned_longlong_int);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(499);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(498);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(438);
            if(lookahead == '0')
                ADVANCE(549);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(438);
            if(lookahead == '0')
                ADVANCE(549);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(811);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(513);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(68);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'C')
                ADVANCE(63);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(75);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(354);
            if(lookahead == 'h')
                ADVANCE(91);
            if(lookahead == 'o')
                ADVANCE(274);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(323);
            if(lookahead == 'o')
                ADVANCE(139);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(264);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(230);
            if(lookahead == 'e')
                ADVANCE(87);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(209);
            if(lookahead == 's')
                ADVANCE(399);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(389);
            if(lookahead == 'u')
                ADVANCE(373);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(193);
            if(lookahead == 'o')
                ADVANCE(410);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(331);
            if(lookahead == 'h')
                ADVANCE(306);
            if(lookahead == 't')
                ADVANCE(332);
            if(lookahead == 'w')
                ADVANCE(221);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(388);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(427);
            if(lookahead == 'l')
                ADVANCE(303);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(372);
            if(lookahead == 'o')
                ADVANCE(301);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(429);
            if(lookahead == 't')
                ADVANCE(385);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(594);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(219);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(411);
            if(lookahead == 'x')
                ADVANCE(119);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(122);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(217);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'y')
                ADVANCE(328);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(438);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(541);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(570);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(442);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(542);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(542);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(442);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(543);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(543);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(439);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(558);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(556);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(564);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(809);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(559);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(559);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(439);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(560);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(557);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(441);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(561);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(439);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(556);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(564);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(559);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(559);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(439);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(557);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(561);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(562);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(659);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(564);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(563);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(47);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(565);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(567);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(809);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(564);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(568);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(441);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(565);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(564);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(569);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(437);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(570);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(440);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(442);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(554);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(555);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(555);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(440);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(554);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(555);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(555);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(441);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(442);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(556);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(564);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(559);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(559);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(441);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(442);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(557);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(561);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(441);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(556);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(564);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(559);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(559);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(441);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(556);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(564);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(559);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(559);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(441);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(557);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(561);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(547);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(441);
            if(lookahead == '.')
                ADVANCE(566);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(557);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(561);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(561);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(438);
            if(lookahead == '0')
                ADVANCE(550);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(569);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(438);
            if(lookahead == '0')
                ADVANCE(551);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(570);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(442);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(542);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(542);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(442);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(543);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(543);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(554);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(565);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(555);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(570);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(555);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(552);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(569);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(553);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(570);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(569);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(570);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(574);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(634);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(575);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(576);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(58)
            if(lookahead == '\r')
                ADVANCE(579);
            if(lookahead == '/')
                ADVANCE(444);
            if(lookahead == '\\')
                ADVANCE(582);
            if(lookahead != 0)
                ADVANCE(581);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(58)
            if(lookahead == '/')
                ADVANCE(444);
            if(lookahead == '\\')
                ADVANCE(582);
            if(lookahead != 0)
                ADVANCE(581);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(811);
            if(lookahead == '\\')
                ADVANCE(582);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(581);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(444);
            if(lookahead == '\\')
                ADVANCE(582);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(581);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(581);
            if(lookahead == '\r')
                ADVANCE(583);
            if(lookahead == '/')
                ADVANCE(444);
            if(lookahead == '\\')
                ADVANCE(582);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(581);
            if(lookahead == '/')
                ADVANCE(444);
            if(lookahead == '\\')
                ADVANCE(582);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_exception);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(415);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(anon_sym_bitset);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_bitmask);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_native);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym_case);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(577);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(638);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(638);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(637);
            if(lookahead == '\\')
                ADVANCE(635);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(636);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(638);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(813);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(638);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(638);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(anon_sym_const);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(657);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(260);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(438);
            if(lookahead == '0')
                ADVANCE(544);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(546);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(559);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(663);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(538);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(665);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(666);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(661);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(768);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(779);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(792);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(773);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(782);
            if(lookahead == 'h')
                ADVANCE(671);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(800);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(774);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(785);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(735);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(802);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(720);
            if(lookahead == 's')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(720);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(794);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(696);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(789);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(464);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(658);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(771);
            if(lookahead == 'h')
                ADVANCE(762);
            if(lookahead == 't')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(771);
            if(lookahead == 'h')
                ADVANCE(762);
            if(lookahead == 't')
                ADVANCE(777);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(473);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(709);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(492);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(630);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(710);
            if(lookahead == 'o')
                ADVANCE(798);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(687);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(668);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(689);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(676);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(755);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(786);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(788);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(632);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(673);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(457);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(481);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(483);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(459);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(628);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(671);
            if(lookahead == 'o')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(671);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(762);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(674);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(805);
            if(lookahead == 'l')
                ADVANCE(766);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(803);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(783);
            if(lookahead == 'o')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(715);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(752);
            if(lookahead == 'u')
                ADVANCE(685);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(753);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(793);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(763);
            if(lookahead == 's')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(765);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(608);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(807);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(693);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(705);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(622);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(669);
            if(lookahead == 's')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(781);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(462);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(585);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(806);
            if(lookahead == 't')
                ADVANCE(791);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(806);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(799);
            if(lookahead == 'x')
                ADVANCE(681);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(799);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(734);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(780);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(713);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(714);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(684);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(798);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(726);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(737);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(778);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(675);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(754);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(494);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(795);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(703);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(801);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(727);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(478);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(724);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(729);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(728);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(787);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(784);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(644);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(471);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(466);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(455);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(605);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(620);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(611);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(775);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(722);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(682);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(732);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(776);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(677);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(738);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(796);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(730);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(489);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(599);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(770);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(559);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(810);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(817);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(638);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(815);
            if(lookahead == '\\')
                ADVANCE(443);
            if(lookahead != 0)
                ADVANCE(817);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(816);
            if(lookahead == '\\')
                ADVANCE(31);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(815);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(817);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(812);
            if(lookahead == '\\')
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(817);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(443);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(817);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(817);
            if(lookahead == '\r')
                ADVANCE(819);
            if(lookahead == '\\')
                ADVANCE(818);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(817);
            if(lookahead == '\\')
                ADVANCE(443);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 451 },
    [2] = { .lex_state = 45 },
    [3] = { .lex_state = 45 },
    [4] = { .lex_state = 45 },
    [5] = { .lex_state = 45 },
    [6] = { .lex_state = 45 },
    [7] = { .lex_state = 49 },
    [8] = { .lex_state = 46 },
    [9] = { .lex_state = 46 },
    [10] = { .lex_state = 46 },
    [11] = { .lex_state = 46 },
    [12] = { .lex_state = 451 },
    [13] = { .lex_state = 46 },
    [14] = { .lex_state = 46 },
    [15] = { .lex_state = 46 },
    [16] = { .lex_state = 46 },
    [17] = { .lex_state = 46 },
    [18] = { .lex_state = 46 },
    [19] = { .lex_state = 46 },
    [20] = { .lex_state = 452 },
    [21] = { .lex_state = 452 },
    [22] = { .lex_state = 452 },
    [23] = { .lex_state = 452 },
    [24] = { .lex_state = 452 },
    [25] = { .lex_state = 46 },
    [26] = { .lex_state = 51 },
    [27] = { .lex_state = 50 },
    [28] = { .lex_state = 50 },
    [29] = { .lex_state = 50 },
    [30] = { .lex_state = 46 },
    [31] = { .lex_state = 45 },
    [32] = { .lex_state = 45 },
    [33] = { .lex_state = 46 },
    [34] = { .lex_state = 46 },
    [35] = { .lex_state = 46 },
    [36] = { .lex_state = 46 },
    [37] = { .lex_state = 46 },
    [38] = { .lex_state = 46 },
    [39] = { .lex_state = 46 },
    [40] = { .lex_state = 46 },
    [41] = { .lex_state = 46 },
    [42] = { .lex_state = 46 },
    [43] = { .lex_state = 46 },
    [44] = { .lex_state = 46 },
    [45] = { .lex_state = 46 },
    [46] = { .lex_state = 46 },
    [47] = { .lex_state = 52 },
    [48] = { .lex_state = 52 },
    [49] = { .lex_state = 46 },
    [50] = { .lex_state = 39 },
    [51] = { .lex_state = 39 },
    [52] = { .lex_state = 39 },
    [53] = { .lex_state = 39 },
    [54] = { .lex_state = 39 },
    [55] = { .lex_state = 39 },
    [56] = { .lex_state = 39 },
    [57] = { .lex_state = 39 },
    [58] = { .lex_state = 39 },
    [59] = { .lex_state = 39 },
    [60] = { .lex_state = 39 },
    [61] = { .lex_state = 39 },
    [62] = { .lex_state = 39 },
    [63] = { .lex_state = 39 },
    [64] = { .lex_state = 51 },
    [65] = { .lex_state = 451 },
    [66] = { .lex_state = 39 },
    [67] = { .lex_state = 51 },
    [68] = { .lex_state = 39 },
    [69] = { .lex_state = 50 },
    [70] = { .lex_state = 39 },
    [71] = { .lex_state = 39 },
    [72] = { .lex_state = 50 },
    [73] = { .lex_state = 50 },
    [74] = { .lex_state = 50 },
    [75] = { .lex_state = 39 },
    [76] = { .lex_state = 451 },
    [77] = { .lex_state = 452 },
    [78] = { .lex_state = 39 },
    [79] = { .lex_state = 451 },
    [80] = { .lex_state = 452 },
    [81] = { .lex_state = 452 },
    [82] = { .lex_state = 451 },
    [83] = { .lex_state = 452 },
    [84] = { .lex_state = 39 },
    [85] = { .lex_state = 39 },
    [86] = { .lex_state = 46 },
    [87] = { .lex_state = 39 },
    [88] = { .lex_state = 39 },
    [89] = { .lex_state = 39 },
    [90] = { .lex_state = 39 },
    [91] = { .lex_state = 41 },
    [92] = { .lex_state = 41 },
    [93] = { .lex_state = 451 },
    [94] = { .lex_state = 451 },
    [95] = { .lex_state = 451 },
    [96] = { .lex_state = 41 },
    [97] = { .lex_state = 451 },
    [98] = { .lex_state = 451 },
    [99] = { .lex_state = 53 },
    [100] = { .lex_state = 451 },
    [101] = { .lex_state = 451 },
    [102] = { .lex_state = 451 },
    [103] = { .lex_state = 451 },
    [104] = { .lex_state = 451 },
    [105] = { .lex_state = 41 },
    [106] = { .lex_state = 451 },
    [107] = { .lex_state = 451 },
    [108] = { .lex_state = 451 },
    [109] = { .lex_state = 451 },
    [110] = { .lex_state = 39 },
    [111] = { .lex_state = 39 },
    [112] = { .lex_state = 451 },
    [113] = { .lex_state = 451 },
    [114] = { .lex_state = 451 },
    [115] = { .lex_state = 42 },
    [116] = { .lex_state = 42 },
    [117] = { .lex_state = 42 },
    [118] = { .lex_state = 42 },
    [119] = { .lex_state = 451 },
    [120] = { .lex_state = 451 },
    [121] = { .lex_state = 451 },
    [122] = { .lex_state = 451 },
    [123] = { .lex_state = 451 },
    [124] = { .lex_state = 452 },
    [125] = { .lex_state = 452 },
    [126] = { .lex_state = 451 },
    [127] = { .lex_state = 39 },
    [128] = { .lex_state = 451 },
    [129] = { .lex_state = 451 },
    [130] = { .lex_state = 452 },
    [131] = { .lex_state = 452 },
    [132] = { .lex_state = 451 },
    [133] = { .lex_state = 451 },
    [134] = { .lex_state = 44 },
    [135] = { .lex_state = 452 },
    [136] = { .lex_state = 451 },
    [137] = { .lex_state = 451 },
    [138] = { .lex_state = 451 },
    [139] = { .lex_state = 451 },
    [140] = { .lex_state = 451 },
    [141] = { .lex_state = 451 },
    [142] = { .lex_state = 41 },
    [143] = { .lex_state = 451 },
    [144] = { .lex_state = 41 },
    [145] = { .lex_state = 451 },
    [146] = { .lex_state = 41 },
    [147] = { .lex_state = 41 },
    [148] = { .lex_state = 451 },
    [149] = { .lex_state = 451 },
    [150] = { .lex_state = 451 },
    [151] = { .lex_state = 41 },
    [152] = { .lex_state = 44 },
    [153] = { .lex_state = 41 },
    [154] = { .lex_state = 451 },
    [155] = { .lex_state = 451 },
    [156] = { .lex_state = 451 },
    [157] = { .lex_state = 451 },
    [158] = { .lex_state = 451 },
    [159] = { .lex_state = 41 },
    [160] = { .lex_state = 41 },
    [161] = { .lex_state = 451 },
    [162] = { .lex_state = 451 },
    [163] = { .lex_state = 451 },
    [164] = { .lex_state = 451 },
    [165] = { .lex_state = 451 },
    [166] = { .lex_state = 451 },
    [167] = { .lex_state = 43 },
    [168] = { .lex_state = 451 },
    [169] = { .lex_state = 43 },
    [170] = { .lex_state = 43 },
    [171] = { .lex_state = 43 },
    [172] = { .lex_state = 43 },
    [173] = { .lex_state = 451 },
    [174] = { .lex_state = 41 },
    [175] = { .lex_state = 451 },
    [176] = { .lex_state = 43 },
    [177] = { .lex_state = 41 },
    [178] = { .lex_state = 451 },
    [179] = { .lex_state = 0 },
    [180] = { .lex_state = 41 },
    [181] = { .lex_state = 41 },
    [182] = { .lex_state = 41 },
    [183] = { .lex_state = 41 },
    [184] = { .lex_state = 451 },
    [185] = { .lex_state = 41 },
    [186] = { .lex_state = 43 },
    [187] = { .lex_state = 451 },
    [188] = { .lex_state = 41 },
    [189] = { .lex_state = 451 },
    [190] = { .lex_state = 0 },
    [191] = { .lex_state = 0 },
    [192] = { .lex_state = 0 },
    [193] = { .lex_state = 0 },
    [194] = { .lex_state = 0 },
    [195] = { .lex_state = 451 },
    [196] = { .lex_state = 43 },
    [197] = { .lex_state = 0 },
    [198] = { .lex_state = 43 },
    [199] = { .lex_state = 451 },
    [200] = { .lex_state = 41 },
    [201] = { .lex_state = 43 },
    [202] = { .lex_state = 43 },
    [203] = { .lex_state = 0 },
    [204] = { .lex_state = 0 },
    [205] = { .lex_state = 0 },
    [206] = { .lex_state = 0 },
    [207] = { .lex_state = 43 },
    [208] = { .lex_state = 43 },
    [209] = { .lex_state = 45 },
    [210] = { .lex_state = 451 },
    [211] = { .lex_state = 43 },
    [212] = { .lex_state = 451 },
    [213] = { .lex_state = 43 },
    [214] = { .lex_state = 0 },
    [215] = { .lex_state = 0 },
    [216] = { .lex_state = 451 },
    [217] = { .lex_state = 451 },
    [218] = { .lex_state = 41 },
    [219] = { .lex_state = 41 },
    [220] = { .lex_state = 0 },
    [221] = { .lex_state = 43 },
    [222] = { .lex_state = 451 },
    [223] = { .lex_state = 0 },
    [224] = { .lex_state = 451 },
    [225] = { .lex_state = 451 },
    [226] = { .lex_state = 0 },
    [227] = { .lex_state = 43 },
    [228] = { .lex_state = 43 },
    [229] = { .lex_state = 0 },
    [230] = { .lex_state = 0 },
    [231] = { .lex_state = 43 },
    [232] = { .lex_state = 451 },
    [233] = { .lex_state = 41 },
    [234] = { .lex_state = 0 },
    [235] = { .lex_state = 41 },
    [236] = { .lex_state = 43 },
    [237] = { .lex_state = 451 },
    [238] = { .lex_state = 451 },
    [239] = { .lex_state = 0 },
    [240] = { .lex_state = 54 },
    [241] = { .lex_state = 41 },
    [242] = { .lex_state = 0 },
    [243] = { .lex_state = 43 },
    [244] = { .lex_state = 0 },
    [245] = { .lex_state = 43 },
    [246] = { .lex_state = 0 },
    [247] = { .lex_state = 41 },
    [248] = { .lex_state = 0 },
    [249] = { .lex_state = 43 },
    [250] = { .lex_state = 0 },
    [251] = { .lex_state = 43 },
    [252] = { .lex_state = 0 },
    [253] = { .lex_state = 43 },
    [254] = { .lex_state = 43 },
    [255] = { .lex_state = 451 },
    [256] = { .lex_state = 41 },
    [257] = { .lex_state = 43 },
    [258] = { .lex_state = 43 },
    [259] = { .lex_state = 43 },
    [260] = { .lex_state = 0 },
    [261] = { .lex_state = 451 },
    [262] = { .lex_state = 451 },
    [263] = { .lex_state = 0 },
    [264] = { .lex_state = 0 },
    [265] = { .lex_state = 451 },
    [266] = { .lex_state = 41 },
    [267] = { .lex_state = 0 },
    [268] = { .lex_state = 41 },
    [269] = { .lex_state = 41 },
    [270] = { .lex_state = 0 },
    [271] = { .lex_state = 451 },
    [272] = { .lex_state = 41 },
    [273] = { .lex_state = 0 },
    [274] = { .lex_state = 41 },
    [275] = { .lex_state = 27 },
    [276] = { .lex_state = 0 },
    [277] = { .lex_state = 0 },
    [278] = { .lex_state = 0 },
    [279] = { .lex_state = 41 },
    [280] = { .lex_state = 451 },
    [281] = { .lex_state = 0 },
    [282] = { .lex_state = 41 },
    [283] = { .lex_state = 0 },
    [284] = { .lex_state = 41 },
    [285] = { .lex_state = 451 },
    [286] = { .lex_state = 41 },
    [287] = { .lex_state = 451 },
    [288] = { .lex_state = 41 },
    [289] = { .lex_state = 41 },
    [290] = { .lex_state = 451 },
    [291] = { .lex_state = 41 },
    [292] = { .lex_state = 41 },
    [293] = { .lex_state = 451 },
    [294] = { .lex_state = 41 },
    [295] = { .lex_state = 41 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 41 },
    [298] = { .lex_state = 41 },
    [299] = { .lex_state = 41 },
    [300] = { .lex_state = 41 },
    [301] = { .lex_state = 45 },
    [302] = { .lex_state = 451 },
    [303] = { .lex_state = 0 },
    [304] = { .lex_state = 41 },
    [305] = { .lex_state = 41 },
    [306] = { .lex_state = 41 },
    [307] = { .lex_state = 41 },
    [308] = { .lex_state = 451 },
    [309] = { .lex_state = 41 },
    [310] = { .lex_state = 41 },
    [311] = { .lex_state = 0 },
    [312] = { .lex_state = 41 },
    [313] = { .lex_state = 451 },
    [314] = { .lex_state = 451 },
    [315] = { .lex_state = 41 },
    [316] = { .lex_state = 0 },
    [317] = { .lex_state = 41 },
    [318] = { .lex_state = 41 },
    [319] = { .lex_state = 0 },
    [320] = { .lex_state = 0 },
    [321] = { .lex_state = 41 },
    [322] = { .lex_state = 41 },
    [323] = { .lex_state = 41 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 41 },
    [326] = { .lex_state = 0 },
    [327] = { .lex_state = 41 },
    [328] = { .lex_state = 41 },
    [329] = { .lex_state = 45 },
    [330] = { .lex_state = 451 },
    [331] = { .lex_state = 41 },
    [332] = { .lex_state = 451 },
    [333] = { .lex_state = 41 },
    [334] = { .lex_state = 451 },
    [335] = { .lex_state = 0 },
    [336] = { .lex_state = 41 },
    [337] = { .lex_state = 0 },
    [338] = { .lex_state = 45 },
    [339] = { .lex_state = 45 },
    [340] = { .lex_state = 45 },
    [341] = { .lex_state = 0 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 41 },
    [346] = { .lex_state = 815 },
    [347] = { .lex_state = 451 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 41 },
    [350] = { .lex_state = 0 },
    [351] = { .lex_state = 0 },
    [352] = { .lex_state = 41 },
    [353] = { .lex_state = 0 },
    [354] = { .lex_state = 0 },
    [355] = { .lex_state = 45 },
    [356] = { .lex_state = 41 },
    [357] = { .lex_state = 0 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 41 },
    [360] = { .lex_state = 0 },
    [361] = { .lex_state = 0 },
    [362] = { .lex_state = 0 },
    [363] = { .lex_state = 41 },
    [364] = { .lex_state = 0 },
    [365] = { .lex_state = 0 },
    [366] = { .lex_state = 0 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 0 },
    [369] = { .lex_state = 0 },
    [370] = { .lex_state = 0 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 0 },
    [373] = { .lex_state = 0 },
    [374] = { .lex_state = 0 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 0 },
    [378] = { .lex_state = 0 },
    [379] = { .lex_state = 45 },
    [380] = { .lex_state = 0 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 0 },
    [384] = { .lex_state = 0 },
    [385] = { .lex_state = 0 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 0 },
    [388] = { .lex_state = 0 },
    [389] = { .lex_state = 45 },
    [390] = { .lex_state = 45 },
    [391] = { .lex_state = 41 },
    [392] = { .lex_state = 0 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 55 },
    [395] = { .lex_state = 56 },
    [396] = { .lex_state = 0 },
    [397] = { .lex_state = 28 },
    [398] = { .lex_state = 45 },
    [399] = { .lex_state = 0 },
    [400] = { .lex_state = 0 },
    [401] = { .lex_state = 0 },
    [402] = { .lex_state = 0 },
    [403] = { .lex_state = 0 },
    [404] = { .lex_state = 41 },
    [405] = { .lex_state = 0 },
    [406] = { .lex_state = 451 },
    [407] = { .lex_state = 0 },
    [408] = { .lex_state = 0 },
    [409] = { .lex_state = 0 },
    [410] = { .lex_state = 0 },
    [411] = { .lex_state = 451 },
    [412] = { .lex_state = 451 },
    [413] = { .lex_state = 0 },
    [414] = { .lex_state = 41 },
    [415] = { .lex_state = 0 },
    [416] = { .lex_state = 0 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 0 },
    [419] = { .lex_state = 0 },
    [420] = { .lex_state = 41 },
    [421] = { .lex_state = 0 },
    [422] = { .lex_state = 41 },
    [423] = { .lex_state = 0 },
    [424] = { .lex_state = 0 },
    [425] = { .lex_state = 56 },
    [426] = { .lex_state = 0 },
    [427] = { .lex_state = 0 },
    [428] = { .lex_state = 56 },
    [429] = { .lex_state = 0 },
    [430] = { .lex_state = 451 },
    [431] = { .lex_state = 0 },
    [432] = { .lex_state = 0 },
    [433] = { .lex_state = 0 },
    [434] = { .lex_state = 451 },
    [435] = { .lex_state = 0 },
    [436] = { .lex_state = 0 },
    [437] = { .lex_state = 636 },
    [438] = { .lex_state = 41 },
    [439] = { .lex_state = 451 },
    [440] = { .lex_state = 41 },
    [441] = { .lex_state = 41 },
    [442] = { .lex_state = 451 },
    [443] = { .lex_state = 45 },
    [444] = { .lex_state = 45 },
    [445] = { .lex_state = 41 },
    [446] = { .lex_state = 0 },
    [447] = { .lex_state = 41 },
    [448] = { .lex_state = 451 },
    [449] = { .lex_state = 55 },
    [450] = { .lex_state = 56 },
    [451] = { .lex_state = 0 },
    [452] = { .lex_state = 41 },
    [453] = { .lex_state = 41 },
    [454] = { .lex_state = 0 },
    [455] = { .lex_state = 41 },
    [456] = { .lex_state = 0 },
    [457] = { .lex_state = 41 },
    [458] = { .lex_state = 41 },
    [459] = { .lex_state = 41 },
    [460] = { .lex_state = 45 },
    [461] = { .lex_state = 41 },
    [462] = { .lex_state = 41 },
    [463] = { .lex_state = 0 },
    [464] = { .lex_state = 0 },
    [465] = { .lex_state = 41 },
    [466] = { .lex_state = 41 },
    [467] = { .lex_state = 0 },
    [468] = { .lex_state = 41 },
    [469] = { .lex_state = 0 },
    [470] = { .lex_state = 41 },
    [471] = { .lex_state = 451 },
    [472] = { .lex_state = 41 },
    [473] = { (TSStateId)(-1) },
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
        [anon_sym_default] = ACTIONS(1),
        [anon_sym_AT] = ACTIONS(1),
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_module] = ACTIONS(1),
        [anon_sym_struct] = ACTIONS(1),
        [anon_sym_enum] = ACTIONS(1),
        [anon_sym_union] = ACTIONS(1),
        [anon_sym_switch] = ACTIONS(1),
        [anon_sym_case] = ACTIONS(1),
        [anon_sym_typedef] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_name] = ACTIONS(1),
        [anon_sym_const] = ACTIONS(1),
        [anon_sym_XCDR] = ACTIONS(1),
        [anon_sym_XCDR2] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(431),
        [sym_preproc_call] = STATE(76),
        [sym_except_dcl] = STATE(429),
        [sym_interface_dcl] = STATE(429),
        [sym_interface_forward_dcl] = STATE(427),
        [sym_interface_def] = STATE(427),
        [sym_interface_header] = STATE(418),
        [sym_interface_anno] = STATE(155),
        [sym_bitset_dcl] = STATE(429),
        [sym_bitmask_dcl] = STATE(429),
        [sym_annotation_dcl] = STATE(429),
        [sym__definition] = STATE(83),
        [sym_native_dcl] = STATE(429),
        [sym_module_dcl] = STATE(429),
        [sym_struct_forward_dcl] = STATE(429),
        [sym_struct_def] = STATE(429),
        [sym_enum_dcl] = STATE(429),
        [sym_enum_anno] = STATE(411),
        [sym_union_forward_dcl] = STATE(429),
        [sym_union_def] = STATE(429),
        [sym_typedef_dcl] = STATE(429),
        [sym_predefine] = STATE(81),
        [sym_dds_request_topic] = STATE(158),
        [sym_dds_reply_topic] = STATE(158),
        [sym_const_dcl] = STATE(429),
        [sym_data_representation] = STATE(212),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(12),
        [aux_sym_specification_repeat2] = STATE(23),
        [aux_sym_interface_def_repeat1] = STATE(123),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [ts_builtin_sym_end] = ACTIONS(5),
        [sym_preproc_directive] = ACTIONS(7),
        [anon_sym_exception] = ACTIONS(9),
        [anon_sym_interface] = ACTIONS(11),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_bitset] = ACTIONS(15),
        [anon_sym_bitmask] = ACTIONS(17),
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_native] = ACTIONS(21),
        [anon_sym_module] = ACTIONS(23),
        [anon_sym_struct] = ACTIONS(25),
        [anon_sym_enum] = ACTIONS(27),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(31),
        [anon_sym_typedef] = ACTIONS(33),
        [anon_sym_POUNDdefine] = ACTIONS(35),
        [sym_dds_service] = ACTIONS(37),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(39),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(41),
        [anon_sym_const] = ACTIONS(43),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [2] = {
        [sym_unsigned_int] = STATE(169),
        [sym_integer_type] = STATE(231),
        [sym_signed_int] = STATE(169),
        [sym_floating_pt_type] = STATE(231),
        [sym_char_type] = STATE(231),
        [sym_scoped_name] = STATE(336),
        [sym_string_type] = STATE(201),
        [sym_type_spec] = STATE(404),
        [sym_simple_type_spec] = STATE(236),
        [sym_base_type_spec] = STATE(202),
        [sym_any_type] = STATE(231),
        [sym_fixed_pt_type] = STATE(201),
        [sym_template_type_spec] = STATE(236),
        [sym_sequence_type] = STATE(201),
        [sym_map_type] = STATE(201),
        [sym_except_dcl] = STATE(408),
        [sym_interface_body] = STATE(463),
        [sym_export] = STATE(32),
        [sym_op_dcl] = STATE(408),
        [sym_op_type_spec] = STATE(414),
        [sym_attr_dcl] = STATE(408),
        [sym_readonly_attr_spec] = STATE(415),
        [sym_attr_spec] = STATE(415),
        [sym_bitset_dcl] = STATE(408),
        [sym_bitmask_dcl] = STATE(408),
        [sym_annotation_dcl] = STATE(408),
        [sym_native_dcl] = STATE(408),
        [sym_struct_forward_dcl] = STATE(408),
        [sym_struct_def] = STATE(408),
        [sym_enum_dcl] = STATE(408),
        [sym_enum_anno] = STATE(411),
        [sym_union_forward_dcl] = STATE(408),
        [sym_union_def] = STATE(408),
        [sym_typedef_dcl] = STATE(408),
        [sym_const_dcl] = STATE(408),
        [sym_data_representation] = STATE(212),
        [sym_comment] = STATE(2),
        [aux_sym_interface_body_repeat1] = STATE(6),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [sym_signed_short_int] = ACTIONS(49),
        [sym_signed_long_int] = ACTIONS(49),
        [sym_signed_longlong_int] = ACTIONS(51),
        [sym_boolean_type] = ACTIONS(53),
        [anon_sym_fixed] = ACTIONS(55),
        [sym_octet_type] = ACTIONS(53),
        [sym_unsigned_short_int] = ACTIONS(57),
        [sym_unsigned_long_int] = ACTIONS(59),
        [sym_unsigned_longlong_int] = ACTIONS(57),
        [anon_sym_float] = ACTIONS(61),
        [anon_sym_double] = ACTIONS(61),
        [anon_sym_longdouble] = ACTIONS(63),
        [anon_sym_char] = ACTIONS(65),
        [anon_sym_wchar] = ACTIONS(65),
        [anon_sym_COLON_COLON] = ACTIONS(67),
        [anon_sym_string] = ACTIONS(69),
        [anon_sym_wstring] = ACTIONS(69),
        [anon_sym_any] = ACTIONS(71),
        [anon_sym_sequence] = ACTIONS(73),
        [anon_sym_map] = ACTIONS(75),
        [anon_sym_exception] = ACTIONS(77),
        [anon_sym_RBRACE] = ACTIONS(79),
        [anon_sym_void] = ACTIONS(81),
        [anon_sym_readonly] = ACTIONS(83),
        [anon_sym_attribute] = ACTIONS(85),
        [anon_sym_bitset] = ACTIONS(87),
        [anon_sym_bitmask] = ACTIONS(89),
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_native] = ACTIONS(91),
        [anon_sym_struct] = ACTIONS(93),
        [anon_sym_enum] = ACTIONS(95),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(97),
        [anon_sym_typedef] = ACTIONS(99),
        [anon_sym_const] = ACTIONS(101),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(103),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [3] = {
        [sym_unsigned_int] = STATE(169),
        [sym_integer_type] = STATE(231),
        [sym_signed_int] = STATE(169),
        [sym_floating_pt_type] = STATE(231),
        [sym_char_type] = STATE(231),
        [sym_scoped_name] = STATE(336),
        [sym_string_type] = STATE(201),
        [sym_type_spec] = STATE(404),
        [sym_simple_type_spec] = STATE(236),
        [sym_base_type_spec] = STATE(202),
        [sym_any_type] = STATE(231),
        [sym_fixed_pt_type] = STATE(201),
        [sym_template_type_spec] = STATE(236),
        [sym_sequence_type] = STATE(201),
        [sym_map_type] = STATE(201),
        [sym_except_dcl] = STATE(408),
        [sym_interface_body] = STATE(410),
        [sym_export] = STATE(32),
        [sym_op_dcl] = STATE(408),
        [sym_op_type_spec] = STATE(414),
        [sym_attr_dcl] = STATE(408),
        [sym_readonly_attr_spec] = STATE(415),
        [sym_attr_spec] = STATE(415),
        [sym_bitset_dcl] = STATE(408),
        [sym_bitmask_dcl] = STATE(408),
        [sym_annotation_dcl] = STATE(408),
        [sym_native_dcl] = STATE(408),
        [sym_struct_forward_dcl] = STATE(408),
        [sym_struct_def] = STATE(408),
        [sym_enum_dcl] = STATE(408),
        [sym_enum_anno] = STATE(411),
        [sym_union_forward_dcl] = STATE(408),
        [sym_union_def] = STATE(408),
        [sym_typedef_dcl] = STATE(408),
        [sym_const_dcl] = STATE(408),
        [sym_data_representation] = STATE(212),
        [sym_comment] = STATE(3),
        [aux_sym_interface_body_repeat1] = STATE(6),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [sym_signed_short_int] = ACTIONS(49),
        [sym_signed_long_int] = ACTIONS(49),
        [sym_signed_longlong_int] = ACTIONS(51),
        [sym_boolean_type] = ACTIONS(53),
        [anon_sym_fixed] = ACTIONS(55),
        [sym_octet_type] = ACTIONS(53),
        [sym_unsigned_short_int] = ACTIONS(57),
        [sym_unsigned_long_int] = ACTIONS(59),
        [sym_unsigned_longlong_int] = ACTIONS(57),
        [anon_sym_float] = ACTIONS(61),
        [anon_sym_double] = ACTIONS(61),
        [anon_sym_longdouble] = ACTIONS(63),
        [anon_sym_char] = ACTIONS(65),
        [anon_sym_wchar] = ACTIONS(65),
        [anon_sym_COLON_COLON] = ACTIONS(67),
        [anon_sym_string] = ACTIONS(69),
        [anon_sym_wstring] = ACTIONS(69),
        [anon_sym_any] = ACTIONS(71),
        [anon_sym_sequence] = ACTIONS(73),
        [anon_sym_map] = ACTIONS(75),
        [anon_sym_exception] = ACTIONS(77),
        [anon_sym_RBRACE] = ACTIONS(105),
        [anon_sym_void] = ACTIONS(81),
        [anon_sym_readonly] = ACTIONS(83),
        [anon_sym_attribute] = ACTIONS(85),
        [anon_sym_bitset] = ACTIONS(87),
        [anon_sym_bitmask] = ACTIONS(89),
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_native] = ACTIONS(91),
        [anon_sym_struct] = ACTIONS(93),
        [anon_sym_enum] = ACTIONS(95),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(97),
        [anon_sym_typedef] = ACTIONS(99),
        [anon_sym_const] = ACTIONS(101),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(103),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [4] = {
        [sym_unsigned_int] = STATE(169),
        [sym_integer_type] = STATE(231),
        [sym_signed_int] = STATE(169),
        [sym_floating_pt_type] = STATE(231),
        [sym_char_type] = STATE(231),
        [sym_scoped_name] = STATE(336),
        [sym_string_type] = STATE(201),
        [sym_type_spec] = STATE(404),
        [sym_simple_type_spec] = STATE(236),
        [sym_base_type_spec] = STATE(202),
        [sym_any_type] = STATE(231),
        [sym_fixed_pt_type] = STATE(201),
        [sym_template_type_spec] = STATE(236),
        [sym_sequence_type] = STATE(201),
        [sym_map_type] = STATE(201),
        [sym_except_dcl] = STATE(408),
        [sym_interface_body] = STATE(368),
        [sym_export] = STATE(32),
        [sym_op_dcl] = STATE(408),
        [sym_op_type_spec] = STATE(414),
        [sym_attr_dcl] = STATE(408),
        [sym_readonly_attr_spec] = STATE(415),
        [sym_attr_spec] = STATE(415),
        [sym_bitset_dcl] = STATE(408),
        [sym_bitmask_dcl] = STATE(408),
        [sym_annotation_dcl] = STATE(408),
        [sym_native_dcl] = STATE(408),
        [sym_struct_forward_dcl] = STATE(408),
        [sym_struct_def] = STATE(408),
        [sym_enum_dcl] = STATE(408),
        [sym_enum_anno] = STATE(411),
        [sym_union_forward_dcl] = STATE(408),
        [sym_union_def] = STATE(408),
        [sym_typedef_dcl] = STATE(408),
        [sym_const_dcl] = STATE(408),
        [sym_data_representation] = STATE(212),
        [sym_comment] = STATE(4),
        [aux_sym_interface_body_repeat1] = STATE(6),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [sym_signed_short_int] = ACTIONS(49),
        [sym_signed_long_int] = ACTIONS(49),
        [sym_signed_longlong_int] = ACTIONS(51),
        [sym_boolean_type] = ACTIONS(53),
        [anon_sym_fixed] = ACTIONS(55),
        [sym_octet_type] = ACTIONS(53),
        [sym_unsigned_short_int] = ACTIONS(57),
        [sym_unsigned_long_int] = ACTIONS(59),
        [sym_unsigned_longlong_int] = ACTIONS(57),
        [anon_sym_float] = ACTIONS(61),
        [anon_sym_double] = ACTIONS(61),
        [anon_sym_longdouble] = ACTIONS(63),
        [anon_sym_char] = ACTIONS(65),
        [anon_sym_wchar] = ACTIONS(65),
        [anon_sym_COLON_COLON] = ACTIONS(67),
        [anon_sym_string] = ACTIONS(69),
        [anon_sym_wstring] = ACTIONS(69),
        [anon_sym_any] = ACTIONS(71),
        [anon_sym_sequence] = ACTIONS(73),
        [anon_sym_map] = ACTIONS(75),
        [anon_sym_exception] = ACTIONS(77),
        [anon_sym_RBRACE] = ACTIONS(107),
        [anon_sym_void] = ACTIONS(81),
        [anon_sym_readonly] = ACTIONS(83),
        [anon_sym_attribute] = ACTIONS(85),
        [anon_sym_bitset] = ACTIONS(87),
        [anon_sym_bitmask] = ACTIONS(89),
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_native] = ACTIONS(91),
        [anon_sym_struct] = ACTIONS(93),
        [anon_sym_enum] = ACTIONS(95),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(97),
        [anon_sym_typedef] = ACTIONS(99),
        [anon_sym_const] = ACTIONS(101),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(103),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [5] = {
        [sym_unsigned_int] = STATE(169),
        [sym_integer_type] = STATE(231),
        [sym_signed_int] = STATE(169),
        [sym_floating_pt_type] = STATE(231),
        [sym_char_type] = STATE(231),
        [sym_scoped_name] = STATE(336),
        [sym_string_type] = STATE(201),
        [sym_type_spec] = STATE(404),
        [sym_simple_type_spec] = STATE(236),
        [sym_base_type_spec] = STATE(202),
        [sym_any_type] = STATE(231),
        [sym_fixed_pt_type] = STATE(201),
        [sym_template_type_spec] = STATE(236),
        [sym_sequence_type] = STATE(201),
        [sym_map_type] = STATE(201),
        [sym_except_dcl] = STATE(408),
        [sym_export] = STATE(32),
        [sym_op_dcl] = STATE(408),
        [sym_op_type_spec] = STATE(414),
        [sym_attr_dcl] = STATE(408),
        [sym_readonly_attr_spec] = STATE(415),
        [sym_attr_spec] = STATE(415),
        [sym_bitset_dcl] = STATE(408),
        [sym_bitmask_dcl] = STATE(408),
        [sym_annotation_dcl] = STATE(408),
        [sym_native_dcl] = STATE(408),
        [sym_struct_forward_dcl] = STATE(408),
        [sym_struct_def] = STATE(408),
        [sym_enum_dcl] = STATE(408),
        [sym_enum_anno] = STATE(411),
        [sym_union_forward_dcl] = STATE(408),
        [sym_union_def] = STATE(408),
        [sym_typedef_dcl] = STATE(408),
        [sym_const_dcl] = STATE(408),
        [sym_data_representation] = STATE(212),
        [sym_comment] = STATE(5),
        [aux_sym_interface_body_repeat1] = STATE(5),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [sym_signed_short_int] = ACTIONS(109),
        [sym_signed_long_int] = ACTIONS(109),
        [sym_signed_longlong_int] = ACTIONS(112),
        [sym_boolean_type] = ACTIONS(115),
        [anon_sym_fixed] = ACTIONS(118),
        [sym_octet_type] = ACTIONS(115),
        [sym_unsigned_short_int] = ACTIONS(121),
        [sym_unsigned_long_int] = ACTIONS(124),
        [sym_unsigned_longlong_int] = ACTIONS(121),
        [anon_sym_float] = ACTIONS(127),
        [anon_sym_double] = ACTIONS(127),
        [anon_sym_longdouble] = ACTIONS(130),
        [anon_sym_char] = ACTIONS(133),
        [anon_sym_wchar] = ACTIONS(133),
        [anon_sym_COLON_COLON] = ACTIONS(136),
        [anon_sym_string] = ACTIONS(139),
        [anon_sym_wstring] = ACTIONS(139),
        [anon_sym_any] = ACTIONS(142),
        [anon_sym_sequence] = ACTIONS(145),
        [anon_sym_map] = ACTIONS(148),
        [anon_sym_exception] = ACTIONS(151),
        [anon_sym_RBRACE] = ACTIONS(154),
        [anon_sym_void] = ACTIONS(156),
        [anon_sym_readonly] = ACTIONS(159),
        [anon_sym_attribute] = ACTIONS(162),
        [anon_sym_bitset] = ACTIONS(165),
        [anon_sym_bitmask] = ACTIONS(168),
        [anon_sym_ATannotation] = ACTIONS(171),
        [anon_sym_native] = ACTIONS(174),
        [anon_sym_struct] = ACTIONS(177),
        [anon_sym_enum] = ACTIONS(180),
        [anon_sym_ATignore_literal_names] = ACTIONS(183),
        [anon_sym_union] = ACTIONS(186),
        [anon_sym_typedef] = ACTIONS(189),
        [anon_sym_const] = ACTIONS(192),
        [sym_final] = ACTIONS(195),
        [anon_sym_ATdata_representation] = ACTIONS(198),
        [sym_identifier] = ACTIONS(201),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [6] = {
        [sym_unsigned_int] = STATE(169),
        [sym_integer_type] = STATE(231),
        [sym_signed_int] = STATE(169),
        [sym_floating_pt_type] = STATE(231),
        [sym_char_type] = STATE(231),
        [sym_scoped_name] = STATE(336),
        [sym_string_type] = STATE(201),
        [sym_type_spec] = STATE(404),
        [sym_simple_type_spec] = STATE(236),
        [sym_base_type_spec] = STATE(202),
        [sym_any_type] = STATE(231),
        [sym_fixed_pt_type] = STATE(201),
        [sym_template_type_spec] = STATE(236),
        [sym_sequence_type] = STATE(201),
        [sym_map_type] = STATE(201),
        [sym_except_dcl] = STATE(408),
        [sym_export] = STATE(32),
        [sym_op_dcl] = STATE(408),
        [sym_op_type_spec] = STATE(414),
        [sym_attr_dcl] = STATE(408),
        [sym_readonly_attr_spec] = STATE(415),
        [sym_attr_spec] = STATE(415),
        [sym_bitset_dcl] = STATE(408),
        [sym_bitmask_dcl] = STATE(408),
        [sym_annotation_dcl] = STATE(408),
        [sym_native_dcl] = STATE(408),
        [sym_struct_forward_dcl] = STATE(408),
        [sym_struct_def] = STATE(408),
        [sym_enum_dcl] = STATE(408),
        [sym_enum_anno] = STATE(411),
        [sym_union_forward_dcl] = STATE(408),
        [sym_union_def] = STATE(408),
        [sym_typedef_dcl] = STATE(408),
        [sym_const_dcl] = STATE(408),
        [sym_data_representation] = STATE(212),
        [sym_comment] = STATE(6),
        [aux_sym_interface_body_repeat1] = STATE(5),
        [aux_sym_struct_def_repeat1] = STATE(156),
        [sym_signed_short_int] = ACTIONS(49),
        [sym_signed_long_int] = ACTIONS(49),
        [sym_signed_longlong_int] = ACTIONS(51),
        [sym_boolean_type] = ACTIONS(53),
        [anon_sym_fixed] = ACTIONS(55),
        [sym_octet_type] = ACTIONS(53),
        [sym_unsigned_short_int] = ACTIONS(57),
        [sym_unsigned_long_int] = ACTIONS(59),
        [sym_unsigned_longlong_int] = ACTIONS(57),
        [anon_sym_float] = ACTIONS(61),
        [anon_sym_double] = ACTIONS(61),
        [anon_sym_longdouble] = ACTIONS(63),
        [anon_sym_char] = ACTIONS(65),
        [anon_sym_wchar] = ACTIONS(65),
        [anon_sym_COLON_COLON] = ACTIONS(67),
        [anon_sym_string] = ACTIONS(69),
        [anon_sym_wstring] = ACTIONS(69),
        [anon_sym_any] = ACTIONS(71),
        [anon_sym_sequence] = ACTIONS(73),
        [anon_sym_map] = ACTIONS(75),
        [anon_sym_exception] = ACTIONS(77),
        [anon_sym_RBRACE] = ACTIONS(204),
        [anon_sym_void] = ACTIONS(81),
        [anon_sym_readonly] = ACTIONS(83),
        [anon_sym_attribute] = ACTIONS(85),
        [anon_sym_bitset] = ACTIONS(87),
        [anon_sym_bitmask] = ACTIONS(89),
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_native] = ACTIONS(91),
        [anon_sym_struct] = ACTIONS(93),
        [anon_sym_enum] = ACTIONS(95),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(97),
        [anon_sym_typedef] = ACTIONS(99),
        [anon_sym_const] = ACTIONS(101),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(103),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 36,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(87),
    1,
    anon_sym_bitset,
    ACTIONS(89),
    1,
    anon_sym_bitmask,
    ACTIONS(93),
    1,
    anon_sym_struct,
    ACTIONS(95),
    1,
    anon_sym_enum,
    ACTIONS(97),
    1,
    anon_sym_union,
    ACTIONS(103),
    1,
    sym_identifier,
    STATE(7),
    1,
    sym_comment,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(212),
    1,
    sym_data_representation,
    STATE(336),
    1,
    sym_scoped_name,
    STATE(403),
    1,
    sym_type_declarator,
    STATE(411),
    1,
    sym_enum_anno,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(160),
    10,
    sym_simple_type_spec,
    sym_template_type_spec,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    [131] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(206),
    1,
    anon_sym_RBRACE,
    ACTIONS(210),
    1,
    anon_sym_AThashid,
    ACTIONS(212),
    1,
    anon_sym_ATtry_construct,
    STATE(8),
    1,
    sym_comment,
    STATE(15),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(25),
    1,
    aux_sym_member_repeat1,
    STATE(39),
    1,
    sym_member,
    STATE(45),
    1,
    sym_struct_modifier,
    STATE(151),
    1,
    sym_type_spec,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(208),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [251] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(210),
    1,
    anon_sym_AThashid,
    ACTIONS(212),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(214),
    1,
    anon_sym_RBRACE,
    STATE(9),
    1,
    sym_comment,
    STATE(19),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(25),
    1,
    aux_sym_member_repeat1,
    STATE(39),
    1,
    sym_member,
    STATE(45),
    1,
    sym_struct_modifier,
    STATE(151),
    1,
    sym_type_spec,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(208),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [371] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(210),
    1,
    anon_sym_AThashid,
    ACTIONS(212),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(216),
    1,
    anon_sym_RBRACE,
    STATE(9),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(10),
    1,
    sym_comment,
    STATE(25),
    1,
    aux_sym_member_repeat1,
    STATE(39),
    1,
    sym_member,
    STATE(45),
    1,
    sym_struct_modifier,
    STATE(151),
    1,
    sym_type_spec,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(208),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [491] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(210),
    1,
    anon_sym_AThashid,
    ACTIONS(212),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(218),
    1,
    anon_sym_RBRACE,
    STATE(11),
    1,
    sym_comment,
    STATE(19),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(25),
    1,
    aux_sym_member_repeat1,
    STATE(39),
    1,
    sym_member,
    STATE(45),
    1,
    sym_struct_modifier,
    STATE(151),
    1,
    sym_type_spec,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(208),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [611] = 38,
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
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_native,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(35),
    1,
    anon_sym_POUNDdefine,
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
    ts_builtin_sym_end,
    STATE(12),
    1,
    sym_comment,
    STATE(21),
    1,
    aux_sym_specification_repeat2,
    STATE(65),
    1,
    aux_sym_specification_repeat1,
    STATE(76),
    1,
    sym_preproc_call,
    STATE(81),
    1,
    sym_predefine,
    STATE(83),
    1,
    sym__definition,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(212),
    1,
    sym_data_representation,
    STATE(411),
    1,
    sym_enum_anno,
    STATE(418),
    1,
    sym_interface_header,
    STATE(158),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(427),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(429),
    14,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [741] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(210),
    1,
    anon_sym_AThashid,
    ACTIONS(212),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(222),
    1,
    anon_sym_RBRACE,
    STATE(13),
    1,
    sym_comment,
    STATE(19),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(25),
    1,
    aux_sym_member_repeat1,
    STATE(39),
    1,
    sym_member,
    STATE(45),
    1,
    sym_struct_modifier,
    STATE(151),
    1,
    sym_type_spec,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(208),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [861] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(210),
    1,
    anon_sym_AThashid,
    ACTIONS(212),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(224),
    1,
    anon_sym_RBRACE,
    STATE(13),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    sym_comment,
    STATE(25),
    1,
    aux_sym_member_repeat1,
    STATE(39),
    1,
    sym_member,
    STATE(45),
    1,
    sym_struct_modifier,
    STATE(151),
    1,
    sym_type_spec,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(208),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [981] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(210),
    1,
    anon_sym_AThashid,
    ACTIONS(212),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(226),
    1,
    anon_sym_RBRACE,
    STATE(15),
    1,
    sym_comment,
    STATE(19),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(25),
    1,
    aux_sym_member_repeat1,
    STATE(39),
    1,
    sym_member,
    STATE(45),
    1,
    sym_struct_modifier,
    STATE(151),
    1,
    sym_type_spec,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(208),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1101] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(210),
    1,
    anon_sym_AThashid,
    ACTIONS(212),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(228),
    1,
    anon_sym_RBRACE,
    STATE(16),
    1,
    sym_comment,
    STATE(17),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(25),
    1,
    aux_sym_member_repeat1,
    STATE(39),
    1,
    sym_member,
    STATE(45),
    1,
    sym_struct_modifier,
    STATE(151),
    1,
    sym_type_spec,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(208),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1221] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(210),
    1,
    anon_sym_AThashid,
    ACTIONS(212),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(230),
    1,
    anon_sym_RBRACE,
    STATE(17),
    1,
    sym_comment,
    STATE(19),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(25),
    1,
    aux_sym_member_repeat1,
    STATE(39),
    1,
    sym_member,
    STATE(45),
    1,
    sym_struct_modifier,
    STATE(151),
    1,
    sym_type_spec,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(208),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1341] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(210),
    1,
    anon_sym_AThashid,
    ACTIONS(212),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(230),
    1,
    anon_sym_RBRACE,
    STATE(11),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(18),
    1,
    sym_comment,
    STATE(25),
    1,
    aux_sym_member_repeat1,
    STATE(39),
    1,
    sym_member,
    STATE(45),
    1,
    sym_struct_modifier,
    STATE(151),
    1,
    sym_type_spec,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(208),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1461] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(235),
    1,
    sym_signed_longlong_int,
    ACTIONS(241),
    1,
    anon_sym_fixed,
    ACTIONS(247),
    1,
    sym_unsigned_long_int,
    ACTIONS(253),
    1,
    anon_sym_longdouble,
    ACTIONS(259),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(265),
    1,
    anon_sym_any,
    ACTIONS(268),
    1,
    anon_sym_sequence,
    ACTIONS(271),
    1,
    anon_sym_map,
    ACTIONS(274),
    1,
    anon_sym_RBRACE,
    ACTIONS(279),
    1,
    anon_sym_AThashid,
    ACTIONS(282),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(285),
    1,
    sym_identifier,
    STATE(25),
    1,
    aux_sym_member_repeat1,
    STATE(39),
    1,
    sym_member,
    STATE(45),
    1,
    sym_struct_modifier,
    STATE(151),
    1,
    sym_type_spec,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(232),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(238),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(244),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(250),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(256),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(262),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(19),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(276),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1579] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(290),
    1,
    anon_sym_exception,
    ACTIONS(293),
    1,
    anon_sym_interface,
    ACTIONS(296),
    1,
    anon_sym_local,
    ACTIONS(299),
    1,
    anon_sym_bitset,
    ACTIONS(302),
    1,
    anon_sym_bitmask,
    ACTIONS(305),
    1,
    anon_sym_ATannotation,
    ACTIONS(308),
    1,
    anon_sym_native,
    ACTIONS(311),
    1,
    anon_sym_module,
    ACTIONS(314),
    1,
    anon_sym_struct,
    ACTIONS(317),
    1,
    anon_sym_enum,
    ACTIONS(320),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(323),
    1,
    anon_sym_union,
    ACTIONS(326),
    1,
    anon_sym_typedef,
    ACTIONS(329),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(332),
    1,
    sym_dds_service,
    ACTIONS(335),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(338),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(341),
    1,
    anon_sym_const,
    ACTIONS(344),
    1,
    sym_final,
    ACTIONS(347),
    1,
    anon_sym_ATdata_representation,
    STATE(81),
    1,
    sym_predefine,
    STATE(83),
    1,
    sym__definition,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(212),
    1,
    sym_data_representation,
    STATE(411),
    1,
    sym_enum_anno,
    STATE(418),
    1,
    sym_interface_header,
    ACTIONS(288),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(20),
    2,
    sym_comment,
    aux_sym_specification_repeat2,
    STATE(158),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(427),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(429),
    14,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [1699] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_native,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_typedef,
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
    ACTIONS(350),
    1,
    ts_builtin_sym_end,
    ACTIONS(352),
    1,
    anon_sym_POUNDdefine,
    STATE(20),
    1,
    aux_sym_specification_repeat2,
    STATE(21),
    1,
    sym_comment,
    STATE(81),
    1,
    sym_predefine,
    STATE(83),
    1,
    sym__definition,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(212),
    1,
    sym_data_representation,
    STATE(411),
    1,
    sym_enum_anno,
    STATE(418),
    1,
    sym_interface_header,
    STATE(158),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(427),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(429),
    14,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [1820] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_native,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_typedef,
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
    ACTIONS(352),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(354),
    1,
    anon_sym_RBRACE,
    STATE(22),
    1,
    sym_comment,
    STATE(24),
    1,
    aux_sym_specification_repeat2,
    STATE(81),
    1,
    sym_predefine,
    STATE(83),
    1,
    sym__definition,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(212),
    1,
    sym_data_representation,
    STATE(411),
    1,
    sym_enum_anno,
    STATE(418),
    1,
    sym_interface_header,
    STATE(158),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(427),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(429),
    14,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [1941] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_native,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_typedef,
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
    ts_builtin_sym_end,
    ACTIONS(352),
    1,
    anon_sym_POUNDdefine,
    STATE(20),
    1,
    aux_sym_specification_repeat2,
    STATE(23),
    1,
    sym_comment,
    STATE(81),
    1,
    sym_predefine,
    STATE(83),
    1,
    sym__definition,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(212),
    1,
    sym_data_representation,
    STATE(411),
    1,
    sym_enum_anno,
    STATE(418),
    1,
    sym_interface_header,
    STATE(158),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(427),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(429),
    14,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [2062] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_native,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_typedef,
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
    ACTIONS(352),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(356),
    1,
    anon_sym_RBRACE,
    STATE(20),
    1,
    aux_sym_specification_repeat2,
    STATE(24),
    1,
    sym_comment,
    STATE(81),
    1,
    sym_predefine,
    STATE(83),
    1,
    sym__definition,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(212),
    1,
    sym_data_representation,
    STATE(411),
    1,
    sym_enum_anno,
    STATE(418),
    1,
    sym_interface_header,
    STATE(158),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(427),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(429),
    14,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [2183] = 30,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(210),
    1,
    anon_sym_AThashid,
    ACTIONS(212),
    1,
    anon_sym_ATtry_construct,
    STATE(25),
    1,
    sym_comment,
    STATE(38),
    1,
    aux_sym_member_repeat1,
    STATE(45),
    1,
    sym_struct_modifier,
    STATE(159),
    1,
    sym_type_spec,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(208),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [2294] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(358),
    1,
    anon_sym_RBRACE,
    STATE(26),
    1,
    sym_comment,
    STATE(185),
    1,
    sym_type_spec,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    STATE(409),
    1,
    sym_element_spec,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(360),
    2,
    anon_sym_default,
    anon_sym_case,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2391] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(364),
    1,
    anon_sym_fixed,
    ACTIONS(366),
    1,
    anon_sym_any,
    ACTIONS(368),
    1,
    anon_sym_RBRACE,
    ACTIONS(370),
    1,
    anon_sym_enum,
    STATE(27),
    1,
    sym_comment,
    STATE(29),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(72),
    1,
    sym_annotation_member,
    STATE(330),
    1,
    sym_enum_dcl,
    STATE(331),
    1,
    sym_annotation_member_type,
    STATE(412),
    1,
    sym_enum_anno,
    STATE(456),
    1,
    sym_annotation_body,
    STATE(457),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(362),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(455),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(349),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2492] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(375),
    1,
    sym_signed_longlong_int,
    ACTIONS(381),
    1,
    anon_sym_fixed,
    ACTIONS(387),
    1,
    sym_unsigned_long_int,
    ACTIONS(393),
    1,
    anon_sym_longdouble,
    ACTIONS(399),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(405),
    1,
    anon_sym_any,
    ACTIONS(408),
    1,
    anon_sym_sequence,
    ACTIONS(411),
    1,
    anon_sym_RBRACE,
    ACTIONS(413),
    1,
    anon_sym_enum,
    ACTIONS(416),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(419),
    1,
    sym_identifier,
    STATE(72),
    1,
    sym_annotation_member,
    STATE(330),
    1,
    sym_enum_dcl,
    STATE(331),
    1,
    sym_annotation_member_type,
    STATE(412),
    1,
    sym_enum_anno,
    STATE(457),
    1,
    sym_scoped_name,
    ACTIONS(372),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(378),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(384),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(390),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(396),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(402),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(28),
    2,
    sym_comment,
    aux_sym_annotation_body_repeat1,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(455),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(349),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2588] = 28,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(364),
    1,
    anon_sym_fixed,
    ACTIONS(366),
    1,
    anon_sym_any,
    ACTIONS(370),
    1,
    anon_sym_enum,
    ACTIONS(422),
    1,
    anon_sym_RBRACE,
    STATE(28),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(29),
    1,
    sym_comment,
    STATE(72),
    1,
    sym_annotation_member,
    STATE(330),
    1,
    sym_enum_dcl,
    STATE(331),
    1,
    sym_annotation_member_type,
    STATE(412),
    1,
    sym_enum_anno,
    STATE(457),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(362),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(455),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(349),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2686] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(424),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(426),
    1,
    anon_sym_GT,
    ACTIONS(428),
    1,
    anon_sym_COMMA,
    ACTIONS(430),
    1,
    sym_identifier,
    STATE(30),
    1,
    sym_comment,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(213),
    1,
    sym_scoped_name,
    STATE(443),
    1,
    sym_type_spec,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2779] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(31),
    1,
    sym_comment,
    ACTIONS(434),
    10,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATannotation,
    anon_sym_ATignore_literal_names,
    sym_final,
    anon_sym_ATdata_representation,
    ACTIONS(432),
    28,
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_native,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_const,
    sym_identifier,
    [2828] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(32),
    1,
    sym_comment,
    ACTIONS(438),
    10,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATannotation,
    anon_sym_ATignore_literal_names,
    sym_final,
    anon_sym_ATdata_representation,
    ACTIONS(436),
    28,
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_native,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_const,
    sym_identifier,
    [2877] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    STATE(33),
    1,
    sym_comment,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(218),
    1,
    sym_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2964] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    STATE(34),
    1,
    sym_comment,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(300),
    1,
    sym_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [3051] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    STATE(35),
    1,
    sym_comment,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(247),
    1,
    sym_type_spec,
    STATE(336),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [3138] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(424),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(430),
    1,
    sym_identifier,
    STATE(36),
    1,
    sym_comment,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(213),
    1,
    sym_scoped_name,
    STATE(329),
    1,
    sym_type_spec,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [3225] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(71),
    1,
    anon_sym_any,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(75),
    1,
    anon_sym_map,
    ACTIONS(103),
    1,
    sym_identifier,
    STATE(37),
    1,
    sym_comment,
    STATE(202),
    1,
    sym_base_type_spec,
    STATE(328),
    1,
    sym_scoped_name,
    STATE(433),
    1,
    sym_type_spec,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(236),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(201),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(231),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [3312] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(447),
    1,
    anon_sym_AThashid,
    ACTIONS(450),
    1,
    anon_sym_ATtry_construct,
    STATE(45),
    1,
    sym_struct_modifier,
    STATE(38),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(44),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(442),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(444),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(440),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3366] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(39),
    1,
    sym_comment,
    ACTIONS(455),
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
    ACTIONS(453),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3407] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(40),
    1,
    sym_comment,
    ACTIONS(459),
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
    ACTIONS(457),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3448] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(41),
    1,
    sym_comment,
    ACTIONS(463),
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
    ACTIONS(461),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3489] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(42),
    1,
    sym_comment,
    ACTIONS(467),
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
    ACTIONS(465),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3530] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(43),
    1,
    sym_comment,
    ACTIONS(471),
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
    ACTIONS(469),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3571] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(44),
    1,
    sym_comment,
    ACTIONS(475),
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
    ACTIONS(473),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3611] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(45),
    1,
    sym_comment,
    ACTIONS(479),
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
    ACTIONS(477),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3651] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(46),
    1,
    sym_comment,
    ACTIONS(483),
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
    ACTIONS(481),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3691] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(364),
    1,
    anon_sym_fixed,
    STATE(47),
    1,
    sym_comment,
    STATE(356),
    1,
    sym_scoped_name,
    STATE(359),
    1,
    sym_const_type,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(362),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(349),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [3761] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(63),
    1,
    anon_sym_longdouble,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(73),
    1,
    anon_sym_sequence,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(364),
    1,
    anon_sym_fixed,
    STATE(48),
    1,
    sym_comment,
    STATE(356),
    1,
    sym_scoped_name,
    STATE(468),
    1,
    sym_const_type,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(61),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(69),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(362),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(349),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [3831] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(49),
    1,
    sym_comment,
    ACTIONS(487),
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
    ACTIONS(485),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [3871] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(50),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(131),
    1,
    sym_xor_expr,
    STATE(135),
    1,
    sym_or_expr,
    STATE(209),
    1,
    sym_const_expr,
    STATE(398),
    1,
    sym_positive_int_const,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3951] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(51),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(131),
    1,
    sym_xor_expr,
    STATE(135),
    1,
    sym_or_expr,
    STATE(209),
    1,
    sym_const_expr,
    STATE(444),
    1,
    sym_positive_int_const,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4031] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(52),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(131),
    1,
    sym_xor_expr,
    STATE(135),
    1,
    sym_or_expr,
    STATE(209),
    1,
    sym_const_expr,
    STATE(379),
    1,
    sym_positive_int_const,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4111] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(53),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(131),
    1,
    sym_xor_expr,
    STATE(135),
    1,
    sym_or_expr,
    STATE(209),
    1,
    sym_const_expr,
    STATE(338),
    1,
    sym_positive_int_const,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4191] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(54),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(131),
    1,
    sym_xor_expr,
    STATE(135),
    1,
    sym_or_expr,
    STATE(209),
    1,
    sym_const_expr,
    STATE(376),
    1,
    sym_positive_int_const,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4271] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(55),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(131),
    1,
    sym_xor_expr,
    STATE(135),
    1,
    sym_or_expr,
    STATE(209),
    1,
    sym_const_expr,
    STATE(301),
    1,
    sym_positive_int_const,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4351] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(56),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(131),
    1,
    sym_xor_expr,
    STATE(135),
    1,
    sym_or_expr,
    STATE(209),
    1,
    sym_const_expr,
    STATE(446),
    1,
    sym_positive_int_const,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4431] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(57),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(131),
    1,
    sym_xor_expr,
    STATE(135),
    1,
    sym_or_expr,
    STATE(407),
    1,
    sym_const_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4508] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    ACTIONS(505),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(507),
    1,
    sym_identifier,
    STATE(58),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(118),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(129),
    1,
    sym_add_expr,
    STATE(137),
    1,
    sym_shift_expr,
    STATE(175),
    1,
    sym_and_expr,
    STATE(237),
    1,
    sym_xor_expr,
    STATE(280),
    1,
    sym_const_expr,
    STATE(332),
    1,
    sym_or_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4585] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(59),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(131),
    1,
    sym_xor_expr,
    STATE(135),
    1,
    sym_or_expr,
    STATE(280),
    1,
    sym_const_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4662] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(60),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(131),
    1,
    sym_xor_expr,
    STATE(135),
    1,
    sym_or_expr,
    STATE(354),
    1,
    sym_const_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4739] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(61),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(131),
    1,
    sym_xor_expr,
    STATE(135),
    1,
    sym_or_expr,
    STATE(399),
    1,
    sym_const_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4816] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(62),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(131),
    1,
    sym_xor_expr,
    STATE(135),
    1,
    sym_or_expr,
    STATE(337),
    1,
    sym_const_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4893] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(63),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(131),
    1,
    sym_xor_expr,
    STATE(135),
    1,
    sym_or_expr,
    STATE(361),
    1,
    sym_const_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4970] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(64),
    1,
    sym_comment,
    ACTIONS(511),
    6,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    ACTIONS(509),
    18,
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_default,
    anon_sym_case,
    sym_identifier,
    [5005] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(515),
    1,
    sym_preproc_directive,
    ACTIONS(518),
    1,
    anon_sym_POUNDdefine,
    STATE(76),
    1,
    sym_preproc_call,
    STATE(65),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(513),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5044] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(66),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5115] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(67),
    1,
    sym_comment,
    ACTIONS(522),
    6,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    ACTIONS(520),
    18,
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_default,
    anon_sym_case,
    sym_identifier,
    [5150] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    ACTIONS(505),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(507),
    1,
    sym_identifier,
    STATE(68),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(118),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(129),
    1,
    sym_add_expr,
    STATE(137),
    1,
    sym_shift_expr,
    STATE(175),
    1,
    sym_and_expr,
    STATE(210),
    1,
    sym_xor_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5221] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(69),
    1,
    sym_comment,
    ACTIONS(526),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(524),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    sym_identifier,
    [5255] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    ACTIONS(505),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(507),
    1,
    sym_identifier,
    STATE(70),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(118),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(129),
    1,
    sym_add_expr,
    STATE(137),
    1,
    sym_shift_expr,
    STATE(184),
    1,
    sym_and_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5323] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(71),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5391] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(72),
    1,
    sym_comment,
    ACTIONS(530),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(528),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    sym_identifier,
    [5425] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(534),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(532),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    sym_identifier,
    [5459] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(538),
    7,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(536),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    sym_identifier,
    [5493] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    ACTIONS(505),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(507),
    1,
    sym_identifier,
    STATE(75),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(118),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(129),
    1,
    sym_add_expr,
    STATE(141),
    1,
    sym_shift_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5558] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(76),
    1,
    sym_comment,
    ACTIONS(542),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(540),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5591] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(544),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5622] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(78),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5687] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(548),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(546),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5720] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(550),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5751] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(552),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5782] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(556),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(554),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5815] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(558),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5846] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(84),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(112),
    1,
    sym_add_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5908] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    ACTIONS(505),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(507),
    1,
    sym_identifier,
    STATE(85),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(118),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(128),
    1,
    sym_add_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5970] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(562),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(560),
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
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_identifier,
    [6002] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(87),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6061] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    ACTIONS(505),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(507),
    1,
    sym_identifier,
    STATE(88),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(118),
    1,
    sym_scoped_name,
    STATE(119),
    1,
    sym_mult_expr,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6120] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    STATE(89),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(111),
    1,
    sym_unary_operator,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6176] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(491),
    1,
    anon_sym_LPAREN,
    ACTIONS(493),
    1,
    anon_sym_TILDE,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    ACTIONS(505),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(507),
    1,
    sym_identifier,
    STATE(90),
    1,
    sym_comment,
    STATE(102),
    1,
    sym_unary_expr,
    STATE(106),
    1,
    sym_literal,
    STATE(110),
    1,
    sym_unary_operator,
    STATE(118),
    1,
    sym_scoped_name,
    ACTIONS(489),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6232] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(564),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(566),
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
    anon_sym_LBRACE,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    sym_identifier,
    [6261] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(568),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(570),
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
    anon_sym_LBRACE,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    sym_identifier,
    [6290] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(572),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(574),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6318] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(576),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(578),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6346] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(580),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(582),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6374] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(588),
    1,
    sym_identifier,
    STATE(96),
    1,
    sym_comment,
    ACTIONS(584),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(586),
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
    [6404] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(590),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(592),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6432] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(98),
    1,
    sym_comment,
    ACTIONS(594),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(596),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6460] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    sym_signed_longlong_int,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    sym_boolean_type,
    STATE(99),
    1,
    sym_comment,
    STATE(274),
    1,
    sym_scoped_name,
    STATE(400),
    1,
    sym_switch_type_spec,
    ACTIONS(49),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(65),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(402),
    2,
    sym_integer_type,
    sym_char_type,
    [6508] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(100),
    1,
    sym_comment,
    ACTIONS(600),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(602),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6536] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(101),
    1,
    sym_comment,
    ACTIONS(604),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(606),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6564] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(102),
    1,
    sym_comment,
    ACTIONS(608),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(610),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6592] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(103),
    1,
    sym_comment,
    ACTIONS(612),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(614),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6620] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(616),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(618),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6648] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(588),
    1,
    sym_identifier,
    STATE(105),
    1,
    sym_comment,
    ACTIONS(572),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(574),
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
    [6678] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(106),
    1,
    sym_comment,
    ACTIONS(584),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(586),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6706] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(620),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(622),
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
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6734] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(624),
    1,
    anon_sym_GT,
    ACTIONS(630),
    1,
    anon_sym_SLASH,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(628),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(626),
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
    [6765] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(630),
    1,
    anon_sym_SLASH,
    ACTIONS(632),
    1,
    anon_sym_GT,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(628),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(634),
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
    [6796] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    ACTIONS(505),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(507),
    1,
    sym_identifier,
    ACTIONS(636),
    1,
    anon_sym_LPAREN,
    STATE(93),
    1,
    sym_literal,
    STATE(110),
    1,
    sym_comment,
    STATE(115),
    1,
    sym_scoped_name,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6839] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(103),
    1,
    sym_identifier,
    ACTIONS(495),
    1,
    anon_sym_L,
    ACTIONS(497),
    1,
    anon_sym_DQUOTE,
    ACTIONS(499),
    1,
    anon_sym_SQUOTE,
    ACTIONS(503),
    1,
    sym_number_literal,
    ACTIONS(636),
    1,
    anon_sym_LPAREN,
    STATE(93),
    1,
    sym_literal,
    STATE(105),
    1,
    sym_scoped_name,
    STATE(111),
    1,
    sym_comment,
    ACTIONS(501),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(97),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6882] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(638),
    1,
    anon_sym_GT,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(642),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(640),
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
    [6908] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(644),
    1,
    anon_sym_GT,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(642),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(646),
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
    [6934] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    sym_signed_long_int,
    ACTIONS(59),
    1,
    sym_unsigned_long_int,
    STATE(114),
    1,
    sym_comment,
    STATE(389),
    1,
    sym_integer_type,
    STATE(390),
    1,
    sym_destination_type,
    ACTIONS(51),
    2,
    sym_signed_short_int,
    sym_signed_longlong_int,
    ACTIONS(57),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(648),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(169),
    2,
    sym_unsigned_int,
    sym_signed_int,
    [6969] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(650),
    1,
    sym_identifier,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(572),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(574),
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
    [6994] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(564),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
    ACTIONS(566),
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
    [7017] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(117),
    1,
    sym_comment,
    ACTIONS(568),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
    ACTIONS(570),
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
    [7040] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(650),
    1,
    sym_identifier,
    STATE(118),
    1,
    sym_comment,
    ACTIONS(584),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(586),
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
    [7065] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(654),
    1,
    anon_sym_SLASH,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(652),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(634),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [7089] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(654),
    1,
    anon_sym_SLASH,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(652),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(626),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [7113] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(656),
    1,
    anon_sym_GT,
    STATE(121),
    1,
    sym_comment,
    ACTIONS(660),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(658),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7137] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(662),
    1,
    anon_sym_GT,
    STATE(122),
    1,
    sym_comment,
    ACTIONS(660),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(664),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7161] = 11,
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
    ACTIONS(666),
    1,
    anon_sym_interface,
    ACTIONS(668),
    1,
    anon_sym_local,
    STATE(123),
    1,
    sym_comment,
    STATE(126),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(388),
    1,
    sym_interface_header,
    STATE(158),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [7196] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(672),
    1,
    anon_sym_DOLLAR,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(670),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7216] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(672),
    1,
    anon_sym_DOLLAR,
    STATE(125),
    1,
    sym_comment,
    ACTIONS(674),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7236] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(678),
    1,
    sym_dds_service,
    ACTIONS(681),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(684),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(155),
    1,
    sym_interface_anno,
    ACTIONS(676),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(126),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(158),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [7264] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(127),
    1,
    sym_comment,
    ACTIONS(687),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(689),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [7284] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(691),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(640),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [7303] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(129),
    1,
    sym_comment,
    ACTIONS(691),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(646),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [7322] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(695),
    1,
    anon_sym_CARET,
    STATE(130),
    1,
    sym_comment,
    ACTIONS(693),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7341] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(695),
    1,
    anon_sym_CARET,
    STATE(131),
    1,
    sym_comment,
    ACTIONS(697),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7360] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(699),
    1,
    anon_sym_COMMA,
    ACTIONS(701),
    1,
    anon_sym_SEMI,
    ACTIONS(703),
    1,
    anon_sym_getraises,
    ACTIONS(705),
    1,
    anon_sym_setraises,
    STATE(132),
    1,
    sym_comment,
    STATE(192),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(195),
    1,
    sym_get_excep_expr,
    STATE(342),
    1,
    sym_attr_raises_expr,
    STATE(343),
    1,
    sym_set_excep_expr,
    [7391] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(133),
    1,
    sym_comment,
    ACTIONS(707),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [7407] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(709),
    1,
    anon_sym_RPAREN,
    ACTIONS(711),
    1,
    anon_sym_in,
    STATE(34),
    1,
    sym_param_attribute,
    STATE(134),
    1,
    sym_comment,
    STATE(203),
    1,
    sym_param_dcl,
    STATE(344),
    1,
    sym_parameter_dcls,
    ACTIONS(713),
    2,
    anon_sym_out,
    anon_sym_inout,
    [7433] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(717),
    1,
    anon_sym_PIPE,
    STATE(135),
    1,
    sym_comment,
    ACTIONS(715),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7451] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(721),
    1,
    anon_sym_LBRACK,
    STATE(166),
    1,
    sym_fixed_array_size,
    STATE(136),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(719),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [7470] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(137),
    1,
    sym_comment,
    ACTIONS(724),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(658),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [7487] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(726),
    1,
    anon_sym_RBRACE,
    ACTIONS(728),
    1,
    anon_sym_default,
    ACTIONS(731),
    1,
    anon_sym_case,
    STATE(26),
    1,
    sym_case_label,
    STATE(255),
    1,
    sym_case,
    STATE(138),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [7510] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(734),
    1,
    anon_sym_RBRACE,
    ACTIONS(736),
    1,
    anon_sym_default,
    ACTIONS(738),
    1,
    anon_sym_case,
    STATE(26),
    1,
    sym_case_label,
    STATE(139),
    1,
    sym_comment,
    STATE(140),
    1,
    aux_sym_union_def_repeat1,
    STATE(255),
    1,
    sym_case,
    [7535] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(736),
    1,
    anon_sym_default,
    ACTIONS(738),
    1,
    anon_sym_case,
    ACTIONS(740),
    1,
    anon_sym_RBRACE,
    STATE(26),
    1,
    sym_case_label,
    STATE(138),
    1,
    aux_sym_union_def_repeat1,
    STATE(140),
    1,
    sym_comment,
    STATE(255),
    1,
    sym_case,
    [7560] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(141),
    1,
    sym_comment,
    ACTIONS(724),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(664),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [7577] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(742),
    1,
    anon_sym_RBRACE,
    ACTIONS(744),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(746),
    1,
    sym_identifier,
    STATE(142),
    1,
    sym_comment,
    STATE(188),
    1,
    aux_sym_enumerator_repeat1,
    STATE(242),
    1,
    sym_enumerator,
    STATE(318),
    1,
    sym_enum_modifier,
    [7602] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(750),
    1,
    anon_sym_LBRACK,
    STATE(136),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(143),
    1,
    sym_comment,
    STATE(166),
    1,
    sym_fixed_array_size,
    ACTIONS(748),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [7623] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(744),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(746),
    1,
    sym_identifier,
    ACTIONS(752),
    1,
    anon_sym_RBRACE,
    STATE(144),
    1,
    sym_comment,
    STATE(188),
    1,
    aux_sym_enumerator_repeat1,
    STATE(197),
    1,
    sym_enumerator,
    STATE(318),
    1,
    sym_enum_modifier,
    [7648] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(750),
    1,
    anon_sym_LBRACK,
    STATE(143),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(145),
    1,
    sym_comment,
    STATE(166),
    1,
    sym_fixed_array_size,
    ACTIONS(707),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [7669] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(744),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(746),
    1,
    sym_identifier,
    ACTIONS(754),
    1,
    anon_sym_RBRACE,
    STATE(146),
    1,
    sym_comment,
    STATE(188),
    1,
    aux_sym_enumerator_repeat1,
    STATE(204),
    1,
    sym_enumerator,
    STATE(318),
    1,
    sym_enum_modifier,
    [7694] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(744),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(746),
    1,
    sym_identifier,
    ACTIONS(756),
    1,
    anon_sym_RBRACE,
    STATE(147),
    1,
    sym_comment,
    STATE(188),
    1,
    aux_sym_enumerator_repeat1,
    STATE(194),
    1,
    sym_enumerator,
    STATE(318),
    1,
    sym_enum_modifier,
    [7719] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(699),
    1,
    anon_sym_COMMA,
    ACTIONS(758),
    1,
    anon_sym_SEMI,
    ACTIONS(760),
    1,
    anon_sym_raises,
    STATE(148),
    1,
    sym_comment,
    STATE(248),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(372),
    1,
    sym_raises_expr,
    [7741] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(762),
    1,
    anon_sym_RBRACE,
    ACTIONS(764),
    1,
    anon_sym_bitfield,
    STATE(149),
    1,
    sym_comment,
    STATE(162),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(241),
    1,
    sym_bitfield_spec,
    STATE(290),
    1,
    sym_bitfield,
    [7763] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(150),
    1,
    sym_comment,
    ACTIONS(766),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7777] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(768),
    1,
    sym_identifier,
    STATE(151),
    1,
    sym_comment,
    STATE(187),
    1,
    sym_declarator,
    STATE(225),
    1,
    sym_declarators,
    STATE(224),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7797] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(711),
    1,
    anon_sym_in,
    STATE(34),
    1,
    sym_param_attribute,
    STATE(152),
    1,
    sym_comment,
    STATE(281),
    1,
    sym_param_dcl,
    ACTIONS(713),
    2,
    anon_sym_out,
    anon_sym_inout,
    [7817] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(744),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(746),
    1,
    sym_identifier,
    STATE(153),
    1,
    sym_comment,
    STATE(188),
    1,
    aux_sym_enumerator_repeat1,
    STATE(311),
    1,
    sym_enumerator,
    STATE(318),
    1,
    sym_enum_modifier,
    [7839] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(764),
    1,
    anon_sym_bitfield,
    ACTIONS(770),
    1,
    anon_sym_RBRACE,
    STATE(149),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(154),
    1,
    sym_comment,
    STATE(241),
    1,
    sym_bitfield_spec,
    STATE(290),
    1,
    sym_bitfield,
    [7861] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(155),
    1,
    sym_comment,
    ACTIONS(772),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7875] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(774),
    1,
    anon_sym_struct,
    STATE(156),
    1,
    sym_comment,
    STATE(161),
    1,
    aux_sym_struct_def_repeat1,
    STATE(212),
    1,
    sym_data_representation,
    [7897] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(764),
    1,
    anon_sym_bitfield,
    ACTIONS(776),
    1,
    anon_sym_RBRACE,
    STATE(157),
    1,
    sym_comment,
    STATE(162),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(241),
    1,
    sym_bitfield_spec,
    STATE(290),
    1,
    sym_bitfield,
    [7919] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(158),
    1,
    sym_comment,
    ACTIONS(778),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7933] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(768),
    1,
    sym_identifier,
    STATE(159),
    1,
    sym_comment,
    STATE(187),
    1,
    sym_declarator,
    STATE(238),
    1,
    sym_declarators,
    STATE(224),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7953] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(768),
    1,
    sym_identifier,
    STATE(160),
    1,
    sym_comment,
    STATE(263),
    1,
    sym_any_declarator,
    STATE(383),
    1,
    sym_any_declarators,
    STATE(267),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7973] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(780),
    1,
    anon_sym_struct,
    ACTIONS(782),
    1,
    sym_final,
    ACTIONS(785),
    1,
    anon_sym_ATdata_representation,
    STATE(212),
    1,
    sym_data_representation,
    STATE(161),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [7993] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(788),
    1,
    anon_sym_RBRACE,
    ACTIONS(790),
    1,
    anon_sym_bitfield,
    STATE(241),
    1,
    sym_bitfield_spec,
    STATE(290),
    1,
    sym_bitfield,
    STATE(162),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [8013] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(764),
    1,
    anon_sym_bitfield,
    ACTIONS(793),
    1,
    anon_sym_RBRACE,
    STATE(157),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(163),
    1,
    sym_comment,
    STATE(241),
    1,
    sym_bitfield_spec,
    STATE(290),
    1,
    sym_bitfield,
    [8035] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(164),
    1,
    sym_comment,
    ACTIONS(795),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [8049] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(797),
    1,
    anon_sym_COMMA,
    ACTIONS(800),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(165),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [8064] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(166),
    1,
    sym_comment,
    ACTIONS(802),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [8077] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(804),
    1,
    anon_sym_LT,
    STATE(167),
    1,
    sym_comment,
    ACTIONS(806),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8092] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(168),
    1,
    sym_comment,
    ACTIONS(808),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [8105] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(169),
    1,
    sym_comment,
    ACTIONS(810),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8118] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(170),
    1,
    sym_comment,
    ACTIONS(812),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8131] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(171),
    1,
    sym_comment,
    ACTIONS(814),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8144] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(172),
    1,
    sym_comment,
    ACTIONS(816),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8157] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(818),
    1,
    anon_sym_COMMA,
    STATE(165),
    1,
    aux_sym_declarators_repeat1,
    STATE(173),
    1,
    sym_comment,
    ACTIONS(820),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8174] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(768),
    1,
    sym_identifier,
    STATE(174),
    1,
    sym_comment,
    STATE(216),
    1,
    sym_declarator,
    STATE(224),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8191] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(822),
    1,
    anon_sym_DOLLAR,
    STATE(175),
    1,
    sym_comment,
    ACTIONS(674),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [8206] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(824),
    1,
    sym_identifier,
    STATE(176),
    1,
    sym_comment,
    STATE(200),
    1,
    sym_scoped_name,
    STATE(206),
    1,
    sym_interface_name,
    [8225] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(826),
    1,
    anon_sym_LBRACE,
    ACTIONS(828),
    1,
    anon_sym_COLON,
    STATE(177),
    1,
    sym_comment,
    ACTIONS(830),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8242] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(832),
    1,
    anon_sym_RPAREN,
    ACTIONS(834),
    1,
    anon_sym_XCDR,
    ACTIONS(836),
    1,
    anon_sym_XCDR2,
    STATE(178),
    1,
    sym_comment,
    STATE(189),
    1,
    aux_sym_data_representation_repeat1,
    [8261] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(838),
    1,
    anon_sym_LBRACE,
    ACTIONS(840),
    1,
    anon_sym_COLON,
    ACTIONS(842),
    1,
    anon_sym_SEMI,
    STATE(179),
    1,
    sym_comment,
    STATE(369),
    1,
    sym_interface_inheritance_spec,
    [8280] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(588),
    1,
    sym_identifier,
    ACTIONS(844),
    1,
    anon_sym_COMMA,
    ACTIONS(846),
    1,
    anon_sym_RPAREN,
    STATE(180),
    1,
    sym_comment,
    STATE(223),
    1,
    aux_sym_raises_expr_repeat1,
    [8299] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(848),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(851),
    1,
    sym_identifier,
    STATE(318),
    1,
    sym_enum_modifier,
    STATE(181),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [8316] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(768),
    1,
    sym_identifier,
    STATE(182),
    1,
    sym_comment,
    STATE(276),
    1,
    sym_any_declarator,
    STATE(267),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8333] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(588),
    1,
    sym_identifier,
    ACTIONS(844),
    1,
    anon_sym_COMMA,
    ACTIONS(853),
    1,
    anon_sym_RPAREN,
    STATE(183),
    1,
    sym_comment,
    STATE(220),
    1,
    aux_sym_raises_expr_repeat1,
    [8352] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(822),
    1,
    anon_sym_DOLLAR,
    STATE(184),
    1,
    sym_comment,
    ACTIONS(670),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [8367] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(768),
    1,
    sym_identifier,
    STATE(185),
    1,
    sym_comment,
    STATE(419),
    1,
    sym_declarator,
    STATE(224),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8384] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(824),
    1,
    sym_identifier,
    STATE(186),
    1,
    sym_comment,
    STATE(200),
    1,
    sym_scoped_name,
    STATE(296),
    1,
    sym_interface_name,
    [8403] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(818),
    1,
    anon_sym_COMMA,
    STATE(173),
    1,
    aux_sym_declarators_repeat1,
    STATE(187),
    1,
    sym_comment,
    ACTIONS(855),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8420] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(744),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(857),
    1,
    sym_identifier,
    STATE(181),
    1,
    aux_sym_enumerator_repeat1,
    STATE(188),
    1,
    sym_comment,
    STATE(318),
    1,
    sym_enum_modifier,
    [8439] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(859),
    1,
    anon_sym_RPAREN,
    ACTIONS(861),
    1,
    anon_sym_XCDR,
    ACTIONS(864),
    1,
    anon_sym_XCDR2,
    STATE(189),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [8456] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(867),
    1,
    anon_sym_COMMA,
    ACTIONS(869),
    1,
    anon_sym_RBRACE,
    STATE(190),
    1,
    sym_comment,
    STATE(226),
    1,
    aux_sym_enum_dcl_repeat1,
    [8472] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(871),
    1,
    anon_sym_COMMA,
    ACTIONS(874),
    1,
    anon_sym_LBRACE,
    STATE(191),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [8486] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(699),
    1,
    anon_sym_COMMA,
    ACTIONS(876),
    1,
    anon_sym_SEMI,
    STATE(192),
    1,
    sym_comment,
    STATE(260),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [8502] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(867),
    1,
    anon_sym_COMMA,
    ACTIONS(878),
    1,
    anon_sym_RBRACE,
    STATE(193),
    1,
    sym_comment,
    STATE(226),
    1,
    aux_sym_enum_dcl_repeat1,
    [8518] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(752),
    1,
    anon_sym_RBRACE,
    ACTIONS(867),
    1,
    anon_sym_COMMA,
    STATE(194),
    1,
    sym_comment,
    STATE(230),
    1,
    aux_sym_enum_dcl_repeat1,
    [8534] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(705),
    1,
    anon_sym_setraises,
    ACTIONS(880),
    1,
    anon_sym_SEMI,
    STATE(195),
    1,
    sym_comment,
    STATE(378),
    1,
    sym_set_excep_expr,
    [8550] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(196),
    1,
    sym_comment,
    ACTIONS(566),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8562] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(867),
    1,
    anon_sym_COMMA,
    ACTIONS(882),
    1,
    anon_sym_RBRACE,
    STATE(193),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(197),
    1,
    sym_comment,
    [8578] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(198),
    1,
    sym_comment,
    ACTIONS(884),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8590] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(760),
    1,
    anon_sym_raises,
    ACTIONS(886),
    1,
    anon_sym_SEMI,
    STATE(199),
    1,
    sym_comment,
    STATE(380),
    1,
    sym_raises_expr,
    [8606] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(588),
    1,
    sym_identifier,
    STATE(200),
    1,
    sym_comment,
    ACTIONS(888),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [8620] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(201),
    1,
    sym_comment,
    ACTIONS(890),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8632] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(202),
    1,
    sym_comment,
    ACTIONS(892),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8644] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(894),
    1,
    anon_sym_COMMA,
    ACTIONS(896),
    1,
    anon_sym_RPAREN,
    STATE(203),
    1,
    sym_comment,
    STATE(264),
    1,
    aux_sym_parameter_dcls_repeat1,
    [8660] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(742),
    1,
    anon_sym_RBRACE,
    ACTIONS(867),
    1,
    anon_sym_COMMA,
    STATE(190),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(204),
    1,
    sym_comment,
    [8676] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(867),
    1,
    anon_sym_COMMA,
    ACTIONS(898),
    1,
    anon_sym_RBRACE,
    STATE(205),
    1,
    sym_comment,
    STATE(226),
    1,
    aux_sym_enum_dcl_repeat1,
    [8692] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(900),
    1,
    anon_sym_COMMA,
    ACTIONS(902),
    1,
    anon_sym_LBRACE,
    STATE(206),
    1,
    sym_comment,
    STATE(229),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [8708] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(207),
    1,
    sym_comment,
    ACTIONS(570),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8720] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(208),
    1,
    sym_comment,
    ACTIONS(904),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8732] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(209),
    1,
    sym_comment,
    ACTIONS(906),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [8744] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(908),
    1,
    anon_sym_CARET,
    STATE(210),
    1,
    sym_comment,
    ACTIONS(693),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [8758] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(211),
    1,
    sym_comment,
    ACTIONS(910),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8770] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(212),
    1,
    sym_comment,
    ACTIONS(912),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [8782] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(914),
    1,
    sym_identifier,
    STATE(213),
    1,
    sym_comment,
    ACTIONS(892),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [8796] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(916),
    1,
    anon_sym_COMMA,
    ACTIONS(918),
    1,
    anon_sym_SEMI,
    STATE(214),
    1,
    sym_comment,
    STATE(250),
    1,
    aux_sym_any_declarators_repeat1,
    [8812] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(920),
    1,
    anon_sym_COMMA,
    ACTIONS(923),
    1,
    anon_sym_RPAREN,
    STATE(215),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [8826] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(216),
    1,
    sym_comment,
    ACTIONS(800),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8838] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(217),
    1,
    sym_comment,
    ACTIONS(925),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [8850] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(927),
    1,
    sym_identifier,
    STATE(132),
    1,
    sym_simple_declarator,
    STATE(218),
    1,
    sym_comment,
    STATE(373),
    1,
    sym_attr_declarator,
    [8866] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(588),
    1,
    sym_identifier,
    STATE(219),
    1,
    sym_comment,
    ACTIONS(923),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [8880] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(844),
    1,
    anon_sym_COMMA,
    ACTIONS(929),
    1,
    anon_sym_RPAREN,
    STATE(215),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(220),
    1,
    sym_comment,
    [8896] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(824),
    1,
    sym_identifier,
    STATE(221),
    1,
    sym_comment,
    STATE(288),
    1,
    sym_scoped_name,
    [8912] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(222),
    1,
    sym_comment,
    ACTIONS(931),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [8924] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(844),
    1,
    anon_sym_COMMA,
    ACTIONS(933),
    1,
    anon_sym_RPAREN,
    STATE(215),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(223),
    1,
    sym_comment,
    [8940] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(224),
    1,
    sym_comment,
    ACTIONS(935),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8952] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(937),
    1,
    anon_sym_SEMI,
    ACTIONS(939),
    1,
    anon_sym_default,
    STATE(225),
    1,
    sym_comment,
    STATE(362),
    1,
    sym_default,
    [8968] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(941),
    1,
    anon_sym_COMMA,
    ACTIONS(944),
    1,
    anon_sym_RBRACE,
    STATE(226),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [8982] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(824),
    1,
    sym_identifier,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(227),
    1,
    sym_comment,
    [8998] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(228),
    1,
    sym_comment,
    ACTIONS(946),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9010] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(900),
    1,
    anon_sym_COMMA,
    ACTIONS(948),
    1,
    anon_sym_LBRACE,
    STATE(191),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(229),
    1,
    sym_comment,
    [9026] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(867),
    1,
    anon_sym_COMMA,
    ACTIONS(882),
    1,
    anon_sym_RBRACE,
    STATE(226),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(230),
    1,
    sym_comment,
    [9042] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(950),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9054] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(834),
    1,
    anon_sym_XCDR,
    ACTIONS(836),
    1,
    anon_sym_XCDR2,
    STATE(178),
    1,
    aux_sym_data_representation_repeat1,
    STATE(232),
    1,
    sym_comment,
    [9070] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(952),
    1,
    anon_sym_SEMI,
    ACTIONS(954),
    1,
    sym_identifier,
    STATE(233),
    1,
    sym_comment,
    STATE(235),
    1,
    aux_sym_bitfield_repeat1,
    [9086] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(956),
    1,
    anon_sym_COMMA,
    ACTIONS(959),
    1,
    anon_sym_RBRACE,
    STATE(234),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [9100] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(961),
    1,
    anon_sym_SEMI,
    ACTIONS(963),
    1,
    sym_identifier,
    STATE(235),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [9114] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(236),
    1,
    sym_comment,
    ACTIONS(966),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9126] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(908),
    1,
    anon_sym_CARET,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(697),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [9140] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(939),
    1,
    anon_sym_default,
    ACTIONS(968),
    1,
    anon_sym_SEMI,
    STATE(238),
    1,
    sym_comment,
    STATE(357),
    1,
    sym_default,
    [9156] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(970),
    1,
    anon_sym_COMMA,
    ACTIONS(972),
    1,
    anon_sym_RBRACE,
    STATE(234),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(239),
    1,
    sym_comment,
    [9172] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(974),
    1,
    anon_sym_SEMI,
    ACTIONS(976),
    1,
    anon_sym_switch,
    ACTIONS(978),
    1,
    sym_identifier,
    STATE(240),
    1,
    sym_comment,
    [9188] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(954),
    1,
    sym_identifier,
    ACTIONS(980),
    1,
    anon_sym_SEMI,
    STATE(233),
    1,
    aux_sym_bitfield_repeat1,
    STATE(241),
    1,
    sym_comment,
    [9204] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(867),
    1,
    anon_sym_COMMA,
    ACTIONS(869),
    1,
    anon_sym_RBRACE,
    STATE(205),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(242),
    1,
    sym_comment,
    [9220] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(243),
    1,
    sym_comment,
    ACTIONS(982),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9232] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(838),
    1,
    anon_sym_LBRACE,
    ACTIONS(840),
    1,
    anon_sym_COLON,
    STATE(244),
    1,
    sym_comment,
    STATE(369),
    1,
    sym_interface_inheritance_spec,
    [9248] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(245),
    1,
    sym_comment,
    ACTIONS(984),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9260] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(986),
    1,
    anon_sym_COMMA,
    ACTIONS(989),
    1,
    anon_sym_RPAREN,
    STATE(246),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [9274] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(927),
    1,
    sym_identifier,
    STATE(148),
    1,
    sym_simple_declarator,
    STATE(247),
    1,
    sym_comment,
    STATE(341),
    1,
    sym_readonly_attr_declarator,
    [9290] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(699),
    1,
    anon_sym_COMMA,
    ACTIONS(991),
    1,
    anon_sym_SEMI,
    STATE(248),
    1,
    sym_comment,
    STATE(260),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [9306] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(249),
    1,
    sym_comment,
    ACTIONS(993),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9318] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(995),
    1,
    anon_sym_COMMA,
    ACTIONS(998),
    1,
    anon_sym_SEMI,
    STATE(250),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [9332] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(824),
    1,
    sym_identifier,
    STATE(251),
    1,
    sym_comment,
    STATE(286),
    1,
    sym_scoped_name,
    [9348] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(970),
    1,
    anon_sym_COMMA,
    ACTIONS(1000),
    1,
    anon_sym_RBRACE,
    STATE(239),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(252),
    1,
    sym_comment,
    [9364] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(824),
    1,
    sym_identifier,
    STATE(180),
    1,
    sym_scoped_name,
    STATE(253),
    1,
    sym_comment,
    [9380] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(824),
    1,
    sym_identifier,
    STATE(183),
    1,
    sym_scoped_name,
    STATE(254),
    1,
    sym_comment,
    [9396] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(255),
    1,
    sym_comment,
    ACTIONS(1002),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [9408] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1004),
    1,
    anon_sym_RBRACE,
    ACTIONS(1006),
    1,
    sym_identifier,
    STATE(252),
    1,
    sym_bit_value,
    STATE(256),
    1,
    sym_comment,
    [9424] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(257),
    1,
    sym_comment,
    ACTIONS(1008),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9436] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(258),
    1,
    sym_comment,
    ACTIONS(1010),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9448] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(67),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(824),
    1,
    sym_identifier,
    STATE(259),
    1,
    sym_comment,
    STATE(325),
    1,
    sym_scoped_name,
    [9464] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1012),
    1,
    anon_sym_COMMA,
    ACTIONS(1015),
    1,
    anon_sym_SEMI,
    STATE(260),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [9478] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1019),
    1,
    anon_sym_XCDR,
    STATE(261),
    1,
    sym_comment,
    ACTIONS(1017),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [9492] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(760),
    1,
    anon_sym_raises,
    ACTIONS(1021),
    1,
    anon_sym_SEMI,
    STATE(262),
    1,
    sym_comment,
    STATE(401),
    1,
    sym_raises_expr,
    [9508] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(916),
    1,
    anon_sym_COMMA,
    ACTIONS(1023),
    1,
    anon_sym_SEMI,
    STATE(214),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(263),
    1,
    sym_comment,
    [9524] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(894),
    1,
    anon_sym_COMMA,
    ACTIONS(1025),
    1,
    anon_sym_RPAREN,
    STATE(246),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(264),
    1,
    sym_comment,
    [9540] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(265),
    1,
    sym_comment,
    ACTIONS(1027),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9551] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(266),
    1,
    sym_comment,
    ACTIONS(1029),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9562] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(267),
    1,
    sym_comment,
    ACTIONS(1031),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [9573] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(268),
    1,
    sym_comment,
    ACTIONS(1033),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9584] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(269),
    1,
    sym_comment,
    ACTIONS(1035),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9595] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1037),
    1,
    anon_sym_LBRACE,
    ACTIONS(1039),
    1,
    anon_sym_COLON,
    STATE(270),
    1,
    sym_comment,
    [9608] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(271),
    1,
    sym_comment,
    ACTIONS(1041),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9619] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(272),
    1,
    sym_comment,
    ACTIONS(1043),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9630] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(273),
    1,
    sym_comment,
    ACTIONS(1045),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9641] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(588),
    1,
    sym_identifier,
    ACTIONS(1047),
    1,
    anon_sym_RPAREN,
    STATE(274),
    1,
    sym_comment,
    [9654] = 4,
    ACTIONS(1049),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(1051),
    1,
    sym_preproc_arg,
    ACTIONS(1053),
    1,
    anon_sym_SLASH_SLASH,
    STATE(275),
    1,
    sym_comment,
    [9667] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(276),
    1,
    sym_comment,
    ACTIONS(998),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [9678] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(277),
    1,
    sym_comment,
    ACTIONS(1055),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9689] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(278),
    1,
    sym_comment,
    ACTIONS(1015),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [9700] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(279),
    1,
    sym_comment,
    ACTIONS(1057),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9711] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(280),
    1,
    sym_comment,
    ACTIONS(1059),
    2,
    anon_sym_SEMI,
    anon_sym_typedef,
    [9722] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(281),
    1,
    sym_comment,
    ACTIONS(989),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [9733] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(282),
    1,
    sym_comment,
    ACTIONS(1061),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9744] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(283),
    1,
    sym_comment,
    ACTIONS(1063),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [9755] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(284),
    1,
    sym_comment,
    ACTIONS(1065),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9766] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    STATE(285),
    1,
    sym_comment,
    STATE(358),
    1,
    sym_typedef_dcl,
    [9779] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(588),
    1,
    sym_identifier,
    ACTIONS(1067),
    1,
    anon_sym_LBRACE,
    STATE(286),
    1,
    sym_comment,
    [9792] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1069),
    1,
    anon_sym_SEMI,
    ACTIONS(1071),
    1,
    anon_sym_default,
    STATE(287),
    1,
    sym_comment,
    [9805] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(588),
    1,
    sym_identifier,
    ACTIONS(1073),
    1,
    anon_sym_LBRACE,
    STATE(288),
    1,
    sym_comment,
    [9818] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(289),
    1,
    sym_comment,
    ACTIONS(1075),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9829] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(290),
    1,
    sym_comment,
    ACTIONS(1077),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9840] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(291),
    1,
    sym_comment,
    ACTIONS(1079),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9851] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(292),
    1,
    sym_comment,
    ACTIONS(1081),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9862] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(666),
    1,
    anon_sym_interface,
    STATE(293),
    1,
    sym_comment,
    STATE(423),
    1,
    sym_interface_header,
    [9875] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(294),
    1,
    sym_comment,
    ACTIONS(1083),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9886] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(295),
    1,
    sym_comment,
    ACTIONS(1085),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9897] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(296),
    1,
    sym_comment,
    ACTIONS(874),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [9908] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1006),
    1,
    sym_identifier,
    STATE(297),
    1,
    sym_comment,
    STATE(303),
    1,
    sym_bit_value,
    [9921] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(298),
    1,
    sym_comment,
    ACTIONS(1087),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9932] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(299),
    1,
    sym_comment,
    ACTIONS(1089),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9943] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(927),
    1,
    sym_identifier,
    STATE(283),
    1,
    sym_simple_declarator,
    STATE(300),
    1,
    sym_comment,
    [9956] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1091),
    1,
    anon_sym_GT,
    ACTIONS(1093),
    1,
    anon_sym_COMMA,
    STATE(301),
    1,
    sym_comment,
    [9969] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(666),
    1,
    anon_sym_interface,
    STATE(302),
    1,
    sym_comment,
    STATE(388),
    1,
    sym_interface_header,
    [9982] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(303),
    1,
    sym_comment,
    ACTIONS(959),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9993] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(304),
    1,
    sym_comment,
    ACTIONS(1095),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10004] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(305),
    1,
    sym_comment,
    ACTIONS(1097),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10015] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(306),
    1,
    sym_comment,
    ACTIONS(1099),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10026] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(307),
    1,
    sym_comment,
    ACTIONS(1101),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10037] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(308),
    1,
    sym_comment,
    ACTIONS(1103),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10048] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(309),
    1,
    sym_comment,
    ACTIONS(1105),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10059] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(310),
    1,
    sym_comment,
    ACTIONS(1107),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10070] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(311),
    1,
    sym_comment,
    ACTIONS(944),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10081] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(312),
    1,
    sym_comment,
    ACTIONS(1109),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10092] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(313),
    1,
    sym_comment,
    ACTIONS(1111),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10103] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(314),
    1,
    sym_comment,
    ACTIONS(1113),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10114] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(927),
    1,
    sym_identifier,
    STATE(315),
    1,
    sym_comment,
    STATE(367),
    1,
    sym_simple_declarator,
    [10127] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1115),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1117),
    1,
    anon_sym_SQUOTE,
    STATE(316),
    1,
    sym_comment,
    [10140] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(317),
    1,
    sym_comment,
    ACTIONS(1119),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10151] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(318),
    1,
    sym_comment,
    ACTIONS(1121),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [10162] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(319),
    1,
    sym_comment,
    ACTIONS(1123),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10173] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1125),
    1,
    anon_sym_LBRACE,
    ACTIONS(1127),
    1,
    anon_sym_COLON,
    STATE(320),
    1,
    sym_comment,
    [10186] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(927),
    1,
    sym_identifier,
    STATE(278),
    1,
    sym_simple_declarator,
    STATE(321),
    1,
    sym_comment,
    [10199] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(322),
    1,
    sym_comment,
    ACTIONS(1129),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [10210] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(323),
    1,
    sym_comment,
    ACTIONS(1131),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10221] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1133),
    1,
    anon_sym_LPAREN,
    STATE(271),
    1,
    sym_exception_list,
    STATE(324),
    1,
    sym_comment,
    [10234] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(588),
    1,
    sym_identifier,
    ACTIONS(1135),
    1,
    anon_sym_LBRACE,
    STATE(325),
    1,
    sym_comment,
    [10247] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1133),
    1,
    anon_sym_LPAREN,
    STATE(326),
    1,
    sym_comment,
    STATE(377),
    1,
    sym_exception_list,
    [10260] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(327),
    1,
    sym_comment,
    ACTIONS(1137),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10271] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(588),
    1,
    sym_identifier,
    ACTIONS(892),
    1,
    anon_sym_COMMA,
    STATE(328),
    1,
    sym_comment,
    [10284] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1139),
    1,
    anon_sym_GT,
    ACTIONS(1141),
    1,
    anon_sym_COMMA,
    STATE(329),
    1,
    sym_comment,
    [10297] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1143),
    1,
    anon_sym_const,
    STATE(285),
    1,
    sym_const_dcl,
    STATE(330),
    1,
    sym_comment,
    [10310] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(927),
    1,
    sym_identifier,
    STATE(287),
    1,
    sym_simple_declarator,
    STATE(331),
    1,
    sym_comment,
    [10323] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(715),
    1,
    anon_sym_typedef,
    ACTIONS(1145),
    1,
    anon_sym_PIPE,
    STATE(332),
    1,
    sym_comment,
    [10336] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(333),
    1,
    sym_comment,
    ACTIONS(1147),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10347] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1149),
    1,
    anon_sym_name,
    STATE(334),
    1,
    sym_comment,
    [10357] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1151),
    1,
    anon_sym_SEMI,
    STATE(335),
    1,
    sym_comment,
    [10367] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(892),
    1,
    sym_identifier,
    STATE(336),
    1,
    sym_comment,
    [10377] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1153),
    1,
    anon_sym_RPAREN,
    STATE(337),
    1,
    sym_comment,
    [10387] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1155),
    1,
    anon_sym_GT,
    STATE(338),
    1,
    sym_comment,
    [10397] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1157),
    1,
    anon_sym_LT,
    STATE(339),
    1,
    sym_comment,
    [10407] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1159),
    1,
    anon_sym_LT,
    STATE(340),
    1,
    sym_comment,
    [10417] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1161),
    1,
    anon_sym_SEMI,
    STATE(341),
    1,
    sym_comment,
    [10427] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(876),
    1,
    anon_sym_SEMI,
    STATE(342),
    1,
    sym_comment,
    [10437] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(880),
    1,
    anon_sym_SEMI,
    STATE(343),
    1,
    sym_comment,
    [10447] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1163),
    1,
    anon_sym_RPAREN,
    STATE(344),
    1,
    sym_comment,
    [10457] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1165),
    1,
    sym_identifier,
    STATE(345),
    1,
    sym_comment,
    [10467] = 3,
    ACTIONS(1053),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1167),
    1,
    aux_sym_comment_token1,
    STATE(346),
    1,
    sym_comment,
    [10477] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1169),
    1,
    anon_sym_name,
    STATE(347),
    1,
    sym_comment,
    [10487] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1171),
    1,
    anon_sym_SEMI,
    STATE(348),
    1,
    sym_comment,
    [10497] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1173),
    1,
    sym_identifier,
    STATE(349),
    1,
    sym_comment,
    [10507] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1175),
    1,
    anon_sym_SQUOTE,
    STATE(350),
    1,
    sym_comment,
    [10517] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1177),
    1,
    anon_sym_DQUOTE,
    STATE(351),
    1,
    sym_comment,
    [10527] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1179),
    1,
    sym_identifier,
    STATE(352),
    1,
    sym_comment,
    [10537] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_LBRACE,
    STATE(353),
    1,
    sym_comment,
    [10547] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1183),
    1,
    anon_sym_SEMI,
    STATE(354),
    1,
    sym_comment,
    [10557] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1185),
    1,
    anon_sym_LT,
    STATE(355),
    1,
    sym_comment,
    [10567] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1173),
    1,
    sym_identifier,
    STATE(356),
    1,
    sym_comment,
    [10577] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1187),
    1,
    anon_sym_SEMI,
    STATE(357),
    1,
    sym_comment,
    [10587] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1189),
    1,
    anon_sym_SEMI,
    STATE(358),
    1,
    sym_comment,
    [10597] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1191),
    1,
    sym_identifier,
    STATE(359),
    1,
    sym_comment,
    [10607] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1193),
    1,
    anon_sym_SEMI,
    STATE(360),
    1,
    sym_comment,
    [10617] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1195),
    1,
    anon_sym_SEMI,
    STATE(361),
    1,
    sym_comment,
    [10627] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1197),
    1,
    anon_sym_SEMI,
    STATE(362),
    1,
    sym_comment,
    [10637] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1199),
    1,
    sym_identifier,
    STATE(363),
    1,
    sym_comment,
    [10647] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1201),
    1,
    anon_sym_LBRACE,
    STATE(364),
    1,
    sym_comment,
    [10657] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1203),
    1,
    anon_sym_DQUOTE,
    STATE(365),
    1,
    sym_comment,
    [10667] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1205),
    1,
    anon_sym_LBRACE,
    STATE(366),
    1,
    sym_comment,
    [10677] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1207),
    1,
    anon_sym_SEMI,
    STATE(367),
    1,
    sym_comment,
    [10687] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1209),
    1,
    anon_sym_RBRACE,
    STATE(368),
    1,
    sym_comment,
    [10697] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1211),
    1,
    anon_sym_LBRACE,
    STATE(369),
    1,
    sym_comment,
    [10707] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1213),
    1,
    anon_sym_LBRACE,
    STATE(370),
    1,
    sym_comment,
    [10717] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1215),
    1,
    anon_sym_LPAREN,
    STATE(371),
    1,
    sym_comment,
    [10727] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(991),
    1,
    anon_sym_SEMI,
    STATE(372),
    1,
    sym_comment,
    [10737] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1217),
    1,
    anon_sym_SEMI,
    STATE(373),
    1,
    sym_comment,
    [10747] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1219),
    1,
    anon_sym_RPAREN,
    STATE(374),
    1,
    sym_comment,
    [10757] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1221),
    1,
    anon_sym_RPAREN,
    STATE(375),
    1,
    sym_comment,
    [10767] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1223),
    1,
    anon_sym_RBRACK,
    STATE(376),
    1,
    sym_comment,
    [10777] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1225),
    1,
    anon_sym_SEMI,
    STATE(377),
    1,
    sym_comment,
    [10787] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1227),
    1,
    anon_sym_SEMI,
    STATE(378),
    1,
    sym_comment,
    [10797] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1229),
    1,
    anon_sym_GT,
    STATE(379),
    1,
    sym_comment,
    [10807] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1021),
    1,
    anon_sym_SEMI,
    STATE(380),
    1,
    sym_comment,
    [10817] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1231),
    1,
    anon_sym_LPAREN,
    STATE(381),
    1,
    sym_comment,
    [10827] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1233),
    1,
    anon_sym_LBRACE,
    STATE(382),
    1,
    sym_comment,
    [10837] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1235),
    1,
    anon_sym_SEMI,
    STATE(383),
    1,
    sym_comment,
    [10847] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1237),
    1,
    anon_sym_EQ,
    STATE(384),
    1,
    sym_comment,
    [10857] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1239),
    1,
    anon_sym_EQ,
    STATE(385),
    1,
    sym_comment,
    [10867] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1241),
    1,
    anon_sym_EQ,
    STATE(386),
    1,
    sym_comment,
    [10877] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1243),
    1,
    anon_sym_SQUOTE,
    STATE(387),
    1,
    sym_comment,
    [10887] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1245),
    1,
    anon_sym_LBRACE,
    STATE(388),
    1,
    sym_comment,
    [10897] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1247),
    1,
    anon_sym_GT,
    STATE(389),
    1,
    sym_comment,
    [10907] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1249),
    1,
    anon_sym_GT,
    STATE(390),
    1,
    sym_comment,
    [10917] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1251),
    1,
    sym_identifier,
    STATE(391),
    1,
    sym_comment,
    [10927] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1253),
    1,
    anon_sym_DQUOTE,
    STATE(392),
    1,
    sym_comment,
    [10937] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1255),
    1,
    anon_sym_COLON,
    STATE(393),
    1,
    sym_comment,
    [10947] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1257),
    1,
    aux_sym_char_literal_token1,
    STATE(394),
    1,
    sym_comment,
    [10957] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1259),
    1,
    aux_sym_string_literal_token1,
    STATE(395),
    1,
    sym_comment,
    [10967] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1261),
    1,
    anon_sym_LBRACE,
    STATE(396),
    1,
    sym_comment,
    [10977] = 3,
    ACTIONS(1053),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1263),
    1,
    aux_sym_preproc_call_token1,
    STATE(397),
    1,
    sym_comment,
    [10987] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_GT,
    STATE(398),
    1,
    sym_comment,
    [10997] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1267),
    1,
    anon_sym_RPAREN,
    STATE(399),
    1,
    sym_comment,
    [11007] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1269),
    1,
    anon_sym_RPAREN,
    STATE(400),
    1,
    sym_comment,
    [11017] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1271),
    1,
    anon_sym_SEMI,
    STATE(401),
    1,
    sym_comment,
    [11027] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1047),
    1,
    anon_sym_RPAREN,
    STATE(402),
    1,
    sym_comment,
    [11037] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1273),
    1,
    anon_sym_SEMI,
    STATE(403),
    1,
    sym_comment,
    [11047] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1275),
    1,
    sym_identifier,
    STATE(404),
    1,
    sym_comment,
    [11057] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1277),
    1,
    anon_sym_SEMI,
    STATE(405),
    1,
    sym_comment,
    [11067] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1279),
    1,
    anon_sym_attribute,
    STATE(406),
    1,
    sym_comment,
    [11077] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1281),
    1,
    anon_sym_COLON,
    STATE(407),
    1,
    sym_comment,
    [11087] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1283),
    1,
    anon_sym_SEMI,
    STATE(408),
    1,
    sym_comment,
    [11097] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1285),
    1,
    anon_sym_SEMI,
    STATE(409),
    1,
    sym_comment,
    [11107] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(79),
    1,
    anon_sym_RBRACE,
    STATE(410),
    1,
    sym_comment,
    [11117] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1287),
    1,
    anon_sym_enum,
    STATE(411),
    1,
    sym_comment,
    [11127] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1289),
    1,
    anon_sym_enum,
    STATE(412),
    1,
    sym_comment,
    [11137] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1291),
    1,
    anon_sym_SEMI,
    STATE(413),
    1,
    sym_comment,
    [11147] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1293),
    1,
    sym_identifier,
    STATE(414),
    1,
    sym_comment,
    [11157] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1295),
    1,
    anon_sym_SEMI,
    STATE(415),
    1,
    sym_comment,
    [11167] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1297),
    1,
    anon_sym_LBRACE,
    STATE(416),
    1,
    sym_comment,
    [11177] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1299),
    1,
    anon_sym_SEMI,
    STATE(417),
    1,
    sym_comment,
    [11187] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1301),
    1,
    anon_sym_LBRACE,
    STATE(418),
    1,
    sym_comment,
    [11197] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1303),
    1,
    anon_sym_SEMI,
    STATE(419),
    1,
    sym_comment,
    [11207] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(588),
    1,
    sym_identifier,
    STATE(420),
    1,
    sym_comment,
    [11217] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1305),
    1,
    anon_sym_SEMI,
    STATE(421),
    1,
    sym_comment,
    [11227] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1307),
    1,
    sym_identifier,
    STATE(422),
    1,
    sym_comment,
    [11237] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1309),
    1,
    anon_sym_LBRACE,
    STATE(423),
    1,
    sym_comment,
    [11247] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1311),
    1,
    anon_sym_LPAREN,
    STATE(424),
    1,
    sym_comment,
    [11257] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1313),
    1,
    aux_sym_string_literal_token1,
    STATE(425),
    1,
    sym_comment,
    [11267] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1315),
    1,
    anon_sym_SEMI,
    STATE(426),
    1,
    sym_comment,
    [11277] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1317),
    1,
    anon_sym_SEMI,
    STATE(427),
    1,
    sym_comment,
    [11287] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1319),
    1,
    aux_sym_string_literal_token1,
    STATE(428),
    1,
    sym_comment,
    [11297] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1321),
    1,
    anon_sym_SEMI,
    STATE(429),
    1,
    sym_comment,
    [11307] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1131),
    1,
    anon_sym_const,
    STATE(430),
    1,
    sym_comment,
    [11317] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1323),
    1,
    ts_builtin_sym_end,
    STATE(431),
    1,
    sym_comment,
    [11327] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1325),
    1,
    anon_sym_LPAREN,
    STATE(432),
    1,
    sym_comment,
    [11337] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1327),
    1,
    anon_sym_COMMA,
    STATE(433),
    1,
    sym_comment,
    [11347] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1057),
    1,
    anon_sym_const,
    STATE(434),
    1,
    sym_comment,
    [11357] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1329),
    1,
    anon_sym_LPAREN,
    STATE(435),
    1,
    sym_comment,
    [11367] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1331),
    1,
    anon_sym_LPAREN,
    STATE(436),
    1,
    sym_comment,
    [11377] = 3,
    ACTIONS(1053),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1333),
    1,
    aux_sym_predefine_token1,
    STATE(437),
    1,
    sym_comment,
    [11387] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1335),
    1,
    sym_identifier,
    STATE(438),
    1,
    sym_comment,
    [11397] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1337),
    1,
    anon_sym_enum,
    STATE(439),
    1,
    sym_comment,
    [11407] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1339),
    1,
    sym_identifier,
    STATE(440),
    1,
    sym_comment,
    [11417] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1341),
    1,
    sym_identifier,
    STATE(441),
    1,
    sym_comment,
    [11427] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1109),
    1,
    anon_sym_const,
    STATE(442),
    1,
    sym_comment,
    [11437] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1343),
    1,
    anon_sym_GT,
    STATE(443),
    1,
    sym_comment,
    [11447] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1345),
    1,
    anon_sym_GT,
    STATE(444),
    1,
    sym_comment,
    [11457] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1347),
    1,
    sym_identifier,
    STATE(445),
    1,
    sym_comment,
    [11467] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1349),
    1,
    anon_sym_COMMA,
    STATE(446),
    1,
    sym_comment,
    [11477] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1351),
    1,
    sym_identifier,
    STATE(447),
    1,
    sym_comment,
    [11487] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1089),
    1,
    anon_sym_const,
    STATE(448),
    1,
    sym_comment,
    [11497] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1353),
    1,
    aux_sym_char_literal_token1,
    STATE(449),
    1,
    sym_comment,
    [11507] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1355),
    1,
    aux_sym_string_literal_token1,
    STATE(450),
    1,
    sym_comment,
    [11517] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1357),
    1,
    anon_sym_SEMI,
    STATE(451),
    1,
    sym_comment,
    [11527] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(914),
    1,
    sym_identifier,
    STATE(452),
    1,
    sym_comment,
    [11537] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1359),
    1,
    sym_identifier,
    STATE(453),
    1,
    sym_comment,
    [11547] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1361),
    1,
    anon_sym_EQ,
    STATE(454),
    1,
    sym_comment,
    [11557] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1363),
    1,
    sym_identifier,
    STATE(455),
    1,
    sym_comment,
    [11567] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1365),
    1,
    anon_sym_RBRACE,
    STATE(456),
    1,
    sym_comment,
    [11577] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1173),
    1,
    sym_identifier,
    STATE(457),
    1,
    sym_comment,
    [11587] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1367),
    1,
    sym_identifier,
    STATE(458),
    1,
    sym_comment,
    [11597] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1369),
    1,
    sym_identifier,
    STATE(459),
    1,
    sym_comment,
    [11607] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1371),
    1,
    anon_sym_LT,
    STATE(460),
    1,
    sym_comment,
    [11617] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1373),
    1,
    sym_identifier,
    STATE(461),
    1,
    sym_comment,
    [11627] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1375),
    1,
    sym_identifier,
    STATE(462),
    1,
    sym_comment,
    [11637] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(107),
    1,
    anon_sym_RBRACE,
    STATE(463),
    1,
    sym_comment,
    [11647] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1377),
    1,
    anon_sym_SEMI,
    STATE(464),
    1,
    sym_comment,
    [11657] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1379),
    1,
    sym_identifier,
    STATE(465),
    1,
    sym_comment,
    [11667] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1381),
    1,
    sym_identifier,
    STATE(466),
    1,
    sym_comment,
    [11677] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1383),
    1,
    anon_sym_LBRACE,
    STATE(467),
    1,
    sym_comment,
    [11687] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1385),
    1,
    sym_identifier,
    STATE(468),
    1,
    sym_comment,
    [11697] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1387),
    1,
    anon_sym_LBRACE,
    STATE(469),
    1,
    sym_comment,
    [11707] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1389),
    1,
    sym_identifier,
    STATE(470),
    1,
    sym_comment,
    [11717] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1391),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(471),
    1,
    sym_comment,
    [11727] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1393),
    1,
    sym_identifier,
    STATE(472),
    1,
    sym_comment,
    [11737] = 1,
    ACTIONS(1395),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(7)] = 0,
    [SMALL_STATE(8)] = 131,
    [SMALL_STATE(9)] = 251,
    [SMALL_STATE(10)] = 371,
    [SMALL_STATE(11)] = 491,
    [SMALL_STATE(12)] = 611,
    [SMALL_STATE(13)] = 741,
    [SMALL_STATE(14)] = 861,
    [SMALL_STATE(15)] = 981,
    [SMALL_STATE(16)] = 1101,
    [SMALL_STATE(17)] = 1221,
    [SMALL_STATE(18)] = 1341,
    [SMALL_STATE(19)] = 1461,
    [SMALL_STATE(20)] = 1579,
    [SMALL_STATE(21)] = 1699,
    [SMALL_STATE(22)] = 1820,
    [SMALL_STATE(23)] = 1941,
    [SMALL_STATE(24)] = 2062,
    [SMALL_STATE(25)] = 2183,
    [SMALL_STATE(26)] = 2294,
    [SMALL_STATE(27)] = 2391,
    [SMALL_STATE(28)] = 2492,
    [SMALL_STATE(29)] = 2588,
    [SMALL_STATE(30)] = 2686,
    [SMALL_STATE(31)] = 2779,
    [SMALL_STATE(32)] = 2828,
    [SMALL_STATE(33)] = 2877,
    [SMALL_STATE(34)] = 2964,
    [SMALL_STATE(35)] = 3051,
    [SMALL_STATE(36)] = 3138,
    [SMALL_STATE(37)] = 3225,
    [SMALL_STATE(38)] = 3312,
    [SMALL_STATE(39)] = 3366,
    [SMALL_STATE(40)] = 3407,
    [SMALL_STATE(41)] = 3448,
    [SMALL_STATE(42)] = 3489,
    [SMALL_STATE(43)] = 3530,
    [SMALL_STATE(44)] = 3571,
    [SMALL_STATE(45)] = 3611,
    [SMALL_STATE(46)] = 3651,
    [SMALL_STATE(47)] = 3691,
    [SMALL_STATE(48)] = 3761,
    [SMALL_STATE(49)] = 3831,
    [SMALL_STATE(50)] = 3871,
    [SMALL_STATE(51)] = 3951,
    [SMALL_STATE(52)] = 4031,
    [SMALL_STATE(53)] = 4111,
    [SMALL_STATE(54)] = 4191,
    [SMALL_STATE(55)] = 4271,
    [SMALL_STATE(56)] = 4351,
    [SMALL_STATE(57)] = 4431,
    [SMALL_STATE(58)] = 4508,
    [SMALL_STATE(59)] = 4585,
    [SMALL_STATE(60)] = 4662,
    [SMALL_STATE(61)] = 4739,
    [SMALL_STATE(62)] = 4816,
    [SMALL_STATE(63)] = 4893,
    [SMALL_STATE(64)] = 4970,
    [SMALL_STATE(65)] = 5005,
    [SMALL_STATE(66)] = 5044,
    [SMALL_STATE(67)] = 5115,
    [SMALL_STATE(68)] = 5150,
    [SMALL_STATE(69)] = 5221,
    [SMALL_STATE(70)] = 5255,
    [SMALL_STATE(71)] = 5323,
    [SMALL_STATE(72)] = 5391,
    [SMALL_STATE(73)] = 5425,
    [SMALL_STATE(74)] = 5459,
    [SMALL_STATE(75)] = 5493,
    [SMALL_STATE(76)] = 5558,
    [SMALL_STATE(77)] = 5591,
    [SMALL_STATE(78)] = 5622,
    [SMALL_STATE(79)] = 5687,
    [SMALL_STATE(80)] = 5720,
    [SMALL_STATE(81)] = 5751,
    [SMALL_STATE(82)] = 5782,
    [SMALL_STATE(83)] = 5815,
    [SMALL_STATE(84)] = 5846,
    [SMALL_STATE(85)] = 5908,
    [SMALL_STATE(86)] = 5970,
    [SMALL_STATE(87)] = 6002,
    [SMALL_STATE(88)] = 6061,
    [SMALL_STATE(89)] = 6120,
    [SMALL_STATE(90)] = 6176,
    [SMALL_STATE(91)] = 6232,
    [SMALL_STATE(92)] = 6261,
    [SMALL_STATE(93)] = 6290,
    [SMALL_STATE(94)] = 6318,
    [SMALL_STATE(95)] = 6346,
    [SMALL_STATE(96)] = 6374,
    [SMALL_STATE(97)] = 6404,
    [SMALL_STATE(98)] = 6432,
    [SMALL_STATE(99)] = 6460,
    [SMALL_STATE(100)] = 6508,
    [SMALL_STATE(101)] = 6536,
    [SMALL_STATE(102)] = 6564,
    [SMALL_STATE(103)] = 6592,
    [SMALL_STATE(104)] = 6620,
    [SMALL_STATE(105)] = 6648,
    [SMALL_STATE(106)] = 6678,
    [SMALL_STATE(107)] = 6706,
    [SMALL_STATE(108)] = 6734,
    [SMALL_STATE(109)] = 6765,
    [SMALL_STATE(110)] = 6796,
    [SMALL_STATE(111)] = 6839,
    [SMALL_STATE(112)] = 6882,
    [SMALL_STATE(113)] = 6908,
    [SMALL_STATE(114)] = 6934,
    [SMALL_STATE(115)] = 6969,
    [SMALL_STATE(116)] = 6994,
    [SMALL_STATE(117)] = 7017,
    [SMALL_STATE(118)] = 7040,
    [SMALL_STATE(119)] = 7065,
    [SMALL_STATE(120)] = 7089,
    [SMALL_STATE(121)] = 7113,
    [SMALL_STATE(122)] = 7137,
    [SMALL_STATE(123)] = 7161,
    [SMALL_STATE(124)] = 7196,
    [SMALL_STATE(125)] = 7216,
    [SMALL_STATE(126)] = 7236,
    [SMALL_STATE(127)] = 7264,
    [SMALL_STATE(128)] = 7284,
    [SMALL_STATE(129)] = 7303,
    [SMALL_STATE(130)] = 7322,
    [SMALL_STATE(131)] = 7341,
    [SMALL_STATE(132)] = 7360,
    [SMALL_STATE(133)] = 7391,
    [SMALL_STATE(134)] = 7407,
    [SMALL_STATE(135)] = 7433,
    [SMALL_STATE(136)] = 7451,
    [SMALL_STATE(137)] = 7470,
    [SMALL_STATE(138)] = 7487,
    [SMALL_STATE(139)] = 7510,
    [SMALL_STATE(140)] = 7535,
    [SMALL_STATE(141)] = 7560,
    [SMALL_STATE(142)] = 7577,
    [SMALL_STATE(143)] = 7602,
    [SMALL_STATE(144)] = 7623,
    [SMALL_STATE(145)] = 7648,
    [SMALL_STATE(146)] = 7669,
    [SMALL_STATE(147)] = 7694,
    [SMALL_STATE(148)] = 7719,
    [SMALL_STATE(149)] = 7741,
    [SMALL_STATE(150)] = 7763,
    [SMALL_STATE(151)] = 7777,
    [SMALL_STATE(152)] = 7797,
    [SMALL_STATE(153)] = 7817,
    [SMALL_STATE(154)] = 7839,
    [SMALL_STATE(155)] = 7861,
    [SMALL_STATE(156)] = 7875,
    [SMALL_STATE(157)] = 7897,
    [SMALL_STATE(158)] = 7919,
    [SMALL_STATE(159)] = 7933,
    [SMALL_STATE(160)] = 7953,
    [SMALL_STATE(161)] = 7973,
    [SMALL_STATE(162)] = 7993,
    [SMALL_STATE(163)] = 8013,
    [SMALL_STATE(164)] = 8035,
    [SMALL_STATE(165)] = 8049,
    [SMALL_STATE(166)] = 8064,
    [SMALL_STATE(167)] = 8077,
    [SMALL_STATE(168)] = 8092,
    [SMALL_STATE(169)] = 8105,
    [SMALL_STATE(170)] = 8118,
    [SMALL_STATE(171)] = 8131,
    [SMALL_STATE(172)] = 8144,
    [SMALL_STATE(173)] = 8157,
    [SMALL_STATE(174)] = 8174,
    [SMALL_STATE(175)] = 8191,
    [SMALL_STATE(176)] = 8206,
    [SMALL_STATE(177)] = 8225,
    [SMALL_STATE(178)] = 8242,
    [SMALL_STATE(179)] = 8261,
    [SMALL_STATE(180)] = 8280,
    [SMALL_STATE(181)] = 8299,
    [SMALL_STATE(182)] = 8316,
    [SMALL_STATE(183)] = 8333,
    [SMALL_STATE(184)] = 8352,
    [SMALL_STATE(185)] = 8367,
    [SMALL_STATE(186)] = 8384,
    [SMALL_STATE(187)] = 8403,
    [SMALL_STATE(188)] = 8420,
    [SMALL_STATE(189)] = 8439,
    [SMALL_STATE(190)] = 8456,
    [SMALL_STATE(191)] = 8472,
    [SMALL_STATE(192)] = 8486,
    [SMALL_STATE(193)] = 8502,
    [SMALL_STATE(194)] = 8518,
    [SMALL_STATE(195)] = 8534,
    [SMALL_STATE(196)] = 8550,
    [SMALL_STATE(197)] = 8562,
    [SMALL_STATE(198)] = 8578,
    [SMALL_STATE(199)] = 8590,
    [SMALL_STATE(200)] = 8606,
    [SMALL_STATE(201)] = 8620,
    [SMALL_STATE(202)] = 8632,
    [SMALL_STATE(203)] = 8644,
    [SMALL_STATE(204)] = 8660,
    [SMALL_STATE(205)] = 8676,
    [SMALL_STATE(206)] = 8692,
    [SMALL_STATE(207)] = 8708,
    [SMALL_STATE(208)] = 8720,
    [SMALL_STATE(209)] = 8732,
    [SMALL_STATE(210)] = 8744,
    [SMALL_STATE(211)] = 8758,
    [SMALL_STATE(212)] = 8770,
    [SMALL_STATE(213)] = 8782,
    [SMALL_STATE(214)] = 8796,
    [SMALL_STATE(215)] = 8812,
    [SMALL_STATE(216)] = 8826,
    [SMALL_STATE(217)] = 8838,
    [SMALL_STATE(218)] = 8850,
    [SMALL_STATE(219)] = 8866,
    [SMALL_STATE(220)] = 8880,
    [SMALL_STATE(221)] = 8896,
    [SMALL_STATE(222)] = 8912,
    [SMALL_STATE(223)] = 8924,
    [SMALL_STATE(224)] = 8940,
    [SMALL_STATE(225)] = 8952,
    [SMALL_STATE(226)] = 8968,
    [SMALL_STATE(227)] = 8982,
    [SMALL_STATE(228)] = 8998,
    [SMALL_STATE(229)] = 9010,
    [SMALL_STATE(230)] = 9026,
    [SMALL_STATE(231)] = 9042,
    [SMALL_STATE(232)] = 9054,
    [SMALL_STATE(233)] = 9070,
    [SMALL_STATE(234)] = 9086,
    [SMALL_STATE(235)] = 9100,
    [SMALL_STATE(236)] = 9114,
    [SMALL_STATE(237)] = 9126,
    [SMALL_STATE(238)] = 9140,
    [SMALL_STATE(239)] = 9156,
    [SMALL_STATE(240)] = 9172,
    [SMALL_STATE(241)] = 9188,
    [SMALL_STATE(242)] = 9204,
    [SMALL_STATE(243)] = 9220,
    [SMALL_STATE(244)] = 9232,
    [SMALL_STATE(245)] = 9248,
    [SMALL_STATE(246)] = 9260,
    [SMALL_STATE(247)] = 9274,
    [SMALL_STATE(248)] = 9290,
    [SMALL_STATE(249)] = 9306,
    [SMALL_STATE(250)] = 9318,
    [SMALL_STATE(251)] = 9332,
    [SMALL_STATE(252)] = 9348,
    [SMALL_STATE(253)] = 9364,
    [SMALL_STATE(254)] = 9380,
    [SMALL_STATE(255)] = 9396,
    [SMALL_STATE(256)] = 9408,
    [SMALL_STATE(257)] = 9424,
    [SMALL_STATE(258)] = 9436,
    [SMALL_STATE(259)] = 9448,
    [SMALL_STATE(260)] = 9464,
    [SMALL_STATE(261)] = 9478,
    [SMALL_STATE(262)] = 9492,
    [SMALL_STATE(263)] = 9508,
    [SMALL_STATE(264)] = 9524,
    [SMALL_STATE(265)] = 9540,
    [SMALL_STATE(266)] = 9551,
    [SMALL_STATE(267)] = 9562,
    [SMALL_STATE(268)] = 9573,
    [SMALL_STATE(269)] = 9584,
    [SMALL_STATE(270)] = 9595,
    [SMALL_STATE(271)] = 9608,
    [SMALL_STATE(272)] = 9619,
    [SMALL_STATE(273)] = 9630,
    [SMALL_STATE(274)] = 9641,
    [SMALL_STATE(275)] = 9654,
    [SMALL_STATE(276)] = 9667,
    [SMALL_STATE(277)] = 9678,
    [SMALL_STATE(278)] = 9689,
    [SMALL_STATE(279)] = 9700,
    [SMALL_STATE(280)] = 9711,
    [SMALL_STATE(281)] = 9722,
    [SMALL_STATE(282)] = 9733,
    [SMALL_STATE(283)] = 9744,
    [SMALL_STATE(284)] = 9755,
    [SMALL_STATE(285)] = 9766,
    [SMALL_STATE(286)] = 9779,
    [SMALL_STATE(287)] = 9792,
    [SMALL_STATE(288)] = 9805,
    [SMALL_STATE(289)] = 9818,
    [SMALL_STATE(290)] = 9829,
    [SMALL_STATE(291)] = 9840,
    [SMALL_STATE(292)] = 9851,
    [SMALL_STATE(293)] = 9862,
    [SMALL_STATE(294)] = 9875,
    [SMALL_STATE(295)] = 9886,
    [SMALL_STATE(296)] = 9897,
    [SMALL_STATE(297)] = 9908,
    [SMALL_STATE(298)] = 9921,
    [SMALL_STATE(299)] = 9932,
    [SMALL_STATE(300)] = 9943,
    [SMALL_STATE(301)] = 9956,
    [SMALL_STATE(302)] = 9969,
    [SMALL_STATE(303)] = 9982,
    [SMALL_STATE(304)] = 9993,
    [SMALL_STATE(305)] = 10004,
    [SMALL_STATE(306)] = 10015,
    [SMALL_STATE(307)] = 10026,
    [SMALL_STATE(308)] = 10037,
    [SMALL_STATE(309)] = 10048,
    [SMALL_STATE(310)] = 10059,
    [SMALL_STATE(311)] = 10070,
    [SMALL_STATE(312)] = 10081,
    [SMALL_STATE(313)] = 10092,
    [SMALL_STATE(314)] = 10103,
    [SMALL_STATE(315)] = 10114,
    [SMALL_STATE(316)] = 10127,
    [SMALL_STATE(317)] = 10140,
    [SMALL_STATE(318)] = 10151,
    [SMALL_STATE(319)] = 10162,
    [SMALL_STATE(320)] = 10173,
    [SMALL_STATE(321)] = 10186,
    [SMALL_STATE(322)] = 10199,
    [SMALL_STATE(323)] = 10210,
    [SMALL_STATE(324)] = 10221,
    [SMALL_STATE(325)] = 10234,
    [SMALL_STATE(326)] = 10247,
    [SMALL_STATE(327)] = 10260,
    [SMALL_STATE(328)] = 10271,
    [SMALL_STATE(329)] = 10284,
    [SMALL_STATE(330)] = 10297,
    [SMALL_STATE(331)] = 10310,
    [SMALL_STATE(332)] = 10323,
    [SMALL_STATE(333)] = 10336,
    [SMALL_STATE(334)] = 10347,
    [SMALL_STATE(335)] = 10357,
    [SMALL_STATE(336)] = 10367,
    [SMALL_STATE(337)] = 10377,
    [SMALL_STATE(338)] = 10387,
    [SMALL_STATE(339)] = 10397,
    [SMALL_STATE(340)] = 10407,
    [SMALL_STATE(341)] = 10417,
    [SMALL_STATE(342)] = 10427,
    [SMALL_STATE(343)] = 10437,
    [SMALL_STATE(344)] = 10447,
    [SMALL_STATE(345)] = 10457,
    [SMALL_STATE(346)] = 10467,
    [SMALL_STATE(347)] = 10477,
    [SMALL_STATE(348)] = 10487,
    [SMALL_STATE(349)] = 10497,
    [SMALL_STATE(350)] = 10507,
    [SMALL_STATE(351)] = 10517,
    [SMALL_STATE(352)] = 10527,
    [SMALL_STATE(353)] = 10537,
    [SMALL_STATE(354)] = 10547,
    [SMALL_STATE(355)] = 10557,
    [SMALL_STATE(356)] = 10567,
    [SMALL_STATE(357)] = 10577,
    [SMALL_STATE(358)] = 10587,
    [SMALL_STATE(359)] = 10597,
    [SMALL_STATE(360)] = 10607,
    [SMALL_STATE(361)] = 10617,
    [SMALL_STATE(362)] = 10627,
    [SMALL_STATE(363)] = 10637,
    [SMALL_STATE(364)] = 10647,
    [SMALL_STATE(365)] = 10657,
    [SMALL_STATE(366)] = 10667,
    [SMALL_STATE(367)] = 10677,
    [SMALL_STATE(368)] = 10687,
    [SMALL_STATE(369)] = 10697,
    [SMALL_STATE(370)] = 10707,
    [SMALL_STATE(371)] = 10717,
    [SMALL_STATE(372)] = 10727,
    [SMALL_STATE(373)] = 10737,
    [SMALL_STATE(374)] = 10747,
    [SMALL_STATE(375)] = 10757,
    [SMALL_STATE(376)] = 10767,
    [SMALL_STATE(377)] = 10777,
    [SMALL_STATE(378)] = 10787,
    [SMALL_STATE(379)] = 10797,
    [SMALL_STATE(380)] = 10807,
    [SMALL_STATE(381)] = 10817,
    [SMALL_STATE(382)] = 10827,
    [SMALL_STATE(383)] = 10837,
    [SMALL_STATE(384)] = 10847,
    [SMALL_STATE(385)] = 10857,
    [SMALL_STATE(386)] = 10867,
    [SMALL_STATE(387)] = 10877,
    [SMALL_STATE(388)] = 10887,
    [SMALL_STATE(389)] = 10897,
    [SMALL_STATE(390)] = 10907,
    [SMALL_STATE(391)] = 10917,
    [SMALL_STATE(392)] = 10927,
    [SMALL_STATE(393)] = 10937,
    [SMALL_STATE(394)] = 10947,
    [SMALL_STATE(395)] = 10957,
    [SMALL_STATE(396)] = 10967,
    [SMALL_STATE(397)] = 10977,
    [SMALL_STATE(398)] = 10987,
    [SMALL_STATE(399)] = 10997,
    [SMALL_STATE(400)] = 11007,
    [SMALL_STATE(401)] = 11017,
    [SMALL_STATE(402)] = 11027,
    [SMALL_STATE(403)] = 11037,
    [SMALL_STATE(404)] = 11047,
    [SMALL_STATE(405)] = 11057,
    [SMALL_STATE(406)] = 11067,
    [SMALL_STATE(407)] = 11077,
    [SMALL_STATE(408)] = 11087,
    [SMALL_STATE(409)] = 11097,
    [SMALL_STATE(410)] = 11107,
    [SMALL_STATE(411)] = 11117,
    [SMALL_STATE(412)] = 11127,
    [SMALL_STATE(413)] = 11137,
    [SMALL_STATE(414)] = 11147,
    [SMALL_STATE(415)] = 11157,
    [SMALL_STATE(416)] = 11167,
    [SMALL_STATE(417)] = 11177,
    [SMALL_STATE(418)] = 11187,
    [SMALL_STATE(419)] = 11197,
    [SMALL_STATE(420)] = 11207,
    [SMALL_STATE(421)] = 11217,
    [SMALL_STATE(422)] = 11227,
    [SMALL_STATE(423)] = 11237,
    [SMALL_STATE(424)] = 11247,
    [SMALL_STATE(425)] = 11257,
    [SMALL_STATE(426)] = 11267,
    [SMALL_STATE(427)] = 11277,
    [SMALL_STATE(428)] = 11287,
    [SMALL_STATE(429)] = 11297,
    [SMALL_STATE(430)] = 11307,
    [SMALL_STATE(431)] = 11317,
    [SMALL_STATE(432)] = 11327,
    [SMALL_STATE(433)] = 11337,
    [SMALL_STATE(434)] = 11347,
    [SMALL_STATE(435)] = 11357,
    [SMALL_STATE(436)] = 11367,
    [SMALL_STATE(437)] = 11377,
    [SMALL_STATE(438)] = 11387,
    [SMALL_STATE(439)] = 11397,
    [SMALL_STATE(440)] = 11407,
    [SMALL_STATE(441)] = 11417,
    [SMALL_STATE(442)] = 11427,
    [SMALL_STATE(443)] = 11437,
    [SMALL_STATE(444)] = 11447,
    [SMALL_STATE(445)] = 11457,
    [SMALL_STATE(446)] = 11467,
    [SMALL_STATE(447)] = 11477,
    [SMALL_STATE(448)] = 11487,
    [SMALL_STATE(449)] = 11497,
    [SMALL_STATE(450)] = 11507,
    [SMALL_STATE(451)] = 11517,
    [SMALL_STATE(452)] = 11527,
    [SMALL_STATE(453)] = 11537,
    [SMALL_STATE(454)] = 11547,
    [SMALL_STATE(455)] = 11557,
    [SMALL_STATE(456)] = 11567,
    [SMALL_STATE(457)] = 11577,
    [SMALL_STATE(458)] = 11587,
    [SMALL_STATE(459)] = 11597,
    [SMALL_STATE(460)] = 11607,
    [SMALL_STATE(461)] = 11617,
    [SMALL_STATE(462)] = 11627,
    [SMALL_STATE(463)] = 11637,
    [SMALL_STATE(464)] = 11647,
    [SMALL_STATE(465)] = 11657,
    [SMALL_STATE(466)] = 11667,
    [SMALL_STATE(467)] = 11677,
    [SMALL_STATE(468)] = 11687,
    [SMALL_STATE(469)] = 11697,
    [SMALL_STATE(470)] = 11707,
    [SMALL_STATE(471)] = 11717,
    [SMALL_STATE(472)] = 11727,
    [SMALL_STATE(473)] = 11737,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(346),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(275),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(462),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(461),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(302),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(459),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(453),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(447),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(315),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(445),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(441),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(440),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(439),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(438),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(437),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(436),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(435),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(212),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(432),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(172),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(172),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(231),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(355),
    [57] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(171),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(208),
    [63] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(208),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(170),
    [67] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(420),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(167),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(249),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(340),
    [75] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(339),
    [77] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(462),
    [79] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(464),
    [81] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(404),
    [83] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(406),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [87] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(459),
    [89] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(453),
    [91] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(315),
    [93] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(441),
    [95] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(440),
    [97] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(438),
    [99] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(7),
    [101] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [103] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(92),
    [105] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(335),
    [107] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(413),
    [109] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(172),
    [112] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(172),
    [115] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(231),
    [118] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(355),
    [121] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(171),
    [124] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(171),
    [127] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(208),
    [130] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(208),
    [133] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(170),
    [136] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(420),
    [139] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(167),
    [142] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(249),
    [145] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(340),
    [148] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(339),
    [151] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(462),
    [154] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [156] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(404),
    [159] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(406),
    [162] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(33),
    [165] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(459),
    [168] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(453),
    [171] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(447),
    [174] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(315),
    [177] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(441),
    [180] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(440),
    [183] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(439),
    [186] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(438),
    [189] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(7),
    [192] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(47),
    [195] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(212),
    [198] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(432),
    [201] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(92),
    [204] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [206] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(269),
    [208] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [210] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(471),
    [212] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(465),
    [214] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(289),
    [216] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [218] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(317),
    [220] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [222] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(417),
    [224] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [226] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(284),
    [228] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(327),
    [230] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [232] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(172),
    [235] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(172),
    [238] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(231),
    [241] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(355),
    [244] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(171),
    [247] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(171),
    [250] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(208),
    [253] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(208),
    [256] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(170),
    [259] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(420),
    [262] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(167),
    [265] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(249),
    [268] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(340),
    [271] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(339),
    [274] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [276] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(44),
    [279] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(471),
    [282] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(465),
    [285] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(92),
    [288] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    [290] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(462),
    [293] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(461),
    [296] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(302),
    [299] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(459),
    [302] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(453),
    [305] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(447),
    [308] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(315),
    [311] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(445),
    [314] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(441),
    [317] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(440),
    [320] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(439),
    [323] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(438),
    [326] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(7),
    [329] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(437),
    [332] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(158),
    [335] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(436),
    [338] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(435),
    [341] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(47),
    [344] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(212),
    [347] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(432),
    [350] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2),
    [352] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(437),
    [354] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(451),
    [356] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(405),
    [358] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 1),
    [360] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case, 1),
    [362] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(349),
    [364] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(352),
    [366] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(458),
    [368] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(333),
    [370] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(470),
    [372] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(172),
    [375] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(172),
    [378] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(349),
    [381] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(352),
    [384] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(171),
    [387] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(171),
    [390] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(208),
    [393] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(208),
    [396] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(170),
    [399] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(420),
    [402] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(167),
    [405] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(458),
    [408] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(340),
    [411] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    [413] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(470),
    [416] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(439),
    [419] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(92),
    [422] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1),
    [424] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(452),
    [426] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(211),
    [428] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [430] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(207),
    [432] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_export, 2),
    [434] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [436] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [438] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [440] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [442] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [444] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(44),
    [447] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(471),
    [450] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(465),
    [453] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [455] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [457] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 5),
    [459] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 5),
    [461] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 9),
    [463] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 9),
    [465] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 5),
    [467] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 5),
    [469] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 9),
    [471] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 9),
    [473] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [475] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [477] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [479] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [481] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [483] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [485] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [487] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [489] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [491] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [493] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(127),
    [495] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(316),
    [497] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(450),
    [499] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(449),
    [501] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [503] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(97),
    [505] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(466),
    [507] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(117),
    [509] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [511] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [513] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [515] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(275),
    [518] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [520] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [522] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [524] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3),
    [526] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3),
    [528] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [530] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [532] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5),
    [534] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5),
    [536] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [538] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [540] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [542] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [544] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [546] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [548] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [550] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [552] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [554] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [556] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [558] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1),
    [560] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [562] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [564] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [566] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [568] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [570] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [572] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [574] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [576] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [578] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [580] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [582] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [584] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [586] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [588] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [590] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [592] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [594] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1),
    [596] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1),
    [598] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(402),
    [600] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [602] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [604] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [606] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [608] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [610] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [612] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 7),
    [614] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 7),
    [616] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3),
    [618] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3),
    [620] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4),
    [622] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4),
    [624] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [626] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [628] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [630] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(89),
    [632] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [634] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [636] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [638] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [640] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [642] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [644] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [646] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [648] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(389),
    [650] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(116),
    [652] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [654] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(90),
    [656] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [658] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [660] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [662] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [664] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [666] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(391),
    [668] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [670] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [672] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [674] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [676] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [678] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(158),
    [681] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(436),
    [684] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(435),
    [687] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [689] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [691] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [693] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [695] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [697] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [699] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [701] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [703] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(324),
    [705] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [707] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [709] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [711] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(86),
    [713] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [715] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [717] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [719] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [721] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(54),
    [724] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [726] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [728] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(393),
    [731] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(57),
    [734] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(272),
    [736] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(393),
    [738] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [740] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(310),
    [742] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(279),
    [744] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(322),
    [746] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(319),
    [748] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [750] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [752] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(434),
    [754] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(323),
    [756] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(430),
    [758] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [760] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(371),
    [762] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [764] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(460),
    [766] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [768] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [770] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(291),
    [772] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [774] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(363),
    [776] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(294),
    [778] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [780] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [782] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(212),
    [785] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(432),
    [788] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    [790] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    SHIFT_REPEAT(460),
    [793] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(298),
    [795] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [797] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(174),
    [800] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [802] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [804] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [806] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [808] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [810] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1),
    [812] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1),
    [814] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1),
    [816] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1),
    [818] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(174),
    [820] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [822] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [824] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [826] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [828] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [830] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [832] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(217),
    [834] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(261),
    [836] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [838] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [840] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [842] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [844] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(227),
    [846] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [848] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(322),
    [851] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [853] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(421),
    [855] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [857] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(277),
    [859] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [861] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(261),
    [864] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(261),
    [867] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [869] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(312),
    [871] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(186),
    [874] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [876] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [878] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(448),
    [880] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [882] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(442),
    [884] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [886] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [888] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [890] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [892] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [894] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(152),
    [896] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [898] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(299),
    [900] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [902] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [904] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1),
    [906] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [908] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [910] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [912] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [914] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [916] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [918] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [920] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(227),
    [923] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [925] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 3),
    [927] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(133),
    [929] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(426),
    [931] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [933] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(314),
    [935] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [937] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [939] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [941] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(153),
    [944] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [946] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8),
    [948] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [950] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1),
    [952] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(265),
    [954] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(306),
    [956] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(297),
    [959] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    [961] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    [963] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    SHIFT_REPEAT(306),
    [966] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [968] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [970] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(297),
    [972] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(304),
    [974] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [976] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(381),
    [978] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [980] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(308),
    [982] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [984] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6),
    [986] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(152),
    [989] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [991] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [993] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1),
    [995] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(182),
    [998] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [1000] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(295),
    [1002] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [1004] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(268),
    [1006] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(273),
    [1008] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [1010] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [1012] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(321),
    [1015] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [1017] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [1019] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [1021] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [1023] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [1025] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [1027] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3),
    [1029] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6),
    [1031] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [1033] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4),
    [1035] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 11),
    [1037] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(154),
    [1039] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(251),
    [1041] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [1043] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [1045] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1),
    [1047] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [1049] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [1051] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(397),
    [1053] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(346),
    [1055] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [1057] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [1059] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [1061] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [1063] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [1065] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 11),
    [1067] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(163),
    [1069] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [1071] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [1073] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [1075] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 6),
    [1077] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1),
    [1079] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4),
    [1081] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5),
    [1083] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7),
    [1085] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5),
    [1087] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6),
    [1089] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [1091] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(307),
    [1093] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [1095] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6),
    [1097] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5),
    [1099] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1),
    [1101] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4),
    [1103] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2),
    [1105] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 6),
    [1107] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [1109] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [1111] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [1113] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [1115] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(395),
    [1117] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(394),
    [1119] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [1121] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [1123] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [1125] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [1127] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(221),
    [1129] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [1131] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [1133] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(253),
    [1135] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [1137] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [1139] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(245),
    [1141] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [1143] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [1145] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [1147] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4),
    [1149] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(384),
    [1151] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [1153] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [1155] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(243),
    [1157] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [1159] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [1161] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [1163] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(262),
    [1165] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(416),
    [1167] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(473),
    [1169] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(385),
    [1171] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [1173] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [1175] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [1177] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(107),
    [1179] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1),
    [1181] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [1183] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [1185] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [1187] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [1189] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [1191] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(386),
    [1193] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 4),
    [1195] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [1197] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [1199] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(320),
    [1201] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [1203] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [1205] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [1207] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [1209] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(348),
    [1211] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [1213] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [1215] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(254),
    [1217] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [1219] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [1221] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(164),
    [1223] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [1225] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [1227] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [1229] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(198),
    [1231] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [1233] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(256),
    [1235] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [1237] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(428),
    [1239] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(425),
    [1241] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [1243] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [1245] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(2),
    [1247] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1),
    [1249] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(266),
    [1251] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(244),
    [1253] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [1255] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [1257] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [1259] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [1261] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [1263] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [1265] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(228),
    [1267] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [1269] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(353),
    [1271] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [1273] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [1275] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [1277] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [1279] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [1281] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [1283] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [1285] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(222),
    [1287] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(345),
    [1289] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(472),
    [1291] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [1293] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(424),
    [1295] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1297] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(142),
    [1299] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [1301] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(3),
    [1303] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1305] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1307] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(365),
    [1309] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [1311] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(134),
    [1313] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(374),
    [1315] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1317] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [1319] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(375),
    [1321] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [1323] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1325] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(232),
    [1327] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [1329] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(347),
    [1331] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [1333] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(77),
    [1335] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(240),
    [1337] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [1339] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(364),
    [1341] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [1343] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(257),
    [1345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [1347] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(366),
    [1349] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [1351] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(370),
    [1353] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(387),
    [1355] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(392),
    [1357] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [1359] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(382),
    [1361] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [1363] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1),
    [1365] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(292),
    [1367] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1),
    [1369] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(270),
    [1371] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [1373] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [1375] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(396),
    [1377] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [1379] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [1381] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(116),
    [1383] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [1385] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(454),
    [1387] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [1389] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(467),
    [1391] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(422),
    [1393] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(469),
    [1395] = { .entry = { .count = 1, .reusable = true } },
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
