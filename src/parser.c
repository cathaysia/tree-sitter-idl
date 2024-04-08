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
#define STATE_COUNT 471
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 226
#define ALIAS_COUNT 3
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
    anon_sym_SEMI = 1,
    anon_sym_exception = 2,
    anon_sym_LBRACE = 3,
    anon_sym_RBRACE = 4,
    anon_sym_native = 5,
    anon_sym_module = 6,
    anon_sym_struct = 7,
    anon_sym_COLON = 8,
    anon_sym_PIPE = 9,
    anon_sym_CARET = 10,
    anon_sym_DOLLAR = 11,
    anon_sym_GT_GT = 12,
    anon_sym_LT_LT = 13,
    anon_sym_PLUS = 14,
    anon_sym_DASH = 15,
    anon_sym_STAR = 16,
    anon_sym_SLASH = 17,
    anon_sym_PERCENT = 18,
    anon_sym_TILDE = 19,
    anon_sym_LPAREN = 20,
    anon_sym_RPAREN = 21,
    anon_sym_L = 22,
    anon_sym_DQUOTE = 23,
    aux_sym_string_literal_token1 = 24,
    anon_sym_SQUOTE = 25,
    aux_sym_char_literal_token1 = 26,
    anon_sym_TRUE = 27,
    anon_sym_FALSE = 28,
    anon_sym_default = 29,
    anon_sym_enum = 30,
    anon_sym_COMMA = 31,
    anon_sym_ATdefault_literal = 32,
    anon_sym_ATignore_literal_names = 33,
    anon_sym_ATannotation = 34,
    sym_any_const_type = 35,
    anon_sym_AT = 36,
    anon_sym_LBRACK = 37,
    anon_sym_RBRACK = 38,
    anon_sym_EQ = 39,
    anon_sym_union = 40,
    anon_sym_switch = 41,
    anon_sym_case = 42,
    anon_sym_bitset = 43,
    anon_sym_bitfield = 44,
    anon_sym_LT = 45,
    anon_sym_GT = 46,
    anon_sym_bitmask = 47,
    anon_sym_typedef = 48,
    anon_sym_POUNDdefine = 49,
    aux_sym_predefine_token1 = 50,
    anon_sym_interface = 51,
    anon_sym_local = 52,
    anon_sym_void = 53,
    anon_sym_in = 54,
    anon_sym_out = 55,
    anon_sym_inout = 56,
    anon_sym_raises = 57,
    anon_sym_readonly = 58,
    anon_sym_attribute = 59,
    anon_sym_getraises = 60,
    anon_sym_setraises = 61,
    sym_dds_service = 62,
    anon_sym_ATDDSRequestTopic = 63,
    anon_sym_name = 64,
    anon_sym_ATDDSReplyTopic = 65,
    anon_sym_const = 66,
    anon_sym_fixed = 67,
    sym_number_literal = 68,
    sym_optional = 69,
    sym_key = 70,
    sym_must_understand = 71,
    sym_non_serialized = 72,
    sym_id = 73,
    sym_external = 74,
    anon_sym_AThashid = 75,
    anon_sym_LPAREN_DQUOTE = 76,
    anon_sym_ATtry_construct = 77,
    sym_final = 78,
    anon_sym_ATdata_representation = 79,
    anon_sym_XCDR = 80,
    anon_sym_XCDR2 = 81,
    sym_boolean_type = 82,
    sym_octet_type = 83,
    sym_signed_short_int = 84,
    sym_signed_long_int = 85,
    sym_signed_longlong_int = 86,
    sym_unsigned_short_int = 87,
    sym_unsigned_long_int = 88,
    sym_unsigned_longlong_int = 89,
    anon_sym_float = 90,
    anon_sym_double = 91,
    anon_sym_longdouble = 92,
    anon_sym_char = 93,
    anon_sym_wchar = 94,
    anon_sym_COLON_COLON = 95,
    sym_identifier = 96,
    anon_sym_sequence = 97,
    anon_sym_string = 98,
    anon_sym_wstring = 99,
    anon_sym_map = 100,
    anon_sym_SLASH_SLASH = 101,
    aux_sym_comment_token1 = 102,
    sym__eof = 103,
    sym_specification = 104,
    sym__definition = 105,
    sym_except_dcl = 106,
    sym_native_dcl = 107,
    sym_module_dcl = 108,
    sym_struct_forward_dcl = 109,
    sym_struct_def = 110,
    sym_member = 111,
    sym_or_expr = 112,
    sym_xor_expr = 113,
    sym_and_expr = 114,
    sym_shift_expr = 115,
    sym_add_expr = 116,
    sym_mult_expr = 117,
    sym_unary_expr = 118,
    sym_unary_operator = 119,
    sym_literal = 120,
    sym_string_literal = 121,
    sym_char_literal = 122,
    sym_default = 123,
    sym_enum_dcl = 124,
    sym_enumerator = 125,
    sym_enum_modifier = 126,
    sym_enum_anno = 127,
    sym_annotation_dcl = 128,
    sym_annotation_body = 129,
    sym_annotation_member = 130,
    sym_annotation_member_type = 131,
    sym_union_forward_dcl = 132,
    sym_union_def = 133,
    sym_case = 134,
    sym_case_label = 135,
    sym_element_spec = 136,
    sym_switch_type_spec = 137,
    sym_bitset_dcl = 138,
    sym_bitfield = 139,
    sym_bitfield_spec = 140,
    sym_destination_type = 141,
    sym_bitmask_dcl = 142,
    sym_bit_value = 143,
    sym_typedef_dcl = 144,
    sym_predefine = 145,
    sym_interface_dcl = 146,
    sym_interface_forward_dcl = 147,
    sym_interface_def = 148,
    sym_interface_header = 149,
    sym_interface_inheritance_spec = 150,
    sym_interface_name = 151,
    sym_interface_body = 152,
    sym_export = 153,
    sym_op_dcl = 154,
    sym_op_type_spec = 155,
    sym_parameter_dcls = 156,
    sym_param_dcl = 157,
    sym_param_attribute = 158,
    sym_raises_expr = 159,
    sym_attr_dcl = 160,
    sym_readonly_attr_spec = 161,
    sym_readonly_attr_declarator = 162,
    sym_attr_spec = 163,
    sym_attr_declarator = 164,
    sym_attr_raises_expr = 165,
    sym_get_excep_expr = 166,
    sym_set_excep_expr = 167,
    sym_exception_list = 168,
    sym_dds_request_topic = 169,
    sym_dds_reply_topic = 170,
    sym_interface_anno = 171,
    sym_const_dcl = 172,
    sym_const_type = 173,
    sym_fixed_pt_const_type = 174,
    sym_const_expr = 175,
    sym_hashid = 176,
    sym_try_construct = 177,
    sym_data_representation = 178,
    sym_struct_modifier = 179,
    sym_integer_type = 180,
    sym_signed_int = 181,
    sym_unsigned_int = 182,
    sym_floating_pt_type = 183,
    sym_char_type = 184,
    sym_scoped_name = 185,
    sym_simple_type_spec = 186,
    sym_base_type_spec = 187,
    sym_type_spec = 188,
    sym_simple_declarator = 189,
    sym_declarator = 190,
    sym_declarators = 191,
    sym_array_declarator = 192,
    sym_positive_int_const = 193,
    sym_fixed_array_size = 194,
    sym_sequence_type = 195,
    sym_string_type = 196,
    sym_fixed_pt_type = 197,
    sym_template_type_spec = 198,
    sym_map_type = 199,
    sym_type_declarator = 200,
    sym_any_declarators = 201,
    sym_any_declarator = 202,
    sym_comment = 203,
    aux_sym_specification_repeat1 = 204,
    aux_sym_except_dcl_repeat1 = 205,
    aux_sym_struct_def_repeat1 = 206,
    aux_sym_member_repeat1 = 207,
    aux_sym_enum_dcl_repeat1 = 208,
    aux_sym_enumerator_repeat1 = 209,
    aux_sym_annotation_body_repeat1 = 210,
    aux_sym_union_def_repeat1 = 211,
    aux_sym_bitset_dcl_repeat1 = 212,
    aux_sym_bitfield_repeat1 = 213,
    aux_sym_bitmask_dcl_repeat1 = 214,
    aux_sym_interface_def_repeat1 = 215,
    aux_sym_interface_inheritance_spec_repeat1 = 216,
    aux_sym_interface_body_repeat1 = 217,
    aux_sym_parameter_dcls_repeat1 = 218,
    aux_sym_raises_expr_repeat1 = 219,
    aux_sym_readonly_attr_declarator_repeat1 = 220,
    aux_sym_attr_raises_expr_repeat1 = 221,
    aux_sym_data_representation_repeat1 = 222,
    aux_sym_declarators_repeat1 = 223,
    aux_sym_array_declarator_repeat1 = 224,
    aux_sym_any_declarators_repeat1 = 225,
    alias_sym_data_rep = 226,
    alias_sym_hashid_value = 227,
    alias_sym_try_construct_value = 228,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [anon_sym_SEMI] = ";",
    [anon_sym_exception] = "exception",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_native] = "native",
    [anon_sym_module] = "module",
    [anon_sym_struct] = "struct",
    [anon_sym_COLON] = ":",
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
    [anon_sym_TILDE] = "~",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_L] = "L",
    [anon_sym_DQUOTE] = "\"",
    [aux_sym_string_literal_token1] = "string_literal_token1",
    [anon_sym_SQUOTE] = "'",
    [aux_sym_char_literal_token1] = "char_literal_token1",
    [anon_sym_TRUE] = "TRUE",
    [anon_sym_FALSE] = "FALSE",
    [anon_sym_default] = "default",
    [anon_sym_enum] = "enum",
    [anon_sym_COMMA] = ",",
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
    [anon_sym_LT] = "<",
    [anon_sym_GT] = ">",
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
    [anon_sym_fixed] = "fixed",
    [sym_number_literal] = "number_literal",
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
    [sym_boolean_type] = "boolean_type",
    [sym_octet_type] = "octet_type",
    [sym_signed_short_int] = "signed_short_int",
    [sym_signed_long_int] = "signed_long_int",
    [sym_signed_longlong_int] = "signed_longlong_int",
    [sym_unsigned_short_int] = "unsigned_short_int",
    [sym_unsigned_long_int] = "unsigned_long_int",
    [sym_unsigned_longlong_int] = "unsigned_longlong_int",
    [anon_sym_float] = "float",
    [anon_sym_double] = "double",
    [anon_sym_longdouble] = "long double",
    [anon_sym_char] = "char",
    [anon_sym_wchar] = "wchar",
    [anon_sym_COLON_COLON] = "::",
    [sym_identifier] = "identifier",
    [anon_sym_sequence] = "sequence",
    [anon_sym_string] = "string",
    [anon_sym_wstring] = "wstring",
    [anon_sym_map] = "map",
    [anon_sym_SLASH_SLASH] = "//",
    [aux_sym_comment_token1] = "comment_token1",
    [sym__eof] = "_eof",
    [sym_specification] = "specification",
    [sym__definition] = "_definition",
    [sym_except_dcl] = "except_dcl",
    [sym_native_dcl] = "native_dcl",
    [sym_module_dcl] = "module_dcl",
    [sym_struct_forward_dcl] = "struct_forward_dcl",
    [sym_struct_def] = "struct_def",
    [sym_member] = "member",
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
    [sym_fixed_pt_const_type] = "fixed_pt_const_type",
    [sym_const_expr] = "const_expr",
    [sym_hashid] = "hashid",
    [sym_try_construct] = "try_construct",
    [sym_data_representation] = "data_representation",
    [sym_struct_modifier] = "struct_modifier",
    [sym_integer_type] = "integer_type",
    [sym_signed_int] = "signed_int",
    [sym_unsigned_int] = "unsigned_int",
    [sym_floating_pt_type] = "floating_pt_type",
    [sym_char_type] = "char_type",
    [sym_scoped_name] = "scoped_name",
    [sym_simple_type_spec] = "simple_type_spec",
    [sym_base_type_spec] = "base_type_spec",
    [sym_type_spec] = "type_spec",
    [sym_simple_declarator] = "simple_declarator",
    [sym_declarator] = "declarator",
    [sym_declarators] = "declarators",
    [sym_array_declarator] = "array_declarator",
    [sym_positive_int_const] = "positive_int_const",
    [sym_fixed_array_size] = "fixed_array_size",
    [sym_sequence_type] = "sequence_type",
    [sym_string_type] = "string_type",
    [sym_fixed_pt_type] = "fixed_pt_type",
    [sym_template_type_spec] = "template_type_spec",
    [sym_map_type] = "map_type",
    [sym_type_declarator] = "type_declarator",
    [sym_any_declarators] = "any_declarators",
    [sym_any_declarator] = "any_declarator",
    [sym_comment] = "comment",
    [aux_sym_specification_repeat1] = "specification_repeat1",
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
    [anon_sym_SEMI] = anon_sym_SEMI,
    [anon_sym_exception] = anon_sym_exception,
    [anon_sym_LBRACE] = anon_sym_LBRACE,
    [anon_sym_RBRACE] = anon_sym_RBRACE,
    [anon_sym_native] = anon_sym_native,
    [anon_sym_module] = anon_sym_module,
    [anon_sym_struct] = anon_sym_struct,
    [anon_sym_COLON] = anon_sym_COLON,
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
    [anon_sym_TILDE] = anon_sym_TILDE,
    [anon_sym_LPAREN] = anon_sym_LPAREN,
    [anon_sym_RPAREN] = anon_sym_RPAREN,
    [anon_sym_L] = anon_sym_L,
    [anon_sym_DQUOTE] = anon_sym_DQUOTE,
    [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
    [anon_sym_SQUOTE] = anon_sym_SQUOTE,
    [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
    [anon_sym_TRUE] = anon_sym_TRUE,
    [anon_sym_FALSE] = anon_sym_FALSE,
    [anon_sym_default] = anon_sym_default,
    [anon_sym_enum] = anon_sym_enum,
    [anon_sym_COMMA] = anon_sym_COMMA,
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
    [anon_sym_LT] = anon_sym_LT,
    [anon_sym_GT] = anon_sym_GT,
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
    [anon_sym_fixed] = anon_sym_fixed,
    [sym_number_literal] = sym_number_literal,
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
    [sym_boolean_type] = sym_boolean_type,
    [sym_octet_type] = sym_octet_type,
    [sym_signed_short_int] = sym_signed_short_int,
    [sym_signed_long_int] = sym_signed_long_int,
    [sym_signed_longlong_int] = sym_signed_longlong_int,
    [sym_unsigned_short_int] = sym_unsigned_short_int,
    [sym_unsigned_long_int] = sym_unsigned_long_int,
    [sym_unsigned_longlong_int] = sym_unsigned_longlong_int,
    [anon_sym_float] = anon_sym_float,
    [anon_sym_double] = anon_sym_double,
    [anon_sym_longdouble] = anon_sym_longdouble,
    [anon_sym_char] = anon_sym_char,
    [anon_sym_wchar] = anon_sym_wchar,
    [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
    [sym_identifier] = sym_identifier,
    [anon_sym_sequence] = anon_sym_sequence,
    [anon_sym_string] = anon_sym_string,
    [anon_sym_wstring] = anon_sym_wstring,
    [anon_sym_map] = anon_sym_map,
    [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
    [aux_sym_comment_token1] = aux_sym_comment_token1,
    [sym__eof] = sym__eof,
    [sym_specification] = sym_specification,
    [sym__definition] = sym__definition,
    [sym_except_dcl] = sym_except_dcl,
    [sym_native_dcl] = sym_native_dcl,
    [sym_module_dcl] = sym_module_dcl,
    [sym_struct_forward_dcl] = sym_struct_forward_dcl,
    [sym_struct_def] = sym_struct_def,
    [sym_member] = sym_member,
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
    [sym_fixed_pt_const_type] = sym_fixed_pt_const_type,
    [sym_const_expr] = sym_const_expr,
    [sym_hashid] = sym_hashid,
    [sym_try_construct] = sym_try_construct,
    [sym_data_representation] = sym_data_representation,
    [sym_struct_modifier] = sym_struct_modifier,
    [sym_integer_type] = sym_integer_type,
    [sym_signed_int] = sym_signed_int,
    [sym_unsigned_int] = sym_unsigned_int,
    [sym_floating_pt_type] = sym_floating_pt_type,
    [sym_char_type] = sym_char_type,
    [sym_scoped_name] = sym_scoped_name,
    [sym_simple_type_spec] = sym_simple_type_spec,
    [sym_base_type_spec] = sym_base_type_spec,
    [sym_type_spec] = sym_type_spec,
    [sym_simple_declarator] = sym_simple_declarator,
    [sym_declarator] = sym_declarator,
    [sym_declarators] = sym_declarators,
    [sym_array_declarator] = sym_array_declarator,
    [sym_positive_int_const] = sym_positive_int_const,
    [sym_fixed_array_size] = sym_fixed_array_size,
    [sym_sequence_type] = sym_sequence_type,
    [sym_string_type] = sym_string_type,
    [sym_fixed_pt_type] = sym_fixed_pt_type,
    [sym_template_type_spec] = sym_template_type_spec,
    [sym_map_type] = sym_map_type,
    [sym_type_declarator] = sym_type_declarator,
    [sym_any_declarators] = sym_any_declarators,
    [sym_any_declarator] = sym_any_declarator,
    [sym_comment] = sym_comment,
    [aux_sym_specification_repeat1] = aux_sym_specification_repeat1,
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
    [anon_sym_TILDE] = {
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
    [anon_sym_default] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_enum] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COMMA] = {
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
    [anon_sym_LT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_GT] = {
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
    [anon_sym_fixed] = {
        .visible = true,
        .named = false,
    },
    [sym_number_literal] = {
        .visible = true,
        .named = true,
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
    [sym_boolean_type] = {
        .visible = true,
        .named = true,
    },
    [sym_octet_type] = {
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
    [sym_identifier] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_sequence] = {
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
    [anon_sym_map] = {
        .visible = true,
        .named = false,
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
    [sym_fixed_pt_const_type] = {
        .visible = true,
        .named = true,
    },
    [sym_const_expr] = {
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
    [sym_integer_type] = {
        .visible = true,
        .named = true,
    },
    [sym_signed_int] = {
        .visible = true,
        .named = true,
    },
    [sym_unsigned_int] = {
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
    [sym_simple_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_base_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_type_spec] = {
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
    [sym_sequence_type] = {
        .visible = true,
        .named = true,
    },
    [sym_string_type] = {
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
    [sym_map_type] = {
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
    field_identifier = 1,
    field_parent = 2,
    field_type = 3,
    field_value = 4,
};

static const char *const ts_field_names[] = {
    [0] = NULL,
    [field_identifier] = "identifier",
    [field_parent] = "parent",
    [field_type] = "type",
    [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
    [3] = { .index = 0, .length = 2 },
    [4] = { .index = 2, .length = 1 },
    [5] = { .index = 3, .length = 1 },
    [7] = { .index = 4, .length = 2 },
    [8] = { .index = 6, .length = 1 },
    [9] = { .index = 7, .length = 1 },
};

static const TSFieldMapEntry ts_field_map_entries[] = {
    [0] = { field_identifier, 1 },
    { field_type, 0 },
    [2] = { field_parent, 3 },
    [3] = { field_value, 1 },
    [4] = { field_identifier, 2 },
    { field_type, 1 },
    [6] = { field_value, 2 },
    [7] = { field_parent, 4 },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
    [1] = {
        [2] = alias_sym_data_rep,
    },
    [2] = {
        [1] = alias_sym_try_construct_value,
    },
    [6] = {
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
    [36] = 35,
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
    [53] = 52,
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
    [64] = 64,
    [65] = 65,
    [66] = 66,
    [67] = 67,
    [68] = 68,
    [69] = 69,
    [70] = 69,
    [71] = 71,
    [72] = 72,
    [73] = 73,
    [74] = 74,
    [75] = 72,
    [76] = 76,
    [77] = 76,
    [78] = 78,
    [79] = 79,
    [80] = 80,
    [81] = 80,
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
    [92] = 83,
    [93] = 93,
    [94] = 94,
    [95] = 95,
    [96] = 96,
    [97] = 97,
    [98] = 98,
    [99] = 99,
    [100] = 98,
    [101] = 101,
    [102] = 102,
    [103] = 103,
    [104] = 87,
    [105] = 105,
    [106] = 79,
    [107] = 78,
    [108] = 96,
    [109] = 101,
    [110] = 110,
    [111] = 111,
    [112] = 112,
    [113] = 99,
    [114] = 111,
    [115] = 115,
    [116] = 116,
    [117] = 117,
    [118] = 118,
    [119] = 119,
    [120] = 103,
    [121] = 121,
    [122] = 102,
    [123] = 123,
    [124] = 124,
    [125] = 125,
    [126] = 126,
    [127] = 127,
    [128] = 128,
    [129] = 129,
    [130] = 128,
    [131] = 131,
    [132] = 132,
    [133] = 133,
    [134] = 110,
    [135] = 135,
    [136] = 136,
    [137] = 112,
    [138] = 136,
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
    [159] = 117,
    [160] = 116,
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
    [227] = 227,
    [228] = 228,
    [229] = 229,
    [230] = 230,
    [231] = 231,
    [232] = 232,
    [233] = 189,
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
    [248] = 123,
    [249] = 249,
    [250] = 250,
    [251] = 79,
    [252] = 78,
    [253] = 253,
    [254] = 121,
    [255] = 253,
    [256] = 222,
    [257] = 257,
    [258] = 258,
    [259] = 259,
    [260] = 244,
    [261] = 261,
    [262] = 262,
    [263] = 263,
    [264] = 264,
    [265] = 265,
    [266] = 127,
    [267] = 267,
    [268] = 239,
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
    [420] = 239,
    [421] = 421,
    [422] = 422,
    [423] = 423,
    [424] = 424,
    [425] = 425,
    [426] = 426,
    [427] = 321,
    [428] = 428,
    [429] = 429,
    [430] = 430,
    [431] = 300,
    [432] = 432,
    [433] = 433,
    [434] = 434,
    [435] = 435,
    [436] = 436,
    [437] = 437,
    [438] = 438,
    [439] = 292,
    [440] = 436,
    [441] = 441,
    [442] = 442,
    [443] = 443,
    [444] = 444,
    [445] = 306,
    [446] = 446,
    [447] = 447,
    [448] = 448,
    [449] = 425,
    [450] = 450,
    [451] = 383,
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
    [463] = 425,
    [464] = 432,
    [465] = 407,
    [466] = 382,
    [467] = 459,
    [468] = 468,
    [469] = 402,
    [470] = 470,
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
                ADVANCE(425);
            if(lookahead == '"')
                ADVANCE(452);
            if(lookahead == '#')
                ADVANCE(116);
            if(lookahead == '$')
                ADVANCE(437);
            if(lookahead == '%')
                ADVANCE(446);
            if(lookahead == '\'')
                ADVANCE(454);
            if(lookahead == '(')
                ADVANCE(448);
            if(lookahead == ')')
                ADVANCE(449);
            if(lookahead == '*')
                ADVANCE(444);
            if(lookahead == '+')
                ADVANCE(440);
            if(lookahead == ',')
                ADVANCE(482);
            if(lookahead == '-')
                ADVANCE(442);
            if(lookahead == '/')
                ADVANCE(445);
            if(lookahead == ':')
                ADVANCE(434);
            if(lookahead == ';')
                ADVANCE(426);
            if(lookahead == '<')
                ADVANCE(500);
            if(lookahead == '=')
                ADVANCE(491);
            if(lookahead == '>')
                ADVANCE(502);
            if(lookahead == '@')
                ADVANCE(488);
            if(lookahead == 'F')
                ADVANCE(456);
            if(lookahead == 'L')
                ADVANCE(450);
            if(lookahead == 'T')
                ADVANCE(458);
            if(lookahead == 'X')
                ADVANCE(457);
            if(lookahead == '[')
                ADVANCE(489);
            if(lookahead == '\\')
                SKIP(421)
            if(lookahead == ']')
                ADVANCE(490);
            if(lookahead == '^')
                ADVANCE(436);
            if(lookahead == 'a')
                ADVANCE(470);
            if(lookahead == 'b')
                ADVANCE(469);
            if(lookahead == 'c')
                ADVANCE(459);
            if(lookahead == 'd')
                ADVANCE(465);
            if(lookahead == 'e')
                ADVANCE(473);
            if(lookahead == 'f')
                ADVANCE(468);
            if(lookahead == 'g')
                ADVANCE(467);
            if(lookahead == 'i')
                ADVANCE(471);
            if(lookahead == 'l')
                ADVANCE(474);
            if(lookahead == 'm')
                ADVANCE(460);
            if(lookahead == 'n')
                ADVANCE(461);
            if(lookahead == 'o')
                ADVANCE(464);
            if(lookahead == 'r')
                ADVANCE(462);
            if(lookahead == 's')
                ADVANCE(466);
            if(lookahead == 't')
                ADVANCE(476);
            if(lookahead == 'u')
                ADVANCE(472);
            if(lookahead == 'v')
                ADVANCE(475);
            if(lookahead == 'w')
                ADVANCE(463);
            if(lookahead == '{')
                ADVANCE(428);
            if(lookahead == '|')
                ADVANCE(435);
            if(lookahead == '}')
                ADVANCE(429);
            if(lookahead == '~')
                ADVANCE(447);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(455);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(37)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(37)
            if(lookahead == '\r')
                SKIP(1)
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(40)
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(40)
            if(lookahead == '\r')
                SKIP(3)
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(42)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(42)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(41)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(41)
            if(lookahead == '\r')
                SKIP(7)
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(43)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(43)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(31)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(31)
            if(lookahead == '\r')
                SKIP(11)
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(33)
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(33)
            if(lookahead == '\r')
                SKIP(13)
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(44)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(44)
            if(lookahead == '\r')
                SKIP(15)
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(34)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(34)
            if(lookahead == '\r')
                SKIP(17)
            END_STATE();
        case 19:
            if(lookahead == '\n')
                SKIP(35)
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(35)
            if(lookahead == '\r')
                SKIP(19)
            END_STATE();
        case 21:
            if(lookahead == '\n')
                SKIP(36)
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(36)
            if(lookahead == '\r')
                SKIP(21)
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(45)
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(45)
            if(lookahead == '\r')
                SKIP(23)
            END_STATE();
        case 25:
            if(lookahead == '\n')
                SKIP(46)
            END_STATE();
        case 26:
            if(lookahead == '\n')
                SKIP(46)
            if(lookahead == '\r')
                SKIP(25)
            END_STATE();
        case 27:
            if(lookahead == '\n')
                ADVANCE(723);
            if(lookahead == '\r')
                ADVANCE(722);
            if(lookahead == '\\')
                ADVANCE(726);
            if(lookahead != 0)
                ADVANCE(725);
            END_STATE();
        case 28:
            if(lookahead == '\n')
                SKIP(47)
            END_STATE();
        case 29:
            if(lookahead == '\n')
                SKIP(47)
            if(lookahead == '\r')
                SKIP(28)
            END_STATE();
        case 30:
            if(lookahead == ' ')
                ADVANCE(244);
            END_STATE();
        case 31:
            if(lookahead == '"')
                ADVANCE(452);
            if(lookahead == '\'')
                ADVANCE(454);
            if(lookahead == '(')
                ADVANCE(448);
            if(lookahead == '+')
                ADVANCE(441);
            if(lookahead == '-')
                ADVANCE(443);
            if(lookahead == '.')
                ADVANCE(414);
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == '0')
                ADVANCE(539);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == 'L')
                ADVANCE(451);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == '~')
                ADVANCE(447);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(31)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(543);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 32:
            if(lookahead == '"')
                ADVANCE(569);
            END_STATE();
        case 33:
            if(lookahead == '$')
                ADVANCE(437);
            if(lookahead == '%')
                ADVANCE(446);
            if(lookahead == ')')
                ADVANCE(449);
            if(lookahead == '*')
                ADVANCE(444);
            if(lookahead == '+')
                ADVANCE(440);
            if(lookahead == ',')
                ADVANCE(482);
            if(lookahead == '-')
                ADVANCE(442);
            if(lookahead == '/')
                ADVANCE(445);
            if(lookahead == ':')
                ADVANCE(434);
            if(lookahead == ';')
                ADVANCE(426);
            if(lookahead == '<')
                ADVANCE(49);
            if(lookahead == '>')
                ADVANCE(502);
            if(lookahead == '@')
                ADVANCE(131);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == ']')
                ADVANCE(490);
            if(lookahead == '^')
                ADVANCE(436);
            if(lookahead == '{')
                ADVANCE(428);
            if(lookahead == '|')
                ADVANCE(435);
            if(lookahead == '}')
                ADVANCE(429);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(33)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 34:
            if(lookahead == '$')
                ADVANCE(437);
            if(lookahead == '%')
                ADVANCE(446);
            if(lookahead == '*')
                ADVANCE(444);
            if(lookahead == '+')
                ADVANCE(440);
            if(lookahead == '-')
                ADVANCE(442);
            if(lookahead == '/')
                ADVANCE(445);
            if(lookahead == '<')
                ADVANCE(49);
            if(lookahead == '>')
                ADVANCE(50);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == '^')
                ADVANCE(436);
            if(lookahead == 't')
                ADVANCE(708);
            if(lookahead == '|')
                ADVANCE(435);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(34)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 35:
            if(lookahead == '$')
                ADVANCE(437);
            if(lookahead == ')')
                ADVANCE(449);
            if(lookahead == ',')
                ADVANCE(482);
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(434);
            if(lookahead == ';')
                ADVANCE(426);
            if(lookahead == '>')
                ADVANCE(501);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == ']')
                ADVANCE(490);
            if(lookahead == '^')
                ADVANCE(436);
            if(lookahead == 'i')
                ADVANCE(250);
            if(lookahead == 'o')
                ADVANCE(391);
            if(lookahead == '|')
                ADVANCE(435);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(35)
            END_STATE();
        case 36:
            if(lookahead == ')')
                ADVANCE(449);
            if(lookahead == ',')
                ADVANCE(482);
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == '<')
                ADVANCE(499);
            if(lookahead == '>')
                ADVANCE(501);
            if(lookahead == '\\')
                SKIP(22)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(36)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 37:
            if(lookahead == ',')
                ADVANCE(482);
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == '<')
                ADVANCE(499);
            if(lookahead == '>')
                ADVANCE(501);
            if(lookahead == '@')
                ADVANCE(146);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(490);
            if(lookahead == 'b')
                ADVANCE(675);
            if(lookahead == 'c')
                ADVANCE(640);
            if(lookahead == 'd')
                ADVANCE(669);
            if(lookahead == 'f')
                ADVANCE(643);
            if(lookahead == 'l')
                ADVANCE(671);
            if(lookahead == 'm')
                ADVANCE(601);
            if(lookahead == 'o')
                ADVANCE(609);
            if(lookahead == 's')
                ADVANCE(620);
            if(lookahead == 'u')
                ADVANCE(656);
            if(lookahead == 'w')
                ADVANCE(613);
            if(lookahead == '}')
                ADVANCE(429);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(37)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 38:
            if(lookahead == '.')
                ADVANCE(414);
            if(lookahead == '0')
                ADVANCE(536);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(538);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(552);
            END_STATE();
        case 39:
            if(lookahead == '/')
                ADVANCE(719);
            END_STATE();
        case 40:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(130);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'b')
                ADVANCE(675);
            if(lookahead == 'c')
                ADVANCE(640);
            if(lookahead == 'd')
                ADVANCE(669);
            if(lookahead == 'e')
                ADVANCE(664);
            if(lookahead == 'f')
                ADVANCE(643);
            if(lookahead == 'l')
                ADVANCE(671);
            if(lookahead == 'm')
                ADVANCE(601);
            if(lookahead == 'o')
                ADVANCE(609);
            if(lookahead == 's')
                ADVANCE(621);
            if(lookahead == 'u')
                ADVANCE(659);
            if(lookahead == 'w')
                ADVANCE(613);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(40)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 41:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == '@')
                ADVANCE(215);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'a')
                ADVANCE(663);
            if(lookahead == 'b')
                ADVANCE(675);
            if(lookahead == 'c')
                ADVANCE(640);
            if(lookahead == 'd')
                ADVANCE(669);
            if(lookahead == 'e')
                ADVANCE(664);
            if(lookahead == 'f')
                ADVANCE(643);
            if(lookahead == 'l')
                ADVANCE(671);
            if(lookahead == 'o')
                ADVANCE(609);
            if(lookahead == 's')
                ADVANCE(620);
            if(lookahead == 'u')
                ADVANCE(656);
            if(lookahead == 'w')
                ADVANCE(613);
            if(lookahead == '}')
                ADVANCE(429);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(41)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 42:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(698);
            if(lookahead == 'b')
                ADVANCE(675);
            if(lookahead == 'c')
                ADVANCE(640);
            if(lookahead == 'd')
                ADVANCE(669);
            if(lookahead == 'f')
                ADVANCE(643);
            if(lookahead == 'l')
                ADVANCE(671);
            if(lookahead == 'm')
                ADVANCE(601);
            if(lookahead == 'o')
                ADVANCE(609);
            if(lookahead == 'r')
                ADVANCE(631);
            if(lookahead == 's')
                ADVANCE(620);
            if(lookahead == 'u')
                ADVANCE(656);
            if(lookahead == 'v')
                ADVANCE(674);
            if(lookahead == 'w')
                ADVANCE(613);
            if(lookahead == '}')
                ADVANCE(429);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(42)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 43:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == 'b')
                ADVANCE(675);
            if(lookahead == 'c')
                ADVANCE(640);
            if(lookahead == 'd')
                ADVANCE(669);
            if(lookahead == 'f')
                ADVANCE(643);
            if(lookahead == 'l')
                ADVANCE(671);
            if(lookahead == 'o')
                ADVANCE(609);
            if(lookahead == 's')
                ADVANCE(620);
            if(lookahead == 'u')
                ADVANCE(656);
            if(lookahead == 'w')
                ADVANCE(613);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(43)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 44:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ':')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == 'b')
                ADVANCE(675);
            if(lookahead == 'c')
                ADVANCE(640);
            if(lookahead == 'l')
                ADVANCE(678);
            if(lookahead == 's')
                ADVANCE(641);
            if(lookahead == 'u')
                ADVANCE(656);
            if(lookahead == 'w')
                ADVANCE(614);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(44)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 45:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == ';')
                ADVANCE(426);
            if(lookahead == '\\')
                SKIP(24)
            if(lookahead == 's')
                ADVANCE(704);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(45)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 46:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == '\\')
                SKIP(26)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(46)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(453);
            END_STATE();
        case 47:
            if(lookahead == '/')
                ADVANCE(39);
            if(lookahead == '\\')
                SKIP(29)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(47)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(455);
            END_STATE();
        case 48:
            if(lookahead == ':')
                ADVANCE(598);
            END_STATE();
        case 49:
            if(lookahead == '<')
                ADVANCE(439);
            END_STATE();
        case 50:
            if(lookahead == '>')
                ADVANCE(438);
            END_STATE();
        case 51:
            if(lookahead == 'C')
                ADVANCE(52);
            END_STATE();
        case 52:
            if(lookahead == 'D')
                ADVANCE(58);
            END_STATE();
        case 53:
            if(lookahead == 'D')
                ADVANCE(54);
            if(lookahead == 'a')
                ADVANCE(270);
            if(lookahead == 'd')
                ADVANCE(92);
            if(lookahead == 'f')
                ADVANCE(211);
            if(lookahead == 'i')
                ADVANCE(192);
            END_STATE();
        case 54:
            if(lookahead == 'D')
                ADVANCE(60);
            END_STATE();
        case 55:
            if(lookahead == 'E')
                ADVANCE(477);
            END_STATE();
        case 56:
            if(lookahead == 'E')
                ADVANCE(478);
            END_STATE();
        case 57:
            if(lookahead == 'L')
                ADVANCE(61);
            END_STATE();
        case 58:
            if(lookahead == 'R')
                ADVANCE(573);
            END_STATE();
        case 59:
            if(lookahead == 'R')
                ADVANCE(142);
            if(lookahead == 'S')
                ADVANCE(164);
            END_STATE();
        case 60:
            if(lookahead == 'S')
                ADVANCE(59);
            END_STATE();
        case 61:
            if(lookahead == 'S')
                ADVANCE(56);
            END_STATE();
        case 62:
            if(lookahead == 'T')
                ADVANCE(286);
            END_STATE();
        case 63:
            if(lookahead == 'T')
                ADVANCE(296);
            END_STATE();
        case 64:
            if(lookahead == 'U')
                ADVANCE(55);
            END_STATE();
        case 65:
            if(lookahead == '_')
                ADVANCE(110);
            END_STATE();
        case 66:
            if(lookahead == '_')
                ADVANCE(243);
            END_STATE();
        case 67:
            if(lookahead == '_')
                ADVANCE(394);
            END_STATE();
        case 68:
            if(lookahead == '_')
                ADVANCE(330);
            END_STATE();
        case 69:
            if(lookahead == '_')
                ADVANCE(271);
            END_STATE();
        case 70:
            if(lookahead == '_')
                ADVANCE(349);
            END_STATE();
        case 71:
            if(lookahead == '_')
                ADVANCE(246);
            END_STATE();
        case 72:
            if(lookahead == 'a')
                ADVANCE(339);
            if(lookahead == 'o')
                ADVANCE(257);
            END_STATE();
        case 73:
            if(lookahead == 'a')
                ADVANCE(248);
            END_STATE();
        case 74:
            if(lookahead == 'a')
                ADVANCE(213);
            END_STATE();
        case 75:
            if(lookahead == 'a')
                ADVANCE(68);
            END_STATE();
        case 76:
            if(lookahead == 'a')
                ADVANCE(226);
            END_STATE();
        case 77:
            if(lookahead == 'a')
                ADVANCE(249);
            END_STATE();
        case 78:
            if(lookahead == 'a')
                ADVANCE(126);
            END_STATE();
        case 79:
            if(lookahead == 'a')
                ADVANCE(334);
            END_STATE();
        case 80:
            if(lookahead == 'a')
                ADVANCE(313);
            END_STATE();
        case 81:
            if(lookahead == 'a')
                ADVANCE(390);
            END_STATE();
        case 82:
            if(lookahead == 'a')
                ADVANCE(314);
            END_STATE();
        case 83:
            if(lookahead == 'a')
                ADVANCE(355);
            END_STATE();
        case 84:
            if(lookahead == 'a')
                ADVANCE(227);
            END_STATE();
        case 85:
            if(lookahead == 'a')
                ADVANCE(340);
            END_STATE();
        case 86:
            if(lookahead == 'a')
                ADVANCE(253);
            END_STATE();
        case 87:
            if(lookahead == 'a')
                ADVANCE(232);
            END_STATE();
        case 88:
            if(lookahead == 'a')
                ADVANCE(228);
            END_STATE();
        case 89:
            if(lookahead == 'a')
                ADVANCE(229);
            END_STATE();
        case 90:
            if(lookahead == 'a')
                ADVANCE(240);
            END_STATE();
        case 91:
            if(lookahead == 'a')
                ADVANCE(230);
            END_STATE();
        case 92:
            if(lookahead == 'a')
                ADVANCE(369);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(268);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(397);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(114);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(217);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(380);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(219);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(382);
            END_STATE();
        case 100:
            if(lookahead == 'b')
                ADVANCE(396);
            END_STATE();
        case 101:
            if(lookahead == 'b')
                ADVANCE(237);
            END_STATE();
        case 102:
            if(lookahead == 'b')
                ADVANCE(241);
            END_STATE();
        case 103:
            if(lookahead == 'c')
                ADVANCE(528);
            END_STATE();
        case 104:
            if(lookahead == 'c')
                ADVANCE(526);
            END_STATE();
        case 105:
            if(lookahead == 'c')
                ADVANCE(193);
            END_STATE();
        case 106:
            if(lookahead == 'c')
                ADVANCE(149);
            END_STATE();
        case 107:
            if(lookahead == 'c')
                ADVANCE(367);
            END_STATE();
        case 108:
            if(lookahead == 'c')
                ADVANCE(76);
            if(lookahead == 'n')
                ADVANCE(184);
            END_STATE();
        case 109:
            if(lookahead == 'c')
                ADVANCE(76);
            if(lookahead == 'n')
                ADVANCE(190);
            END_STATE();
        case 110:
            if(lookahead == 'c')
                ADVANCE(295);
            END_STATE();
        case 111:
            if(lookahead == 'c')
                ADVANCE(360);
            END_STATE();
        case 112:
            if(lookahead == 'c')
                ADVANCE(139);
            END_STATE();
        case 113:
            if(lookahead == 'c')
                ADVANCE(363);
            END_STATE();
        case 114:
            if(lookahead == 'c')
                ADVANCE(143);
            END_STATE();
        case 115:
            if(lookahead == 'c')
                ADVANCE(144);
            END_STATE();
        case 116:
            if(lookahead == 'd')
                ADVANCE(145);
            END_STATE();
        case 117:
            if(lookahead == 'd')
                ADVANCE(513);
            END_STATE();
        case 118:
            if(lookahead == 'd')
                ADVANCE(530);
            END_STATE();
        case 119:
            if(lookahead == 'd')
                ADVANCE(498);
            END_STATE();
        case 120:
            if(lookahead == 'd')
                ADVANCE(30);
            END_STATE();
        case 121:
            if(lookahead == 'd')
                ADVANCE(566);
            END_STATE();
        case 122:
            if(lookahead == 'd')
                ADVANCE(568);
            END_STATE();
        case 123:
            if(lookahead == 'd')
                ADVANCE(565);
            END_STATE();
        case 124:
            if(lookahead == 'd')
                ADVANCE(564);
            END_STATE();
        case 125:
            if(lookahead == 'd')
                ADVANCE(398);
            END_STATE();
        case 126:
            if(lookahead == 'd')
                ADVANCE(285);
            END_STATE();
        case 127:
            if(lookahead == 'd')
                ADVANCE(302);
            if(lookahead == 'l')
                ADVANCE(298);
            END_STATE();
        case 128:
            if(lookahead == 'd')
                ADVANCE(167);
            END_STATE();
        case 129:
            if(lookahead == 'd')
                ADVANCE(148);
            END_STATE();
        case 130:
            if(lookahead == 'd')
                ADVANCE(92);
            if(lookahead == 'f')
                ADVANCE(211);
            if(lookahead == 'i')
                ADVANCE(192);
            END_STATE();
        case 131:
            if(lookahead == 'd')
                ADVANCE(176);
            END_STATE();
        case 132:
            if(lookahead == 'e')
                ADVANCE(179);
            END_STATE();
        case 133:
            if(lookahead == 'e')
                ADVANCE(496);
            END_STATE();
        case 134:
            if(lookahead == 'e')
                ADVANCE(527);
            END_STATE();
        case 135:
            if(lookahead == 'e')
                ADVANCE(591);
            END_STATE();
        case 136:
            if(lookahead == 'e')
                ADVANCE(431);
            END_STATE();
        case 137:
            if(lookahead == 'e')
                ADVANCE(430);
            END_STATE();
        case 138:
            if(lookahead == 'e')
                ADVANCE(506);
            END_STATE();
        case 139:
            if(lookahead == 'e')
                ADVANCE(711);
            END_STATE();
        case 140:
            if(lookahead == 'e')
                ADVANCE(521);
            END_STATE();
        case 141:
            if(lookahead == 'e')
                ADVANCE(593);
            END_STATE();
        case 142:
            if(lookahead == 'e')
                ADVANCE(305);
            END_STATE();
        case 143:
            if(lookahead == 'e')
                ADVANCE(511);
            END_STATE();
        case 144:
            if(lookahead == 'e')
                ADVANCE(525);
            END_STATE();
        case 145:
            if(lookahead == 'e')
                ADVANCE(180);
            END_STATE();
        case 146:
            if(lookahead == 'e')
                ADVANCE(405);
            if(lookahead == 'h')
                ADVANCE(85);
            if(lookahead == 'i')
                ADVANCE(121);
            if(lookahead == 'k')
                ADVANCE(154);
            if(lookahead == 'm')
                ADVANCE(399);
            if(lookahead == 'n')
                ADVANCE(293);
            if(lookahead == 'o')
                ADVANCE(310);
            if(lookahead == 't')
                ADVANCE(316);
            END_STATE();
        case 147:
            if(lookahead == 'e')
                ADVANCE(66);
            END_STATE();
        case 148:
            if(lookahead == 'e')
                ADVANCE(178);
            END_STATE();
        case 149:
            if(lookahead == 'e')
                ADVANCE(306);
            END_STATE();
        case 150:
            if(lookahead == 'e')
                ADVANCE(335);
            END_STATE();
        case 151:
            if(lookahead == 'e')
                ADVANCE(309);
            END_STATE();
        case 152:
            if(lookahead == 'e')
                ADVANCE(234);
            END_STATE();
        case 153:
            if(lookahead == 'e')
                ADVANCE(118);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(409);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(336);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(337);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(276);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(120);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(338);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(86);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(329);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(357);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(123);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(315);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(359);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(326);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(332);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(280);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(366);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(345);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(322);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(324);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(325);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(348);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(129);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(183);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(385);
            if(lookahead == 'h')
                ADVANCE(287);
            if(lookahead == 't')
                ADVANCE(319);
            END_STATE();
        case 178:
            if(lookahead == 'f')
                ADVANCE(504);
            END_STATE();
        case 179:
            if(lookahead == 'f')
                ADVANCE(81);
            END_STATE();
        case 180:
            if(lookahead == 'f')
                ADVANCE(205);
            END_STATE();
        case 181:
            if(lookahead == 'f')
                ADVANCE(210);
            if(lookahead == 'm')
                ADVANCE(79);
            if(lookahead == 's')
                ADVANCE(165);
            END_STATE();
        case 182:
            if(lookahead == 'f')
                ADVANCE(95);
            END_STATE();
        case 183:
            if(lookahead == 'f')
                ADVANCE(94);
            END_STATE();
        case 184:
            if(lookahead == 'g')
                ADVANCE(581);
            END_STATE();
        case 185:
            if(lookahead == 'g')
                ADVANCE(713);
            END_STATE();
        case 186:
            if(lookahead == 'g')
                ADVANCE(715);
            END_STATE();
        case 187:
            if(lookahead == 'g')
                ADVANCE(585);
            END_STATE();
        case 188:
            if(lookahead == 'g')
                ADVANCE(587);
            END_STATE();
        case 189:
            if(lookahead == 'g')
                ADVANCE(588);
            END_STATE();
        case 190:
            if(lookahead == 'g')
                ADVANCE(583);
            END_STATE();
        case 191:
            if(lookahead == 'g')
                ADVANCE(278);
            END_STATE();
        case 192:
            if(lookahead == 'g')
                ADVANCE(277);
            END_STATE();
        case 193:
            if(lookahead == 'h')
                ADVANCE(494);
            END_STATE();
        case 194:
            if(lookahead == 'h')
                ADVANCE(82);
            END_STATE();
        case 195:
            if(lookahead == 'h')
                ADVANCE(209);
            END_STATE();
        case 196:
            if(lookahead == 'h')
                ADVANCE(297);
            END_STATE();
        case 197:
            if(lookahead == 'i')
                ADVANCE(403);
            END_STATE();
        case 198:
            if(lookahead == 'i')
                ADVANCE(412);
            END_STATE();
        case 199:
            if(lookahead == 'i')
                ADVANCE(352);
            if(lookahead == 'o')
                ADVANCE(281);
            END_STATE();
        case 200:
            if(lookahead == 'i')
                ADVANCE(259);
            if(lookahead == 'u')
                ADVANCE(111);
            END_STATE();
        case 201:
            if(lookahead == 'i')
                ADVANCE(100);
            END_STATE();
        case 202:
            if(lookahead == 'i')
                ADVANCE(191);
            END_STATE();
        case 203:
            if(lookahead == 'i')
                ADVANCE(117);
            END_STATE();
        case 204:
            if(lookahead == 'i')
                ADVANCE(283);
            if(lookahead == 's')
                ADVANCE(202);
            END_STATE();
        case 205:
            if(lookahead == 'i')
                ADVANCE(272);
            END_STATE();
        case 206:
            if(lookahead == 'i')
                ADVANCE(103);
            END_STATE();
        case 207:
            if(lookahead == 'i')
                ADVANCE(365);
            END_STATE();
        case 208:
            if(lookahead == 'i')
                ADVANCE(104);
            END_STATE();
        case 209:
            if(lookahead == 'i')
                ADVANCE(122);
            END_STATE();
        case 210:
            if(lookahead == 'i')
                ADVANCE(152);
            END_STATE();
        case 211:
            if(lookahead == 'i')
                ADVANCE(269);
            END_STATE();
        case 212:
            if(lookahead == 'i')
                ADVANCE(90);
            END_STATE();
        case 213:
            if(lookahead == 'i')
                ADVANCE(342);
            END_STATE();
        case 214:
            if(lookahead == 'i')
                ADVANCE(260);
            END_STATE();
        case 215:
            if(lookahead == 'i')
                ADVANCE(192);
            END_STATE();
        case 216:
            if(lookahead == 'i')
                ADVANCE(288);
            END_STATE();
        case 217:
            if(lookahead == 'i')
                ADVANCE(343);
            END_STATE();
        case 218:
            if(lookahead == 'i')
                ADVANCE(290);
            END_STATE();
        case 219:
            if(lookahead == 'i')
                ADVANCE(344);
            END_STATE();
        case 220:
            if(lookahead == 'i')
                ADVANCE(115);
            END_STATE();
        case 221:
            if(lookahead == 'i')
                ADVANCE(373);
            END_STATE();
        case 222:
            if(lookahead == 'i')
                ADVANCE(292);
            END_STATE();
        case 223:
            if(lookahead == 'i')
                ADVANCE(294);
            END_STATE();
        case 224:
            if(lookahead == 'i')
                ADVANCE(381);
            END_STATE();
        case 225:
            if(lookahead == 'k')
                ADVANCE(503);
            END_STATE();
        case 226:
            if(lookahead == 'l')
                ADVANCE(512);
            END_STATE();
        case 227:
            if(lookahead == 'l')
                ADVANCE(571);
            END_STATE();
        case 228:
            if(lookahead == 'l')
                ADVANCE(567);
            END_STATE();
        case 229:
            if(lookahead == 'l')
                ADVANCE(562);
            END_STATE();
        case 230:
            if(lookahead == 'l')
                ADVANCE(483);
            END_STATE();
        case 231:
            if(lookahead == 'l')
                ADVANCE(407);
            END_STATE();
        case 232:
            if(lookahead == 'l')
                ADVANCE(69);
            END_STATE();
        case 233:
            if(lookahead == 'l')
                ADVANCE(408);
            END_STATE();
        case 234:
            if(lookahead == 'l')
                ADVANCE(119);
            END_STATE();
        case 235:
            if(lookahead == 'l')
                ADVANCE(298);
            END_STATE();
        case 236:
            if(lookahead == 'l')
                ADVANCE(160);
            END_STATE();
        case 237:
            if(lookahead == 'l')
                ADVANCE(135);
            END_STATE();
        case 238:
            if(lookahead == 'l')
                ADVANCE(136);
            END_STATE();
        case 239:
            if(lookahead == 'l')
                ADVANCE(361);
            END_STATE();
        case 240:
            if(lookahead == 'l')
                ADVANCE(198);
            END_STATE();
        case 241:
            if(lookahead == 'l')
                ADVANCE(141);
            END_STATE();
        case 242:
            if(lookahead == 'l')
                ADVANCE(386);
            END_STATE();
        case 243:
            if(lookahead == 'l')
                ADVANCE(221);
            END_STATE();
        case 244:
            if(lookahead == 'l')
                ADVANCE(299);
            if(lookahead == 's')
                ADVANCE(196);
            END_STATE();
        case 245:
            if(lookahead == 'l')
                ADVANCE(300);
            END_STATE();
        case 246:
            if(lookahead == 'l')
                ADVANCE(224);
            END_STATE();
        case 247:
            if(lookahead == 'm')
                ADVANCE(480);
            END_STATE();
        case 248:
            if(lookahead == 'm')
                ADVANCE(134);
            if(lookahead == 't')
                ADVANCE(197);
            END_STATE();
        case 249:
            if(lookahead == 'm')
                ADVANCE(159);
            END_STATE();
        case 250:
            if(lookahead == 'n')
                ADVANCE(515);
            END_STATE();
        case 251:
            if(lookahead == 'n')
                ADVANCE(204);
            END_STATE();
        case 252:
            if(lookahead == 'n')
                ADVANCE(492);
            END_STATE();
        case 253:
            if(lookahead == 'n')
                ADVANCE(575);
            END_STATE();
        case 254:
            if(lookahead == 'n')
                ADVANCE(427);
            END_STATE();
        case 255:
            if(lookahead == 'n')
                ADVANCE(485);
            END_STATE();
        case 256:
            if(lookahead == 'n')
                ADVANCE(572);
            END_STATE();
        case 257:
            if(lookahead == 'n')
                ADVANCE(341);
            END_STATE();
        case 258:
            if(lookahead == 'n')
                ADVANCE(388);
            if(lookahead == 'x')
                ADVANCE(106);
            END_STATE();
        case 259:
            if(lookahead == 'n')
                ADVANCE(185);
            END_STATE();
        case 260:
            if(lookahead == 'n')
                ADVANCE(186);
            END_STATE();
        case 261:
            if(lookahead == 'n')
                ADVANCE(70);
            END_STATE();
        case 262:
            if(lookahead == 'n')
                ADVANCE(231);
            END_STATE();
        case 263:
            if(lookahead == 'n')
                ADVANCE(187);
            END_STATE();
        case 264:
            if(lookahead == 'n')
                ADVANCE(188);
            END_STATE();
        case 265:
            if(lookahead == 'n')
                ADVANCE(189);
            END_STATE();
        case 266:
            if(lookahead == 'n')
                ADVANCE(350);
            END_STATE();
        case 267:
            if(lookahead == 'n')
                ADVANCE(291);
            END_STATE();
        case 268:
            if(lookahead == 'n')
                ADVANCE(124);
            END_STATE();
        case 269:
            if(lookahead == 'n')
                ADVANCE(84);
            END_STATE();
        case 270:
            if(lookahead == 'n')
                ADVANCE(267);
            END_STATE();
        case 271:
            if(lookahead == 'n')
                ADVANCE(77);
            END_STATE();
        case 272:
            if(lookahead == 'n')
                ADVANCE(138);
            END_STATE();
        case 273:
            if(lookahead == 'n')
                ADVANCE(88);
            END_STATE();
        case 274:
            if(lookahead == 'n')
                ADVANCE(89);
            END_STATE();
        case 275:
            if(lookahead == 'n')
                ADVANCE(128);
            END_STATE();
        case 276:
            if(lookahead == 'n')
                ADVANCE(112);
            END_STATE();
        case 277:
            if(lookahead == 'n')
                ADVANCE(289);
            END_STATE();
        case 278:
            if(lookahead == 'n')
                ADVANCE(158);
            END_STATE();
        case 279:
            if(lookahead == 'n')
                ADVANCE(372);
            END_STATE();
        case 280:
            if(lookahead == 'n')
                ADVANCE(384);
            END_STATE();
        case 281:
            if(lookahead == 'o')
                ADVANCE(236);
            END_STATE();
        case 282:
            if(lookahead == 'o')
                ADVANCE(125);
            END_STATE();
        case 283:
            if(lookahead == 'o')
                ADVANCE(252);
            END_STATE();
        case 284:
            if(lookahead == 'o')
                ADVANCE(83);
            END_STATE();
        case 285:
            if(lookahead == 'o')
                ADVANCE(262);
            END_STATE();
        case 286:
            if(lookahead == 'o')
                ADVANCE(307);
            END_STATE();
        case 287:
            if(lookahead == 'o')
                ADVANCE(321);
            END_STATE();
        case 288:
            if(lookahead == 'o')
                ADVANCE(254);
            END_STATE();
        case 289:
            if(lookahead == 'o')
                ADVANCE(327);
            END_STATE();
        case 290:
            if(lookahead == 'o')
                ADVANCE(255);
            END_STATE();
        case 291:
            if(lookahead == 'o')
                ADVANCE(377);
            END_STATE();
        case 292:
            if(lookahead == 'o')
                ADVANCE(256);
            END_STATE();
        case 293:
            if(lookahead == 'o')
                ADVANCE(261);
            END_STATE();
        case 294:
            if(lookahead == 'o')
                ADVANCE(274);
            END_STATE();
        case 295:
            if(lookahead == 'o')
                ADVANCE(266);
            END_STATE();
        case 296:
            if(lookahead == 'o')
                ADVANCE(308);
            END_STATE();
        case 297:
            if(lookahead == 'o')
                ADVANCE(323);
            END_STATE();
        case 298:
            if(lookahead == 'o')
                ADVANCE(263);
            END_STATE();
        case 299:
            if(lookahead == 'o')
                ADVANCE(264);
            END_STATE();
        case 300:
            if(lookahead == 'o')
                ADVANCE(265);
            END_STATE();
        case 301:
            if(lookahead == 'o')
                ADVANCE(109);
            END_STATE();
        case 302:
            if(lookahead == 'o')
                ADVANCE(401);
            END_STATE();
        case 303:
            if(lookahead == 'p')
                ADVANCE(717);
            END_STATE();
        case 304:
            if(lookahead == 'p')
                ADVANCE(175);
            END_STATE();
        case 305:
            if(lookahead == 'p')
                ADVANCE(233);
            if(lookahead == 'q')
                ADVANCE(395);
            END_STATE();
        case 306:
            if(lookahead == 'p')
                ADVANCE(370);
            END_STATE();
        case 307:
            if(lookahead == 'p')
                ADVANCE(206);
            END_STATE();
        case 308:
            if(lookahead == 'p')
                ADVANCE(208);
            END_STATE();
        case 309:
            if(lookahead == 'p')
                ADVANCE(328);
            END_STATE();
        case 310:
            if(lookahead == 'p')
                ADVANCE(383);
            END_STATE();
        case 311:
            if(lookahead == 'q')
                ADVANCE(393);
            if(lookahead == 't')
                ADVANCE(333);
            END_STATE();
        case 312:
            if(lookahead == 'r')
                ADVANCE(200);
            END_STATE();
        case 313:
            if(lookahead == 'r')
                ADVANCE(594);
            END_STATE();
        case 314:
            if(lookahead == 'r')
                ADVANCE(596);
            END_STATE();
        case 315:
            if(lookahead == 'r')
                ADVANCE(402);
            END_STATE();
        case 316:
            if(lookahead == 'r')
                ADVANCE(411);
            END_STATE();
        case 317:
            if(lookahead == 'r')
                ADVANCE(96);
            END_STATE();
        case 318:
            if(lookahead == 'r')
                ADVANCE(201);
            END_STATE();
        case 319:
            if(lookahead == 'r')
                ADVANCE(389);
            END_STATE();
        case 320:
            if(lookahead == 'r')
                ADVANCE(214);
            END_STATE();
        case 321:
            if(lookahead == 'r')
                ADVANCE(358);
            END_STATE();
        case 322:
            if(lookahead == 'r')
                ADVANCE(87);
            END_STATE();
        case 323:
            if(lookahead == 'r')
                ADVANCE(362);
            END_STATE();
        case 324:
            if(lookahead == 'r')
                ADVANCE(212);
            END_STATE();
        case 325:
            if(lookahead == 'r')
                ADVANCE(91);
            END_STATE();
        case 326:
            if(lookahead == 'r')
                ADVANCE(273);
            END_STATE();
        case 327:
            if(lookahead == 'r')
                ADVANCE(147);
            END_STATE();
        case 328:
            if(lookahead == 'r')
                ADVANCE(174);
            END_STATE();
        case 329:
            if(lookahead == 'r')
                ADVANCE(182);
            END_STATE();
        case 330:
            if(lookahead == 'r')
                ADVANCE(151);
            END_STATE();
        case 331:
            if(lookahead == 'r')
                ADVANCE(400);
            END_STATE();
        case 332:
            if(lookahead == 'r')
                ADVANCE(347);
            END_STATE();
        case 333:
            if(lookahead == 'r')
                ADVANCE(98);
            END_STATE();
        case 334:
            if(lookahead == 's')
                ADVANCE(225);
            END_STATE();
        case 335:
            if(lookahead == 's')
                ADVANCE(518);
            END_STATE();
        case 336:
            if(lookahead == 's')
                ADVANCE(523);
            END_STATE();
        case 337:
            if(lookahead == 's')
                ADVANCE(524);
            END_STATE();
        case 338:
            if(lookahead == 's')
                ADVANCE(484);
            END_STATE();
        case 339:
            if(lookahead == 's')
                ADVANCE(133);
            END_STATE();
        case 340:
            if(lookahead == 's')
                ADVANCE(195);
            END_STATE();
        case 341:
            if(lookahead == 's')
                ADVANCE(354);
            END_STATE();
        case 342:
            if(lookahead == 's')
                ADVANCE(150);
            END_STATE();
        case 343:
            if(lookahead == 's')
                ADVANCE(155);
            END_STATE();
        case 344:
            if(lookahead == 's')
                ADVANCE(156);
            END_STATE();
        case 345:
            if(lookahead == 's')
                ADVANCE(378);
            END_STATE();
        case 346:
            if(lookahead == 's')
                ADVANCE(368);
            END_STATE();
        case 347:
            if(lookahead == 's')
                ADVANCE(376);
            END_STATE();
        case 348:
            if(lookahead == 's')
                ADVANCE(168);
            END_STATE();
        case 349:
            if(lookahead == 's')
                ADVANCE(172);
            END_STATE();
        case 350:
            if(lookahead == 's')
                ADVANCE(379);
            END_STATE();
        case 351:
            if(lookahead == 't')
                ADVANCE(364);
            END_STATE();
        case 352:
            if(lookahead == 't')
                ADVANCE(181);
            END_STATE();
        case 353:
            if(lookahead == 't')
                ADVANCE(516);
            END_STATE();
        case 354:
            if(lookahead == 't')
                ADVANCE(529);
            END_STATE();
        case 355:
            if(lookahead == 't')
                ADVANCE(589);
            END_STATE();
        case 356:
            if(lookahead == 't')
                ADVANCE(517);
            END_STATE();
        case 357:
            if(lookahead == 't')
                ADVANCE(577);
            END_STATE();
        case 358:
            if(lookahead == 't')
                ADVANCE(579);
            END_STATE();
        case 359:
            if(lookahead == 't')
                ADVANCE(497);
            END_STATE();
        case 360:
            if(lookahead == 't')
                ADVANCE(432);
            END_STATE();
        case 361:
            if(lookahead == 't')
                ADVANCE(479);
            END_STATE();
        case 362:
            if(lookahead == 't')
                ADVANCE(586);
            END_STATE();
        case 363:
            if(lookahead == 't')
                ADVANCE(570);
            END_STATE();
        case 364:
            if(lookahead == 't')
                ADVANCE(318);
            END_STATE();
        case 365:
            if(lookahead == 't')
                ADVANCE(105);
            END_STATE();
        case 366:
            if(lookahead == 't')
                ADVANCE(317);
            END_STATE();
        case 367:
            if(lookahead == 't')
                ADVANCE(162);
            END_STATE();
        case 368:
            if(lookahead == 't')
                ADVANCE(67);
            END_STATE();
        case 369:
            if(lookahead == 't')
                ADVANCE(75);
            END_STATE();
        case 370:
            if(lookahead == 't')
                ADVANCE(216);
            END_STATE();
        case 371:
            if(lookahead == 't')
                ADVANCE(140);
            END_STATE();
        case 372:
            if(lookahead == 't')
                ADVANCE(161);
            END_STATE();
        case 373:
            if(lookahead == 't')
                ADVANCE(171);
            END_STATE();
        case 374:
            if(lookahead == 't')
                ADVANCE(166);
            END_STATE();
        case 375:
            if(lookahead == 't')
                ADVANCE(320);
            END_STATE();
        case 376:
            if(lookahead == 't')
                ADVANCE(93);
            END_STATE();
        case 377:
            if(lookahead == 't')
                ADVANCE(97);
            END_STATE();
        case 378:
            if(lookahead == 't')
                ADVANCE(63);
            END_STATE();
        case 379:
            if(lookahead == 't')
                ADVANCE(331);
            END_STATE();
        case 380:
            if(lookahead == 't')
                ADVANCE(218);
            END_STATE();
        case 381:
            if(lookahead == 't')
                ADVANCE(173);
            END_STATE();
        case 382:
            if(lookahead == 't')
                ADVANCE(222);
            END_STATE();
        case 383:
            if(lookahead == 't')
                ADVANCE(223);
            END_STATE();
        case 384:
            if(lookahead == 't')
                ADVANCE(99);
            END_STATE();
        case 385:
            if(lookahead == 't')
                ADVANCE(333);
            END_STATE();
        case 386:
            if(lookahead == 't')
                ADVANCE(71);
            END_STATE();
        case 387:
            if(lookahead == 'u')
                ADVANCE(101);
            END_STATE();
        case 388:
            if(lookahead == 'u')
                ADVANCE(247);
            END_STATE();
        case 389:
            if(lookahead == 'u')
                ADVANCE(111);
            END_STATE();
        case 390:
            if(lookahead == 'u')
                ADVANCE(239);
            END_STATE();
        case 391:
            if(lookahead == 'u')
                ADVANCE(353);
            END_STATE();
        case 392:
            if(lookahead == 'u')
                ADVANCE(356);
            END_STATE();
        case 393:
            if(lookahead == 'u')
                ADVANCE(157);
            END_STATE();
        case 394:
            if(lookahead == 'u')
                ADVANCE(275);
            END_STATE();
        case 395:
            if(lookahead == 'u')
                ADVANCE(170);
            END_STATE();
        case 396:
            if(lookahead == 'u')
                ADVANCE(371);
            END_STATE();
        case 397:
            if(lookahead == 'u')
                ADVANCE(242);
            END_STATE();
        case 398:
            if(lookahead == 'u')
                ADVANCE(238);
            END_STATE();
        case 399:
            if(lookahead == 'u')
                ADVANCE(346);
            END_STATE();
        case 400:
            if(lookahead == 'u')
                ADVANCE(113);
            END_STATE();
        case 401:
            if(lookahead == 'u')
                ADVANCE(102);
            END_STATE();
        case 402:
            if(lookahead == 'v')
                ADVANCE(220);
            END_STATE();
        case 403:
            if(lookahead == 'v')
                ADVANCE(137);
            END_STATE();
        case 404:
            if(lookahead == 'x')
                ADVANCE(153);
            END_STATE();
        case 405:
            if(lookahead == 'x')
                ADVANCE(374);
            END_STATE();
        case 406:
            if(lookahead == 'y')
                ADVANCE(486);
            END_STATE();
        case 407:
            if(lookahead == 'y')
                ADVANCE(519);
            END_STATE();
        case 408:
            if(lookahead == 'y')
                ADVANCE(62);
            END_STATE();
        case 409:
            if(lookahead == 'y')
                ADVANCE(563);
            END_STATE();
        case 410:
            if(lookahead == 'y')
                ADVANCE(304);
            END_STATE();
        case 411:
            if(lookahead == 'y')
                ADVANCE(65);
            END_STATE();
        case 412:
            if(lookahead == 'z')
                ADVANCE(163);
            END_STATE();
        case 413:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            END_STATE();
        case 414:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(532);
            END_STATE();
        case 415:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(538);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(552);
            END_STATE();
        case 416:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(546);
            END_STATE();
        case 417:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(552);
            END_STATE();
        case 418:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(534);
            END_STATE();
        case 419:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(725);
            if(lookahead == '\r')
                ADVANCE(727);
            if(lookahead == '\\')
                ADVANCE(726);
            END_STATE();
        case 420:
            if(eof)
                ADVANCE(425);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 421:
            if(eof)
                ADVANCE(425);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(420)
            END_STATE();
        case 422:
            if(eof)
                ADVANCE(425);
            if(lookahead == '\n')
                SKIP(424)
            END_STATE();
        case 423:
            if(eof)
                ADVANCE(425);
            if(lookahead == '\n')
                SKIP(424)
            if(lookahead == '\r')
                SKIP(422)
            END_STATE();
        case 424:
            if(eof)
                ADVANCE(425);
            if(lookahead == '#')
                ADVANCE(116);
            if(lookahead == '$')
                ADVANCE(437);
            if(lookahead == '%')
                ADVANCE(446);
            if(lookahead == '(')
                ADVANCE(32);
            if(lookahead == ')')
                ADVANCE(449);
            if(lookahead == '*')
                ADVANCE(444);
            if(lookahead == '+')
                ADVANCE(440);
            if(lookahead == ',')
                ADVANCE(482);
            if(lookahead == '-')
                ADVANCE(442);
            if(lookahead == '/')
                ADVANCE(445);
            if(lookahead == ':')
                ADVANCE(434);
            if(lookahead == ';')
                ADVANCE(426);
            if(lookahead == '<')
                ADVANCE(49);
            if(lookahead == '>')
                ADVANCE(502);
            if(lookahead == '@')
                ADVANCE(53);
            if(lookahead == 'X')
                ADVANCE(51);
            if(lookahead == '[')
                ADVANCE(489);
            if(lookahead == '\\')
                SKIP(423)
            if(lookahead == ']')
                ADVANCE(490);
            if(lookahead == '^')
                ADVANCE(436);
            if(lookahead == 'a')
                ADVANCE(351);
            if(lookahead == 'b')
                ADVANCE(199);
            if(lookahead == 'c')
                ADVANCE(72);
            if(lookahead == 'd')
                ADVANCE(132);
            if(lookahead == 'e')
                ADVANCE(258);
            if(lookahead == 'g')
                ADVANCE(169);
            if(lookahead == 'i')
                ADVANCE(279);
            if(lookahead == 'l')
                ADVANCE(301);
            if(lookahead == 'm')
                ADVANCE(282);
            if(lookahead == 'n')
                ADVANCE(73);
            if(lookahead == 'o')
                ADVANCE(107);
            if(lookahead == 'r')
                ADVANCE(74);
            if(lookahead == 's')
                ADVANCE(177);
            if(lookahead == 't')
                ADVANCE(410);
            if(lookahead == 'u')
                ADVANCE(251);
            if(lookahead == '|')
                ADVANCE(435);
            if(lookahead == '}')
                ADVANCE(429);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(424)
            END_STATE();
        case 425:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(414);
            if(lookahead == '0')
                ADVANCE(540);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(414);
            if(lookahead == '0')
                ADVANCE(540);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(719);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 447:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(453);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(57);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'C')
                ADVANCE(52);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(64);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(339);
            if(lookahead == 'h')
                ADVANCE(80);
            if(lookahead == 'o')
                ADVANCE(257);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(303);
            if(lookahead == 'o')
                ADVANCE(125);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(248);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(213);
            if(lookahead == 'e')
                ADVANCE(78);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(194);
            if(lookahead == 's')
                ADVANCE(375);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(367);
            if(lookahead == 'u')
                ADVANCE(353);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(179);
            if(lookahead == 'o')
                ADVANCE(387);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(311);
            if(lookahead == 'h')
                ADVANCE(287);
            if(lookahead == 't')
                ADVANCE(312);
            if(lookahead == 'w')
                ADVANCE(207);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(366);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(404);
            if(lookahead == 'l')
                ADVANCE(284);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(352);
            if(lookahead == 'o')
                ADVANCE(281);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(406);
            if(lookahead == 't')
                ADVANCE(364);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(515);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(204);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(388);
            if(lookahead == 'x')
                ADVANCE(106);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(108);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(203);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'y')
                ADVANCE(304);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(sym_any_const_type);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(sym_any_const_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(439);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(438);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(510);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(510);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(509);
            if(lookahead == '\\')
                ADVANCE(507);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(508);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(510);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(721);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(510);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(510);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(392);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(414);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(556);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(532);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(561);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(418);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(533);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(560);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(533);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(418);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(534);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(534);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(415);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(549);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(547);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(555);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(709);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(550);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(550);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(560);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(537);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(415);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(551);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(548);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(556);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(417);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(552);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(552);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(538);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(415);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(547);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(555);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(550);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(550);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(560);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(537);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(415);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(548);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(556);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(552);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(552);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(538);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(413);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(553);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(600);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(555);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(560);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(543);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(413);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(554);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(38);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(556);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(413);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(558);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(709);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(555);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(560);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(543);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(413);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(559);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(417);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(556);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(413);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(555);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(543);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(560);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(413);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(556);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(561);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(416);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(418);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(545);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(556);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(546);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(546);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(416);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(545);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(556);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(546);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(546);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(417);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(418);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(547);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(555);
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
                ADVANCE(560);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(550);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(417);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(418);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(548);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(556);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(552);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(552);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(417);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(547);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(555);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(550);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(550);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(560);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(537);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(417);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(547);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(555);
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
                ADVANCE(560);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(550);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(417);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(548);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(556);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(552);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(552);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(538);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(417);
            if(lookahead == '.')
                ADVANCE(557);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(548);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(556);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(552);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(552);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(414);
            if(lookahead == '0')
                ADVANCE(541);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(543);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(560);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(414);
            if(lookahead == '0')
                ADVANCE(542);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(561);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(418);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(533);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(560);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(533);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(418);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(534);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(534);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(545);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(556);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(546);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(546);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(543);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(560);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(561);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(560);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(561);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(574);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym_signed_short_int);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym_signed_short_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(127);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(127);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(235);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(sym_signed_long_int);
            if(lookahead == ' ')
                ADVANCE(235);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(sym_signed_longlong_int);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(sym_unsigned_short_int);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(sym_unsigned_long_int);
            if(lookahead == ' ')
                ADVANCE(245);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(sym_unsigned_longlong_int);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(244);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(414);
            if(lookahead == '0')
                ADVANCE(535);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(537);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(550);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(679);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(683);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(619);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(684);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(658);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(703);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(639);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(693);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(642);
            if(lookahead == 's')
                ADVANCE(699);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(642);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(531);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(599);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(514);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(677);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(681);
            if(lookahead == 'h')
                ADVANCE(673);
            if(lookahead == 't')
                ADVANCE(682);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(681);
            if(lookahead == 'h')
                ADVANCE(673);
            if(lookahead == 't')
                ADVANCE(685);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(615);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(522);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(633);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(606);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(661);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(691);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(604);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(618);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(505);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(582);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(714);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(584);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(667);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(495);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(673);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(605);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(705);
            if(lookahead == 'l')
                ADVANCE(672);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(607);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(638);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(665);
            if(lookahead == 'u')
                ADVANCE(611);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(665);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(676);
            if(lookahead == 's')
                ADVANCE(645);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(666);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(628);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(481);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(689);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(634);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(576);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(649);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(493);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(612);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(652);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(635);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(636);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(627);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(637);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(657);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(603);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(687);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(648);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(670);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(660);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(668);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(718);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(632);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(702);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(647);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(595);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(646);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(644);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(692);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(651);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(645);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(590);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(578);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(580);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(433);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(630);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(610);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(608);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(655);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(696);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(650);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(622);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(520);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(487);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(680);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(550);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(710);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(419);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(725);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(510);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(723);
            if(lookahead == '\\')
                ADVANCE(419);
            if(lookahead != 0)
                ADVANCE(725);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(724);
            if(lookahead == '\\')
                ADVANCE(27);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(723);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(725);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(720);
            if(lookahead == '\\')
                ADVANCE(419);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(725);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(419);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(725);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(725);
            if(lookahead == '\r')
                ADVANCE(727);
            if(lookahead == '\\')
                ADVANCE(726);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(725);
            if(lookahead == '\\')
                ADVANCE(419);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 424 },
    [2] = { .lex_state = 37 },
    [3] = { .lex_state = 37 },
    [4] = { .lex_state = 37 },
    [5] = { .lex_state = 37 },
    [6] = { .lex_state = 424 },
    [7] = { .lex_state = 37 },
    [8] = { .lex_state = 37 },
    [9] = { .lex_state = 37 },
    [10] = { .lex_state = 37 },
    [11] = { .lex_state = 37 },
    [12] = { .lex_state = 37 },
    [13] = { .lex_state = 37 },
    [14] = { .lex_state = 40 },
    [15] = { .lex_state = 424 },
    [16] = { .lex_state = 424 },
    [17] = { .lex_state = 424 },
    [18] = { .lex_state = 37 },
    [19] = { .lex_state = 42 },
    [20] = { .lex_state = 42 },
    [21] = { .lex_state = 42 },
    [22] = { .lex_state = 42 },
    [23] = { .lex_state = 41 },
    [24] = { .lex_state = 41 },
    [25] = { .lex_state = 41 },
    [26] = { .lex_state = 37 },
    [27] = { .lex_state = 37 },
    [28] = { .lex_state = 37 },
    [29] = { .lex_state = 37 },
    [30] = { .lex_state = 37 },
    [31] = { .lex_state = 37 },
    [32] = { .lex_state = 37 },
    [33] = { .lex_state = 37 },
    [34] = { .lex_state = 37 },
    [35] = { .lex_state = 43 },
    [36] = { .lex_state = 43 },
    [37] = { .lex_state = 37 },
    [38] = { .lex_state = 37 },
    [39] = { .lex_state = 37 },
    [40] = { .lex_state = 37 },
    [41] = { .lex_state = 37 },
    [42] = { .lex_state = 37 },
    [43] = { .lex_state = 37 },
    [44] = { .lex_state = 37 },
    [45] = { .lex_state = 31 },
    [46] = { .lex_state = 31 },
    [47] = { .lex_state = 31 },
    [48] = { .lex_state = 31 },
    [49] = { .lex_state = 31 },
    [50] = { .lex_state = 31 },
    [51] = { .lex_state = 31 },
    [52] = { .lex_state = 31 },
    [53] = { .lex_state = 31 },
    [54] = { .lex_state = 41 },
    [55] = { .lex_state = 41 },
    [56] = { .lex_state = 41 },
    [57] = { .lex_state = 31 },
    [58] = { .lex_state = 31 },
    [59] = { .lex_state = 31 },
    [60] = { .lex_state = 31 },
    [61] = { .lex_state = 41 },
    [62] = { .lex_state = 31 },
    [63] = { .lex_state = 424 },
    [64] = { .lex_state = 424 },
    [65] = { .lex_state = 424 },
    [66] = { .lex_state = 424 },
    [67] = { .lex_state = 424 },
    [68] = { .lex_state = 424 },
    [69] = { .lex_state = 31 },
    [70] = { .lex_state = 31 },
    [71] = { .lex_state = 37 },
    [72] = { .lex_state = 31 },
    [73] = { .lex_state = 37 },
    [74] = { .lex_state = 37 },
    [75] = { .lex_state = 31 },
    [76] = { .lex_state = 31 },
    [77] = { .lex_state = 31 },
    [78] = { .lex_state = 33 },
    [79] = { .lex_state = 33 },
    [80] = { .lex_state = 31 },
    [81] = { .lex_state = 31 },
    [82] = { .lex_state = 424 },
    [83] = { .lex_state = 31 },
    [84] = { .lex_state = 424 },
    [85] = { .lex_state = 424 },
    [86] = { .lex_state = 424 },
    [87] = { .lex_state = 33 },
    [88] = { .lex_state = 44 },
    [89] = { .lex_state = 424 },
    [90] = { .lex_state = 424 },
    [91] = { .lex_state = 424 },
    [92] = { .lex_state = 31 },
    [93] = { .lex_state = 424 },
    [94] = { .lex_state = 424 },
    [95] = { .lex_state = 424 },
    [96] = { .lex_state = 33 },
    [97] = { .lex_state = 424 },
    [98] = { .lex_state = 31 },
    [99] = { .lex_state = 424 },
    [100] = { .lex_state = 31 },
    [101] = { .lex_state = 424 },
    [102] = { .lex_state = 424 },
    [103] = { .lex_state = 424 },
    [104] = { .lex_state = 34 },
    [105] = { .lex_state = 424 },
    [106] = { .lex_state = 34 },
    [107] = { .lex_state = 34 },
    [108] = { .lex_state = 34 },
    [109] = { .lex_state = 424 },
    [110] = { .lex_state = 424 },
    [111] = { .lex_state = 31 },
    [112] = { .lex_state = 424 },
    [113] = { .lex_state = 424 },
    [114] = { .lex_state = 31 },
    [115] = { .lex_state = 424 },
    [116] = { .lex_state = 35 },
    [117] = { .lex_state = 35 },
    [118] = { .lex_state = 424 },
    [119] = { .lex_state = 424 },
    [120] = { .lex_state = 424 },
    [121] = { .lex_state = 35 },
    [122] = { .lex_state = 424 },
    [123] = { .lex_state = 35 },
    [124] = { .lex_state = 31 },
    [125] = { .lex_state = 35 },
    [126] = { .lex_state = 424 },
    [127] = { .lex_state = 35 },
    [128] = { .lex_state = 33 },
    [129] = { .lex_state = 424 },
    [130] = { .lex_state = 33 },
    [131] = { .lex_state = 424 },
    [132] = { .lex_state = 424 },
    [133] = { .lex_state = 424 },
    [134] = { .lex_state = 424 },
    [135] = { .lex_state = 424 },
    [136] = { .lex_state = 33 },
    [137] = { .lex_state = 424 },
    [138] = { .lex_state = 33 },
    [139] = { .lex_state = 424 },
    [140] = { .lex_state = 424 },
    [141] = { .lex_state = 33 },
    [142] = { .lex_state = 424 },
    [143] = { .lex_state = 424 },
    [144] = { .lex_state = 35 },
    [145] = { .lex_state = 33 },
    [146] = { .lex_state = 424 },
    [147] = { .lex_state = 424 },
    [148] = { .lex_state = 424 },
    [149] = { .lex_state = 33 },
    [150] = { .lex_state = 33 },
    [151] = { .lex_state = 424 },
    [152] = { .lex_state = 424 },
    [153] = { .lex_state = 424 },
    [154] = { .lex_state = 424 },
    [155] = { .lex_state = 424 },
    [156] = { .lex_state = 424 },
    [157] = { .lex_state = 424 },
    [158] = { .lex_state = 424 },
    [159] = { .lex_state = 424 },
    [160] = { .lex_state = 424 },
    [161] = { .lex_state = 33 },
    [162] = { .lex_state = 424 },
    [163] = { .lex_state = 33 },
    [164] = { .lex_state = 36 },
    [165] = { .lex_state = 36 },
    [166] = { .lex_state = 36 },
    [167] = { .lex_state = 33 },
    [168] = { .lex_state = 424 },
    [169] = { .lex_state = 424 },
    [170] = { .lex_state = 36 },
    [171] = { .lex_state = 36 },
    [172] = { .lex_state = 36 },
    [173] = { .lex_state = 33 },
    [174] = { .lex_state = 0 },
    [175] = { .lex_state = 33 },
    [176] = { .lex_state = 36 },
    [177] = { .lex_state = 424 },
    [178] = { .lex_state = 424 },
    [179] = { .lex_state = 424 },
    [180] = { .lex_state = 33 },
    [181] = { .lex_state = 36 },
    [182] = { .lex_state = 36 },
    [183] = { .lex_state = 424 },
    [184] = { .lex_state = 424 },
    [185] = { .lex_state = 33 },
    [186] = { .lex_state = 33 },
    [187] = { .lex_state = 0 },
    [188] = { .lex_state = 0 },
    [189] = { .lex_state = 0 },
    [190] = { .lex_state = 424 },
    [191] = { .lex_state = 0 },
    [192] = { .lex_state = 0 },
    [193] = { .lex_state = 0 },
    [194] = { .lex_state = 33 },
    [195] = { .lex_state = 424 },
    [196] = { .lex_state = 0 },
    [197] = { .lex_state = 424 },
    [198] = { .lex_state = 424 },
    [199] = { .lex_state = 0 },
    [200] = { .lex_state = 33 },
    [201] = { .lex_state = 36 },
    [202] = { .lex_state = 33 },
    [203] = { .lex_state = 0 },
    [204] = { .lex_state = 36 },
    [205] = { .lex_state = 36 },
    [206] = { .lex_state = 0 },
    [207] = { .lex_state = 424 },
    [208] = { .lex_state = 0 },
    [209] = { .lex_state = 36 },
    [210] = { .lex_state = 424 },
    [211] = { .lex_state = 36 },
    [212] = { .lex_state = 424 },
    [213] = { .lex_state = 0 },
    [214] = { .lex_state = 36 },
    [215] = { .lex_state = 36 },
    [216] = { .lex_state = 0 },
    [217] = { .lex_state = 37 },
    [218] = { .lex_state = 33 },
    [219] = { .lex_state = 424 },
    [220] = { .lex_state = 36 },
    [221] = { .lex_state = 36 },
    [222] = { .lex_state = 0 },
    [223] = { .lex_state = 0 },
    [224] = { .lex_state = 0 },
    [225] = { .lex_state = 0 },
    [226] = { .lex_state = 36 },
    [227] = { .lex_state = 424 },
    [228] = { .lex_state = 33 },
    [229] = { .lex_state = 36 },
    [230] = { .lex_state = 0 },
    [231] = { .lex_state = 36 },
    [232] = { .lex_state = 36 },
    [233] = { .lex_state = 0 },
    [234] = { .lex_state = 0 },
    [235] = { .lex_state = 33 },
    [236] = { .lex_state = 424 },
    [237] = { .lex_state = 33 },
    [238] = { .lex_state = 36 },
    [239] = { .lex_state = 36 },
    [240] = { .lex_state = 0 },
    [241] = { .lex_state = 0 },
    [242] = { .lex_state = 45 },
    [243] = { .lex_state = 33 },
    [244] = { .lex_state = 0 },
    [245] = { .lex_state = 0 },
    [246] = { .lex_state = 0 },
    [247] = { .lex_state = 0 },
    [248] = { .lex_state = 424 },
    [249] = { .lex_state = 424 },
    [250] = { .lex_state = 424 },
    [251] = { .lex_state = 36 },
    [252] = { .lex_state = 36 },
    [253] = { .lex_state = 0 },
    [254] = { .lex_state = 424 },
    [255] = { .lex_state = 0 },
    [256] = { .lex_state = 0 },
    [257] = { .lex_state = 0 },
    [258] = { .lex_state = 36 },
    [259] = { .lex_state = 36 },
    [260] = { .lex_state = 0 },
    [261] = { .lex_state = 33 },
    [262] = { .lex_state = 33 },
    [263] = { .lex_state = 0 },
    [264] = { .lex_state = 33 },
    [265] = { .lex_state = 33 },
    [266] = { .lex_state = 424 },
    [267] = { .lex_state = 424 },
    [268] = { .lex_state = 33 },
    [269] = { .lex_state = 0 },
    [270] = { .lex_state = 424 },
    [271] = { .lex_state = 424 },
    [272] = { .lex_state = 424 },
    [273] = { .lex_state = 33 },
    [274] = { .lex_state = 33 },
    [275] = { .lex_state = 0 },
    [276] = { .lex_state = 33 },
    [277] = { .lex_state = 33 },
    [278] = { .lex_state = 0 },
    [279] = { .lex_state = 33 },
    [280] = { .lex_state = 0 },
    [281] = { .lex_state = 424 },
    [282] = { .lex_state = 424 },
    [283] = { .lex_state = 33 },
    [284] = { .lex_state = 424 },
    [285] = { .lex_state = 33 },
    [286] = { .lex_state = 0 },
    [287] = { .lex_state = 33 },
    [288] = { .lex_state = 33 },
    [289] = { .lex_state = 33 },
    [290] = { .lex_state = 424 },
    [291] = { .lex_state = 0 },
    [292] = { .lex_state = 33 },
    [293] = { .lex_state = 33 },
    [294] = { .lex_state = 424 },
    [295] = { .lex_state = 424 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 424 },
    [298] = { .lex_state = 37 },
    [299] = { .lex_state = 424 },
    [300] = { .lex_state = 33 },
    [301] = { .lex_state = 424 },
    [302] = { .lex_state = 33 },
    [303] = { .lex_state = 0 },
    [304] = { .lex_state = 0 },
    [305] = { .lex_state = 0 },
    [306] = { .lex_state = 33 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 33 },
    [309] = { .lex_state = 0 },
    [310] = { .lex_state = 33 },
    [311] = { .lex_state = 0 },
    [312] = { .lex_state = 0 },
    [313] = { .lex_state = 0 },
    [314] = { .lex_state = 0 },
    [315] = { .lex_state = 33 },
    [316] = { .lex_state = 424 },
    [317] = { .lex_state = 33 },
    [318] = { .lex_state = 424 },
    [319] = { .lex_state = 33 },
    [320] = { .lex_state = 37 },
    [321] = { .lex_state = 33 },
    [322] = { .lex_state = 0 },
    [323] = { .lex_state = 33 },
    [324] = { .lex_state = 33 },
    [325] = { .lex_state = 0 },
    [326] = { .lex_state = 0 },
    [327] = { .lex_state = 0 },
    [328] = { .lex_state = 33 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 46 },
    [331] = { .lex_state = 46 },
    [332] = { .lex_state = 0 },
    [333] = { .lex_state = 0 },
    [334] = { .lex_state = 0 },
    [335] = { .lex_state = 0 },
    [336] = { .lex_state = 37 },
    [337] = { .lex_state = 37 },
    [338] = { .lex_state = 37 },
    [339] = { .lex_state = 0 },
    [340] = { .lex_state = 47 },
    [341] = { .lex_state = 46 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 0 },
    [346] = { .lex_state = 37 },
    [347] = { .lex_state = 0 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 33 },
    [350] = { .lex_state = 0 },
    [351] = { .lex_state = 0 },
    [352] = { .lex_state = 0 },
    [353] = { .lex_state = 33 },
    [354] = { .lex_state = 0 },
    [355] = { .lex_state = 0 },
    [356] = { .lex_state = 0 },
    [357] = { .lex_state = 0 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 723 },
    [360] = { .lex_state = 33 },
    [361] = { .lex_state = 424 },
    [362] = { .lex_state = 0 },
    [363] = { .lex_state = 0 },
    [364] = { .lex_state = 37 },
    [365] = { .lex_state = 0 },
    [366] = { .lex_state = 0 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 0 },
    [369] = { .lex_state = 0 },
    [370] = { .lex_state = 0 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 0 },
    [373] = { .lex_state = 33 },
    [374] = { .lex_state = 0 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 424 },
    [378] = { .lex_state = 33 },
    [379] = { .lex_state = 0 },
    [380] = { .lex_state = 0 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 0 },
    [384] = { .lex_state = 0 },
    [385] = { .lex_state = 0 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 0 },
    [388] = { .lex_state = 0 },
    [389] = { .lex_state = 0 },
    [390] = { .lex_state = 37 },
    [391] = { .lex_state = 37 },
    [392] = { .lex_state = 37 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 0 },
    [395] = { .lex_state = 0 },
    [396] = { .lex_state = 0 },
    [397] = { .lex_state = 0 },
    [398] = { .lex_state = 0 },
    [399] = { .lex_state = 33 },
    [400] = { .lex_state = 0 },
    [401] = { .lex_state = 0 },
    [402] = { .lex_state = 33 },
    [403] = { .lex_state = 0 },
    [404] = { .lex_state = 0 },
    [405] = { .lex_state = 33 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 33 },
    [408] = { .lex_state = 46 },
    [409] = { .lex_state = 33 },
    [410] = { .lex_state = 0 },
    [411] = { .lex_state = 33 },
    [412] = { .lex_state = 0 },
    [413] = { .lex_state = 424 },
    [414] = { .lex_state = 424 },
    [415] = { .lex_state = 0 },
    [416] = { .lex_state = 33 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 0 },
    [419] = { .lex_state = 0 },
    [420] = { .lex_state = 33 },
    [421] = { .lex_state = 47 },
    [422] = { .lex_state = 37 },
    [423] = { .lex_state = 0 },
    [424] = { .lex_state = 37 },
    [425] = { .lex_state = 33 },
    [426] = { .lex_state = 37 },
    [427] = { .lex_state = 424 },
    [428] = { .lex_state = 0 },
    [429] = { .lex_state = 0 },
    [430] = { .lex_state = 0 },
    [431] = { .lex_state = 424 },
    [432] = { .lex_state = 0 },
    [433] = { .lex_state = 0 },
    [434] = { .lex_state = 0 },
    [435] = { .lex_state = 0 },
    [436] = { .lex_state = 424 },
    [437] = { .lex_state = 0 },
    [438] = { .lex_state = 0 },
    [439] = { .lex_state = 424 },
    [440] = { .lex_state = 424 },
    [441] = { .lex_state = 0 },
    [442] = { .lex_state = 0 },
    [443] = { .lex_state = 0 },
    [444] = { .lex_state = 0 },
    [445] = { .lex_state = 424 },
    [446] = { .lex_state = 0 },
    [447] = { .lex_state = 0 },
    [448] = { .lex_state = 0 },
    [449] = { .lex_state = 33 },
    [450] = { .lex_state = 33 },
    [451] = { .lex_state = 0 },
    [452] = { .lex_state = 508 },
    [453] = { .lex_state = 0 },
    [454] = { .lex_state = 33 },
    [455] = { .lex_state = 33 },
    [456] = { .lex_state = 33 },
    [457] = { .lex_state = 33 },
    [458] = { .lex_state = 424 },
    [459] = { .lex_state = 33 },
    [460] = { .lex_state = 33 },
    [461] = { .lex_state = 33 },
    [462] = { .lex_state = 0 },
    [463] = { .lex_state = 33 },
    [464] = { .lex_state = 0 },
    [465] = { .lex_state = 33 },
    [466] = { .lex_state = 0 },
    [467] = { .lex_state = 33 },
    [468] = { .lex_state = 33 },
    [469] = { .lex_state = 33 },
    [470] = { (TSStateId)(-1) },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_comment] = STATE(0),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(1),
        [anon_sym_exception] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(1),
        [anon_sym_RBRACE] = ACTIONS(1),
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_module] = ACTIONS(1),
        [anon_sym_struct] = ACTIONS(1),
        [anon_sym_COLON] = ACTIONS(1),
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
        [anon_sym_TILDE] = ACTIONS(1),
        [anon_sym_LPAREN] = ACTIONS(1),
        [anon_sym_RPAREN] = ACTIONS(1),
        [anon_sym_L] = ACTIONS(1),
        [anon_sym_DQUOTE] = ACTIONS(1),
        [anon_sym_SQUOTE] = ACTIONS(1),
        [aux_sym_char_literal_token1] = ACTIONS(1),
        [anon_sym_TRUE] = ACTIONS(1),
        [anon_sym_FALSE] = ACTIONS(1),
        [anon_sym_default] = ACTIONS(1),
        [anon_sym_enum] = ACTIONS(1),
        [anon_sym_COMMA] = ACTIONS(1),
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
        [anon_sym_LT] = ACTIONS(1),
        [anon_sym_GT] = ACTIONS(1),
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
        [anon_sym_fixed] = ACTIONS(1),
        [anon_sym_XCDR] = ACTIONS(1),
        [anon_sym_XCDR2] = ACTIONS(1),
        [sym_boolean_type] = ACTIONS(1),
        [sym_octet_type] = ACTIONS(1),
        [sym_signed_short_int] = ACTIONS(1),
        [sym_signed_long_int] = ACTIONS(1),
        [sym_signed_longlong_int] = ACTIONS(1),
        [sym_unsigned_short_int] = ACTIONS(1),
        [sym_unsigned_long_int] = ACTIONS(1),
        [sym_unsigned_longlong_int] = ACTIONS(1),
        [anon_sym_float] = ACTIONS(1),
        [anon_sym_double] = ACTIONS(1),
        [anon_sym_longdouble] = ACTIONS(1),
        [anon_sym_char] = ACTIONS(1),
        [anon_sym_wchar] = ACTIONS(1),
        [anon_sym_sequence] = ACTIONS(1),
        [anon_sym_string] = ACTIONS(1),
        [anon_sym_wstring] = ACTIONS(1),
        [anon_sym_map] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(442),
        [sym__definition] = STATE(67),
        [sym_except_dcl] = STATE(68),
        [sym_native_dcl] = STATE(441),
        [sym_module_dcl] = STATE(441),
        [sym_struct_forward_dcl] = STATE(441),
        [sym_struct_def] = STATE(441),
        [sym_enum_dcl] = STATE(441),
        [sym_enum_anno] = STATE(440),
        [sym_annotation_dcl] = STATE(441),
        [sym_union_forward_dcl] = STATE(441),
        [sym_union_def] = STATE(441),
        [sym_bitset_dcl] = STATE(441),
        [sym_bitmask_dcl] = STATE(441),
        [sym_typedef_dcl] = STATE(441),
        [sym_predefine] = STATE(68),
        [sym_interface_dcl] = STATE(441),
        [sym_interface_forward_dcl] = STATE(438),
        [sym_interface_def] = STATE(438),
        [sym_interface_header] = STATE(437),
        [sym_dds_request_topic] = STATE(142),
        [sym_dds_reply_topic] = STATE(142),
        [sym_interface_anno] = STATE(153),
        [sym_const_dcl] = STATE(441),
        [sym_data_representation] = STATE(250),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(16),
        [aux_sym_struct_def_repeat1] = STATE(154),
        [aux_sym_interface_def_repeat1] = STATE(115),
        [ts_builtin_sym_end] = ACTIONS(5),
        [anon_sym_exception] = ACTIONS(7),
        [anon_sym_native] = ACTIONS(9),
        [anon_sym_module] = ACTIONS(11),
        [anon_sym_struct] = ACTIONS(13),
        [anon_sym_enum] = ACTIONS(15),
        [anon_sym_ATignore_literal_names] = ACTIONS(17),
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_union] = ACTIONS(21),
        [anon_sym_bitset] = ACTIONS(23),
        [anon_sym_bitmask] = ACTIONS(25),
        [anon_sym_typedef] = ACTIONS(27),
        [anon_sym_POUNDdefine] = ACTIONS(29),
        [anon_sym_interface] = ACTIONS(31),
        [anon_sym_local] = ACTIONS(33),
        [sym_dds_service] = ACTIONS(35),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(37),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(39),
        [anon_sym_const] = ACTIONS(41),
        [sym_final] = ACTIONS(43),
        [anon_sym_ATdata_representation] = ACTIONS(45),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_RBRACE,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    STATE(2),
    1,
    sym_comment,
    STATE(11),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(150),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [116] = 31,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(83),
    1,
    anon_sym_RBRACE,
    ACTIONS(85),
    1,
    anon_sym_fixed,
    ACTIONS(91),
    1,
    anon_sym_AThashid,
    ACTIONS(94),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(103),
    1,
    sym_signed_longlong_int,
    ACTIONS(109),
    1,
    sym_unsigned_long_int,
    ACTIONS(115),
    1,
    anon_sym_longdouble,
    ACTIONS(121),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(124),
    1,
    sym_identifier,
    ACTIONS(127),
    1,
    anon_sym_sequence,
    ACTIONS(133),
    1,
    anon_sym_map,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(150),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(97),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(100),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(106),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(112),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(118),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(130),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(3),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(88),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [230] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    ACTIONS(136),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(4),
    1,
    sym_comment,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(150),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [346] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    ACTIONS(138),
    1,
    anon_sym_RBRACE,
    STATE(5),
    1,
    sym_comment,
    STATE(7),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(150),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [462] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(142),
    1,
    anon_sym_exception,
    ACTIONS(145),
    1,
    anon_sym_native,
    ACTIONS(148),
    1,
    anon_sym_module,
    ACTIONS(151),
    1,
    anon_sym_struct,
    ACTIONS(154),
    1,
    anon_sym_enum,
    ACTIONS(157),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(160),
    1,
    anon_sym_ATannotation,
    ACTIONS(163),
    1,
    anon_sym_union,
    ACTIONS(166),
    1,
    anon_sym_bitset,
    ACTIONS(169),
    1,
    anon_sym_bitmask,
    ACTIONS(172),
    1,
    anon_sym_typedef,
    ACTIONS(175),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(178),
    1,
    anon_sym_interface,
    ACTIONS(181),
    1,
    anon_sym_local,
    ACTIONS(184),
    1,
    sym_dds_service,
    ACTIONS(187),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(190),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(193),
    1,
    anon_sym_const,
    ACTIONS(196),
    1,
    sym_final,
    ACTIONS(199),
    1,
    anon_sym_ATdata_representation,
    STATE(67),
    1,
    sym__definition,
    STATE(115),
    1,
    aux_sym_interface_def_repeat1,
    STATE(153),
    1,
    sym_interface_anno,
    STATE(154),
    1,
    aux_sym_struct_def_repeat1,
    STATE(250),
    1,
    sym_data_representation,
    STATE(437),
    1,
    sym_interface_header,
    STATE(440),
    1,
    sym_enum_anno,
    ACTIONS(140),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(6),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    STATE(68),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(142),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(438),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(441),
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
    [582] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_RBRACE,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(7),
    1,
    sym_comment,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(150),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [698] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    ACTIONS(202),
    1,
    anon_sym_RBRACE,
    STATE(8),
    1,
    sym_comment,
    STATE(12),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(150),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [814] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    ACTIONS(204),
    1,
    anon_sym_RBRACE,
    STATE(4),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(9),
    1,
    sym_comment,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(150),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [930] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    ACTIONS(206),
    1,
    anon_sym_RBRACE,
    STATE(10),
    1,
    sym_comment,
    STATE(13),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(150),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1046] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    ACTIONS(208),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(11),
    1,
    sym_comment,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(150),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1162] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    ACTIONS(210),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(12),
    1,
    sym_comment,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(150),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1278] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    ACTIONS(212),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(13),
    1,
    sym_comment,
    STATE(18),
    1,
    aux_sym_member_repeat1,
    STATE(34),
    1,
    sym_member,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(150),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1394] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    ACTIONS(214),
    1,
    anon_sym_struct,
    ACTIONS(216),
    1,
    anon_sym_enum,
    ACTIONS(218),
    1,
    anon_sym_union,
    STATE(14),
    1,
    sym_comment,
    STATE(154),
    1,
    aux_sym_struct_def_repeat1,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(250),
    1,
    sym_data_representation,
    STATE(419),
    1,
    sym_type_declarator,
    STATE(420),
    1,
    sym_scoped_name,
    STATE(440),
    1,
    sym_enum_anno,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    STATE(149),
    7,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_simple_type_spec,
    sym_template_type_spec,
    [1509] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(7),
    1,
    anon_sym_exception,
    ACTIONS(9),
    1,
    anon_sym_native,
    ACTIONS(11),
    1,
    anon_sym_module,
    ACTIONS(13),
    1,
    anon_sym_struct,
    ACTIONS(15),
    1,
    anon_sym_enum,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_union,
    ACTIONS(23),
    1,
    anon_sym_bitset,
    ACTIONS(25),
    1,
    anon_sym_bitmask,
    ACTIONS(27),
    1,
    anon_sym_typedef,
    ACTIONS(29),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(31),
    1,
    anon_sym_interface,
    ACTIONS(33),
    1,
    anon_sym_local,
    ACTIONS(35),
    1,
    sym_dds_service,
    ACTIONS(37),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(39),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(41),
    1,
    anon_sym_const,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(220),
    1,
    anon_sym_RBRACE,
    STATE(15),
    1,
    sym_comment,
    STATE(17),
    1,
    aux_sym_specification_repeat1,
    STATE(67),
    1,
    sym__definition,
    STATE(115),
    1,
    aux_sym_interface_def_repeat1,
    STATE(153),
    1,
    sym_interface_anno,
    STATE(154),
    1,
    aux_sym_struct_def_repeat1,
    STATE(250),
    1,
    sym_data_representation,
    STATE(437),
    1,
    sym_interface_header,
    STATE(440),
    1,
    sym_enum_anno,
    STATE(68),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(142),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(438),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(441),
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
    [1630] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(7),
    1,
    anon_sym_exception,
    ACTIONS(9),
    1,
    anon_sym_native,
    ACTIONS(11),
    1,
    anon_sym_module,
    ACTIONS(13),
    1,
    anon_sym_struct,
    ACTIONS(15),
    1,
    anon_sym_enum,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_union,
    ACTIONS(23),
    1,
    anon_sym_bitset,
    ACTIONS(25),
    1,
    anon_sym_bitmask,
    ACTIONS(27),
    1,
    anon_sym_typedef,
    ACTIONS(29),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(31),
    1,
    anon_sym_interface,
    ACTIONS(33),
    1,
    anon_sym_local,
    ACTIONS(35),
    1,
    sym_dds_service,
    ACTIONS(37),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(39),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(41),
    1,
    anon_sym_const,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(222),
    1,
    ts_builtin_sym_end,
    STATE(6),
    1,
    aux_sym_specification_repeat1,
    STATE(16),
    1,
    sym_comment,
    STATE(67),
    1,
    sym__definition,
    STATE(115),
    1,
    aux_sym_interface_def_repeat1,
    STATE(153),
    1,
    sym_interface_anno,
    STATE(154),
    1,
    aux_sym_struct_def_repeat1,
    STATE(250),
    1,
    sym_data_representation,
    STATE(437),
    1,
    sym_interface_header,
    STATE(440),
    1,
    sym_enum_anno,
    STATE(68),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(142),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(438),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(441),
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
    [1751] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(7),
    1,
    anon_sym_exception,
    ACTIONS(9),
    1,
    anon_sym_native,
    ACTIONS(11),
    1,
    anon_sym_module,
    ACTIONS(13),
    1,
    anon_sym_struct,
    ACTIONS(15),
    1,
    anon_sym_enum,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_union,
    ACTIONS(23),
    1,
    anon_sym_bitset,
    ACTIONS(25),
    1,
    anon_sym_bitmask,
    ACTIONS(27),
    1,
    anon_sym_typedef,
    ACTIONS(29),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(31),
    1,
    anon_sym_interface,
    ACTIONS(33),
    1,
    anon_sym_local,
    ACTIONS(35),
    1,
    sym_dds_service,
    ACTIONS(37),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(39),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(41),
    1,
    anon_sym_const,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(224),
    1,
    anon_sym_RBRACE,
    STATE(6),
    1,
    aux_sym_specification_repeat1,
    STATE(17),
    1,
    sym_comment,
    STATE(67),
    1,
    sym__definition,
    STATE(115),
    1,
    aux_sym_interface_def_repeat1,
    STATE(153),
    1,
    sym_interface_anno,
    STATE(154),
    1,
    aux_sym_struct_def_repeat1,
    STATE(250),
    1,
    sym_data_representation,
    STATE(437),
    1,
    sym_interface_header,
    STATE(440),
    1,
    sym_enum_anno,
    STATE(68),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(142),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(438),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(441),
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
    [1872] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(53),
    1,
    anon_sym_AThashid,
    ACTIONS(55),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    STATE(18),
    1,
    sym_comment,
    STATE(33),
    1,
    aux_sym_member_repeat1,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(141),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    ACTIONS(51),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [1979] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    ACTIONS(226),
    1,
    anon_sym_RBRACE,
    ACTIONS(228),
    1,
    anon_sym_void,
    ACTIONS(230),
    1,
    anon_sym_readonly,
    ACTIONS(232),
    1,
    anon_sym_attribute,
    STATE(19),
    1,
    sym_comment,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(224),
    1,
    sym_export,
    STATE(332),
    1,
    sym_interface_body,
    STATE(373),
    1,
    sym_op_type_spec,
    STATE(378),
    1,
    sym_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(369),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(374),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    [2091] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    ACTIONS(228),
    1,
    anon_sym_void,
    ACTIONS(230),
    1,
    anon_sym_readonly,
    ACTIONS(232),
    1,
    anon_sym_attribute,
    ACTIONS(234),
    1,
    anon_sym_RBRACE,
    STATE(20),
    1,
    sym_comment,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(224),
    1,
    sym_export,
    STATE(373),
    1,
    sym_op_type_spec,
    STATE(376),
    1,
    sym_interface_body,
    STATE(378),
    1,
    sym_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(369),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(374),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    [2203] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    ACTIONS(228),
    1,
    anon_sym_void,
    ACTIONS(230),
    1,
    anon_sym_readonly,
    ACTIONS(232),
    1,
    anon_sym_attribute,
    ACTIONS(236),
    1,
    anon_sym_RBRACE,
    STATE(21),
    1,
    sym_comment,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(224),
    1,
    sym_export,
    STATE(373),
    1,
    sym_op_type_spec,
    STATE(378),
    1,
    sym_type_spec,
    STATE(400),
    1,
    sym_interface_body,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(369),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(374),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    [2315] = 30,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    ACTIONS(228),
    1,
    anon_sym_void,
    ACTIONS(230),
    1,
    anon_sym_readonly,
    ACTIONS(232),
    1,
    anon_sym_attribute,
    STATE(22),
    1,
    sym_comment,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(275),
    1,
    sym_export,
    STATE(373),
    1,
    sym_op_type_spec,
    STATE(378),
    1,
    sym_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(369),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(374),
    2,
    sym_op_dcl,
    sym_attr_dcl,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    [2421] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(238),
    1,
    anon_sym_RBRACE,
    ACTIONS(240),
    1,
    anon_sym_enum,
    ACTIONS(242),
    1,
    sym_any_const_type,
    ACTIONS(244),
    1,
    anon_sym_fixed,
    STATE(23),
    1,
    sym_comment,
    STATE(25),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(55),
    1,
    sym_annotation_member,
    STATE(264),
    1,
    sym_annotation_member_type,
    STATE(316),
    1,
    sym_enum_dcl,
    STATE(349),
    1,
    sym_scoped_name,
    STATE(352),
    1,
    sym_annotation_body,
    STATE(353),
    1,
    sym_const_type,
    STATE(436),
    1,
    sym_enum_anno,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(246),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(409),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_sequence_type,
    sym_string_type,
    [2521] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(248),
    1,
    anon_sym_RBRACE,
    ACTIONS(250),
    1,
    anon_sym_enum,
    ACTIONS(253),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(256),
    1,
    sym_any_const_type,
    ACTIONS(259),
    1,
    anon_sym_fixed,
    ACTIONS(268),
    1,
    sym_signed_longlong_int,
    ACTIONS(274),
    1,
    sym_unsigned_long_int,
    ACTIONS(280),
    1,
    anon_sym_longdouble,
    ACTIONS(286),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(289),
    1,
    sym_identifier,
    ACTIONS(292),
    1,
    anon_sym_sequence,
    STATE(55),
    1,
    sym_annotation_member,
    STATE(264),
    1,
    sym_annotation_member_type,
    STATE(316),
    1,
    sym_enum_dcl,
    STATE(349),
    1,
    sym_scoped_name,
    STATE(353),
    1,
    sym_const_type,
    STATE(436),
    1,
    sym_enum_anno,
    ACTIONS(262),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(265),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(271),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(277),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(283),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(295),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(24),
    2,
    sym_comment,
    aux_sym_annotation_body_repeat1,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(409),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_sequence_type,
    sym_string_type,
    [2616] = 28,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(17),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(240),
    1,
    anon_sym_enum,
    ACTIONS(242),
    1,
    sym_any_const_type,
    ACTIONS(244),
    1,
    anon_sym_fixed,
    ACTIONS(298),
    1,
    anon_sym_RBRACE,
    STATE(24),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(25),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_annotation_member,
    STATE(264),
    1,
    sym_annotation_member_type,
    STATE(316),
    1,
    sym_enum_dcl,
    STATE(349),
    1,
    sym_scoped_name,
    STATE(353),
    1,
    sym_const_type,
    STATE(436),
    1,
    sym_enum_anno,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(246),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(409),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_sequence_type,
    sym_string_type,
    [2713] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    ACTIONS(300),
    1,
    anon_sym_COMMA,
    ACTIONS(302),
    1,
    anon_sym_GT,
    ACTIONS(304),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(306),
    1,
    sym_identifier,
    STATE(26),
    1,
    sym_comment,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(239),
    1,
    sym_scoped_name,
    STATE(338),
    1,
    sym_type_spec,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    [2802] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    STATE(27),
    1,
    sym_comment,
    STATE(180),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(404),
    1,
    sym_element_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    [2888] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    STATE(28),
    1,
    sym_comment,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(243),
    1,
    sym_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    [2971] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    STATE(29),
    1,
    sym_comment,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(268),
    1,
    sym_scoped_name,
    STATE(334),
    1,
    sym_type_spec,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    [3054] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    STATE(30),
    1,
    sym_comment,
    STATE(202),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    [3137] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    STATE(31),
    1,
    sym_comment,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(293),
    1,
    sym_type_spec,
    STATE(420),
    1,
    sym_scoped_name,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    [3220] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(49),
    1,
    anon_sym_fixed,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(81),
    1,
    anon_sym_map,
    ACTIONS(304),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(306),
    1,
    sym_identifier,
    STATE(32),
    1,
    sym_comment,
    STATE(221),
    1,
    sym_base_type_spec,
    STATE(239),
    1,
    sym_scoped_name,
    STATE(320),
    1,
    sym_type_spec,
    ACTIONS(57),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(226),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(238),
    3,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    STATE(220),
    4,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    sym_map_type,
    [3303] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(313),
    1,
    anon_sym_AThashid,
    ACTIONS(316),
    1,
    anon_sym_ATtry_construct,
    STATE(41),
    1,
    sym_struct_modifier,
    STATE(33),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(43),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(319),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(310),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(308),
    15,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_map,
    [3356] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(34),
    1,
    sym_comment,
    ACTIONS(321),
    14,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(323),
    15,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_map,
    [3396] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(244),
    1,
    anon_sym_fixed,
    STATE(35),
    1,
    sym_comment,
    STATE(405),
    1,
    sym_scoped_name,
    STATE(465),
    1,
    sym_const_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(246),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(409),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_sequence_type,
    sym_string_type,
    [3466] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(69),
    1,
    anon_sym_longdouble,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(77),
    1,
    anon_sym_sequence,
    ACTIONS(244),
    1,
    anon_sym_fixed,
    STATE(36),
    1,
    sym_comment,
    STATE(405),
    1,
    sym_scoped_name,
    STATE(407),
    1,
    sym_const_type,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(67),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(79),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(246),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(409),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_sequence_type,
    sym_string_type,
    [3536] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(37),
    1,
    sym_comment,
    ACTIONS(325),
    14,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(327),
    15,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_map,
    [3576] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(38),
    1,
    sym_comment,
    ACTIONS(329),
    14,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(331),
    15,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_map,
    [3616] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(39),
    1,
    sym_comment,
    ACTIONS(333),
    14,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(335),
    15,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_map,
    [3656] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(40),
    1,
    sym_comment,
    ACTIONS(337),
    14,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(339),
    15,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_map,
    [3696] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(41),
    1,
    sym_comment,
    ACTIONS(343),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(341),
    15,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_map,
    [3735] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(42),
    1,
    sym_comment,
    ACTIONS(347),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(345),
    15,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_map,
    [3774] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(43),
    1,
    sym_comment,
    ACTIONS(351),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(349),
    15,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_map,
    [3813] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(44),
    1,
    sym_comment,
    ACTIONS(355),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(353),
    15,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_map,
    [3852] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(45),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(112),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(127),
    1,
    sym_or_expr,
    STATE(217),
    1,
    sym_const_expr,
    STATE(365),
    1,
    sym_positive_int_const,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [3927] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(46),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(112),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(127),
    1,
    sym_or_expr,
    STATE(217),
    1,
    sym_const_expr,
    STATE(364),
    1,
    sym_positive_int_const,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [4002] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(47),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(112),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(127),
    1,
    sym_or_expr,
    STATE(217),
    1,
    sym_const_expr,
    STATE(339),
    1,
    sym_positive_int_const,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [4077] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(48),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(112),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(127),
    1,
    sym_or_expr,
    STATE(217),
    1,
    sym_const_expr,
    STATE(298),
    1,
    sym_positive_int_const,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [4152] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(49),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(112),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(127),
    1,
    sym_or_expr,
    STATE(217),
    1,
    sym_const_expr,
    STATE(336),
    1,
    sym_positive_int_const,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [4227] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(50),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(112),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(127),
    1,
    sym_or_expr,
    STATE(217),
    1,
    sym_const_expr,
    STATE(392),
    1,
    sym_positive_int_const,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [4302] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(51),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(112),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(127),
    1,
    sym_or_expr,
    STATE(217),
    1,
    sym_const_expr,
    STATE(337),
    1,
    sym_positive_int_const,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [4377] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(52),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(112),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(127),
    1,
    sym_or_expr,
    STATE(270),
    1,
    sym_const_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [4449] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(373),
    1,
    sym_identifier,
    STATE(53),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(108),
    1,
    sym_scoped_name,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_mult_expr,
    STATE(122),
    1,
    sym_add_expr,
    STATE(137),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(254),
    1,
    sym_xor_expr,
    STATE(266),
    1,
    sym_or_expr,
    STATE(270),
    1,
    sym_const_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [4521] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(54),
    1,
    sym_comment,
    ACTIONS(375),
    7,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(377),
    16,
    anon_sym_enum,
    sym_any_const_type,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    [4555] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(55),
    1,
    sym_comment,
    ACTIONS(379),
    7,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(381),
    16,
    anon_sym_enum,
    sym_any_const_type,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    [4589] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(56),
    1,
    sym_comment,
    ACTIONS(383),
    7,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(385),
    16,
    anon_sym_enum,
    sym_any_const_type,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    [4623] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(57),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(112),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(127),
    1,
    sym_or_expr,
    STATE(403),
    1,
    sym_const_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [4695] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(58),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(112),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(127),
    1,
    sym_or_expr,
    STATE(357),
    1,
    sym_const_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [4767] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(59),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(112),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(127),
    1,
    sym_or_expr,
    STATE(335),
    1,
    sym_const_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [4839] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(60),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(112),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(127),
    1,
    sym_or_expr,
    STATE(406),
    1,
    sym_const_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [4911] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(61),
    1,
    sym_comment,
    ACTIONS(387),
    7,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(389),
    16,
    anon_sym_enum,
    sym_any_const_type,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    [4945] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(62),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(112),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_and_expr,
    STATE(121),
    1,
    sym_xor_expr,
    STATE(127),
    1,
    sym_or_expr,
    STATE(354),
    1,
    sym_const_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [5017] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(63),
    1,
    sym_comment,
    ACTIONS(391),
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
    [5048] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(64),
    1,
    sym_comment,
    ACTIONS(393),
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
    [5079] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(65),
    1,
    sym_comment,
    ACTIONS(395),
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
    [5110] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(66),
    1,
    sym_comment,
    ACTIONS(397),
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
    [5141] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(67),
    1,
    sym_comment,
    ACTIONS(399),
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
    [5172] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(68),
    1,
    sym_comment,
    ACTIONS(401),
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
    [5203] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(373),
    1,
    sym_identifier,
    STATE(69),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(108),
    1,
    sym_scoped_name,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_mult_expr,
    STATE(122),
    1,
    sym_add_expr,
    STATE(137),
    1,
    sym_shift_expr,
    STATE(159),
    1,
    sym_and_expr,
    STATE(248),
    1,
    sym_xor_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [5269] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(70),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(112),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_and_expr,
    STATE(123),
    1,
    sym_xor_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [5335] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(71),
    1,
    sym_comment,
    ACTIONS(405),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(403),
    15,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_map,
    [5366] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(72),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(112),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(116),
    1,
    sym_and_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [5429] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(409),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(407),
    15,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_map,
    [5460] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(413),
    5,
    sym_signed_longlong_int,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(411),
    15,
    anon_sym_fixed,
    sym_boolean_type,
    sym_octet_type,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_unsigned_long_int,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_map,
    [5491] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(373),
    1,
    sym_identifier,
    STATE(75),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(108),
    1,
    sym_scoped_name,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_mult_expr,
    STATE(122),
    1,
    sym_add_expr,
    STATE(137),
    1,
    sym_shift_expr,
    STATE(160),
    1,
    sym_and_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [5554] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(76),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(102),
    1,
    sym_add_expr,
    STATE(110),
    1,
    sym_shift_expr,
    STATE(114),
    1,
    sym_unary_operator,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [5614] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(373),
    1,
    sym_identifier,
    STATE(77),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(108),
    1,
    sym_scoped_name,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_mult_expr,
    STATE(122),
    1,
    sym_add_expr,
    STATE(134),
    1,
    sym_shift_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [5674] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(417),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(415),
    16,
    anon_sym_SEMI,
    anon_sym_LBRACE,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    sym_identifier,
    [5703] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(421),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(419),
    16,
    anon_sym_SEMI,
    anon_sym_LBRACE,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    sym_identifier,
    [5732] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(80),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_mult_expr,
    STATE(103),
    1,
    sym_add_expr,
    STATE(114),
    1,
    sym_unary_operator,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [5789] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(373),
    1,
    sym_identifier,
    STATE(81),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(108),
    1,
    sym_scoped_name,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_mult_expr,
    STATE(120),
    1,
    sym_add_expr,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [5846] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(425),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(423),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [5874] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(373),
    1,
    sym_identifier,
    STATE(83),
    1,
    sym_comment,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(108),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [5928] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(84),
    1,
    sym_comment,
    ACTIONS(429),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(427),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [5956] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(85),
    1,
    sym_comment,
    ACTIONS(433),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(431),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [5984] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(437),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(435),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6012] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(87),
    1,
    sym_comment,
    ACTIONS(441),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(439),
    14,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6042] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(61),
    1,
    sym_signed_longlong_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(445),
    1,
    sym_boolean_type,
    STATE(88),
    1,
    sym_comment,
    STATE(285),
    1,
    sym_scoped_name,
    STATE(393),
    1,
    sym_switch_type_spec,
    ACTIONS(59),
    2,
    sym_signed_short_int,
    sym_signed_long_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(71),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    STATE(384),
    2,
    sym_integer_type,
    sym_char_type,
    [6090] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(89),
    1,
    sym_comment,
    ACTIONS(441),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(439),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6118] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(90),
    1,
    sym_comment,
    ACTIONS(449),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(447),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6146] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(453),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(451),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6174] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(86),
    1,
    sym_literal,
    STATE(90),
    1,
    sym_unary_expr,
    STATE(92),
    1,
    sym_comment,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(101),
    1,
    sym_mult_expr,
    STATE(114),
    1,
    sym_unary_operator,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [6228] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(457),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(455),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6256] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(461),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(459),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6284] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(465),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(463),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6312] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(96),
    1,
    sym_comment,
    ACTIONS(437),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(435),
    14,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6342] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(469),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(467),
    15,
    anon_sym_SEMI,
    anon_sym_COLON,
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
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_typedef,
    [6370] = 16,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(373),
    1,
    sym_identifier,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(86),
    1,
    sym_literal,
    STATE(98),
    1,
    sym_comment,
    STATE(108),
    1,
    sym_scoped_name,
    STATE(111),
    1,
    sym_unary_operator,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [6421] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(475),
    1,
    anon_sym_SLASH,
    ACTIONS(477),
    1,
    anon_sym_GT,
    STATE(99),
    1,
    sym_comment,
    ACTIONS(473),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(471),
    12,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6452] = 16,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_LPAREN,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    STATE(85),
    1,
    sym_unary_expr,
    STATE(86),
    1,
    sym_literal,
    STATE(96),
    1,
    sym_scoped_name,
    STATE(100),
    1,
    sym_comment,
    STATE(114),
    1,
    sym_unary_operator,
    ACTIONS(357),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [6503] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(475),
    1,
    anon_sym_SLASH,
    ACTIONS(481),
    1,
    anon_sym_GT,
    STATE(101),
    1,
    sym_comment,
    ACTIONS(473),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(479),
    12,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6534] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(487),
    1,
    anon_sym_GT,
    STATE(102),
    1,
    sym_comment,
    ACTIONS(485),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(483),
    10,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6560] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(491),
    1,
    anon_sym_GT,
    STATE(103),
    1,
    sym_comment,
    ACTIONS(485),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(489),
    10,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6586] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(493),
    1,
    sym_identifier,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(441),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(439),
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
    [6611] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    sym_signed_long_int,
    ACTIONS(65),
    1,
    sym_unsigned_long_int,
    STATE(105),
    1,
    sym_comment,
    STATE(390),
    1,
    sym_integer_type,
    STATE(391),
    1,
    sym_destination_type,
    ACTIONS(61),
    2,
    sym_signed_short_int,
    sym_signed_longlong_int,
    ACTIONS(63),
    2,
    sym_unsigned_short_int,
    sym_unsigned_longlong_int,
    ACTIONS(495),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(172),
    2,
    sym_signed_int,
    sym_unsigned_int,
    [6646] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(106),
    1,
    sym_comment,
    ACTIONS(421),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
    ACTIONS(419),
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
    [6669] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(417),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
    ACTIONS(415),
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
    [6692] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(493),
    1,
    sym_identifier,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(437),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(435),
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
    [6717] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(499),
    1,
    anon_sym_SLASH,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(497),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(479),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [6741] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(505),
    1,
    anon_sym_GT,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(503),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(501),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6765] = 12,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(373),
    1,
    sym_identifier,
    ACTIONS(507),
    1,
    anon_sym_LPAREN,
    STATE(89),
    1,
    sym_literal,
    STATE(104),
    1,
    sym_scoped_name,
    STATE(111),
    1,
    sym_comment,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [6803] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(511),
    1,
    anon_sym_GT,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(503),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(509),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [6827] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(499),
    1,
    anon_sym_SLASH,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(497),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(471),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [6851] = 12,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(75),
    1,
    sym_identifier,
    ACTIONS(363),
    1,
    anon_sym_L,
    ACTIONS(365),
    1,
    anon_sym_DQUOTE,
    ACTIONS(367),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(507),
    1,
    anon_sym_LPAREN,
    STATE(87),
    1,
    sym_scoped_name,
    STATE(89),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_comment,
    STATE(84),
    2,
    sym_string_literal,
    sym_char_literal,
    [6889] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(35),
    1,
    sym_dds_service,
    ACTIONS(37),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(39),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(513),
    1,
    anon_sym_interface,
    ACTIONS(515),
    1,
    anon_sym_local,
    STATE(115),
    1,
    sym_comment,
    STATE(118),
    1,
    aux_sym_interface_def_repeat1,
    STATE(153),
    1,
    sym_interface_anno,
    STATE(415),
    1,
    sym_interface_header,
    STATE(142),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [6924] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(519),
    1,
    anon_sym_DOLLAR,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(517),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [6944] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(519),
    1,
    anon_sym_DOLLAR,
    STATE(117),
    1,
    sym_comment,
    ACTIONS(521),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [6964] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(525),
    1,
    sym_dds_service,
    ACTIONS(528),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(531),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(153),
    1,
    sym_interface_anno,
    ACTIONS(523),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(118),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(142),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [6992] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(534),
    1,
    anon_sym_SEMI,
    ACTIONS(536),
    1,
    anon_sym_COMMA,
    ACTIONS(538),
    1,
    anon_sym_getraises,
    ACTIONS(540),
    1,
    anon_sym_setraises,
    STATE(119),
    1,
    sym_comment,
    STATE(168),
    1,
    sym_get_excep_expr,
    STATE(246),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(343),
    1,
    sym_attr_raises_expr,
    STATE(345),
    1,
    sym_set_excep_expr,
    [7023] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(542),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(489),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [7042] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(546),
    1,
    anon_sym_CARET,
    STATE(121),
    1,
    sym_comment,
    ACTIONS(544),
    7,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [7061] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(122),
    1,
    sym_comment,
    ACTIONS(542),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(483),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [7080] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(546),
    1,
    anon_sym_CARET,
    STATE(123),
    1,
    sym_comment,
    ACTIONS(548),
    7,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [7099] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(552),
    3,
    anon_sym_L,
    sym_number_literal,
    sym_identifier,
    ACTIONS(550),
    4,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    anon_sym_COLON_COLON,
    [7117] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(554),
    1,
    anon_sym_RPAREN,
    ACTIONS(556),
    1,
    anon_sym_in,
    STATE(31),
    1,
    sym_param_attribute,
    STATE(125),
    1,
    sym_comment,
    STATE(234),
    1,
    sym_param_dcl,
    STATE(347),
    1,
    sym_parameter_dcls,
    ACTIONS(558),
    2,
    anon_sym_out,
    anon_sym_inout,
    [7143] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(126),
    1,
    sym_comment,
    ACTIONS(560),
    7,
    anon_sym_SEMI,
    anon_sym_RPAREN,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    [7159] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(564),
    1,
    anon_sym_PIPE,
    STATE(127),
    1,
    sym_comment,
    ACTIONS(562),
    6,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [7177] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(566),
    1,
    anon_sym_RBRACE,
    ACTIONS(568),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(570),
    1,
    sym_identifier,
    STATE(128),
    1,
    sym_comment,
    STATE(161),
    1,
    aux_sym_enumerator_repeat1,
    STATE(260),
    1,
    sym_enumerator,
    STATE(324),
    1,
    sym_enum_modifier,
    [7202] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(574),
    1,
    anon_sym_LBRACK,
    STATE(129),
    1,
    sym_comment,
    STATE(131),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(184),
    1,
    sym_fixed_array_size,
    ACTIONS(572),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [7223] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(568),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(570),
    1,
    sym_identifier,
    ACTIONS(576),
    1,
    anon_sym_RBRACE,
    STATE(130),
    1,
    sym_comment,
    STATE(161),
    1,
    aux_sym_enumerator_repeat1,
    STATE(244),
    1,
    sym_enumerator,
    STATE(324),
    1,
    sym_enum_modifier,
    [7248] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(580),
    1,
    anon_sym_LBRACK,
    STATE(184),
    1,
    sym_fixed_array_size,
    STATE(131),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(578),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [7267] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(583),
    1,
    anon_sym_RBRACE,
    ACTIONS(585),
    1,
    anon_sym_default,
    ACTIONS(587),
    1,
    anon_sym_case,
    STATE(27),
    1,
    sym_case_label,
    STATE(132),
    1,
    sym_comment,
    STATE(139),
    1,
    aux_sym_union_def_repeat1,
    STATE(197),
    1,
    sym_case,
    [7292] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(574),
    1,
    anon_sym_LBRACK,
    STATE(129),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(133),
    1,
    sym_comment,
    STATE(184),
    1,
    sym_fixed_array_size,
    ACTIONS(560),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [7313] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(134),
    1,
    sym_comment,
    ACTIONS(589),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(501),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [7330] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(585),
    1,
    anon_sym_default,
    ACTIONS(587),
    1,
    anon_sym_case,
    ACTIONS(591),
    1,
    anon_sym_RBRACE,
    STATE(27),
    1,
    sym_case_label,
    STATE(132),
    1,
    aux_sym_union_def_repeat1,
    STATE(135),
    1,
    sym_comment,
    STATE(197),
    1,
    sym_case,
    [7355] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(568),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(570),
    1,
    sym_identifier,
    ACTIONS(593),
    1,
    anon_sym_RBRACE,
    STATE(136),
    1,
    sym_comment,
    STATE(161),
    1,
    aux_sym_enumerator_repeat1,
    STATE(255),
    1,
    sym_enumerator,
    STATE(324),
    1,
    sym_enum_modifier,
    [7380] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(137),
    1,
    sym_comment,
    ACTIONS(589),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(509),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [7397] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(568),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(570),
    1,
    sym_identifier,
    ACTIONS(595),
    1,
    anon_sym_RBRACE,
    STATE(138),
    1,
    sym_comment,
    STATE(161),
    1,
    aux_sym_enumerator_repeat1,
    STATE(253),
    1,
    sym_enumerator,
    STATE(324),
    1,
    sym_enum_modifier,
    [7422] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(597),
    1,
    anon_sym_RBRACE,
    ACTIONS(599),
    1,
    anon_sym_default,
    ACTIONS(602),
    1,
    anon_sym_case,
    STATE(27),
    1,
    sym_case_label,
    STATE(197),
    1,
    sym_case,
    STATE(139),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [7445] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(605),
    1,
    anon_sym_RBRACE,
    ACTIONS(607),
    1,
    anon_sym_bitfield,
    STATE(140),
    1,
    sym_comment,
    STATE(155),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(237),
    1,
    sym_bitfield_spec,
    STATE(318),
    1,
    sym_bitfield,
    [7467] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(609),
    1,
    sym_identifier,
    STATE(141),
    1,
    sym_comment,
    STATE(179),
    1,
    sym_declarator,
    STATE(227),
    1,
    sym_declarators,
    STATE(210),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7487] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(142),
    1,
    sym_comment,
    ACTIONS(611),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7501] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(613),
    1,
    anon_sym_struct,
    ACTIONS(615),
    1,
    sym_final,
    ACTIONS(618),
    1,
    anon_sym_ATdata_representation,
    STATE(250),
    1,
    sym_data_representation,
    STATE(143),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [7521] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(556),
    1,
    anon_sym_in,
    STATE(31),
    1,
    sym_param_attribute,
    STATE(144),
    1,
    sym_comment,
    STATE(280),
    1,
    sym_param_dcl,
    ACTIONS(558),
    2,
    anon_sym_out,
    anon_sym_inout,
    [7541] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(568),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(570),
    1,
    sym_identifier,
    STATE(145),
    1,
    sym_comment,
    STATE(161),
    1,
    aux_sym_enumerator_repeat1,
    STATE(291),
    1,
    sym_enumerator,
    STATE(324),
    1,
    sym_enum_modifier,
    [7563] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(607),
    1,
    anon_sym_bitfield,
    ACTIONS(621),
    1,
    anon_sym_RBRACE,
    STATE(146),
    1,
    sym_comment,
    STATE(147),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(237),
    1,
    sym_bitfield_spec,
    STATE(318),
    1,
    sym_bitfield,
    [7585] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(607),
    1,
    anon_sym_bitfield,
    ACTIONS(623),
    1,
    anon_sym_RBRACE,
    STATE(147),
    1,
    sym_comment,
    STATE(155),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(237),
    1,
    sym_bitfield_spec,
    STATE(318),
    1,
    sym_bitfield,
    [7607] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(536),
    1,
    anon_sym_COMMA,
    ACTIONS(625),
    1,
    anon_sym_SEMI,
    ACTIONS(627),
    1,
    anon_sym_raises,
    STATE(148),
    1,
    sym_comment,
    STATE(188),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(366),
    1,
    sym_raises_expr,
    [7629] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(609),
    1,
    sym_identifier,
    STATE(149),
    1,
    sym_comment,
    STATE(199),
    1,
    sym_any_declarator,
    STATE(389),
    1,
    sym_any_declarators,
    STATE(286),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7649] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(609),
    1,
    sym_identifier,
    STATE(150),
    1,
    sym_comment,
    STATE(179),
    1,
    sym_declarator,
    STATE(212),
    1,
    sym_declarators,
    STATE(210),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7669] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(151),
    1,
    sym_comment,
    ACTIONS(629),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7683] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(152),
    1,
    sym_comment,
    ACTIONS(631),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7697] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(153),
    1,
    sym_comment,
    ACTIONS(633),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7711] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(635),
    1,
    anon_sym_struct,
    STATE(143),
    1,
    aux_sym_struct_def_repeat1,
    STATE(154),
    1,
    sym_comment,
    STATE(250),
    1,
    sym_data_representation,
    [7733] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(637),
    1,
    anon_sym_RBRACE,
    ACTIONS(639),
    1,
    anon_sym_bitfield,
    STATE(237),
    1,
    sym_bitfield_spec,
    STATE(318),
    1,
    sym_bitfield,
    STATE(155),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [7753] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(607),
    1,
    anon_sym_bitfield,
    ACTIONS(642),
    1,
    anon_sym_RBRACE,
    STATE(140),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(156),
    1,
    sym_comment,
    STATE(237),
    1,
    sym_bitfield_spec,
    STATE(318),
    1,
    sym_bitfield,
    [7775] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(644),
    1,
    anon_sym_RPAREN,
    ACTIONS(646),
    1,
    anon_sym_XCDR,
    ACTIONS(649),
    1,
    anon_sym_XCDR2,
    STATE(157),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [7792] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(652),
    1,
    anon_sym_SEMI,
    ACTIONS(654),
    1,
    anon_sym_setraises,
    STATE(294),
    1,
    sym_set_excep_expr,
    STATE(158),
    2,
    sym_comment,
    aux_sym_attr_raises_expr_repeat1,
    [7809] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(657),
    1,
    anon_sym_DOLLAR,
    STATE(159),
    1,
    sym_comment,
    ACTIONS(521),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [7824] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(657),
    1,
    anon_sym_DOLLAR,
    STATE(160),
    1,
    sym_comment,
    ACTIONS(517),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [7839] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(568),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(659),
    1,
    sym_identifier,
    STATE(161),
    1,
    sym_comment,
    STATE(173),
    1,
    aux_sym_enumerator_repeat1,
    STATE(324),
    1,
    sym_enum_modifier,
    [7858] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(663),
    1,
    anon_sym_COMMA,
    ACTIONS(661),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(162),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [7873] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(668),
    1,
    anon_sym_LBRACE,
    ACTIONS(670),
    1,
    anon_sym_COLON,
    STATE(163),
    1,
    sym_comment,
    ACTIONS(666),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7890] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(672),
    1,
    sym_identifier,
    STATE(164),
    1,
    sym_comment,
    STATE(194),
    1,
    sym_scoped_name,
    STATE(322),
    1,
    sym_interface_name,
    [7909] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(165),
    1,
    sym_comment,
    ACTIONS(674),
    4,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7922] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(166),
    1,
    sym_comment,
    ACTIONS(676),
    4,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [7935] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(609),
    1,
    sym_identifier,
    STATE(167),
    1,
    sym_comment,
    STATE(236),
    1,
    sym_declarator,
    STATE(210),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7952] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(540),
    1,
    anon_sym_setraises,
    ACTIONS(678),
    1,
    anon_sym_SEMI,
    STATE(168),
    1,
    sym_comment,
    STATE(178),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(294),
    1,
    sym_set_excep_expr,
    [7971] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(682),
    1,
    anon_sym_COMMA,
    STATE(162),
    1,
    aux_sym_declarators_repeat1,
    STATE(169),
    1,
    sym_comment,
    ACTIONS(680),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [7988] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(170),
    1,
    sym_comment,
    ACTIONS(684),
    4,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8001] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(688),
    1,
    anon_sym_LT,
    STATE(171),
    1,
    sym_comment,
    ACTIONS(686),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8016] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(172),
    1,
    sym_comment,
    ACTIONS(690),
    4,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8029] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(692),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(695),
    1,
    sym_identifier,
    STATE(324),
    1,
    sym_enum_modifier,
    STATE(173),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [8046] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(697),
    1,
    anon_sym_SEMI,
    ACTIONS(699),
    1,
    anon_sym_LBRACE,
    ACTIONS(701),
    1,
    anon_sym_COLON,
    STATE(174),
    1,
    sym_comment,
    STATE(388),
    1,
    sym_interface_inheritance_spec,
    [8065] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(443),
    1,
    sym_identifier,
    ACTIONS(703),
    1,
    anon_sym_RPAREN,
    ACTIONS(705),
    1,
    anon_sym_COMMA,
    STATE(175),
    1,
    sym_comment,
    STATE(223),
    1,
    aux_sym_raises_expr_repeat1,
    [8084] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(672),
    1,
    sym_identifier,
    ACTIONS(707),
    1,
    anon_sym_RPAREN,
    STATE(176),
    1,
    sym_comment,
    STATE(185),
    1,
    sym_scoped_name,
    [8103] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(177),
    1,
    sym_comment,
    ACTIONS(709),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [8116] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(540),
    1,
    anon_sym_setraises,
    ACTIONS(711),
    1,
    anon_sym_SEMI,
    STATE(158),
    1,
    aux_sym_attr_raises_expr_repeat1,
    STATE(178),
    1,
    sym_comment,
    STATE(294),
    1,
    sym_set_excep_expr,
    [8135] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(682),
    1,
    anon_sym_COMMA,
    STATE(169),
    1,
    aux_sym_declarators_repeat1,
    STATE(179),
    1,
    sym_comment,
    ACTIONS(713),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8152] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(609),
    1,
    sym_identifier,
    STATE(180),
    1,
    sym_comment,
    STATE(417),
    1,
    sym_declarator,
    STATE(210),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8169] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(672),
    1,
    sym_identifier,
    ACTIONS(715),
    1,
    anon_sym_RPAREN,
    STATE(175),
    1,
    sym_scoped_name,
    STATE(181),
    1,
    sym_comment,
    [8188] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(672),
    1,
    sym_identifier,
    STATE(182),
    1,
    sym_comment,
    STATE(193),
    1,
    sym_interface_name,
    STATE(194),
    1,
    sym_scoped_name,
    [8207] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(717),
    1,
    anon_sym_RPAREN,
    ACTIONS(719),
    1,
    anon_sym_XCDR,
    ACTIONS(721),
    1,
    anon_sym_XCDR2,
    STATE(157),
    1,
    aux_sym_data_representation_repeat1,
    STATE(183),
    1,
    sym_comment,
    [8226] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(184),
    1,
    sym_comment,
    ACTIONS(723),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [8239] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(443),
    1,
    sym_identifier,
    ACTIONS(705),
    1,
    anon_sym_COMMA,
    ACTIONS(725),
    1,
    anon_sym_RPAREN,
    STATE(185),
    1,
    sym_comment,
    STATE(216),
    1,
    aux_sym_raises_expr_repeat1,
    [8258] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(609),
    1,
    sym_identifier,
    STATE(186),
    1,
    sym_comment,
    STATE(263),
    1,
    sym_any_declarator,
    STATE(286),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8275] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(727),
    1,
    anon_sym_SEMI,
    ACTIONS(729),
    1,
    anon_sym_COMMA,
    STATE(187),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [8289] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(536),
    1,
    anon_sym_COMMA,
    ACTIONS(732),
    1,
    anon_sym_SEMI,
    STATE(187),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(188),
    1,
    sym_comment,
    [8305] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(734),
    1,
    anon_sym_RBRACE,
    ACTIONS(736),
    1,
    anon_sym_COMMA,
    STATE(189),
    1,
    sym_comment,
    STATE(225),
    1,
    aux_sym_enum_dcl_repeat1,
    [8321] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(627),
    1,
    anon_sym_raises,
    ACTIONS(738),
    1,
    anon_sym_SEMI,
    STATE(190),
    1,
    sym_comment,
    STATE(397),
    1,
    sym_raises_expr,
    [8337] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(740),
    1,
    anon_sym_RPAREN,
    ACTIONS(742),
    1,
    anon_sym_COMMA,
    STATE(191),
    1,
    sym_comment,
    STATE(206),
    1,
    aux_sym_parameter_dcls_repeat1,
    [8353] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(744),
    1,
    anon_sym_SEMI,
    ACTIONS(746),
    1,
    anon_sym_COMMA,
    STATE(192),
    1,
    sym_comment,
    STATE(257),
    1,
    aux_sym_any_declarators_repeat1,
    [8369] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(748),
    1,
    anon_sym_LBRACE,
    ACTIONS(750),
    1,
    anon_sym_COMMA,
    STATE(193),
    1,
    sym_comment,
    STATE(245),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [8385] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(194),
    1,
    sym_comment,
    ACTIONS(752),
    2,
    anon_sym_LBRACE,
    anon_sym_COMMA,
    [8399] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(756),
    1,
    anon_sym_XCDR,
    STATE(195),
    1,
    sym_comment,
    ACTIONS(754),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [8413] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(699),
    1,
    anon_sym_LBRACE,
    ACTIONS(701),
    1,
    anon_sym_COLON,
    STATE(196),
    1,
    sym_comment,
    STATE(388),
    1,
    sym_interface_inheritance_spec,
    [8429] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(197),
    1,
    sym_comment,
    ACTIONS(758),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [8441] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(198),
    1,
    sym_comment,
    ACTIONS(760),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [8453] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(746),
    1,
    anon_sym_COMMA,
    ACTIONS(762),
    1,
    anon_sym_SEMI,
    STATE(192),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(199),
    1,
    sym_comment,
    [8469] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(764),
    1,
    anon_sym_RBRACE,
    ACTIONS(766),
    1,
    sym_identifier,
    STATE(200),
    1,
    sym_comment,
    STATE(208),
    1,
    sym_bit_value,
    [8485] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(672),
    1,
    sym_identifier,
    STATE(201),
    1,
    sym_comment,
    STATE(317),
    1,
    sym_scoped_name,
    [8501] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(768),
    1,
    sym_identifier,
    STATE(119),
    1,
    sym_simple_declarator,
    STATE(202),
    1,
    sym_comment,
    STATE(412),
    1,
    sym_attr_declarator,
    [8517] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(770),
    1,
    anon_sym_RBRACE,
    ACTIONS(772),
    1,
    anon_sym_COMMA,
    STATE(203),
    1,
    sym_comment,
    STATE(240),
    1,
    aux_sym_interface_body_repeat1,
    [8533] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(672),
    1,
    sym_identifier,
    STATE(204),
    1,
    sym_comment,
    STATE(323),
    1,
    sym_scoped_name,
    [8549] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(672),
    1,
    sym_identifier,
    STATE(205),
    1,
    sym_comment,
    STATE(279),
    1,
    sym_scoped_name,
    [8565] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(774),
    1,
    anon_sym_RPAREN,
    ACTIONS(776),
    1,
    anon_sym_COMMA,
    STATE(206),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [8579] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(719),
    1,
    anon_sym_XCDR,
    ACTIONS(721),
    1,
    anon_sym_XCDR2,
    STATE(183),
    1,
    aux_sym_data_representation_repeat1,
    STATE(207),
    1,
    sym_comment,
    [8595] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(779),
    1,
    anon_sym_RBRACE,
    ACTIONS(781),
    1,
    anon_sym_COMMA,
    STATE(208),
    1,
    sym_comment,
    STATE(241),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [8611] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(209),
    1,
    sym_comment,
    ACTIONS(783),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8623] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(210),
    1,
    sym_comment,
    ACTIONS(785),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [8635] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(211),
    1,
    sym_comment,
    ACTIONS(787),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8647] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(789),
    1,
    anon_sym_SEMI,
    ACTIONS(791),
    1,
    anon_sym_default,
    STATE(212),
    1,
    sym_comment,
    STATE(394),
    1,
    sym_default,
    [8663] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(793),
    1,
    anon_sym_RBRACE,
    ACTIONS(795),
    1,
    anon_sym_COMMA,
    STATE(213),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [8677] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(214),
    1,
    sym_comment,
    ACTIONS(798),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8689] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(73),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(672),
    1,
    sym_identifier,
    STATE(215),
    1,
    sym_comment,
    STATE(228),
    1,
    sym_scoped_name,
    [8705] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(705),
    1,
    anon_sym_COMMA,
    ACTIONS(800),
    1,
    anon_sym_RPAREN,
    STATE(216),
    1,
    sym_comment,
    STATE(230),
    1,
    aux_sym_raises_expr_repeat1,
    [8721] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(217),
    1,
    sym_comment,
    ACTIONS(802),
    3,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [8733] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(804),
    1,
    anon_sym_SEMI,
    ACTIONS(806),
    1,
    sym_identifier,
    STATE(218),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [8747] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(219),
    1,
    sym_comment,
    ACTIONS(809),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [8759] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(220),
    1,
    sym_comment,
    ACTIONS(811),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8771] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(221),
    1,
    sym_comment,
    ACTIONS(813),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8783] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(736),
    1,
    anon_sym_COMMA,
    ACTIONS(815),
    1,
    anon_sym_RBRACE,
    STATE(222),
    1,
    sym_comment,
    STATE(225),
    1,
    aux_sym_enum_dcl_repeat1,
    [8799] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(705),
    1,
    anon_sym_COMMA,
    ACTIONS(817),
    1,
    anon_sym_RPAREN,
    STATE(223),
    1,
    sym_comment,
    STATE(230),
    1,
    aux_sym_raises_expr_repeat1,
    [8815] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(772),
    1,
    anon_sym_COMMA,
    ACTIONS(819),
    1,
    anon_sym_RBRACE,
    STATE(203),
    1,
    aux_sym_interface_body_repeat1,
    STATE(224),
    1,
    sym_comment,
    [8831] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(821),
    1,
    anon_sym_RBRACE,
    ACTIONS(823),
    1,
    anon_sym_COMMA,
    STATE(225),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [8845] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(226),
    1,
    sym_comment,
    ACTIONS(826),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8857] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(791),
    1,
    anon_sym_default,
    ACTIONS(828),
    1,
    anon_sym_SEMI,
    STATE(227),
    1,
    sym_comment,
    STATE(356),
    1,
    sym_default,
    [8873] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(228),
    1,
    sym_comment,
    ACTIONS(830),
    2,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    [8887] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(229),
    1,
    sym_comment,
    ACTIONS(832),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8899] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(830),
    1,
    anon_sym_RPAREN,
    ACTIONS(834),
    1,
    anon_sym_COMMA,
    STATE(230),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [8913] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(837),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8925] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(232),
    1,
    sym_comment,
    ACTIONS(839),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [8937] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(736),
    1,
    anon_sym_COMMA,
    ACTIONS(841),
    1,
    anon_sym_RBRACE,
    STATE(225),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(233),
    1,
    sym_comment,
    [8953] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(742),
    1,
    anon_sym_COMMA,
    ACTIONS(843),
    1,
    anon_sym_RPAREN,
    STATE(191),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(234),
    1,
    sym_comment,
    [8969] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(845),
    1,
    anon_sym_SEMI,
    ACTIONS(847),
    1,
    sym_identifier,
    STATE(218),
    1,
    aux_sym_bitfield_repeat1,
    STATE(235),
    1,
    sym_comment,
    [8985] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(236),
    1,
    sym_comment,
    ACTIONS(661),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [8997] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(847),
    1,
    sym_identifier,
    ACTIONS(849),
    1,
    anon_sym_SEMI,
    STATE(235),
    1,
    aux_sym_bitfield_repeat1,
    STATE(237),
    1,
    sym_comment,
    [9013] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(238),
    1,
    sym_comment,
    ACTIONS(851),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [9025] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(853),
    1,
    sym_identifier,
    STATE(239),
    1,
    sym_comment,
    ACTIONS(813),
    2,
    anon_sym_COMMA,
    anon_sym_GT,
    [9039] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(855),
    1,
    anon_sym_RBRACE,
    ACTIONS(857),
    1,
    anon_sym_COMMA,
    STATE(240),
    2,
    sym_comment,
    aux_sym_interface_body_repeat1,
    [9053] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(781),
    1,
    anon_sym_COMMA,
    ACTIONS(860),
    1,
    anon_sym_RBRACE,
    STATE(213),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(241),
    1,
    sym_comment,
    [9069] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(862),
    1,
    anon_sym_SEMI,
    ACTIONS(864),
    1,
    anon_sym_switch,
    ACTIONS(866),
    1,
    sym_identifier,
    STATE(242),
    1,
    sym_comment,
    [9085] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(768),
    1,
    sym_identifier,
    STATE(148),
    1,
    sym_simple_declarator,
    STATE(243),
    1,
    sym_comment,
    STATE(342),
    1,
    sym_readonly_attr_declarator,
    [9101] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(736),
    1,
    anon_sym_COMMA,
    ACTIONS(815),
    1,
    anon_sym_RBRACE,
    STATE(189),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(244),
    1,
    sym_comment,
    [9117] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(750),
    1,
    anon_sym_COMMA,
    ACTIONS(868),
    1,
    anon_sym_LBRACE,
    STATE(245),
    1,
    sym_comment,
    STATE(247),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [9133] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(536),
    1,
    anon_sym_COMMA,
    ACTIONS(870),
    1,
    anon_sym_SEMI,
    STATE(187),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(246),
    1,
    sym_comment,
    [9149] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(872),
    1,
    anon_sym_LBRACE,
    ACTIONS(874),
    1,
    anon_sym_COMMA,
    STATE(247),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [9163] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(877),
    1,
    anon_sym_CARET,
    STATE(248),
    1,
    sym_comment,
    ACTIONS(548),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [9177] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(627),
    1,
    anon_sym_raises,
    ACTIONS(879),
    1,
    anon_sym_SEMI,
    STATE(249),
    1,
    sym_comment,
    STATE(375),
    1,
    sym_raises_expr,
    [9193] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(250),
    1,
    sym_comment,
    ACTIONS(881),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [9205] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(251),
    1,
    sym_comment,
    ACTIONS(419),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [9217] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(252),
    1,
    sym_comment,
    ACTIONS(415),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [9229] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(566),
    1,
    anon_sym_RBRACE,
    ACTIONS(736),
    1,
    anon_sym_COMMA,
    STATE(253),
    1,
    sym_comment,
    STATE(256),
    1,
    aux_sym_enum_dcl_repeat1,
    [9245] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(877),
    1,
    anon_sym_CARET,
    STATE(254),
    1,
    sym_comment,
    ACTIONS(544),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [9259] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(576),
    1,
    anon_sym_RBRACE,
    ACTIONS(736),
    1,
    anon_sym_COMMA,
    STATE(222),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(255),
    1,
    sym_comment,
    [9275] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(736),
    1,
    anon_sym_COMMA,
    ACTIONS(883),
    1,
    anon_sym_RBRACE,
    STATE(225),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(256),
    1,
    sym_comment,
    [9291] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(885),
    1,
    anon_sym_SEMI,
    ACTIONS(887),
    1,
    anon_sym_COMMA,
    STATE(257),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [9305] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(258),
    1,
    sym_comment,
    ACTIONS(890),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [9317] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(259),
    1,
    sym_comment,
    ACTIONS(892),
    3,
    anon_sym_COMMA,
    anon_sym_GT,
    sym_identifier,
    [9329] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(736),
    1,
    anon_sym_COMMA,
    ACTIONS(883),
    1,
    anon_sym_RBRACE,
    STATE(233),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(260),
    1,
    sym_comment,
    [9345] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(261),
    1,
    sym_comment,
    ACTIONS(894),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9356] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(262),
    1,
    sym_comment,
    ACTIONS(896),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9367] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(263),
    1,
    sym_comment,
    ACTIONS(885),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [9378] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(768),
    1,
    sym_identifier,
    STATE(264),
    1,
    sym_comment,
    STATE(290),
    1,
    sym_simple_declarator,
    [9391] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(768),
    1,
    sym_identifier,
    STATE(265),
    1,
    sym_comment,
    STATE(434),
    1,
    sym_simple_declarator,
    [9404] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(562),
    1,
    anon_sym_typedef,
    ACTIONS(898),
    1,
    anon_sym_PIPE,
    STATE(266),
    1,
    sym_comment,
    [9417] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(513),
    1,
    anon_sym_interface,
    STATE(267),
    1,
    sym_comment,
    STATE(415),
    1,
    sym_interface_header,
    [9430] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(443),
    1,
    sym_identifier,
    ACTIONS(813),
    1,
    anon_sym_COMMA,
    STATE(268),
    1,
    sym_comment,
    [9443] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(900),
    1,
    anon_sym_LBRACE,
    ACTIONS(902),
    1,
    anon_sym_COLON,
    STATE(269),
    1,
    sym_comment,
    [9456] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(270),
    1,
    sym_comment,
    ACTIONS(904),
    2,
    anon_sym_SEMI,
    anon_sym_typedef,
    [9467] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(271),
    1,
    sym_comment,
    ACTIONS(906),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9478] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(272),
    1,
    sym_comment,
    ACTIONS(908),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9489] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(273),
    1,
    sym_comment,
    ACTIONS(910),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9500] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(274),
    1,
    sym_comment,
    ACTIONS(912),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9511] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(275),
    1,
    sym_comment,
    ACTIONS(855),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [9522] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(276),
    1,
    sym_comment,
    ACTIONS(914),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9533] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(766),
    1,
    sym_identifier,
    STATE(277),
    1,
    sym_comment,
    STATE(303),
    1,
    sym_bit_value,
    [9546] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(278),
    1,
    sym_comment,
    ACTIONS(916),
    2,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    [9557] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(443),
    1,
    sym_identifier,
    ACTIONS(918),
    1,
    anon_sym_LBRACE,
    STATE(279),
    1,
    sym_comment,
    [9570] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(280),
    1,
    sym_comment,
    ACTIONS(774),
    2,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    [9581] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(513),
    1,
    anon_sym_interface,
    STATE(281),
    1,
    sym_comment,
    STATE(363),
    1,
    sym_interface_header,
    [9594] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(282),
    1,
    sym_comment,
    ACTIONS(920),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9605] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(283),
    1,
    sym_comment,
    ACTIONS(922),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9616] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(284),
    1,
    sym_comment,
    ACTIONS(924),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9627] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(443),
    1,
    sym_identifier,
    ACTIONS(926),
    1,
    anon_sym_RPAREN,
    STATE(285),
    1,
    sym_comment,
    [9640] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(286),
    1,
    sym_comment,
    ACTIONS(928),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [9651] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(287),
    1,
    sym_comment,
    ACTIONS(930),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9662] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(288),
    1,
    sym_comment,
    ACTIONS(932),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9673] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(289),
    1,
    sym_comment,
    ACTIONS(934),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9684] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(936),
    1,
    anon_sym_SEMI,
    ACTIONS(938),
    1,
    anon_sym_default,
    STATE(290),
    1,
    sym_comment,
    [9697] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(291),
    1,
    sym_comment,
    ACTIONS(821),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [9708] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(292),
    1,
    sym_comment,
    ACTIONS(940),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9719] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(768),
    1,
    sym_identifier,
    STATE(278),
    1,
    sym_simple_declarator,
    STATE(293),
    1,
    sym_comment,
    [9732] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(294),
    1,
    sym_comment,
    ACTIONS(942),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9743] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(27),
    1,
    anon_sym_typedef,
    STATE(295),
    1,
    sym_comment,
    STATE(379),
    1,
    sym_typedef_dcl,
    [9756] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(296),
    1,
    sym_comment,
    ACTIONS(944),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [9767] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(297),
    1,
    sym_comment,
    ACTIONS(946),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9778] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(948),
    1,
    anon_sym_COMMA,
    ACTIONS(950),
    1,
    anon_sym_GT,
    STATE(298),
    1,
    sym_comment,
    [9791] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(299),
    1,
    sym_comment,
    ACTIONS(952),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9802] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(300),
    1,
    sym_comment,
    ACTIONS(954),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9813] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(301),
    1,
    sym_comment,
    ACTIONS(956),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9824] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(302),
    1,
    sym_comment,
    ACTIONS(958),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9835] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(303),
    1,
    sym_comment,
    ACTIONS(793),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [9846] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(304),
    1,
    sym_comment,
    ACTIONS(727),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [9857] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(960),
    1,
    anon_sym_LBRACE,
    ACTIONS(962),
    1,
    anon_sym_COLON,
    STATE(305),
    1,
    sym_comment,
    [9870] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(306),
    1,
    sym_comment,
    ACTIONS(964),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9881] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(966),
    1,
    anon_sym_DQUOTE,
    ACTIONS(968),
    1,
    anon_sym_SQUOTE,
    STATE(307),
    1,
    sym_comment,
    [9894] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(308),
    1,
    sym_comment,
    ACTIONS(970),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9905] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(309),
    1,
    sym_comment,
    ACTIONS(972),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [9916] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(768),
    1,
    sym_identifier,
    STATE(304),
    1,
    sym_simple_declarator,
    STATE(310),
    1,
    sym_comment,
    [9929] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(311),
    1,
    sym_comment,
    ACTIONS(974),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [9940] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(976),
    1,
    anon_sym_LPAREN,
    STATE(301),
    1,
    sym_exception_list,
    STATE(312),
    1,
    sym_comment,
    [9953] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(976),
    1,
    anon_sym_LPAREN,
    STATE(297),
    1,
    sym_exception_list,
    STATE(313),
    1,
    sym_comment,
    [9966] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(314),
    1,
    sym_comment,
    ACTIONS(978),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [9977] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(315),
    1,
    sym_comment,
    ACTIONS(980),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [9988] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(982),
    1,
    anon_sym_const,
    STATE(295),
    1,
    sym_const_dcl,
    STATE(316),
    1,
    sym_comment,
    [10001] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(443),
    1,
    sym_identifier,
    ACTIONS(984),
    1,
    anon_sym_LBRACE,
    STATE(317),
    1,
    sym_comment,
    [10014] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(318),
    1,
    sym_comment,
    ACTIONS(986),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10025] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(319),
    1,
    sym_comment,
    ACTIONS(988),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10036] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(990),
    1,
    anon_sym_COMMA,
    ACTIONS(992),
    1,
    anon_sym_GT,
    STATE(320),
    1,
    sym_comment,
    [10049] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(321),
    1,
    sym_comment,
    ACTIONS(994),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10060] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(322),
    1,
    sym_comment,
    ACTIONS(872),
    2,
    anon_sym_LBRACE,
    anon_sym_COMMA,
    [10071] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(443),
    1,
    sym_identifier,
    ACTIONS(996),
    1,
    anon_sym_LBRACE,
    STATE(323),
    1,
    sym_comment,
    [10084] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(324),
    1,
    sym_comment,
    ACTIONS(998),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [10095] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1000),
    1,
    anon_sym_LPAREN,
    STATE(325),
    1,
    sym_comment,
    [10105] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1002),
    1,
    anon_sym_DQUOTE,
    STATE(326),
    1,
    sym_comment,
    [10115] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1004),
    1,
    anon_sym_SQUOTE,
    STATE(327),
    1,
    sym_comment,
    [10125] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1006),
    1,
    sym_identifier,
    STATE(328),
    1,
    sym_comment,
    [10135] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1008),
    1,
    anon_sym_LPAREN,
    STATE(329),
    1,
    sym_comment,
    [10145] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1010),
    1,
    aux_sym_string_literal_token1,
    STATE(330),
    1,
    sym_comment,
    [10155] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1012),
    1,
    aux_sym_string_literal_token1,
    STATE(331),
    1,
    sym_comment,
    [10165] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(236),
    1,
    anon_sym_RBRACE,
    STATE(332),
    1,
    sym_comment,
    [10175] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1014),
    1,
    anon_sym_SEMI,
    STATE(333),
    1,
    sym_comment,
    [10185] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1016),
    1,
    anon_sym_COMMA,
    STATE(334),
    1,
    sym_comment,
    [10195] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1018),
    1,
    anon_sym_RPAREN,
    STATE(335),
    1,
    sym_comment,
    [10205] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1020),
    1,
    anon_sym_GT,
    STATE(336),
    1,
    sym_comment,
    [10215] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1022),
    1,
    anon_sym_GT,
    STATE(337),
    1,
    sym_comment,
    [10225] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1024),
    1,
    anon_sym_GT,
    STATE(338),
    1,
    sym_comment,
    [10235] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1026),
    1,
    anon_sym_COMMA,
    STATE(339),
    1,
    sym_comment,
    [10245] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1028),
    1,
    aux_sym_char_literal_token1,
    STATE(340),
    1,
    sym_comment,
    [10255] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1030),
    1,
    aux_sym_string_literal_token1,
    STATE(341),
    1,
    sym_comment,
    [10265] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1032),
    1,
    anon_sym_SEMI,
    STATE(342),
    1,
    sym_comment,
    [10275] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_SEMI,
    STATE(343),
    1,
    sym_comment,
    [10285] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1034),
    1,
    anon_sym_SEMI,
    STATE(344),
    1,
    sym_comment,
    [10295] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(678),
    1,
    anon_sym_SEMI,
    STATE(345),
    1,
    sym_comment,
    [10305] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    anon_sym_LT,
    STATE(346),
    1,
    sym_comment,
    [10315] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1038),
    1,
    anon_sym_RPAREN,
    STATE(347),
    1,
    sym_comment,
    [10325] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1040),
    1,
    anon_sym_SEMI,
    STATE(348),
    1,
    sym_comment,
    [10335] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1042),
    1,
    sym_identifier,
    STATE(349),
    1,
    sym_comment,
    [10345] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1044),
    1,
    anon_sym_SEMI,
    STATE(350),
    1,
    sym_comment,
    [10355] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1046),
    1,
    anon_sym_SEMI,
    STATE(351),
    1,
    sym_comment,
    [10365] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1048),
    1,
    anon_sym_RBRACE,
    STATE(352),
    1,
    sym_comment,
    [10375] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1050),
    1,
    sym_identifier,
    STATE(353),
    1,
    sym_comment,
    [10385] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1052),
    1,
    anon_sym_SEMI,
    STATE(354),
    1,
    sym_comment,
    [10395] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1054),
    1,
    anon_sym_SEMI,
    STATE(355),
    1,
    sym_comment,
    [10405] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1056),
    1,
    anon_sym_SEMI,
    STATE(356),
    1,
    sym_comment,
    [10415] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1058),
    1,
    anon_sym_SEMI,
    STATE(357),
    1,
    sym_comment,
    [10425] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1060),
    1,
    anon_sym_SEMI,
    STATE(358),
    1,
    sym_comment,
    [10435] = 3,
    ACTIONS(1062),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1064),
    1,
    aux_sym_comment_token1,
    STATE(359),
    1,
    sym_comment,
    [10445] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1066),
    1,
    sym_identifier,
    STATE(360),
    1,
    sym_comment,
    [10455] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1068),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(361),
    1,
    sym_comment,
    [10465] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1070),
    1,
    anon_sym_SEMI,
    STATE(362),
    1,
    sym_comment,
    [10475] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1072),
    1,
    anon_sym_LBRACE,
    STATE(363),
    1,
    sym_comment,
    [10485] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1074),
    1,
    anon_sym_GT,
    STATE(364),
    1,
    sym_comment,
    [10495] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1076),
    1,
    anon_sym_RBRACK,
    STATE(365),
    1,
    sym_comment,
    [10505] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(732),
    1,
    anon_sym_SEMI,
    STATE(366),
    1,
    sym_comment,
    [10515] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1078),
    1,
    anon_sym_SEMI,
    STATE(367),
    1,
    sym_comment,
    [10525] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1080),
    1,
    anon_sym_SEMI,
    STATE(368),
    1,
    sym_comment,
    [10535] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1082),
    1,
    anon_sym_SEMI,
    STATE(369),
    1,
    sym_comment,
    [10545] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1084),
    1,
    anon_sym_SEMI,
    STATE(370),
    1,
    sym_comment,
    [10555] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1086),
    1,
    anon_sym_SEMI,
    STATE(371),
    1,
    sym_comment,
    [10565] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1088),
    1,
    anon_sym_LBRACE,
    STATE(372),
    1,
    sym_comment,
    [10575] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1090),
    1,
    sym_identifier,
    STATE(373),
    1,
    sym_comment,
    [10585] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1092),
    1,
    anon_sym_SEMI,
    STATE(374),
    1,
    sym_comment,
    [10595] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(738),
    1,
    anon_sym_SEMI,
    STATE(375),
    1,
    sym_comment,
    [10605] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(226),
    1,
    anon_sym_RBRACE,
    STATE(376),
    1,
    sym_comment,
    [10615] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1094),
    1,
    anon_sym_attribute,
    STATE(377),
    1,
    sym_comment,
    [10625] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1096),
    1,
    sym_identifier,
    STATE(378),
    1,
    sym_comment,
    [10635] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1098),
    1,
    anon_sym_SEMI,
    STATE(379),
    1,
    sym_comment,
    [10645] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1100),
    1,
    anon_sym_SEMI,
    STATE(380),
    1,
    sym_comment,
    [10655] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1102),
    1,
    anon_sym_SEMI,
    STATE(381),
    1,
    sym_comment,
    [10665] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1104),
    1,
    anon_sym_LBRACE,
    STATE(382),
    1,
    sym_comment,
    [10675] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1106),
    1,
    anon_sym_EQ,
    STATE(383),
    1,
    sym_comment,
    [10685] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(926),
    1,
    anon_sym_RPAREN,
    STATE(384),
    1,
    sym_comment,
    [10695] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1108),
    1,
    anon_sym_COLON,
    STATE(385),
    1,
    sym_comment,
    [10705] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1110),
    1,
    anon_sym_EQ,
    STATE(386),
    1,
    sym_comment,
    [10715] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1112),
    1,
    anon_sym_EQ,
    STATE(387),
    1,
    sym_comment,
    [10725] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1114),
    1,
    anon_sym_LBRACE,
    STATE(388),
    1,
    sym_comment,
    [10735] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1116),
    1,
    anon_sym_SEMI,
    STATE(389),
    1,
    sym_comment,
    [10745] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1118),
    1,
    anon_sym_GT,
    STATE(390),
    1,
    sym_comment,
    [10755] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1120),
    1,
    anon_sym_GT,
    STATE(391),
    1,
    sym_comment,
    [10765] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1122),
    1,
    anon_sym_GT,
    STATE(392),
    1,
    sym_comment,
    [10775] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1124),
    1,
    anon_sym_RPAREN,
    STATE(393),
    1,
    sym_comment,
    [10785] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1126),
    1,
    anon_sym_SEMI,
    STATE(394),
    1,
    sym_comment,
    [10795] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1128),
    1,
    anon_sym_LPAREN,
    STATE(395),
    1,
    sym_comment,
    [10805] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1130),
    1,
    anon_sym_SEMI,
    STATE(396),
    1,
    sym_comment,
    [10815] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1132),
    1,
    anon_sym_SEMI,
    STATE(397),
    1,
    sym_comment,
    [10825] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1134),
    1,
    anon_sym_DQUOTE,
    STATE(398),
    1,
    sym_comment,
    [10835] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1136),
    1,
    sym_identifier,
    STATE(399),
    1,
    sym_comment,
    [10845] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1138),
    1,
    anon_sym_RBRACE,
    STATE(400),
    1,
    sym_comment,
    [10855] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1140),
    1,
    anon_sym_SEMI,
    STATE(401),
    1,
    sym_comment,
    [10865] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1142),
    1,
    sym_identifier,
    STATE(402),
    1,
    sym_comment,
    [10875] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1144),
    1,
    anon_sym_COLON,
    STATE(403),
    1,
    sym_comment,
    [10885] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1146),
    1,
    anon_sym_SEMI,
    STATE(404),
    1,
    sym_comment,
    [10895] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1042),
    1,
    sym_identifier,
    STATE(405),
    1,
    sym_comment,
    [10905] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1148),
    1,
    anon_sym_RPAREN,
    STATE(406),
    1,
    sym_comment,
    [10915] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1150),
    1,
    sym_identifier,
    STATE(407),
    1,
    sym_comment,
    [10925] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1152),
    1,
    aux_sym_string_literal_token1,
    STATE(408),
    1,
    sym_comment,
    [10935] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1042),
    1,
    sym_identifier,
    STATE(409),
    1,
    sym_comment,
    [10945] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1154),
    1,
    anon_sym_SEMI,
    STATE(410),
    1,
    sym_comment,
    [10955] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1156),
    1,
    sym_identifier,
    STATE(411),
    1,
    sym_comment,
    [10965] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1158),
    1,
    anon_sym_SEMI,
    STATE(412),
    1,
    sym_comment,
    [10975] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1160),
    1,
    anon_sym_name,
    STATE(413),
    1,
    sym_comment,
    [10985] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1162),
    1,
    anon_sym_name,
    STATE(414),
    1,
    sym_comment,
    [10995] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1164),
    1,
    anon_sym_LBRACE,
    STATE(415),
    1,
    sym_comment,
    [11005] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1166),
    1,
    sym_identifier,
    STATE(416),
    1,
    sym_comment,
    [11015] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1168),
    1,
    anon_sym_SEMI,
    STATE(417),
    1,
    sym_comment,
    [11025] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1170),
    1,
    anon_sym_SEMI,
    STATE(418),
    1,
    sym_comment,
    [11035] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1172),
    1,
    anon_sym_SEMI,
    STATE(419),
    1,
    sym_comment,
    [11045] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(813),
    1,
    sym_identifier,
    STATE(420),
    1,
    sym_comment,
    [11055] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1174),
    1,
    aux_sym_char_literal_token1,
    STATE(421),
    1,
    sym_comment,
    [11065] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1176),
    1,
    anon_sym_LT,
    STATE(422),
    1,
    sym_comment,
    [11075] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1178),
    1,
    anon_sym_SEMI,
    STATE(423),
    1,
    sym_comment,
    [11085] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1180),
    1,
    anon_sym_LT,
    STATE(424),
    1,
    sym_comment,
    [11095] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(425),
    1,
    sym_comment,
    [11105] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1182),
    1,
    anon_sym_LT,
    STATE(426),
    1,
    sym_comment,
    [11115] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(994),
    1,
    anon_sym_const,
    STATE(427),
    1,
    sym_comment,
    [11125] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1184),
    1,
    anon_sym_LBRACE,
    STATE(428),
    1,
    sym_comment,
    [11135] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1186),
    1,
    anon_sym_DQUOTE,
    STATE(429),
    1,
    sym_comment,
    [11145] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1188),
    1,
    anon_sym_LBRACE,
    STATE(430),
    1,
    sym_comment,
    [11155] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(954),
    1,
    anon_sym_const,
    STATE(431),
    1,
    sym_comment,
    [11165] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1190),
    1,
    anon_sym_LBRACE,
    STATE(432),
    1,
    sym_comment,
    [11175] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1192),
    1,
    anon_sym_LBRACE,
    STATE(433),
    1,
    sym_comment,
    [11185] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1194),
    1,
    anon_sym_SEMI,
    STATE(434),
    1,
    sym_comment,
    [11195] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1196),
    1,
    anon_sym_LBRACE,
    STATE(435),
    1,
    sym_comment,
    [11205] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1198),
    1,
    anon_sym_enum,
    STATE(436),
    1,
    sym_comment,
    [11215] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1200),
    1,
    anon_sym_LBRACE,
    STATE(437),
    1,
    sym_comment,
    [11225] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1202),
    1,
    anon_sym_SEMI,
    STATE(438),
    1,
    sym_comment,
    [11235] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(940),
    1,
    anon_sym_const,
    STATE(439),
    1,
    sym_comment,
    [11245] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1204),
    1,
    anon_sym_enum,
    STATE(440),
    1,
    sym_comment,
    [11255] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1206),
    1,
    anon_sym_SEMI,
    STATE(441),
    1,
    sym_comment,
    [11265] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1208),
    1,
    ts_builtin_sym_end,
    STATE(442),
    1,
    sym_comment,
    [11275] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1210),
    1,
    anon_sym_LPAREN,
    STATE(443),
    1,
    sym_comment,
    [11285] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1212),
    1,
    anon_sym_LPAREN,
    STATE(444),
    1,
    sym_comment,
    [11295] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(964),
    1,
    anon_sym_const,
    STATE(445),
    1,
    sym_comment,
    [11305] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1214),
    1,
    anon_sym_LPAREN,
    STATE(446),
    1,
    sym_comment,
    [11315] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1216),
    1,
    anon_sym_RPAREN,
    STATE(447),
    1,
    sym_comment,
    [11325] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1218),
    1,
    anon_sym_RPAREN,
    STATE(448),
    1,
    sym_comment,
    [11335] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(853),
    1,
    sym_identifier,
    STATE(449),
    1,
    sym_comment,
    [11345] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1220),
    1,
    sym_identifier,
    STATE(450),
    1,
    sym_comment,
    [11355] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1222),
    1,
    anon_sym_EQ,
    STATE(451),
    1,
    sym_comment,
    [11365] = 3,
    ACTIONS(1062),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1224),
    1,
    aux_sym_predefine_token1,
    STATE(452),
    1,
    sym_comment,
    [11375] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1226),
    1,
    anon_sym_SEMI,
    STATE(453),
    1,
    sym_comment,
    [11385] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1228),
    1,
    sym_identifier,
    STATE(454),
    1,
    sym_comment,
    [11395] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1230),
    1,
    sym_identifier,
    STATE(455),
    1,
    sym_comment,
    [11405] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1232),
    1,
    sym_identifier,
    STATE(456),
    1,
    sym_comment,
    [11415] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1234),
    1,
    sym_identifier,
    STATE(457),
    1,
    sym_comment,
    [11425] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1236),
    1,
    anon_sym_enum,
    STATE(458),
    1,
    sym_comment,
    [11435] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1238),
    1,
    sym_identifier,
    STATE(459),
    1,
    sym_comment,
    [11445] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1240),
    1,
    sym_identifier,
    STATE(460),
    1,
    sym_comment,
    [11455] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1242),
    1,
    sym_identifier,
    STATE(461),
    1,
    sym_comment,
    [11465] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1244),
    1,
    anon_sym_SQUOTE,
    STATE(462),
    1,
    sym_comment,
    [11475] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1246),
    1,
    sym_identifier,
    STATE(463),
    1,
    sym_comment,
    [11485] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1248),
    1,
    anon_sym_LBRACE,
    STATE(464),
    1,
    sym_comment,
    [11495] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1250),
    1,
    sym_identifier,
    STATE(465),
    1,
    sym_comment,
    [11505] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1252),
    1,
    anon_sym_LBRACE,
    STATE(466),
    1,
    sym_comment,
    [11515] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1254),
    1,
    sym_identifier,
    STATE(467),
    1,
    sym_comment,
    [11525] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1256),
    1,
    sym_identifier,
    STATE(468),
    1,
    sym_comment,
    [11535] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1258),
    1,
    sym_identifier,
    STATE(469),
    1,
    sym_comment,
    [11545] = 1,
    ACTIONS(1260),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(2)] = 0,
    [SMALL_STATE(3)] = 116,
    [SMALL_STATE(4)] = 230,
    [SMALL_STATE(5)] = 346,
    [SMALL_STATE(6)] = 462,
    [SMALL_STATE(7)] = 582,
    [SMALL_STATE(8)] = 698,
    [SMALL_STATE(9)] = 814,
    [SMALL_STATE(10)] = 930,
    [SMALL_STATE(11)] = 1046,
    [SMALL_STATE(12)] = 1162,
    [SMALL_STATE(13)] = 1278,
    [SMALL_STATE(14)] = 1394,
    [SMALL_STATE(15)] = 1509,
    [SMALL_STATE(16)] = 1630,
    [SMALL_STATE(17)] = 1751,
    [SMALL_STATE(18)] = 1872,
    [SMALL_STATE(19)] = 1979,
    [SMALL_STATE(20)] = 2091,
    [SMALL_STATE(21)] = 2203,
    [SMALL_STATE(22)] = 2315,
    [SMALL_STATE(23)] = 2421,
    [SMALL_STATE(24)] = 2521,
    [SMALL_STATE(25)] = 2616,
    [SMALL_STATE(26)] = 2713,
    [SMALL_STATE(27)] = 2802,
    [SMALL_STATE(28)] = 2888,
    [SMALL_STATE(29)] = 2971,
    [SMALL_STATE(30)] = 3054,
    [SMALL_STATE(31)] = 3137,
    [SMALL_STATE(32)] = 3220,
    [SMALL_STATE(33)] = 3303,
    [SMALL_STATE(34)] = 3356,
    [SMALL_STATE(35)] = 3396,
    [SMALL_STATE(36)] = 3466,
    [SMALL_STATE(37)] = 3536,
    [SMALL_STATE(38)] = 3576,
    [SMALL_STATE(39)] = 3616,
    [SMALL_STATE(40)] = 3656,
    [SMALL_STATE(41)] = 3696,
    [SMALL_STATE(42)] = 3735,
    [SMALL_STATE(43)] = 3774,
    [SMALL_STATE(44)] = 3813,
    [SMALL_STATE(45)] = 3852,
    [SMALL_STATE(46)] = 3927,
    [SMALL_STATE(47)] = 4002,
    [SMALL_STATE(48)] = 4077,
    [SMALL_STATE(49)] = 4152,
    [SMALL_STATE(50)] = 4227,
    [SMALL_STATE(51)] = 4302,
    [SMALL_STATE(52)] = 4377,
    [SMALL_STATE(53)] = 4449,
    [SMALL_STATE(54)] = 4521,
    [SMALL_STATE(55)] = 4555,
    [SMALL_STATE(56)] = 4589,
    [SMALL_STATE(57)] = 4623,
    [SMALL_STATE(58)] = 4695,
    [SMALL_STATE(59)] = 4767,
    [SMALL_STATE(60)] = 4839,
    [SMALL_STATE(61)] = 4911,
    [SMALL_STATE(62)] = 4945,
    [SMALL_STATE(63)] = 5017,
    [SMALL_STATE(64)] = 5048,
    [SMALL_STATE(65)] = 5079,
    [SMALL_STATE(66)] = 5110,
    [SMALL_STATE(67)] = 5141,
    [SMALL_STATE(68)] = 5172,
    [SMALL_STATE(69)] = 5203,
    [SMALL_STATE(70)] = 5269,
    [SMALL_STATE(71)] = 5335,
    [SMALL_STATE(72)] = 5366,
    [SMALL_STATE(73)] = 5429,
    [SMALL_STATE(74)] = 5460,
    [SMALL_STATE(75)] = 5491,
    [SMALL_STATE(76)] = 5554,
    [SMALL_STATE(77)] = 5614,
    [SMALL_STATE(78)] = 5674,
    [SMALL_STATE(79)] = 5703,
    [SMALL_STATE(80)] = 5732,
    [SMALL_STATE(81)] = 5789,
    [SMALL_STATE(82)] = 5846,
    [SMALL_STATE(83)] = 5874,
    [SMALL_STATE(84)] = 5928,
    [SMALL_STATE(85)] = 5956,
    [SMALL_STATE(86)] = 5984,
    [SMALL_STATE(87)] = 6012,
    [SMALL_STATE(88)] = 6042,
    [SMALL_STATE(89)] = 6090,
    [SMALL_STATE(90)] = 6118,
    [SMALL_STATE(91)] = 6146,
    [SMALL_STATE(92)] = 6174,
    [SMALL_STATE(93)] = 6228,
    [SMALL_STATE(94)] = 6256,
    [SMALL_STATE(95)] = 6284,
    [SMALL_STATE(96)] = 6312,
    [SMALL_STATE(97)] = 6342,
    [SMALL_STATE(98)] = 6370,
    [SMALL_STATE(99)] = 6421,
    [SMALL_STATE(100)] = 6452,
    [SMALL_STATE(101)] = 6503,
    [SMALL_STATE(102)] = 6534,
    [SMALL_STATE(103)] = 6560,
    [SMALL_STATE(104)] = 6586,
    [SMALL_STATE(105)] = 6611,
    [SMALL_STATE(106)] = 6646,
    [SMALL_STATE(107)] = 6669,
    [SMALL_STATE(108)] = 6692,
    [SMALL_STATE(109)] = 6717,
    [SMALL_STATE(110)] = 6741,
    [SMALL_STATE(111)] = 6765,
    [SMALL_STATE(112)] = 6803,
    [SMALL_STATE(113)] = 6827,
    [SMALL_STATE(114)] = 6851,
    [SMALL_STATE(115)] = 6889,
    [SMALL_STATE(116)] = 6924,
    [SMALL_STATE(117)] = 6944,
    [SMALL_STATE(118)] = 6964,
    [SMALL_STATE(119)] = 6992,
    [SMALL_STATE(120)] = 7023,
    [SMALL_STATE(121)] = 7042,
    [SMALL_STATE(122)] = 7061,
    [SMALL_STATE(123)] = 7080,
    [SMALL_STATE(124)] = 7099,
    [SMALL_STATE(125)] = 7117,
    [SMALL_STATE(126)] = 7143,
    [SMALL_STATE(127)] = 7159,
    [SMALL_STATE(128)] = 7177,
    [SMALL_STATE(129)] = 7202,
    [SMALL_STATE(130)] = 7223,
    [SMALL_STATE(131)] = 7248,
    [SMALL_STATE(132)] = 7267,
    [SMALL_STATE(133)] = 7292,
    [SMALL_STATE(134)] = 7313,
    [SMALL_STATE(135)] = 7330,
    [SMALL_STATE(136)] = 7355,
    [SMALL_STATE(137)] = 7380,
    [SMALL_STATE(138)] = 7397,
    [SMALL_STATE(139)] = 7422,
    [SMALL_STATE(140)] = 7445,
    [SMALL_STATE(141)] = 7467,
    [SMALL_STATE(142)] = 7487,
    [SMALL_STATE(143)] = 7501,
    [SMALL_STATE(144)] = 7521,
    [SMALL_STATE(145)] = 7541,
    [SMALL_STATE(146)] = 7563,
    [SMALL_STATE(147)] = 7585,
    [SMALL_STATE(148)] = 7607,
    [SMALL_STATE(149)] = 7629,
    [SMALL_STATE(150)] = 7649,
    [SMALL_STATE(151)] = 7669,
    [SMALL_STATE(152)] = 7683,
    [SMALL_STATE(153)] = 7697,
    [SMALL_STATE(154)] = 7711,
    [SMALL_STATE(155)] = 7733,
    [SMALL_STATE(156)] = 7753,
    [SMALL_STATE(157)] = 7775,
    [SMALL_STATE(158)] = 7792,
    [SMALL_STATE(159)] = 7809,
    [SMALL_STATE(160)] = 7824,
    [SMALL_STATE(161)] = 7839,
    [SMALL_STATE(162)] = 7858,
    [SMALL_STATE(163)] = 7873,
    [SMALL_STATE(164)] = 7890,
    [SMALL_STATE(165)] = 7909,
    [SMALL_STATE(166)] = 7922,
    [SMALL_STATE(167)] = 7935,
    [SMALL_STATE(168)] = 7952,
    [SMALL_STATE(169)] = 7971,
    [SMALL_STATE(170)] = 7988,
    [SMALL_STATE(171)] = 8001,
    [SMALL_STATE(172)] = 8016,
    [SMALL_STATE(173)] = 8029,
    [SMALL_STATE(174)] = 8046,
    [SMALL_STATE(175)] = 8065,
    [SMALL_STATE(176)] = 8084,
    [SMALL_STATE(177)] = 8103,
    [SMALL_STATE(178)] = 8116,
    [SMALL_STATE(179)] = 8135,
    [SMALL_STATE(180)] = 8152,
    [SMALL_STATE(181)] = 8169,
    [SMALL_STATE(182)] = 8188,
    [SMALL_STATE(183)] = 8207,
    [SMALL_STATE(184)] = 8226,
    [SMALL_STATE(185)] = 8239,
    [SMALL_STATE(186)] = 8258,
    [SMALL_STATE(187)] = 8275,
    [SMALL_STATE(188)] = 8289,
    [SMALL_STATE(189)] = 8305,
    [SMALL_STATE(190)] = 8321,
    [SMALL_STATE(191)] = 8337,
    [SMALL_STATE(192)] = 8353,
    [SMALL_STATE(193)] = 8369,
    [SMALL_STATE(194)] = 8385,
    [SMALL_STATE(195)] = 8399,
    [SMALL_STATE(196)] = 8413,
    [SMALL_STATE(197)] = 8429,
    [SMALL_STATE(198)] = 8441,
    [SMALL_STATE(199)] = 8453,
    [SMALL_STATE(200)] = 8469,
    [SMALL_STATE(201)] = 8485,
    [SMALL_STATE(202)] = 8501,
    [SMALL_STATE(203)] = 8517,
    [SMALL_STATE(204)] = 8533,
    [SMALL_STATE(205)] = 8549,
    [SMALL_STATE(206)] = 8565,
    [SMALL_STATE(207)] = 8579,
    [SMALL_STATE(208)] = 8595,
    [SMALL_STATE(209)] = 8611,
    [SMALL_STATE(210)] = 8623,
    [SMALL_STATE(211)] = 8635,
    [SMALL_STATE(212)] = 8647,
    [SMALL_STATE(213)] = 8663,
    [SMALL_STATE(214)] = 8677,
    [SMALL_STATE(215)] = 8689,
    [SMALL_STATE(216)] = 8705,
    [SMALL_STATE(217)] = 8721,
    [SMALL_STATE(218)] = 8733,
    [SMALL_STATE(219)] = 8747,
    [SMALL_STATE(220)] = 8759,
    [SMALL_STATE(221)] = 8771,
    [SMALL_STATE(222)] = 8783,
    [SMALL_STATE(223)] = 8799,
    [SMALL_STATE(224)] = 8815,
    [SMALL_STATE(225)] = 8831,
    [SMALL_STATE(226)] = 8845,
    [SMALL_STATE(227)] = 8857,
    [SMALL_STATE(228)] = 8873,
    [SMALL_STATE(229)] = 8887,
    [SMALL_STATE(230)] = 8899,
    [SMALL_STATE(231)] = 8913,
    [SMALL_STATE(232)] = 8925,
    [SMALL_STATE(233)] = 8937,
    [SMALL_STATE(234)] = 8953,
    [SMALL_STATE(235)] = 8969,
    [SMALL_STATE(236)] = 8985,
    [SMALL_STATE(237)] = 8997,
    [SMALL_STATE(238)] = 9013,
    [SMALL_STATE(239)] = 9025,
    [SMALL_STATE(240)] = 9039,
    [SMALL_STATE(241)] = 9053,
    [SMALL_STATE(242)] = 9069,
    [SMALL_STATE(243)] = 9085,
    [SMALL_STATE(244)] = 9101,
    [SMALL_STATE(245)] = 9117,
    [SMALL_STATE(246)] = 9133,
    [SMALL_STATE(247)] = 9149,
    [SMALL_STATE(248)] = 9163,
    [SMALL_STATE(249)] = 9177,
    [SMALL_STATE(250)] = 9193,
    [SMALL_STATE(251)] = 9205,
    [SMALL_STATE(252)] = 9217,
    [SMALL_STATE(253)] = 9229,
    [SMALL_STATE(254)] = 9245,
    [SMALL_STATE(255)] = 9259,
    [SMALL_STATE(256)] = 9275,
    [SMALL_STATE(257)] = 9291,
    [SMALL_STATE(258)] = 9305,
    [SMALL_STATE(259)] = 9317,
    [SMALL_STATE(260)] = 9329,
    [SMALL_STATE(261)] = 9345,
    [SMALL_STATE(262)] = 9356,
    [SMALL_STATE(263)] = 9367,
    [SMALL_STATE(264)] = 9378,
    [SMALL_STATE(265)] = 9391,
    [SMALL_STATE(266)] = 9404,
    [SMALL_STATE(267)] = 9417,
    [SMALL_STATE(268)] = 9430,
    [SMALL_STATE(269)] = 9443,
    [SMALL_STATE(270)] = 9456,
    [SMALL_STATE(271)] = 9467,
    [SMALL_STATE(272)] = 9478,
    [SMALL_STATE(273)] = 9489,
    [SMALL_STATE(274)] = 9500,
    [SMALL_STATE(275)] = 9511,
    [SMALL_STATE(276)] = 9522,
    [SMALL_STATE(277)] = 9533,
    [SMALL_STATE(278)] = 9546,
    [SMALL_STATE(279)] = 9557,
    [SMALL_STATE(280)] = 9570,
    [SMALL_STATE(281)] = 9581,
    [SMALL_STATE(282)] = 9594,
    [SMALL_STATE(283)] = 9605,
    [SMALL_STATE(284)] = 9616,
    [SMALL_STATE(285)] = 9627,
    [SMALL_STATE(286)] = 9640,
    [SMALL_STATE(287)] = 9651,
    [SMALL_STATE(288)] = 9662,
    [SMALL_STATE(289)] = 9673,
    [SMALL_STATE(290)] = 9684,
    [SMALL_STATE(291)] = 9697,
    [SMALL_STATE(292)] = 9708,
    [SMALL_STATE(293)] = 9719,
    [SMALL_STATE(294)] = 9732,
    [SMALL_STATE(295)] = 9743,
    [SMALL_STATE(296)] = 9756,
    [SMALL_STATE(297)] = 9767,
    [SMALL_STATE(298)] = 9778,
    [SMALL_STATE(299)] = 9791,
    [SMALL_STATE(300)] = 9802,
    [SMALL_STATE(301)] = 9813,
    [SMALL_STATE(302)] = 9824,
    [SMALL_STATE(303)] = 9835,
    [SMALL_STATE(304)] = 9846,
    [SMALL_STATE(305)] = 9857,
    [SMALL_STATE(306)] = 9870,
    [SMALL_STATE(307)] = 9881,
    [SMALL_STATE(308)] = 9894,
    [SMALL_STATE(309)] = 9905,
    [SMALL_STATE(310)] = 9916,
    [SMALL_STATE(311)] = 9929,
    [SMALL_STATE(312)] = 9940,
    [SMALL_STATE(313)] = 9953,
    [SMALL_STATE(314)] = 9966,
    [SMALL_STATE(315)] = 9977,
    [SMALL_STATE(316)] = 9988,
    [SMALL_STATE(317)] = 10001,
    [SMALL_STATE(318)] = 10014,
    [SMALL_STATE(319)] = 10025,
    [SMALL_STATE(320)] = 10036,
    [SMALL_STATE(321)] = 10049,
    [SMALL_STATE(322)] = 10060,
    [SMALL_STATE(323)] = 10071,
    [SMALL_STATE(324)] = 10084,
    [SMALL_STATE(325)] = 10095,
    [SMALL_STATE(326)] = 10105,
    [SMALL_STATE(327)] = 10115,
    [SMALL_STATE(328)] = 10125,
    [SMALL_STATE(329)] = 10135,
    [SMALL_STATE(330)] = 10145,
    [SMALL_STATE(331)] = 10155,
    [SMALL_STATE(332)] = 10165,
    [SMALL_STATE(333)] = 10175,
    [SMALL_STATE(334)] = 10185,
    [SMALL_STATE(335)] = 10195,
    [SMALL_STATE(336)] = 10205,
    [SMALL_STATE(337)] = 10215,
    [SMALL_STATE(338)] = 10225,
    [SMALL_STATE(339)] = 10235,
    [SMALL_STATE(340)] = 10245,
    [SMALL_STATE(341)] = 10255,
    [SMALL_STATE(342)] = 10265,
    [SMALL_STATE(343)] = 10275,
    [SMALL_STATE(344)] = 10285,
    [SMALL_STATE(345)] = 10295,
    [SMALL_STATE(346)] = 10305,
    [SMALL_STATE(347)] = 10315,
    [SMALL_STATE(348)] = 10325,
    [SMALL_STATE(349)] = 10335,
    [SMALL_STATE(350)] = 10345,
    [SMALL_STATE(351)] = 10355,
    [SMALL_STATE(352)] = 10365,
    [SMALL_STATE(353)] = 10375,
    [SMALL_STATE(354)] = 10385,
    [SMALL_STATE(355)] = 10395,
    [SMALL_STATE(356)] = 10405,
    [SMALL_STATE(357)] = 10415,
    [SMALL_STATE(358)] = 10425,
    [SMALL_STATE(359)] = 10435,
    [SMALL_STATE(360)] = 10445,
    [SMALL_STATE(361)] = 10455,
    [SMALL_STATE(362)] = 10465,
    [SMALL_STATE(363)] = 10475,
    [SMALL_STATE(364)] = 10485,
    [SMALL_STATE(365)] = 10495,
    [SMALL_STATE(366)] = 10505,
    [SMALL_STATE(367)] = 10515,
    [SMALL_STATE(368)] = 10525,
    [SMALL_STATE(369)] = 10535,
    [SMALL_STATE(370)] = 10545,
    [SMALL_STATE(371)] = 10555,
    [SMALL_STATE(372)] = 10565,
    [SMALL_STATE(373)] = 10575,
    [SMALL_STATE(374)] = 10585,
    [SMALL_STATE(375)] = 10595,
    [SMALL_STATE(376)] = 10605,
    [SMALL_STATE(377)] = 10615,
    [SMALL_STATE(378)] = 10625,
    [SMALL_STATE(379)] = 10635,
    [SMALL_STATE(380)] = 10645,
    [SMALL_STATE(381)] = 10655,
    [SMALL_STATE(382)] = 10665,
    [SMALL_STATE(383)] = 10675,
    [SMALL_STATE(384)] = 10685,
    [SMALL_STATE(385)] = 10695,
    [SMALL_STATE(386)] = 10705,
    [SMALL_STATE(387)] = 10715,
    [SMALL_STATE(388)] = 10725,
    [SMALL_STATE(389)] = 10735,
    [SMALL_STATE(390)] = 10745,
    [SMALL_STATE(391)] = 10755,
    [SMALL_STATE(392)] = 10765,
    [SMALL_STATE(393)] = 10775,
    [SMALL_STATE(394)] = 10785,
    [SMALL_STATE(395)] = 10795,
    [SMALL_STATE(396)] = 10805,
    [SMALL_STATE(397)] = 10815,
    [SMALL_STATE(398)] = 10825,
    [SMALL_STATE(399)] = 10835,
    [SMALL_STATE(400)] = 10845,
    [SMALL_STATE(401)] = 10855,
    [SMALL_STATE(402)] = 10865,
    [SMALL_STATE(403)] = 10875,
    [SMALL_STATE(404)] = 10885,
    [SMALL_STATE(405)] = 10895,
    [SMALL_STATE(406)] = 10905,
    [SMALL_STATE(407)] = 10915,
    [SMALL_STATE(408)] = 10925,
    [SMALL_STATE(409)] = 10935,
    [SMALL_STATE(410)] = 10945,
    [SMALL_STATE(411)] = 10955,
    [SMALL_STATE(412)] = 10965,
    [SMALL_STATE(413)] = 10975,
    [SMALL_STATE(414)] = 10985,
    [SMALL_STATE(415)] = 10995,
    [SMALL_STATE(416)] = 11005,
    [SMALL_STATE(417)] = 11015,
    [SMALL_STATE(418)] = 11025,
    [SMALL_STATE(419)] = 11035,
    [SMALL_STATE(420)] = 11045,
    [SMALL_STATE(421)] = 11055,
    [SMALL_STATE(422)] = 11065,
    [SMALL_STATE(423)] = 11075,
    [SMALL_STATE(424)] = 11085,
    [SMALL_STATE(425)] = 11095,
    [SMALL_STATE(426)] = 11105,
    [SMALL_STATE(427)] = 11115,
    [SMALL_STATE(428)] = 11125,
    [SMALL_STATE(429)] = 11135,
    [SMALL_STATE(430)] = 11145,
    [SMALL_STATE(431)] = 11155,
    [SMALL_STATE(432)] = 11165,
    [SMALL_STATE(433)] = 11175,
    [SMALL_STATE(434)] = 11185,
    [SMALL_STATE(435)] = 11195,
    [SMALL_STATE(436)] = 11205,
    [SMALL_STATE(437)] = 11215,
    [SMALL_STATE(438)] = 11225,
    [SMALL_STATE(439)] = 11235,
    [SMALL_STATE(440)] = 11245,
    [SMALL_STATE(441)] = 11255,
    [SMALL_STATE(442)] = 11265,
    [SMALL_STATE(443)] = 11275,
    [SMALL_STATE(444)] = 11285,
    [SMALL_STATE(445)] = 11295,
    [SMALL_STATE(446)] = 11305,
    [SMALL_STATE(447)] = 11315,
    [SMALL_STATE(448)] = 11325,
    [SMALL_STATE(449)] = 11335,
    [SMALL_STATE(450)] = 11345,
    [SMALL_STATE(451)] = 11355,
    [SMALL_STATE(452)] = 11365,
    [SMALL_STATE(453)] = 11375,
    [SMALL_STATE(454)] = 11385,
    [SMALL_STATE(455)] = 11395,
    [SMALL_STATE(456)] = 11405,
    [SMALL_STATE(457)] = 11415,
    [SMALL_STATE(458)] = 11425,
    [SMALL_STATE(459)] = 11435,
    [SMALL_STATE(460)] = 11445,
    [SMALL_STATE(461)] = 11455,
    [SMALL_STATE(462)] = 11465,
    [SMALL_STATE(463)] = 11475,
    [SMALL_STATE(464)] = 11485,
    [SMALL_STATE(465)] = 11495,
    [SMALL_STATE(466)] = 11505,
    [SMALL_STATE(467)] = 11515,
    [SMALL_STATE(468)] = 11525,
    [SMALL_STATE(469)] = 11535,
    [SMALL_STATE(470)] = 11545,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(359),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(468),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(265),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(461),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(460),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(459),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(458),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(457),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(456),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(455),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(454),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(452),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(450),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(267),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(142),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(446),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(444),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(443),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(302),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(426),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(361),
    [55] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(238),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(165),
    [61] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [63] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(166),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(232),
    [69] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(232),
    [71] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(170),
    [73] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(425),
    [75] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [77] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(424),
    [79] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(171),
    [81] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(422),
    [83] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [85] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(426),
    [88] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(43),
    [91] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(361),
    [94] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(360),
    [97] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(238),
    [100] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(165),
    [103] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(165),
    [106] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(166),
    [109] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(166),
    [112] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(232),
    [115] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(232),
    [118] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(170),
    [121] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(425),
    [124] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(79),
    [127] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(424),
    [130] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(171),
    [133] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(422),
    [136] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(367),
    [138] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(319),
    [140] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [142] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(468),
    [145] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(265),
    [148] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(461),
    [151] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(460),
    [154] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(459),
    [157] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(458),
    [160] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(457),
    [163] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(456),
    [166] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(455),
    [169] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(454),
    [172] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(14),
    [175] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(452),
    [178] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(450),
    [181] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(267),
    [184] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(142),
    [187] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(446),
    [190] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(444),
    [193] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(36),
    [196] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(250),
    [199] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(443),
    [202] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(289),
    [204] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(362),
    [206] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(288),
    [208] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(262),
    [210] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [212] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(276),
    [214] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(460),
    [216] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(459),
    [218] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(456),
    [220] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [224] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(368),
    [226] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(333),
    [228] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(378),
    [230] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(377),
    [232] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(30),
    [234] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(381),
    [236] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(453),
    [238] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(355),
    [240] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(467),
    [242] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(353),
    [244] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(411),
    [246] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(409),
    [248] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    [250] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(467),
    [253] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(458),
    [256] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(353),
    [259] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(411),
    [262] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(409),
    [265] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(165),
    [268] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(165),
    [271] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(166),
    [274] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(166),
    [277] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(232),
    [280] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(232),
    [283] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(170),
    [286] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(425),
    [289] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(79),
    [292] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(424),
    [295] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(171),
    [298] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1),
    [300] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [302] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(214),
    [304] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(449),
    [306] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(251),
    [308] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [310] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(43),
    [313] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(361),
    [316] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(360),
    [319] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [321] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [323] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [325] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 7),
    [327] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 7),
    [329] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 3),
    [331] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 3),
    [333] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 3),
    [335] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 3),
    [337] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 7),
    [339] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 7),
    [341] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [343] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [345] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 2),
    [347] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 2),
    [349] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [351] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [353] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 6),
    [355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 6),
    [357] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(124),
    [359] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [361] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [363] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(307),
    [365] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(341),
    [367] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(340),
    [369] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(84),
    [371] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(463),
    [373] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(106),
    [375] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5),
    [377] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5),
    [379] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [381] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [383] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3),
    [385] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3),
    [387] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [389] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [391] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 6),
    [393] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [395] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [397] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [399] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [401] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [403] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [405] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [407] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [409] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [411] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [413] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [415] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [417] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [419] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [421] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [423] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 5),
    [425] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 5),
    [427] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [429] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [431] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [433] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [435] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [437] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [439] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [441] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [443] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [445] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(384),
    [447] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [449] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [451] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3),
    [453] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3),
    [455] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [457] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [459] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [461] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [463] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, .production_id = 8),
    [465] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, .production_id = 8),
    [467] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4),
    [469] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4),
    [471] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [473] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [475] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(100),
    [477] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [479] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [481] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [483] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [485] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [487] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [489] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [491] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [493] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(107),
    [495] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(390),
    [497] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [499] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [501] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [503] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [505] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [507] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [509] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [511] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [513] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(416),
    [515] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(281),
    [517] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [519] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [521] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [523] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [525] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(142),
    [528] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(446),
    [531] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(444),
    [534] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [536] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(310),
    [538] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(312),
    [540] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [542] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [544] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [546] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [548] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [550] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [552] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [554] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(249),
    [556] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(74),
    [558] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [560] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [562] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [564] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [566] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(431),
    [568] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(315),
    [570] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(314),
    [572] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [574] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [576] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(300),
    [578] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [580] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(45),
    [583] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(274),
    [585] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(385),
    [587] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [589] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [591] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(287),
    [593] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [595] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(427),
    [597] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [599] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(385),
    [602] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(57),
    [605] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(358),
    [607] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(346),
    [609] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(133),
    [611] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [613] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [615] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(250),
    [618] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(443),
    [621] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(348),
    [623] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(396),
    [625] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [627] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(325),
    [629] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [631] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [633] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [635] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(399),
    [637] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    [639] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    SHIFT_REPEAT(346),
    [642] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(371),
    [644] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [646] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(195),
    [649] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(195),
    [652] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    [654] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 2),
    SHIFT_REPEAT(313),
    [657] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [659] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(296),
    [661] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [663] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(167),
    [666] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [668] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [670] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(204),
    [672] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [674] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1),
    [676] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1),
    [678] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [680] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [682] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [684] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1),
    [686] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [688] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [690] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1),
    [692] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(315),
    [695] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [697] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [699] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [701] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [703] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(418),
    [705] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(215),
    [707] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [709] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [711] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [713] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [715] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(410),
    [717] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(198),
    [719] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(195),
    [721] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [723] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [725] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(272),
    [727] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [729] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(310),
    [732] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [734] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(306),
    [736] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [738] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [740] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [742] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [744] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [746] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [748] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [750] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(164),
    [752] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [754] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [756] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [758] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [760] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 1),
    [762] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [764] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(344),
    [766] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [768] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(126),
    [770] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 2),
    [772] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [774] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [776] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(144),
    [779] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(401),
    [781] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(277),
    [783] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8),
    [785] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [787] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [789] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [791] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [793] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    [795] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(277),
    [798] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [800] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(271),
    [802] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [804] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    [806] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    SHIFT_REPEAT(283),
    [809] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [811] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [813] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [815] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(292),
    [817] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(423),
    [819] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [821] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [823] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(145),
    [826] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [828] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [830] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [832] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6),
    [834] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(215),
    [837] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [839] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1),
    [841] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(445),
    [843] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [845] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(299),
    [847] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(283),
    [849] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(284),
    [851] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1),
    [853] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(252),
    [855] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [857] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(22),
    [860] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(370),
    [862] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [864] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(395),
    [866] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [868] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [870] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [872] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [874] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(164),
    [877] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [879] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [881] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [883] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(439),
    [885] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [887] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(186),
    [890] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [892] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [894] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 4),
    [896] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [898] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [900] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [902] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [904] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [906] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [908] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [910] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6),
    [912] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [914] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 9),
    [916] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [918] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [920] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 2),
    [922] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1),
    [924] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2),
    [926] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [928] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [930] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [932] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 9),
    [934] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 4),
    [936] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [938] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [940] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [942] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_attr_raises_expr_repeat1, 1),
    [944] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [946] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [948] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [950] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(308),
    [952] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3),
    [954] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [956] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [958] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [960] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(2),
    [962] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(205),
    [964] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [966] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(408),
    [968] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(421),
    [970] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4),
    [972] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1),
    [974] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [976] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [978] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [980] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [982] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [984] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(156),
    [986] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1),
    [988] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [990] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [992] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(229),
    [994] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [996] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [998] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [1000] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [1002] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [1004] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [1006] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [1008] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(125),
    [1010] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(447),
    [1012] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(448),
    [1014] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [1016] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [1018] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [1020] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(231),
    [1022] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [1024] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [1026] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [1028] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(462),
    [1030] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(429),
    [1032] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [1034] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4),
    [1036] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [1038] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [1040] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4),
    [1042] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [1044] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [1046] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [1048] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(380),
    [1050] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1),
    [1052] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [1054] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4),
    [1056] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [1058] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [1060] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7),
    [1062] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(359),
    [1064] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(470),
    [1066] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [1068] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [1070] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [1072] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [1074] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(211),
    [1076] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [1078] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [1080] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [1082] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1084] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6),
    [1086] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6),
    [1088] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(135),
    [1090] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(329),
    [1092] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(311),
    [1094] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [1096] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [1098] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [1100] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5),
    [1102] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [1104] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [1106] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [1108] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [1110] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(330),
    [1112] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(331),
    [1114] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [1116] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [1118] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1),
    [1120] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(273),
    [1122] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(209),
    [1124] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(372),
    [1126] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [1128] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [1130] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5),
    [1132] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [1134] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [1136] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [1138] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [1140] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5),
    [1142] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(382),
    [1144] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [1146] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(219),
    [1148] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [1150] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(383),
    [1152] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(398),
    [1154] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 3),
    [1156] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1),
    [1158] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [1160] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(386),
    [1162] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(387),
    [1164] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [1166] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [1168] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1170] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1172] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [1174] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(327),
    [1176] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [1178] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1180] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [1182] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [1184] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(200),
    [1186] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [1188] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [1190] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(136),
    [1192] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [1194] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [1196] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [1198] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(469),
    [1200] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [1202] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [1204] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(402),
    [1206] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [1208] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1210] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(207),
    [1212] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(413),
    [1214] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(414),
    [1216] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [1218] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(152),
    [1220] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(174),
    [1222] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [1224] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(64),
    [1226] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [1228] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(428),
    [1230] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(269),
    [1232] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(242),
    [1234] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(430),
    [1236] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [1238] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(432),
    [1240] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(163),
    [1242] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(433),
    [1244] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [1246] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(107),
    [1248] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [1250] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(451),
    [1252] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(128),
    [1254] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(464),
    [1256] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(435),
    [1258] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(466),
    [1260] = { .entry = { .count = 1, .reusable = true } },
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
