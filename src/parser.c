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
#define STATE_COUNT 358
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 215
#define ALIAS_COUNT 3
#define TOKEN_COUNT 120
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 11

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
    anon_sym_SQUOTE = 22,
    aux_sym_char_literal_token1 = 23,
    anon_sym_L = 24,
    anon_sym_default = 25,
    anon_sym_enum = 26,
    anon_sym_COMMA = 27,
    anon_sym_ATdefault_literal = 28,
    anon_sym_ATignore_literal_names = 29,
    anon_sym_ATannotation = 30,
    anon_sym_union = 31,
    anon_sym_switch = 32,
    anon_sym_case = 33,
    anon_sym_bitmask = 34,
    anon_sym_typedef = 35,
    anon_sym_POUNDdefine = 36,
    aux_sym_predefine_token1 = 37,
    anon_sym_interface = 38,
    anon_sym_local = 39,
    sym_dds_service = 40,
    anon_sym_ATDDSRequestTopic = 41,
    anon_sym_name = 42,
    anon_sym_EQ = 43,
    anon_sym_ATDDSReplyTopic = 44,
    anon_sym_attribute = 45,
    anon_sym_raises = 46,
    anon_sym_in = 47,
    anon_sym_out = 48,
    anon_sym_inout = 49,
    anon_sym_const = 50,
    sym_number_literal = 51,
    sym_optional = 52,
    sym_key = 53,
    sym_must_understand = 54,
    sym_non_serialized = 55,
    sym_id = 56,
    sym_external = 57,
    anon_sym_AThashid = 58,
    anon_sym_LPAREN_DQUOTE = 59,
    anon_sym_DQUOTE = 60,
    anon_sym_ATtry_construct = 61,
    anon_sym_ATbit_bound = 62,
    aux_sym_bit_bound_token1 = 63,
    sym_extensibility = 64,
    sym_mutable = 65,
    sym_appendable = 66,
    sym_final = 67,
    sym_nested = 68,
    sym_value = 69,
    anon_sym_ATposition = 70,
    sym_autoid = 71,
    sym_verbatim = 72,
    anon_sym_ATdata_representation = 73,
    anon_sym_XCDR = 74,
    anon_sym_XCDR2 = 75,
    anon_sym_true = 76,
    anon_sym_false = 77,
    anon_sym_void = 78,
    anon_sym_float = 79,
    anon_sym_double = 80,
    anon_sym_short = 81,
    anon_sym_long = 82,
    anon_sym_longdouble = 83,
    anon_sym_unsignedshort = 84,
    anon_sym_char = 85,
    anon_sym_wchar = 86,
    anon_sym_longlong = 87,
    anon_sym_octet = 88,
    anon_sym_unsignedlong = 89,
    anon_sym_unsignedlonglong = 90,
    anon_sym_int = 91,
    anon_sym_int8 = 92,
    anon_sym_int16 = 93,
    anon_sym_int32 = 94,
    anon_sym_int64 = 95,
    anon_sym_uint8 = 96,
    anon_sym_uint16 = 97,
    anon_sym_uint32 = 98,
    anon_sym_uint64 = 99,
    anon_sym_float32 = 100,
    anon_sym_float64 = 101,
    anon_sym_float128 = 102,
    anon_sym_byte = 103,
    anon_sym_boolean = 104,
    anon_sym_char8 = 105,
    anon_sym_char16 = 106,
    anon_sym_COLON_COLON = 107,
    sym_identifier = 108,
    anon_sym_LBRACK = 109,
    anon_sym_RBRACK = 110,
    anon_sym_sequence = 111,
    anon_sym_LT = 112,
    anon_sym_GT = 113,
    anon_sym_string = 114,
    anon_sym_wstring = 115,
    anon_sym_fixed = 116,
    anon_sym_SLASH_SLASH = 117,
    aux_sym_comment_token1 = 118,
    sym__eof = 119,
    sym_specification = 120,
    sym__definition = 121,
    sym_except_dcl = 122,
    sym_native_dcl = 123,
    sym_module_dcl = 124,
    sym_struct_forward_dcl = 125,
    sym_struct_def = 126,
    sym_member = 127,
    sym_or_expr = 128,
    sym_xor_expr = 129,
    sym_and_expr = 130,
    sym_shift_expr = 131,
    sym_add_expr = 132,
    sym_mult_expr = 133,
    sym_unary_expr = 134,
    sym_unary_operator = 135,
    sym_char_literal = 136,
    sym_wchar_literal = 137,
    sym_literal = 138,
    sym_default = 139,
    sym_enum_dcl = 140,
    sym_enumerator = 141,
    sym_enum_modifier = 142,
    sym_enum_anno = 143,
    sym_annotation = 144,
    sym_annotation_field = 145,
    sym_union_forward_dcl = 146,
    sym_union_def = 147,
    sym_case = 148,
    sym_case_label = 149,
    sym_element_spec = 150,
    sym_switch_type_spec = 151,
    sym_bitmask = 152,
    sym_bitmask_field = 153,
    sym_typedef_dcl = 154,
    sym_predefine = 155,
    sym_interface_dcl = 156,
    sym_interface_forward_dcl = 157,
    sym_interface_header = 158,
    sym_interface_inheritance_spec = 159,
    sym_interface_name = 160,
    sym_interface_def = 161,
    sym_dds_request_topic = 162,
    sym_dds_reply_topic = 163,
    sym_interface_anno = 164,
    sym_interface_attribute = 165,
    sym_interface_function = 166,
    sym_interface_except = 167,
    sym_interface_modifier = 168,
    sym_function_arg = 169,
    sym_const_dcl = 170,
    sym_const_type = 171,
    sym_const_expr = 172,
    sym_hashid = 173,
    sym_try_construct = 174,
    sym_bit_bound = 175,
    sym_position = 176,
    sym_data_representation = 177,
    sym_struct_modifier = 178,
    sym_primitive_type = 179,
    sym_scoped_name = 180,
    sym_simple_type_spec = 181,
    sym_type_spec = 182,
    sym_simple_declarator = 183,
    sym_declarator = 184,
    sym_declarators = 185,
    sym_array_declarator = 186,
    sym_positive_int_const = 187,
    sym_fixed_array_size = 188,
    sym_sequence_type = 189,
    sym_string_type = 190,
    sym_fixed_pt_type = 191,
    sym_template_type_spec = 192,
    sym_type_declarator = 193,
    sym_any_declarators = 194,
    sym_any_declarator = 195,
    sym_comment = 196,
    aux_sym_specification_repeat1 = 197,
    aux_sym_except_dcl_repeat1 = 198,
    aux_sym_struct_def_repeat1 = 199,
    aux_sym_member_repeat1 = 200,
    aux_sym_enum_dcl_repeat1 = 201,
    aux_sym_enumerator_repeat1 = 202,
    aux_sym_annotation_repeat1 = 203,
    aux_sym_union_def_repeat1 = 204,
    aux_sym_bitmask_repeat1 = 205,
    aux_sym_interface_inheritance_spec_repeat1 = 206,
    aux_sym_interface_def_repeat1 = 207,
    aux_sym_interface_def_repeat2 = 208,
    aux_sym_interface_def_repeat3 = 209,
    aux_sym_interface_function_repeat1 = 210,
    aux_sym_data_representation_repeat1 = 211,
    aux_sym_declarators_repeat1 = 212,
    aux_sym_array_declarator_repeat1 = 213,
    aux_sym_any_declarators_repeat1 = 214,
    alias_sym_data_rep = 215,
    alias_sym_hashid_value = 216,
    alias_sym_try_construct_value = 217,
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
    [anon_sym_SQUOTE] = "'",
    [aux_sym_char_literal_token1] = "char_literal_token1",
    [anon_sym_L] = "L",
    [anon_sym_default] = "default",
    [anon_sym_enum] = "enum",
    [anon_sym_COMMA] = ",",
    [anon_sym_ATdefault_literal] = "@default_literal",
    [anon_sym_ATignore_literal_names] = "@ignore_literal_names",
    [anon_sym_ATannotation] = "@annotation",
    [anon_sym_union] = "union",
    [anon_sym_switch] = "switch",
    [anon_sym_case] = "case",
    [anon_sym_bitmask] = "bitmask",
    [anon_sym_typedef] = "typedef",
    [anon_sym_POUNDdefine] = "#define",
    [aux_sym_predefine_token1] = "predefine_token1",
    [anon_sym_interface] = "interface",
    [anon_sym_local] = "local",
    [sym_dds_service] = "dds_service",
    [anon_sym_ATDDSRequestTopic] = "@DDSRequestTopic",
    [anon_sym_name] = "name",
    [anon_sym_EQ] = "=",
    [anon_sym_ATDDSReplyTopic] = "@DDSReplyTopic",
    [anon_sym_attribute] = "attribute",
    [anon_sym_raises] = "raises",
    [anon_sym_in] = "in",
    [anon_sym_out] = "out",
    [anon_sym_inout] = "inout",
    [anon_sym_const] = "const",
    [sym_number_literal] = "number_literal",
    [sym_optional] = "optional",
    [sym_key] = "key",
    [sym_must_understand] = "must_understand",
    [sym_non_serialized] = "non_serialized",
    [sym_id] = "id",
    [sym_external] = "external",
    [anon_sym_AThashid] = "@hashid",
    [anon_sym_LPAREN_DQUOTE] = "(\"",
    [anon_sym_DQUOTE] = "\"",
    [anon_sym_ATtry_construct] = "@try_construct",
    [anon_sym_ATbit_bound] = "@bit_bound",
    [aux_sym_bit_bound_token1] = "bistmask_bound",
    [sym_extensibility] = "extensibility",
    [sym_mutable] = "mutable",
    [sym_appendable] = "appendable",
    [sym_final] = "final",
    [sym_nested] = "nested",
    [sym_value] = "value",
    [anon_sym_ATposition] = "@position",
    [sym_autoid] = "autoid",
    [sym_verbatim] = "verbatim",
    [anon_sym_ATdata_representation] = "@data_representation",
    [anon_sym_XCDR] = "XCDR",
    [anon_sym_XCDR2] = "XCDR2",
    [anon_sym_true] = "true",
    [anon_sym_false] = "false",
    [anon_sym_void] = "void",
    [anon_sym_float] = "float",
    [anon_sym_double] = "double",
    [anon_sym_short] = "short",
    [anon_sym_long] = "long",
    [anon_sym_longdouble] = "long double",
    [anon_sym_unsignedshort] = "unsigned short",
    [anon_sym_char] = "char",
    [anon_sym_wchar] = "wchar",
    [anon_sym_longlong] = "long long",
    [anon_sym_octet] = "octet",
    [anon_sym_unsignedlong] = "unsigned long",
    [anon_sym_unsignedlonglong] = "unsigned long long",
    [anon_sym_int] = "int",
    [anon_sym_int8] = "int8",
    [anon_sym_int16] = "int16",
    [anon_sym_int32] = "int32",
    [anon_sym_int64] = "int64",
    [anon_sym_uint8] = "uint8",
    [anon_sym_uint16] = "uint16",
    [anon_sym_uint32] = "uint32",
    [anon_sym_uint64] = "uint64",
    [anon_sym_float32] = "float32",
    [anon_sym_float64] = "float64",
    [anon_sym_float128] = "float128",
    [anon_sym_byte] = "byte",
    [anon_sym_boolean] = "boolean",
    [anon_sym_char8] = "char8",
    [anon_sym_char16] = "char16",
    [anon_sym_COLON_COLON] = "::",
    [sym_identifier] = "identifier",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_sequence] = "sequence",
    [anon_sym_LT] = "<",
    [anon_sym_GT] = ">",
    [anon_sym_string] = "string",
    [anon_sym_wstring] = "wstring",
    [anon_sym_fixed] = "fixed",
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
    [sym_char_literal] = "char_literal",
    [sym_wchar_literal] = "wchar_literal",
    [sym_literal] = "literal",
    [sym_default] = "default",
    [sym_enum_dcl] = "enum_dcl",
    [sym_enumerator] = "enumerator",
    [sym_enum_modifier] = "enum_modifier",
    [sym_enum_anno] = "enum_anno",
    [sym_annotation] = "annotation",
    [sym_annotation_field] = "annotation_field",
    [sym_union_forward_dcl] = "union_forward_dcl",
    [sym_union_def] = "union_def",
    [sym_case] = "case",
    [sym_case_label] = "case_label",
    [sym_element_spec] = "element_spec",
    [sym_switch_type_spec] = "switch_type_spec",
    [sym_bitmask] = "bitmask",
    [sym_bitmask_field] = "bitmask_field",
    [sym_typedef_dcl] = "typedef_dcl",
    [sym_predefine] = "predefine",
    [sym_interface_dcl] = "interface_dcl",
    [sym_interface_forward_dcl] = "interface_forward_dcl",
    [sym_interface_header] = "interface_header",
    [sym_interface_inheritance_spec] = "interface_inheritance_spec",
    [sym_interface_name] = "interface_name",
    [sym_interface_def] = "interface_def",
    [sym_dds_request_topic] = "dds_request_topic",
    [sym_dds_reply_topic] = "dds_reply_topic",
    [sym_interface_anno] = "interface_anno",
    [sym_interface_attribute] = "interface_attribute",
    [sym_interface_function] = "interface_function",
    [sym_interface_except] = "interface_except",
    [sym_interface_modifier] = "interface_modifier",
    [sym_function_arg] = "function_arg",
    [sym_const_dcl] = "const_dcl",
    [sym_const_type] = "const_type",
    [sym_const_expr] = "const_expr",
    [sym_hashid] = "hashid",
    [sym_try_construct] = "try_construct",
    [sym_bit_bound] = "bit_bound",
    [sym_position] = "position",
    [sym_data_representation] = "data_representation",
    [sym_struct_modifier] = "struct_modifier",
    [sym_primitive_type] = "primitive_type",
    [sym_scoped_name] = "scoped_name",
    [sym_simple_type_spec] = "simple_type_spec",
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
    [aux_sym_annotation_repeat1] = "annotation_repeat1",
    [aux_sym_union_def_repeat1] = "union_def_repeat1",
    [aux_sym_bitmask_repeat1] = "bitmask_repeat1",
    [aux_sym_interface_inheritance_spec_repeat1] = "interface_inheritance_spec_repeat1",
    [aux_sym_interface_def_repeat1] = "interface_def_repeat1",
    [aux_sym_interface_def_repeat2] = "interface_def_repeat2",
    [aux_sym_interface_def_repeat3] = "interface_def_repeat3",
    [aux_sym_interface_function_repeat1] = "interface_function_repeat1",
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
    [anon_sym_SQUOTE] = anon_sym_SQUOTE,
    [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
    [anon_sym_L] = anon_sym_L,
    [anon_sym_default] = anon_sym_default,
    [anon_sym_enum] = anon_sym_enum,
    [anon_sym_COMMA] = anon_sym_COMMA,
    [anon_sym_ATdefault_literal] = anon_sym_ATdefault_literal,
    [anon_sym_ATignore_literal_names] = anon_sym_ATignore_literal_names,
    [anon_sym_ATannotation] = anon_sym_ATannotation,
    [anon_sym_union] = anon_sym_union,
    [anon_sym_switch] = anon_sym_switch,
    [anon_sym_case] = anon_sym_case,
    [anon_sym_bitmask] = anon_sym_bitmask,
    [anon_sym_typedef] = anon_sym_typedef,
    [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
    [aux_sym_predefine_token1] = aux_sym_predefine_token1,
    [anon_sym_interface] = anon_sym_interface,
    [anon_sym_local] = anon_sym_local,
    [sym_dds_service] = sym_dds_service,
    [anon_sym_ATDDSRequestTopic] = anon_sym_ATDDSRequestTopic,
    [anon_sym_name] = anon_sym_name,
    [anon_sym_EQ] = anon_sym_EQ,
    [anon_sym_ATDDSReplyTopic] = anon_sym_ATDDSReplyTopic,
    [anon_sym_attribute] = anon_sym_attribute,
    [anon_sym_raises] = anon_sym_raises,
    [anon_sym_in] = anon_sym_in,
    [anon_sym_out] = anon_sym_out,
    [anon_sym_inout] = anon_sym_inout,
    [anon_sym_const] = anon_sym_const,
    [sym_number_literal] = sym_number_literal,
    [sym_optional] = sym_optional,
    [sym_key] = sym_key,
    [sym_must_understand] = sym_must_understand,
    [sym_non_serialized] = sym_non_serialized,
    [sym_id] = sym_id,
    [sym_external] = sym_external,
    [anon_sym_AThashid] = anon_sym_AThashid,
    [anon_sym_LPAREN_DQUOTE] = anon_sym_LPAREN_DQUOTE,
    [anon_sym_DQUOTE] = anon_sym_DQUOTE,
    [anon_sym_ATtry_construct] = anon_sym_ATtry_construct,
    [anon_sym_ATbit_bound] = anon_sym_ATbit_bound,
    [aux_sym_bit_bound_token1] = aux_sym_bit_bound_token1,
    [sym_extensibility] = sym_extensibility,
    [sym_mutable] = sym_mutable,
    [sym_appendable] = sym_appendable,
    [sym_final] = sym_final,
    [sym_nested] = sym_nested,
    [sym_value] = sym_value,
    [anon_sym_ATposition] = anon_sym_ATposition,
    [sym_autoid] = sym_autoid,
    [sym_verbatim] = sym_verbatim,
    [anon_sym_ATdata_representation] = anon_sym_ATdata_representation,
    [anon_sym_XCDR] = anon_sym_XCDR,
    [anon_sym_XCDR2] = anon_sym_XCDR2,
    [anon_sym_true] = anon_sym_true,
    [anon_sym_false] = anon_sym_false,
    [anon_sym_void] = anon_sym_void,
    [anon_sym_float] = anon_sym_float,
    [anon_sym_double] = anon_sym_double,
    [anon_sym_short] = anon_sym_short,
    [anon_sym_long] = anon_sym_long,
    [anon_sym_longdouble] = anon_sym_longdouble,
    [anon_sym_unsignedshort] = anon_sym_unsignedshort,
    [anon_sym_char] = anon_sym_char,
    [anon_sym_wchar] = anon_sym_wchar,
    [anon_sym_longlong] = anon_sym_longlong,
    [anon_sym_octet] = anon_sym_octet,
    [anon_sym_unsignedlong] = anon_sym_unsignedlong,
    [anon_sym_unsignedlonglong] = anon_sym_unsignedlonglong,
    [anon_sym_int] = anon_sym_int,
    [anon_sym_int8] = anon_sym_int8,
    [anon_sym_int16] = anon_sym_int16,
    [anon_sym_int32] = anon_sym_int32,
    [anon_sym_int64] = anon_sym_int64,
    [anon_sym_uint8] = anon_sym_uint8,
    [anon_sym_uint16] = anon_sym_uint16,
    [anon_sym_uint32] = anon_sym_uint32,
    [anon_sym_uint64] = anon_sym_uint64,
    [anon_sym_float32] = anon_sym_float32,
    [anon_sym_float64] = anon_sym_float64,
    [anon_sym_float128] = anon_sym_float128,
    [anon_sym_byte] = anon_sym_byte,
    [anon_sym_boolean] = anon_sym_boolean,
    [anon_sym_char8] = anon_sym_char8,
    [anon_sym_char16] = anon_sym_char16,
    [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
    [sym_identifier] = sym_identifier,
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
    [anon_sym_sequence] = anon_sym_sequence,
    [anon_sym_LT] = anon_sym_LT,
    [anon_sym_GT] = anon_sym_GT,
    [anon_sym_string] = anon_sym_string,
    [anon_sym_wstring] = anon_sym_wstring,
    [anon_sym_fixed] = anon_sym_fixed,
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
    [sym_char_literal] = sym_char_literal,
    [sym_wchar_literal] = sym_wchar_literal,
    [sym_literal] = sym_literal,
    [sym_default] = sym_default,
    [sym_enum_dcl] = sym_enum_dcl,
    [sym_enumerator] = sym_enumerator,
    [sym_enum_modifier] = sym_enum_modifier,
    [sym_enum_anno] = sym_enum_anno,
    [sym_annotation] = sym_annotation,
    [sym_annotation_field] = sym_annotation_field,
    [sym_union_forward_dcl] = sym_union_forward_dcl,
    [sym_union_def] = sym_union_def,
    [sym_case] = sym_case,
    [sym_case_label] = sym_case_label,
    [sym_element_spec] = sym_element_spec,
    [sym_switch_type_spec] = sym_switch_type_spec,
    [sym_bitmask] = sym_bitmask,
    [sym_bitmask_field] = sym_bitmask_field,
    [sym_typedef_dcl] = sym_typedef_dcl,
    [sym_predefine] = sym_predefine,
    [sym_interface_dcl] = sym_interface_dcl,
    [sym_interface_forward_dcl] = sym_interface_forward_dcl,
    [sym_interface_header] = sym_interface_header,
    [sym_interface_inheritance_spec] = sym_interface_inheritance_spec,
    [sym_interface_name] = sym_interface_name,
    [sym_interface_def] = sym_interface_def,
    [sym_dds_request_topic] = sym_dds_request_topic,
    [sym_dds_reply_topic] = sym_dds_reply_topic,
    [sym_interface_anno] = sym_interface_anno,
    [sym_interface_attribute] = sym_interface_attribute,
    [sym_interface_function] = sym_interface_function,
    [sym_interface_except] = sym_interface_except,
    [sym_interface_modifier] = sym_interface_modifier,
    [sym_function_arg] = sym_function_arg,
    [sym_const_dcl] = sym_const_dcl,
    [sym_const_type] = sym_const_type,
    [sym_const_expr] = sym_const_expr,
    [sym_hashid] = sym_hashid,
    [sym_try_construct] = sym_try_construct,
    [sym_bit_bound] = sym_bit_bound,
    [sym_position] = sym_position,
    [sym_data_representation] = sym_data_representation,
    [sym_struct_modifier] = sym_struct_modifier,
    [sym_primitive_type] = sym_primitive_type,
    [sym_scoped_name] = sym_scoped_name,
    [sym_simple_type_spec] = sym_simple_type_spec,
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
    [aux_sym_annotation_repeat1] = aux_sym_annotation_repeat1,
    [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
    [aux_sym_bitmask_repeat1] = aux_sym_bitmask_repeat1,
    [aux_sym_interface_inheritance_spec_repeat1] = aux_sym_interface_inheritance_spec_repeat1,
    [aux_sym_interface_def_repeat1] = aux_sym_interface_def_repeat1,
    [aux_sym_interface_def_repeat2] = aux_sym_interface_def_repeat2,
    [aux_sym_interface_def_repeat3] = aux_sym_interface_def_repeat3,
    [aux_sym_interface_function_repeat1] = aux_sym_interface_function_repeat1,
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
    [anon_sym_SQUOTE] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_char_literal_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_L] = {
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
    [anon_sym_EQ] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATDDSReplyTopic] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_attribute] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_raises] = {
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
    [anon_sym_const] = {
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
    [anon_sym_DQUOTE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATtry_construct] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATbit_bound] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_bit_bound_token1] = {
        .visible = true,
        .named = true,
    },
    [sym_extensibility] = {
        .visible = true,
        .named = true,
    },
    [sym_mutable] = {
        .visible = true,
        .named = true,
    },
    [sym_appendable] = {
        .visible = true,
        .named = true,
    },
    [sym_final] = {
        .visible = true,
        .named = true,
    },
    [sym_nested] = {
        .visible = true,
        .named = true,
    },
    [sym_value] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_ATposition] = {
        .visible = true,
        .named = false,
    },
    [sym_autoid] = {
        .visible = true,
        .named = true,
    },
    [sym_verbatim] = {
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
    [anon_sym_true] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_false] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_void] = {
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
    [anon_sym_short] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_long] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_longdouble] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_unsignedshort] = {
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
    [anon_sym_longlong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_octet] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_unsignedlong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_unsignedlonglong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int8] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int16] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int32] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int64] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint8] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint16] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint32] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint64] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_float32] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_float64] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_float128] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_byte] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_boolean] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_char8] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_char16] = {
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
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_sequence] = {
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
    [anon_sym_string] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_wstring] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_fixed] = {
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
    [sym_char_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_wchar_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_literal] = {
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
    [sym_annotation] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_field] = {
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
    [sym_bitmask] = {
        .visible = true,
        .named = true,
    },
    [sym_bitmask_field] = {
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
    [sym_interface_def] = {
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
    [sym_interface_attribute] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_function] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_except] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_modifier] = {
        .visible = true,
        .named = true,
    },
    [sym_function_arg] = {
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
    [sym_bit_bound] = {
        .visible = true,
        .named = true,
    },
    [sym_position] = {
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
    [sym_primitive_type] = {
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
    [aux_sym_annotation_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_union_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_bitmask_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_inheritance_spec_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_def_repeat2] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_def_repeat3] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_function_repeat1] = {
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
    [6] = { .index = 3, .length = 1 },
    [8] = { .index = 4, .length = 2 },
    [9] = { .index = 6, .length = 1 },
    [10] = { .index = 7, .length = 1 },
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
    [5] = {
        [2] = sym_position,
    },
    [7] = {
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
    [129] = 58,
    [130] = 130,
    [131] = 131,
    [132] = 132,
    [133] = 133,
    [134] = 134,
    [135] = 135,
    [136] = 136,
    [137] = 55,
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
    [196] = 55,
    [197] = 197,
    [198] = 58,
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
    [247] = 197,
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
    [282] = 264,
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
    [356] = 264,
    [357] = 357,
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
                ADVANCE(477);
            if(lookahead == '"')
                ADVANCE(582);
            if(lookahead == '#')
                ADVANCE(128);
            if(lookahead == '$')
                ADVANCE(489);
            if(lookahead == '%')
                ADVANCE(498);
            if(lookahead == '\'')
                ADVANCE(503);
            if(lookahead == '(')
                ADVANCE(501);
            if(lookahead == ')')
                ADVANCE(502);
            if(lookahead == '*')
                ADVANCE(496);
            if(lookahead == '+')
                ADVANCE(492);
            if(lookahead == ',')
                ADVANCE(511);
            if(lookahead == '-')
                ADVANCE(494);
            if(lookahead == '/')
                ADVANCE(497);
            if(lookahead == ':')
                ADVANCE(486);
            if(lookahead == ';')
                ADVANCE(478);
            if(lookahead == '<')
                ADVANCE(785);
            if(lookahead == '=')
                ADVANCE(532);
            if(lookahead == '>')
                ADVANCE(787);
            if(lookahead == '@')
                ADVANCE(57);
            if(lookahead == 'L')
                ADVANCE(505);
            if(lookahead == 'X')
                ADVANCE(56);
            if(lookahead == '[')
                ADVANCE(780);
            if(lookahead == '\\')
                SKIP(473)
            if(lookahead == ']')
                ADVANCE(781);
            if(lookahead == '^')
                ADVANCE(488);
            if(lookahead == 'a')
                ADVANCE(405);
            if(lookahead == 'b')
                ADVANCE(220);
            if(lookahead == 'c')
                ADVANCE(74);
            if(lookahead == 'd')
                ADVANCE(147);
            if(lookahead == 'e')
                ADVANCE(287);
            if(lookahead == 'f')
                ADVANCE(75);
            if(lookahead == 'i')
                ADVANCE(279);
            if(lookahead == 'l')
                ADVANCE(315);
            if(lookahead == 'm')
                ADVANCE(316);
            if(lookahead == 'n')
                ADVANCE(76);
            if(lookahead == 'o')
                ADVANCE(118);
            if(lookahead == 'r')
                ADVANCE(79);
            if(lookahead == 's')
                ADVANCE(148);
            if(lookahead == 't')
                ADVANCE(358);
            if(lookahead == 'u')
                ADVANCE(221);
            if(lookahead == 'v')
                ADVANCE(319);
            if(lookahead == 'w')
                ADVANCE(114);
            if(lookahead == '{')
                ADVANCE(480);
            if(lookahead == '|')
                ADVANCE(487);
            if(lookahead == '}')
                ADVANCE(481);
            if(lookahead == '~')
                ADVANCE(499);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(585);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(33)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(33)
            if(lookahead == '\r')
                SKIP(1)
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(37)
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(37)
            if(lookahead == '\r')
                SKIP(3)
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(38)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(38)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(32)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(32)
            if(lookahead == '\r')
                SKIP(7)
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(30)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(30)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(34)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(34)
            if(lookahead == '\r')
                SKIP(11)
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(40)
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(40)
            if(lookahead == '\r')
                SKIP(13)
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(31)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(31)
            if(lookahead == '\r')
                SKIP(15)
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(41)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(41)
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
                SKIP(43)
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(43)
            if(lookahead == '\r')
                SKIP(21)
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(44)
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(44)
            if(lookahead == '\r')
                SKIP(23)
            END_STATE();
        case 25:
            if(lookahead == '\n')
                ADVANCE(798);
            if(lookahead == '\r')
                ADVANCE(797);
            if(lookahead == '\\')
                ADVANCE(801);
            if(lookahead != 0)
                ADVANCE(800);
            END_STATE();
        case 26:
            if(lookahead == '\n')
                SKIP(39)
            END_STATE();
        case 27:
            if(lookahead == '\n')
                SKIP(39)
            if(lookahead == '\r')
                SKIP(26)
            END_STATE();
        case 28:
            if(lookahead == ' ')
                ADVANCE(270);
            END_STATE();
        case 29:
            if(lookahead == '"')
                ADVANCE(581);
            END_STATE();
        case 30:
            if(lookahead == '$')
                ADVANCE(489);
            if(lookahead == '%')
                ADVANCE(498);
            if(lookahead == '(')
                ADVANCE(500);
            if(lookahead == ')')
                ADVANCE(502);
            if(lookahead == '*')
                ADVANCE(496);
            if(lookahead == '+')
                ADVANCE(492);
            if(lookahead == ',')
                ADVANCE(511);
            if(lookahead == '-')
                ADVANCE(494);
            if(lookahead == '/')
                ADVANCE(497);
            if(lookahead == ':')
                ADVANCE(486);
            if(lookahead == ';')
                ADVANCE(478);
            if(lookahead == '<')
                ADVANCE(55);
            if(lookahead == '>')
                ADVANCE(787);
            if(lookahead == '@')
                ADVANCE(144);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == ']')
                ADVANCE(781);
            if(lookahead == '^')
                ADVANCE(488);
            if(lookahead == '{')
                ADVANCE(480);
            if(lookahead == '|')
                ADVANCE(487);
            if(lookahead == '}')
                ADVANCE(481);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(30)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 31:
            if(lookahead == '$')
                ADVANCE(489);
            if(lookahead == ')')
                ADVANCE(502);
            if(lookahead == ',')
                ADVANCE(511);
            if(lookahead == '/')
                ADVANCE(36);
            if(lookahead == ':')
                ADVANCE(486);
            if(lookahead == ';')
                ADVANCE(478);
            if(lookahead == '<')
                ADVANCE(784);
            if(lookahead == '>')
                ADVANCE(786);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == ']')
                ADVANCE(781);
            if(lookahead == '^')
                ADVANCE(488);
            if(lookahead == '{')
                ADVANCE(480);
            if(lookahead == '|')
                ADVANCE(487);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(31)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 32:
            if(lookahead == '\'')
                ADVANCE(503);
            if(lookahead == '(')
                ADVANCE(500);
            if(lookahead == '+')
                ADVANCE(493);
            if(lookahead == '-')
                ADVANCE(495);
            if(lookahead == '.')
                ADVANCE(466);
            if(lookahead == '/')
                ADVANCE(36);
            if(lookahead == '0')
                ADVANCE(551);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == 'L')
                ADVANCE(506);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == '~')
                ADVANCE(499);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(32)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(555);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 33:
            if(lookahead == '(')
                ADVANCE(29);
            if(lookahead == ',')
                ADVANCE(511);
            if(lookahead == '/')
                ADVANCE(36);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '<')
                ADVANCE(784);
            if(lookahead == '>')
                ADVANCE(786);
            if(lookahead == '@')
                ADVANCE(195);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(781);
            if(lookahead == 'b')
                ADVANCE(738);
            if(lookahead == 'c')
                ADVANCE(703);
            if(lookahead == 'd')
                ADVANCE(733);
            if(lookahead == 'f')
                ADVANCE(665);
            if(lookahead == 'i')
                ADVANCE(727);
            if(lookahead == 'l')
                ADVANCE(735);
            if(lookahead == 'o')
                ADVANCE(677);
            if(lookahead == 's')
                ADVANCE(683);
            if(lookahead == 't')
                ADVANCE(745);
            if(lookahead == 'u')
                ADVANCE(713);
            if(lookahead == 'v')
                ADVANCE(734);
            if(lookahead == 'w')
                ADVANCE(678);
            if(lookahead == '}')
                ADVANCE(481);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(33)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 34:
            if(lookahead == ')')
                ADVANCE(502);
            if(lookahead == ',')
                ADVANCE(511);
            if(lookahead == '/')
                ADVANCE(36);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == 'i')
                ADVANCE(725);
            if(lookahead == 'o')
                ADVANCE(773);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(34)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 35:
            if(lookahead == '.')
                ADVANCE(466);
            if(lookahead == '0')
                ADVANCE(548);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(550);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(564);
            END_STATE();
        case 36:
            if(lookahead == '/')
                ADVANCE(794);
            END_STATE();
        case 37:
            if(lookahead == '/')
                ADVANCE(36);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '@')
                ADVANCE(145);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'b')
                ADVANCE(738);
            if(lookahead == 'c')
                ADVANCE(703);
            if(lookahead == 'd')
                ADVANCE(733);
            if(lookahead == 'e')
                ADVANCE(728);
            if(lookahead == 'f')
                ADVANCE(665);
            if(lookahead == 'i')
                ADVANCE(727);
            if(lookahead == 'l')
                ADVANCE(735);
            if(lookahead == 'o')
                ADVANCE(677);
            if(lookahead == 's')
                ADVANCE(684);
            if(lookahead == 't')
                ADVANCE(745);
            if(lookahead == 'u')
                ADVANCE(714);
            if(lookahead == 'v')
                ADVANCE(734);
            if(lookahead == 'w')
                ADVANCE(678);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(37)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 38:
            if(lookahead == '/')
                ADVANCE(36);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'b')
                ADVANCE(738);
            if(lookahead == 'c')
                ADVANCE(703);
            if(lookahead == 'd')
                ADVANCE(733);
            if(lookahead == 'f')
                ADVANCE(666);
            if(lookahead == 'i')
                ADVANCE(727);
            if(lookahead == 'l')
                ADVANCE(735);
            if(lookahead == 'o')
                ADVANCE(677);
            if(lookahead == 's')
                ADVANCE(685);
            if(lookahead == 't')
                ADVANCE(745);
            if(lookahead == 'u')
                ADVANCE(713);
            if(lookahead == 'v')
                ADVANCE(734);
            if(lookahead == 'w')
                ADVANCE(679);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(38)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 39:
            if(lookahead == '/')
                ADVANCE(36);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(27)
            if(lookahead == 'b')
                ADVANCE(738);
            if(lookahead == 'c')
                ADVANCE(703);
            if(lookahead == 'd')
                ADVANCE(733);
            if(lookahead == 'f')
                ADVANCE(666);
            if(lookahead == 'i')
                ADVANCE(727);
            if(lookahead == 'l')
                ADVANCE(735);
            if(lookahead == 'o')
                ADVANCE(677);
            if(lookahead == 's')
                ADVANCE(705);
            if(lookahead == 't')
                ADVANCE(745);
            if(lookahead == 'u')
                ADVANCE(713);
            if(lookahead == 'v')
                ADVANCE(734);
            if(lookahead == 'w')
                ADVANCE(679);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(39)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 40:
            if(lookahead == '/')
                ADVANCE(36);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == 'a')
                ADVANCE(766);
            if(lookahead == '}')
                ADVANCE(481);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(40)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 41:
            if(lookahead == '/')
                ADVANCE(36);
            if(lookahead == ':')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == '}')
                ADVANCE(481);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(41)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 42:
            if(lookahead == '/')
                ADVANCE(36);
            if(lookahead == ';')
                ADVANCE(478);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == 'd')
                ADVANCE(692);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(42)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 43:
            if(lookahead == '/')
                ADVANCE(36);
            if(lookahead == ';')
                ADVANCE(478);
            if(lookahead == '\\')
                SKIP(22)
            if(lookahead == 's')
                ADVANCE(776);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(43)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 44:
            if(lookahead == '/')
                ADVANCE(36);
            if(lookahead == '\\')
                SKIP(24)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(44)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(504);
            END_STATE();
        case 45:
            if(lookahead == '1')
                ADVANCE(52);
            if(lookahead == '3')
                ADVANCE(46);
            if(lookahead == '6')
                ADVANCE(49);
            if(lookahead == '8')
                ADVANCE(628);
            END_STATE();
        case 46:
            if(lookahead == '2')
                ADVANCE(632);
            END_STATE();
        case 47:
            if(lookahead == '2')
                ADVANCE(53);
            END_STATE();
        case 48:
            if(lookahead == '2')
                ADVANCE(636);
            END_STATE();
        case 49:
            if(lookahead == '4')
                ADVANCE(634);
            END_STATE();
        case 50:
            if(lookahead == '4')
                ADVANCE(638);
            END_STATE();
        case 51:
            if(lookahead == '6')
                ADVANCE(648);
            END_STATE();
        case 52:
            if(lookahead == '6')
                ADVANCE(630);
            END_STATE();
        case 53:
            if(lookahead == '8')
                ADVANCE(640);
            END_STATE();
        case 54:
            if(lookahead == ':')
                ADVANCE(650);
            END_STATE();
        case 55:
            if(lookahead == '<')
                ADVANCE(491);
            END_STATE();
        case 56:
            if(lookahead == 'C')
                ADVANCE(60);
            END_STATE();
        case 57:
            if(lookahead == 'D')
                ADVANCE(59);
            if(lookahead == 'a')
                ADVANCE(290);
            if(lookahead == 'b')
                ADVANCE(231);
            if(lookahead == 'd')
                ADVANCE(90);
            if(lookahead == 'e')
                ADVANCE(457);
            if(lookahead == 'f')
                ADVANCE(224);
            if(lookahead == 'h')
                ADVANCE(77);
            if(lookahead == 'i')
                ADVANCE(130);
            if(lookahead == 'k')
                ADVANCE(149);
            if(lookahead == 'm')
                ADVANCE(436);
            if(lookahead == 'n')
                ADVANCE(171);
            if(lookahead == 'o')
                ADVANCE(344);
            if(lookahead == 'p')
                ADVANCE(321);
            if(lookahead == 't')
                ADVANCE(355);
            if(lookahead == 'v')
                ADVANCE(78);
            END_STATE();
        case 58:
            if(lookahead == 'D')
                ADVANCE(59);
            if(lookahead == 'a')
                ADVANCE(289);
            if(lookahead == 'b')
                ADVANCE(231);
            if(lookahead == 'd')
                ADVANCE(89);
            if(lookahead == 'f')
                ADVANCE(224);
            if(lookahead == 'i')
                ADVANCE(209);
            END_STATE();
        case 59:
            if(lookahead == 'D')
                ADVANCE(63);
            END_STATE();
        case 60:
            if(lookahead == 'D')
                ADVANCE(61);
            END_STATE();
        case 61:
            if(lookahead == 'R')
                ADVANCE(596);
            END_STATE();
        case 62:
            if(lookahead == 'R')
                ADVANCE(156);
            if(lookahead == 'S')
                ADVANCE(180);
            END_STATE();
        case 63:
            if(lookahead == 'S')
                ADVANCE(62);
            END_STATE();
        case 64:
            if(lookahead == 'T')
                ADVANCE(320);
            END_STATE();
        case 65:
            if(lookahead == 'T')
                ADVANCE(338);
            END_STATE();
        case 66:
            if(lookahead == '_')
                ADVANCE(107);
            END_STATE();
        case 67:
            if(lookahead == '_')
                ADVANCE(122);
            END_STATE();
        case 68:
            if(lookahead == '_')
                ADVANCE(442);
            END_STATE();
        case 69:
            if(lookahead == '_')
                ADVANCE(269);
            END_STATE();
        case 70:
            if(lookahead == '_')
                ADVANCE(367);
            END_STATE();
        case 71:
            if(lookahead == '_')
                ADVANCE(387);
            END_STATE();
        case 72:
            if(lookahead == '_')
                ADVANCE(306);
            END_STATE();
        case 73:
            if(lookahead == '_')
                ADVANCE(273);
            END_STATE();
        case 74:
            if(lookahead == 'a')
                ADVANCE(378);
            if(lookahead == 'h')
                ADVANCE(83);
            if(lookahead == 'o')
                ADVANCE(311);
            END_STATE();
        case 75:
            if(lookahead == 'a')
                ADVANCE(267);
            if(lookahead == 'i')
                ADVANCE(456);
            if(lookahead == 'l')
                ADVANCE(323);
            END_STATE();
        case 76:
            if(lookahead == 'a')
                ADVANCE(276);
            END_STATE();
        case 77:
            if(lookahead == 'a')
                ADVANCE(377);
            END_STATE();
        case 78:
            if(lookahead == 'a')
                ADVANCE(268);
            if(lookahead == 'e')
                ADVANCE(356);
            END_STATE();
        case 79:
            if(lookahead == 'a')
                ADVANCE(243);
            END_STATE();
        case 80:
            if(lookahead == 'a')
                ADVANCE(251);
            END_STATE();
        case 81:
            if(lookahead == 'a')
                ADVANCE(278);
            END_STATE();
        case 82:
            if(lookahead == 'a')
                ADVANCE(70);
            END_STATE();
        case 83:
            if(lookahead == 'a')
                ADVANCE(353);
            END_STATE();
        case 84:
            if(lookahead == 'a')
                ADVANCE(374);
            END_STATE();
        case 85:
            if(lookahead == 'a')
                ADVANCE(252);
            END_STATE();
        case 86:
            if(lookahead == 'a')
                ADVANCE(440);
            END_STATE();
        case 87:
            if(lookahead == 'a')
                ADVANCE(354);
            END_STATE();
        case 88:
            if(lookahead == 'a')
                ADVANCE(253);
            END_STATE();
        case 89:
            if(lookahead == 'a')
                ADVANCE(414);
            END_STATE();
        case 90:
            if(lookahead == 'a')
                ADVANCE(414);
            if(lookahead == 'e')
                ADVANCE(202);
            END_STATE();
        case 91:
            if(lookahead == 'a')
                ADVANCE(254);
            END_STATE();
        case 92:
            if(lookahead == 'a')
                ADVANCE(259);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(257);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(281);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(255);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(397);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(417);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(302);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(410);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(449);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(127);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(431);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(432);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(111);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(112);
            END_STATE();
        case 106:
            if(lookahead == 'b')
                ADVANCE(451);
            END_STATE();
        case 107:
            if(lookahead == 'b')
                ADVANCE(340);
            END_STATE();
        case 108:
            if(lookahead == 'b')
                ADVANCE(249);
            END_STATE();
        case 109:
            if(lookahead == 'b')
                ADVANCE(260);
            END_STATE();
        case 110:
            if(lookahead == 'b')
                ADVANCE(97);
            END_STATE();
        case 111:
            if(lookahead == 'b')
                ADVANCE(264);
            END_STATE();
        case 112:
            if(lookahead == 'b')
                ADVANCE(265);
            END_STATE();
        case 113:
            if(lookahead == 'b')
                ADVANCE(266);
            END_STATE();
        case 114:
            if(lookahead == 'c')
                ADVANCE(213);
            if(lookahead == 's')
                ADVANCE(413);
            END_STATE();
        case 115:
            if(lookahead == 'c')
                ADVANCE(533);
            END_STATE();
        case 116:
            if(lookahead == 'c')
                ADVANCE(530);
            END_STATE();
        case 117:
            if(lookahead == 'c')
                ADVANCE(211);
            END_STATE();
        case 118:
            if(lookahead == 'c')
                ADVANCE(415);
            if(lookahead == 'u')
                ADVANCE(393);
            END_STATE();
        case 119:
            if(lookahead == 'c')
                ADVANCE(196);
            END_STATE();
        case 120:
            if(lookahead == 'c')
                ADVANCE(80);
            END_STATE();
        case 121:
            if(lookahead == 'c')
                ADVANCE(80);
            if(lookahead == 'n')
                ADVANCE(203);
            END_STATE();
        case 122:
            if(lookahead == 'c')
                ADVANCE(337);
            END_STATE();
        case 123:
            if(lookahead == 'c')
                ADVANCE(401);
            END_STATE();
        case 124:
            if(lookahead == 'c')
                ADVANCE(403);
            END_STATE();
        case 125:
            if(lookahead == 'c')
                ADVANCE(163);
            END_STATE();
        case 126:
            if(lookahead == 'c')
                ADVANCE(165);
            END_STATE();
        case 127:
            if(lookahead == 'c')
                ADVANCE(168);
            END_STATE();
        case 128:
            if(lookahead == 'd')
                ADVANCE(169);
            END_STATE();
        case 129:
            if(lookahead == 'd')
                ADVANCE(578);
            END_STATE();
        case 130:
            if(lookahead == 'd')
                ADVANCE(578);
            if(lookahead == 'g')
                ADVANCE(301);
            END_STATE();
        case 131:
            if(lookahead == 'd')
                ADVANCE(602);
            END_STATE();
        case 132:
            if(lookahead == 'd')
                ADVANCE(792);
            END_STATE();
        case 133:
            if(lookahead == 'd')
                ADVANCE(593);
            END_STATE();
        case 134:
            if(lookahead == 'd')
                ADVANCE(580);
            END_STATE();
        case 135:
            if(lookahead == 'd')
                ADVANCE(590);
            END_STATE();
        case 136:
            if(lookahead == 'd')
                ADVANCE(28);
            END_STATE();
        case 137:
            if(lookahead == 'd')
                ADVANCE(584);
            END_STATE();
        case 138:
            if(lookahead == 'd')
                ADVANCE(577);
            END_STATE();
        case 139:
            if(lookahead == 'd')
                ADVANCE(576);
            END_STATE();
        case 140:
            if(lookahead == 'd')
                ADVANCE(450);
            END_STATE();
        case 141:
            if(lookahead == 'd')
                ADVANCE(342);
            if(lookahead == 'l')
                ADVANCE(329);
            END_STATE();
        case 142:
            if(lookahead == 'd')
                ADVANCE(183);
            END_STATE();
        case 143:
            if(lookahead == 'd')
                ADVANCE(172);
            END_STATE();
        case 144:
            if(lookahead == 'd')
                ADVANCE(197);
            if(lookahead == 'p')
                ADVANCE(321);
            END_STATE();
        case 145:
            if(lookahead == 'd')
                ADVANCE(89);
            if(lookahead == 'f')
                ADVANCE(224);
            if(lookahead == 'i')
                ADVANCE(209);
            END_STATE();
        case 146:
            if(lookahead == 'd')
                ADVANCE(105);
            END_STATE();
        case 147:
            if(lookahead == 'e')
                ADVANCE(199);
            if(lookahead == 'o')
                ADVANCE(437);
            END_STATE();
        case 148:
            if(lookahead == 'e')
                ADVANCE(351);
            if(lookahead == 'h')
                ADVANCE(324);
            if(lookahead == 't')
                ADVANCE(352);
            if(lookahead == 'w')
                ADVANCE(235);
            END_STATE();
        case 149:
            if(lookahead == 'e')
                ADVANCE(459);
            END_STATE();
        case 150:
            if(lookahead == 'e')
                ADVANCE(642);
            END_STATE();
        case 151:
            if(lookahead == 'e')
                ADVANCE(519);
            END_STATE();
        case 152:
            if(lookahead == 'e')
                ADVANCE(531);
            END_STATE();
        case 153:
            if(lookahead == 'e')
                ADVANCE(598);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(295);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(600);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(343);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(591);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(606);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(483);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(482);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(522);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(587);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(782);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(534);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(529);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(588);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(612);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(527);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(201);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(349);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(391);
            if(lookahead == 'o')
                ADVANCE(286);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(198);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(132);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(375);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(69);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(135);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(136);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(376);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(292);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(357);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(138);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(310);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(373);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(94);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(362);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(369);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(370);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(399);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(314);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(361);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(363);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(385);
            END_STATE();
        case 193:
            if(lookahead == 'e')
                ADVANCE(388);
            END_STATE();
        case 194:
            if(lookahead == 'e')
                ADVANCE(143);
            END_STATE();
        case 195:
            if(lookahead == 'e')
                ADVANCE(458);
            if(lookahead == 'h')
                ADVANCE(77);
            if(lookahead == 'i')
                ADVANCE(129);
            if(lookahead == 'k')
                ADVANCE(149);
            if(lookahead == 'm')
                ADVANCE(452);
            if(lookahead == 'n')
                ADVANCE(322);
            if(lookahead == 'o')
                ADVANCE(344);
            if(lookahead == 't')
                ADVANCE(355);
            END_STATE();
        case 196:
            if(lookahead == 'e')
                ADVANCE(350);
            END_STATE();
        case 197:
            if(lookahead == 'e')
                ADVANCE(202);
            END_STATE();
        case 198:
            if(lookahead == 'f')
                ADVANCE(521);
            END_STATE();
        case 199:
            if(lookahead == 'f')
                ADVANCE(86);
            END_STATE();
        case 200:
            if(lookahead == 'f')
                ADVANCE(101);
            END_STATE();
        case 201:
            if(lookahead == 'f')
                ADVANCE(234);
            END_STATE();
        case 202:
            if(lookahead == 'f')
                ADVANCE(100);
            END_STATE();
        case 203:
            if(lookahead == 'g')
                ADVANCE(610);
            END_STATE();
        case 204:
            if(lookahead == 'g')
                ADVANCE(788);
            END_STATE();
        case 205:
            if(lookahead == 'g')
                ADVANCE(790);
            END_STATE();
        case 206:
            if(lookahead == 'g')
                ADVANCE(618);
            END_STATE();
        case 207:
            if(lookahead == 'g')
                ADVANCE(621);
            END_STATE();
        case 208:
            if(lookahead == 'g')
                ADVANCE(622);
            END_STATE();
        case 209:
            if(lookahead == 'g')
                ADVANCE(301);
            END_STATE();
        case 210:
            if(lookahead == 'g')
                ADVANCE(308);
            END_STATE();
        case 211:
            if(lookahead == 'h')
                ADVANCE(517);
            END_STATE();
        case 212:
            if(lookahead == 'h')
                ADVANCE(229);
            END_STATE();
        case 213:
            if(lookahead == 'h')
                ADVANCE(87);
            END_STATE();
        case 214:
            if(lookahead == 'h')
                ADVANCE(339);
            END_STATE();
        case 215:
            if(lookahead == 'i')
                ADVANCE(455);
            END_STATE();
        case 216:
            if(lookahead == 'i')
                ADVANCE(464);
            END_STATE();
        case 217:
            if(lookahead == 'i')
                ADVANCE(210);
            END_STATE();
        case 218:
            if(lookahead == 'i')
                ADVANCE(131);
            END_STATE();
        case 219:
            if(lookahead == 'i')
                ADVANCE(392);
            END_STATE();
        case 220:
            if(lookahead == 'i')
                ADVANCE(392);
            if(lookahead == 'o')
                ADVANCE(318);
            if(lookahead == 'y')
                ADVANCE(406);
            END_STATE();
        case 221:
            if(lookahead == 'i')
                ADVANCE(303);
            if(lookahead == 'n')
                ADVANCE(233);
            END_STATE();
        case 222:
            if(lookahead == 'i')
                ADVANCE(275);
            END_STATE();
        case 223:
            if(lookahead == 'i')
                ADVANCE(106);
            END_STATE();
        case 224:
            if(lookahead == 'i')
                ADVANCE(299);
            END_STATE();
        case 225:
            if(lookahead == 'i')
                ADVANCE(115);
            END_STATE();
        case 226:
            if(lookahead == 'i')
                ADVANCE(108);
            END_STATE();
        case 227:
            if(lookahead == 'i')
                ADVANCE(133);
            END_STATE();
        case 228:
            if(lookahead == 'i')
                ADVANCE(116);
            END_STATE();
        case 229:
            if(lookahead == 'i')
                ADVANCE(134);
            END_STATE();
        case 230:
            if(lookahead == 'i')
                ADVANCE(288);
            if(lookahead == 'u')
                ADVANCE(123);
            END_STATE();
        case 231:
            if(lookahead == 'i')
                ADVANCE(394);
            END_STATE();
        case 232:
            if(lookahead == 'i')
                ADVANCE(326);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(326);
            if(lookahead == 's')
                ADVANCE(217);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(307);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(407);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(341);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(291);
            END_STATE();
        case 238:
            if(lookahead == 'i')
                ADVANCE(92);
            END_STATE();
        case 239:
            if(lookahead == 'i')
                ADVANCE(330);
            END_STATE();
        case 240:
            if(lookahead == 'i')
                ADVANCE(409);
            END_STATE();
        case 241:
            if(lookahead == 'i')
                ADVANCE(425);
            END_STATE();
        case 242:
            if(lookahead == 'i')
                ADVANCE(331);
            END_STATE();
        case 243:
            if(lookahead == 'i')
                ADVANCE(384);
            END_STATE();
        case 244:
            if(lookahead == 'i')
                ADVANCE(126);
            END_STATE();
        case 245:
            if(lookahead == 'i')
                ADVANCE(333);
            END_STATE();
        case 246:
            if(lookahead == 'i')
                ADVANCE(421);
            END_STATE();
        case 247:
            if(lookahead == 'i')
                ADVANCE(428);
            END_STATE();
        case 248:
            if(lookahead == 'i')
                ADVANCE(336);
            END_STATE();
        case 249:
            if(lookahead == 'i')
                ADVANCE(271);
            END_STATE();
        case 250:
            if(lookahead == 'k')
                ADVANCE(520);
            END_STATE();
        case 251:
            if(lookahead == 'l')
                ADVANCE(528);
            END_STATE();
        case 252:
            if(lookahead == 'l')
                ADVANCE(589);
            END_STATE();
        case 253:
            if(lookahead == 'l')
                ADVANCE(579);
            END_STATE();
        case 254:
            if(lookahead == 'l')
                ADVANCE(574);
            END_STATE();
        case 255:
            if(lookahead == 'l')
                ADVANCE(512);
            END_STATE();
        case 256:
            if(lookahead == 'l')
                ADVANCE(460);
            END_STATE();
        case 257:
            if(lookahead == 'l')
                ADVANCE(72);
            END_STATE();
        case 258:
            if(lookahead == 'l')
                ADVANCE(184);
            END_STATE();
        case 259:
            if(lookahead == 'l')
                ADVANCE(216);
            END_STATE();
        case 260:
            if(lookahead == 'l')
                ADVANCE(158);
            END_STATE();
        case 261:
            if(lookahead == 'l')
                ADVANCE(402);
            END_STATE();
        case 262:
            if(lookahead == 'l')
                ADVANCE(159);
            END_STATE();
        case 263:
            if(lookahead == 'l')
                ADVANCE(435);
            END_STATE();
        case 264:
            if(lookahead == 'l')
                ADVANCE(162);
            END_STATE();
        case 265:
            if(lookahead == 'l')
                ADVANCE(166);
            END_STATE();
        case 266:
            if(lookahead == 'l')
                ADVANCE(167);
            END_STATE();
        case 267:
            if(lookahead == 'l')
                ADVANCE(383);
            END_STATE();
        case 268:
            if(lookahead == 'l')
                ADVANCE(446);
            END_STATE();
        case 269:
            if(lookahead == 'l')
                ADVANCE(246);
            END_STATE();
        case 270:
            if(lookahead == 'l')
                ADVANCE(334);
            if(lookahead == 's')
                ADVANCE(214);
            END_STATE();
        case 271:
            if(lookahead == 'l')
                ADVANCE(240);
            END_STATE();
        case 272:
            if(lookahead == 'l')
                ADVANCE(335);
            END_STATE();
        case 273:
            if(lookahead == 'l')
                ADVANCE(247);
            END_STATE();
        case 274:
            if(lookahead == 'm')
                ADVANCE(509);
            END_STATE();
        case 275:
            if(lookahead == 'm')
                ADVANCE(594);
            END_STATE();
        case 276:
            if(lookahead == 'm')
                ADVANCE(152);
            if(lookahead == 't')
                ADVANCE(215);
            END_STATE();
        case 277:
            if(lookahead == 'm')
                ADVANCE(84);
            END_STATE();
        case 278:
            if(lookahead == 'm')
                ADVANCE(178);
            END_STATE();
        case 279:
            if(lookahead == 'n')
                ADVANCE(537);
            END_STATE();
        case 280:
            if(lookahead == 'n')
                ADVANCE(515);
            END_STATE();
        case 281:
            if(lookahead == 'n')
                ADVANCE(644);
            END_STATE();
        case 282:
            if(lookahead == 'n')
                ADVANCE(592);
            END_STATE();
        case 283:
            if(lookahead == 'n')
                ADVANCE(479);
            END_STATE();
        case 284:
            if(lookahead == 'n')
                ADVANCE(514);
            END_STATE();
        case 285:
            if(lookahead == 'n')
                ADVANCE(595);
            END_STATE();
        case 286:
            if(lookahead == 'n')
                ADVANCE(71);
            END_STATE();
        case 287:
            if(lookahead == 'n')
                ADVANCE(439);
            if(lookahead == 'x')
                ADVANCE(119);
            END_STATE();
        case 288:
            if(lookahead == 'n')
                ADVANCE(204);
            END_STATE();
        case 289:
            if(lookahead == 'n')
                ADVANCE(298);
            END_STATE();
        case 290:
            if(lookahead == 'n')
                ADVANCE(298);
            if(lookahead == 'p')
                ADVANCE(346);
            if(lookahead == 'u')
                ADVANCE(424);
            END_STATE();
        case 291:
            if(lookahead == 'n')
                ADVANCE(205);
            END_STATE();
        case 292:
            if(lookahead == 'n')
                ADVANCE(146);
            END_STATE();
        case 293:
            if(lookahead == 'n')
                ADVANCE(206);
            END_STATE();
        case 294:
            if(lookahead == 'n')
                ADVANCE(207);
            END_STATE();
        case 295:
            if(lookahead == 'n')
                ADVANCE(379);
            if(lookahead == 'r')
                ADVANCE(304);
            END_STATE();
        case 296:
            if(lookahead == 'n')
                ADVANCE(208);
            END_STATE();
        case 297:
            if(lookahead == 'n')
                ADVANCE(390);
            END_STATE();
        case 298:
            if(lookahead == 'n')
                ADVANCE(332);
            END_STATE();
        case 299:
            if(lookahead == 'n')
                ADVANCE(85);
            END_STATE();
        case 300:
            if(lookahead == 'n')
                ADVANCE(137);
            END_STATE();
        case 301:
            if(lookahead == 'n')
                ADVANCE(328);
            END_STATE();
        case 302:
            if(lookahead == 'n')
                ADVANCE(139);
            END_STATE();
        case 303:
            if(lookahead == 'n')
                ADVANCE(395);
            END_STATE();
        case 304:
            if(lookahead == 'n')
                ADVANCE(88);
            END_STATE();
        case 305:
            if(lookahead == 'n')
                ADVANCE(91);
            END_STATE();
        case 306:
            if(lookahead == 'n')
                ADVANCE(81);
            END_STATE();
        case 307:
            if(lookahead == 'n')
                ADVANCE(161);
            END_STATE();
        case 308:
            if(lookahead == 'n')
                ADVANCE(177);
            END_STATE();
        case 309:
            if(lookahead == 'n')
                ADVANCE(142);
            END_STATE();
        case 310:
            if(lookahead == 'n')
                ADVANCE(125);
            END_STATE();
        case 311:
            if(lookahead == 'n')
                ADVANCE(382);
            END_STATE();
        case 312:
            if(lookahead == 'n')
                ADVANCE(232);
            END_STATE();
        case 313:
            if(lookahead == 'n')
                ADVANCE(422);
            END_STATE();
        case 314:
            if(lookahead == 'n')
                ADVANCE(434);
            END_STATE();
        case 315:
            if(lookahead == 'o')
                ADVANCE(121);
            END_STATE();
        case 316:
            if(lookahead == 'o')
                ADVANCE(140);
            END_STATE();
        case 317:
            if(lookahead == 'o')
                ADVANCE(311);
            END_STATE();
        case 318:
            if(lookahead == 'o')
                ADVANCE(258);
            END_STATE();
        case 319:
            if(lookahead == 'o')
                ADVANCE(218);
            END_STATE();
        case 320:
            if(lookahead == 'o')
                ADVANCE(347);
            END_STATE();
        case 321:
            if(lookahead == 'o')
                ADVANCE(389);
            END_STATE();
        case 322:
            if(lookahead == 'o')
                ADVANCE(286);
            END_STATE();
        case 323:
            if(lookahead == 'o')
                ADVANCE(96);
            END_STATE();
        case 324:
            if(lookahead == 'o')
                ADVANCE(364);
            END_STATE();
        case 325:
            if(lookahead == 'o')
                ADVANCE(120);
            END_STATE();
        case 326:
            if(lookahead == 'o')
                ADVANCE(280);
            END_STATE();
        case 327:
            if(lookahead == 'o')
                ADVANCE(227);
            END_STATE();
        case 328:
            if(lookahead == 'o')
                ADVANCE(365);
            END_STATE();
        case 329:
            if(lookahead == 'o')
                ADVANCE(293);
            END_STATE();
        case 330:
            if(lookahead == 'o')
                ADVANCE(282);
            END_STATE();
        case 331:
            if(lookahead == 'o')
                ADVANCE(283);
            END_STATE();
        case 332:
            if(lookahead == 'o')
                ADVANCE(429);
            END_STATE();
        case 333:
            if(lookahead == 'o')
                ADVANCE(284);
            END_STATE();
        case 334:
            if(lookahead == 'o')
                ADVANCE(294);
            END_STATE();
        case 335:
            if(lookahead == 'o')
                ADVANCE(296);
            END_STATE();
        case 336:
            if(lookahead == 'o')
                ADVANCE(285);
            END_STATE();
        case 337:
            if(lookahead == 'o')
                ADVANCE(297);
            END_STATE();
        case 338:
            if(lookahead == 'o')
                ADVANCE(348);
            END_STATE();
        case 339:
            if(lookahead == 'o')
                ADVANCE(366);
            END_STATE();
        case 340:
            if(lookahead == 'o')
                ADVANCE(444);
            END_STATE();
        case 341:
            if(lookahead == 'o')
                ADVANCE(305);
            END_STATE();
        case 342:
            if(lookahead == 'o')
                ADVANCE(453);
            END_STATE();
        case 343:
            if(lookahead == 'p')
                ADVANCE(256);
            if(lookahead == 'q')
                ADVANCE(447);
            END_STATE();
        case 344:
            if(lookahead == 'p')
                ADVANCE(412);
            END_STATE();
        case 345:
            if(lookahead == 'p')
                ADVANCE(194);
            END_STATE();
        case 346:
            if(lookahead == 'p')
                ADVANCE(179);
            END_STATE();
        case 347:
            if(lookahead == 'p')
                ADVANCE(225);
            END_STATE();
        case 348:
            if(lookahead == 'p')
                ADVANCE(228);
            END_STATE();
        case 349:
            if(lookahead == 'p')
                ADVANCE(368);
            END_STATE();
        case 350:
            if(lookahead == 'p')
                ADVANCE(430);
            END_STATE();
        case 351:
            if(lookahead == 'q')
                ADVANCE(445);
            END_STATE();
        case 352:
            if(lookahead == 'r')
                ADVANCE(230);
            END_STATE();
        case 353:
            if(lookahead == 'r')
                ADVANCE(614);
            END_STATE();
        case 354:
            if(lookahead == 'r')
                ADVANCE(616);
            END_STATE();
        case 355:
            if(lookahead == 'r')
                ADVANCE(463);
            END_STATE();
        case 356:
            if(lookahead == 'r')
                ADVANCE(110);
            END_STATE();
        case 357:
            if(lookahead == 'r')
                ADVANCE(454);
            END_STATE();
        case 358:
            if(lookahead == 'r')
                ADVANCE(441);
            if(lookahead == 'y')
                ADVANCE(345);
            END_STATE();
        case 359:
            if(lookahead == 'r')
                ADVANCE(223);
            END_STATE();
        case 360:
            if(lookahead == 'r')
                ADVANCE(448);
            END_STATE();
        case 361:
            if(lookahead == 'r')
                ADVANCE(238);
            END_STATE();
        case 362:
            if(lookahead == 'r')
                ADVANCE(93);
            END_STATE();
        case 363:
            if(lookahead == 'r')
                ADVANCE(95);
            END_STATE();
        case 364:
            if(lookahead == 'r')
                ADVANCE(400);
            END_STATE();
        case 365:
            if(lookahead == 'r')
                ADVANCE(175);
            END_STATE();
        case 366:
            if(lookahead == 'r')
                ADVANCE(404);
            END_STATE();
        case 367:
            if(lookahead == 'r')
                ADVANCE(170);
            END_STATE();
        case 368:
            if(lookahead == 'r')
                ADVANCE(193);
            END_STATE();
        case 369:
            if(lookahead == 'r')
                ADVANCE(200);
            END_STATE();
        case 370:
            if(lookahead == 'r')
                ADVANCE(304);
            END_STATE();
        case 371:
            if(lookahead == 'r')
                ADVANCE(438);
            END_STATE();
        case 372:
            if(lookahead == 'r')
                ADVANCE(237);
            END_STATE();
        case 373:
            if(lookahead == 'r')
                ADVANCE(386);
            END_STATE();
        case 374:
            if(lookahead == 's')
                ADVANCE(250);
            END_STATE();
        case 375:
            if(lookahead == 's')
                ADVANCE(536);
            END_STATE();
        case 376:
            if(lookahead == 's')
                ADVANCE(513);
            END_STATE();
        case 377:
            if(lookahead == 's')
                ADVANCE(212);
            END_STATE();
        case 378:
            if(lookahead == 's')
                ADVANCE(151);
            END_STATE();
        case 379:
            if(lookahead == 's')
                ADVANCE(226);
            END_STATE();
        case 380:
            if(lookahead == 's')
                ADVANCE(411);
            END_STATE();
        case 381:
            if(lookahead == 's')
                ADVANCE(411);
            if(lookahead == 't')
                ADVANCE(104);
            END_STATE();
        case 382:
            if(lookahead == 's')
                ADVANCE(396);
            END_STATE();
        case 383:
            if(lookahead == 's')
                ADVANCE(155);
            END_STATE();
        case 384:
            if(lookahead == 's')
                ADVANCE(174);
            END_STATE();
        case 385:
            if(lookahead == 's')
                ADVANCE(433);
            END_STATE();
        case 386:
            if(lookahead == 's')
                ADVANCE(426);
            END_STATE();
        case 387:
            if(lookahead == 's')
                ADVANCE(190);
            END_STATE();
        case 388:
            if(lookahead == 's')
                ADVANCE(189);
            END_STATE();
        case 389:
            if(lookahead == 's')
                ADVANCE(241);
            END_STATE();
        case 390:
            if(lookahead == 's')
                ADVANCE(418);
            END_STATE();
        case 391:
            if(lookahead == 's')
                ADVANCE(419);
            END_STATE();
        case 392:
            if(lookahead == 't')
                ADVANCE(277);
            END_STATE();
        case 393:
            if(lookahead == 't')
                ADVANCE(539);
            END_STATE();
        case 394:
            if(lookahead == 't')
                ADVANCE(66);
            END_STATE();
        case 395:
            if(lookahead == 't')
                ADVANCE(45);
            END_STATE();
        case 396:
            if(lookahead == 't')
                ADVANCE(543);
            END_STATE();
        case 397:
            if(lookahead == 't')
                ADVANCE(604);
            END_STATE();
        case 398:
            if(lookahead == 't')
                ADVANCE(541);
            END_STATE();
        case 399:
            if(lookahead == 't')
                ADVANCE(619);
            END_STATE();
        case 400:
            if(lookahead == 't')
                ADVANCE(608);
            END_STATE();
        case 401:
            if(lookahead == 't')
                ADVANCE(484);
            END_STATE();
        case 402:
            if(lookahead == 't')
                ADVANCE(507);
            END_STATE();
        case 403:
            if(lookahead == 't')
                ADVANCE(583);
            END_STATE();
        case 404:
            if(lookahead == 't')
                ADVANCE(613);
            END_STATE();
        case 405:
            if(lookahead == 't')
                ADVANCE(408);
            END_STATE();
        case 406:
            if(lookahead == 't')
                ADVANCE(150);
            END_STATE();
        case 407:
            if(lookahead == 't')
                ADVANCE(117);
            END_STATE();
        case 408:
            if(lookahead == 't')
                ADVANCE(359);
            END_STATE();
        case 409:
            if(lookahead == 't')
                ADVANCE(461);
            END_STATE();
        case 410:
            if(lookahead == 't')
                ADVANCE(215);
            END_STATE();
        case 411:
            if(lookahead == 't')
                ADVANCE(68);
            END_STATE();
        case 412:
            if(lookahead == 't')
                ADVANCE(236);
            END_STATE();
        case 413:
            if(lookahead == 't')
                ADVANCE(372);
            END_STATE();
        case 414:
            if(lookahead == 't')
                ADVANCE(82);
            END_STATE();
        case 415:
            if(lookahead == 't')
                ADVANCE(188);
            END_STATE();
        case 416:
            if(lookahead == 't')
                ADVANCE(154);
            END_STATE();
        case 417:
            if(lookahead == 't')
                ADVANCE(222);
            END_STATE();
        case 418:
            if(lookahead == 't')
                ADVANCE(360);
            END_STATE();
        case 419:
            if(lookahead == 't')
                ADVANCE(176);
            END_STATE();
        case 420:
            if(lookahead == 't')
                ADVANCE(164);
            END_STATE();
        case 421:
            if(lookahead == 't')
                ADVANCE(185);
            END_STATE();
        case 422:
            if(lookahead == 't')
                ADVANCE(186);
            END_STATE();
        case 423:
            if(lookahead == 't')
                ADVANCE(187);
            END_STATE();
        case 424:
            if(lookahead == 't')
                ADVANCE(327);
            END_STATE();
        case 425:
            if(lookahead == 't')
                ADVANCE(239);
            END_STATE();
        case 426:
            if(lookahead == 't')
                ADVANCE(98);
            END_STATE();
        case 427:
            if(lookahead == 't')
                ADVANCE(371);
            END_STATE();
        case 428:
            if(lookahead == 't')
                ADVANCE(191);
            END_STATE();
        case 429:
            if(lookahead == 't')
                ADVANCE(102);
            END_STATE();
        case 430:
            if(lookahead == 't')
                ADVANCE(242);
            END_STATE();
        case 431:
            if(lookahead == 't')
                ADVANCE(245);
            END_STATE();
        case 432:
            if(lookahead == 't')
                ADVANCE(248);
            END_STATE();
        case 433:
            if(lookahead == 't')
                ADVANCE(65);
            END_STATE();
        case 434:
            if(lookahead == 't')
                ADVANCE(103);
            END_STATE();
        case 435:
            if(lookahead == 't')
                ADVANCE(73);
            END_STATE();
        case 436:
            if(lookahead == 'u')
                ADVANCE(381);
            END_STATE();
        case 437:
            if(lookahead == 'u')
                ADVANCE(109);
            END_STATE();
        case 438:
            if(lookahead == 'u')
                ADVANCE(123);
            END_STATE();
        case 439:
            if(lookahead == 'u')
                ADVANCE(274);
            END_STATE();
        case 440:
            if(lookahead == 'u')
                ADVANCE(261);
            END_STATE();
        case 441:
            if(lookahead == 'u')
                ADVANCE(153);
            END_STATE();
        case 442:
            if(lookahead == 'u')
                ADVANCE(309);
            END_STATE();
        case 443:
            if(lookahead == 'u')
                ADVANCE(398);
            END_STATE();
        case 444:
            if(lookahead == 'u')
                ADVANCE(300);
            END_STATE();
        case 445:
            if(lookahead == 'u')
                ADVANCE(182);
            END_STATE();
        case 446:
            if(lookahead == 'u')
                ADVANCE(157);
            END_STATE();
        case 447:
            if(lookahead == 'u')
                ADVANCE(192);
            END_STATE();
        case 448:
            if(lookahead == 'u')
                ADVANCE(124);
            END_STATE();
        case 449:
            if(lookahead == 'u')
                ADVANCE(263);
            END_STATE();
        case 450:
            if(lookahead == 'u')
                ADVANCE(262);
            END_STATE();
        case 451:
            if(lookahead == 'u')
                ADVANCE(420);
            END_STATE();
        case 452:
            if(lookahead == 'u')
                ADVANCE(380);
            END_STATE();
        case 453:
            if(lookahead == 'u')
                ADVANCE(113);
            END_STATE();
        case 454:
            if(lookahead == 'v')
                ADVANCE(244);
            END_STATE();
        case 455:
            if(lookahead == 'v')
                ADVANCE(160);
            END_STATE();
        case 456:
            if(lookahead == 'x')
                ADVANCE(173);
            END_STATE();
        case 457:
            if(lookahead == 'x')
                ADVANCE(416);
            END_STATE();
        case 458:
            if(lookahead == 'x')
                ADVANCE(423);
            END_STATE();
        case 459:
            if(lookahead == 'y')
                ADVANCE(575);
            END_STATE();
        case 460:
            if(lookahead == 'y')
                ADVANCE(64);
            END_STATE();
        case 461:
            if(lookahead == 'y')
                ADVANCE(586);
            END_STATE();
        case 462:
            if(lookahead == 'y')
                ADVANCE(345);
            END_STATE();
        case 463:
            if(lookahead == 'y')
                ADVANCE(67);
            END_STATE();
        case 464:
            if(lookahead == 'z')
                ADVANCE(181);
            END_STATE();
        case 465:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(556);
            END_STATE();
        case 466:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            END_STATE();
        case 467:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(550);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(564);
            END_STATE();
        case 468:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(558);
            END_STATE();
        case 469:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(564);
            END_STATE();
        case 470:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(546);
            END_STATE();
        case 471:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(800);
            if(lookahead == '\r')
                ADVANCE(802);
            if(lookahead == '\\')
                ADVANCE(801);
            END_STATE();
        case 472:
            if(eof)
                ADVANCE(477);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 473:
            if(eof)
                ADVANCE(477);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(472)
            END_STATE();
        case 474:
            if(eof)
                ADVANCE(477);
            if(lookahead == '\n')
                SKIP(476)
            END_STATE();
        case 475:
            if(eof)
                ADVANCE(477);
            if(lookahead == '\n')
                SKIP(476)
            if(lookahead == '\r')
                SKIP(474)
            END_STATE();
        case 476:
            if(eof)
                ADVANCE(477);
            if(lookahead == '#')
                ADVANCE(128);
            if(lookahead == '$')
                ADVANCE(489);
            if(lookahead == '%')
                ADVANCE(498);
            if(lookahead == '(')
                ADVANCE(500);
            if(lookahead == ')')
                ADVANCE(502);
            if(lookahead == '*')
                ADVANCE(496);
            if(lookahead == '+')
                ADVANCE(492);
            if(lookahead == ',')
                ADVANCE(511);
            if(lookahead == '-')
                ADVANCE(494);
            if(lookahead == '/')
                ADVANCE(497);
            if(lookahead == ':')
                ADVANCE(486);
            if(lookahead == ';')
                ADVANCE(478);
            if(lookahead == '<')
                ADVANCE(55);
            if(lookahead == '>')
                ADVANCE(787);
            if(lookahead == '@')
                ADVANCE(58);
            if(lookahead == '\\')
                SKIP(475)
            if(lookahead == ']')
                ADVANCE(781);
            if(lookahead == '^')
                ADVANCE(488);
            if(lookahead == 'b')
                ADVANCE(219);
            if(lookahead == 'c')
                ADVANCE(317);
            if(lookahead == 'e')
                ADVANCE(287);
            if(lookahead == 'i')
                ADVANCE(313);
            if(lookahead == 'l')
                ADVANCE(325);
            if(lookahead == 'm')
                ADVANCE(316);
            if(lookahead == 'n')
                ADVANCE(99);
            if(lookahead == 's')
                ADVANCE(427);
            if(lookahead == 't')
                ADVANCE(462);
            if(lookahead == 'u')
                ADVANCE(312);
            if(lookahead == '|')
                ADVANCE(487);
            if(lookahead == '}')
                ADVANCE(481);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(476)
            END_STATE();
        case 477:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(466);
            if(lookahead == '0')
                ADVANCE(552);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(556);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(466);
            if(lookahead == '0')
                ADVANCE(552);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(556);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(794);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            if(lookahead == '"')
                ADVANCE(581);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(504);
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
                ADVANCE(779);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(526);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(526);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(525);
            if(lookahead == '\\')
                ADVANCE(523);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(524);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(526);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(796);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(526);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(526);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(443);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(774);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_out);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_inout);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(466);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(568);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(544);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(573);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(470);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(545);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(572);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(545);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(470);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(546);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(546);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(467);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(561);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(559);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(567);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(778);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(562);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(562);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(572);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(549);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(467);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(563);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(560);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(568);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(469);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(564);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(564);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(550);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(467);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(559);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(567);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(562);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(562);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(572);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(549);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(467);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(560);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(568);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(564);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(564);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(550);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(465);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(565);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(652);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(567);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(572);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(555);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(465);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(566);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(35);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(568);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(556);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(465);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(570);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(778);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(567);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(572);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(555);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(465);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(571);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(469);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(568);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(556);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(465);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(567);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(555);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(572);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(465);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(568);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(556);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(573);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(468);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(470);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(557);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(568);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(558);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(558);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(468);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(557);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(568);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(558);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(558);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(469);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(470);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(559);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(567);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(562);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(572);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(562);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(469);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(470);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(560);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(568);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(564);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(564);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(469);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(559);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(567);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(562);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(562);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(572);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(549);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(469);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(559);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(567);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(562);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(572);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(562);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(469);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(560);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(568);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(564);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(564);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(550);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(469);
            if(lookahead == '.')
                ADVANCE(569);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(560);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(568);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(564);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(564);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(466);
            if(lookahead == '0')
                ADVANCE(553);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(555);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(572);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(466);
            if(lookahead == '0')
                ADVANCE(554);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(556);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(573);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(470);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(545);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(572);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(545);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(470);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(546);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(546);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(557);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(568);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(558);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(558);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(555);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(572);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(556);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(573);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(572);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(573);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_ATbit_bound);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(aux_sym_bit_bound_token1);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(585);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(sym_extensibility);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(sym_mutable);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(sym_appendable);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(sym_nested);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(sym_value);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_ATposition);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(sym_autoid);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(sym_verbatim);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(597);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(anon_sym_true);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(anon_sym_true);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_false);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_false);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_float);
            if(lookahead == '1')
                ADVANCE(47);
            if(lookahead == '3')
                ADVANCE(48);
            if(lookahead == '6')
                ADVANCE(50);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(anon_sym_float);
            if(lookahead == '1')
                ADVANCE(656);
            if(lookahead == '3')
                ADVANCE(657);
            if(lookahead == '6')
                ADVANCE(660);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(141);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(141);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(anon_sym_char);
            if(lookahead == '1')
                ADVANCE(51);
            if(lookahead == '8')
                ADVANCE(646);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(anon_sym_char);
            if(lookahead == '1')
                ADVANCE(662);
            if(lookahead == '8')
                ADVANCE(647);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_octet);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_octet);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(272);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_int);
            if(lookahead == '1')
                ADVANCE(661);
            if(lookahead == '3')
                ADVANCE(654);
            if(lookahead == '6')
                ADVANCE(658);
            if(lookahead == '8')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_int8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_uint8);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_uint8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(anon_sym_float32);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(anon_sym_float32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(anon_sym_float64);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(anon_sym_float64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_float128);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_float128);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_byte);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_byte);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(anon_sym_boolean);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_boolean);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(anon_sym_char8);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(anon_sym_char8);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(anon_sym_char16);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(anon_sym_char16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(270);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(466);
            if(lookahead == '0')
                ADVANCE(547);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(549);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(562);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(663);
            if(lookahead == '3')
                ADVANCE(655);
            if(lookahead == '6')
                ADVANCE(659);
            if(lookahead == '8')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(633);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(664);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(637);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(627);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(635);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(639);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(649);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(631);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '8')
                ADVANCE(641);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(717);
            if(lookahead == 'i')
                ADVANCE(777);
            if(lookahead == 'l')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(717);
            if(lookahead == 'l')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(755);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(723);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(770);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(775);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(719);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(762);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(706);
            if(lookahead == 's')
                ADVANCE(767);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(603);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(793);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(651);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(741);
            if(lookahead == 'h')
                ADVANCE(739);
            if(lookahead == 't')
                ADVANCE(746);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(741);
            if(lookahead == 'h')
                ADVANCE(739);
            if(lookahead == 't')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(741);
            if(lookahead == 'h')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(643);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(599);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(607);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(783);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(535);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(681);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(670);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(682);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(726);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(671);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(611);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(789);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(791);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(732);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(667);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(518);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(668);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(680);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(672);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(702);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(729);
            if(lookahead == 'u')
                ADVANCE(675);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(729);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(730);
            if(lookahead == 'n')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(730);
            if(lookahead == 'n')
                ADVANCE(715);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(740);
            if(lookahead == 's')
                ADVANCE(709);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(689);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(510);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(699);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(645);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(516);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(538);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(676);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(753);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(754);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(768);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(722);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(669);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(718);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(737);
            if(lookahead == 'y')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(724);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(615);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(710);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(757);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(709);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(605);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(620);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(609);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(485);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(542);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(674);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(691);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(747);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(765);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(673);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(721);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(720);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(687);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(696);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(760);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(693);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(562);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(491);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(490);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(779);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(471);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(800);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(526);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(798);
            if(lookahead == '\\')
                ADVANCE(471);
            if(lookahead != 0)
                ADVANCE(800);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(799);
            if(lookahead == '\\')
                ADVANCE(25);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(798);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(800);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(795);
            if(lookahead == '\\')
                ADVANCE(471);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(800);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(471);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(800);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(800);
            if(lookahead == '\r')
                ADVANCE(802);
            if(lookahead == '\\')
                ADVANCE(801);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(800);
            if(lookahead == '\\')
                ADVANCE(471);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 476 },
    [2] = { .lex_state = 33 },
    [3] = { .lex_state = 33 },
    [4] = { .lex_state = 33 },
    [5] = { .lex_state = 33 },
    [6] = { .lex_state = 33 },
    [7] = { .lex_state = 33 },
    [8] = { .lex_state = 33 },
    [9] = { .lex_state = 33 },
    [10] = { .lex_state = 33 },
    [11] = { .lex_state = 33 },
    [12] = { .lex_state = 33 },
    [13] = { .lex_state = 37 },
    [14] = { .lex_state = 33 },
    [15] = { .lex_state = 33 },
    [16] = { .lex_state = 476 },
    [17] = { .lex_state = 476 },
    [18] = { .lex_state = 476 },
    [19] = { .lex_state = 476 },
    [20] = { .lex_state = 33 },
    [21] = { .lex_state = 33 },
    [22] = { .lex_state = 33 },
    [23] = { .lex_state = 33 },
    [24] = { .lex_state = 33 },
    [25] = { .lex_state = 33 },
    [26] = { .lex_state = 33 },
    [27] = { .lex_state = 33 },
    [28] = { .lex_state = 33 },
    [29] = { .lex_state = 33 },
    [30] = { .lex_state = 33 },
    [31] = { .lex_state = 33 },
    [32] = { .lex_state = 38 },
    [33] = { .lex_state = 33 },
    [34] = { .lex_state = 33 },
    [35] = { .lex_state = 39 },
    [36] = { .lex_state = 32 },
    [37] = { .lex_state = 32 },
    [38] = { .lex_state = 32 },
    [39] = { .lex_state = 32 },
    [40] = { .lex_state = 32 },
    [41] = { .lex_state = 32 },
    [42] = { .lex_state = 476 },
    [43] = { .lex_state = 32 },
    [44] = { .lex_state = 476 },
    [45] = { .lex_state = 32 },
    [46] = { .lex_state = 476 },
    [47] = { .lex_state = 32 },
    [48] = { .lex_state = 476 },
    [49] = { .lex_state = 476 },
    [50] = { .lex_state = 32 },
    [51] = { .lex_state = 476 },
    [52] = { .lex_state = 32 },
    [53] = { .lex_state = 32 },
    [54] = { .lex_state = 32 },
    [55] = { .lex_state = 30 },
    [56] = { .lex_state = 30 },
    [57] = { .lex_state = 30 },
    [58] = { .lex_state = 30 },
    [59] = { .lex_state = 32 },
    [60] = { .lex_state = 476 },
    [61] = { .lex_state = 476 },
    [62] = { .lex_state = 32 },
    [63] = { .lex_state = 476 },
    [64] = { .lex_state = 476 },
    [65] = { .lex_state = 476 },
    [66] = { .lex_state = 476 },
    [67] = { .lex_state = 476 },
    [68] = { .lex_state = 476 },
    [69] = { .lex_state = 476 },
    [70] = { .lex_state = 476 },
    [71] = { .lex_state = 476 },
    [72] = { .lex_state = 32 },
    [73] = { .lex_state = 476 },
    [74] = { .lex_state = 476 },
    [75] = { .lex_state = 476 },
    [76] = { .lex_state = 476 },
    [77] = { .lex_state = 34 },
    [78] = { .lex_state = 476 },
    [79] = { .lex_state = 32 },
    [80] = { .lex_state = 34 },
    [81] = { .lex_state = 34 },
    [82] = { .lex_state = 40 },
    [83] = { .lex_state = 31 },
    [84] = { .lex_state = 31 },
    [85] = { .lex_state = 40 },
    [86] = { .lex_state = 40 },
    [87] = { .lex_state = 476 },
    [88] = { .lex_state = 40 },
    [89] = { .lex_state = 40 },
    [90] = { .lex_state = 40 },
    [91] = { .lex_state = 31 },
    [92] = { .lex_state = 31 },
    [93] = { .lex_state = 31 },
    [94] = { .lex_state = 34 },
    [95] = { .lex_state = 34 },
    [96] = { .lex_state = 0 },
    [97] = { .lex_state = 34 },
    [98] = { .lex_state = 0 },
    [99] = { .lex_state = 41 },
    [100] = { .lex_state = 30 },
    [101] = { .lex_state = 41 },
    [102] = { .lex_state = 30 },
    [103] = { .lex_state = 40 },
    [104] = { .lex_state = 41 },
    [105] = { .lex_state = 41 },
    [106] = { .lex_state = 30 },
    [107] = { .lex_state = 30 },
    [108] = { .lex_state = 41 },
    [109] = { .lex_state = 0 },
    [110] = { .lex_state = 32 },
    [111] = { .lex_state = 30 },
    [112] = { .lex_state = 30 },
    [113] = { .lex_state = 30 },
    [114] = { .lex_state = 41 },
    [115] = { .lex_state = 30 },
    [116] = { .lex_state = 41 },
    [117] = { .lex_state = 41 },
    [118] = { .lex_state = 30 },
    [119] = { .lex_state = 0 },
    [120] = { .lex_state = 34 },
    [121] = { .lex_state = 0 },
    [122] = { .lex_state = 30 },
    [123] = { .lex_state = 34 },
    [124] = { .lex_state = 0 },
    [125] = { .lex_state = 41 },
    [126] = { .lex_state = 41 },
    [127] = { .lex_state = 30 },
    [128] = { .lex_state = 30 },
    [129] = { .lex_state = 31 },
    [130] = { .lex_state = 41 },
    [131] = { .lex_state = 0 },
    [132] = { .lex_state = 476 },
    [133] = { .lex_state = 476 },
    [134] = { .lex_state = 476 },
    [135] = { .lex_state = 30 },
    [136] = { .lex_state = 0 },
    [137] = { .lex_state = 31 },
    [138] = { .lex_state = 476 },
    [139] = { .lex_state = 30 },
    [140] = { .lex_state = 30 },
    [141] = { .lex_state = 0 },
    [142] = { .lex_state = 0 },
    [143] = { .lex_state = 30 },
    [144] = { .lex_state = 0 },
    [145] = { .lex_state = 42 },
    [146] = { .lex_state = 30 },
    [147] = { .lex_state = 40 },
    [148] = { .lex_state = 0 },
    [149] = { .lex_state = 30 },
    [150] = { .lex_state = 0 },
    [151] = { .lex_state = 0 },
    [152] = { .lex_state = 30 },
    [153] = { .lex_state = 40 },
    [154] = { .lex_state = 30 },
    [155] = { .lex_state = 0 },
    [156] = { .lex_state = 30 },
    [157] = { .lex_state = 0 },
    [158] = { .lex_state = 43 },
    [159] = { .lex_state = 0 },
    [160] = { .lex_state = 31 },
    [161] = { .lex_state = 0 },
    [162] = { .lex_state = 41 },
    [163] = { .lex_state = 0 },
    [164] = { .lex_state = 0 },
    [165] = { .lex_state = 31 },
    [166] = { .lex_state = 33 },
    [167] = { .lex_state = 41 },
    [168] = { .lex_state = 41 },
    [169] = { .lex_state = 0 },
    [170] = { .lex_state = 0 },
    [171] = { .lex_state = 30 },
    [172] = { .lex_state = 41 },
    [173] = { .lex_state = 0 },
    [174] = { .lex_state = 0 },
    [175] = { .lex_state = 0 },
    [176] = { .lex_state = 30 },
    [177] = { .lex_state = 41 },
    [178] = { .lex_state = 41 },
    [179] = { .lex_state = 41 },
    [180] = { .lex_state = 0 },
    [181] = { .lex_state = 41 },
    [182] = { .lex_state = 30 },
    [183] = { .lex_state = 30 },
    [184] = { .lex_state = 0 },
    [185] = { .lex_state = 0 },
    [186] = { .lex_state = 0 },
    [187] = { .lex_state = 0 },
    [188] = { .lex_state = 41 },
    [189] = { .lex_state = 0 },
    [190] = { .lex_state = 0 },
    [191] = { .lex_state = 41 },
    [192] = { .lex_state = 41 },
    [193] = { .lex_state = 0 },
    [194] = { .lex_state = 30 },
    [195] = { .lex_state = 30 },
    [196] = { .lex_state = 44 },
    [197] = { .lex_state = 31 },
    [198] = { .lex_state = 44 },
    [199] = { .lex_state = 30 },
    [200] = { .lex_state = 30 },
    [201] = { .lex_state = 30 },
    [202] = { .lex_state = 30 },
    [203] = { .lex_state = 30 },
    [204] = { .lex_state = 30 },
    [205] = { .lex_state = 476 },
    [206] = { .lex_state = 30 },
    [207] = { .lex_state = 0 },
    [208] = { .lex_state = 30 },
    [209] = { .lex_state = 476 },
    [210] = { .lex_state = 0 },
    [211] = { .lex_state = 30 },
    [212] = { .lex_state = 30 },
    [213] = { .lex_state = 30 },
    [214] = { .lex_state = 30 },
    [215] = { .lex_state = 0 },
    [216] = { .lex_state = 30 },
    [217] = { .lex_state = 0 },
    [218] = { .lex_state = 44 },
    [219] = { .lex_state = 30 },
    [220] = { .lex_state = 31 },
    [221] = { .lex_state = 30 },
    [222] = { .lex_state = 30 },
    [223] = { .lex_state = 30 },
    [224] = { .lex_state = 44 },
    [225] = { .lex_state = 31 },
    [226] = { .lex_state = 41 },
    [227] = { .lex_state = 0 },
    [228] = { .lex_state = 0 },
    [229] = { .lex_state = 31 },
    [230] = { .lex_state = 0 },
    [231] = { .lex_state = 31 },
    [232] = { .lex_state = 41 },
    [233] = { .lex_state = 0 },
    [234] = { .lex_state = 0 },
    [235] = { .lex_state = 31 },
    [236] = { .lex_state = 31 },
    [237] = { .lex_state = 31 },
    [238] = { .lex_state = 30 },
    [239] = { .lex_state = 30 },
    [240] = { .lex_state = 31 },
    [241] = { .lex_state = 0 },
    [242] = { .lex_state = 0 },
    [243] = { .lex_state = 0 },
    [244] = { .lex_state = 0 },
    [245] = { .lex_state = 30 },
    [246] = { .lex_state = 0 },
    [247] = { .lex_state = 30 },
    [248] = { .lex_state = 0 },
    [249] = { .lex_state = 30 },
    [250] = { .lex_state = 0 },
    [251] = { .lex_state = 0 },
    [252] = { .lex_state = 0 },
    [253] = { .lex_state = 0 },
    [254] = { .lex_state = 0 },
    [255] = { .lex_state = 33 },
    [256] = { .lex_state = 0 },
    [257] = { .lex_state = 33 },
    [258] = { .lex_state = 0 },
    [259] = { .lex_state = 33 },
    [260] = { .lex_state = 0 },
    [261] = { .lex_state = 0 },
    [262] = { .lex_state = 0 },
    [263] = { .lex_state = 0 },
    [264] = { .lex_state = 30 },
    [265] = { .lex_state = 0 },
    [266] = { .lex_state = 0 },
    [267] = { .lex_state = 0 },
    [268] = { .lex_state = 0 },
    [269] = { .lex_state = 0 },
    [270] = { .lex_state = 0 },
    [271] = { .lex_state = 0 },
    [272] = { .lex_state = 0 },
    [273] = { .lex_state = 0 },
    [274] = { .lex_state = 30 },
    [275] = { .lex_state = 0 },
    [276] = { .lex_state = 0 },
    [277] = { .lex_state = 0 },
    [278] = { .lex_state = 0 },
    [279] = { .lex_state = 0 },
    [280] = { .lex_state = 0 },
    [281] = { .lex_state = 0 },
    [282] = { .lex_state = 30 },
    [283] = { .lex_state = 44 },
    [284] = { .lex_state = 0 },
    [285] = { .lex_state = 33 },
    [286] = { .lex_state = 33 },
    [287] = { .lex_state = 0 },
    [288] = { .lex_state = 0 },
    [289] = { .lex_state = 30 },
    [290] = { .lex_state = 30 },
    [291] = { .lex_state = 798 },
    [292] = { .lex_state = 44 },
    [293] = { .lex_state = 0 },
    [294] = { .lex_state = 0 },
    [295] = { .lex_state = 0 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 0 },
    [298] = { .lex_state = 33 },
    [299] = { .lex_state = 0 },
    [300] = { .lex_state = 0 },
    [301] = { .lex_state = 0 },
    [302] = { .lex_state = 0 },
    [303] = { .lex_state = 0 },
    [304] = { .lex_state = 0 },
    [305] = { .lex_state = 0 },
    [306] = { .lex_state = 0 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 0 },
    [309] = { .lex_state = 30 },
    [310] = { .lex_state = 476 },
    [311] = { .lex_state = 0 },
    [312] = { .lex_state = 476 },
    [313] = { .lex_state = 0 },
    [314] = { .lex_state = 0 },
    [315] = { .lex_state = 33 },
    [316] = { .lex_state = 476 },
    [317] = { .lex_state = 0 },
    [318] = { .lex_state = 30 },
    [319] = { .lex_state = 476 },
    [320] = { .lex_state = 0 },
    [321] = { .lex_state = 476 },
    [322] = { .lex_state = 0 },
    [323] = { .lex_state = 0 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 30 },
    [326] = { .lex_state = 0 },
    [327] = { .lex_state = 0 },
    [328] = { .lex_state = 30 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 524 },
    [331] = { .lex_state = 0 },
    [332] = { .lex_state = 30 },
    [333] = { .lex_state = 30 },
    [334] = { .lex_state = 30 },
    [335] = { .lex_state = 30 },
    [336] = { .lex_state = 0 },
    [337] = { .lex_state = 476 },
    [338] = { .lex_state = 0 },
    [339] = { .lex_state = 0 },
    [340] = { .lex_state = 0 },
    [341] = { .lex_state = 30 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 30 },
    [344] = { .lex_state = 476 },
    [345] = { .lex_state = 30 },
    [346] = { .lex_state = 30 },
    [347] = { .lex_state = 30 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 0 },
    [351] = { .lex_state = 0 },
    [352] = { .lex_state = 44 },
    [353] = { .lex_state = 44 },
    [354] = { .lex_state = 30 },
    [355] = { .lex_state = 30 },
    [356] = { .lex_state = 30 },
    [357] = { (TSStateId)(-1) },
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
        [anon_sym_SQUOTE] = ACTIONS(1),
        [anon_sym_L] = ACTIONS(1),
        [anon_sym_default] = ACTIONS(1),
        [anon_sym_enum] = ACTIONS(1),
        [anon_sym_COMMA] = ACTIONS(1),
        [anon_sym_ATdefault_literal] = ACTIONS(1),
        [anon_sym_ATignore_literal_names] = ACTIONS(1),
        [anon_sym_ATannotation] = ACTIONS(1),
        [anon_sym_union] = ACTIONS(1),
        [anon_sym_switch] = ACTIONS(1),
        [anon_sym_case] = ACTIONS(1),
        [anon_sym_bitmask] = ACTIONS(1),
        [anon_sym_typedef] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_local] = ACTIONS(1),
        [sym_dds_service] = ACTIONS(1),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(1),
        [anon_sym_name] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(1),
        [anon_sym_attribute] = ACTIONS(1),
        [anon_sym_raises] = ACTIONS(1),
        [anon_sym_in] = ACTIONS(1),
        [anon_sym_out] = ACTIONS(1),
        [anon_sym_inout] = ACTIONS(1),
        [anon_sym_const] = ACTIONS(1),
        [sym_optional] = ACTIONS(1),
        [sym_key] = ACTIONS(1),
        [sym_must_understand] = ACTIONS(1),
        [sym_non_serialized] = ACTIONS(1),
        [sym_id] = ACTIONS(1),
        [sym_external] = ACTIONS(1),
        [anon_sym_AThashid] = ACTIONS(1),
        [anon_sym_LPAREN_DQUOTE] = ACTIONS(1),
        [anon_sym_DQUOTE] = ACTIONS(1),
        [anon_sym_ATtry_construct] = ACTIONS(1),
        [anon_sym_ATbit_bound] = ACTIONS(1),
        [aux_sym_bit_bound_token1] = ACTIONS(1),
        [sym_extensibility] = ACTIONS(1),
        [sym_mutable] = ACTIONS(1),
        [sym_appendable] = ACTIONS(1),
        [sym_final] = ACTIONS(1),
        [sym_nested] = ACTIONS(1),
        [sym_value] = ACTIONS(1),
        [anon_sym_ATposition] = ACTIONS(1),
        [sym_autoid] = ACTIONS(1),
        [sym_verbatim] = ACTIONS(1),
        [anon_sym_ATdata_representation] = ACTIONS(1),
        [anon_sym_XCDR] = ACTIONS(1),
        [anon_sym_XCDR2] = ACTIONS(1),
        [anon_sym_true] = ACTIONS(1),
        [anon_sym_false] = ACTIONS(1),
        [anon_sym_void] = ACTIONS(1),
        [anon_sym_float] = ACTIONS(1),
        [anon_sym_double] = ACTIONS(1),
        [anon_sym_short] = ACTIONS(1),
        [anon_sym_long] = ACTIONS(1),
        [anon_sym_longdouble] = ACTIONS(1),
        [anon_sym_unsignedshort] = ACTIONS(1),
        [anon_sym_char] = ACTIONS(1),
        [anon_sym_wchar] = ACTIONS(1),
        [anon_sym_longlong] = ACTIONS(1),
        [anon_sym_octet] = ACTIONS(1),
        [anon_sym_unsignedlong] = ACTIONS(1),
        [anon_sym_unsignedlonglong] = ACTIONS(1),
        [anon_sym_uint8] = ACTIONS(1),
        [anon_sym_uint16] = ACTIONS(1),
        [anon_sym_uint32] = ACTIONS(1),
        [anon_sym_uint64] = ACTIONS(1),
        [anon_sym_float32] = ACTIONS(1),
        [anon_sym_float64] = ACTIONS(1),
        [anon_sym_float128] = ACTIONS(1),
        [anon_sym_byte] = ACTIONS(1),
        [anon_sym_boolean] = ACTIONS(1),
        [anon_sym_char8] = ACTIONS(1),
        [anon_sym_char16] = ACTIONS(1),
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_sequence] = ACTIONS(1),
        [anon_sym_LT] = ACTIONS(1),
        [anon_sym_GT] = ACTIONS(1),
        [anon_sym_string] = ACTIONS(1),
        [anon_sym_wstring] = ACTIONS(1),
        [anon_sym_fixed] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(306),
        [sym__definition] = STATE(46),
        [sym_except_dcl] = STATE(49),
        [sym_native_dcl] = STATE(305),
        [sym_module_dcl] = STATE(305),
        [sym_struct_forward_dcl] = STATE(305),
        [sym_struct_def] = STATE(305),
        [sym_enum_dcl] = STATE(305),
        [sym_enum_anno] = STATE(301),
        [sym_annotation] = STATE(305),
        [sym_union_forward_dcl] = STATE(305),
        [sym_union_def] = STATE(305),
        [sym_bitmask] = STATE(305),
        [sym_typedef_dcl] = STATE(305),
        [sym_predefine] = STATE(49),
        [sym_interface_dcl] = STATE(305),
        [sym_interface_forward_dcl] = STATE(242),
        [sym_interface_header] = STATE(299),
        [sym_interface_def] = STATE(242),
        [sym_dds_request_topic] = STATE(134),
        [sym_dds_reply_topic] = STATE(134),
        [sym_interface_anno] = STATE(138),
        [sym_const_dcl] = STATE(305),
        [sym_bit_bound] = STATE(295),
        [sym_data_representation] = STATE(180),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(18),
        [aux_sym_struct_def_repeat1] = STATE(131),
        [aux_sym_interface_def_repeat1] = STATE(78),
        [ts_builtin_sym_end] = ACTIONS(5),
        [anon_sym_exception] = ACTIONS(7),
        [anon_sym_native] = ACTIONS(9),
        [anon_sym_module] = ACTIONS(11),
        [anon_sym_struct] = ACTIONS(13),
        [anon_sym_enum] = ACTIONS(15),
        [anon_sym_ATignore_literal_names] = ACTIONS(17),
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_union] = ACTIONS(21),
        [anon_sym_bitmask] = ACTIONS(23),
        [anon_sym_typedef] = ACTIONS(25),
        [anon_sym_POUNDdefine] = ACTIONS(27),
        [anon_sym_interface] = ACTIONS(29),
        [anon_sym_local] = ACTIONS(31),
        [sym_dds_service] = ACTIONS(33),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(35),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(37),
        [anon_sym_const] = ACTIONS(39),
        [anon_sym_ATbit_bound] = ACTIONS(41),
        [sym_final] = ACTIONS(43),
        [anon_sym_ATdata_representation] = ACTIONS(45),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_RBRACE,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    STATE(2),
    1,
    sym_comment,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(22),
    1,
    sym_member,
    STATE(28),
    1,
    sym_struct_modifier,
    STATE(128),
    1,
    sym_type_spec,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(247),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(31),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(231),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [109] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(69),
    1,
    anon_sym_RBRACE,
    ACTIONS(74),
    1,
    anon_sym_AThashid,
    ACTIONS(77),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(86),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(89),
    1,
    sym_identifier,
    ACTIONS(92),
    1,
    anon_sym_sequence,
    ACTIONS(98),
    1,
    anon_sym_fixed,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(22),
    1,
    sym_member,
    STATE(28),
    1,
    sym_struct_modifier,
    STATE(128),
    1,
    sym_type_spec,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(247),
    1,
    sym_scoped_name,
    ACTIONS(95),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(3),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(31),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(231),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(83),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(71),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(80),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [216] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(101),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(4),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(22),
    1,
    sym_member,
    STATE(28),
    1,
    sym_struct_modifier,
    STATE(128),
    1,
    sym_type_spec,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(247),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(31),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(231),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [325] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(103),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(5),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(22),
    1,
    sym_member,
    STATE(28),
    1,
    sym_struct_modifier,
    STATE(128),
    1,
    sym_type_spec,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(247),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(31),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(231),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [434] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(105),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(6),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(22),
    1,
    sym_member,
    STATE(28),
    1,
    sym_struct_modifier,
    STATE(128),
    1,
    sym_type_spec,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(247),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(31),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(231),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [543] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(107),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(7),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(22),
    1,
    sym_member,
    STATE(28),
    1,
    sym_struct_modifier,
    STATE(128),
    1,
    sym_type_spec,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(247),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(31),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(231),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [652] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(107),
    1,
    anon_sym_RBRACE,
    STATE(4),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(8),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(22),
    1,
    sym_member,
    STATE(28),
    1,
    sym_struct_modifier,
    STATE(128),
    1,
    sym_type_spec,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(247),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(31),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(231),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [761] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(109),
    1,
    anon_sym_RBRACE,
    STATE(6),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(9),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(22),
    1,
    sym_member,
    STATE(28),
    1,
    sym_struct_modifier,
    STATE(128),
    1,
    sym_type_spec,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(247),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(31),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(231),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [870] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(111),
    1,
    anon_sym_RBRACE,
    STATE(2),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(10),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(22),
    1,
    sym_member,
    STATE(28),
    1,
    sym_struct_modifier,
    STATE(128),
    1,
    sym_type_spec,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(247),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(31),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(231),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [979] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(113),
    1,
    anon_sym_RBRACE,
    STATE(7),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(11),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(22),
    1,
    sym_member,
    STATE(28),
    1,
    sym_struct_modifier,
    STATE(128),
    1,
    sym_type_spec,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(247),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(31),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(231),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [1088] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(115),
    1,
    anon_sym_RBRACE,
    STATE(5),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(12),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(22),
    1,
    sym_member,
    STATE(28),
    1,
    sym_struct_modifier,
    STATE(128),
    1,
    sym_type_spec,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(247),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(31),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(231),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [1197] = 23,
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
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(117),
    1,
    anon_sym_struct,
    ACTIONS(119),
    1,
    anon_sym_enum,
    ACTIONS(121),
    1,
    anon_sym_union,
    STATE(13),
    1,
    sym_comment,
    STATE(131),
    1,
    aux_sym_struct_def_repeat1,
    STATE(180),
    1,
    sym_data_representation,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(246),
    1,
    sym_type_declarator,
    STATE(247),
    1,
    sym_scoped_name,
    STATE(301),
    1,
    sym_enum_anno,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    STATE(135),
    7,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_simple_type_spec,
    sym_template_type_spec,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [1305] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_AThashid,
    ACTIONS(53),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    STATE(14),
    1,
    sym_comment,
    STATE(15),
    1,
    aux_sym_member_repeat1,
    STATE(28),
    1,
    sym_struct_modifier,
    STATE(127),
    1,
    sym_type_spec,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(247),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(31),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(231),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(49),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [1405] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(126),
    1,
    anon_sym_AThashid,
    ACTIONS(129),
    1,
    anon_sym_ATtry_construct,
    STATE(28),
    1,
    sym_struct_modifier,
    STATE(15),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(31),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(134),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(123),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(132),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [1475] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(138),
    1,
    anon_sym_exception,
    ACTIONS(141),
    1,
    anon_sym_native,
    ACTIONS(144),
    1,
    anon_sym_module,
    ACTIONS(147),
    1,
    anon_sym_struct,
    ACTIONS(150),
    1,
    anon_sym_enum,
    ACTIONS(153),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(156),
    1,
    anon_sym_ATannotation,
    ACTIONS(159),
    1,
    anon_sym_union,
    ACTIONS(162),
    1,
    anon_sym_bitmask,
    ACTIONS(165),
    1,
    anon_sym_typedef,
    ACTIONS(168),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(171),
    1,
    anon_sym_interface,
    ACTIONS(174),
    1,
    anon_sym_local,
    ACTIONS(177),
    1,
    sym_dds_service,
    ACTIONS(180),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(183),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(186),
    1,
    anon_sym_const,
    ACTIONS(189),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(192),
    1,
    sym_final,
    ACTIONS(195),
    1,
    anon_sym_ATdata_representation,
    STATE(46),
    1,
    sym__definition,
    STATE(78),
    1,
    aux_sym_interface_def_repeat1,
    STATE(131),
    1,
    aux_sym_struct_def_repeat1,
    STATE(138),
    1,
    sym_interface_anno,
    STATE(180),
    1,
    sym_data_representation,
    STATE(295),
    1,
    sym_bit_bound,
    STATE(299),
    1,
    sym_interface_header,
    STATE(301),
    1,
    sym_enum_anno,
    ACTIONS(136),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(16),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    STATE(49),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(134),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(242),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(305),
    12,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitmask,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [1597] = 36,
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
    anon_sym_bitmask,
    ACTIONS(25),
    1,
    anon_sym_typedef,
    ACTIONS(27),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(29),
    1,
    anon_sym_interface,
    ACTIONS(31),
    1,
    anon_sym_local,
    ACTIONS(33),
    1,
    sym_dds_service,
    ACTIONS(35),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(37),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(39),
    1,
    anon_sym_const,
    ACTIONS(41),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(198),
    1,
    anon_sym_RBRACE,
    STATE(17),
    1,
    sym_comment,
    STATE(19),
    1,
    aux_sym_specification_repeat1,
    STATE(46),
    1,
    sym__definition,
    STATE(78),
    1,
    aux_sym_interface_def_repeat1,
    STATE(131),
    1,
    aux_sym_struct_def_repeat1,
    STATE(138),
    1,
    sym_interface_anno,
    STATE(180),
    1,
    sym_data_representation,
    STATE(295),
    1,
    sym_bit_bound,
    STATE(299),
    1,
    sym_interface_header,
    STATE(301),
    1,
    sym_enum_anno,
    STATE(49),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(134),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(242),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(305),
    12,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitmask,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [1720] = 36,
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
    anon_sym_bitmask,
    ACTIONS(25),
    1,
    anon_sym_typedef,
    ACTIONS(27),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(29),
    1,
    anon_sym_interface,
    ACTIONS(31),
    1,
    anon_sym_local,
    ACTIONS(33),
    1,
    sym_dds_service,
    ACTIONS(35),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(37),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(39),
    1,
    anon_sym_const,
    ACTIONS(41),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(200),
    1,
    ts_builtin_sym_end,
    STATE(16),
    1,
    aux_sym_specification_repeat1,
    STATE(18),
    1,
    sym_comment,
    STATE(46),
    1,
    sym__definition,
    STATE(78),
    1,
    aux_sym_interface_def_repeat1,
    STATE(131),
    1,
    aux_sym_struct_def_repeat1,
    STATE(138),
    1,
    sym_interface_anno,
    STATE(180),
    1,
    sym_data_representation,
    STATE(295),
    1,
    sym_bit_bound,
    STATE(299),
    1,
    sym_interface_header,
    STATE(301),
    1,
    sym_enum_anno,
    STATE(49),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(134),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(242),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(305),
    12,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitmask,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [1843] = 36,
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
    anon_sym_bitmask,
    ACTIONS(25),
    1,
    anon_sym_typedef,
    ACTIONS(27),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(29),
    1,
    anon_sym_interface,
    ACTIONS(31),
    1,
    anon_sym_local,
    ACTIONS(33),
    1,
    sym_dds_service,
    ACTIONS(35),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(37),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(39),
    1,
    anon_sym_const,
    ACTIONS(41),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(202),
    1,
    anon_sym_RBRACE,
    STATE(16),
    1,
    aux_sym_specification_repeat1,
    STATE(19),
    1,
    sym_comment,
    STATE(46),
    1,
    sym__definition,
    STATE(78),
    1,
    aux_sym_interface_def_repeat1,
    STATE(131),
    1,
    aux_sym_struct_def_repeat1,
    STATE(138),
    1,
    sym_interface_anno,
    STATE(180),
    1,
    sym_data_representation,
    STATE(295),
    1,
    sym_bit_bound,
    STATE(299),
    1,
    sym_interface_header,
    STATE(301),
    1,
    sym_enum_anno,
    STATE(49),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(134),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(242),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(305),
    12,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_annotation,
    sym_union_forward_dcl,
    sym_union_def,
    sym_bitmask,
    sym_typedef_dcl,
    sym_interface_dcl,
    sym_const_dcl,
    [1966] = 16,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    ACTIONS(204),
    1,
    anon_sym_COMMA,
    ACTIONS(206),
    1,
    anon_sym_GT,
    STATE(20),
    1,
    sym_comment,
    STATE(197),
    1,
    sym_scoped_name,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(286),
    1,
    sym_type_spec,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [2048] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(21),
    1,
    sym_comment,
    ACTIONS(208),
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
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(210),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2105] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(22),
    1,
    sym_comment,
    ACTIONS(212),
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
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(214),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2162] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(23),
    1,
    sym_comment,
    ACTIONS(216),
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
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(218),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2219] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(24),
    1,
    sym_comment,
    ACTIONS(220),
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
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(222),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2276] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(25),
    1,
    sym_comment,
    ACTIONS(224),
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
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(226),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2333] = 15,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    STATE(26),
    1,
    sym_comment,
    STATE(152),
    1,
    sym_type_spec,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(247),
    1,
    sym_scoped_name,
    STATE(340),
    1,
    sym_element_spec,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [2412] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(27),
    1,
    sym_comment,
    ACTIONS(228),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(230),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2468] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(28),
    1,
    sym_comment,
    ACTIONS(232),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(234),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2524] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(29),
    1,
    sym_comment,
    ACTIONS(236),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(238),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2580] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    ACTIONS(67),
    1,
    anon_sym_fixed,
    STATE(30),
    1,
    sym_comment,
    STATE(240),
    1,
    sym_primitive_type,
    STATE(247),
    1,
    sym_scoped_name,
    STATE(346),
    1,
    sym_type_spec,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(236),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [2656] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(31),
    1,
    sym_comment,
    ACTIONS(240),
    13,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(242),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2712] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(63),
    1,
    anon_sym_sequence,
    STATE(32),
    1,
    sym_comment,
    STATE(289),
    1,
    sym_const_type,
    STATE(318),
    1,
    sym_scoped_name,
    STATE(341),
    2,
    sym_primitive_type,
    sym_sequence_type,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [2773] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(33),
    1,
    sym_comment,
    ACTIONS(246),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(244),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2821] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(34),
    1,
    sym_comment,
    ACTIONS(250),
    5,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    anon_sym_COLON_COLON,
    ACTIONS(248),
    32,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    sym_identifier,
    anon_sym_sequence,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_fixed,
    [2869] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    STATE(35),
    1,
    sym_comment,
    STATE(222),
    1,
    sym_scoped_name,
    STATE(313),
    1,
    sym_primitive_type,
    STATE(314),
    1,
    sym_switch_type_spec,
    ACTIONS(57),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(55),
    27,
    anon_sym_true,
    anon_sym_false,
    anon_sym_void,
    anon_sym_float,
    anon_sym_double,
    anon_sym_short,
    anon_sym_long,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_octet,
    anon_sym_unsignedlong,
    anon_sym_int,
    anon_sym_int8,
    anon_sym_int16,
    anon_sym_int32,
    anon_sym_int64,
    anon_sym_uint8,
    anon_sym_uint16,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float32,
    anon_sym_float64,
    anon_sym_float128,
    anon_sym_byte,
    anon_sym_boolean,
    anon_sym_char8,
    anon_sym_char16,
    [2926] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(36),
    1,
    sym_comment,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(63),
    1,
    sym_literal,
    STATE(64),
    1,
    sym_mult_expr,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(74),
    1,
    sym_add_expr,
    STATE(76),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(83),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(93),
    1,
    sym_or_expr,
    STATE(166),
    1,
    sym_const_expr,
    STATE(285),
    1,
    sym_positive_int_const,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [2998] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(37),
    1,
    sym_comment,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(63),
    1,
    sym_literal,
    STATE(64),
    1,
    sym_mult_expr,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(74),
    1,
    sym_add_expr,
    STATE(76),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(83),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(93),
    1,
    sym_or_expr,
    STATE(166),
    1,
    sym_const_expr,
    STATE(248),
    1,
    sym_positive_int_const,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3070] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(38),
    1,
    sym_comment,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(63),
    1,
    sym_literal,
    STATE(64),
    1,
    sym_mult_expr,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(74),
    1,
    sym_add_expr,
    STATE(76),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(83),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(93),
    1,
    sym_or_expr,
    STATE(166),
    1,
    sym_const_expr,
    STATE(256),
    1,
    sym_positive_int_const,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3142] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(39),
    1,
    sym_comment,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(63),
    1,
    sym_literal,
    STATE(64),
    1,
    sym_mult_expr,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(74),
    1,
    sym_add_expr,
    STATE(76),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(83),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(93),
    1,
    sym_or_expr,
    STATE(166),
    1,
    sym_const_expr,
    STATE(257),
    1,
    sym_positive_int_const,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3214] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(40),
    1,
    sym_comment,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(63),
    1,
    sym_literal,
    STATE(64),
    1,
    sym_mult_expr,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(74),
    1,
    sym_add_expr,
    STATE(76),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(83),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(93),
    1,
    sym_or_expr,
    STATE(166),
    1,
    sym_const_expr,
    STATE(298),
    1,
    sym_positive_int_const,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3286] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(41),
    1,
    sym_comment,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(63),
    1,
    sym_literal,
    STATE(64),
    1,
    sym_mult_expr,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(74),
    1,
    sym_add_expr,
    STATE(76),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(83),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(93),
    1,
    sym_or_expr,
    STATE(296),
    1,
    sym_const_expr,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3355] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(42),
    1,
    sym_comment,
    ACTIONS(268),
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
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3386] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(43),
    1,
    sym_comment,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(63),
    1,
    sym_literal,
    STATE(64),
    1,
    sym_mult_expr,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(74),
    1,
    sym_add_expr,
    STATE(76),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(83),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(93),
    1,
    sym_or_expr,
    STATE(304),
    1,
    sym_const_expr,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3455] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(44),
    1,
    sym_comment,
    ACTIONS(270),
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
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3486] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(45),
    1,
    sym_comment,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(63),
    1,
    sym_literal,
    STATE(64),
    1,
    sym_mult_expr,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(74),
    1,
    sym_add_expr,
    STATE(76),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(83),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(93),
    1,
    sym_or_expr,
    STATE(339),
    1,
    sym_const_expr,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3555] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(46),
    1,
    sym_comment,
    ACTIONS(272),
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
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3586] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(47),
    1,
    sym_comment,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(63),
    1,
    sym_literal,
    STATE(64),
    1,
    sym_mult_expr,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(74),
    1,
    sym_add_expr,
    STATE(76),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(83),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(93),
    1,
    sym_or_expr,
    STATE(254),
    1,
    sym_const_expr,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3655] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(48),
    1,
    sym_comment,
    ACTIONS(274),
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
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3686] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(49),
    1,
    sym_comment,
    ACTIONS(276),
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
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3717] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(50),
    1,
    sym_comment,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(63),
    1,
    sym_literal,
    STATE(64),
    1,
    sym_mult_expr,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(74),
    1,
    sym_add_expr,
    STATE(76),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(83),
    1,
    sym_and_expr,
    STATE(91),
    1,
    sym_xor_expr,
    STATE(93),
    1,
    sym_or_expr,
    STATE(284),
    1,
    sym_const_expr,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3786] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(51),
    1,
    sym_comment,
    ACTIONS(278),
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
    anon_sym_bitmask,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3817] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(52),
    1,
    sym_comment,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(63),
    1,
    sym_literal,
    STATE(64),
    1,
    sym_mult_expr,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(74),
    1,
    sym_add_expr,
    STATE(76),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(83),
    1,
    sym_and_expr,
    STATE(92),
    1,
    sym_xor_expr,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3880] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(53),
    1,
    sym_comment,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(63),
    1,
    sym_literal,
    STATE(64),
    1,
    sym_mult_expr,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(74),
    1,
    sym_add_expr,
    STATE(76),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(84),
    1,
    sym_and_expr,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3940] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(54),
    1,
    sym_comment,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(63),
    1,
    sym_literal,
    STATE(64),
    1,
    sym_mult_expr,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(74),
    1,
    sym_add_expr,
    STATE(75),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3997] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(55),
    1,
    sym_comment,
    ACTIONS(282),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(280),
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
    sym_identifier,
    anon_sym_RBRACK,
    [4025] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(288),
    1,
    sym_identifier,
    STATE(56),
    1,
    sym_comment,
    ACTIONS(286),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(284),
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
    [4055] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(288),
    1,
    sym_identifier,
    STATE(57),
    1,
    sym_comment,
    ACTIONS(292),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(290),
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
    [4085] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(58),
    1,
    sym_comment,
    ACTIONS(296),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(294),
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
    sym_identifier,
    anon_sym_RBRACK,
    [4113] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(59),
    1,
    sym_comment,
    STATE(63),
    1,
    sym_literal,
    STATE(64),
    1,
    sym_mult_expr,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(73),
    1,
    sym_add_expr,
    STATE(79),
    1,
    sym_unary_operator,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4167] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(60),
    1,
    sym_comment,
    ACTIONS(300),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(298),
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
    [4194] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(61),
    1,
    sym_comment,
    ACTIONS(304),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(302),
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
    [4221] = 16,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(62),
    1,
    sym_comment,
    STATE(63),
    1,
    sym_literal,
    STATE(68),
    1,
    sym_unary_expr,
    STATE(71),
    1,
    sym_mult_expr,
    STATE(79),
    1,
    sym_unary_operator,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4272] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(63),
    1,
    sym_comment,
    ACTIONS(286),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(284),
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
    [4299] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(310),
    1,
    anon_sym_SLASH,
    ACTIONS(312),
    1,
    anon_sym_GT,
    STATE(64),
    1,
    sym_comment,
    ACTIONS(308),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(306),
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
    [4330] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(65),
    1,
    sym_comment,
    ACTIONS(316),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(314),
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
    [4357] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(66),
    1,
    sym_comment,
    ACTIONS(292),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(290),
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
    [4384] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(67),
    1,
    sym_comment,
    ACTIONS(320),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(318),
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
    [4411] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(68),
    1,
    sym_comment,
    ACTIONS(324),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(322),
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
    [4438] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(69),
    1,
    sym_comment,
    ACTIONS(328),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(326),
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
    [4465] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(70),
    1,
    sym_comment,
    ACTIONS(332),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(330),
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
    [4492] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(310),
    1,
    anon_sym_SLASH,
    ACTIONS(336),
    1,
    anon_sym_GT,
    STATE(71),
    1,
    sym_comment,
    ACTIONS(308),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(334),
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
    [4523] = 15,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(254),
    1,
    anon_sym_TILDE,
    ACTIONS(256),
    1,
    anon_sym_LPAREN,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    STATE(56),
    1,
    sym_scoped_name,
    STATE(60),
    1,
    sym_unary_expr,
    STATE(63),
    1,
    sym_literal,
    STATE(72),
    1,
    sym_comment,
    STATE(79),
    1,
    sym_unary_operator,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4571] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(342),
    1,
    anon_sym_GT,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(340),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(338),
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
    [4597] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(346),
    1,
    anon_sym_GT,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(340),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(344),
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
    [4623] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(352),
    1,
    anon_sym_GT,
    STATE(75),
    1,
    sym_comment,
    ACTIONS(350),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(348),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [4647] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(356),
    1,
    anon_sym_GT,
    STATE(76),
    1,
    sym_comment,
    ACTIONS(350),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(354),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [4671] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(358),
    1,
    anon_sym_RPAREN,
    ACTIONS(362),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(364),
    1,
    sym_identifier,
    STATE(77),
    1,
    sym_comment,
    STATE(80),
    1,
    aux_sym_interface_function_repeat1,
    STATE(97),
    1,
    sym_function_arg,
    STATE(172),
    1,
    sym_interface_modifier,
    STATE(224),
    1,
    sym_scoped_name,
    ACTIONS(360),
    3,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    [4704] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(33),
    1,
    sym_dds_service,
    ACTIONS(35),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(37),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(366),
    1,
    anon_sym_interface,
    ACTIONS(368),
    1,
    anon_sym_local,
    STATE(78),
    1,
    sym_comment,
    STATE(87),
    1,
    aux_sym_interface_def_repeat1,
    STATE(138),
    1,
    sym_interface_anno,
    STATE(244),
    1,
    sym_interface_header,
    STATE(134),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [4739] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(258),
    1,
    anon_sym_SQUOTE,
    ACTIONS(260),
    1,
    anon_sym_L,
    ACTIONS(262),
    1,
    sym_number_literal,
    ACTIONS(264),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(266),
    1,
    sym_identifier,
    ACTIONS(370),
    1,
    anon_sym_LPAREN,
    STATE(57),
    1,
    sym_scoped_name,
    STATE(66),
    1,
    sym_literal,
    STATE(79),
    1,
    sym_comment,
    STATE(69),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4774] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(362),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(364),
    1,
    sym_identifier,
    ACTIONS(372),
    1,
    anon_sym_RPAREN,
    STATE(80),
    1,
    sym_comment,
    STATE(81),
    1,
    aux_sym_interface_function_repeat1,
    STATE(97),
    1,
    sym_function_arg,
    STATE(172),
    1,
    sym_interface_modifier,
    STATE(224),
    1,
    sym_scoped_name,
    ACTIONS(360),
    3,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    [4807] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(374),
    1,
    anon_sym_RPAREN,
    ACTIONS(379),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(382),
    1,
    sym_identifier,
    STATE(97),
    1,
    sym_function_arg,
    STATE(172),
    1,
    sym_interface_modifier,
    STATE(224),
    1,
    sym_scoped_name,
    STATE(81),
    2,
    sym_comment,
    aux_sym_interface_function_repeat1,
    ACTIONS(376),
    3,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    [4838] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(385),
    1,
    anon_sym_RBRACE,
    ACTIONS(387),
    1,
    anon_sym_attribute,
    STATE(82),
    1,
    sym_comment,
    STATE(90),
    1,
    aux_sym_interface_def_repeat2,
    STATE(114),
    1,
    aux_sym_interface_def_repeat3,
    STATE(153),
    1,
    sym_interface_attribute,
    STATE(168),
    1,
    sym_interface_function,
    STATE(290),
    1,
    sym_scoped_name,
    [4872] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(391),
    1,
    anon_sym_DOLLAR,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(389),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [4892] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(391),
    1,
    anon_sym_DOLLAR,
    STATE(84),
    1,
    sym_comment,
    ACTIONS(393),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [4912] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(387),
    1,
    anon_sym_attribute,
    ACTIONS(395),
    1,
    anon_sym_RBRACE,
    STATE(85),
    1,
    sym_comment,
    STATE(86),
    1,
    aux_sym_interface_def_repeat2,
    STATE(101),
    1,
    aux_sym_interface_def_repeat3,
    STATE(153),
    1,
    sym_interface_attribute,
    STATE(168),
    1,
    sym_interface_function,
    STATE(290),
    1,
    sym_scoped_name,
    [4946] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(387),
    1,
    anon_sym_attribute,
    ACTIONS(397),
    1,
    anon_sym_RBRACE,
    STATE(86),
    1,
    sym_comment,
    STATE(103),
    1,
    aux_sym_interface_def_repeat2,
    STATE(116),
    1,
    aux_sym_interface_def_repeat3,
    STATE(153),
    1,
    sym_interface_attribute,
    STATE(168),
    1,
    sym_interface_function,
    STATE(290),
    1,
    sym_scoped_name,
    [4980] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(401),
    1,
    sym_dds_service,
    ACTIONS(404),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(407),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(138),
    1,
    sym_interface_anno,
    ACTIONS(399),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(87),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(134),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [5008] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(387),
    1,
    anon_sym_attribute,
    ACTIONS(397),
    1,
    anon_sym_RBRACE,
    STATE(88),
    1,
    sym_comment,
    STATE(89),
    1,
    aux_sym_interface_def_repeat2,
    STATE(116),
    1,
    aux_sym_interface_def_repeat3,
    STATE(153),
    1,
    sym_interface_attribute,
    STATE(168),
    1,
    sym_interface_function,
    STATE(290),
    1,
    sym_scoped_name,
    [5042] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(387),
    1,
    anon_sym_attribute,
    ACTIONS(410),
    1,
    anon_sym_RBRACE,
    STATE(89),
    1,
    sym_comment,
    STATE(103),
    1,
    aux_sym_interface_def_repeat2,
    STATE(108),
    1,
    aux_sym_interface_def_repeat3,
    STATE(153),
    1,
    sym_interface_attribute,
    STATE(168),
    1,
    sym_interface_function,
    STATE(290),
    1,
    sym_scoped_name,
    [5076] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(387),
    1,
    anon_sym_attribute,
    ACTIONS(395),
    1,
    anon_sym_RBRACE,
    STATE(90),
    1,
    sym_comment,
    STATE(101),
    1,
    aux_sym_interface_def_repeat3,
    STATE(103),
    1,
    aux_sym_interface_def_repeat2,
    STATE(153),
    1,
    sym_interface_attribute,
    STATE(168),
    1,
    sym_interface_function,
    STATE(290),
    1,
    sym_scoped_name,
    [5110] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(414),
    1,
    anon_sym_CARET,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(412),
    7,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [5129] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(414),
    1,
    anon_sym_CARET,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(416),
    7,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [5148] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(420),
    1,
    anon_sym_PIPE,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(418),
    6,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [5166] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(424),
    1,
    anon_sym_COMMA,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(422),
    2,
    anon_sym_RPAREN,
    anon_sym_COLON_COLON,
    ACTIONS(426),
    4,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    sym_identifier,
    [5186] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(430),
    1,
    anon_sym_COMMA,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(428),
    2,
    anon_sym_RPAREN,
    anon_sym_COLON_COLON,
    ACTIONS(432),
    4,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    sym_identifier,
    [5206] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(436),
    1,
    anon_sym_LBRACK,
    STATE(96),
    1,
    sym_comment,
    STATE(98),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(144),
    1,
    sym_fixed_array_size,
    ACTIONS(434),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [5227] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(438),
    2,
    anon_sym_RPAREN,
    anon_sym_COLON_COLON,
    ACTIONS(440),
    4,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    sym_identifier,
    [5244] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(436),
    1,
    anon_sym_LBRACK,
    STATE(98),
    1,
    sym_comment,
    STATE(119),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(144),
    1,
    sym_fixed_array_size,
    ACTIONS(442),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [5265] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(444),
    1,
    anon_sym_RBRACE,
    ACTIONS(446),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(449),
    1,
    sym_identifier,
    STATE(178),
    1,
    sym_annotation_field,
    STATE(309),
    1,
    sym_scoped_name,
    STATE(99),
    2,
    sym_comment,
    aux_sym_annotation_repeat1,
    [5288] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(452),
    1,
    anon_sym_RBRACE,
    ACTIONS(454),
    1,
    anon_sym_ATposition,
    ACTIONS(456),
    1,
    sym_identifier,
    STATE(100),
    1,
    sym_comment,
    STATE(112),
    1,
    aux_sym_bitmask_repeat1,
    STATE(183),
    1,
    sym_bitmask_field,
    STATE(354),
    1,
    sym_position,
    [5313] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(397),
    1,
    anon_sym_RBRACE,
    ACTIONS(458),
    1,
    sym_identifier,
    STATE(101),
    1,
    sym_comment,
    STATE(104),
    1,
    aux_sym_interface_def_repeat3,
    STATE(168),
    1,
    sym_interface_function,
    STATE(290),
    1,
    sym_scoped_name,
    [5338] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(460),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(462),
    1,
    sym_identifier,
    STATE(102),
    1,
    sym_comment,
    STATE(113),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(143),
    1,
    aux_sym_enumerator_repeat1,
    STATE(215),
    1,
    sym_enumerator,
    STATE(216),
    1,
    sym_enum_modifier,
    [5363] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(466),
    1,
    anon_sym_attribute,
    ACTIONS(469),
    1,
    sym_identifier,
    STATE(153),
    1,
    sym_interface_attribute,
    ACTIONS(464),
    2,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    STATE(103),
    2,
    sym_comment,
    aux_sym_interface_def_repeat2,
    [5384] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(471),
    1,
    anon_sym_RBRACE,
    ACTIONS(473),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(476),
    1,
    sym_identifier,
    STATE(168),
    1,
    sym_interface_function,
    STATE(290),
    1,
    sym_scoped_name,
    STATE(104),
    2,
    sym_comment,
    aux_sym_interface_def_repeat3,
    [5407] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(458),
    1,
    sym_identifier,
    ACTIONS(479),
    1,
    anon_sym_RBRACE,
    STATE(105),
    1,
    sym_comment,
    STATE(117),
    1,
    aux_sym_annotation_repeat1,
    STATE(178),
    1,
    sym_annotation_field,
    STATE(309),
    1,
    sym_scoped_name,
    [5432] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(460),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(462),
    1,
    sym_identifier,
    STATE(106),
    1,
    sym_comment,
    STATE(118),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(143),
    1,
    aux_sym_enumerator_repeat1,
    STATE(210),
    1,
    sym_enumerator,
    STATE(216),
    1,
    sym_enum_modifier,
    [5457] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(454),
    1,
    anon_sym_ATposition,
    ACTIONS(456),
    1,
    sym_identifier,
    ACTIONS(481),
    1,
    anon_sym_RBRACE,
    STATE(107),
    1,
    sym_comment,
    STATE(112),
    1,
    aux_sym_bitmask_repeat1,
    STATE(183),
    1,
    sym_bitmask_field,
    STATE(354),
    1,
    sym_position,
    [5482] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(458),
    1,
    sym_identifier,
    ACTIONS(483),
    1,
    anon_sym_RBRACE,
    STATE(104),
    1,
    aux_sym_interface_def_repeat3,
    STATE(108),
    1,
    sym_comment,
    STATE(168),
    1,
    sym_interface_function,
    STATE(290),
    1,
    sym_scoped_name,
    [5507] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(485),
    1,
    anon_sym_RBRACE,
    ACTIONS(487),
    1,
    anon_sym_default,
    ACTIONS(489),
    1,
    anon_sym_case,
    STATE(26),
    1,
    sym_case_label,
    STATE(109),
    1,
    sym_comment,
    STATE(121),
    1,
    aux_sym_union_def_repeat1,
    STATE(187),
    1,
    sym_case,
    [5532] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(491),
    3,
    anon_sym_LPAREN,
    anon_sym_SQUOTE,
    anon_sym_COLON_COLON,
    ACTIONS(493),
    3,
    anon_sym_L,
    sym_number_literal,
    sym_identifier,
    [5549] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(454),
    1,
    anon_sym_ATposition,
    ACTIONS(456),
    1,
    sym_identifier,
    ACTIONS(495),
    1,
    anon_sym_RBRACE,
    STATE(100),
    1,
    aux_sym_bitmask_repeat1,
    STATE(111),
    1,
    sym_comment,
    STATE(183),
    1,
    sym_bitmask_field,
    STATE(354),
    1,
    sym_position,
    [5574] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(497),
    1,
    anon_sym_RBRACE,
    ACTIONS(499),
    1,
    anon_sym_ATposition,
    ACTIONS(502),
    1,
    sym_identifier,
    STATE(183),
    1,
    sym_bitmask_field,
    STATE(354),
    1,
    sym_position,
    STATE(112),
    2,
    sym_comment,
    aux_sym_bitmask_repeat1,
    [5597] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(460),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(462),
    1,
    sym_identifier,
    STATE(113),
    1,
    sym_comment,
    STATE(122),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(143),
    1,
    aux_sym_enumerator_repeat1,
    STATE(216),
    1,
    sym_enum_modifier,
    STATE(228),
    1,
    sym_enumerator,
    [5622] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(395),
    1,
    anon_sym_RBRACE,
    ACTIONS(458),
    1,
    sym_identifier,
    STATE(104),
    1,
    aux_sym_interface_def_repeat3,
    STATE(114),
    1,
    sym_comment,
    STATE(168),
    1,
    sym_interface_function,
    STATE(290),
    1,
    sym_scoped_name,
    [5647] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(452),
    1,
    anon_sym_RBRACE,
    ACTIONS(454),
    1,
    anon_sym_ATposition,
    ACTIONS(456),
    1,
    sym_identifier,
    STATE(107),
    1,
    aux_sym_bitmask_repeat1,
    STATE(115),
    1,
    sym_comment,
    STATE(183),
    1,
    sym_bitmask_field,
    STATE(354),
    1,
    sym_position,
    [5672] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(410),
    1,
    anon_sym_RBRACE,
    ACTIONS(458),
    1,
    sym_identifier,
    STATE(104),
    1,
    aux_sym_interface_def_repeat3,
    STATE(116),
    1,
    sym_comment,
    STATE(168),
    1,
    sym_interface_function,
    STATE(290),
    1,
    sym_scoped_name,
    [5697] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(458),
    1,
    sym_identifier,
    ACTIONS(505),
    1,
    anon_sym_RBRACE,
    STATE(99),
    1,
    aux_sym_annotation_repeat1,
    STATE(117),
    1,
    sym_comment,
    STATE(178),
    1,
    sym_annotation_field,
    STATE(309),
    1,
    sym_scoped_name,
    [5722] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(460),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(462),
    1,
    sym_identifier,
    STATE(118),
    1,
    sym_comment,
    STATE(122),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(143),
    1,
    aux_sym_enumerator_repeat1,
    STATE(215),
    1,
    sym_enumerator,
    STATE(216),
    1,
    sym_enum_modifier,
    [5747] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(509),
    1,
    anon_sym_LBRACK,
    STATE(144),
    1,
    sym_fixed_array_size,
    STATE(119),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(507),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [5766] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(512),
    2,
    anon_sym_RPAREN,
    anon_sym_COLON_COLON,
    ACTIONS(514),
    4,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    sym_identifier,
    [5783] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(487),
    1,
    anon_sym_default,
    ACTIONS(489),
    1,
    anon_sym_case,
    ACTIONS(516),
    1,
    anon_sym_RBRACE,
    STATE(26),
    1,
    sym_case_label,
    STATE(121),
    1,
    sym_comment,
    STATE(124),
    1,
    aux_sym_union_def_repeat1,
    STATE(187),
    1,
    sym_case,
    [5808] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(518),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(521),
    1,
    sym_identifier,
    STATE(143),
    1,
    aux_sym_enumerator_repeat1,
    STATE(216),
    1,
    sym_enum_modifier,
    STATE(270),
    1,
    sym_enumerator,
    STATE(122),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [5831] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(123),
    1,
    sym_comment,
    ACTIONS(422),
    2,
    anon_sym_RPAREN,
    anon_sym_COLON_COLON,
    ACTIONS(426),
    4,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    sym_identifier,
    [5848] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(524),
    1,
    anon_sym_RBRACE,
    ACTIONS(526),
    1,
    anon_sym_default,
    ACTIONS(529),
    1,
    anon_sym_case,
    STATE(26),
    1,
    sym_case_label,
    STATE(187),
    1,
    sym_case,
    STATE(124),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [5871] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(458),
    1,
    sym_identifier,
    STATE(125),
    1,
    sym_comment,
    STATE(126),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(176),
    1,
    sym_scoped_name,
    STATE(233),
    1,
    sym_interface_name,
    [5893] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(532),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(535),
    1,
    sym_identifier,
    STATE(176),
    1,
    sym_scoped_name,
    STATE(287),
    1,
    sym_interface_name,
    STATE(126),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [5913] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(538),
    1,
    sym_identifier,
    STATE(127),
    1,
    sym_comment,
    STATE(151),
    1,
    sym_declarator,
    STATE(163),
    1,
    sym_declarators,
    STATE(184),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [5933] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(538),
    1,
    sym_identifier,
    STATE(128),
    1,
    sym_comment,
    STATE(151),
    1,
    sym_declarator,
    STATE(189),
    1,
    sym_declarators,
    STATE(184),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [5953] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(129),
    1,
    sym_comment,
    ACTIONS(294),
    5,
    anon_sym_LBRACE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    sym_identifier,
    anon_sym_GT,
    [5967] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(458),
    1,
    sym_identifier,
    STATE(125),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(130),
    1,
    sym_comment,
    STATE(176),
    1,
    sym_scoped_name,
    STATE(234),
    1,
    sym_interface_name,
    [5989] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(540),
    1,
    anon_sym_struct,
    STATE(131),
    1,
    sym_comment,
    STATE(136),
    1,
    aux_sym_struct_def_repeat1,
    STATE(180),
    1,
    sym_data_representation,
    [6011] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(132),
    1,
    sym_comment,
    ACTIONS(542),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6025] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(133),
    1,
    sym_comment,
    ACTIONS(544),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6039] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(134),
    1,
    sym_comment,
    ACTIONS(546),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6053] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(538),
    1,
    sym_identifier,
    STATE(135),
    1,
    sym_comment,
    STATE(170),
    1,
    sym_any_declarator,
    STATE(251),
    1,
    sym_any_declarators,
    STATE(230),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6073] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(548),
    1,
    anon_sym_struct,
    ACTIONS(550),
    1,
    sym_final,
    ACTIONS(553),
    1,
    anon_sym_ATdata_representation,
    STATE(180),
    1,
    sym_data_representation,
    STATE(136),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [6093] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(137),
    1,
    sym_comment,
    ACTIONS(280),
    5,
    anon_sym_LBRACE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    sym_identifier,
    anon_sym_GT,
    [6107] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(138),
    1,
    sym_comment,
    ACTIONS(556),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6121] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(558),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(561),
    1,
    sym_identifier,
    STATE(216),
    1,
    sym_enum_modifier,
    STATE(139),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [6138] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(538),
    1,
    sym_identifier,
    STATE(140),
    1,
    sym_comment,
    STATE(193),
    1,
    sym_any_declarator,
    STATE(230),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6155] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(565),
    1,
    anon_sym_COMMA,
    ACTIONS(563),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(141),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [6170] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(568),
    1,
    anon_sym_RPAREN,
    ACTIONS(570),
    1,
    anon_sym_XCDR,
    ACTIONS(572),
    1,
    anon_sym_XCDR2,
    STATE(142),
    1,
    sym_comment,
    STATE(148),
    1,
    aux_sym_data_representation_repeat1,
    [6189] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(460),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(574),
    1,
    sym_identifier,
    STATE(139),
    1,
    aux_sym_enumerator_repeat1,
    STATE(143),
    1,
    sym_comment,
    STATE(216),
    1,
    sym_enum_modifier,
    [6208] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(144),
    1,
    sym_comment,
    ACTIONS(576),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [6221] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(282),
    1,
    sym_identifier,
    ACTIONS(578),
    1,
    anon_sym_SEMI,
    ACTIONS(580),
    1,
    anon_sym_default,
    STATE(145),
    1,
    sym_comment,
    STATE(272),
    1,
    sym_default,
    [6240] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(584),
    1,
    anon_sym_COMMA,
    STATE(146),
    1,
    sym_comment,
    ACTIONS(582),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6255] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(147),
    1,
    sym_comment,
    ACTIONS(586),
    2,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    ACTIONS(588),
    2,
    anon_sym_attribute,
    sym_identifier,
    [6270] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(590),
    1,
    anon_sym_RPAREN,
    ACTIONS(592),
    1,
    anon_sym_XCDR,
    ACTIONS(595),
    1,
    anon_sym_XCDR2,
    STATE(148),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [6287] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(600),
    1,
    anon_sym_COMMA,
    STATE(149),
    1,
    sym_comment,
    ACTIONS(598),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6302] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(150),
    1,
    sym_comment,
    ACTIONS(602),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [6315] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(606),
    1,
    anon_sym_COMMA,
    STATE(151),
    1,
    sym_comment,
    STATE(157),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(604),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [6332] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(538),
    1,
    sym_identifier,
    STATE(152),
    1,
    sym_comment,
    STATE(349),
    1,
    sym_declarator,
    STATE(184),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6349] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(153),
    1,
    sym_comment,
    ACTIONS(608),
    2,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    ACTIONS(610),
    2,
    anon_sym_attribute,
    sym_identifier,
    [6364] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(614),
    1,
    anon_sym_LBRACE,
    ACTIONS(616),
    1,
    anon_sym_COLON,
    STATE(154),
    1,
    sym_comment,
    ACTIONS(612),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6381] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(618),
    1,
    anon_sym_SEMI,
    ACTIONS(620),
    1,
    anon_sym_LBRACE,
    ACTIONS(622),
    1,
    anon_sym_COLON,
    STATE(155),
    1,
    sym_comment,
    STATE(260),
    1,
    sym_interface_inheritance_spec,
    [6400] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(538),
    1,
    sym_identifier,
    STATE(156),
    1,
    sym_comment,
    STATE(173),
    1,
    sym_declarator,
    STATE(184),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6417] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(606),
    1,
    anon_sym_COMMA,
    STATE(141),
    1,
    aux_sym_declarators_repeat1,
    STATE(157),
    1,
    sym_comment,
    ACTIONS(624),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [6434] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(626),
    1,
    anon_sym_SEMI,
    ACTIONS(628),
    1,
    anon_sym_switch,
    ACTIONS(630),
    1,
    sym_identifier,
    STATE(158),
    1,
    sym_comment,
    [6450] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(632),
    1,
    anon_sym_SEMI,
    ACTIONS(634),
    1,
    anon_sym_COMMA,
    STATE(159),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [6464] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(160),
    1,
    sym_comment,
    ACTIONS(637),
    3,
    anon_sym_RPAREN,
    sym_identifier,
    anon_sym_GT,
    [6476] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(161),
    1,
    sym_comment,
    ACTIONS(639),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [6488] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(458),
    1,
    sym_identifier,
    STATE(162),
    1,
    sym_comment,
    STATE(204),
    1,
    sym_scoped_name,
    [6504] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(641),
    1,
    anon_sym_SEMI,
    ACTIONS(643),
    1,
    anon_sym_default,
    STATE(163),
    1,
    sym_comment,
    STATE(307),
    1,
    sym_default,
    [6520] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(620),
    1,
    anon_sym_LBRACE,
    ACTIONS(622),
    1,
    anon_sym_COLON,
    STATE(164),
    1,
    sym_comment,
    STATE(260),
    1,
    sym_interface_inheritance_spec,
    [6536] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(647),
    1,
    anon_sym_LT,
    STATE(165),
    1,
    sym_comment,
    ACTIONS(645),
    2,
    sym_identifier,
    anon_sym_GT,
    [6550] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(166),
    1,
    sym_comment,
    ACTIONS(649),
    3,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [6562] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(167),
    1,
    sym_comment,
    ACTIONS(651),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6574] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(168),
    1,
    sym_comment,
    ACTIONS(653),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6586] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(655),
    1,
    anon_sym_SEMI,
    ACTIONS(657),
    1,
    anon_sym_raises,
    STATE(169),
    1,
    sym_comment,
    STATE(317),
    1,
    sym_interface_except,
    [6602] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(659),
    1,
    anon_sym_SEMI,
    ACTIONS(661),
    1,
    anon_sym_COMMA,
    STATE(170),
    1,
    sym_comment,
    STATE(174),
    1,
    aux_sym_any_declarators_repeat1,
    [6618] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(171),
    1,
    sym_comment,
    ACTIONS(582),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6630] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(362),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(663),
    1,
    sym_identifier,
    STATE(172),
    1,
    sym_comment,
    STATE(218),
    1,
    sym_scoped_name,
    [6646] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(173),
    1,
    sym_comment,
    ACTIONS(563),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [6658] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(661),
    1,
    anon_sym_COMMA,
    ACTIONS(665),
    1,
    anon_sym_SEMI,
    STATE(159),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(174),
    1,
    sym_comment,
    [6674] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(669),
    1,
    anon_sym_XCDR,
    STATE(175),
    1,
    sym_comment,
    ACTIONS(667),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [6688] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(673),
    1,
    sym_identifier,
    STATE(176),
    1,
    sym_comment,
    ACTIONS(671),
    2,
    anon_sym_LBRACE,
    anon_sym_COMMA,
    [6702] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(458),
    1,
    sym_identifier,
    STATE(177),
    1,
    sym_comment,
    STATE(239),
    1,
    sym_scoped_name,
    [6718] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(178),
    1,
    sym_comment,
    ACTIONS(675),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6730] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(179),
    1,
    sym_comment,
    ACTIONS(677),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6742] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(180),
    1,
    sym_comment,
    ACTIONS(679),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [6754] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(181),
    1,
    sym_comment,
    ACTIONS(681),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6766] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(182),
    1,
    sym_comment,
    ACTIONS(683),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6778] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(183),
    1,
    sym_comment,
    ACTIONS(685),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6790] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(184),
    1,
    sym_comment,
    ACTIONS(687),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [6802] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(185),
    1,
    sym_comment,
    ACTIONS(689),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [6814] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(657),
    1,
    anon_sym_raises,
    ACTIONS(691),
    1,
    anon_sym_SEMI,
    STATE(186),
    1,
    sym_comment,
    STATE(336),
    1,
    sym_interface_except,
    [6830] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(187),
    1,
    sym_comment,
    ACTIONS(693),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [6842] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(458),
    1,
    sym_identifier,
    STATE(188),
    1,
    sym_comment,
    STATE(200),
    1,
    sym_scoped_name,
    [6858] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(643),
    1,
    anon_sym_default,
    ACTIONS(695),
    1,
    anon_sym_SEMI,
    STATE(189),
    1,
    sym_comment,
    STATE(266),
    1,
    sym_default,
    [6874] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(570),
    1,
    anon_sym_XCDR,
    ACTIONS(572),
    1,
    anon_sym_XCDR2,
    STATE(142),
    1,
    aux_sym_data_representation_repeat1,
    STATE(190),
    1,
    sym_comment,
    [6890] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(191),
    1,
    sym_comment,
    ACTIONS(697),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6902] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(192),
    1,
    sym_comment,
    ACTIONS(699),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6914] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(193),
    1,
    sym_comment,
    ACTIONS(632),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [6925] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(194),
    1,
    sym_comment,
    ACTIONS(701),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6936] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(703),
    1,
    sym_identifier,
    STATE(195),
    1,
    sym_comment,
    STATE(279),
    1,
    sym_simple_declarator,
    [6949] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(280),
    1,
    aux_sym_char_literal_token1,
    ACTIONS(282),
    1,
    sym_identifier,
    STATE(196),
    1,
    sym_comment,
    [6962] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(673),
    1,
    sym_identifier,
    ACTIONS(705),
    1,
    anon_sym_GT,
    STATE(197),
    1,
    sym_comment,
    [6975] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(294),
    1,
    aux_sym_char_literal_token1,
    ACTIONS(296),
    1,
    sym_identifier,
    STATE(198),
    1,
    sym_comment,
    [6988] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(199),
    1,
    sym_comment,
    ACTIONS(707),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6999] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(673),
    1,
    sym_identifier,
    ACTIONS(709),
    1,
    anon_sym_RPAREN,
    STATE(200),
    1,
    sym_comment,
    [7012] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(280),
    1,
    sym_identifier,
    ACTIONS(711),
    1,
    anon_sym_LPAREN,
    STATE(201),
    1,
    sym_comment,
    [7025] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(202),
    1,
    sym_comment,
    ACTIONS(713),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7036] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(203),
    1,
    sym_comment,
    ACTIONS(715),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7047] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(673),
    1,
    sym_identifier,
    ACTIONS(717),
    1,
    anon_sym_LBRACE,
    STATE(204),
    1,
    sym_comment,
    [7060] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(366),
    1,
    anon_sym_interface,
    STATE(205),
    1,
    sym_comment,
    STATE(302),
    1,
    sym_interface_header,
    [7073] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(206),
    1,
    sym_comment,
    ACTIONS(719),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [7084] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(207),
    1,
    sym_comment,
    ACTIONS(721),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [7095] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(208),
    1,
    sym_comment,
    ACTIONS(723),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7106] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(366),
    1,
    anon_sym_interface,
    STATE(209),
    1,
    sym_comment,
    STATE(244),
    1,
    sym_interface_header,
    [7119] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(725),
    1,
    anon_sym_RBRACE,
    ACTIONS(727),
    1,
    anon_sym_COMMA,
    STATE(210),
    1,
    sym_comment,
    [7132] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(211),
    1,
    sym_comment,
    ACTIONS(729),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7143] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(212),
    1,
    sym_comment,
    ACTIONS(731),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7154] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(213),
    1,
    sym_comment,
    ACTIONS(733),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7165] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(214),
    1,
    sym_comment,
    ACTIONS(735),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [7176] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(727),
    1,
    anon_sym_COMMA,
    ACTIONS(737),
    1,
    anon_sym_RBRACE,
    STATE(215),
    1,
    sym_comment,
    [7189] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(216),
    1,
    sym_comment,
    ACTIONS(739),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [7200] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(217),
    1,
    sym_comment,
    ACTIONS(741),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [7211] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(743),
    1,
    aux_sym_char_literal_token1,
    ACTIONS(745),
    1,
    sym_identifier,
    STATE(218),
    1,
    sym_comment,
    [7224] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(219),
    1,
    sym_comment,
    ACTIONS(747),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7235] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(220),
    1,
    sym_comment,
    ACTIONS(749),
    2,
    sym_identifier,
    anon_sym_GT,
    [7246] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(221),
    1,
    sym_comment,
    ACTIONS(751),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7257] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(673),
    1,
    sym_identifier,
    ACTIONS(753),
    1,
    anon_sym_RPAREN,
    STATE(222),
    1,
    sym_comment,
    [7270] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(223),
    1,
    sym_comment,
    ACTIONS(755),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7281] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    ACTIONS(757),
    1,
    aux_sym_char_literal_token1,
    STATE(224),
    1,
    sym_comment,
    [7294] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(225),
    1,
    sym_comment,
    ACTIONS(759),
    2,
    sym_identifier,
    anon_sym_GT,
    [7305] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(226),
    1,
    sym_comment,
    ACTIONS(761),
    2,
    anon_sym_COLON_COLON,
    sym_identifier,
    [7316] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(763),
    1,
    anon_sym_LBRACE,
    ACTIONS(765),
    1,
    anon_sym_COLON,
    STATE(227),
    1,
    sym_comment,
    [7329] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(727),
    1,
    anon_sym_COMMA,
    ACTIONS(767),
    1,
    anon_sym_RBRACE,
    STATE(228),
    1,
    sym_comment,
    [7342] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(229),
    1,
    sym_comment,
    ACTIONS(769),
    2,
    sym_identifier,
    anon_sym_GT,
    [7353] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(230),
    1,
    sym_comment,
    ACTIONS(771),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [7364] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(773),
    2,
    sym_identifier,
    anon_sym_GT,
    [7375] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(232),
    1,
    sym_comment,
    ACTIONS(775),
    2,
    anon_sym_COLON_COLON,
    sym_identifier,
    [7386] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(777),
    1,
    anon_sym_LBRACE,
    ACTIONS(779),
    1,
    anon_sym_COMMA,
    STATE(233),
    1,
    sym_comment,
    [7399] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(779),
    1,
    anon_sym_COMMA,
    ACTIONS(781),
    1,
    anon_sym_LBRACE,
    STATE(234),
    1,
    sym_comment,
    [7412] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(235),
    1,
    sym_comment,
    ACTIONS(783),
    2,
    sym_identifier,
    anon_sym_GT,
    [7423] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(236),
    1,
    sym_comment,
    ACTIONS(785),
    2,
    sym_identifier,
    anon_sym_GT,
    [7434] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(787),
    2,
    sym_identifier,
    anon_sym_GT,
    [7445] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(238),
    1,
    sym_comment,
    ACTIONS(789),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7456] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(673),
    1,
    sym_identifier,
    ACTIONS(791),
    1,
    anon_sym_LBRACE,
    STATE(239),
    1,
    sym_comment,
    [7469] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(240),
    1,
    sym_comment,
    ACTIONS(705),
    2,
    sym_identifier,
    anon_sym_GT,
    [7480] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(793),
    1,
    anon_sym_SQUOTE,
    STATE(241),
    1,
    sym_comment,
    [7490] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(795),
    1,
    anon_sym_SEMI,
    STATE(242),
    1,
    sym_comment,
    [7500] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(797),
    1,
    anon_sym_name,
    STATE(243),
    1,
    sym_comment,
    [7510] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(799),
    1,
    anon_sym_LBRACE,
    STATE(244),
    1,
    sym_comment,
    [7520] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(801),
    1,
    sym_identifier,
    STATE(245),
    1,
    sym_comment,
    [7530] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(803),
    1,
    anon_sym_SEMI,
    STATE(246),
    1,
    sym_comment,
    [7540] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(705),
    1,
    sym_identifier,
    STATE(247),
    1,
    sym_comment,
    [7550] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(805),
    1,
    anon_sym_RBRACK,
    STATE(248),
    1,
    sym_comment,
    [7560] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(807),
    1,
    sym_identifier,
    STATE(249),
    1,
    sym_comment,
    [7570] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(809),
    1,
    anon_sym_SEMI,
    STATE(250),
    1,
    sym_comment,
    [7580] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(811),
    1,
    anon_sym_SEMI,
    STATE(251),
    1,
    sym_comment,
    [7590] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(813),
    1,
    anon_sym_RPAREN,
    STATE(252),
    1,
    sym_comment,
    [7600] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(815),
    1,
    anon_sym_RPAREN,
    STATE(253),
    1,
    sym_comment,
    [7610] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(817),
    1,
    anon_sym_SEMI,
    STATE(254),
    1,
    sym_comment,
    [7620] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(819),
    1,
    anon_sym_LT,
    STATE(255),
    1,
    sym_comment,
    [7630] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(821),
    1,
    anon_sym_COMMA,
    STATE(256),
    1,
    sym_comment,
    [7640] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(823),
    1,
    anon_sym_GT,
    STATE(257),
    1,
    sym_comment,
    [7650] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(825),
    1,
    anon_sym_SEMI,
    STATE(258),
    1,
    sym_comment,
    [7660] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(827),
    1,
    anon_sym_LT,
    STATE(259),
    1,
    sym_comment,
    [7670] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(829),
    1,
    anon_sym_LBRACE,
    STATE(260),
    1,
    sym_comment,
    [7680] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(831),
    1,
    anon_sym_DQUOTE,
    STATE(261),
    1,
    sym_comment,
    [7690] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(833),
    1,
    anon_sym_EQ,
    STATE(262),
    1,
    sym_comment,
    [7700] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(835),
    1,
    anon_sym_EQ,
    STATE(263),
    1,
    sym_comment,
    [7710] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(673),
    1,
    sym_identifier,
    STATE(264),
    1,
    sym_comment,
    [7720] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(837),
    1,
    anon_sym_EQ,
    STATE(265),
    1,
    sym_comment,
    [7730] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(839),
    1,
    anon_sym_SEMI,
    STATE(266),
    1,
    sym_comment,
    [7740] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(841),
    1,
    anon_sym_RPAREN,
    STATE(267),
    1,
    sym_comment,
    [7750] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(843),
    1,
    anon_sym_LBRACE,
    STATE(268),
    1,
    sym_comment,
    [7760] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(845),
    1,
    anon_sym_LBRACE,
    STATE(269),
    1,
    sym_comment,
    [7770] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(727),
    1,
    anon_sym_COMMA,
    STATE(270),
    1,
    sym_comment,
    [7780] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(847),
    1,
    anon_sym_SEMI,
    STATE(271),
    1,
    sym_comment,
    [7790] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(849),
    1,
    anon_sym_SEMI,
    STATE(272),
    1,
    sym_comment,
    [7800] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(851),
    1,
    anon_sym_LBRACE,
    STATE(273),
    1,
    sym_comment,
    [7810] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(853),
    1,
    sym_identifier,
    STATE(274),
    1,
    sym_comment,
    [7820] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(855),
    1,
    anon_sym_LBRACE,
    STATE(275),
    1,
    sym_comment,
    [7830] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(857),
    1,
    anon_sym_SEMI,
    STATE(276),
    1,
    sym_comment,
    [7840] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(859),
    1,
    anon_sym_SQUOTE,
    STATE(277),
    1,
    sym_comment,
    [7850] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(861),
    1,
    anon_sym_LBRACE,
    STATE(278),
    1,
    sym_comment,
    [7860] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(863),
    1,
    anon_sym_SEMI,
    STATE(279),
    1,
    sym_comment,
    [7870] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(434),
    1,
    anon_sym_SEMI,
    STATE(280),
    1,
    sym_comment,
    [7880] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(865),
    1,
    anon_sym_LBRACE,
    STATE(281),
    1,
    sym_comment,
    [7890] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(867),
    1,
    sym_identifier,
    STATE(282),
    1,
    sym_comment,
    [7900] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(869),
    1,
    aux_sym_char_literal_token1,
    STATE(283),
    1,
    sym_comment,
    [7910] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(871),
    1,
    anon_sym_RPAREN,
    STATE(284),
    1,
    sym_comment,
    [7920] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(873),
    1,
    anon_sym_GT,
    STATE(285),
    1,
    sym_comment,
    [7930] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(875),
    1,
    anon_sym_GT,
    STATE(286),
    1,
    sym_comment,
    [7940] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(779),
    1,
    anon_sym_COMMA,
    STATE(287),
    1,
    sym_comment,
    [7950] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(877),
    1,
    anon_sym_SEMI,
    STATE(288),
    1,
    sym_comment,
    [7960] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(879),
    1,
    sym_identifier,
    STATE(289),
    1,
    sym_comment,
    [7970] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(881),
    1,
    sym_identifier,
    STATE(290),
    1,
    sym_comment,
    [7980] = 3,
    ACTIONS(883),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(885),
    1,
    aux_sym_comment_token1,
    STATE(291),
    1,
    sym_comment,
    [7990] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(887),
    1,
    aux_sym_char_literal_token1,
    STATE(292),
    1,
    sym_comment,
    [8000] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(889),
    1,
    anon_sym_SQUOTE,
    STATE(293),
    1,
    sym_comment,
    [8010] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(891),
    1,
    anon_sym_SEMI,
    STATE(294),
    1,
    sym_comment,
    [8020] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(893),
    1,
    anon_sym_bitmask,
    STATE(295),
    1,
    sym_comment,
    [8030] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(895),
    1,
    anon_sym_RPAREN,
    STATE(296),
    1,
    sym_comment,
    [8040] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(897),
    1,
    aux_sym_bit_bound_token1,
    STATE(297),
    1,
    sym_comment,
    [8050] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(899),
    1,
    anon_sym_GT,
    STATE(298),
    1,
    sym_comment,
    [8060] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(901),
    1,
    anon_sym_LBRACE,
    STATE(299),
    1,
    sym_comment,
    [8070] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(903),
    1,
    anon_sym_name,
    STATE(300),
    1,
    sym_comment,
    [8080] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(905),
    1,
    anon_sym_enum,
    STATE(301),
    1,
    sym_comment,
    [8090] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(907),
    1,
    anon_sym_LBRACE,
    STATE(302),
    1,
    sym_comment,
    [8100] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(909),
    1,
    anon_sym_SEMI,
    STATE(303),
    1,
    sym_comment,
    [8110] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(911),
    1,
    anon_sym_SEMI,
    STATE(304),
    1,
    sym_comment,
    [8120] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(913),
    1,
    anon_sym_SEMI,
    STATE(305),
    1,
    sym_comment,
    [8130] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(915),
    1,
    ts_builtin_sym_end,
    STATE(306),
    1,
    sym_comment,
    [8140] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(917),
    1,
    anon_sym_SEMI,
    STATE(307),
    1,
    sym_comment,
    [8150] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(919),
    1,
    anon_sym_RPAREN,
    STATE(308),
    1,
    sym_comment,
    [8160] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(921),
    1,
    sym_identifier,
    STATE(309),
    1,
    sym_comment,
    [8170] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(923),
    1,
    anon_sym_LPAREN,
    STATE(310),
    1,
    sym_comment,
    [8180] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    anon_sym_SEMI,
    STATE(311),
    1,
    sym_comment,
    [8190] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(927),
    1,
    anon_sym_LPAREN,
    STATE(312),
    1,
    sym_comment,
    [8200] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(753),
    1,
    anon_sym_RPAREN,
    STATE(313),
    1,
    sym_comment,
    [8210] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(929),
    1,
    anon_sym_RPAREN,
    STATE(314),
    1,
    sym_comment,
    [8220] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(931),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(315),
    1,
    sym_comment,
    [8230] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(933),
    1,
    anon_sym_LPAREN,
    STATE(316),
    1,
    sym_comment,
    [8240] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(691),
    1,
    anon_sym_SEMI,
    STATE(317),
    1,
    sym_comment,
    [8250] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(935),
    1,
    sym_identifier,
    STATE(318),
    1,
    sym_comment,
    [8260] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(937),
    1,
    anon_sym_LPAREN,
    STATE(319),
    1,
    sym_comment,
    [8270] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(939),
    1,
    anon_sym_SEMI,
    STATE(320),
    1,
    sym_comment,
    [8280] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(941),
    1,
    anon_sym_LPAREN,
    STATE(321),
    1,
    sym_comment,
    [8290] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(943),
    1,
    aux_sym_bit_bound_token1,
    STATE(322),
    1,
    sym_comment,
    [8300] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(945),
    1,
    anon_sym_SEMI,
    STATE(323),
    1,
    sym_comment,
    [8310] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(947),
    1,
    anon_sym_SEMI,
    STATE(324),
    1,
    sym_comment,
    [8320] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(949),
    1,
    sym_identifier,
    STATE(325),
    1,
    sym_comment,
    [8330] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(951),
    1,
    anon_sym_LBRACE,
    STATE(326),
    1,
    sym_comment,
    [8340] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(953),
    1,
    anon_sym_COLON,
    STATE(327),
    1,
    sym_comment,
    [8350] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(955),
    1,
    sym_identifier,
    STATE(328),
    1,
    sym_comment,
    [8360] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(957),
    1,
    anon_sym_SEMI,
    STATE(329),
    1,
    sym_comment,
    [8370] = 3,
    ACTIONS(883),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(959),
    1,
    aux_sym_predefine_token1,
    STATE(330),
    1,
    sym_comment,
    [8380] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(961),
    1,
    anon_sym_LBRACE,
    STATE(331),
    1,
    sym_comment,
    [8390] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(963),
    1,
    sym_identifier,
    STATE(332),
    1,
    sym_comment,
    [8400] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(965),
    1,
    sym_identifier,
    STATE(333),
    1,
    sym_comment,
    [8410] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(967),
    1,
    sym_identifier,
    STATE(334),
    1,
    sym_comment,
    [8420] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(969),
    1,
    sym_identifier,
    STATE(335),
    1,
    sym_comment,
    [8430] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(971),
    1,
    anon_sym_SEMI,
    STATE(336),
    1,
    sym_comment,
    [8440] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(973),
    1,
    anon_sym_LPAREN,
    STATE(337),
    1,
    sym_comment,
    [8450] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(975),
    1,
    anon_sym_enum,
    STATE(338),
    1,
    sym_comment,
    [8460] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(977),
    1,
    anon_sym_COLON,
    STATE(339),
    1,
    sym_comment,
    [8470] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(979),
    1,
    anon_sym_SEMI,
    STATE(340),
    1,
    sym_comment,
    [8480] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(935),
    1,
    sym_identifier,
    STATE(341),
    1,
    sym_comment,
    [8490] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(981),
    1,
    anon_sym_SEMI,
    STATE(342),
    1,
    sym_comment,
    [8500] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(983),
    1,
    sym_identifier,
    STATE(343),
    1,
    sym_comment,
    [8510] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(985),
    1,
    anon_sym_LPAREN,
    STATE(344),
    1,
    sym_comment,
    [8520] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(987),
    1,
    sym_identifier,
    STATE(345),
    1,
    sym_comment,
    [8530] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(989),
    1,
    sym_identifier,
    STATE(346),
    1,
    sym_comment,
    [8540] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(991),
    1,
    sym_identifier,
    STATE(347),
    1,
    sym_comment,
    [8550] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(993),
    1,
    anon_sym_SEMI,
    STATE(348),
    1,
    sym_comment,
    [8560] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(995),
    1,
    anon_sym_SEMI,
    STATE(349),
    1,
    sym_comment,
    [8570] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(997),
    1,
    anon_sym_SEMI,
    STATE(350),
    1,
    sym_comment,
    [8580] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(999),
    1,
    anon_sym_bitmask,
    STATE(351),
    1,
    sym_comment,
    [8590] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1001),
    1,
    aux_sym_char_literal_token1,
    STATE(352),
    1,
    sym_comment,
    [8600] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1003),
    1,
    aux_sym_char_literal_token1,
    STATE(353),
    1,
    sym_comment,
    [8610] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1005),
    1,
    sym_identifier,
    STATE(354),
    1,
    sym_comment,
    [8620] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1007),
    1,
    sym_identifier,
    STATE(355),
    1,
    sym_comment,
    [8630] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(288),
    1,
    sym_identifier,
    STATE(356),
    1,
    sym_comment,
    [8640] = 1,
    ACTIONS(1009),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(2)] = 0,
    [SMALL_STATE(3)] = 109,
    [SMALL_STATE(4)] = 216,
    [SMALL_STATE(5)] = 325,
    [SMALL_STATE(6)] = 434,
    [SMALL_STATE(7)] = 543,
    [SMALL_STATE(8)] = 652,
    [SMALL_STATE(9)] = 761,
    [SMALL_STATE(10)] = 870,
    [SMALL_STATE(11)] = 979,
    [SMALL_STATE(12)] = 1088,
    [SMALL_STATE(13)] = 1197,
    [SMALL_STATE(14)] = 1305,
    [SMALL_STATE(15)] = 1405,
    [SMALL_STATE(16)] = 1475,
    [SMALL_STATE(17)] = 1597,
    [SMALL_STATE(18)] = 1720,
    [SMALL_STATE(19)] = 1843,
    [SMALL_STATE(20)] = 1966,
    [SMALL_STATE(21)] = 2048,
    [SMALL_STATE(22)] = 2105,
    [SMALL_STATE(23)] = 2162,
    [SMALL_STATE(24)] = 2219,
    [SMALL_STATE(25)] = 2276,
    [SMALL_STATE(26)] = 2333,
    [SMALL_STATE(27)] = 2412,
    [SMALL_STATE(28)] = 2468,
    [SMALL_STATE(29)] = 2524,
    [SMALL_STATE(30)] = 2580,
    [SMALL_STATE(31)] = 2656,
    [SMALL_STATE(32)] = 2712,
    [SMALL_STATE(33)] = 2773,
    [SMALL_STATE(34)] = 2821,
    [SMALL_STATE(35)] = 2869,
    [SMALL_STATE(36)] = 2926,
    [SMALL_STATE(37)] = 2998,
    [SMALL_STATE(38)] = 3070,
    [SMALL_STATE(39)] = 3142,
    [SMALL_STATE(40)] = 3214,
    [SMALL_STATE(41)] = 3286,
    [SMALL_STATE(42)] = 3355,
    [SMALL_STATE(43)] = 3386,
    [SMALL_STATE(44)] = 3455,
    [SMALL_STATE(45)] = 3486,
    [SMALL_STATE(46)] = 3555,
    [SMALL_STATE(47)] = 3586,
    [SMALL_STATE(48)] = 3655,
    [SMALL_STATE(49)] = 3686,
    [SMALL_STATE(50)] = 3717,
    [SMALL_STATE(51)] = 3786,
    [SMALL_STATE(52)] = 3817,
    [SMALL_STATE(53)] = 3880,
    [SMALL_STATE(54)] = 3940,
    [SMALL_STATE(55)] = 3997,
    [SMALL_STATE(56)] = 4025,
    [SMALL_STATE(57)] = 4055,
    [SMALL_STATE(58)] = 4085,
    [SMALL_STATE(59)] = 4113,
    [SMALL_STATE(60)] = 4167,
    [SMALL_STATE(61)] = 4194,
    [SMALL_STATE(62)] = 4221,
    [SMALL_STATE(63)] = 4272,
    [SMALL_STATE(64)] = 4299,
    [SMALL_STATE(65)] = 4330,
    [SMALL_STATE(66)] = 4357,
    [SMALL_STATE(67)] = 4384,
    [SMALL_STATE(68)] = 4411,
    [SMALL_STATE(69)] = 4438,
    [SMALL_STATE(70)] = 4465,
    [SMALL_STATE(71)] = 4492,
    [SMALL_STATE(72)] = 4523,
    [SMALL_STATE(73)] = 4571,
    [SMALL_STATE(74)] = 4597,
    [SMALL_STATE(75)] = 4623,
    [SMALL_STATE(76)] = 4647,
    [SMALL_STATE(77)] = 4671,
    [SMALL_STATE(78)] = 4704,
    [SMALL_STATE(79)] = 4739,
    [SMALL_STATE(80)] = 4774,
    [SMALL_STATE(81)] = 4807,
    [SMALL_STATE(82)] = 4838,
    [SMALL_STATE(83)] = 4872,
    [SMALL_STATE(84)] = 4892,
    [SMALL_STATE(85)] = 4912,
    [SMALL_STATE(86)] = 4946,
    [SMALL_STATE(87)] = 4980,
    [SMALL_STATE(88)] = 5008,
    [SMALL_STATE(89)] = 5042,
    [SMALL_STATE(90)] = 5076,
    [SMALL_STATE(91)] = 5110,
    [SMALL_STATE(92)] = 5129,
    [SMALL_STATE(93)] = 5148,
    [SMALL_STATE(94)] = 5166,
    [SMALL_STATE(95)] = 5186,
    [SMALL_STATE(96)] = 5206,
    [SMALL_STATE(97)] = 5227,
    [SMALL_STATE(98)] = 5244,
    [SMALL_STATE(99)] = 5265,
    [SMALL_STATE(100)] = 5288,
    [SMALL_STATE(101)] = 5313,
    [SMALL_STATE(102)] = 5338,
    [SMALL_STATE(103)] = 5363,
    [SMALL_STATE(104)] = 5384,
    [SMALL_STATE(105)] = 5407,
    [SMALL_STATE(106)] = 5432,
    [SMALL_STATE(107)] = 5457,
    [SMALL_STATE(108)] = 5482,
    [SMALL_STATE(109)] = 5507,
    [SMALL_STATE(110)] = 5532,
    [SMALL_STATE(111)] = 5549,
    [SMALL_STATE(112)] = 5574,
    [SMALL_STATE(113)] = 5597,
    [SMALL_STATE(114)] = 5622,
    [SMALL_STATE(115)] = 5647,
    [SMALL_STATE(116)] = 5672,
    [SMALL_STATE(117)] = 5697,
    [SMALL_STATE(118)] = 5722,
    [SMALL_STATE(119)] = 5747,
    [SMALL_STATE(120)] = 5766,
    [SMALL_STATE(121)] = 5783,
    [SMALL_STATE(122)] = 5808,
    [SMALL_STATE(123)] = 5831,
    [SMALL_STATE(124)] = 5848,
    [SMALL_STATE(125)] = 5871,
    [SMALL_STATE(126)] = 5893,
    [SMALL_STATE(127)] = 5913,
    [SMALL_STATE(128)] = 5933,
    [SMALL_STATE(129)] = 5953,
    [SMALL_STATE(130)] = 5967,
    [SMALL_STATE(131)] = 5989,
    [SMALL_STATE(132)] = 6011,
    [SMALL_STATE(133)] = 6025,
    [SMALL_STATE(134)] = 6039,
    [SMALL_STATE(135)] = 6053,
    [SMALL_STATE(136)] = 6073,
    [SMALL_STATE(137)] = 6093,
    [SMALL_STATE(138)] = 6107,
    [SMALL_STATE(139)] = 6121,
    [SMALL_STATE(140)] = 6138,
    [SMALL_STATE(141)] = 6155,
    [SMALL_STATE(142)] = 6170,
    [SMALL_STATE(143)] = 6189,
    [SMALL_STATE(144)] = 6208,
    [SMALL_STATE(145)] = 6221,
    [SMALL_STATE(146)] = 6240,
    [SMALL_STATE(147)] = 6255,
    [SMALL_STATE(148)] = 6270,
    [SMALL_STATE(149)] = 6287,
    [SMALL_STATE(150)] = 6302,
    [SMALL_STATE(151)] = 6315,
    [SMALL_STATE(152)] = 6332,
    [SMALL_STATE(153)] = 6349,
    [SMALL_STATE(154)] = 6364,
    [SMALL_STATE(155)] = 6381,
    [SMALL_STATE(156)] = 6400,
    [SMALL_STATE(157)] = 6417,
    [SMALL_STATE(158)] = 6434,
    [SMALL_STATE(159)] = 6450,
    [SMALL_STATE(160)] = 6464,
    [SMALL_STATE(161)] = 6476,
    [SMALL_STATE(162)] = 6488,
    [SMALL_STATE(163)] = 6504,
    [SMALL_STATE(164)] = 6520,
    [SMALL_STATE(165)] = 6536,
    [SMALL_STATE(166)] = 6550,
    [SMALL_STATE(167)] = 6562,
    [SMALL_STATE(168)] = 6574,
    [SMALL_STATE(169)] = 6586,
    [SMALL_STATE(170)] = 6602,
    [SMALL_STATE(171)] = 6618,
    [SMALL_STATE(172)] = 6630,
    [SMALL_STATE(173)] = 6646,
    [SMALL_STATE(174)] = 6658,
    [SMALL_STATE(175)] = 6674,
    [SMALL_STATE(176)] = 6688,
    [SMALL_STATE(177)] = 6702,
    [SMALL_STATE(178)] = 6718,
    [SMALL_STATE(179)] = 6730,
    [SMALL_STATE(180)] = 6742,
    [SMALL_STATE(181)] = 6754,
    [SMALL_STATE(182)] = 6766,
    [SMALL_STATE(183)] = 6778,
    [SMALL_STATE(184)] = 6790,
    [SMALL_STATE(185)] = 6802,
    [SMALL_STATE(186)] = 6814,
    [SMALL_STATE(187)] = 6830,
    [SMALL_STATE(188)] = 6842,
    [SMALL_STATE(189)] = 6858,
    [SMALL_STATE(190)] = 6874,
    [SMALL_STATE(191)] = 6890,
    [SMALL_STATE(192)] = 6902,
    [SMALL_STATE(193)] = 6914,
    [SMALL_STATE(194)] = 6925,
    [SMALL_STATE(195)] = 6936,
    [SMALL_STATE(196)] = 6949,
    [SMALL_STATE(197)] = 6962,
    [SMALL_STATE(198)] = 6975,
    [SMALL_STATE(199)] = 6988,
    [SMALL_STATE(200)] = 6999,
    [SMALL_STATE(201)] = 7012,
    [SMALL_STATE(202)] = 7025,
    [SMALL_STATE(203)] = 7036,
    [SMALL_STATE(204)] = 7047,
    [SMALL_STATE(205)] = 7060,
    [SMALL_STATE(206)] = 7073,
    [SMALL_STATE(207)] = 7084,
    [SMALL_STATE(208)] = 7095,
    [SMALL_STATE(209)] = 7106,
    [SMALL_STATE(210)] = 7119,
    [SMALL_STATE(211)] = 7132,
    [SMALL_STATE(212)] = 7143,
    [SMALL_STATE(213)] = 7154,
    [SMALL_STATE(214)] = 7165,
    [SMALL_STATE(215)] = 7176,
    [SMALL_STATE(216)] = 7189,
    [SMALL_STATE(217)] = 7200,
    [SMALL_STATE(218)] = 7211,
    [SMALL_STATE(219)] = 7224,
    [SMALL_STATE(220)] = 7235,
    [SMALL_STATE(221)] = 7246,
    [SMALL_STATE(222)] = 7257,
    [SMALL_STATE(223)] = 7270,
    [SMALL_STATE(224)] = 7281,
    [SMALL_STATE(225)] = 7294,
    [SMALL_STATE(226)] = 7305,
    [SMALL_STATE(227)] = 7316,
    [SMALL_STATE(228)] = 7329,
    [SMALL_STATE(229)] = 7342,
    [SMALL_STATE(230)] = 7353,
    [SMALL_STATE(231)] = 7364,
    [SMALL_STATE(232)] = 7375,
    [SMALL_STATE(233)] = 7386,
    [SMALL_STATE(234)] = 7399,
    [SMALL_STATE(235)] = 7412,
    [SMALL_STATE(236)] = 7423,
    [SMALL_STATE(237)] = 7434,
    [SMALL_STATE(238)] = 7445,
    [SMALL_STATE(239)] = 7456,
    [SMALL_STATE(240)] = 7469,
    [SMALL_STATE(241)] = 7480,
    [SMALL_STATE(242)] = 7490,
    [SMALL_STATE(243)] = 7500,
    [SMALL_STATE(244)] = 7510,
    [SMALL_STATE(245)] = 7520,
    [SMALL_STATE(246)] = 7530,
    [SMALL_STATE(247)] = 7540,
    [SMALL_STATE(248)] = 7550,
    [SMALL_STATE(249)] = 7560,
    [SMALL_STATE(250)] = 7570,
    [SMALL_STATE(251)] = 7580,
    [SMALL_STATE(252)] = 7590,
    [SMALL_STATE(253)] = 7600,
    [SMALL_STATE(254)] = 7610,
    [SMALL_STATE(255)] = 7620,
    [SMALL_STATE(256)] = 7630,
    [SMALL_STATE(257)] = 7640,
    [SMALL_STATE(258)] = 7650,
    [SMALL_STATE(259)] = 7660,
    [SMALL_STATE(260)] = 7670,
    [SMALL_STATE(261)] = 7680,
    [SMALL_STATE(262)] = 7690,
    [SMALL_STATE(263)] = 7700,
    [SMALL_STATE(264)] = 7710,
    [SMALL_STATE(265)] = 7720,
    [SMALL_STATE(266)] = 7730,
    [SMALL_STATE(267)] = 7740,
    [SMALL_STATE(268)] = 7750,
    [SMALL_STATE(269)] = 7760,
    [SMALL_STATE(270)] = 7770,
    [SMALL_STATE(271)] = 7780,
    [SMALL_STATE(272)] = 7790,
    [SMALL_STATE(273)] = 7800,
    [SMALL_STATE(274)] = 7810,
    [SMALL_STATE(275)] = 7820,
    [SMALL_STATE(276)] = 7830,
    [SMALL_STATE(277)] = 7840,
    [SMALL_STATE(278)] = 7850,
    [SMALL_STATE(279)] = 7860,
    [SMALL_STATE(280)] = 7870,
    [SMALL_STATE(281)] = 7880,
    [SMALL_STATE(282)] = 7890,
    [SMALL_STATE(283)] = 7900,
    [SMALL_STATE(284)] = 7910,
    [SMALL_STATE(285)] = 7920,
    [SMALL_STATE(286)] = 7930,
    [SMALL_STATE(287)] = 7940,
    [SMALL_STATE(288)] = 7950,
    [SMALL_STATE(289)] = 7960,
    [SMALL_STATE(290)] = 7970,
    [SMALL_STATE(291)] = 7980,
    [SMALL_STATE(292)] = 7990,
    [SMALL_STATE(293)] = 8000,
    [SMALL_STATE(294)] = 8010,
    [SMALL_STATE(295)] = 8020,
    [SMALL_STATE(296)] = 8030,
    [SMALL_STATE(297)] = 8040,
    [SMALL_STATE(298)] = 8050,
    [SMALL_STATE(299)] = 8060,
    [SMALL_STATE(300)] = 8070,
    [SMALL_STATE(301)] = 8080,
    [SMALL_STATE(302)] = 8090,
    [SMALL_STATE(303)] = 8100,
    [SMALL_STATE(304)] = 8110,
    [SMALL_STATE(305)] = 8120,
    [SMALL_STATE(306)] = 8130,
    [SMALL_STATE(307)] = 8140,
    [SMALL_STATE(308)] = 8150,
    [SMALL_STATE(309)] = 8160,
    [SMALL_STATE(310)] = 8170,
    [SMALL_STATE(311)] = 8180,
    [SMALL_STATE(312)] = 8190,
    [SMALL_STATE(313)] = 8200,
    [SMALL_STATE(314)] = 8210,
    [SMALL_STATE(315)] = 8220,
    [SMALL_STATE(316)] = 8230,
    [SMALL_STATE(317)] = 8240,
    [SMALL_STATE(318)] = 8250,
    [SMALL_STATE(319)] = 8260,
    [SMALL_STATE(320)] = 8270,
    [SMALL_STATE(321)] = 8280,
    [SMALL_STATE(322)] = 8290,
    [SMALL_STATE(323)] = 8300,
    [SMALL_STATE(324)] = 8310,
    [SMALL_STATE(325)] = 8320,
    [SMALL_STATE(326)] = 8330,
    [SMALL_STATE(327)] = 8340,
    [SMALL_STATE(328)] = 8350,
    [SMALL_STATE(329)] = 8360,
    [SMALL_STATE(330)] = 8370,
    [SMALL_STATE(331)] = 8380,
    [SMALL_STATE(332)] = 8390,
    [SMALL_STATE(333)] = 8400,
    [SMALL_STATE(334)] = 8410,
    [SMALL_STATE(335)] = 8420,
    [SMALL_STATE(336)] = 8430,
    [SMALL_STATE(337)] = 8440,
    [SMALL_STATE(338)] = 8450,
    [SMALL_STATE(339)] = 8460,
    [SMALL_STATE(340)] = 8470,
    [SMALL_STATE(341)] = 8480,
    [SMALL_STATE(342)] = 8490,
    [SMALL_STATE(343)] = 8500,
    [SMALL_STATE(344)] = 8510,
    [SMALL_STATE(345)] = 8520,
    [SMALL_STATE(346)] = 8530,
    [SMALL_STATE(347)] = 8540,
    [SMALL_STATE(348)] = 8550,
    [SMALL_STATE(349)] = 8560,
    [SMALL_STATE(350)] = 8570,
    [SMALL_STATE(351)] = 8580,
    [SMALL_STATE(352)] = 8590,
    [SMALL_STATE(353)] = 8600,
    [SMALL_STATE(354)] = 8610,
    [SMALL_STATE(355)] = 8620,
    [SMALL_STATE(356)] = 8630,
    [SMALL_STATE(357)] = 8640,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(291),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(355),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(347),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(345),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(343),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(338),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(335),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(331),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(330),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(209),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(134),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(319),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(312),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(180),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(310),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [49] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(315),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(249),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(160),
    [57] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(160),
    [59] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(264),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(129),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(259),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(165),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(255),
    [69] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [71] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(31),
    [74] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(315),
    [77] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(249),
    [80] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(160),
    [83] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(160),
    [86] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(264),
    [89] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(129),
    [92] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(259),
    [95] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(165),
    [98] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(255),
    [101] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(223),
    [103] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(221),
    [105] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(329),
    [107] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(212),
    [109] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(303),
    [111] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(211),
    [113] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [115] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(194),
    [117] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(345),
    [119] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(343),
    [121] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(334),
    [123] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(31),
    [126] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(315),
    [129] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(249),
    [132] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [134] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [136] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [138] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(355),
    [141] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(195),
    [144] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(347),
    [147] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(345),
    [150] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(343),
    [153] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(338),
    [156] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(335),
    [159] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(334),
    [162] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(331),
    [165] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(13),
    [168] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(330),
    [171] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(328),
    [174] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(209),
    [177] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(134),
    [180] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(321),
    [183] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(319),
    [186] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(32),
    [189] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(312),
    [192] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(180),
    [195] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(310),
    [198] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(348),
    [200] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [202] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(323),
    [204] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [206] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(229),
    [208] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 3),
    [210] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 3),
    [212] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [214] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [216] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 3),
    [218] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 3),
    [220] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 8),
    [222] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 8),
    [224] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 8),
    [226] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 8),
    [228] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 7),
    [230] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 7),
    [232] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [234] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [236] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 2),
    [238] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 2),
    [240] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [242] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [244] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [246] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [248] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [250] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [252] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(110),
    [254] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(110),
    [256] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [258] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(283),
    [260] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(241),
    [262] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(69),
    [264] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(356),
    [266] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [268] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 6),
    [270] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [272] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [274] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [276] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [278] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [280] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [282] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [284] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [286] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [288] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [290] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [292] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [294] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [296] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [298] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [300] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [302] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [304] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [306] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [308] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [310] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [312] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [314] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 6),
    [316] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 6),
    [318] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [320] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [322] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [324] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [326] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [328] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [330] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_wchar_literal, 4, .production_id = 9),
    [332] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_wchar_literal, 4, .production_id = 9),
    [334] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [336] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [338] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [340] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [342] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [344] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [346] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [348] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [350] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [352] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [354] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [356] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [358] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(169),
    [360] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(226),
    [362] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [364] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(198),
    [366] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(245),
    [368] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(205),
    [370] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [372] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [374] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_function_repeat1, 2),
    [376] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_function_repeat1, 2),
    SHIFT_REPEAT(226),
    [379] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_function_repeat1, 2),
    SHIFT_REPEAT(282),
    [382] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_function_repeat1, 2),
    SHIFT_REPEAT(198),
    [385] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(271),
    [387] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(30),
    [389] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [391] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [393] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [395] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(276),
    [397] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [399] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [401] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(134),
    [404] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(321),
    [407] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(319),
    [410] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(288),
    [412] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [414] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [416] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [418] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [420] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [422] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_function_arg, 3),
    [424] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(120),
    [426] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_function_arg, 3),
    [428] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_function_arg, 2),
    [430] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(123),
    [432] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_function_arg, 2),
    [434] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [436] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [438] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_function_repeat1, 1),
    [440] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_function_repeat1, 1),
    [442] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [444] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    [446] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    SHIFT_REPEAT(264),
    [449] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    SHIFT_REPEAT(129),
    [452] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(294),
    [454] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(344),
    [456] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [458] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(129),
    [460] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(206),
    [462] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(207),
    [464] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat2, 2),
    [466] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat2, 2),
    SHIFT_REPEAT(30),
    [469] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat2, 2),
    [471] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat3, 2),
    [473] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat3, 2),
    SHIFT_REPEAT(264),
    [476] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat3, 2),
    SHIFT_REPEAT(129),
    [479] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(311),
    [481] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [483] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(324),
    [485] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(208),
    [487] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(327),
    [489] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [491] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [493] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [495] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(342),
    [497] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 2),
    [499] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 2),
    SHIFT_REPEAT(344),
    [502] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 2),
    SHIFT_REPEAT(149),
    [505] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(320),
    [507] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [509] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(37),
    [512] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_function_arg, 4),
    [514] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_function_arg, 4),
    [516] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(202),
    [518] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(206),
    [521] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(207),
    [524] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [526] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(327),
    [529] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(45),
    [532] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(264),
    [535] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(129),
    [538] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [540] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(332),
    [542] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [544] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [546] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [548] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [550] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(180),
    [553] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(310),
    [556] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [558] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(206),
    [561] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [563] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [565] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(156),
    [568] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
    [570] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(175),
    [572] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(175),
    [574] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(217),
    [576] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [578] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [580] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(43),
    [582] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_field, 2),
    [584] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [586] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_attribute, 3),
    [588] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_interface_attribute, 3),
    [590] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [592] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(175),
    [595] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(175),
    [598] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_field, 1),
    [600] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [602] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [604] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [606] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(156),
    [608] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat2, 1),
    [610] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat2, 1),
    [612] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [614] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [616] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(162),
    [618] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [620] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [622] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [624] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [626] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [628] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(337),
    [630] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [632] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [634] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(140),
    [637] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_primitive_type, 1),
    [639] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [641] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [643] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [645] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [647] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [649] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [651] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_field, 3),
    [653] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat3, 1),
    [655] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [657] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(316),
    [659] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [661] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(140),
    [663] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(198),
    [665] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [667] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [669] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [671] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [673] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(137),
    [675] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 1),
    [677] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_field, 4),
    [679] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [681] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_function, 5),
    [683] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_field, 3),
    [685] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 1),
    [687] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [689] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 1),
    [691] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(191),
    [693] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [695] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [697] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_function, 6),
    [699] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_function, 7),
    [701] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 4),
    [703] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(280),
    [705] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [707] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [709] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [711] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [713] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [715] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 10),
    [717] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [719] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [721] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [723] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [725] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(213),
    [727] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(214),
    [729] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 10),
    [731] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [733] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [735] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [737] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [739] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [741] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [743] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [745] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(196),
    [747] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [749] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [751] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 4),
    [753] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [755] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [757] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [759] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [761] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_modifier, 1),
    [763] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [765] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [767] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(219),
    [769] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [771] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [773] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [775] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [777] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [779] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(232),
    [781] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [783] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [785] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [787] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [789] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [791] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [793] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(292),
    [795] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [797] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(262),
    [799] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [801] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(164),
    [803] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [805] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [807] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [809] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [811] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [813] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(132),
    [815] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(133),
    [817] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [819] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [821] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [823] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(237),
    [825] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask, 5),
    [827] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [829] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [831] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [833] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(353),
    [835] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(352),
    [837] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [839] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [841] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [843] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [845] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [847] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [849] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [851] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(109),
    [853] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_position, 4, .production_id = 5),
    [855] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(106),
    [857] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [859] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [861] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [863] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [865] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [867] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [869] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [871] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [873] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(220),
    [875] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(225),
    [877] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [879] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(265),
    [881] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [883] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(291),
    [885] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(357),
    [887] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(277),
    [889] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [891] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask, 4),
    [893] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [895] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [897] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(308),
    [899] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(235),
    [901] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [903] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(263),
    [905] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(325),
    [907] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [909] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [911] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [913] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [915] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [917] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [919] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(274),
    [921] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [923] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [925] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation, 4),
    [927] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(322),
    [929] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(273),
    [931] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(333),
    [933] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(188),
    [935] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [937] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(300),
    [939] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation, 5),
    [941] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(243),
    [943] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(267),
    [945] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [947] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 7),
    [949] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(268),
    [951] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(115),
    [953] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [955] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [957] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [959] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(51),
    [961] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(111),
    [963] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(227),
    [965] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [967] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [969] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(269),
    [971] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [973] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [975] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [977] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [979] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [981] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask, 3),
    [983] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(275),
    [985] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(297),
    [987] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(154),
    [989] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [991] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(278),
    [993] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [995] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [997] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_except, 4),
    [999] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_bound, 4),
    [1001] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(253),
    [1003] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(252),
    [1005] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [1007] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(281),
    [1009] = { .entry = { .count = 1, .reusable = true } },
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
