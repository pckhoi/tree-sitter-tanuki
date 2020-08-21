#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_STAR_STAR = 3,
  anon_sym_STAR = 4,
  anon_sym_SLASH = 5,
  anon_sym_SLASH_SLASH = 6,
  anon_sym_PERCENT = 7,
  anon_sym_PLUS = 8,
  anon_sym_DASH = 9,
  anon_sym_LBRACK = 10,
  anon_sym_COMMA = 11,
  anon_sym_RBRACK = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_AMP = 15,
  anon_sym_CARET = 16,
  anon_sym_PIPE = 17,
  anon_sym_TILDE = 18,
  anon_sym_COLON = 19,
  anon_sym_EQ_EQ = 20,
  anon_sym_BANG_EQ = 21,
  anon_sym_GT = 22,
  anon_sym_LT = 23,
  anon_sym_GT_EQ = 24,
  anon_sym_LT_EQ = 25,
  anon_sym_match = 26,
  anon_sym_match_ignorecase = 27,
  anon_sym_contains = 28,
  anon_sym_contains_ignorecase = 29,
  anon_sym_isna = 30,
  anon_sym_notna = 31,
  anon_sym_duplicated = 32,
  anon_sym_duplicated_first = 33,
  anon_sym_duplicated_last = 34,
  anon_sym_duplicated_all = 35,
  anon_sym_DOT = 36,
  anon_sym_dt = 37,
  sym_identifier = 38,
  sym_float = 39,
  sym_int = 40,
  sym_string = 41,
  sym_regex = 42,
  sym_expr = 43,
  sym__expr = 44,
  sym__non_scalar = 45,
  sym__braced_arithmetic = 46,
  sym_arithmetic = 47,
  sym_exp = 48,
  sym_mul = 49,
  sym_div = 50,
  sym_floordiv = 51,
  sym_mod = 52,
  sym_add = 53,
  sym_sub = 54,
  sym_selection = 55,
  sym__select = 56,
  sym__row_select = 57,
  sym_df_loc = 58,
  sym_row_loc = 59,
  sym_multiindex = 60,
  sym_df_iloc = 61,
  sym_row_iloc = 62,
  sym__row_loc = 63,
  sym__row_label = 64,
  sym__boolean_index = 65,
  sym_and = 66,
  sym_xor = 67,
  sym_or = 68,
  sym__braced_bool = 69,
  sym_braced_bool = 70,
  sym_not = 71,
  sym_multiindex_slice = 72,
  sym_multiindex_each_slice = 73,
  sym_multiindex_list = 74,
  sym__multiindex_sl_part = 75,
  sym_scalar_slice = 76,
  sym_scalar_list = 77,
  sym_column_slice = 78,
  sym_column_list = 79,
  sym__bool_ind = 80,
  sym__comparison = 81,
  sym_eq = 82,
  sym_ne = 83,
  sym_gt = 84,
  sym_lt = 85,
  sym_gte = 86,
  sym_lte = 87,
  sym__comp_operand = 88,
  sym__bool_func = 89,
  sym_func_match = 90,
  sym_func_match_ignorecase = 91,
  sym_func_contains = 92,
  sym_func_contains_ignorecase = 93,
  sym_func_isna = 94,
  sym_func_notna = 95,
  sym_func_duplicated = 96,
  sym_func_duplicated_first = 97,
  sym_func_duplicated_last = 98,
  sym_func_duplicated_all = 99,
  sym__func_operand = 100,
  sym__col_loc = 101,
  sym__iloc = 102,
  sym_int_slice = 103,
  sym_int_list = 104,
  sym__scalar = 105,
  sym_column = 106,
  sym_column_shorthand = 107,
  sym_table = 108,
  sym_datetime = 109,
  aux_sym_multiindex_repeat1 = 110,
  aux_sym_multiindex_each_slice_repeat1 = 111,
  aux_sym_multiindex_list_repeat1 = 112,
  aux_sym_column_list_repeat1 = 113,
  aux_sym_int_list_repeat1 = 114,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_match] = "match",
  [anon_sym_match_ignorecase] = "match_ignorecase",
  [anon_sym_contains] = "contains",
  [anon_sym_contains_ignorecase] = "contains_ignorecase",
  [anon_sym_isna] = "isna",
  [anon_sym_notna] = "notna",
  [anon_sym_duplicated] = "duplicated",
  [anon_sym_duplicated_first] = "duplicated_first",
  [anon_sym_duplicated_last] = "duplicated_last",
  [anon_sym_duplicated_all] = "duplicated_all",
  [anon_sym_DOT] = ".",
  [anon_sym_dt] = "dt",
  [sym_identifier] = "identifier",
  [sym_float] = "float",
  [sym_int] = "int",
  [sym_string] = "string",
  [sym_regex] = "regex",
  [sym_expr] = "expr",
  [sym__expr] = "_expr",
  [sym__non_scalar] = "_non_scalar",
  [sym__braced_arithmetic] = "_braced_arithmetic",
  [sym_arithmetic] = "arithmetic",
  [sym_exp] = "exp",
  [sym_mul] = "mul",
  [sym_div] = "div",
  [sym_floordiv] = "floordiv",
  [sym_mod] = "mod",
  [sym_add] = "add",
  [sym_sub] = "sub",
  [sym_selection] = "selection",
  [sym__select] = "_select",
  [sym__row_select] = "_row_select",
  [sym_df_loc] = "df_loc",
  [sym_row_loc] = "row_loc",
  [sym_multiindex] = "multiindex",
  [sym_df_iloc] = "df_iloc",
  [sym_row_iloc] = "row_iloc",
  [sym__row_loc] = "_row_loc",
  [sym__row_label] = "_row_label",
  [sym__boolean_index] = "_boolean_index",
  [sym_and] = "and",
  [sym_xor] = "xor",
  [sym_or] = "or",
  [sym__braced_bool] = "_braced_bool",
  [sym_braced_bool] = "braced_bool",
  [sym_not] = "not",
  [sym_multiindex_slice] = "multiindex_slice",
  [sym_multiindex_each_slice] = "multiindex_each_slice",
  [sym_multiindex_list] = "multiindex_list",
  [sym__multiindex_sl_part] = "_multiindex_sl_part",
  [sym_scalar_slice] = "scalar_slice",
  [sym_scalar_list] = "scalar_list",
  [sym_column_slice] = "column_slice",
  [sym_column_list] = "column_list",
  [sym__bool_ind] = "_bool_ind",
  [sym__comparison] = "_comparison",
  [sym_eq] = "eq",
  [sym_ne] = "ne",
  [sym_gt] = "gt",
  [sym_lt] = "lt",
  [sym_gte] = "gte",
  [sym_lte] = "lte",
  [sym__comp_operand] = "_comp_operand",
  [sym__bool_func] = "_bool_func",
  [sym_func_match] = "func_match",
  [sym_func_match_ignorecase] = "func_match_ignorecase",
  [sym_func_contains] = "func_contains",
  [sym_func_contains_ignorecase] = "func_contains_ignorecase",
  [sym_func_isna] = "func_isna",
  [sym_func_notna] = "func_notna",
  [sym_func_duplicated] = "func_duplicated",
  [sym_func_duplicated_first] = "func_duplicated_first",
  [sym_func_duplicated_last] = "func_duplicated_last",
  [sym_func_duplicated_all] = "func_duplicated_all",
  [sym__func_operand] = "_func_operand",
  [sym__col_loc] = "_col_loc",
  [sym__iloc] = "_iloc",
  [sym_int_slice] = "int_slice",
  [sym_int_list] = "int_list",
  [sym__scalar] = "_scalar",
  [sym_column] = "column",
  [sym_column_shorthand] = "column_shorthand",
  [sym_table] = "table",
  [sym_datetime] = "datetime",
  [aux_sym_multiindex_repeat1] = "multiindex_repeat1",
  [aux_sym_multiindex_each_slice_repeat1] = "multiindex_each_slice_repeat1",
  [aux_sym_multiindex_list_repeat1] = "multiindex_list_repeat1",
  [aux_sym_column_list_repeat1] = "column_list_repeat1",
  [aux_sym_int_list_repeat1] = "int_list_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_match_ignorecase] = anon_sym_match_ignorecase,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_contains_ignorecase] = anon_sym_contains_ignorecase,
  [anon_sym_isna] = anon_sym_isna,
  [anon_sym_notna] = anon_sym_notna,
  [anon_sym_duplicated] = anon_sym_duplicated,
  [anon_sym_duplicated_first] = anon_sym_duplicated_first,
  [anon_sym_duplicated_last] = anon_sym_duplicated_last,
  [anon_sym_duplicated_all] = anon_sym_duplicated_all,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_dt] = anon_sym_dt,
  [sym_identifier] = sym_identifier,
  [sym_float] = sym_float,
  [sym_int] = sym_int,
  [sym_string] = sym_string,
  [sym_regex] = sym_regex,
  [sym_expr] = sym_expr,
  [sym__expr] = sym__expr,
  [sym__non_scalar] = sym__non_scalar,
  [sym__braced_arithmetic] = sym__braced_arithmetic,
  [sym_arithmetic] = sym_arithmetic,
  [sym_exp] = sym_exp,
  [sym_mul] = sym_mul,
  [sym_div] = sym_div,
  [sym_floordiv] = sym_floordiv,
  [sym_mod] = sym_mod,
  [sym_add] = sym_add,
  [sym_sub] = sym_sub,
  [sym_selection] = sym_selection,
  [sym__select] = sym__select,
  [sym__row_select] = sym__row_select,
  [sym_df_loc] = sym_df_loc,
  [sym_row_loc] = sym_row_loc,
  [sym_multiindex] = sym_multiindex,
  [sym_df_iloc] = sym_df_iloc,
  [sym_row_iloc] = sym_row_iloc,
  [sym__row_loc] = sym__row_loc,
  [sym__row_label] = sym__row_label,
  [sym__boolean_index] = sym__boolean_index,
  [sym_and] = sym_and,
  [sym_xor] = sym_xor,
  [sym_or] = sym_or,
  [sym__braced_bool] = sym__braced_bool,
  [sym_braced_bool] = sym_braced_bool,
  [sym_not] = sym_not,
  [sym_multiindex_slice] = sym_multiindex_slice,
  [sym_multiindex_each_slice] = sym_multiindex_each_slice,
  [sym_multiindex_list] = sym_multiindex_list,
  [sym__multiindex_sl_part] = sym__multiindex_sl_part,
  [sym_scalar_slice] = sym_scalar_slice,
  [sym_scalar_list] = sym_scalar_list,
  [sym_column_slice] = sym_column_slice,
  [sym_column_list] = sym_column_list,
  [sym__bool_ind] = sym__bool_ind,
  [sym__comparison] = sym__comparison,
  [sym_eq] = sym_eq,
  [sym_ne] = sym_ne,
  [sym_gt] = sym_gt,
  [sym_lt] = sym_lt,
  [sym_gte] = sym_gte,
  [sym_lte] = sym_lte,
  [sym__comp_operand] = sym__comp_operand,
  [sym__bool_func] = sym__bool_func,
  [sym_func_match] = sym_func_match,
  [sym_func_match_ignorecase] = sym_func_match_ignorecase,
  [sym_func_contains] = sym_func_contains,
  [sym_func_contains_ignorecase] = sym_func_contains_ignorecase,
  [sym_func_isna] = sym_func_isna,
  [sym_func_notna] = sym_func_notna,
  [sym_func_duplicated] = sym_func_duplicated,
  [sym_func_duplicated_first] = sym_func_duplicated_first,
  [sym_func_duplicated_last] = sym_func_duplicated_last,
  [sym_func_duplicated_all] = sym_func_duplicated_all,
  [sym__func_operand] = sym__func_operand,
  [sym__col_loc] = sym__col_loc,
  [sym__iloc] = sym__iloc,
  [sym_int_slice] = sym_int_slice,
  [sym_int_list] = sym_int_list,
  [sym__scalar] = sym__scalar,
  [sym_column] = sym_column,
  [sym_column_shorthand] = sym_column_shorthand,
  [sym_table] = sym_table,
  [sym_datetime] = sym_datetime,
  [aux_sym_multiindex_repeat1] = aux_sym_multiindex_repeat1,
  [aux_sym_multiindex_each_slice_repeat1] = aux_sym_multiindex_each_slice_repeat1,
  [aux_sym_multiindex_list_repeat1] = aux_sym_multiindex_list_repeat1,
  [aux_sym_column_list_repeat1] = aux_sym_column_list_repeat1,
  [aux_sym_int_list_repeat1] = aux_sym_int_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
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
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match_ignorecase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains_ignorecase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notna] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duplicated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duplicated_first] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duplicated_last] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duplicated_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dt] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__non_scalar] = {
    .visible = false,
    .named = true,
  },
  [sym__braced_arithmetic] = {
    .visible = false,
    .named = true,
  },
  [sym_arithmetic] = {
    .visible = true,
    .named = true,
  },
  [sym_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_mul] = {
    .visible = true,
    .named = true,
  },
  [sym_div] = {
    .visible = true,
    .named = true,
  },
  [sym_floordiv] = {
    .visible = true,
    .named = true,
  },
  [sym_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_selection] = {
    .visible = true,
    .named = true,
  },
  [sym__select] = {
    .visible = false,
    .named = true,
  },
  [sym__row_select] = {
    .visible = false,
    .named = true,
  },
  [sym_df_loc] = {
    .visible = true,
    .named = true,
  },
  [sym_row_loc] = {
    .visible = true,
    .named = true,
  },
  [sym_multiindex] = {
    .visible = true,
    .named = true,
  },
  [sym_df_iloc] = {
    .visible = true,
    .named = true,
  },
  [sym_row_iloc] = {
    .visible = true,
    .named = true,
  },
  [sym__row_loc] = {
    .visible = false,
    .named = true,
  },
  [sym__row_label] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean_index] = {
    .visible = false,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_xor] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym__braced_bool] = {
    .visible = false,
    .named = true,
  },
  [sym_braced_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_multiindex_slice] = {
    .visible = true,
    .named = true,
  },
  [sym_multiindex_each_slice] = {
    .visible = true,
    .named = true,
  },
  [sym_multiindex_list] = {
    .visible = true,
    .named = true,
  },
  [sym__multiindex_sl_part] = {
    .visible = false,
    .named = true,
  },
  [sym_scalar_slice] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar_list] = {
    .visible = true,
    .named = true,
  },
  [sym_column_slice] = {
    .visible = true,
    .named = true,
  },
  [sym_column_list] = {
    .visible = true,
    .named = true,
  },
  [sym__bool_ind] = {
    .visible = false,
    .named = true,
  },
  [sym__comparison] = {
    .visible = false,
    .named = true,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_ne] = {
    .visible = true,
    .named = true,
  },
  [sym_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_gte] = {
    .visible = true,
    .named = true,
  },
  [sym_lte] = {
    .visible = true,
    .named = true,
  },
  [sym__comp_operand] = {
    .visible = false,
    .named = true,
  },
  [sym__bool_func] = {
    .visible = false,
    .named = true,
  },
  [sym_func_match] = {
    .visible = true,
    .named = true,
  },
  [sym_func_match_ignorecase] = {
    .visible = true,
    .named = true,
  },
  [sym_func_contains] = {
    .visible = true,
    .named = true,
  },
  [sym_func_contains_ignorecase] = {
    .visible = true,
    .named = true,
  },
  [sym_func_isna] = {
    .visible = true,
    .named = true,
  },
  [sym_func_notna] = {
    .visible = true,
    .named = true,
  },
  [sym_func_duplicated] = {
    .visible = true,
    .named = true,
  },
  [sym_func_duplicated_first] = {
    .visible = true,
    .named = true,
  },
  [sym_func_duplicated_last] = {
    .visible = true,
    .named = true,
  },
  [sym_func_duplicated_all] = {
    .visible = true,
    .named = true,
  },
  [sym__func_operand] = {
    .visible = false,
    .named = true,
  },
  [sym__col_loc] = {
    .visible = false,
    .named = true,
  },
  [sym__iloc] = {
    .visible = false,
    .named = true,
  },
  [sym_int_slice] = {
    .visible = true,
    .named = true,
  },
  [sym_int_list] = {
    .visible = true,
    .named = true,
  },
  [sym__scalar] = {
    .visible = false,
    .named = true,
  },
  [sym_column] = {
    .visible = true,
    .named = true,
  },
  [sym_column_shorthand] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_datetime] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_multiindex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiindex_each_slice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiindex_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arithmetic = 1,
  field_begin = 2,
  field_boolean_index = 3,
  field_col_iloc = 4,
  field_col_loc = 5,
  field_column = 6,
  field_end = 7,
  field_expr = 8,
  field_iloc = 9,
  field_int = 10,
  field_item = 11,
  field_left = 12,
  field_other_columns = 13,
  field_other_ints = 14,
  field_other_items = 15,
  field_other_scalars = 16,
  field_other_sl_parts = 17,
  field_right = 18,
  field_row_iloc = 19,
  field_row_loc = 20,
  field_row_select = 21,
  field_scalar = 22,
  field_select = 23,
  field_sl_part = 24,
  field_table = 25,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arithmetic] = "arithmetic",
  [field_begin] = "begin",
  [field_boolean_index] = "boolean_index",
  [field_col_iloc] = "col_iloc",
  [field_col_loc] = "col_loc",
  [field_column] = "column",
  [field_end] = "end",
  [field_expr] = "expr",
  [field_iloc] = "iloc",
  [field_int] = "int",
  [field_item] = "item",
  [field_left] = "left",
  [field_other_columns] = "other_columns",
  [field_other_ints] = "other_ints",
  [field_other_items] = "other_items",
  [field_other_scalars] = "other_scalars",
  [field_other_sl_parts] = "other_sl_parts",
  [field_right] = "right",
  [field_row_iloc] = "row_iloc",
  [field_row_loc] = "row_loc",
  [field_row_select] = "row_select",
  [field_scalar] = "scalar",
  [field_select] = "select",
  [field_sl_part] = "sl_part",
  [field_table] = "table",
};

static const TSFieldMapSlice ts_field_map_slices[36] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 1},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 1},
  [16] = {.index = 22, .length = 1},
  [17] = {.index = 23, .length = 1},
  [18] = {.index = 24, .length = 1},
  [19] = {.index = 25, .length = 1},
  [20] = {.index = 26, .length = 1},
  [21] = {.index = 27, .length = 2},
  [22] = {.index = 29, .length = 1},
  [23] = {.index = 30, .length = 3},
  [24] = {.index = 33, .length = 2},
  [25] = {.index = 35, .length = 3},
  [26] = {.index = 38, .length = 2},
  [27] = {.index = 40, .length = 3},
  [28] = {.index = 43, .length = 2},
  [29] = {.index = 45, .length = 1},
  [30] = {.index = 46, .length = 3},
  [31] = {.index = 49, .length = 2},
  [32] = {.index = 51, .length = 2},
  [33] = {.index = 53, .length = 2},
  [34] = {.index = 55, .length = 3},
  [35] = {.index = 58, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arithmetic, 0, .inherited = true},
    {field_expr, 0},
  [2] =
    {field_arithmetic, 0, .inherited = true},
  [3] =
    {field_arithmetic, 0},
  [4] =
    {field_column, 0},
    {field_row_select, 1},
  [6] =
    {field_select, 1},
    {field_table, 0},
  [8] =
    {field_arithmetic, 1, .inherited = true},
    {field_expr, 1},
  [10] =
    {field_arithmetic, 1},
  [11] =
    {field_column, 2},
    {field_table, 0},
  [13] =
    {field_left, 0},
    {field_right, 2},
  [15] =
    {field_expr, 1},
    {field_select, 3},
  [17] =
    {field_end, 1},
  [18] =
    {field_column, 1},
  [19] =
    {field_begin, 0},
  [20] =
    {field_row_loc, 1},
  [21] =
    {field_left, 0},
  [22] =
    {field_iloc, 1},
  [23] =
    {field_boolean_index, 1},
  [24] =
    {field_sl_part, 1},
  [25] =
    {field_scalar, 1},
  [26] =
    {field_item, 1},
  [27] =
    {field_begin, 0},
    {field_end, 2},
  [29] =
    {field_int, 1},
  [30] =
    {field_other_sl_parts, 2},
    {field_sl_part, 1},
    {field_sl_part, 2, .inherited = true},
  [33] =
    {field_sl_part, 0, .inherited = true},
    {field_sl_part, 1, .inherited = true},
  [35] =
    {field_other_scalars, 2},
    {field_scalar, 1},
    {field_scalar, 2, .inherited = true},
  [38] =
    {field_scalar, 0, .inherited = true},
    {field_scalar, 1, .inherited = true},
  [40] =
    {field_item, 1},
    {field_item, 2, .inherited = true},
    {field_other_items, 2},
  [43] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
  [45] =
    {field_boolean_index, 2},
  [46] =
    {field_int, 1},
    {field_int, 2, .inherited = true},
    {field_other_ints, 2},
  [49] =
    {field_int, 0, .inherited = true},
    {field_int, 1, .inherited = true},
  [51] =
    {field_col_loc, 3},
    {field_row_loc, 1},
  [53] =
    {field_col_iloc, 3},
    {field_row_iloc, 1},
  [55] =
    {field_column, 1},
    {field_column, 2, .inherited = true},
    {field_other_columns, 2},
  [58] =
    {field_column, 0, .inherited = true},
    {field_column, 1, .inherited = true},
};

static TSSymbol ts_alias_sequences[36][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '&') ADVANCE(84);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '|') ADVANCE(86);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(177);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '~') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(177);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 66:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_match);
      if (lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_match);
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_match_ignorecase);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_match_ignorecase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_contains);
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_contains_ignorecase);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_contains_ignorecase);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_isna);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_isna);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_notna);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_notna);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_duplicated);
      if (lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_duplicated);
      if (lookahead == '_') ADVANCE(12);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_duplicated_first);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_duplicated_first);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_duplicated_last);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_duplicated_last);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_duplicated_all);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_duplicated_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_dt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 'l') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(67);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_regex);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_regex);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 68},
  [9] = {.lex_state = 68},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 68},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 68},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 68},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_match_ignorecase] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_contains_ignorecase] = ACTIONS(1),
    [anon_sym_isna] = ACTIONS(1),
    [anon_sym_notna] = ACTIONS(1),
    [anon_sym_duplicated] = ACTIONS(1),
    [anon_sym_duplicated_first] = ACTIONS(1),
    [anon_sym_duplicated_last] = ACTIONS(1),
    [anon_sym_duplicated_all] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_dt] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_expr] = STATE(63),
    [sym__expr] = STATE(44),
    [sym__non_scalar] = STATE(43),
    [sym__braced_arithmetic] = STATE(42),
    [sym_arithmetic] = STATE(41),
    [sym_exp] = STATE(34),
    [sym_mul] = STATE(34),
    [sym_div] = STATE(34),
    [sym_floordiv] = STATE(34),
    [sym_mod] = STATE(34),
    [sym_add] = STATE(34),
    [sym_sub] = STATE(34),
    [sym_selection] = STATE(42),
    [sym__scalar] = STATE(43),
    [sym_column] = STATE(25),
    [sym_table] = STATE(16),
    [sym_datetime] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_dt] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_float] = ACTIONS(9),
    [sym_int] = ACTIONS(11),
    [sym_string] = ACTIONS(9),
  },
  [2] = {
    [sym_expr] = STATE(50),
    [sym__expr] = STATE(44),
    [sym__non_scalar] = STATE(43),
    [sym__braced_arithmetic] = STATE(42),
    [sym_arithmetic] = STATE(41),
    [sym_exp] = STATE(34),
    [sym_mul] = STATE(34),
    [sym_div] = STATE(34),
    [sym_floordiv] = STATE(34),
    [sym_mod] = STATE(34),
    [sym_add] = STATE(34),
    [sym_sub] = STATE(34),
    [sym_selection] = STATE(42),
    [sym_multiindex] = STATE(90),
    [sym__row_loc] = STATE(143),
    [sym__row_label] = STATE(143),
    [sym__boolean_index] = STATE(143),
    [sym_and] = STATE(143),
    [sym_xor] = STATE(143),
    [sym_or] = STATE(143),
    [sym__braced_bool] = STATE(93),
    [sym_braced_bool] = STATE(93),
    [sym_not] = STATE(69),
    [sym_multiindex_slice] = STATE(143),
    [sym_multiindex_each_slice] = STATE(143),
    [sym_multiindex_list] = STATE(143),
    [sym_scalar_slice] = STATE(143),
    [sym_scalar_list] = STATE(143),
    [sym__bool_ind] = STATE(143),
    [sym__comparison] = STATE(143),
    [sym_eq] = STATE(143),
    [sym_ne] = STATE(143),
    [sym_gt] = STATE(143),
    [sym_lt] = STATE(143),
    [sym_gte] = STATE(143),
    [sym_lte] = STATE(143),
    [sym__comp_operand] = STATE(70),
    [sym__bool_func] = STATE(143),
    [sym_func_match] = STATE(143),
    [sym_func_match_ignorecase] = STATE(143),
    [sym_func_contains] = STATE(143),
    [sym_func_contains_ignorecase] = STATE(143),
    [sym_func_isna] = STATE(143),
    [sym_func_notna] = STATE(143),
    [sym_func_duplicated] = STATE(143),
    [sym_func_duplicated_first] = STATE(143),
    [sym_func_duplicated_last] = STATE(143),
    [sym_func_duplicated_all] = STATE(143),
    [sym__func_operand] = STATE(58),
    [sym__scalar] = STATE(51),
    [sym_column] = STATE(9),
    [sym_column_shorthand] = STATE(52),
    [sym_table] = STATE(16),
    [sym_datetime] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_dt] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_float] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_string] = ACTIONS(23),
  },
  [3] = {
    [sym_expr] = STATE(50),
    [sym__expr] = STATE(44),
    [sym__non_scalar] = STATE(43),
    [sym__braced_arithmetic] = STATE(42),
    [sym_arithmetic] = STATE(41),
    [sym_exp] = STATE(34),
    [sym_mul] = STATE(34),
    [sym_div] = STATE(34),
    [sym_floordiv] = STATE(34),
    [sym_mod] = STATE(34),
    [sym_add] = STATE(34),
    [sym_sub] = STATE(34),
    [sym_selection] = STATE(42),
    [sym_multiindex] = STATE(90),
    [sym__row_loc] = STATE(163),
    [sym__row_label] = STATE(163),
    [sym__boolean_index] = STATE(163),
    [sym_and] = STATE(163),
    [sym_xor] = STATE(163),
    [sym_or] = STATE(163),
    [sym__braced_bool] = STATE(93),
    [sym_braced_bool] = STATE(93),
    [sym_not] = STATE(69),
    [sym_multiindex_slice] = STATE(163),
    [sym_multiindex_each_slice] = STATE(163),
    [sym_multiindex_list] = STATE(163),
    [sym_scalar_slice] = STATE(163),
    [sym_scalar_list] = STATE(163),
    [sym__bool_ind] = STATE(163),
    [sym__comparison] = STATE(163),
    [sym_eq] = STATE(163),
    [sym_ne] = STATE(163),
    [sym_gt] = STATE(163),
    [sym_lt] = STATE(163),
    [sym_gte] = STATE(163),
    [sym_lte] = STATE(163),
    [sym__comp_operand] = STATE(70),
    [sym__bool_func] = STATE(163),
    [sym_func_match] = STATE(163),
    [sym_func_match_ignorecase] = STATE(163),
    [sym_func_contains] = STATE(163),
    [sym_func_contains_ignorecase] = STATE(163),
    [sym_func_isna] = STATE(163),
    [sym_func_notna] = STATE(163),
    [sym_func_duplicated] = STATE(163),
    [sym_func_duplicated_first] = STATE(163),
    [sym_func_duplicated_last] = STATE(163),
    [sym_func_duplicated_all] = STATE(163),
    [sym__func_operand] = STATE(58),
    [sym__scalar] = STATE(51),
    [sym_column] = STATE(9),
    [sym_column_shorthand] = STATE(52),
    [sym_table] = STATE(16),
    [sym_datetime] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_dt] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_float] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_string] = ACTIONS(23),
  },
  [4] = {
    [sym_expr] = STATE(54),
    [sym__expr] = STATE(53),
    [sym__non_scalar] = STATE(43),
    [sym__braced_arithmetic] = STATE(42),
    [sym_arithmetic] = STATE(55),
    [sym_exp] = STATE(34),
    [sym_mul] = STATE(34),
    [sym_div] = STATE(34),
    [sym_floordiv] = STATE(34),
    [sym_mod] = STATE(34),
    [sym_add] = STATE(34),
    [sym_sub] = STATE(34),
    [sym_selection] = STATE(42),
    [sym__boolean_index] = STATE(168),
    [sym_and] = STATE(168),
    [sym_xor] = STATE(168),
    [sym_or] = STATE(168),
    [sym__braced_bool] = STATE(93),
    [sym_braced_bool] = STATE(93),
    [sym_not] = STATE(69),
    [sym__multiindex_sl_part] = STATE(84),
    [sym_scalar_slice] = STATE(84),
    [sym_scalar_list] = STATE(84),
    [sym__bool_ind] = STATE(168),
    [sym__comparison] = STATE(168),
    [sym_eq] = STATE(168),
    [sym_ne] = STATE(168),
    [sym_gt] = STATE(168),
    [sym_lt] = STATE(168),
    [sym_gte] = STATE(168),
    [sym_lte] = STATE(168),
    [sym__comp_operand] = STATE(70),
    [sym__bool_func] = STATE(168),
    [sym_func_match] = STATE(168),
    [sym_func_match_ignorecase] = STATE(168),
    [sym_func_contains] = STATE(168),
    [sym_func_contains_ignorecase] = STATE(168),
    [sym_func_isna] = STATE(168),
    [sym_func_notna] = STATE(168),
    [sym_func_duplicated] = STATE(168),
    [sym_func_duplicated_first] = STATE(168),
    [sym_func_duplicated_last] = STATE(168),
    [sym_func_duplicated_all] = STATE(168),
    [sym__func_operand] = STATE(58),
    [sym__scalar] = STATE(48),
    [sym_column] = STATE(9),
    [sym_column_shorthand] = STATE(52),
    [sym_table] = STATE(16),
    [sym_datetime] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_COLON] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_dt] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_float] = ACTIONS(33),
    [sym_int] = ACTIONS(35),
    [sym_string] = ACTIONS(33),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_column,
    STATE(16), 1,
      sym_table,
    STATE(41), 1,
      sym_arithmetic,
    STATE(44), 1,
      sym__expr,
    STATE(50), 1,
      sym_expr,
    STATE(52), 1,
      sym_column_shorthand,
    STATE(58), 1,
      sym__func_operand,
    STATE(69), 1,
      sym_not,
    STATE(70), 1,
      sym__comp_operand,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(93), 2,
      sym__braced_bool,
      sym_braced_bool,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
    STATE(154), 23,
      sym__boolean_index,
      sym_and,
      sym_xor,
      sym_or,
      sym__bool_ind,
      sym__comparison,
      sym_eq,
      sym_ne,
      sym_gt,
      sym_lt,
      sym_gte,
      sym_lte,
      sym__bool_func,
      sym_func_match,
      sym_func_match_ignorecase,
      sym_func_contains,
      sym_func_contains_ignorecase,
      sym_func_isna,
      sym_func_notna,
      sym_func_duplicated,
      sym_func_duplicated_first,
      sym_func_duplicated_last,
      sym_func_duplicated_all,
  [97] = 21,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_column,
    STATE(16), 1,
      sym_table,
    STATE(41), 1,
      sym_arithmetic,
    STATE(44), 1,
      sym__expr,
    STATE(50), 1,
      sym_expr,
    STATE(52), 1,
      sym_column_shorthand,
    STATE(58), 1,
      sym__func_operand,
    STATE(69), 1,
      sym_not,
    STATE(70), 1,
      sym__comp_operand,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(93), 2,
      sym__braced_bool,
      sym_braced_bool,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
    STATE(168), 23,
      sym__boolean_index,
      sym_and,
      sym_xor,
      sym_or,
      sym__bool_ind,
      sym__comparison,
      sym_eq,
      sym_ne,
      sym_gt,
      sym_lt,
      sym_gte,
      sym_lte,
      sym__bool_func,
      sym_func_match,
      sym_func_match_ignorecase,
      sym_func_contains,
      sym_func_contains_ignorecase,
      sym_func_isna,
      sym_func_notna,
      sym_func_duplicated,
      sym_func_duplicated_first,
      sym_func_duplicated_last,
      sym_func_duplicated_all,
  [194] = 21,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_column,
    STATE(16), 1,
      sym_table,
    STATE(52), 1,
      sym_column_shorthand,
    STATE(53), 1,
      sym__expr,
    STATE(54), 1,
      sym_expr,
    STATE(55), 1,
      sym_arithmetic,
    STATE(58), 1,
      sym__func_operand,
    STATE(69), 1,
      sym_not,
    STATE(70), 1,
      sym__comp_operand,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(93), 2,
      sym__braced_bool,
      sym_braced_bool,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
    STATE(168), 23,
      sym__boolean_index,
      sym_and,
      sym_xor,
      sym_or,
      sym__bool_ind,
      sym__comparison,
      sym_eq,
      sym_ne,
      sym_gt,
      sym_lt,
      sym_gte,
      sym_lte,
      sym__bool_func,
      sym_func_match,
      sym_func_match_ignorecase,
      sym_func_contains,
      sym_func_contains_ignorecase,
      sym_func_isna,
      sym_func_notna,
      sym_func_duplicated,
      sym_func_duplicated_first,
      sym_func_duplicated_last,
      sym_func_duplicated_all,
  [291] = 2,
    ACTIONS(39), 7,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_match,
      anon_sym_contains,
      anon_sym_duplicated,
    ACTIONS(37), 22,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_match_ignorecase,
      anon_sym_contains_ignorecase,
      anon_sym_isna,
      anon_sym_notna,
      anon_sym_duplicated_first,
      anon_sym_duplicated_last,
      anon_sym_duplicated_all,
  [325] = 7,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 3,
      anon_sym_match,
      anon_sym_contains,
      anon_sym_duplicated,
    STATE(30), 3,
      sym__row_select,
      sym_row_loc,
      sym_row_iloc,
    ACTIONS(43), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(51), 7,
      anon_sym_match_ignorecase,
      anon_sym_contains_ignorecase,
      anon_sym_isna,
      anon_sym_notna,
      anon_sym_duplicated_first,
      anon_sym_duplicated_last,
      anon_sym_duplicated_all,
    ACTIONS(41), 10,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [369] = 15,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    ACTIONS(21), 1,
      anon_sym_DOT,
    STATE(16), 1,
      sym_table,
    STATE(25), 1,
      sym_column,
    STATE(41), 1,
      sym_arithmetic,
    STATE(44), 1,
      sym__expr,
    STATE(50), 1,
      sym_expr,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(122), 2,
      sym__comp_operand,
      sym_column_shorthand,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
  [426] = 15,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    ACTIONS(21), 1,
      anon_sym_DOT,
    STATE(16), 1,
      sym_table,
    STATE(25), 1,
      sym_column,
    STATE(41), 1,
      sym_arithmetic,
    STATE(44), 1,
      sym__expr,
    STATE(50), 1,
      sym_expr,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(123), 2,
      sym__comp_operand,
      sym_column_shorthand,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
  [483] = 15,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    ACTIONS(21), 1,
      anon_sym_DOT,
    STATE(16), 1,
      sym_table,
    STATE(25), 1,
      sym_column,
    STATE(41), 1,
      sym_arithmetic,
    STATE(44), 1,
      sym__expr,
    STATE(50), 1,
      sym_expr,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(124), 2,
      sym__comp_operand,
      sym_column_shorthand,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
  [540] = 15,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    ACTIONS(21), 1,
      anon_sym_DOT,
    STATE(16), 1,
      sym_table,
    STATE(25), 1,
      sym_column,
    STATE(41), 1,
      sym_arithmetic,
    STATE(44), 1,
      sym__expr,
    STATE(50), 1,
      sym_expr,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(125), 2,
      sym__comp_operand,
      sym_column_shorthand,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
  [597] = 15,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    ACTIONS(21), 1,
      anon_sym_DOT,
    STATE(16), 1,
      sym_table,
    STATE(25), 1,
      sym_column,
    STATE(41), 1,
      sym_arithmetic,
    STATE(44), 1,
      sym__expr,
    STATE(50), 1,
      sym_expr,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(126), 2,
      sym__comp_operand,
      sym_column_shorthand,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
  [654] = 15,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    ACTIONS(21), 1,
      anon_sym_DOT,
    STATE(16), 1,
      sym_table,
    STATE(25), 1,
      sym_column,
    STATE(41), 1,
      sym_arithmetic,
    STATE(44), 1,
      sym__expr,
    STATE(50), 1,
      sym_expr,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(127), 2,
      sym__comp_operand,
      sym_column_shorthand,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
  [711] = 5,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(32), 5,
      sym__select,
      sym_df_loc,
      sym_row_loc,
      sym_df_iloc,
      sym_row_iloc,
    ACTIONS(41), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [746] = 13,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    STATE(16), 1,
      sym_table,
    STATE(25), 1,
      sym_column,
    STATE(39), 1,
      sym_expr,
    STATE(41), 1,
      sym_arithmetic,
    STATE(44), 1,
      sym__expr,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
  [796] = 13,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    STATE(16), 1,
      sym_table,
    STATE(25), 1,
      sym_column,
    STATE(29), 1,
      sym_expr,
    STATE(41), 1,
      sym_arithmetic,
    STATE(44), 1,
      sym__expr,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
  [846] = 13,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    STATE(16), 1,
      sym_table,
    STATE(25), 1,
      sym_column,
    STATE(35), 1,
      sym_expr,
    STATE(41), 1,
      sym_arithmetic,
    STATE(44), 1,
      sym__expr,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
  [896] = 13,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    STATE(16), 1,
      sym_table,
    STATE(25), 1,
      sym_column,
    STATE(36), 1,
      sym_expr,
    STATE(41), 1,
      sym_arithmetic,
    STATE(44), 1,
      sym__expr,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
  [946] = 13,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    STATE(16), 1,
      sym_table,
    STATE(25), 1,
      sym_column,
    STATE(37), 1,
      sym_expr,
    STATE(41), 1,
      sym_arithmetic,
    STATE(44), 1,
      sym__expr,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
  [996] = 13,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    STATE(16), 1,
      sym_table,
    STATE(25), 1,
      sym_column,
    STATE(38), 1,
      sym_expr,
    STATE(41), 1,
      sym_arithmetic,
    STATE(44), 1,
      sym__expr,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
  [1046] = 13,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    STATE(16), 1,
      sym_table,
    STATE(25), 1,
      sym_column,
    STATE(40), 1,
      sym_expr,
    STATE(41), 1,
      sym_arithmetic,
    STATE(44), 1,
      sym__expr,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
  [1096] = 13,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_dt,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_int,
    STATE(16), 1,
      sym_table,
    STATE(25), 1,
      sym_column,
    STATE(53), 1,
      sym__expr,
    STATE(55), 1,
      sym_arithmetic,
    STATE(62), 1,
      sym_expr,
    ACTIONS(9), 2,
      sym_float,
      sym_string,
    STATE(42), 2,
      sym__braced_arithmetic,
      sym_selection,
    STATE(43), 3,
      sym__non_scalar,
      sym__scalar,
      sym_datetime,
    STATE(34), 7,
      sym_exp,
      sym_mul,
      sym_div,
      sym_floordiv,
      sym_mod,
      sym_add,
      sym_sub,
  [1146] = 5,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    STATE(30), 3,
      sym__row_select,
      sym_row_loc,
      sym_row_iloc,
    ACTIONS(43), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(41), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1179] = 3,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(59), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 15,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1206] = 2,
    ACTIONS(65), 5,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_match,
      anon_sym_contains,
      anon_sym_duplicated,
    ACTIONS(63), 14,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_match_ignorecase,
      anon_sym_contains_ignorecase,
      anon_sym_isna,
      anon_sym_notna,
      anon_sym_duplicated_first,
      anon_sym_duplicated_last,
      anon_sym_duplicated_all,
  [1230] = 2,
    ACTIONS(69), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(67), 14,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1253] = 2,
    ACTIONS(73), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(71), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1275] = 2,
    ACTIONS(77), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(75), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1297] = 2,
    ACTIONS(81), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(79), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1319] = 2,
    ACTIONS(85), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(83), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1341] = 2,
    ACTIONS(89), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(87), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1363] = 2,
    ACTIONS(93), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1385] = 3,
    ACTIONS(97), 1,
      anon_sym_STAR_STAR,
    ACTIONS(99), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1409] = 3,
    ACTIONS(97), 1,
      anon_sym_STAR_STAR,
    ACTIONS(103), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1433] = 3,
    ACTIONS(97), 1,
      anon_sym_STAR_STAR,
    ACTIONS(107), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1457] = 3,
    ACTIONS(97), 1,
      anon_sym_STAR_STAR,
    ACTIONS(111), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(109), 12,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1481] = 7,
    ACTIONS(97), 1,
      anon_sym_STAR_STAR,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      anon_sym_PERCENT,
    ACTIONS(123), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1513] = 7,
    ACTIONS(97), 1,
      anon_sym_STAR_STAR,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      anon_sym_PERCENT,
    ACTIONS(127), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1545] = 2,
    ACTIONS(131), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1567] = 2,
    ACTIONS(135), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(133), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1589] = 2,
    ACTIONS(139), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(137), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1611] = 2,
    ACTIONS(143), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(141), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1633] = 2,
    ACTIONS(147), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(145), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1655] = 2,
    ACTIONS(151), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(149), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1677] = 2,
    ACTIONS(155), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(153), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1699] = 5,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_COLON,
    STATE(111), 1,
      aux_sym_multiindex_repeat1,
    ACTIONS(159), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(157), 10,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1727] = 2,
    ACTIONS(167), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(165), 13,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1749] = 9,
    ACTIONS(97), 1,
      anon_sym_STAR_STAR,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      anon_sym_PERCENT,
    ACTIONS(171), 1,
      anon_sym_PLUS,
    ACTIONS(173), 1,
      anon_sym_DASH,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(169), 7,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1784] = 4,
    ACTIONS(163), 1,
      anon_sym_COLON,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(159), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(157), 9,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1809] = 4,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(49), 3,
      anon_sym_match,
      anon_sym_contains,
      anon_sym_duplicated,
    ACTIONS(169), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(51), 7,
      anon_sym_match_ignorecase,
      anon_sym_contains_ignorecase,
      anon_sym_isna,
      anon_sym_notna,
      anon_sym_duplicated_first,
      anon_sym_duplicated_last,
      anon_sym_duplicated_all,
  [1834] = 3,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(143), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(141), 9,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1855] = 10,
    ACTIONS(97), 1,
      anon_sym_STAR_STAR,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      anon_sym_PERCENT,
    ACTIONS(171), 1,
      anon_sym_PLUS,
    ACTIONS(173), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(169), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1890] = 2,
    ACTIONS(131), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(129), 10,
      anon_sym_RPAREN,
      anon_sym_STAR_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [1909] = 7,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_COLON,
    ACTIONS(183), 1,
      anon_sym_dt,
    ACTIONS(187), 1,
      sym_int,
    ACTIONS(185), 2,
      sym_float,
      sym_string,
    STATE(152), 2,
      sym__scalar,
      sym_datetime,
    STATE(128), 3,
      sym__multiindex_sl_part,
      sym_scalar_slice,
      sym_scalar_list,
  [1935] = 7,
    ACTIONS(183), 1,
      anon_sym_dt,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      sym_int,
    STATE(147), 1,
      sym_multiindex,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(193), 2,
      sym_float,
      sym_string,
    STATE(88), 2,
      sym__scalar,
      sym_datetime,
  [1960] = 10,
    ACTIONS(197), 1,
      anon_sym_match,
    ACTIONS(199), 1,
      anon_sym_match_ignorecase,
    ACTIONS(201), 1,
      anon_sym_contains,
    ACTIONS(203), 1,
      anon_sym_contains_ignorecase,
    ACTIONS(205), 1,
      anon_sym_isna,
    ACTIONS(207), 1,
      anon_sym_notna,
    ACTIONS(209), 1,
      anon_sym_duplicated,
    ACTIONS(211), 1,
      anon_sym_duplicated_first,
    ACTIONS(213), 1,
      anon_sym_duplicated_last,
    ACTIONS(215), 1,
      anon_sym_duplicated_all,
  [1991] = 5,
    ACTIONS(183), 1,
      anon_sym_dt,
    ACTIONS(221), 1,
      sym_int,
    ACTIONS(219), 2,
      sym_float,
      sym_string,
    STATE(109), 2,
      sym__scalar,
      sym_datetime,
    ACTIONS(217), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2011] = 6,
    ACTIONS(183), 1,
      anon_sym_dt,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      sym_int,
    STATE(85), 1,
      sym_multiindex,
    ACTIONS(223), 2,
      sym_float,
      sym_string,
    STATE(86), 2,
      sym__scalar,
      sym_datetime,
  [2032] = 5,
    ACTIONS(183), 1,
      anon_sym_dt,
    ACTIONS(195), 1,
      sym_int,
    ACTIONS(191), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(193), 2,
      sym_float,
      sym_string,
    STATE(88), 2,
      sym__scalar,
      sym_datetime,
  [2051] = 8,
    ACTIONS(97), 1,
      anon_sym_STAR_STAR,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      anon_sym_PERCENT,
    ACTIONS(171), 1,
      anon_sym_PLUS,
    ACTIONS(173), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
  [2076] = 8,
    ACTIONS(97), 1,
      anon_sym_STAR_STAR,
    ACTIONS(115), 1,
      anon_sym_STAR,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(121), 1,
      anon_sym_PERCENT,
    ACTIONS(171), 1,
      anon_sym_PLUS,
    ACTIONS(173), 1,
      anon_sym_DASH,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
  [2101] = 3,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(49), 5,
      sym__select,
      sym_df_loc,
      sym_row_loc,
      sym_df_iloc,
      sym_row_iloc,
  [2115] = 1,
    ACTIONS(229), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
  [2124] = 1,
    ACTIONS(231), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
  [2133] = 4,
    ACTIONS(183), 1,
      anon_sym_dt,
    ACTIONS(235), 1,
      sym_int,
    ACTIONS(233), 2,
      sym_float,
      sym_string,
    STATE(96), 2,
      sym__scalar,
      sym_datetime,
  [2148] = 4,
    ACTIONS(183), 1,
      anon_sym_dt,
    ACTIONS(225), 1,
      sym_int,
    ACTIONS(223), 2,
      sym_float,
      sym_string,
    STATE(86), 2,
      sym__scalar,
      sym_datetime,
  [2163] = 2,
    ACTIONS(237), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(239), 3,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
  [2174] = 6,
    ACTIONS(241), 1,
      anon_sym_EQ_EQ,
    ACTIONS(243), 1,
      anon_sym_BANG_EQ,
    ACTIONS(245), 1,
      anon_sym_GT,
    ACTIONS(247), 1,
      anon_sym_LT,
    ACTIONS(249), 1,
      anon_sym_GT_EQ,
    ACTIONS(251), 1,
      anon_sym_LT_EQ,
  [2193] = 4,
    ACTIONS(183), 1,
      anon_sym_dt,
    ACTIONS(255), 1,
      sym_int,
    ACTIONS(253), 2,
      sym_float,
      sym_string,
    STATE(112), 2,
      sym__scalar,
      sym_datetime,
  [2208] = 4,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 1,
      anon_sym_COLON,
    ACTIONS(261), 1,
      sym_int,
    STATE(139), 3,
      sym__iloc,
      sym_int_slice,
      sym_int_list,
  [2223] = 4,
    ACTIONS(263), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(156), 3,
      sym_column_slice,
      sym_column_list,
      sym__col_loc,
  [2238] = 4,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 1,
      anon_sym_COLON,
    ACTIONS(261), 1,
      sym_int,
    STATE(157), 3,
      sym__iloc,
      sym_int_slice,
      sym_int_list,
  [2253] = 4,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 1,
      anon_sym_COLON,
    ACTIONS(261), 1,
      sym_int,
    STATE(170), 3,
      sym__iloc,
      sym_int_slice,
      sym_int_list,
  [2268] = 3,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    STATE(120), 3,
      sym__braced_bool,
      sym_braced_bool,
      sym_not,
  [2280] = 3,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    STATE(121), 3,
      sym__braced_bool,
      sym_braced_bool,
      sym_not,
  [2292] = 3,
    ACTIONS(17), 1,
      anon_sym_TILDE,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    STATE(119), 3,
      sym__braced_bool,
      sym_braced_bool,
      sym_not,
  [2304] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_multiindex_repeat1,
    ACTIONS(271), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2315] = 3,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_multiindex,
    ACTIONS(276), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2326] = 1,
    ACTIONS(278), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2332] = 1,
    ACTIONS(280), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2338] = 3,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_column_list_repeat1,
  [2348] = 3,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_multiindex_each_slice_repeat1,
  [2358] = 3,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_multiindex_list_repeat1,
  [2368] = 3,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      aux_sym_multiindex_repeat1,
  [2378] = 1,
    ACTIONS(296), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2384] = 1,
    ACTIONS(298), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2390] = 3,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_column_list_repeat1,
  [2400] = 2,
    ACTIONS(305), 1,
      anon_sym_COLON,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2408] = 3,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_multiindex_list_repeat1,
  [2418] = 3,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_column_list_repeat1,
  [2428] = 3,
    ACTIONS(314), 1,
      anon_sym_AMP,
    ACTIONS(316), 1,
      anon_sym_CARET,
    ACTIONS(318), 1,
      anon_sym_PIPE,
  [2438] = 3,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      aux_sym_int_list_repeat1,
  [2448] = 1,
    ACTIONS(325), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [2454] = 1,
    ACTIONS(327), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2460] = 1,
    ACTIONS(329), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2466] = 1,
    ACTIONS(331), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2472] = 1,
    ACTIONS(333), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2478] = 1,
    ACTIONS(335), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2484] = 3,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_multiindex_each_slice_repeat1,
  [2494] = 3,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_int_list_repeat1,
  [2504] = 3,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_multiindex_each_slice_repeat1,
  [2514] = 2,
    ACTIONS(350), 1,
      sym_int,
    ACTIONS(348), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2522] = 1,
    ACTIONS(352), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [2528] = 3,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      aux_sym_int_list_repeat1,
  [2538] = 1,
    ACTIONS(356), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2544] = 2,
    ACTIONS(360), 1,
      sym_int,
    ACTIONS(358), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2552] = 1,
    ACTIONS(362), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2558] = 2,
    ACTIONS(366), 1,
      anon_sym_COLON,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2566] = 3,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_multiindex_repeat1,
  [2576] = 3,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_multiindex_repeat1,
  [2586] = 1,
    ACTIONS(372), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2592] = 1,
    ACTIONS(374), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2598] = 3,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_multiindex_list_repeat1,
  [2608] = 1,
    ACTIONS(378), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2614] = 3,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_multiindex_repeat1,
  [2624] = 1,
    ACTIONS(382), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2630] = 1,
    ACTIONS(384), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2636] = 1,
    ACTIONS(386), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2642] = 1,
    ACTIONS(388), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2648] = 1,
    ACTIONS(390), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2654] = 1,
    ACTIONS(392), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2660] = 1,
    ACTIONS(394), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2666] = 1,
    ACTIONS(396), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2672] = 1,
    ACTIONS(398), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2678] = 1,
    ACTIONS(400), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2684] = 1,
    ACTIONS(402), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2689] = 1,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2694] = 1,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2699] = 2,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym_multiindex,
  [2706] = 1,
    ACTIONS(408), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2711] = 1,
    ACTIONS(410), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2716] = 1,
    ACTIONS(412), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2721] = 1,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2726] = 2,
    ACTIONS(416), 1,
      anon_sym_RBRACK,
    ACTIONS(418), 1,
      sym_identifier,
  [2733] = 2,
    ACTIONS(420), 1,
      anon_sym_RBRACK,
    ACTIONS(422), 1,
      anon_sym_COLON,
  [2740] = 1,
    ACTIONS(424), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2745] = 2,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
  [2752] = 1,
    ACTIONS(430), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2757] = 1,
    ACTIONS(432), 2,
      sym_string,
      sym_regex,
  [2762] = 1,
    ACTIONS(434), 2,
      sym_string,
      sym_regex,
  [2767] = 2,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
  [2774] = 1,
    ACTIONS(440), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2779] = 1,
    ACTIONS(442), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2784] = 2,
    ACTIONS(444), 1,
      anon_sym_RBRACK,
    ACTIONS(446), 1,
      sym_identifier,
  [2791] = 1,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2796] = 1,
    ACTIONS(450), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2801] = 1,
    ACTIONS(452), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2806] = 1,
    ACTIONS(454), 1,
      sym_regex,
  [2810] = 1,
    ACTIONS(456), 1,
      sym_int,
  [2814] = 1,
    ACTIONS(163), 1,
      anon_sym_COLON,
  [2818] = 1,
    ACTIONS(458), 1,
      sym_identifier,
  [2822] = 1,
    ACTIONS(460), 1,
      anon_sym_RPAREN,
  [2826] = 1,
    ACTIONS(462), 1,
      sym_identifier,
  [2830] = 1,
    ACTIONS(464), 1,
      anon_sym_RBRACK,
  [2834] = 1,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
  [2838] = 1,
    ACTIONS(468), 1,
      sym_int,
  [2842] = 1,
    ACTIONS(470), 1,
      sym_regex,
  [2846] = 1,
    ACTIONS(472), 1,
      anon_sym_RBRACK,
  [2850] = 1,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
  [2854] = 1,
    ACTIONS(476), 1,
      sym_identifier,
  [2858] = 1,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
  [2862] = 1,
    ACTIONS(478), 1,
      sym_identifier,
  [2866] = 1,
    ACTIONS(480), 1,
      anon_sym_RBRACK,
  [2870] = 1,
    ACTIONS(482), 1,
      sym_string,
  [2874] = 1,
    ACTIONS(484), 1,
      anon_sym_RBRACK,
  [2878] = 1,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
  [2882] = 1,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
  [2886] = 1,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 194,
  [SMALL_STATE(8)] = 291,
  [SMALL_STATE(9)] = 325,
  [SMALL_STATE(10)] = 369,
  [SMALL_STATE(11)] = 426,
  [SMALL_STATE(12)] = 483,
  [SMALL_STATE(13)] = 540,
  [SMALL_STATE(14)] = 597,
  [SMALL_STATE(15)] = 654,
  [SMALL_STATE(16)] = 711,
  [SMALL_STATE(17)] = 746,
  [SMALL_STATE(18)] = 796,
  [SMALL_STATE(19)] = 846,
  [SMALL_STATE(20)] = 896,
  [SMALL_STATE(21)] = 946,
  [SMALL_STATE(22)] = 996,
  [SMALL_STATE(23)] = 1046,
  [SMALL_STATE(24)] = 1096,
  [SMALL_STATE(25)] = 1146,
  [SMALL_STATE(26)] = 1179,
  [SMALL_STATE(27)] = 1206,
  [SMALL_STATE(28)] = 1230,
  [SMALL_STATE(29)] = 1253,
  [SMALL_STATE(30)] = 1275,
  [SMALL_STATE(31)] = 1297,
  [SMALL_STATE(32)] = 1319,
  [SMALL_STATE(33)] = 1341,
  [SMALL_STATE(34)] = 1363,
  [SMALL_STATE(35)] = 1385,
  [SMALL_STATE(36)] = 1409,
  [SMALL_STATE(37)] = 1433,
  [SMALL_STATE(38)] = 1457,
  [SMALL_STATE(39)] = 1481,
  [SMALL_STATE(40)] = 1513,
  [SMALL_STATE(41)] = 1545,
  [SMALL_STATE(42)] = 1567,
  [SMALL_STATE(43)] = 1589,
  [SMALL_STATE(44)] = 1611,
  [SMALL_STATE(45)] = 1633,
  [SMALL_STATE(46)] = 1655,
  [SMALL_STATE(47)] = 1677,
  [SMALL_STATE(48)] = 1699,
  [SMALL_STATE(49)] = 1727,
  [SMALL_STATE(50)] = 1749,
  [SMALL_STATE(51)] = 1784,
  [SMALL_STATE(52)] = 1809,
  [SMALL_STATE(53)] = 1834,
  [SMALL_STATE(54)] = 1855,
  [SMALL_STATE(55)] = 1890,
  [SMALL_STATE(56)] = 1909,
  [SMALL_STATE(57)] = 1935,
  [SMALL_STATE(58)] = 1960,
  [SMALL_STATE(59)] = 1991,
  [SMALL_STATE(60)] = 2011,
  [SMALL_STATE(61)] = 2032,
  [SMALL_STATE(62)] = 2051,
  [SMALL_STATE(63)] = 2076,
  [SMALL_STATE(64)] = 2101,
  [SMALL_STATE(65)] = 2115,
  [SMALL_STATE(66)] = 2124,
  [SMALL_STATE(67)] = 2133,
  [SMALL_STATE(68)] = 2148,
  [SMALL_STATE(69)] = 2163,
  [SMALL_STATE(70)] = 2174,
  [SMALL_STATE(71)] = 2193,
  [SMALL_STATE(72)] = 2208,
  [SMALL_STATE(73)] = 2223,
  [SMALL_STATE(74)] = 2238,
  [SMALL_STATE(75)] = 2253,
  [SMALL_STATE(76)] = 2268,
  [SMALL_STATE(77)] = 2280,
  [SMALL_STATE(78)] = 2292,
  [SMALL_STATE(79)] = 2304,
  [SMALL_STATE(80)] = 2315,
  [SMALL_STATE(81)] = 2326,
  [SMALL_STATE(82)] = 2332,
  [SMALL_STATE(83)] = 2338,
  [SMALL_STATE(84)] = 2348,
  [SMALL_STATE(85)] = 2358,
  [SMALL_STATE(86)] = 2368,
  [SMALL_STATE(87)] = 2378,
  [SMALL_STATE(88)] = 2384,
  [SMALL_STATE(89)] = 2390,
  [SMALL_STATE(90)] = 2400,
  [SMALL_STATE(91)] = 2408,
  [SMALL_STATE(92)] = 2418,
  [SMALL_STATE(93)] = 2428,
  [SMALL_STATE(94)] = 2438,
  [SMALL_STATE(95)] = 2448,
  [SMALL_STATE(96)] = 2454,
  [SMALL_STATE(97)] = 2460,
  [SMALL_STATE(98)] = 2466,
  [SMALL_STATE(99)] = 2472,
  [SMALL_STATE(100)] = 2478,
  [SMALL_STATE(101)] = 2484,
  [SMALL_STATE(102)] = 2494,
  [SMALL_STATE(103)] = 2504,
  [SMALL_STATE(104)] = 2514,
  [SMALL_STATE(105)] = 2522,
  [SMALL_STATE(106)] = 2528,
  [SMALL_STATE(107)] = 2538,
  [SMALL_STATE(108)] = 2544,
  [SMALL_STATE(109)] = 2552,
  [SMALL_STATE(110)] = 2558,
  [SMALL_STATE(111)] = 2566,
  [SMALL_STATE(112)] = 2576,
  [SMALL_STATE(113)] = 2586,
  [SMALL_STATE(114)] = 2592,
  [SMALL_STATE(115)] = 2598,
  [SMALL_STATE(116)] = 2608,
  [SMALL_STATE(117)] = 2614,
  [SMALL_STATE(118)] = 2624,
  [SMALL_STATE(119)] = 2630,
  [SMALL_STATE(120)] = 2636,
  [SMALL_STATE(121)] = 2642,
  [SMALL_STATE(122)] = 2648,
  [SMALL_STATE(123)] = 2654,
  [SMALL_STATE(124)] = 2660,
  [SMALL_STATE(125)] = 2666,
  [SMALL_STATE(126)] = 2672,
  [SMALL_STATE(127)] = 2678,
  [SMALL_STATE(128)] = 2684,
  [SMALL_STATE(129)] = 2689,
  [SMALL_STATE(130)] = 2694,
  [SMALL_STATE(131)] = 2699,
  [SMALL_STATE(132)] = 2706,
  [SMALL_STATE(133)] = 2711,
  [SMALL_STATE(134)] = 2716,
  [SMALL_STATE(135)] = 2721,
  [SMALL_STATE(136)] = 2726,
  [SMALL_STATE(137)] = 2733,
  [SMALL_STATE(138)] = 2740,
  [SMALL_STATE(139)] = 2745,
  [SMALL_STATE(140)] = 2752,
  [SMALL_STATE(141)] = 2757,
  [SMALL_STATE(142)] = 2762,
  [SMALL_STATE(143)] = 2767,
  [SMALL_STATE(144)] = 2774,
  [SMALL_STATE(145)] = 2779,
  [SMALL_STATE(146)] = 2784,
  [SMALL_STATE(147)] = 2791,
  [SMALL_STATE(148)] = 2796,
  [SMALL_STATE(149)] = 2801,
  [SMALL_STATE(150)] = 2806,
  [SMALL_STATE(151)] = 2810,
  [SMALL_STATE(152)] = 2814,
  [SMALL_STATE(153)] = 2818,
  [SMALL_STATE(154)] = 2822,
  [SMALL_STATE(155)] = 2826,
  [SMALL_STATE(156)] = 2830,
  [SMALL_STATE(157)] = 2834,
  [SMALL_STATE(158)] = 2838,
  [SMALL_STATE(159)] = 2842,
  [SMALL_STATE(160)] = 2846,
  [SMALL_STATE(161)] = 2850,
  [SMALL_STATE(162)] = 2854,
  [SMALL_STATE(163)] = 2858,
  [SMALL_STATE(164)] = 2862,
  [SMALL_STATE(165)] = 2866,
  [SMALL_STATE(166)] = 2870,
  [SMALL_STATE(167)] = 2874,
  [SMALL_STATE(168)] = 2878,
  [SMALL_STATE(169)] = 2882,
  [SMALL_STATE(170)] = 2886,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 8),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__non_scalar, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__non_scalar, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__func_operand, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_operand, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_shorthand, 2, .production_id = 12),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_shorthand, 2, .production_id = 12),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 3, .production_id = 9),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp, 3, .production_id = 9),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selection, 2, .production_id = 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection, 2, .production_id = 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row_loc, 3, .production_id = 14),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row_loc, 3, .production_id = 14),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selection, 2, .production_id = 5),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection, 2, .production_id = 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3, .production_id = 6),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 3, .production_id = 6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul, 3, .production_id = 9),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mul, 3, .production_id = 9),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div, 3, .production_id = 9),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div, 3, .production_id = 9),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floordiv, 3, .production_id = 9),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floordiv, 3, .production_id = 9),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mod, 3, .production_id = 9),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mod, 3, .production_id = 9),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add, 3, .production_id = 9),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add, 3, .production_id = 9),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 3, .production_id = 9),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 3, .production_id = 9),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__braced_arithmetic, 1, .production_id = 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__braced_arithmetic, 1, .production_id = 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__non_scalar, 1, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__non_scalar, 1, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1, .production_id = 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_df_loc, 5, .production_id = 32),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_df_loc, 5, .production_id = 32),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_row_iloc, 3, .production_id = 16),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_row_iloc, 3, .production_id = 16),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_df_iloc, 5, .production_id = 33),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_df_iloc, 5, .production_id = 33),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selection, 4, .production_id = 10),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selection, 4, .production_id = 10),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comp_operand, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comp_operand, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__row_label, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_slice, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_slice, 2, .production_id = 13),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [227] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_braced_bool, 3, .production_id = 17),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 4, .production_id = 29),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_index, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__braced_bool, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiindex_repeat1, 2, .production_id = 26),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiindex_repeat1, 2, .production_id = 26), SHIFT_REPEAT(67),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiindex_slice, 2, .production_id = 13),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_duplicated_all, 2, .production_id = 15),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_list, 3, .production_id = 19),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_list, 4, .production_id = 25),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_slice, 2, .production_id = 11),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2, .production_id = 35), SHIFT_REPEAT(164),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2, .production_id = 35),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiindex_list_repeat1, 2, .production_id = 28), SHIFT_REPEAT(131),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiindex_list_repeat1, 2, .production_id = 28),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_int_list_repeat1, 2, .production_id = 31), SHIFT_REPEAT(151),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_int_list_repeat1, 2, .production_id = 31),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiindex, 4, .production_id = 25),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiindex_repeat1, 2, .production_id = 19),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_isna, 2, .production_id = 15),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_duplicated, 2, .production_id = 15),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_duplicated_first, 2, .production_id = 15),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_duplicated_last, 2, .production_id = 15),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiindex_each_slice_repeat1, 2, .production_id = 24),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multiindex_each_slice_repeat1, 2, .production_id = 24), SHIFT_REPEAT(56),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_slice, 2, .production_id = 13),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiindex, 3, .production_id = 19),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_notna, 2, .production_id = 15),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_slice, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar_slice, 3, .production_id = 21),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__iloc, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_contains_ignorecase, 3, .production_id = 9),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_contains, 3, .production_id = 9),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_match_ignorecase, 3, .production_id = 9),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_match, 3, .production_id = 9),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 3, .production_id = 9),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xor, 3, .production_id = 9),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 3, .production_id = 9),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq, 3, .production_id = 9),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ne, 3, .production_id = 9),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gt, 3, .production_id = 9),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lt, 3, .production_id = 9),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gte, 3, .production_id = 9),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lte, 3, .production_id = 9),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiindex_each_slice_repeat1, 2, .production_id = 18),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_list, 3, .production_id = 22),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiindex_slice, 3, .production_id = 21),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_list, 4, .production_id = 30),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiindex_each_slice, 4, .production_id = 23),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiindex_each_slice, 3, .production_id = 18),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_slice, 3, .production_id = 21),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_slice, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__col_loc, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiindex_list, 3, .production_id = 20),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_list_repeat1, 2, .production_id = 12),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multiindex_list_repeat1, 2, .production_id = 20),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiindex_list, 4, .production_id = 27),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_slice, 2, .production_id = 13),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiindex_slice, 2, .production_id = 11),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_slice, 2, .production_id = 11),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_int_list_repeat1, 2, .production_id = 22),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_slice, 2, .production_id = 11),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 3, .production_id = 12),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_slice, 3, .production_id = 21),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_list, 4, .production_id = 34),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tanuki(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
