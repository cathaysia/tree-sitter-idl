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
#define STATE_COUNT 360
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 211
#define ALIAS_COUNT 3
#define TOKEN_COUNT 120
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 15

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
    anon_sym_local = 38,
    anon_sym_interface = 39,
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
    sym_inherit = 127,
    sym_member = 128,
    sym_or_expr = 129,
    sym_xor_expr = 130,
    sym_and_expr = 131,
    sym_shift_expr = 132,
    sym_add_expr = 133,
    sym_mult_expr = 134,
    sym_unary_expr = 135,
    sym_unary_operator = 136,
    sym_char_literal = 137,
    sym_wchar_literal = 138,
    sym_literal = 139,
    sym_default = 140,
    sym_enum_dcl = 141,
    sym_enumerator = 142,
    sym_enum_modifier = 143,
    sym_enum_anno = 144,
    sym_annotation = 145,
    sym_annotation_field = 146,
    sym_union_forward_dcl = 147,
    sym_union_def = 148,
    sym_case = 149,
    sym_case_label = 150,
    sym_element_spec = 151,
    sym_switch_type_spec = 152,
    sym_bitmask = 153,
    sym_bitmask_field = 154,
    sym_typedef_dcl = 155,
    sym_predefine = 156,
    sym_interface = 157,
    sym_dds_request_topic = 158,
    sym_dds_reply_topic = 159,
    sym_interface_anno = 160,
    sym_interface_attribute = 161,
    sym_interface_function = 162,
    sym_interface_except = 163,
    sym_interface_modifier = 164,
    sym_function_arg = 165,
    sym_const_dcl = 166,
    sym_const_type = 167,
    sym_const_expr = 168,
    sym_hashid = 169,
    sym_try_construct = 170,
    sym_bit_bound = 171,
    sym_position = 172,
    sym_data_representation = 173,
    sym_struct_modifier = 174,
    sym_primitive_type = 175,
    sym_scoped_name = 176,
    sym_simple_type_spec = 177,
    sym_type_spec = 178,
    sym_simple_declarator = 179,
    sym_declarator = 180,
    sym_declarators = 181,
    sym_array_declarator = 182,
    sym_positive_int_const = 183,
    sym_fixed_array_size = 184,
    sym_sequence_type = 185,
    sym_string_type = 186,
    sym_fixed_pt_type = 187,
    sym_template_type_spec = 188,
    sym_type_declarator = 189,
    sym_any_declarators = 190,
    sym_any_declarator = 191,
    sym_comment = 192,
    aux_sym_specification_repeat1 = 193,
    aux_sym_except_dcl_repeat1 = 194,
    aux_sym_struct_def_repeat1 = 195,
    aux_sym_inherit_repeat1 = 196,
    aux_sym_member_repeat1 = 197,
    aux_sym_enum_dcl_repeat1 = 198,
    aux_sym_enumerator_repeat1 = 199,
    aux_sym_annotation_repeat1 = 200,
    aux_sym_union_def_repeat1 = 201,
    aux_sym_bitmask_repeat1 = 202,
    aux_sym_interface_repeat1 = 203,
    aux_sym_interface_repeat2 = 204,
    aux_sym_interface_repeat3 = 205,
    aux_sym_interface_function_repeat1 = 206,
    aux_sym_data_representation_repeat1 = 207,
    aux_sym_declarators_repeat1 = 208,
    aux_sym_array_declarator_repeat1 = 209,
    aux_sym_any_declarators_repeat1 = 210,
    alias_sym_data_rep = 211,
    alias_sym_hashid_value = 212,
    alias_sym_try_construct_value = 213,
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
    [anon_sym_local] = "local",
    [anon_sym_interface] = "interface",
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
    [sym_inherit] = "inherit",
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
    [sym_interface] = "interface",
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
    [aux_sym_inherit_repeat1] = "inherit_repeat1",
    [aux_sym_member_repeat1] = "member_repeat1",
    [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
    [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
    [aux_sym_annotation_repeat1] = "annotation_repeat1",
    [aux_sym_union_def_repeat1] = "union_def_repeat1",
    [aux_sym_bitmask_repeat1] = "bitmask_repeat1",
    [aux_sym_interface_repeat1] = "interface_repeat1",
    [aux_sym_interface_repeat2] = "interface_repeat2",
    [aux_sym_interface_repeat3] = "interface_repeat3",
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
    [anon_sym_local] = anon_sym_local,
    [anon_sym_interface] = anon_sym_interface,
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
    [sym_inherit] = sym_inherit,
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
    [sym_interface] = sym_interface,
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
    [aux_sym_inherit_repeat1] = aux_sym_inherit_repeat1,
    [aux_sym_member_repeat1] = aux_sym_member_repeat1,
    [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
    [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
    [aux_sym_annotation_repeat1] = aux_sym_annotation_repeat1,
    [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
    [aux_sym_bitmask_repeat1] = aux_sym_bitmask_repeat1,
    [aux_sym_interface_repeat1] = aux_sym_interface_repeat1,
    [aux_sym_interface_repeat2] = aux_sym_interface_repeat2,
    [aux_sym_interface_repeat3] = aux_sym_interface_repeat3,
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
    [anon_sym_local] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_interface] = {
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
    [sym_inherit] = {
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
    [sym_interface] = {
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
    [aux_sym_inherit_repeat1] = {
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
    [aux_sym_interface_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_repeat2] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_repeat3] = {
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
    [1] = { .index = 0, .length = 1 },
    [2] = { .index = 1, .length = 1 },
    [5] = { .index = 2, .length = 2 },
    [6] = { .index = 4, .length = 2 },
    [7] = { .index = 6, .length = 2 },
    [8] = { .index = 8, .length = 1 },
    [10] = { .index = 9, .length = 1 },
    [12] = { .index = 10, .length = 2 },
    [13] = { .index = 12, .length = 1 },
    [14] = { .index = 13, .length = 1 },
};

static const TSFieldMapEntry ts_field_map_entries[] = {
    [0] = { field_parent, 0 },
    [1] = { field_parent, 1 },
    [2] = { field_parent, 1, .inherited = true },
    { field_parent, 2 },
    [4] = { field_parent, 0, .inherited = true },
    { field_parent, 1, .inherited = true },
    [6] = { field_identifier, 1 },
    { field_type, 0 },
    [8] = { field_parent, 3 },
    [9] = { field_value, 1 },
    [10] = { field_identifier, 2 },
    { field_type, 1 },
    [12] = { field_value, 2 },
    [13] = { field_parent, 4 },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
    [3] = {
        [2] = alias_sym_data_rep,
    },
    [4] = {
        [1] = alias_sym_try_construct_value,
    },
    [9] = {
        [2] = sym_position,
    },
    [11] = {
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
    [143] = 59,
    [144] = 144,
    [145] = 56,
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
    [217] = 56,
    [218] = 218,
    [219] = 219,
    [220] = 220,
    [221] = 221,
    [222] = 222,
    [223] = 59,
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
    [272] = 220,
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
    [302] = 282,
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
    [358] = 282,
    [359] = 359,
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
                ADVANCE(528);
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
                ADVANCE(527);
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
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_interface);
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
    [16] = { .lex_state = 33 },
    [17] = { .lex_state = 33 },
    [18] = { .lex_state = 33 },
    [19] = { .lex_state = 33 },
    [20] = { .lex_state = 33 },
    [21] = { .lex_state = 33 },
    [22] = { .lex_state = 33 },
    [23] = { .lex_state = 476 },
    [24] = { .lex_state = 476 },
    [25] = { .lex_state = 33 },
    [26] = { .lex_state = 476 },
    [27] = { .lex_state = 33 },
    [28] = { .lex_state = 33 },
    [29] = { .lex_state = 33 },
    [30] = { .lex_state = 33 },
    [31] = { .lex_state = 476 },
    [32] = { .lex_state = 38 },
    [33] = { .lex_state = 33 },
    [34] = { .lex_state = 33 },
    [35] = { .lex_state = 39 },
    [36] = { .lex_state = 32 },
    [37] = { .lex_state = 32 },
    [38] = { .lex_state = 32 },
    [39] = { .lex_state = 32 },
    [40] = { .lex_state = 32 },
    [41] = { .lex_state = 476 },
    [42] = { .lex_state = 476 },
    [43] = { .lex_state = 32 },
    [44] = { .lex_state = 476 },
    [45] = { .lex_state = 32 },
    [46] = { .lex_state = 32 },
    [47] = { .lex_state = 476 },
    [48] = { .lex_state = 476 },
    [49] = { .lex_state = 32 },
    [50] = { .lex_state = 32 },
    [51] = { .lex_state = 476 },
    [52] = { .lex_state = 32 },
    [53] = { .lex_state = 32 },
    [54] = { .lex_state = 32 },
    [55] = { .lex_state = 30 },
    [56] = { .lex_state = 30 },
    [57] = { .lex_state = 32 },
    [58] = { .lex_state = 30 },
    [59] = { .lex_state = 30 },
    [60] = { .lex_state = 476 },
    [61] = { .lex_state = 476 },
    [62] = { .lex_state = 476 },
    [63] = { .lex_state = 476 },
    [64] = { .lex_state = 476 },
    [65] = { .lex_state = 476 },
    [66] = { .lex_state = 476 },
    [67] = { .lex_state = 476 },
    [68] = { .lex_state = 476 },
    [69] = { .lex_state = 32 },
    [70] = { .lex_state = 476 },
    [71] = { .lex_state = 476 },
    [72] = { .lex_state = 32 },
    [73] = { .lex_state = 476 },
    [74] = { .lex_state = 476 },
    [75] = { .lex_state = 476 },
    [76] = { .lex_state = 476 },
    [77] = { .lex_state = 34 },
    [78] = { .lex_state = 34 },
    [79] = { .lex_state = 32 },
    [80] = { .lex_state = 34 },
    [81] = { .lex_state = 40 },
    [82] = { .lex_state = 476 },
    [83] = { .lex_state = 40 },
    [84] = { .lex_state = 40 },
    [85] = { .lex_state = 31 },
    [86] = { .lex_state = 40 },
    [87] = { .lex_state = 40 },
    [88] = { .lex_state = 40 },
    [89] = { .lex_state = 476 },
    [90] = { .lex_state = 40 },
    [91] = { .lex_state = 40 },
    [92] = { .lex_state = 31 },
    [93] = { .lex_state = 31 },
    [94] = { .lex_state = 31 },
    [95] = { .lex_state = 31 },
    [96] = { .lex_state = 34 },
    [97] = { .lex_state = 34 },
    [98] = { .lex_state = 0 },
    [99] = { .lex_state = 30 },
    [100] = { .lex_state = 30 },
    [101] = { .lex_state = 30 },
    [102] = { .lex_state = 30 },
    [103] = { .lex_state = 30 },
    [104] = { .lex_state = 30 },
    [105] = { .lex_state = 0 },
    [106] = { .lex_state = 41 },
    [107] = { .lex_state = 34 },
    [108] = { .lex_state = 41 },
    [109] = { .lex_state = 41 },
    [110] = { .lex_state = 34 },
    [111] = { .lex_state = 0 },
    [112] = { .lex_state = 41 },
    [113] = { .lex_state = 0 },
    [114] = { .lex_state = 32 },
    [115] = { .lex_state = 40 },
    [116] = { .lex_state = 41 },
    [117] = { .lex_state = 30 },
    [118] = { .lex_state = 41 },
    [119] = { .lex_state = 41 },
    [120] = { .lex_state = 30 },
    [121] = { .lex_state = 30 },
    [122] = { .lex_state = 0 },
    [123] = { .lex_state = 0 },
    [124] = { .lex_state = 41 },
    [125] = { .lex_state = 34 },
    [126] = { .lex_state = 30 },
    [127] = { .lex_state = 41 },
    [128] = { .lex_state = 476 },
    [129] = { .lex_state = 476 },
    [130] = { .lex_state = 0 },
    [131] = { .lex_state = 476 },
    [132] = { .lex_state = 476 },
    [133] = { .lex_state = 30 },
    [134] = { .lex_state = 30 },
    [135] = { .lex_state = 0 },
    [136] = { .lex_state = 30 },
    [137] = { .lex_state = 0 },
    [138] = { .lex_state = 30 },
    [139] = { .lex_state = 30 },
    [140] = { .lex_state = 0 },
    [141] = { .lex_state = 30 },
    [142] = { .lex_state = 30 },
    [143] = { .lex_state = 31 },
    [144] = { .lex_state = 0 },
    [145] = { .lex_state = 31 },
    [146] = { .lex_state = 40 },
    [147] = { .lex_state = 30 },
    [148] = { .lex_state = 42 },
    [149] = { .lex_state = 30 },
    [150] = { .lex_state = 30 },
    [151] = { .lex_state = 0 },
    [152] = { .lex_state = 0 },
    [153] = { .lex_state = 40 },
    [154] = { .lex_state = 0 },
    [155] = { .lex_state = 0 },
    [156] = { .lex_state = 30 },
    [157] = { .lex_state = 0 },
    [158] = { .lex_state = 41 },
    [159] = { .lex_state = 0 },
    [160] = { .lex_state = 33 },
    [161] = { .lex_state = 30 },
    [162] = { .lex_state = 41 },
    [163] = { .lex_state = 41 },
    [164] = { .lex_state = 0 },
    [165] = { .lex_state = 0 },
    [166] = { .lex_state = 0 },
    [167] = { .lex_state = 0 },
    [168] = { .lex_state = 41 },
    [169] = { .lex_state = 0 },
    [170] = { .lex_state = 41 },
    [171] = { .lex_state = 41 },
    [172] = { .lex_state = 41 },
    [173] = { .lex_state = 0 },
    [174] = { .lex_state = 30 },
    [175] = { .lex_state = 31 },
    [176] = { .lex_state = 41 },
    [177] = { .lex_state = 0 },
    [178] = { .lex_state = 31 },
    [179] = { .lex_state = 30 },
    [180] = { .lex_state = 0 },
    [181] = { .lex_state = 43 },
    [182] = { .lex_state = 0 },
    [183] = { .lex_state = 0 },
    [184] = { .lex_state = 41 },
    [185] = { .lex_state = 0 },
    [186] = { .lex_state = 41 },
    [187] = { .lex_state = 41 },
    [188] = { .lex_state = 0 },
    [189] = { .lex_state = 0 },
    [190] = { .lex_state = 0 },
    [191] = { .lex_state = 0 },
    [192] = { .lex_state = 0 },
    [193] = { .lex_state = 30 },
    [194] = { .lex_state = 30 },
    [195] = { .lex_state = 30 },
    [196] = { .lex_state = 0 },
    [197] = { .lex_state = 30 },
    [198] = { .lex_state = 0 },
    [199] = { .lex_state = 30 },
    [200] = { .lex_state = 30 },
    [201] = { .lex_state = 0 },
    [202] = { .lex_state = 30 },
    [203] = { .lex_state = 0 },
    [204] = { .lex_state = 30 },
    [205] = { .lex_state = 31 },
    [206] = { .lex_state = 30 },
    [207] = { .lex_state = 41 },
    [208] = { .lex_state = 30 },
    [209] = { .lex_state = 0 },
    [210] = { .lex_state = 30 },
    [211] = { .lex_state = 44 },
    [212] = { .lex_state = 0 },
    [213] = { .lex_state = 30 },
    [214] = { .lex_state = 31 },
    [215] = { .lex_state = 30 },
    [216] = { .lex_state = 31 },
    [217] = { .lex_state = 44 },
    [218] = { .lex_state = 30 },
    [219] = { .lex_state = 0 },
    [220] = { .lex_state = 31 },
    [221] = { .lex_state = 31 },
    [222] = { .lex_state = 30 },
    [223] = { .lex_state = 44 },
    [224] = { .lex_state = 31 },
    [225] = { .lex_state = 31 },
    [226] = { .lex_state = 30 },
    [227] = { .lex_state = 31 },
    [228] = { .lex_state = 44 },
    [229] = { .lex_state = 30 },
    [230] = { .lex_state = 30 },
    [231] = { .lex_state = 0 },
    [232] = { .lex_state = 31 },
    [233] = { .lex_state = 30 },
    [234] = { .lex_state = 30 },
    [235] = { .lex_state = 30 },
    [236] = { .lex_state = 30 },
    [237] = { .lex_state = 30 },
    [238] = { .lex_state = 30 },
    [239] = { .lex_state = 30 },
    [240] = { .lex_state = 30 },
    [241] = { .lex_state = 0 },
    [242] = { .lex_state = 0 },
    [243] = { .lex_state = 0 },
    [244] = { .lex_state = 0 },
    [245] = { .lex_state = 0 },
    [246] = { .lex_state = 30 },
    [247] = { .lex_state = 0 },
    [248] = { .lex_state = 30 },
    [249] = { .lex_state = 33 },
    [250] = { .lex_state = 0 },
    [251] = { .lex_state = 0 },
    [252] = { .lex_state = 30 },
    [253] = { .lex_state = 30 },
    [254] = { .lex_state = 30 },
    [255] = { .lex_state = 0 },
    [256] = { .lex_state = 0 },
    [257] = { .lex_state = 0 },
    [258] = { .lex_state = 0 },
    [259] = { .lex_state = 30 },
    [260] = { .lex_state = 0 },
    [261] = { .lex_state = 798 },
    [262] = { .lex_state = 0 },
    [263] = { .lex_state = 0 },
    [264] = { .lex_state = 0 },
    [265] = { .lex_state = 0 },
    [266] = { .lex_state = 30 },
    [267] = { .lex_state = 476 },
    [268] = { .lex_state = 30 },
    [269] = { .lex_state = 0 },
    [270] = { .lex_state = 0 },
    [271] = { .lex_state = 0 },
    [272] = { .lex_state = 30 },
    [273] = { .lex_state = 476 },
    [274] = { .lex_state = 33 },
    [275] = { .lex_state = 30 },
    [276] = { .lex_state = 33 },
    [277] = { .lex_state = 0 },
    [278] = { .lex_state = 33 },
    [279] = { .lex_state = 0 },
    [280] = { .lex_state = 0 },
    [281] = { .lex_state = 44 },
    [282] = { .lex_state = 30 },
    [283] = { .lex_state = 0 },
    [284] = { .lex_state = 0 },
    [285] = { .lex_state = 30 },
    [286] = { .lex_state = 33 },
    [287] = { .lex_state = 0 },
    [288] = { .lex_state = 0 },
    [289] = { .lex_state = 0 },
    [290] = { .lex_state = 0 },
    [291] = { .lex_state = 0 },
    [292] = { .lex_state = 0 },
    [293] = { .lex_state = 0 },
    [294] = { .lex_state = 0 },
    [295] = { .lex_state = 0 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 0 },
    [298] = { .lex_state = 0 },
    [299] = { .lex_state = 0 },
    [300] = { .lex_state = 0 },
    [301] = { .lex_state = 0 },
    [302] = { .lex_state = 30 },
    [303] = { .lex_state = 0 },
    [304] = { .lex_state = 0 },
    [305] = { .lex_state = 0 },
    [306] = { .lex_state = 0 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 0 },
    [309] = { .lex_state = 30 },
    [310] = { .lex_state = 0 },
    [311] = { .lex_state = 0 },
    [312] = { .lex_state = 0 },
    [313] = { .lex_state = 0 },
    [314] = { .lex_state = 0 },
    [315] = { .lex_state = 476 },
    [316] = { .lex_state = 30 },
    [317] = { .lex_state = 476 },
    [318] = { .lex_state = 44 },
    [319] = { .lex_state = 0 },
    [320] = { .lex_state = 476 },
    [321] = { .lex_state = 44 },
    [322] = { .lex_state = 476 },
    [323] = { .lex_state = 30 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 0 },
    [326] = { .lex_state = 476 },
    [327] = { .lex_state = 0 },
    [328] = { .lex_state = 33 },
    [329] = { .lex_state = 476 },
    [330] = { .lex_state = 30 },
    [331] = { .lex_state = 524 },
    [332] = { .lex_state = 30 },
    [333] = { .lex_state = 0 },
    [334] = { .lex_state = 30 },
    [335] = { .lex_state = 0 },
    [336] = { .lex_state = 0 },
    [337] = { .lex_state = 0 },
    [338] = { .lex_state = 0 },
    [339] = { .lex_state = 30 },
    [340] = { .lex_state = 0 },
    [341] = { .lex_state = 0 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 30 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 0 },
    [346] = { .lex_state = 30 },
    [347] = { .lex_state = 33 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 30 },
    [351] = { .lex_state = 476 },
    [352] = { .lex_state = 0 },
    [353] = { .lex_state = 30 },
    [354] = { .lex_state = 0 },
    [355] = { .lex_state = 0 },
    [356] = { .lex_state = 44 },
    [357] = { .lex_state = 30 },
    [358] = { .lex_state = 30 },
    [359] = { (TSStateId)(-1) },
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
        [sym_specification] = STATE(312),
        [sym__definition] = STATE(44),
        [sym_except_dcl] = STATE(41),
        [sym_native_dcl] = STATE(310),
        [sym_module_dcl] = STATE(310),
        [sym_struct_forward_dcl] = STATE(310),
        [sym_struct_def] = STATE(310),
        [sym_enum_dcl] = STATE(310),
        [sym_enum_anno] = STATE(306),
        [sym_annotation] = STATE(310),
        [sym_union_forward_dcl] = STATE(310),
        [sym_union_def] = STATE(310),
        [sym_bitmask] = STATE(310),
        [sym_typedef_dcl] = STATE(310),
        [sym_predefine] = STATE(41),
        [sym_interface] = STATE(310),
        [sym_dds_request_topic] = STATE(129),
        [sym_dds_reply_topic] = STATE(129),
        [sym_interface_anno] = STATE(128),
        [sym_const_dcl] = STATE(310),
        [sym_bit_bound] = STATE(303),
        [sym_data_representation] = STATE(177),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(24),
        [aux_sym_struct_def_repeat1] = STATE(130),
        [aux_sym_interface_repeat1] = STATE(89),
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
        [anon_sym_local] = ACTIONS(29),
        [anon_sym_interface] = ACTIONS(31),
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
    STATE(6),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(17),
    1,
    sym_member,
    STATE(27),
    1,
    sym_struct_modifier,
    STATE(134),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(272),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(28),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(232),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(224),
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
    [109] = 23,
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
    ACTIONS(69),
    1,
    anon_sym_RBRACE,
    STATE(3),
    1,
    sym_comment,
    STATE(7),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(17),
    1,
    sym_member,
    STATE(27),
    1,
    sym_struct_modifier,
    STATE(134),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(272),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(28),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(232),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(224),
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
    [218] = 23,
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
    ACTIONS(69),
    1,
    anon_sym_RBRACE,
    STATE(4),
    1,
    sym_comment,
    STATE(12),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(17),
    1,
    sym_member,
    STATE(27),
    1,
    sym_struct_modifier,
    STATE(134),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(272),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(28),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(232),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(224),
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
    [327] = 23,
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
    ACTIONS(71),
    1,
    anon_sym_RBRACE,
    STATE(5),
    1,
    sym_comment,
    STATE(9),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(17),
    1,
    sym_member,
    STATE(27),
    1,
    sym_struct_modifier,
    STATE(134),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(272),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(28),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(232),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(224),
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
    [436] = 23,
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
    ACTIONS(73),
    1,
    anon_sym_RBRACE,
    STATE(6),
    1,
    sym_comment,
    STATE(7),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(17),
    1,
    sym_member,
    STATE(27),
    1,
    sym_struct_modifier,
    STATE(134),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(272),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(28),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(232),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(224),
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
    [545] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(75),
    1,
    anon_sym_RBRACE,
    ACTIONS(80),
    1,
    anon_sym_AThashid,
    ACTIONS(83),
    1,
    anon_sym_ATtry_construct,
    ACTIONS(92),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(95),
    1,
    sym_identifier,
    ACTIONS(98),
    1,
    anon_sym_sequence,
    ACTIONS(104),
    1,
    anon_sym_fixed,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(17),
    1,
    sym_member,
    STATE(27),
    1,
    sym_struct_modifier,
    STATE(134),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(272),
    1,
    sym_scoped_name,
    ACTIONS(101),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(7),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(28),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(232),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(224),
    3,
    sym_sequence_type,
    sym_string_type,
    sym_fixed_pt_type,
    ACTIONS(89),
    4,
    anon_sym_longdouble,
    anon_sym_unsignedshort,
    anon_sym_longlong,
    anon_sym_unsignedlonglong,
    ACTIONS(77),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(86),
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
    STATE(8),
    1,
    sym_comment,
    STATE(11),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(17),
    1,
    sym_member,
    STATE(27),
    1,
    sym_struct_modifier,
    STATE(134),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(272),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(28),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(232),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(224),
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
    STATE(7),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(9),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(17),
    1,
    sym_member,
    STATE(27),
    1,
    sym_struct_modifier,
    STATE(134),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(272),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(28),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(232),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(224),
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
    STATE(3),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(10),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(17),
    1,
    sym_member,
    STATE(27),
    1,
    sym_struct_modifier,
    STATE(134),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(272),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(28),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(232),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(224),
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
    STATE(17),
    1,
    sym_member,
    STATE(27),
    1,
    sym_struct_modifier,
    STATE(134),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(272),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(28),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(232),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(224),
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
    STATE(7),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(12),
    1,
    sym_comment,
    STATE(14),
    1,
    aux_sym_member_repeat1,
    STATE(17),
    1,
    sym_member,
    STATE(27),
    1,
    sym_struct_modifier,
    STATE(134),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(272),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(28),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(232),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(224),
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
    STATE(130),
    1,
    aux_sym_struct_def_repeat1,
    STATE(177),
    1,
    sym_data_representation,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(269),
    1,
    sym_type_declarator,
    STATE(272),
    1,
    sym_scoped_name,
    STATE(306),
    1,
    sym_enum_anno,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(224),
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
    STATE(133),
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
    STATE(27),
    1,
    sym_struct_modifier,
    STATE(136),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(272),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(28),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(232),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(224),
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
    STATE(27),
    1,
    sym_struct_modifier,
    STATE(15),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(28),
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
    [1475] = 16,
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
    ACTIONS(136),
    1,
    anon_sym_COMMA,
    ACTIONS(138),
    1,
    anon_sym_GT,
    STATE(16),
    1,
    sym_comment,
    STATE(220),
    1,
    sym_scoped_name,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(249),
    1,
    sym_type_spec,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(232),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(224),
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
    [1557] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(17),
    1,
    sym_comment,
    ACTIONS(140),
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
    ACTIONS(142),
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
    [1614] = 15,
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
    STATE(18),
    1,
    sym_comment,
    STATE(156),
    1,
    sym_type_spec,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(272),
    1,
    sym_scoped_name,
    STATE(336),
    1,
    sym_element_spec,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(232),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(224),
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
    [1693] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(19),
    1,
    sym_comment,
    ACTIONS(144),
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
    ACTIONS(146),
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
    [1750] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(20),
    1,
    sym_comment,
    ACTIONS(148),
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
    ACTIONS(150),
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
    [1807] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(21),
    1,
    sym_comment,
    ACTIONS(152),
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
    ACTIONS(154),
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
    [1864] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(22),
    1,
    sym_comment,
    ACTIONS(156),
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
    ACTIONS(158),
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
    [1921] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(162),
    1,
    anon_sym_exception,
    ACTIONS(165),
    1,
    anon_sym_native,
    ACTIONS(168),
    1,
    anon_sym_module,
    ACTIONS(171),
    1,
    anon_sym_struct,
    ACTIONS(174),
    1,
    anon_sym_enum,
    ACTIONS(177),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(180),
    1,
    anon_sym_ATannotation,
    ACTIONS(183),
    1,
    anon_sym_union,
    ACTIONS(186),
    1,
    anon_sym_bitmask,
    ACTIONS(189),
    1,
    anon_sym_typedef,
    ACTIONS(192),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(195),
    1,
    anon_sym_local,
    ACTIONS(198),
    1,
    anon_sym_interface,
    ACTIONS(201),
    1,
    sym_dds_service,
    ACTIONS(204),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(207),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(210),
    1,
    anon_sym_const,
    ACTIONS(213),
    1,
    anon_sym_ATbit_bound,
    ACTIONS(216),
    1,
    sym_final,
    ACTIONS(219),
    1,
    anon_sym_ATdata_representation,
    STATE(44),
    1,
    sym__definition,
    STATE(89),
    1,
    aux_sym_interface_repeat1,
    STATE(128),
    1,
    sym_interface_anno,
    STATE(130),
    1,
    aux_sym_struct_def_repeat1,
    STATE(177),
    1,
    sym_data_representation,
    STATE(303),
    1,
    sym_bit_bound,
    STATE(306),
    1,
    sym_enum_anno,
    ACTIONS(160),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(23),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    STATE(41),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(129),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(310),
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
    sym_interface,
    sym_const_dcl,
    [2036] = 34,
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
    anon_sym_local,
    ACTIONS(31),
    1,
    anon_sym_interface,
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
    ACTIONS(222),
    1,
    ts_builtin_sym_end,
    STATE(23),
    1,
    aux_sym_specification_repeat1,
    STATE(24),
    1,
    sym_comment,
    STATE(44),
    1,
    sym__definition,
    STATE(89),
    1,
    aux_sym_interface_repeat1,
    STATE(128),
    1,
    sym_interface_anno,
    STATE(130),
    1,
    aux_sym_struct_def_repeat1,
    STATE(177),
    1,
    sym_data_representation,
    STATE(303),
    1,
    sym_bit_bound,
    STATE(306),
    1,
    sym_enum_anno,
    STATE(41),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(129),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(310),
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
    sym_interface,
    sym_const_dcl,
    [2152] = 14,
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
    STATE(25),
    1,
    sym_comment,
    STATE(221),
    1,
    sym_primitive_type,
    STATE(252),
    1,
    sym_type_spec,
    STATE(272),
    1,
    sym_scoped_name,
    ACTIONS(65),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(232),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(224),
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
    [2228] = 34,
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
    anon_sym_local,
    ACTIONS(31),
    1,
    anon_sym_interface,
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
    ACTIONS(224),
    1,
    anon_sym_RBRACE,
    STATE(26),
    1,
    sym_comment,
    STATE(31),
    1,
    aux_sym_specification_repeat1,
    STATE(44),
    1,
    sym__definition,
    STATE(89),
    1,
    aux_sym_interface_repeat1,
    STATE(128),
    1,
    sym_interface_anno,
    STATE(130),
    1,
    aux_sym_struct_def_repeat1,
    STATE(177),
    1,
    sym_data_representation,
    STATE(303),
    1,
    sym_bit_bound,
    STATE(306),
    1,
    sym_enum_anno,
    STATE(41),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(129),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(310),
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
    sym_interface,
    sym_const_dcl,
    [2344] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(27),
    1,
    sym_comment,
    ACTIONS(226),
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
    ACTIONS(228),
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
    [2400] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(28),
    1,
    sym_comment,
    ACTIONS(230),
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
    ACTIONS(232),
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
    [2456] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(29),
    1,
    sym_comment,
    ACTIONS(234),
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
    ACTIONS(236),
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
    [2512] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(30),
    1,
    sym_comment,
    ACTIONS(238),
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
    ACTIONS(240),
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
    [2568] = 34,
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
    anon_sym_local,
    ACTIONS(31),
    1,
    anon_sym_interface,
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
    ACTIONS(242),
    1,
    anon_sym_RBRACE,
    STATE(23),
    1,
    aux_sym_specification_repeat1,
    STATE(31),
    1,
    sym_comment,
    STATE(44),
    1,
    sym__definition,
    STATE(89),
    1,
    aux_sym_interface_repeat1,
    STATE(128),
    1,
    sym_interface_anno,
    STATE(130),
    1,
    aux_sym_struct_def_repeat1,
    STATE(177),
    1,
    sym_data_representation,
    STATE(303),
    1,
    sym_bit_bound,
    STATE(306),
    1,
    sym_enum_anno,
    STATE(41),
    2,
    sym_except_dcl,
    sym_predefine,
    STATE(129),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(310),
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
    sym_interface,
    sym_const_dcl,
    [2684] = 10,
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
    STATE(246),
    1,
    sym_scoped_name,
    STATE(254),
    1,
    sym_const_type,
    STATE(248),
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
    [2745] = 4,
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
    [2793] = 4,
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
    [2841] = 9,
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
    STATE(210),
    1,
    sym_scoped_name,
    STATE(289),
    1,
    sym_primitive_type,
    STATE(291),
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
    [2898] = 23,
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
    STATE(55),
    1,
    sym_scoped_name,
    STATE(61),
    1,
    sym_unary_expr,
    STATE(63),
    1,
    sym_mult_expr,
    STATE(66),
    1,
    sym_literal,
    STATE(73),
    1,
    sym_add_expr,
    STATE(75),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(85),
    1,
    sym_and_expr,
    STATE(93),
    1,
    sym_xor_expr,
    STATE(95),
    1,
    sym_or_expr,
    STATE(160),
    1,
    sym_const_expr,
    STATE(278),
    1,
    sym_positive_int_const,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [2970] = 23,
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
    STATE(55),
    1,
    sym_scoped_name,
    STATE(61),
    1,
    sym_unary_expr,
    STATE(63),
    1,
    sym_mult_expr,
    STATE(66),
    1,
    sym_literal,
    STATE(73),
    1,
    sym_add_expr,
    STATE(75),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(85),
    1,
    sym_and_expr,
    STATE(93),
    1,
    sym_xor_expr,
    STATE(95),
    1,
    sym_or_expr,
    STATE(160),
    1,
    sym_const_expr,
    STATE(263),
    1,
    sym_positive_int_const,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3042] = 23,
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
    STATE(55),
    1,
    sym_scoped_name,
    STATE(61),
    1,
    sym_unary_expr,
    STATE(63),
    1,
    sym_mult_expr,
    STATE(66),
    1,
    sym_literal,
    STATE(73),
    1,
    sym_add_expr,
    STATE(75),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(85),
    1,
    sym_and_expr,
    STATE(93),
    1,
    sym_xor_expr,
    STATE(95),
    1,
    sym_or_expr,
    STATE(160),
    1,
    sym_const_expr,
    STATE(347),
    1,
    sym_positive_int_const,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3114] = 23,
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
    STATE(55),
    1,
    sym_scoped_name,
    STATE(61),
    1,
    sym_unary_expr,
    STATE(63),
    1,
    sym_mult_expr,
    STATE(66),
    1,
    sym_literal,
    STATE(73),
    1,
    sym_add_expr,
    STATE(75),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(85),
    1,
    sym_and_expr,
    STATE(93),
    1,
    sym_xor_expr,
    STATE(95),
    1,
    sym_or_expr,
    STATE(160),
    1,
    sym_const_expr,
    STATE(341),
    1,
    sym_positive_int_const,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3186] = 23,
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
    STATE(55),
    1,
    sym_scoped_name,
    STATE(61),
    1,
    sym_unary_expr,
    STATE(63),
    1,
    sym_mult_expr,
    STATE(66),
    1,
    sym_literal,
    STATE(73),
    1,
    sym_add_expr,
    STATE(75),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(85),
    1,
    sym_and_expr,
    STATE(93),
    1,
    sym_xor_expr,
    STATE(95),
    1,
    sym_or_expr,
    STATE(160),
    1,
    sym_const_expr,
    STATE(286),
    1,
    sym_positive_int_const,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3258] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(41),
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
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3289] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(42),
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
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3320] = 22,
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
    STATE(55),
    1,
    sym_scoped_name,
    STATE(61),
    1,
    sym_unary_expr,
    STATE(63),
    1,
    sym_mult_expr,
    STATE(66),
    1,
    sym_literal,
    STATE(73),
    1,
    sym_add_expr,
    STATE(75),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(85),
    1,
    sym_and_expr,
    STATE(93),
    1,
    sym_xor_expr,
    STATE(95),
    1,
    sym_or_expr,
    STATE(277),
    1,
    sym_const_expr,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3389] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(44),
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
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3420] = 22,
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
    STATE(55),
    1,
    sym_scoped_name,
    STATE(61),
    1,
    sym_unary_expr,
    STATE(63),
    1,
    sym_mult_expr,
    STATE(66),
    1,
    sym_literal,
    STATE(73),
    1,
    sym_add_expr,
    STATE(75),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(85),
    1,
    sym_and_expr,
    STATE(93),
    1,
    sym_xor_expr,
    STATE(95),
    1,
    sym_or_expr,
    STATE(245),
    1,
    sym_const_expr,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3489] = 22,
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
    STATE(46),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(61),
    1,
    sym_unary_expr,
    STATE(63),
    1,
    sym_mult_expr,
    STATE(66),
    1,
    sym_literal,
    STATE(73),
    1,
    sym_add_expr,
    STATE(75),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(85),
    1,
    sym_and_expr,
    STATE(93),
    1,
    sym_xor_expr,
    STATE(95),
    1,
    sym_or_expr,
    STATE(335),
    1,
    sym_const_expr,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3558] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(47),
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
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3589] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(48),
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
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3620] = 22,
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
    STATE(49),
    1,
    sym_comment,
    STATE(55),
    1,
    sym_scoped_name,
    STATE(61),
    1,
    sym_unary_expr,
    STATE(63),
    1,
    sym_mult_expr,
    STATE(66),
    1,
    sym_literal,
    STATE(73),
    1,
    sym_add_expr,
    STATE(75),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(85),
    1,
    sym_and_expr,
    STATE(93),
    1,
    sym_xor_expr,
    STATE(95),
    1,
    sym_or_expr,
    STATE(295),
    1,
    sym_const_expr,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3689] = 22,
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
    STATE(55),
    1,
    sym_scoped_name,
    STATE(61),
    1,
    sym_unary_expr,
    STATE(63),
    1,
    sym_mult_expr,
    STATE(66),
    1,
    sym_literal,
    STATE(73),
    1,
    sym_add_expr,
    STATE(75),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(85),
    1,
    sym_and_expr,
    STATE(93),
    1,
    sym_xor_expr,
    STATE(95),
    1,
    sym_or_expr,
    STATE(284),
    1,
    sym_const_expr,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3758] = 3,
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
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    anon_sym_ATbit_bound,
    sym_final,
    anon_sym_ATdata_representation,
    [3789] = 20,
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
    STATE(55),
    1,
    sym_scoped_name,
    STATE(61),
    1,
    sym_unary_expr,
    STATE(63),
    1,
    sym_mult_expr,
    STATE(66),
    1,
    sym_literal,
    STATE(73),
    1,
    sym_add_expr,
    STATE(75),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(85),
    1,
    sym_and_expr,
    STATE(94),
    1,
    sym_xor_expr,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3852] = 19,
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
    STATE(55),
    1,
    sym_scoped_name,
    STATE(61),
    1,
    sym_unary_expr,
    STATE(63),
    1,
    sym_mult_expr,
    STATE(66),
    1,
    sym_literal,
    STATE(73),
    1,
    sym_add_expr,
    STATE(75),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    STATE(92),
    1,
    sym_and_expr,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3912] = 18,
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
    STATE(55),
    1,
    sym_scoped_name,
    STATE(61),
    1,
    sym_unary_expr,
    STATE(63),
    1,
    sym_mult_expr,
    STATE(66),
    1,
    sym_literal,
    STATE(73),
    1,
    sym_add_expr,
    STATE(76),
    1,
    sym_shift_expr,
    STATE(79),
    1,
    sym_unary_operator,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [3969] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(284),
    1,
    sym_identifier,
    STATE(55),
    1,
    sym_comment,
    ACTIONS(282),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(280),
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
    [3999] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(56),
    1,
    sym_comment,
    ACTIONS(288),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(286),
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
    [4027] = 17,
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
    STATE(55),
    1,
    sym_scoped_name,
    STATE(57),
    1,
    sym_comment,
    STATE(61),
    1,
    sym_unary_expr,
    STATE(63),
    1,
    sym_mult_expr,
    STATE(66),
    1,
    sym_literal,
    STATE(74),
    1,
    sym_add_expr,
    STATE(79),
    1,
    sym_unary_operator,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4081] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(284),
    1,
    sym_identifier,
    STATE(58),
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
    [4111] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(59),
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
    [4139] = 4,
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
    [4166] = 4,
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
    [4193] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(62),
    1,
    sym_comment,
    ACTIONS(308),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(306),
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
    [4220] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(314),
    1,
    anon_sym_SLASH,
    ACTIONS(316),
    1,
    anon_sym_GT,
    STATE(63),
    1,
    sym_comment,
    ACTIONS(312),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(310),
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
    [4251] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(64),
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
    [4278] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(65),
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
    [4305] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(66),
    1,
    sym_comment,
    ACTIONS(282),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(280),
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
    [4332] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(67),
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
    [4359] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(68),
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
    [4386] = 16,
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
    STATE(55),
    1,
    sym_scoped_name,
    STATE(61),
    1,
    sym_unary_expr,
    STATE(66),
    1,
    sym_literal,
    STATE(69),
    1,
    sym_comment,
    STATE(70),
    1,
    sym_mult_expr,
    STATE(79),
    1,
    sym_unary_operator,
    ACTIONS(252),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4437] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(314),
    1,
    anon_sym_SLASH,
    ACTIONS(332),
    1,
    anon_sym_GT,
    STATE(70),
    1,
    sym_comment,
    ACTIONS(312),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(330),
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
    [4468] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(71),
    1,
    sym_comment,
    ACTIONS(336),
    2,
    anon_sym_SLASH,
    anon_sym_GT,
    ACTIONS(334),
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
    [4495] = 15,
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
    STATE(55),
    1,
    sym_scoped_name,
    STATE(66),
    1,
    sym_literal,
    STATE(71),
    1,
    sym_unary_expr,
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
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4543] = 5,
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
    [4569] = 5,
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
    [4595] = 5,
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
    [4619] = 5,
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
    [4643] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(358),
    1,
    anon_sym_RPAREN,
    ACTIONS(363),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(366),
    1,
    sym_identifier,
    STATE(125),
    1,
    sym_function_arg,
    STATE(186),
    1,
    sym_interface_modifier,
    STATE(211),
    1,
    sym_scoped_name,
    STATE(77),
    2,
    sym_comment,
    aux_sym_interface_function_repeat1,
    ACTIONS(360),
    3,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    [4674] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(369),
    1,
    anon_sym_RPAREN,
    ACTIONS(373),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(375),
    1,
    sym_identifier,
    STATE(78),
    1,
    sym_comment,
    STATE(80),
    1,
    aux_sym_interface_function_repeat1,
    STATE(125),
    1,
    sym_function_arg,
    STATE(186),
    1,
    sym_interface_modifier,
    STATE(211),
    1,
    sym_scoped_name,
    ACTIONS(371),
    3,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    [4707] = 11,
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
    ACTIONS(377),
    1,
    anon_sym_LPAREN,
    STATE(58),
    1,
    sym_scoped_name,
    STATE(68),
    1,
    sym_literal,
    STATE(79),
    1,
    sym_comment,
    STATE(60),
    2,
    sym_char_literal,
    sym_wchar_literal,
    [4742] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(373),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(375),
    1,
    sym_identifier,
    ACTIONS(379),
    1,
    anon_sym_RPAREN,
    STATE(77),
    1,
    aux_sym_interface_function_repeat1,
    STATE(80),
    1,
    sym_comment,
    STATE(125),
    1,
    sym_function_arg,
    STATE(186),
    1,
    sym_interface_modifier,
    STATE(211),
    1,
    sym_scoped_name,
    ACTIONS(371),
    3,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    [4775] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(381),
    1,
    anon_sym_RBRACE,
    ACTIONS(383),
    1,
    anon_sym_attribute,
    STATE(81),
    1,
    sym_comment,
    STATE(87),
    1,
    aux_sym_interface_repeat2,
    STATE(112),
    1,
    aux_sym_interface_repeat3,
    STATE(153),
    1,
    sym_interface_attribute,
    STATE(170),
    1,
    sym_interface_function,
    STATE(330),
    1,
    sym_scoped_name,
    [4809] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(387),
    1,
    sym_dds_service,
    ACTIONS(390),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(393),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(128),
    1,
    sym_interface_anno,
    ACTIONS(385),
    2,
    anon_sym_local,
    anon_sym_interface,
    STATE(82),
    2,
    sym_comment,
    aux_sym_interface_repeat1,
    STATE(129),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [4837] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(383),
    1,
    anon_sym_attribute,
    ACTIONS(396),
    1,
    anon_sym_RBRACE,
    STATE(83),
    1,
    sym_comment,
    STATE(115),
    1,
    aux_sym_interface_repeat2,
    STATE(118),
    1,
    aux_sym_interface_repeat3,
    STATE(153),
    1,
    sym_interface_attribute,
    STATE(170),
    1,
    sym_interface_function,
    STATE(330),
    1,
    sym_scoped_name,
    [4871] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(383),
    1,
    anon_sym_attribute,
    ACTIONS(398),
    1,
    anon_sym_RBRACE,
    STATE(84),
    1,
    sym_comment,
    STATE(115),
    1,
    aux_sym_interface_repeat2,
    STATE(127),
    1,
    aux_sym_interface_repeat3,
    STATE(153),
    1,
    sym_interface_attribute,
    STATE(170),
    1,
    sym_interface_function,
    STATE(330),
    1,
    sym_scoped_name,
    [4905] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(402),
    1,
    anon_sym_DOLLAR,
    STATE(85),
    1,
    sym_comment,
    ACTIONS(400),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [4925] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(383),
    1,
    anon_sym_attribute,
    ACTIONS(404),
    1,
    anon_sym_RBRACE,
    STATE(86),
    1,
    sym_comment,
    STATE(91),
    1,
    aux_sym_interface_repeat2,
    STATE(106),
    1,
    aux_sym_interface_repeat3,
    STATE(153),
    1,
    sym_interface_attribute,
    STATE(170),
    1,
    sym_interface_function,
    STATE(330),
    1,
    sym_scoped_name,
    [4959] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(383),
    1,
    anon_sym_attribute,
    ACTIONS(406),
    1,
    anon_sym_RBRACE,
    STATE(87),
    1,
    sym_comment,
    STATE(115),
    1,
    aux_sym_interface_repeat2,
    STATE(119),
    1,
    aux_sym_interface_repeat3,
    STATE(153),
    1,
    sym_interface_attribute,
    STATE(170),
    1,
    sym_interface_function,
    STATE(330),
    1,
    sym_scoped_name,
    [4993] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(383),
    1,
    anon_sym_attribute,
    ACTIONS(406),
    1,
    anon_sym_RBRACE,
    STATE(84),
    1,
    aux_sym_interface_repeat2,
    STATE(88),
    1,
    sym_comment,
    STATE(119),
    1,
    aux_sym_interface_repeat3,
    STATE(153),
    1,
    sym_interface_attribute,
    STATE(170),
    1,
    sym_interface_function,
    STATE(330),
    1,
    sym_scoped_name,
    [5027] = 10,
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
    ACTIONS(408),
    1,
    anon_sym_local,
    ACTIONS(410),
    1,
    anon_sym_interface,
    STATE(82),
    1,
    aux_sym_interface_repeat1,
    STATE(89),
    1,
    sym_comment,
    STATE(128),
    1,
    sym_interface_anno,
    STATE(129),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [5059] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(383),
    1,
    anon_sym_attribute,
    ACTIONS(398),
    1,
    anon_sym_RBRACE,
    STATE(83),
    1,
    aux_sym_interface_repeat2,
    STATE(90),
    1,
    sym_comment,
    STATE(127),
    1,
    aux_sym_interface_repeat3,
    STATE(153),
    1,
    sym_interface_attribute,
    STATE(170),
    1,
    sym_interface_function,
    STATE(330),
    1,
    sym_scoped_name,
    [5093] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(61),
    1,
    sym_identifier,
    ACTIONS(381),
    1,
    anon_sym_RBRACE,
    ACTIONS(383),
    1,
    anon_sym_attribute,
    STATE(91),
    1,
    sym_comment,
    STATE(112),
    1,
    aux_sym_interface_repeat3,
    STATE(115),
    1,
    aux_sym_interface_repeat2,
    STATE(153),
    1,
    sym_interface_attribute,
    STATE(170),
    1,
    sym_interface_function,
    STATE(330),
    1,
    sym_scoped_name,
    [5127] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(402),
    1,
    anon_sym_DOLLAR,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(412),
    8,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [5147] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(416),
    1,
    anon_sym_CARET,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(414),
    7,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [5166] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(416),
    1,
    anon_sym_CARET,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(418),
    7,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [5185] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(422),
    1,
    anon_sym_PIPE,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(420),
    6,
    anon_sym_SEMI,
    anon_sym_COLON,
    anon_sym_RPAREN,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [5203] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(426),
    1,
    anon_sym_COMMA,
    STATE(96),
    1,
    sym_comment,
    ACTIONS(424),
    2,
    anon_sym_RPAREN,
    anon_sym_COLON_COLON,
    ACTIONS(428),
    4,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    sym_identifier,
    [5223] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(432),
    1,
    anon_sym_COMMA,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(430),
    2,
    anon_sym_RPAREN,
    anon_sym_COLON_COLON,
    ACTIONS(434),
    4,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    sym_identifier,
    [5243] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(438),
    1,
    anon_sym_LBRACK,
    STATE(155),
    1,
    sym_fixed_array_size,
    STATE(98),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(436),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [5262] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(441),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(99),
    1,
    sym_comment,
    STATE(117),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(150),
    1,
    aux_sym_enumerator_repeat1,
    STATE(204),
    1,
    sym_enum_modifier,
    STATE(209),
    1,
    sym_enumerator,
    [5287] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(445),
    1,
    anon_sym_RBRACE,
    ACTIONS(447),
    1,
    anon_sym_ATposition,
    ACTIONS(449),
    1,
    sym_identifier,
    STATE(100),
    1,
    sym_comment,
    STATE(121),
    1,
    aux_sym_bitmask_repeat1,
    STATE(174),
    1,
    sym_bitmask_field,
    STATE(275),
    1,
    sym_position,
    [5312] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(447),
    1,
    anon_sym_ATposition,
    ACTIONS(449),
    1,
    sym_identifier,
    ACTIONS(451),
    1,
    anon_sym_RBRACE,
    STATE(101),
    1,
    sym_comment,
    STATE(121),
    1,
    aux_sym_bitmask_repeat1,
    STATE(174),
    1,
    sym_bitmask_field,
    STATE(275),
    1,
    sym_position,
    [5337] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(441),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(99),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(102),
    1,
    sym_comment,
    STATE(150),
    1,
    aux_sym_enumerator_repeat1,
    STATE(201),
    1,
    sym_enumerator,
    STATE(204),
    1,
    sym_enum_modifier,
    [5362] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(441),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(103),
    1,
    sym_comment,
    STATE(126),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(150),
    1,
    aux_sym_enumerator_repeat1,
    STATE(196),
    1,
    sym_enumerator,
    STATE(204),
    1,
    sym_enum_modifier,
    [5387] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(445),
    1,
    anon_sym_RBRACE,
    ACTIONS(447),
    1,
    anon_sym_ATposition,
    ACTIONS(449),
    1,
    sym_identifier,
    STATE(101),
    1,
    aux_sym_bitmask_repeat1,
    STATE(104),
    1,
    sym_comment,
    STATE(174),
    1,
    sym_bitmask_field,
    STATE(275),
    1,
    sym_position,
    [5412] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(455),
    1,
    anon_sym_LBRACK,
    STATE(105),
    1,
    sym_comment,
    STATE(113),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(155),
    1,
    sym_fixed_array_size,
    ACTIONS(453),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [5433] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(381),
    1,
    anon_sym_RBRACE,
    ACTIONS(457),
    1,
    sym_identifier,
    STATE(106),
    1,
    sym_comment,
    STATE(116),
    1,
    aux_sym_interface_repeat3,
    STATE(170),
    1,
    sym_interface_function,
    STATE(330),
    1,
    sym_scoped_name,
    [5458] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(430),
    2,
    anon_sym_RPAREN,
    anon_sym_COLON_COLON,
    ACTIONS(434),
    4,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    sym_identifier,
    [5475] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(457),
    1,
    sym_identifier,
    ACTIONS(459),
    1,
    anon_sym_RBRACE,
    STATE(108),
    1,
    sym_comment,
    STATE(124),
    1,
    aux_sym_annotation_repeat1,
    STATE(187),
    1,
    sym_annotation_field,
    STATE(353),
    1,
    sym_scoped_name,
    [5500] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(461),
    1,
    anon_sym_RBRACE,
    ACTIONS(463),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(466),
    1,
    sym_identifier,
    STATE(187),
    1,
    sym_annotation_field,
    STATE(353),
    1,
    sym_scoped_name,
    STATE(109),
    2,
    sym_comment,
    aux_sym_annotation_repeat1,
    [5523] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(469),
    2,
    anon_sym_RPAREN,
    anon_sym_COLON_COLON,
    ACTIONS(471),
    4,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    sym_identifier,
    [5540] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(473),
    1,
    anon_sym_RBRACE,
    ACTIONS(475),
    1,
    anon_sym_default,
    ACTIONS(478),
    1,
    anon_sym_case,
    STATE(18),
    1,
    sym_case_label,
    STATE(173),
    1,
    sym_case,
    STATE(111),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [5563] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(406),
    1,
    anon_sym_RBRACE,
    ACTIONS(457),
    1,
    sym_identifier,
    STATE(112),
    1,
    sym_comment,
    STATE(116),
    1,
    aux_sym_interface_repeat3,
    STATE(170),
    1,
    sym_interface_function,
    STATE(330),
    1,
    sym_scoped_name,
    [5588] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(455),
    1,
    anon_sym_LBRACK,
    STATE(98),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(113),
    1,
    sym_comment,
    STATE(155),
    1,
    sym_fixed_array_size,
    ACTIONS(481),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [5609] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(483),
    3,
    anon_sym_LPAREN,
    anon_sym_SQUOTE,
    anon_sym_COLON_COLON,
    ACTIONS(485),
    3,
    anon_sym_L,
    sym_number_literal,
    sym_identifier,
    [5626] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(489),
    1,
    anon_sym_attribute,
    ACTIONS(492),
    1,
    sym_identifier,
    STATE(153),
    1,
    sym_interface_attribute,
    ACTIONS(487),
    2,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    STATE(115),
    2,
    sym_comment,
    aux_sym_interface_repeat2,
    [5647] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(494),
    1,
    anon_sym_RBRACE,
    ACTIONS(496),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(499),
    1,
    sym_identifier,
    STATE(170),
    1,
    sym_interface_function,
    STATE(330),
    1,
    sym_scoped_name,
    STATE(116),
    2,
    sym_comment,
    aux_sym_interface_repeat3,
    [5670] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(502),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(505),
    1,
    sym_identifier,
    STATE(150),
    1,
    aux_sym_enumerator_repeat1,
    STATE(204),
    1,
    sym_enum_modifier,
    STATE(262),
    1,
    sym_enumerator,
    STATE(117),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [5693] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(457),
    1,
    sym_identifier,
    ACTIONS(508),
    1,
    anon_sym_RBRACE,
    STATE(116),
    1,
    aux_sym_interface_repeat3,
    STATE(118),
    1,
    sym_comment,
    STATE(170),
    1,
    sym_interface_function,
    STATE(330),
    1,
    sym_scoped_name,
    [5718] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(398),
    1,
    anon_sym_RBRACE,
    ACTIONS(457),
    1,
    sym_identifier,
    STATE(116),
    1,
    aux_sym_interface_repeat3,
    STATE(119),
    1,
    sym_comment,
    STATE(170),
    1,
    sym_interface_function,
    STATE(330),
    1,
    sym_scoped_name,
    [5743] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(447),
    1,
    anon_sym_ATposition,
    ACTIONS(449),
    1,
    sym_identifier,
    ACTIONS(510),
    1,
    anon_sym_RBRACE,
    STATE(100),
    1,
    aux_sym_bitmask_repeat1,
    STATE(120),
    1,
    sym_comment,
    STATE(174),
    1,
    sym_bitmask_field,
    STATE(275),
    1,
    sym_position,
    [5768] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(512),
    1,
    anon_sym_RBRACE,
    ACTIONS(514),
    1,
    anon_sym_ATposition,
    ACTIONS(517),
    1,
    sym_identifier,
    STATE(174),
    1,
    sym_bitmask_field,
    STATE(275),
    1,
    sym_position,
    STATE(121),
    2,
    sym_comment,
    aux_sym_bitmask_repeat1,
    [5791] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(520),
    1,
    anon_sym_RBRACE,
    ACTIONS(522),
    1,
    anon_sym_default,
    ACTIONS(524),
    1,
    anon_sym_case,
    STATE(18),
    1,
    sym_case_label,
    STATE(111),
    1,
    aux_sym_union_def_repeat1,
    STATE(122),
    1,
    sym_comment,
    STATE(173),
    1,
    sym_case,
    [5816] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(522),
    1,
    anon_sym_default,
    ACTIONS(524),
    1,
    anon_sym_case,
    ACTIONS(526),
    1,
    anon_sym_RBRACE,
    STATE(18),
    1,
    sym_case_label,
    STATE(122),
    1,
    aux_sym_union_def_repeat1,
    STATE(123),
    1,
    sym_comment,
    STATE(173),
    1,
    sym_case,
    [5841] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(457),
    1,
    sym_identifier,
    ACTIONS(528),
    1,
    anon_sym_RBRACE,
    STATE(109),
    1,
    aux_sym_annotation_repeat1,
    STATE(124),
    1,
    sym_comment,
    STATE(187),
    1,
    sym_annotation_field,
    STATE(353),
    1,
    sym_scoped_name,
    [5866] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(125),
    1,
    sym_comment,
    ACTIONS(530),
    2,
    anon_sym_RPAREN,
    anon_sym_COLON_COLON,
    ACTIONS(532),
    4,
    anon_sym_in,
    anon_sym_out,
    anon_sym_inout,
    sym_identifier,
    [5883] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(441),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(443),
    1,
    sym_identifier,
    STATE(117),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(126),
    1,
    sym_comment,
    STATE(150),
    1,
    aux_sym_enumerator_repeat1,
    STATE(201),
    1,
    sym_enumerator,
    STATE(204),
    1,
    sym_enum_modifier,
    [5908] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(396),
    1,
    anon_sym_RBRACE,
    ACTIONS(457),
    1,
    sym_identifier,
    STATE(116),
    1,
    aux_sym_interface_repeat3,
    STATE(127),
    1,
    sym_comment,
    STATE(170),
    1,
    sym_interface_function,
    STATE(330),
    1,
    sym_scoped_name,
    [5933] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(534),
    5,
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [5947] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(129),
    1,
    sym_comment,
    ACTIONS(536),
    5,
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [5961] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(43),
    1,
    sym_final,
    ACTIONS(45),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(538),
    1,
    anon_sym_struct,
    STATE(130),
    1,
    sym_comment,
    STATE(135),
    1,
    aux_sym_struct_def_repeat1,
    STATE(177),
    1,
    sym_data_representation,
    [5983] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(131),
    1,
    sym_comment,
    ACTIONS(540),
    5,
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [5997] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(132),
    1,
    sym_comment,
    ACTIONS(542),
    5,
    anon_sym_local,
    anon_sym_interface,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6011] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(544),
    1,
    sym_identifier,
    STATE(133),
    1,
    sym_comment,
    STATE(182),
    1,
    sym_any_declarator,
    STATE(279),
    1,
    sym_any_declarators,
    STATE(219),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6031] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(544),
    1,
    sym_identifier,
    STATE(134),
    1,
    sym_comment,
    STATE(152),
    1,
    sym_declarator,
    STATE(191),
    1,
    sym_declarators,
    STATE(157),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6051] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(546),
    1,
    anon_sym_struct,
    ACTIONS(548),
    1,
    sym_final,
    ACTIONS(551),
    1,
    anon_sym_ATdata_representation,
    STATE(177),
    1,
    sym_data_representation,
    STATE(135),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [6071] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(544),
    1,
    sym_identifier,
    STATE(136),
    1,
    sym_comment,
    STATE(152),
    1,
    sym_declarator,
    STATE(164),
    1,
    sym_declarators,
    STATE(157),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6091] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(554),
    1,
    anon_sym_RPAREN,
    ACTIONS(556),
    1,
    anon_sym_XCDR,
    ACTIONS(559),
    1,
    anon_sym_XCDR2,
    STATE(137),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [6108] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(544),
    1,
    sym_identifier,
    STATE(138),
    1,
    sym_comment,
    STATE(231),
    1,
    sym_any_declarator,
    STATE(219),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6125] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(544),
    1,
    sym_identifier,
    STATE(139),
    1,
    sym_comment,
    STATE(192),
    1,
    sym_declarator,
    STATE(157),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6142] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(564),
    1,
    anon_sym_COMMA,
    STATE(140),
    1,
    sym_comment,
    STATE(151),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(562),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [6159] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(568),
    1,
    anon_sym_COMMA,
    STATE(141),
    1,
    sym_comment,
    ACTIONS(566),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6174] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(572),
    1,
    anon_sym_COMMA,
    STATE(142),
    1,
    sym_comment,
    ACTIONS(570),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6189] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(143),
    1,
    sym_comment,
    ACTIONS(294),
    4,
    anon_sym_LBRACE,
    anon_sym_RPAREN,
    sym_identifier,
    anon_sym_GT,
    [6202] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(144),
    1,
    sym_comment,
    ACTIONS(574),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [6215] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(145),
    1,
    sym_comment,
    ACTIONS(286),
    4,
    anon_sym_LBRACE,
    anon_sym_RPAREN,
    sym_identifier,
    anon_sym_GT,
    [6228] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(146),
    1,
    sym_comment,
    ACTIONS(576),
    2,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    ACTIONS(578),
    2,
    anon_sym_attribute,
    sym_identifier,
    [6243] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(582),
    1,
    anon_sym_LBRACE,
    ACTIONS(584),
    1,
    anon_sym_COLON,
    STATE(147),
    1,
    sym_comment,
    ACTIONS(580),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6260] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(296),
    1,
    sym_identifier,
    ACTIONS(586),
    1,
    anon_sym_SEMI,
    ACTIONS(588),
    1,
    anon_sym_default,
    STATE(148),
    1,
    sym_comment,
    STATE(264),
    1,
    sym_default,
    [6279] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(590),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(593),
    1,
    sym_identifier,
    STATE(204),
    1,
    sym_enum_modifier,
    STATE(149),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [6296] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(441),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(595),
    1,
    sym_identifier,
    STATE(149),
    1,
    aux_sym_enumerator_repeat1,
    STATE(150),
    1,
    sym_comment,
    STATE(204),
    1,
    sym_enum_modifier,
    [6315] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(599),
    1,
    anon_sym_COMMA,
    ACTIONS(597),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(151),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [6330] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(564),
    1,
    anon_sym_COMMA,
    STATE(140),
    1,
    aux_sym_declarators_repeat1,
    STATE(152),
    1,
    sym_comment,
    ACTIONS(602),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [6347] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(153),
    1,
    sym_comment,
    ACTIONS(604),
    2,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    ACTIONS(606),
    2,
    anon_sym_attribute,
    sym_identifier,
    [6362] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(608),
    1,
    anon_sym_RPAREN,
    ACTIONS(610),
    1,
    anon_sym_XCDR,
    ACTIONS(612),
    1,
    anon_sym_XCDR2,
    STATE(137),
    1,
    aux_sym_data_representation_repeat1,
    STATE(154),
    1,
    sym_comment,
    [6381] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(155),
    1,
    sym_comment,
    ACTIONS(614),
    4,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    anon_sym_LBRACK,
    [6394] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(544),
    1,
    sym_identifier,
    STATE(156),
    1,
    sym_comment,
    STATE(348),
    1,
    sym_declarator,
    STATE(157),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6411] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(157),
    1,
    sym_comment,
    ACTIONS(616),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [6423] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(158),
    1,
    sym_comment,
    ACTIONS(618),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6435] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(610),
    1,
    anon_sym_XCDR,
    ACTIONS(612),
    1,
    anon_sym_XCDR2,
    STATE(154),
    1,
    aux_sym_data_representation_repeat1,
    STATE(159),
    1,
    sym_comment,
    [6451] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(160),
    1,
    sym_comment,
    ACTIONS(620),
    3,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    anon_sym_GT,
    [6463] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(161),
    1,
    sym_comment,
    ACTIONS(570),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6475] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(162),
    1,
    sym_comment,
    ACTIONS(622),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6487] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(457),
    1,
    sym_identifier,
    STATE(163),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    [6503] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(624),
    1,
    anon_sym_SEMI,
    ACTIONS(626),
    1,
    anon_sym_default,
    STATE(164),
    1,
    sym_comment,
    STATE(298),
    1,
    sym_default,
    [6519] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(628),
    1,
    anon_sym_SEMI,
    ACTIONS(630),
    1,
    anon_sym_COMMA,
    STATE(165),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [6533] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(633),
    1,
    anon_sym_SEMI,
    ACTIONS(635),
    1,
    anon_sym_COMMA,
    STATE(165),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(166),
    1,
    sym_comment,
    [6549] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(637),
    1,
    anon_sym_LBRACE,
    ACTIONS(639),
    1,
    anon_sym_COLON,
    STATE(167),
    1,
    sym_comment,
    STATE(299),
    1,
    sym_inherit,
    [6565] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(457),
    1,
    sym_identifier,
    STATE(168),
    1,
    sym_comment,
    STATE(239),
    1,
    sym_scoped_name,
    [6581] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(641),
    1,
    anon_sym_SEMI,
    ACTIONS(643),
    1,
    anon_sym_raises,
    STATE(169),
    1,
    sym_comment,
    STATE(344),
    1,
    sym_interface_except,
    [6597] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(170),
    1,
    sym_comment,
    ACTIONS(645),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6609] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(171),
    1,
    sym_comment,
    ACTIONS(647),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6621] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(172),
    1,
    sym_comment,
    ACTIONS(649),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6633] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(173),
    1,
    sym_comment,
    ACTIONS(651),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [6645] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(174),
    1,
    sym_comment,
    ACTIONS(653),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6657] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(657),
    1,
    anon_sym_LT,
    STATE(175),
    1,
    sym_comment,
    ACTIONS(655),
    2,
    sym_identifier,
    anon_sym_GT,
    [6671] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(176),
    1,
    sym_comment,
    ACTIONS(659),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6683] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(177),
    1,
    sym_comment,
    ACTIONS(661),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [6695] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(178),
    1,
    sym_comment,
    ACTIONS(663),
    3,
    anon_sym_RPAREN,
    sym_identifier,
    anon_sym_GT,
    [6707] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(179),
    1,
    sym_comment,
    ACTIONS(665),
    3,
    anon_sym_RBRACE,
    anon_sym_ATposition,
    sym_identifier,
    [6719] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(180),
    1,
    sym_comment,
    ACTIONS(667),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [6731] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(669),
    1,
    anon_sym_SEMI,
    ACTIONS(671),
    1,
    anon_sym_switch,
    ACTIONS(673),
    1,
    sym_identifier,
    STATE(181),
    1,
    sym_comment,
    [6747] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(635),
    1,
    anon_sym_COMMA,
    ACTIONS(675),
    1,
    anon_sym_SEMI,
    STATE(166),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(182),
    1,
    sym_comment,
    [6763] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(679),
    1,
    anon_sym_XCDR,
    STATE(183),
    1,
    sym_comment,
    ACTIONS(677),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [6777] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(59),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(457),
    1,
    sym_identifier,
    STATE(184),
    1,
    sym_comment,
    STATE(237),
    1,
    sym_scoped_name,
    [6793] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(639),
    1,
    anon_sym_COLON,
    ACTIONS(681),
    1,
    anon_sym_LBRACE,
    STATE(185),
    1,
    sym_comment,
    STATE(250),
    1,
    sym_inherit,
    [6809] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(373),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(683),
    1,
    sym_identifier,
    STATE(186),
    1,
    sym_comment,
    STATE(228),
    1,
    sym_scoped_name,
    [6825] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(187),
    1,
    sym_comment,
    ACTIONS(685),
    3,
    anon_sym_RBRACE,
    anon_sym_COLON_COLON,
    sym_identifier,
    [6837] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(643),
    1,
    anon_sym_raises,
    ACTIONS(687),
    1,
    anon_sym_SEMI,
    STATE(188),
    1,
    sym_comment,
    STATE(327),
    1,
    sym_interface_except,
    [6853] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(189),
    1,
    sym_comment,
    ACTIONS(689),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [6865] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(639),
    1,
    anon_sym_COLON,
    ACTIONS(691),
    1,
    anon_sym_LBRACE,
    STATE(190),
    1,
    sym_comment,
    STATE(338),
    1,
    sym_inherit,
    [6881] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(626),
    1,
    anon_sym_default,
    ACTIONS(693),
    1,
    anon_sym_SEMI,
    STATE(191),
    1,
    sym_comment,
    STATE(256),
    1,
    sym_default,
    [6897] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(192),
    1,
    sym_comment,
    ACTIONS(597),
    3,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_COMMA,
    [6909] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(695),
    1,
    sym_identifier,
    STATE(193),
    1,
    sym_comment,
    STATE(222),
    1,
    aux_sym_inherit_repeat1,
    [6922] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(194),
    1,
    sym_comment,
    ACTIONS(697),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6933] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(195),
    1,
    sym_comment,
    ACTIONS(699),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6944] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(701),
    1,
    anon_sym_RBRACE,
    ACTIONS(703),
    1,
    anon_sym_COMMA,
    STATE(196),
    1,
    sym_comment,
    [6957] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(197),
    1,
    sym_comment,
    ACTIONS(705),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6968] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(198),
    1,
    sym_comment,
    ACTIONS(707),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [6979] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(199),
    1,
    sym_comment,
    ACTIONS(709),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [6990] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(200),
    1,
    sym_comment,
    ACTIONS(711),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [7001] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(703),
    1,
    anon_sym_COMMA,
    ACTIONS(713),
    1,
    anon_sym_RBRACE,
    STATE(201),
    1,
    sym_comment,
    [7014] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(202),
    1,
    sym_comment,
    ACTIONS(715),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [7025] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(203),
    1,
    sym_comment,
    ACTIONS(717),
    2,
    anon_sym_RBRACE,
    anon_sym_COMMA,
    [7036] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(204),
    1,
    sym_comment,
    ACTIONS(719),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [7047] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(205),
    1,
    sym_comment,
    ACTIONS(721),
    2,
    sym_identifier,
    anon_sym_GT,
    [7058] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(723),
    1,
    anon_sym_LBRACE,
    ACTIONS(725),
    1,
    sym_identifier,
    STATE(206),
    1,
    sym_comment,
    [7071] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(207),
    1,
    sym_comment,
    ACTIONS(727),
    2,
    anon_sym_COLON_COLON,
    sym_identifier,
    [7082] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(208),
    1,
    sym_comment,
    ACTIONS(729),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7093] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(703),
    1,
    anon_sym_COMMA,
    ACTIONS(731),
    1,
    anon_sym_RBRACE,
    STATE(209),
    1,
    sym_comment,
    [7106] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(733),
    1,
    anon_sym_RPAREN,
    ACTIONS(735),
    1,
    sym_identifier,
    STATE(210),
    1,
    sym_comment,
    [7119] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(737),
    1,
    aux_sym_char_literal_token1,
    ACTIONS(739),
    1,
    sym_identifier,
    STATE(211),
    1,
    sym_comment,
    [7132] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(741),
    1,
    anon_sym_LBRACE,
    ACTIONS(743),
    1,
    anon_sym_COLON,
    STATE(212),
    1,
    sym_comment,
    [7145] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(213),
    1,
    sym_comment,
    ACTIONS(745),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7156] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(214),
    1,
    sym_comment,
    ACTIONS(747),
    2,
    sym_identifier,
    anon_sym_GT,
    [7167] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(735),
    1,
    sym_identifier,
    ACTIONS(749),
    1,
    anon_sym_RPAREN,
    STATE(215),
    1,
    sym_comment,
    [7180] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(216),
    1,
    sym_comment,
    ACTIONS(751),
    2,
    sym_identifier,
    anon_sym_GT,
    [7191] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(286),
    1,
    aux_sym_char_literal_token1,
    ACTIONS(288),
    1,
    sym_identifier,
    STATE(217),
    1,
    sym_comment,
    [7204] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(218),
    1,
    sym_comment,
    ACTIONS(753),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7215] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(219),
    1,
    sym_comment,
    ACTIONS(755),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [7226] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(735),
    1,
    sym_identifier,
    ACTIONS(757),
    1,
    anon_sym_GT,
    STATE(220),
    1,
    sym_comment,
    [7239] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(221),
    1,
    sym_comment,
    ACTIONS(757),
    2,
    sym_identifier,
    anon_sym_GT,
    [7250] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(759),
    1,
    sym_identifier,
    STATE(222),
    1,
    sym_comment,
    STATE(240),
    1,
    aux_sym_inherit_repeat1,
    [7263] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(294),
    1,
    aux_sym_char_literal_token1,
    ACTIONS(296),
    1,
    sym_identifier,
    STATE(223),
    1,
    sym_comment,
    [7276] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(224),
    1,
    sym_comment,
    ACTIONS(761),
    2,
    sym_identifier,
    anon_sym_GT,
    [7287] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(225),
    1,
    sym_comment,
    ACTIONS(763),
    2,
    sym_identifier,
    anon_sym_GT,
    [7298] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(725),
    1,
    sym_identifier,
    ACTIONS(765),
    1,
    anon_sym_LBRACE,
    STATE(226),
    1,
    sym_comment,
    [7311] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(227),
    1,
    sym_comment,
    ACTIONS(767),
    2,
    sym_identifier,
    anon_sym_GT,
    [7322] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(739),
    1,
    sym_identifier,
    ACTIONS(769),
    1,
    aux_sym_char_literal_token1,
    STATE(228),
    1,
    sym_comment,
    [7335] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(229),
    1,
    sym_comment,
    ACTIONS(771),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7346] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(230),
    1,
    sym_comment,
    ACTIONS(773),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7357] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(628),
    2,
    anon_sym_SEMI,
    anon_sym_COMMA,
    [7368] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(232),
    1,
    sym_comment,
    ACTIONS(775),
    2,
    sym_identifier,
    anon_sym_GT,
    [7379] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(233),
    1,
    sym_comment,
    ACTIONS(777),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7390] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(234),
    1,
    sym_comment,
    ACTIONS(779),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7401] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(235),
    1,
    sym_comment,
    ACTIONS(781),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7412] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(783),
    1,
    sym_identifier,
    STATE(236),
    1,
    sym_comment,
    STATE(296),
    1,
    sym_simple_declarator,
    [7425] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(735),
    1,
    sym_identifier,
    ACTIONS(785),
    1,
    anon_sym_LBRACE,
    STATE(237),
    1,
    sym_comment,
    [7438] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(294),
    1,
    sym_identifier,
    ACTIONS(787),
    1,
    anon_sym_LPAREN,
    STATE(238),
    1,
    sym_comment,
    [7451] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(735),
    1,
    sym_identifier,
    ACTIONS(789),
    1,
    anon_sym_LBRACE,
    STATE(239),
    1,
    sym_comment,
    [7464] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(791),
    1,
    sym_identifier,
    STATE(240),
    2,
    sym_comment,
    aux_sym_inherit_repeat1,
    [7475] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(794),
    1,
    anon_sym_SEMI,
    STATE(241),
    1,
    sym_comment,
    [7485] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(796),
    1,
    anon_sym_EQ,
    STATE(242),
    1,
    sym_comment,
    [7495] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(798),
    1,
    anon_sym_RPAREN,
    STATE(243),
    1,
    sym_comment,
    [7505] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(800),
    1,
    anon_sym_RPAREN,
    STATE(244),
    1,
    sym_comment,
    [7515] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(802),
    1,
    anon_sym_SEMI,
    STATE(245),
    1,
    sym_comment,
    [7525] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(804),
    1,
    sym_identifier,
    STATE(246),
    1,
    sym_comment,
    [7535] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(806),
    1,
    aux_sym_bit_bound_token1,
    STATE(247),
    1,
    sym_comment,
    [7545] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(804),
    1,
    sym_identifier,
    STATE(248),
    1,
    sym_comment,
    [7555] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(808),
    1,
    anon_sym_GT,
    STATE(249),
    1,
    sym_comment,
    [7565] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(810),
    1,
    anon_sym_LBRACE,
    STATE(250),
    1,
    sym_comment,
    [7575] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(812),
    1,
    anon_sym_DQUOTE,
    STATE(251),
    1,
    sym_comment,
    [7585] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(814),
    1,
    sym_identifier,
    STATE(252),
    1,
    sym_comment,
    [7595] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(816),
    1,
    sym_identifier,
    STATE(253),
    1,
    sym_comment,
    [7605] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(818),
    1,
    sym_identifier,
    STATE(254),
    1,
    sym_comment,
    [7615] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(820),
    1,
    anon_sym_name,
    STATE(255),
    1,
    sym_comment,
    [7625] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(822),
    1,
    anon_sym_SEMI,
    STATE(256),
    1,
    sym_comment,
    [7635] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(824),
    1,
    anon_sym_name,
    STATE(257),
    1,
    sym_comment,
    [7645] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(826),
    1,
    anon_sym_LBRACE,
    STATE(258),
    1,
    sym_comment,
    [7655] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(828),
    1,
    sym_identifier,
    STATE(259),
    1,
    sym_comment,
    [7665] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(830),
    1,
    anon_sym_SEMI,
    STATE(260),
    1,
    sym_comment,
    [7675] = 3,
    ACTIONS(832),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(834),
    1,
    aux_sym_comment_token1,
    STATE(261),
    1,
    sym_comment,
    [7685] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(703),
    1,
    anon_sym_COMMA,
    STATE(262),
    1,
    sym_comment,
    [7695] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(836),
    1,
    anon_sym_RBRACK,
    STATE(263),
    1,
    sym_comment,
    [7705] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(838),
    1,
    anon_sym_SEMI,
    STATE(264),
    1,
    sym_comment,
    [7715] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(840),
    1,
    anon_sym_LBRACE,
    STATE(265),
    1,
    sym_comment,
    [7725] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(842),
    1,
    sym_identifier,
    STATE(266),
    1,
    sym_comment,
    [7735] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(844),
    1,
    anon_sym_LPAREN,
    STATE(267),
    1,
    sym_comment,
    [7745] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(846),
    1,
    sym_identifier,
    STATE(268),
    1,
    sym_comment,
    [7755] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(848),
    1,
    anon_sym_SEMI,
    STATE(269),
    1,
    sym_comment,
    [7765] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(850),
    1,
    anon_sym_SQUOTE,
    STATE(270),
    1,
    sym_comment,
    [7775] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(852),
    1,
    anon_sym_SEMI,
    STATE(271),
    1,
    sym_comment,
    [7785] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(757),
    1,
    sym_identifier,
    STATE(272),
    1,
    sym_comment,
    [7795] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(854),
    1,
    anon_sym_LPAREN,
    STATE(273),
    1,
    sym_comment,
    [7805] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(856),
    1,
    anon_sym_LT,
    STATE(274),
    1,
    sym_comment,
    [7815] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(858),
    1,
    sym_identifier,
    STATE(275),
    1,
    sym_comment,
    [7825] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(860),
    1,
    anon_sym_LT,
    STATE(276),
    1,
    sym_comment,
    [7835] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(862),
    1,
    anon_sym_RPAREN,
    STATE(277),
    1,
    sym_comment,
    [7845] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(864),
    1,
    anon_sym_GT,
    STATE(278),
    1,
    sym_comment,
    [7855] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(866),
    1,
    anon_sym_SEMI,
    STATE(279),
    1,
    sym_comment,
    [7865] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(868),
    1,
    anon_sym_SEMI,
    STATE(280),
    1,
    sym_comment,
    [7875] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    aux_sym_char_literal_token1,
    STATE(281),
    1,
    sym_comment,
    [7885] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(735),
    1,
    sym_identifier,
    STATE(282),
    1,
    sym_comment,
    [7895] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(872),
    1,
    anon_sym_SQUOTE,
    STATE(283),
    1,
    sym_comment,
    [7905] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(874),
    1,
    anon_sym_RPAREN,
    STATE(284),
    1,
    sym_comment,
    [7915] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(725),
    1,
    sym_identifier,
    STATE(285),
    1,
    sym_comment,
    [7925] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(876),
    1,
    anon_sym_GT,
    STATE(286),
    1,
    sym_comment,
    [7935] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(878),
    1,
    anon_sym_LBRACE,
    STATE(287),
    1,
    sym_comment,
    [7945] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(880),
    1,
    anon_sym_RPAREN,
    STATE(288),
    1,
    sym_comment,
    [7955] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(733),
    1,
    anon_sym_RPAREN,
    STATE(289),
    1,
    sym_comment,
    [7965] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(882),
    1,
    anon_sym_LBRACE,
    STATE(290),
    1,
    sym_comment,
    [7975] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(884),
    1,
    anon_sym_RPAREN,
    STATE(291),
    1,
    sym_comment,
    [7985] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(886),
    1,
    anon_sym_LBRACE,
    STATE(292),
    1,
    sym_comment,
    [7995] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(888),
    1,
    anon_sym_SEMI,
    STATE(293),
    1,
    sym_comment,
    [8005] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(890),
    1,
    anon_sym_SEMI,
    STATE(294),
    1,
    sym_comment,
    [8015] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(892),
    1,
    anon_sym_SEMI,
    STATE(295),
    1,
    sym_comment,
    [8025] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(894),
    1,
    anon_sym_SEMI,
    STATE(296),
    1,
    sym_comment,
    [8035] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(453),
    1,
    anon_sym_SEMI,
    STATE(297),
    1,
    sym_comment,
    [8045] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(896),
    1,
    anon_sym_SEMI,
    STATE(298),
    1,
    sym_comment,
    [8055] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(691),
    1,
    anon_sym_LBRACE,
    STATE(299),
    1,
    sym_comment,
    [8065] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(898),
    1,
    aux_sym_bit_bound_token1,
    STATE(300),
    1,
    sym_comment,
    [8075] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(900),
    1,
    anon_sym_LBRACE,
    STATE(301),
    1,
    sym_comment,
    [8085] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(902),
    1,
    sym_identifier,
    STATE(302),
    1,
    sym_comment,
    [8095] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(904),
    1,
    anon_sym_bitmask,
    STATE(303),
    1,
    sym_comment,
    [8105] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(906),
    1,
    anon_sym_EQ,
    STATE(304),
    1,
    sym_comment,
    [8115] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(908),
    1,
    anon_sym_SEMI,
    STATE(305),
    1,
    sym_comment,
    [8125] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(910),
    1,
    anon_sym_enum,
    STATE(306),
    1,
    sym_comment,
    [8135] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(912),
    1,
    anon_sym_SEMI,
    STATE(307),
    1,
    sym_comment,
    [8145] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(914),
    1,
    anon_sym_EQ,
    STATE(308),
    1,
    sym_comment,
    [8155] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(916),
    1,
    sym_identifier,
    STATE(309),
    1,
    sym_comment,
    [8165] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(918),
    1,
    anon_sym_SEMI,
    STATE(310),
    1,
    sym_comment,
    [8175] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(920),
    1,
    anon_sym_RPAREN,
    STATE(311),
    1,
    sym_comment,
    [8185] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(922),
    1,
    ts_builtin_sym_end,
    STATE(312),
    1,
    sym_comment,
    [8195] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(924),
    1,
    anon_sym_LBRACE,
    STATE(313),
    1,
    sym_comment,
    [8205] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(926),
    1,
    anon_sym_bitmask,
    STATE(314),
    1,
    sym_comment,
    [8215] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(928),
    1,
    anon_sym_LPAREN,
    STATE(315),
    1,
    sym_comment,
    [8225] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(930),
    1,
    sym_identifier,
    STATE(316),
    1,
    sym_comment,
    [8235] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(932),
    1,
    anon_sym_LPAREN,
    STATE(317),
    1,
    sym_comment,
    [8245] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(934),
    1,
    aux_sym_char_literal_token1,
    STATE(318),
    1,
    sym_comment,
    [8255] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(936),
    1,
    anon_sym_COLON,
    STATE(319),
    1,
    sym_comment,
    [8265] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(938),
    1,
    anon_sym_LPAREN,
    STATE(320),
    1,
    sym_comment,
    [8275] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(940),
    1,
    aux_sym_char_literal_token1,
    STATE(321),
    1,
    sym_comment,
    [8285] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(942),
    1,
    anon_sym_LPAREN,
    STATE(322),
    1,
    sym_comment,
    [8295] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(944),
    1,
    sym_identifier,
    STATE(323),
    1,
    sym_comment,
    [8305] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(946),
    1,
    anon_sym_SEMI,
    STATE(324),
    1,
    sym_comment,
    [8315] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(948),
    1,
    anon_sym_SEMI,
    STATE(325),
    1,
    sym_comment,
    [8325] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(950),
    1,
    anon_sym_LPAREN,
    STATE(326),
    1,
    sym_comment,
    [8335] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(641),
    1,
    anon_sym_SEMI,
    STATE(327),
    1,
    sym_comment,
    [8345] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(952),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(328),
    1,
    sym_comment,
    [8355] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(410),
    1,
    anon_sym_interface,
    STATE(329),
    1,
    sym_comment,
    [8365] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(954),
    1,
    sym_identifier,
    STATE(330),
    1,
    sym_comment,
    [8375] = 3,
    ACTIONS(832),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(956),
    1,
    aux_sym_predefine_token1,
    STATE(331),
    1,
    sym_comment,
    [8385] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(958),
    1,
    sym_identifier,
    STATE(332),
    1,
    sym_comment,
    [8395] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(960),
    1,
    anon_sym_LBRACE,
    STATE(333),
    1,
    sym_comment,
    [8405] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(962),
    1,
    sym_identifier,
    STATE(334),
    1,
    sym_comment,
    [8415] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(964),
    1,
    anon_sym_COLON,
    STATE(335),
    1,
    sym_comment,
    [8425] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(966),
    1,
    anon_sym_SEMI,
    STATE(336),
    1,
    sym_comment,
    [8435] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(968),
    1,
    anon_sym_SEMI,
    STATE(337),
    1,
    sym_comment,
    [8445] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(681),
    1,
    anon_sym_LBRACE,
    STATE(338),
    1,
    sym_comment,
    [8455] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(970),
    1,
    sym_identifier,
    STATE(339),
    1,
    sym_comment,
    [8465] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(972),
    1,
    anon_sym_SEMI,
    STATE(340),
    1,
    sym_comment,
    [8475] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(974),
    1,
    anon_sym_COMMA,
    STATE(341),
    1,
    sym_comment,
    [8485] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(976),
    1,
    anon_sym_enum,
    STATE(342),
    1,
    sym_comment,
    [8495] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(978),
    1,
    sym_identifier,
    STATE(343),
    1,
    sym_comment,
    [8505] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(980),
    1,
    anon_sym_SEMI,
    STATE(344),
    1,
    sym_comment,
    [8515] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(982),
    1,
    anon_sym_SEMI,
    STATE(345),
    1,
    sym_comment,
    [8525] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(984),
    1,
    sym_identifier,
    STATE(346),
    1,
    sym_comment,
    [8535] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(986),
    1,
    anon_sym_GT,
    STATE(347),
    1,
    sym_comment,
    [8545] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(988),
    1,
    anon_sym_SEMI,
    STATE(348),
    1,
    sym_comment,
    [8555] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(990),
    1,
    anon_sym_SEMI,
    STATE(349),
    1,
    sym_comment,
    [8565] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(992),
    1,
    sym_identifier,
    STATE(350),
    1,
    sym_comment,
    [8575] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(994),
    1,
    anon_sym_interface,
    STATE(351),
    1,
    sym_comment,
    [8585] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(996),
    1,
    anon_sym_SEMI,
    STATE(352),
    1,
    sym_comment,
    [8595] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(998),
    1,
    sym_identifier,
    STATE(353),
    1,
    sym_comment,
    [8605] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1000),
    1,
    anon_sym_SEMI,
    STATE(354),
    1,
    sym_comment,
    [8615] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1002),
    1,
    anon_sym_SQUOTE,
    STATE(355),
    1,
    sym_comment,
    [8625] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1004),
    1,
    aux_sym_char_literal_token1,
    STATE(356),
    1,
    sym_comment,
    [8635] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1006),
    1,
    sym_identifier,
    STATE(357),
    1,
    sym_comment,
    [8645] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(284),
    1,
    sym_identifier,
    STATE(358),
    1,
    sym_comment,
    [8655] = 1,
    ACTIONS(1008),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(2)] = 0,
    [SMALL_STATE(3)] = 109,
    [SMALL_STATE(4)] = 218,
    [SMALL_STATE(5)] = 327,
    [SMALL_STATE(6)] = 436,
    [SMALL_STATE(7)] = 545,
    [SMALL_STATE(8)] = 652,
    [SMALL_STATE(9)] = 761,
    [SMALL_STATE(10)] = 870,
    [SMALL_STATE(11)] = 979,
    [SMALL_STATE(12)] = 1088,
    [SMALL_STATE(13)] = 1197,
    [SMALL_STATE(14)] = 1305,
    [SMALL_STATE(15)] = 1405,
    [SMALL_STATE(16)] = 1475,
    [SMALL_STATE(17)] = 1557,
    [SMALL_STATE(18)] = 1614,
    [SMALL_STATE(19)] = 1693,
    [SMALL_STATE(20)] = 1750,
    [SMALL_STATE(21)] = 1807,
    [SMALL_STATE(22)] = 1864,
    [SMALL_STATE(23)] = 1921,
    [SMALL_STATE(24)] = 2036,
    [SMALL_STATE(25)] = 2152,
    [SMALL_STATE(26)] = 2228,
    [SMALL_STATE(27)] = 2344,
    [SMALL_STATE(28)] = 2400,
    [SMALL_STATE(29)] = 2456,
    [SMALL_STATE(30)] = 2512,
    [SMALL_STATE(31)] = 2568,
    [SMALL_STATE(32)] = 2684,
    [SMALL_STATE(33)] = 2745,
    [SMALL_STATE(34)] = 2793,
    [SMALL_STATE(35)] = 2841,
    [SMALL_STATE(36)] = 2898,
    [SMALL_STATE(37)] = 2970,
    [SMALL_STATE(38)] = 3042,
    [SMALL_STATE(39)] = 3114,
    [SMALL_STATE(40)] = 3186,
    [SMALL_STATE(41)] = 3258,
    [SMALL_STATE(42)] = 3289,
    [SMALL_STATE(43)] = 3320,
    [SMALL_STATE(44)] = 3389,
    [SMALL_STATE(45)] = 3420,
    [SMALL_STATE(46)] = 3489,
    [SMALL_STATE(47)] = 3558,
    [SMALL_STATE(48)] = 3589,
    [SMALL_STATE(49)] = 3620,
    [SMALL_STATE(50)] = 3689,
    [SMALL_STATE(51)] = 3758,
    [SMALL_STATE(52)] = 3789,
    [SMALL_STATE(53)] = 3852,
    [SMALL_STATE(54)] = 3912,
    [SMALL_STATE(55)] = 3969,
    [SMALL_STATE(56)] = 3999,
    [SMALL_STATE(57)] = 4027,
    [SMALL_STATE(58)] = 4081,
    [SMALL_STATE(59)] = 4111,
    [SMALL_STATE(60)] = 4139,
    [SMALL_STATE(61)] = 4166,
    [SMALL_STATE(62)] = 4193,
    [SMALL_STATE(63)] = 4220,
    [SMALL_STATE(64)] = 4251,
    [SMALL_STATE(65)] = 4278,
    [SMALL_STATE(66)] = 4305,
    [SMALL_STATE(67)] = 4332,
    [SMALL_STATE(68)] = 4359,
    [SMALL_STATE(69)] = 4386,
    [SMALL_STATE(70)] = 4437,
    [SMALL_STATE(71)] = 4468,
    [SMALL_STATE(72)] = 4495,
    [SMALL_STATE(73)] = 4543,
    [SMALL_STATE(74)] = 4569,
    [SMALL_STATE(75)] = 4595,
    [SMALL_STATE(76)] = 4619,
    [SMALL_STATE(77)] = 4643,
    [SMALL_STATE(78)] = 4674,
    [SMALL_STATE(79)] = 4707,
    [SMALL_STATE(80)] = 4742,
    [SMALL_STATE(81)] = 4775,
    [SMALL_STATE(82)] = 4809,
    [SMALL_STATE(83)] = 4837,
    [SMALL_STATE(84)] = 4871,
    [SMALL_STATE(85)] = 4905,
    [SMALL_STATE(86)] = 4925,
    [SMALL_STATE(87)] = 4959,
    [SMALL_STATE(88)] = 4993,
    [SMALL_STATE(89)] = 5027,
    [SMALL_STATE(90)] = 5059,
    [SMALL_STATE(91)] = 5093,
    [SMALL_STATE(92)] = 5127,
    [SMALL_STATE(93)] = 5147,
    [SMALL_STATE(94)] = 5166,
    [SMALL_STATE(95)] = 5185,
    [SMALL_STATE(96)] = 5203,
    [SMALL_STATE(97)] = 5223,
    [SMALL_STATE(98)] = 5243,
    [SMALL_STATE(99)] = 5262,
    [SMALL_STATE(100)] = 5287,
    [SMALL_STATE(101)] = 5312,
    [SMALL_STATE(102)] = 5337,
    [SMALL_STATE(103)] = 5362,
    [SMALL_STATE(104)] = 5387,
    [SMALL_STATE(105)] = 5412,
    [SMALL_STATE(106)] = 5433,
    [SMALL_STATE(107)] = 5458,
    [SMALL_STATE(108)] = 5475,
    [SMALL_STATE(109)] = 5500,
    [SMALL_STATE(110)] = 5523,
    [SMALL_STATE(111)] = 5540,
    [SMALL_STATE(112)] = 5563,
    [SMALL_STATE(113)] = 5588,
    [SMALL_STATE(114)] = 5609,
    [SMALL_STATE(115)] = 5626,
    [SMALL_STATE(116)] = 5647,
    [SMALL_STATE(117)] = 5670,
    [SMALL_STATE(118)] = 5693,
    [SMALL_STATE(119)] = 5718,
    [SMALL_STATE(120)] = 5743,
    [SMALL_STATE(121)] = 5768,
    [SMALL_STATE(122)] = 5791,
    [SMALL_STATE(123)] = 5816,
    [SMALL_STATE(124)] = 5841,
    [SMALL_STATE(125)] = 5866,
    [SMALL_STATE(126)] = 5883,
    [SMALL_STATE(127)] = 5908,
    [SMALL_STATE(128)] = 5933,
    [SMALL_STATE(129)] = 5947,
    [SMALL_STATE(130)] = 5961,
    [SMALL_STATE(131)] = 5983,
    [SMALL_STATE(132)] = 5997,
    [SMALL_STATE(133)] = 6011,
    [SMALL_STATE(134)] = 6031,
    [SMALL_STATE(135)] = 6051,
    [SMALL_STATE(136)] = 6071,
    [SMALL_STATE(137)] = 6091,
    [SMALL_STATE(138)] = 6108,
    [SMALL_STATE(139)] = 6125,
    [SMALL_STATE(140)] = 6142,
    [SMALL_STATE(141)] = 6159,
    [SMALL_STATE(142)] = 6174,
    [SMALL_STATE(143)] = 6189,
    [SMALL_STATE(144)] = 6202,
    [SMALL_STATE(145)] = 6215,
    [SMALL_STATE(146)] = 6228,
    [SMALL_STATE(147)] = 6243,
    [SMALL_STATE(148)] = 6260,
    [SMALL_STATE(149)] = 6279,
    [SMALL_STATE(150)] = 6296,
    [SMALL_STATE(151)] = 6315,
    [SMALL_STATE(152)] = 6330,
    [SMALL_STATE(153)] = 6347,
    [SMALL_STATE(154)] = 6362,
    [SMALL_STATE(155)] = 6381,
    [SMALL_STATE(156)] = 6394,
    [SMALL_STATE(157)] = 6411,
    [SMALL_STATE(158)] = 6423,
    [SMALL_STATE(159)] = 6435,
    [SMALL_STATE(160)] = 6451,
    [SMALL_STATE(161)] = 6463,
    [SMALL_STATE(162)] = 6475,
    [SMALL_STATE(163)] = 6487,
    [SMALL_STATE(164)] = 6503,
    [SMALL_STATE(165)] = 6519,
    [SMALL_STATE(166)] = 6533,
    [SMALL_STATE(167)] = 6549,
    [SMALL_STATE(168)] = 6565,
    [SMALL_STATE(169)] = 6581,
    [SMALL_STATE(170)] = 6597,
    [SMALL_STATE(171)] = 6609,
    [SMALL_STATE(172)] = 6621,
    [SMALL_STATE(173)] = 6633,
    [SMALL_STATE(174)] = 6645,
    [SMALL_STATE(175)] = 6657,
    [SMALL_STATE(176)] = 6671,
    [SMALL_STATE(177)] = 6683,
    [SMALL_STATE(178)] = 6695,
    [SMALL_STATE(179)] = 6707,
    [SMALL_STATE(180)] = 6719,
    [SMALL_STATE(181)] = 6731,
    [SMALL_STATE(182)] = 6747,
    [SMALL_STATE(183)] = 6763,
    [SMALL_STATE(184)] = 6777,
    [SMALL_STATE(185)] = 6793,
    [SMALL_STATE(186)] = 6809,
    [SMALL_STATE(187)] = 6825,
    [SMALL_STATE(188)] = 6837,
    [SMALL_STATE(189)] = 6853,
    [SMALL_STATE(190)] = 6865,
    [SMALL_STATE(191)] = 6881,
    [SMALL_STATE(192)] = 6897,
    [SMALL_STATE(193)] = 6909,
    [SMALL_STATE(194)] = 6922,
    [SMALL_STATE(195)] = 6933,
    [SMALL_STATE(196)] = 6944,
    [SMALL_STATE(197)] = 6957,
    [SMALL_STATE(198)] = 6968,
    [SMALL_STATE(199)] = 6979,
    [SMALL_STATE(200)] = 6990,
    [SMALL_STATE(201)] = 7001,
    [SMALL_STATE(202)] = 7014,
    [SMALL_STATE(203)] = 7025,
    [SMALL_STATE(204)] = 7036,
    [SMALL_STATE(205)] = 7047,
    [SMALL_STATE(206)] = 7058,
    [SMALL_STATE(207)] = 7071,
    [SMALL_STATE(208)] = 7082,
    [SMALL_STATE(209)] = 7093,
    [SMALL_STATE(210)] = 7106,
    [SMALL_STATE(211)] = 7119,
    [SMALL_STATE(212)] = 7132,
    [SMALL_STATE(213)] = 7145,
    [SMALL_STATE(214)] = 7156,
    [SMALL_STATE(215)] = 7167,
    [SMALL_STATE(216)] = 7180,
    [SMALL_STATE(217)] = 7191,
    [SMALL_STATE(218)] = 7204,
    [SMALL_STATE(219)] = 7215,
    [SMALL_STATE(220)] = 7226,
    [SMALL_STATE(221)] = 7239,
    [SMALL_STATE(222)] = 7250,
    [SMALL_STATE(223)] = 7263,
    [SMALL_STATE(224)] = 7276,
    [SMALL_STATE(225)] = 7287,
    [SMALL_STATE(226)] = 7298,
    [SMALL_STATE(227)] = 7311,
    [SMALL_STATE(228)] = 7322,
    [SMALL_STATE(229)] = 7335,
    [SMALL_STATE(230)] = 7346,
    [SMALL_STATE(231)] = 7357,
    [SMALL_STATE(232)] = 7368,
    [SMALL_STATE(233)] = 7379,
    [SMALL_STATE(234)] = 7390,
    [SMALL_STATE(235)] = 7401,
    [SMALL_STATE(236)] = 7412,
    [SMALL_STATE(237)] = 7425,
    [SMALL_STATE(238)] = 7438,
    [SMALL_STATE(239)] = 7451,
    [SMALL_STATE(240)] = 7464,
    [SMALL_STATE(241)] = 7475,
    [SMALL_STATE(242)] = 7485,
    [SMALL_STATE(243)] = 7495,
    [SMALL_STATE(244)] = 7505,
    [SMALL_STATE(245)] = 7515,
    [SMALL_STATE(246)] = 7525,
    [SMALL_STATE(247)] = 7535,
    [SMALL_STATE(248)] = 7545,
    [SMALL_STATE(249)] = 7555,
    [SMALL_STATE(250)] = 7565,
    [SMALL_STATE(251)] = 7575,
    [SMALL_STATE(252)] = 7585,
    [SMALL_STATE(253)] = 7595,
    [SMALL_STATE(254)] = 7605,
    [SMALL_STATE(255)] = 7615,
    [SMALL_STATE(256)] = 7625,
    [SMALL_STATE(257)] = 7635,
    [SMALL_STATE(258)] = 7645,
    [SMALL_STATE(259)] = 7655,
    [SMALL_STATE(260)] = 7665,
    [SMALL_STATE(261)] = 7675,
    [SMALL_STATE(262)] = 7685,
    [SMALL_STATE(263)] = 7695,
    [SMALL_STATE(264)] = 7705,
    [SMALL_STATE(265)] = 7715,
    [SMALL_STATE(266)] = 7725,
    [SMALL_STATE(267)] = 7735,
    [SMALL_STATE(268)] = 7745,
    [SMALL_STATE(269)] = 7755,
    [SMALL_STATE(270)] = 7765,
    [SMALL_STATE(271)] = 7775,
    [SMALL_STATE(272)] = 7785,
    [SMALL_STATE(273)] = 7795,
    [SMALL_STATE(274)] = 7805,
    [SMALL_STATE(275)] = 7815,
    [SMALL_STATE(276)] = 7825,
    [SMALL_STATE(277)] = 7835,
    [SMALL_STATE(278)] = 7845,
    [SMALL_STATE(279)] = 7855,
    [SMALL_STATE(280)] = 7865,
    [SMALL_STATE(281)] = 7875,
    [SMALL_STATE(282)] = 7885,
    [SMALL_STATE(283)] = 7895,
    [SMALL_STATE(284)] = 7905,
    [SMALL_STATE(285)] = 7915,
    [SMALL_STATE(286)] = 7925,
    [SMALL_STATE(287)] = 7935,
    [SMALL_STATE(288)] = 7945,
    [SMALL_STATE(289)] = 7955,
    [SMALL_STATE(290)] = 7965,
    [SMALL_STATE(291)] = 7975,
    [SMALL_STATE(292)] = 7985,
    [SMALL_STATE(293)] = 7995,
    [SMALL_STATE(294)] = 8005,
    [SMALL_STATE(295)] = 8015,
    [SMALL_STATE(296)] = 8025,
    [SMALL_STATE(297)] = 8035,
    [SMALL_STATE(298)] = 8045,
    [SMALL_STATE(299)] = 8055,
    [SMALL_STATE(300)] = 8065,
    [SMALL_STATE(301)] = 8075,
    [SMALL_STATE(302)] = 8085,
    [SMALL_STATE(303)] = 8095,
    [SMALL_STATE(304)] = 8105,
    [SMALL_STATE(305)] = 8115,
    [SMALL_STATE(306)] = 8125,
    [SMALL_STATE(307)] = 8135,
    [SMALL_STATE(308)] = 8145,
    [SMALL_STATE(309)] = 8155,
    [SMALL_STATE(310)] = 8165,
    [SMALL_STATE(311)] = 8175,
    [SMALL_STATE(312)] = 8185,
    [SMALL_STATE(313)] = 8195,
    [SMALL_STATE(314)] = 8205,
    [SMALL_STATE(315)] = 8215,
    [SMALL_STATE(316)] = 8225,
    [SMALL_STATE(317)] = 8235,
    [SMALL_STATE(318)] = 8245,
    [SMALL_STATE(319)] = 8255,
    [SMALL_STATE(320)] = 8265,
    [SMALL_STATE(321)] = 8275,
    [SMALL_STATE(322)] = 8285,
    [SMALL_STATE(323)] = 8295,
    [SMALL_STATE(324)] = 8305,
    [SMALL_STATE(325)] = 8315,
    [SMALL_STATE(326)] = 8325,
    [SMALL_STATE(327)] = 8335,
    [SMALL_STATE(328)] = 8345,
    [SMALL_STATE(329)] = 8355,
    [SMALL_STATE(330)] = 8365,
    [SMALL_STATE(331)] = 8375,
    [SMALL_STATE(332)] = 8385,
    [SMALL_STATE(333)] = 8395,
    [SMALL_STATE(334)] = 8405,
    [SMALL_STATE(335)] = 8415,
    [SMALL_STATE(336)] = 8425,
    [SMALL_STATE(337)] = 8435,
    [SMALL_STATE(338)] = 8445,
    [SMALL_STATE(339)] = 8455,
    [SMALL_STATE(340)] = 8465,
    [SMALL_STATE(341)] = 8475,
    [SMALL_STATE(342)] = 8485,
    [SMALL_STATE(343)] = 8495,
    [SMALL_STATE(344)] = 8505,
    [SMALL_STATE(345)] = 8515,
    [SMALL_STATE(346)] = 8525,
    [SMALL_STATE(347)] = 8535,
    [SMALL_STATE(348)] = 8545,
    [SMALL_STATE(349)] = 8555,
    [SMALL_STATE(350)] = 8565,
    [SMALL_STATE(351)] = 8575,
    [SMALL_STATE(352)] = 8585,
    [SMALL_STATE(353)] = 8595,
    [SMALL_STATE(354)] = 8605,
    [SMALL_STATE(355)] = 8615,
    [SMALL_STATE(356)] = 8625,
    [SMALL_STATE(357)] = 8635,
    [SMALL_STATE(358)] = 8645,
    [SMALL_STATE(359)] = 8655,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(357),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(346),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(343),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(342),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(339),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(333),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(331),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(329),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(323),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(129),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(322),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(320),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(317),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(315),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(233),
    [49] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(332),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(178),
    [57] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(178),
    [59] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(145),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(276),
    [65] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(175),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(274),
    [69] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(197),
    [71] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(194),
    [73] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [75] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [77] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(28),
    [80] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(328),
    [83] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(332),
    [86] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(178),
    [89] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(178),
    [92] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(282),
    [95] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(145),
    [98] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(276),
    [101] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(175),
    [104] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(274),
    [107] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(325),
    [109] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(230),
    [111] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(235),
    [113] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(307),
    [115] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(208),
    [117] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(346),
    [119] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(343),
    [121] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(334),
    [123] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(28),
    [126] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(328),
    [129] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(332),
    [132] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [134] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [136] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [138] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(205),
    [140] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [142] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [144] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 12),
    [146] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 12),
    [148] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 7),
    [150] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 7),
    [152] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 7),
    [154] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 7),
    [156] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 12),
    [158] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 12),
    [160] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [162] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(357),
    [165] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(236),
    [168] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(350),
    [171] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(346),
    [174] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(343),
    [177] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(342),
    [180] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(339),
    [183] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(334),
    [186] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(333),
    [189] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(13),
    [192] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(331),
    [195] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(329),
    [198] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(323),
    [201] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(129),
    [204] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(322),
    [207] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(320),
    [210] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(32),
    [213] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(317),
    [216] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(177),
    [219] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(315),
    [222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [224] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(340),
    [226] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [228] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [230] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [232] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [234] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 11),
    [236] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 11),
    [238] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [240] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [242] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(294),
    [244] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [246] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [248] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [250] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [252] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(114),
    [254] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [256] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [258] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(356),
    [260] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(355),
    [262] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(60),
    [264] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(358),
    [266] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [268] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [270] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [272] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [274] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [276] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 6),
    [278] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [280] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [282] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [284] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [286] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [288] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [290] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [292] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [294] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [296] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [298] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [300] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [302] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [304] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [306] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_wchar_literal, 4, .production_id = 13),
    [308] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_wchar_literal, 4, .production_id = 13),
    [310] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [312] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [314] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(72),
    [316] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [318] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [320] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [322] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [324] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [326] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 10),
    [328] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 10),
    [330] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [332] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [334] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [336] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [338] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [340] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [342] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [344] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [346] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [348] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [350] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [352] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [354] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [356] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [358] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_function_repeat1, 2),
    [360] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_function_repeat1, 2),
    SHIFT_REPEAT(207),
    [363] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_function_repeat1, 2),
    SHIFT_REPEAT(302),
    [366] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_function_repeat1, 2),
    SHIFT_REPEAT(217),
    [369] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(188),
    [371] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(207),
    [373] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(302),
    [375] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(217),
    [377] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [379] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(169),
    [381] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(260),
    [383] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(25),
    [385] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_repeat1, 2),
    [387] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_repeat1, 2),
    SHIFT_REPEAT(129),
    [390] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_repeat1, 2),
    SHIFT_REPEAT(322),
    [393] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_repeat1, 2),
    SHIFT_REPEAT(320),
    [396] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(324),
    [398] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [400] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [402] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [404] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(337),
    [406] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(280),
    [408] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [410] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(268),
    [412] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [414] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [416] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [418] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [420] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [422] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [424] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_function_arg, 2),
    [426] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(107),
    [428] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_function_arg, 2),
    [430] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_function_arg, 3),
    [432] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(110),
    [434] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_function_arg, 3),
    [436] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [438] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(37),
    [441] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(202),
    [443] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(198),
    [445] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(354),
    [447] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(273),
    [449] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(141),
    [451] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(241),
    [453] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [455] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [457] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [459] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(349),
    [461] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    [463] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    SHIFT_REPEAT(282),
    [466] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 2),
    SHIFT_REPEAT(145),
    [469] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_function_arg, 4),
    [471] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_function_arg, 4),
    [473] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [475] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(319),
    [478] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(46),
    [481] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [483] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [485] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [487] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_repeat2, 2),
    [489] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_repeat2, 2),
    SHIFT_REPEAT(25),
    [492] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_repeat2, 2),
    [494] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_repeat3, 2),
    [496] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_repeat3, 2),
    SHIFT_REPEAT(282),
    [499] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_repeat3, 2),
    SHIFT_REPEAT(145),
    [502] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(202),
    [505] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(198),
    [508] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(345),
    [510] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(271),
    [512] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 2),
    [514] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 2),
    SHIFT_REPEAT(273),
    [517] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 2),
    SHIFT_REPEAT(141),
    [520] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(234),
    [522] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(319),
    [524] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [526] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(218),
    [528] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [530] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_function_repeat1, 1),
    [532] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_function_repeat1, 1),
    [534] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_repeat1, 1),
    [536] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [538] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [540] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [542] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [544] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [546] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [548] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(177),
    [551] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(315),
    [554] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [556] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(183),
    [559] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(183),
    [562] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [564] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [566] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_field, 1),
    [568] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [570] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_field, 2),
    [572] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [574] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [576] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_attribute, 3),
    [578] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_interface_attribute, 3),
    [580] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [582] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [584] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [586] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [588] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(49),
    [590] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(202),
    [593] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [595] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [597] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [599] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(139),
    [602] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [604] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_repeat2, 1),
    [606] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_repeat2, 1),
    [608] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(180),
    [610] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(183),
    [612] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(183),
    [614] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [616] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [618] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_field, 4),
    [620] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [622] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_function, 6),
    [624] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [626] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [628] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [630] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(138),
    [633] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [635] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [637] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [639] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [641] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(162),
    [643] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [645] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_repeat3, 1),
    [647] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_field, 3),
    [649] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_function, 5),
    [651] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [653] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_repeat1, 1),
    [655] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [657] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [659] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_function, 7),
    [661] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [663] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_primitive_type, 1),
    [665] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_field, 3),
    [667] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 3),
    [669] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [671] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(267),
    [673] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [675] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [677] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [679] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [681] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [683] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(217),
    [685] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_repeat1, 1),
    [687] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(172),
    [689] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [691] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [693] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [695] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(226),
    [697] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 14),
    [699] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 8),
    [701] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [703] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(200),
    [705] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [707] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [709] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [711] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [713] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(229),
    [715] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [717] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [719] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [721] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [723] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inherit, 3, .production_id = 5),
    [725] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_inherit_repeat1, 1, .production_id = 1),
    [727] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_modifier, 1),
    [729] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [731] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(213),
    [733] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [735] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(143),
    [737] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [739] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(223),
    [741] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [743] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(184),
    [745] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [747] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [749] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(352),
    [751] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [753] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [755] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [757] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [759] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(206),
    [761] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [763] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [765] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_inherit, 2, .production_id = 2),
    [767] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [769] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [771] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [773] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 14),
    [775] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [777] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 8),
    [779] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [781] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [783] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(297),
    [785] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [787] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [789] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(2),
    [791] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_inherit_repeat1, 2, .production_id = 6),
    SHIFT_REPEAT(285),
    [794] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask, 5),
    [796] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [798] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(132),
    [800] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(131),
    [802] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [804] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [806] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(288),
    [808] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(214),
    [810] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [812] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [814] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [816] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [818] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(308),
    [820] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(304),
    [822] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [824] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(242),
    [826] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [828] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(212),
    [830] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface, 5),
    [832] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(261),
    [834] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(359),
    [836] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [838] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [840] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(123),
    [842] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_position, 4, .production_id = 9),
    [844] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [846] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [848] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [850] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [852] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask, 3),
    [854] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(247),
    [856] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [858] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(142),
    [860] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [862] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [864] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(216),
    [866] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [868] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface, 6),
    [870] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(270),
    [872] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [874] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [876] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(225),
    [878] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(108),
    [880] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(266),
    [882] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [884] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(265),
    [886] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [888] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation, 5),
    [890] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [892] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [894] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [896] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [898] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(311),
    [900] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [902] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(223),
    [904] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [906] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(318),
    [908] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface, 7),
    [910] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(253),
    [912] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [914] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [916] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(251),
    [918] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [920] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(314),
    [922] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [924] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [926] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_bound, 4),
    [928] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(159),
    [930] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
    [932] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(300),
    [934] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(244),
    [936] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [938] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(255),
    [940] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(243),
    [942] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(257),
    [944] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [946] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface, 8),
    [948] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [950] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(163),
    [952] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [954] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [956] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(47),
    [958] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [960] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(120),
    [962] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [964] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [966] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(189),
    [968] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface, 4),
    [970] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(287),
    [972] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [974] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [976] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [978] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(290),
    [980] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [982] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface, 9),
    [984] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [986] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(227),
    [988] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [990] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation, 4),
    [992] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(292),
    [994] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(316),
    [996] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_except, 4),
    [998] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(148),
    [1000] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask, 4),
    [1002] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(281),
    [1004] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(283),
    [1006] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(301),
    [1008] = { .entry = { .count = 1, .reusable = true } },
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
