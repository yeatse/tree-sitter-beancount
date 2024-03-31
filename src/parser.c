#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 339
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 1
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 34
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 128

enum ts_symbol_identifiers {
  aux_sym__skipped_lines_token1 = 1,
  aux_sym__skipped_lines_token2 = 2,
  aux_sym__skipped_lines_token3 = 3,
  anon_sym_COLON = 4,
  aux_sym__skipped_lines_token4 = 5,
  anon_sym_include = 6,
  anon_sym_option = 7,
  anon_sym_plugin = 8,
  anon_sym_pushtag = 9,
  anon_sym_poptag = 10,
  anon_sym_pushmeta = 11,
  anon_sym_popmeta = 12,
  anon_sym_balance = 13,
  anon_sym_close = 14,
  anon_sym_commodity = 15,
  anon_sym_custom = 16,
  anon_sym_document = 17,
  anon_sym_event = 18,
  anon_sym_note = 19,
  anon_sym_open = 20,
  anon_sym_pad = 21,
  anon_sym_price = 22,
  anon_sym_txn = 23,
  anon_sym_query = 24,
  anon_sym_LBRACE = 25,
  anon_sym_RBRACE = 26,
  anon_sym_LBRACE_LBRACE = 27,
  anon_sym_RBRACE_RBRACE = 28,
  anon_sym_COMMA = 29,
  anon_sym_STAR = 30,
  anon_sym_POUND = 31,
  anon_sym_AT = 32,
  anon_sym_AT_AT = 33,
  aux_sym_posting_token1 = 34,
  anon_sym_TILDE = 35,
  anon_sym_LPAREN = 36,
  anon_sym_RPAREN = 37,
  anon_sym_DASH = 38,
  anon_sym_PLUS = 39,
  anon_sym_SLASH = 40,
  sym_bool = 41,
  sym_date = 42,
  sym_key = 43,
  sym_tag = 44,
  sym_link = 45,
  sym_string = 46,
  sym_currency = 47,
  sym_number = 48,
  sym_account = 49,
  sym_beancount_file = 50,
  sym__skipped_lines = 51,
  sym__undated_directives = 52,
  sym_include = 53,
  sym_option = 54,
  sym_plugin = 55,
  sym_pushtag = 56,
  sym_poptag = 57,
  sym_pushmeta = 58,
  sym_popmeta = 59,
  sym__dated_directives = 60,
  sym_balance = 61,
  sym_close = 62,
  sym_commodity = 63,
  sym_custom = 64,
  sym_document = 65,
  sym_event = 66,
  sym_note = 67,
  sym_open = 68,
  sym_pad = 69,
  sym_price = 70,
  sym_transaction = 71,
  sym_query = 72,
  sym_cost = 73,
  sym_total_cost = 74,
  sym__cost_comp_list = 75,
  sym__cost_comp = 76,
  sym_compound_amount = 77,
  sym_incomplete_amount = 78,
  sym_price_annotation = 79,
  sym_total_price_annotation = 80,
  sym_posting = 81,
  sym_postings = 82,
  sym_tags_and_links = 83,
  sym_currency_list = 84,
  sym_metadata = 85,
  sym_key_value = 86,
  sym_amount = 87,
  sym_amount_with_tolerance = 88,
  sym__num_expr = 89,
  sym_paren_num_expr = 90,
  sym_unary_num_expr = 91,
  sym_binary_num_expr = 92,
  sym_flag = 93,
  aux_sym_beancount_file_repeat1 = 94,
  aux_sym_custom_repeat1 = 95,
  aux_sym__cost_comp_list_repeat1 = 96,
  aux_sym_postings_repeat1 = 97,
  aux_sym_tags_and_links_repeat1 = 98,
  aux_sym_currency_list_repeat1 = 99,
  aux_sym_metadata_repeat1 = 100,
  alias_sym_merge = 101,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__skipped_lines_token1] = "_skipped_lines_token1",
  [aux_sym__skipped_lines_token2] = "_skipped_lines_token2",
  [aux_sym__skipped_lines_token3] = "_skipped_lines_token3",
  [anon_sym_COLON] = ":",
  [aux_sym__skipped_lines_token4] = "_skipped_lines_token4",
  [anon_sym_include] = "INCLUDE",
  [anon_sym_option] = "OPTION",
  [anon_sym_plugin] = "PLUGIN",
  [anon_sym_pushtag] = "PUSHTAG",
  [anon_sym_poptag] = "POPTAG",
  [anon_sym_pushmeta] = "PUSHMETA",
  [anon_sym_popmeta] = "POPMETA",
  [anon_sym_balance] = "BALANCE",
  [anon_sym_close] = "CLOSE",
  [anon_sym_commodity] = "COMMODITY",
  [anon_sym_custom] = "CUSTOM",
  [anon_sym_document] = "DOCUMENT",
  [anon_sym_event] = "EVENT",
  [anon_sym_note] = "NOTE",
  [anon_sym_open] = "OPEN",
  [anon_sym_pad] = "PAD",
  [anon_sym_price] = "PRICE",
  [anon_sym_txn] = "TXN",
  [anon_sym_query] = "QUERY",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_COMMA] = ",",
  [anon_sym_STAR] = "*",
  [anon_sym_POUND] = "#",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [aux_sym_posting_token1] = "posting_token1",
  [anon_sym_TILDE] = "~",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [sym_bool] = "bool",
  [sym_date] = "date",
  [sym_key] = "key",
  [sym_tag] = "tag",
  [sym_link] = "link",
  [sym_string] = "string",
  [sym_currency] = "currency",
  [sym_number] = "number",
  [sym_account] = "account",
  [sym_beancount_file] = "beancount_file",
  [sym__skipped_lines] = "_skipped_lines",
  [sym__undated_directives] = "_undated_directives",
  [sym_include] = "include",
  [sym_option] = "option",
  [sym_plugin] = "plugin",
  [sym_pushtag] = "pushtag",
  [sym_poptag] = "poptag",
  [sym_pushmeta] = "pushmeta",
  [sym_popmeta] = "popmeta",
  [sym__dated_directives] = "_dated_directives",
  [sym_balance] = "balance",
  [sym_close] = "close",
  [sym_commodity] = "commodity",
  [sym_custom] = "custom",
  [sym_document] = "document",
  [sym_event] = "event",
  [sym_note] = "note",
  [sym_open] = "open",
  [sym_pad] = "pad",
  [sym_price] = "price",
  [sym_transaction] = "transaction",
  [sym_query] = "query",
  [sym_cost] = "cost",
  [sym_total_cost] = "total_cost",
  [sym__cost_comp_list] = "_cost_comp_list",
  [sym__cost_comp] = "_cost_comp",
  [sym_compound_amount] = "compound_amount",
  [sym_incomplete_amount] = "incomplete_amount",
  [sym_price_annotation] = "price_annotation",
  [sym_total_price_annotation] = "total_price_annotation",
  [sym_posting] = "posting",
  [sym_postings] = "postings",
  [sym_tags_and_links] = "tags_and_links",
  [sym_currency_list] = "currency_list",
  [sym_metadata] = "metadata",
  [sym_key_value] = "key_value",
  [sym_amount] = "amount",
  [sym_amount_with_tolerance] = "amount_with_tolerance",
  [sym__num_expr] = "_num_expr",
  [sym_paren_num_expr] = "paren_num_expr",
  [sym_unary_num_expr] = "unary_num_expr",
  [sym_binary_num_expr] = "binary_num_expr",
  [sym_flag] = "flag",
  [aux_sym_beancount_file_repeat1] = "beancount_file_repeat1",
  [aux_sym_custom_repeat1] = "custom_repeat1",
  [aux_sym__cost_comp_list_repeat1] = "_cost_comp_list_repeat1",
  [aux_sym_postings_repeat1] = "postings_repeat1",
  [aux_sym_tags_and_links_repeat1] = "tags_and_links_repeat1",
  [aux_sym_currency_list_repeat1] = "currency_list_repeat1",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [alias_sym_merge] = "merge",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__skipped_lines_token1] = aux_sym__skipped_lines_token1,
  [aux_sym__skipped_lines_token2] = aux_sym__skipped_lines_token2,
  [aux_sym__skipped_lines_token3] = aux_sym__skipped_lines_token3,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__skipped_lines_token4] = aux_sym__skipped_lines_token4,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_plugin] = anon_sym_plugin,
  [anon_sym_pushtag] = anon_sym_pushtag,
  [anon_sym_poptag] = anon_sym_poptag,
  [anon_sym_pushmeta] = anon_sym_pushmeta,
  [anon_sym_popmeta] = anon_sym_popmeta,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_document] = anon_sym_document,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_pad] = anon_sym_pad,
  [anon_sym_price] = anon_sym_price,
  [anon_sym_txn] = anon_sym_txn,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [aux_sym_posting_token1] = aux_sym_posting_token1,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_bool] = sym_bool,
  [sym_date] = sym_date,
  [sym_key] = sym_key,
  [sym_tag] = sym_tag,
  [sym_link] = sym_link,
  [sym_string] = sym_string,
  [sym_currency] = sym_currency,
  [sym_number] = sym_number,
  [sym_account] = sym_account,
  [sym_beancount_file] = sym_beancount_file,
  [sym__skipped_lines] = sym__skipped_lines,
  [sym__undated_directives] = sym__undated_directives,
  [sym_include] = sym_include,
  [sym_option] = sym_option,
  [sym_plugin] = sym_plugin,
  [sym_pushtag] = sym_pushtag,
  [sym_poptag] = sym_poptag,
  [sym_pushmeta] = sym_pushmeta,
  [sym_popmeta] = sym_popmeta,
  [sym__dated_directives] = sym__dated_directives,
  [sym_balance] = sym_balance,
  [sym_close] = sym_close,
  [sym_commodity] = sym_commodity,
  [sym_custom] = sym_custom,
  [sym_document] = sym_document,
  [sym_event] = sym_event,
  [sym_note] = sym_note,
  [sym_open] = sym_open,
  [sym_pad] = sym_pad,
  [sym_price] = sym_price,
  [sym_transaction] = sym_transaction,
  [sym_query] = sym_query,
  [sym_cost] = sym_cost,
  [sym_total_cost] = sym_total_cost,
  [sym__cost_comp_list] = sym__cost_comp_list,
  [sym__cost_comp] = sym__cost_comp,
  [sym_compound_amount] = sym_compound_amount,
  [sym_incomplete_amount] = sym_incomplete_amount,
  [sym_price_annotation] = sym_price_annotation,
  [sym_total_price_annotation] = sym_total_price_annotation,
  [sym_posting] = sym_posting,
  [sym_postings] = sym_postings,
  [sym_tags_and_links] = sym_tags_and_links,
  [sym_currency_list] = sym_currency_list,
  [sym_metadata] = sym_metadata,
  [sym_key_value] = sym_key_value,
  [sym_amount] = sym_amount,
  [sym_amount_with_tolerance] = sym_amount_with_tolerance,
  [sym__num_expr] = sym__num_expr,
  [sym_paren_num_expr] = sym_paren_num_expr,
  [sym_unary_num_expr] = sym_unary_num_expr,
  [sym_binary_num_expr] = sym_binary_num_expr,
  [sym_flag] = sym_flag,
  [aux_sym_beancount_file_repeat1] = aux_sym_beancount_file_repeat1,
  [aux_sym_custom_repeat1] = aux_sym_custom_repeat1,
  [aux_sym__cost_comp_list_repeat1] = aux_sym__cost_comp_list_repeat1,
  [aux_sym_postings_repeat1] = aux_sym_postings_repeat1,
  [aux_sym_tags_and_links_repeat1] = aux_sym_tags_and_links_repeat1,
  [aux_sym_currency_list_repeat1] = aux_sym_currency_list_repeat1,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [alias_sym_merge] = alias_sym_merge,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__skipped_lines_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__skipped_lines_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__skipped_lines_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__skipped_lines_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plugin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushtag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_poptag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_document] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_price] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_txn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
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
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_posting_token1] = {
    .visible = false,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_currency] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_beancount_file] = {
    .visible = true,
    .named = true,
  },
  [sym__skipped_lines] = {
    .visible = false,
    .named = true,
  },
  [sym__undated_directives] = {
    .visible = false,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin] = {
    .visible = true,
    .named = true,
  },
  [sym_pushtag] = {
    .visible = true,
    .named = true,
  },
  [sym_poptag] = {
    .visible = true,
    .named = true,
  },
  [sym_pushmeta] = {
    .visible = true,
    .named = true,
  },
  [sym_popmeta] = {
    .visible = true,
    .named = true,
  },
  [sym__dated_directives] = {
    .visible = false,
    .named = true,
  },
  [sym_balance] = {
    .visible = true,
    .named = true,
  },
  [sym_close] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_custom] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_event] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_open] = {
    .visible = true,
    .named = true,
  },
  [sym_pad] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_cost] = {
    .visible = true,
    .named = true,
  },
  [sym_total_cost] = {
    .visible = true,
    .named = true,
  },
  [sym__cost_comp_list] = {
    .visible = false,
    .named = true,
  },
  [sym__cost_comp] = {
    .visible = false,
    .named = true,
  },
  [sym_compound_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_incomplete_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_price_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_total_price_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_posting] = {
    .visible = true,
    .named = true,
  },
  [sym_postings] = {
    .visible = true,
    .named = true,
  },
  [sym_tags_and_links] = {
    .visible = true,
    .named = true,
  },
  [sym_currency_list] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_amount_with_tolerance] = {
    .visible = true,
    .named = true,
  },
  [sym__num_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_paren_num_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_num_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_num_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_beancount_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cost_comp_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_postings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tags_and_links_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_currency_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_merge] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_account = 1,
  field_amount = 2,
  field_booking = 3,
  field_compound_amount = 4,
  field_config = 5,
  field_cost_comp_list = 6,
  field_cost_spec = 7,
  field_currencies = 8,
  field_currency = 9,
  field_date = 10,
  field_description = 11,
  field_filename = 12,
  field_flag = 13,
  field_from_account = 14,
  field_key = 15,
  field_key_value = 16,
  field_merge = 17,
  field_metadata = 18,
  field_name = 19,
  field_narration = 20,
  field_note = 21,
  field_number = 22,
  field_number_per = 23,
  field_number_total = 24,
  field_payee = 25,
  field_postings = 26,
  field_price_annotation = 27,
  field_query = 28,
  field_string = 29,
  field_tag = 30,
  field_tags_and_links = 31,
  field_tolerance = 32,
  field_type = 33,
  field_value = 34,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_account] = "account",
  [field_amount] = "amount",
  [field_booking] = "booking",
  [field_compound_amount] = "compound_amount",
  [field_config] = "config",
  [field_cost_comp_list] = "cost_comp_list",
  [field_cost_spec] = "cost_spec",
  [field_currencies] = "currencies",
  [field_currency] = "currency",
  [field_date] = "date",
  [field_description] = "description",
  [field_filename] = "filename",
  [field_flag] = "flag",
  [field_from_account] = "from_account",
  [field_key] = "key",
  [field_key_value] = "key_value",
  [field_merge] = "merge",
  [field_metadata] = "metadata",
  [field_name] = "name",
  [field_narration] = "narration",
  [field_note] = "note",
  [field_number] = "number",
  [field_number_per] = "number_per",
  [field_number_total] = "number_total",
  [field_payee] = "payee",
  [field_postings] = "postings",
  [field_price_annotation] = "price_annotation",
  [field_query] = "query",
  [field_string] = "string",
  [field_tag] = "tag",
  [field_tags_and_links] = "tags_and_links",
  [field_tolerance] = "tolerance",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 3},
  [16] = {.index = 25, .length = 3},
  [17] = {.index = 28, .length = 3},
  [18] = {.index = 31, .length = 3},
  [19] = {.index = 34, .length = 3},
  [20] = {.index = 37, .length = 3},
  [21] = {.index = 40, .length = 3},
  [22] = {.index = 43, .length = 3},
  [23] = {.index = 46, .length = 3},
  [24] = {.index = 49, .length = 3},
  [25] = {.index = 52, .length = 3},
  [26] = {.index = 55, .length = 3},
  [27] = {.index = 58, .length = 1},
  [28] = {.index = 59, .length = 2},
  [29] = {.index = 61, .length = 2},
  [30] = {.index = 63, .length = 2},
  [31] = {.index = 65, .length = 2},
  [32] = {.index = 67, .length = 1},
  [33] = {.index = 68, .length = 2},
  [34] = {.index = 70, .length = 3},
  [35] = {.index = 73, .length = 3},
  [36] = {.index = 76, .length = 3},
  [37] = {.index = 79, .length = 3},
  [38] = {.index = 82, .length = 4},
  [39] = {.index = 86, .length = 4},
  [40] = {.index = 90, .length = 4},
  [41] = {.index = 94, .length = 4},
  [42] = {.index = 98, .length = 3},
  [43] = {.index = 101, .length = 4},
  [44] = {.index = 105, .length = 4},
  [45] = {.index = 109, .length = 4},
  [46] = {.index = 113, .length = 4},
  [47] = {.index = 117, .length = 4},
  [48] = {.index = 121, .length = 4},
  [49] = {.index = 125, .length = 4},
  [50] = {.index = 129, .length = 4},
  [51] = {.index = 133, .length = 4},
  [52] = {.index = 137, .length = 2},
  [53] = {.index = 139, .length = 1},
  [54] = {.index = 140, .length = 1},
  [55] = {.index = 141, .length = 1},
  [56] = {.index = 142, .length = 4},
  [57] = {.index = 146, .length = 1},
  [58] = {.index = 147, .length = 1},
  [59] = {.index = 148, .length = 3},
  [60] = {.index = 151, .length = 3},
  [61] = {.index = 154, .length = 3},
  [62] = {.index = 157, .length = 3},
  [63] = {.index = 160, .length = 3},
  [64] = {.index = 163, .length = 3},
  [65] = {.index = 166, .length = 3},
  [66] = {.index = 169, .length = 3},
  [67] = {.index = 172, .length = 3},
  [68] = {.index = 175, .length = 3},
  [69] = {.index = 178, .length = 4},
  [70] = {.index = 182, .length = 4},
  [71] = {.index = 186, .length = 4},
  [72] = {.index = 190, .length = 4},
  [73] = {.index = 194, .length = 4},
  [74] = {.index = 198, .length = 5},
  [75] = {.index = 203, .length = 5},
  [76] = {.index = 208, .length = 5},
  [77] = {.index = 213, .length = 5},
  [78] = {.index = 218, .length = 3},
  [79] = {.index = 221, .length = 5},
  [80] = {.index = 226, .length = 5},
  [81] = {.index = 231, .length = 1},
  [82] = {.index = 232, .length = 5},
  [83] = {.index = 237, .length = 8},
  [84] = {.index = 245, .length = 2},
  [85] = {.index = 247, .length = 3},
  [86] = {.index = 250, .length = 4},
  [87] = {.index = 254, .length = 3},
  [88] = {.index = 257, .length = 4},
  [89] = {.index = 261, .length = 4},
  [90] = {.index = 265, .length = 4},
  [91] = {.index = 269, .length = 3},
  [92] = {.index = 272, .length = 3},
  [93] = {.index = 275, .length = 4},
  [94] = {.index = 279, .length = 4},
  [95] = {.index = 283, .length = 4},
  [96] = {.index = 287, .length = 4},
  [97] = {.index = 291, .length = 4},
  [98] = {.index = 295, .length = 4},
  [99] = {.index = 299, .length = 5},
  [100] = {.index = 304, .length = 5},
  [101] = {.index = 309, .length = 5},
  [102] = {.index = 314, .length = 6},
  [103] = {.index = 320, .length = 6},
  [104] = {.index = 326, .length = 6},
  [105] = {.index = 332, .length = 2},
  [106] = {.index = 334, .length = 4},
  [107] = {.index = 338, .length = 2},
  [108] = {.index = 340, .length = 4},
  [109] = {.index = 344, .length = 4},
  [110] = {.index = 348, .length = 5},
  [111] = {.index = 353, .length = 4},
  [112] = {.index = 357, .length = 4},
  [113] = {.index = 361, .length = 5},
  [114] = {.index = 366, .length = 4},
  [115] = {.index = 370, .length = 5},
  [116] = {.index = 375, .length = 5},
  [117] = {.index = 380, .length = 5},
  [118] = {.index = 385, .length = 4},
  [119] = {.index = 389, .length = 6},
  [120] = {.index = 395, .length = 7},
  [121] = {.index = 402, .length = 3},
  [122] = {.index = 405, .length = 5},
  [123] = {.index = 410, .length = 5},
  [124] = {.index = 415, .length = 5},
  [125] = {.index = 420, .length = 6},
  [126] = {.index = 426, .length = 5},
  [127] = {.index = 431, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_tag, 1},
  [3] =
    {field_key, 0},
    {field_value, 1},
  [5] =
    {field_key_value, 1},
  [6] =
    {field_key, 1},
  [7] =
    {field_key, 1},
    {field_value, 2},
  [9] =
    {field_config, 2},
    {field_name, 1},
  [11] =
    {field_currency, 1},
    {field_number, 0},
  [13] =
    {field_account, 2},
    {field_date, 0},
  [15] =
    {field_currency, 2},
    {field_date, 0},
  [17] =
    {field_date, 0},
    {field_name, 2},
  [19] =
    {field_account, 1},
  [20] =
    {field_date, 0},
    {field_postings, 2},
  [22] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 2},
  [25] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
  [28] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 3},
  [31] =
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 3},
  [34] =
    {field_date, 0},
    {field_metadata, 3},
    {field_name, 2},
  [37] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
  [40] =
    {field_date, 0},
    {field_description, 3},
    {field_type, 2},
  [43] =
    {field_account, 2},
    {field_date, 0},
    {field_note, 3},
  [46] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
  [49] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
  [52] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
  [55] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
  [58] =
    {field_currency, 0},
  [59] =
    {field_account, 1},
    {field_cost_spec, 2},
  [61] =
    {field_account, 1},
    {field_amount, 2},
  [63] =
    {field_account, 1},
    {field_price_annotation, 2},
  [65] =
    {field_account, 1},
    {field_metadata, 2},
  [67] =
    {field_number, 0},
  [68] =
    {field_account, 2},
    {field_flag, 1},
  [70] =
    {field_date, 0},
    {field_narration, 2},
    {field_postings, 3},
  [73] =
    {field_date, 0},
    {field_postings, 3},
    {field_tags_and_links, 2},
  [76] =
    {field_date, 0},
    {field_metadata, 2},
    {field_postings, 3},
  [79] =
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [82] =
    {field_date, 0},
    {field_flag, 1},
    {field_narration, 2},
    {field_postings, 3},
  [86] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 3},
    {field_tags_and_links, 2},
  [90] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 2},
    {field_postings, 3},
  [94] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
    {field_metadata, 4},
  [98] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
  [101] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_and_links, 4},
  [105] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 4},
  [109] =
    {field_date, 0},
    {field_description, 3},
    {field_metadata, 4},
    {field_type, 2},
  [113] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 4},
    {field_note, 3},
  [117] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
    {field_metadata, 4},
  [121] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
  [125] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 4},
  [129] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
    {field_metadata, 4},
  [133] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 4},
  [137] =
    {field_account, 1},
    {field_metadata, 3},
  [139] =
    {field_merge, 0},
  [140] =
    {field_date, 0},
  [141] =
    {field_string, 0},
  [142] =
    {field_compound_amount, 0, .inherited = true},
    {field_date, 0, .inherited = true},
    {field_merge, 0, .inherited = true},
    {field_string, 0, .inherited = true},
  [146] =
    {field_compound_amount, 0},
  [147] =
    {field_number_per, 0},
  [148] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_price_annotation, 3},
  [151] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 3},
  [154] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
  [157] =
    {field_account, 1},
    {field_amount, 2},
    {field_price_annotation, 3},
  [160] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 3},
  [163] =
    {field_account, 1},
    {field_metadata, 3},
    {field_price_annotation, 2},
  [166] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
  [169] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
  [172] =
    {field_account, 2},
    {field_flag, 1},
    {field_price_annotation, 3},
  [175] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 3},
  [178] =
    {field_date, 0},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 4},
  [182] =
    {field_date, 0},
    {field_narration, 2},
    {field_postings, 4},
    {field_tags_and_links, 3},
  [186] =
    {field_date, 0},
    {field_metadata, 3},
    {field_narration, 2},
    {field_postings, 4},
  [190] =
    {field_date, 0},
    {field_metadata, 3},
    {field_postings, 4},
    {field_tags_and_links, 2},
  [194] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
    {field_query, 3},
  [198] =
    {field_date, 0},
    {field_flag, 1},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 4},
  [203] =
    {field_date, 0},
    {field_flag, 1},
    {field_narration, 2},
    {field_postings, 4},
    {field_tags_and_links, 3},
  [208] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 3},
    {field_narration, 2},
    {field_postings, 4},
  [213] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 3},
    {field_postings, 4},
    {field_tags_and_links, 2},
  [218] =
    {field_currency, 3},
    {field_number, 0},
    {field_tolerance, 2},
  [221] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 5},
    {field_tags_and_links, 4},
  [226] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 5},
  [231] =
    {field_currency, 1},
  [232] =
    {field_compound_amount, 1, .inherited = true},
    {field_cost_comp_list, 1},
    {field_date, 1, .inherited = true},
    {field_merge, 1, .inherited = true},
    {field_string, 1, .inherited = true},
  [237] =
    {field_compound_amount, 0, .inherited = true},
    {field_compound_amount, 1, .inherited = true},
    {field_date, 0, .inherited = true},
    {field_date, 1, .inherited = true},
    {field_merge, 0, .inherited = true},
    {field_merge, 1, .inherited = true},
    {field_string, 0, .inherited = true},
    {field_string, 1, .inherited = true},
  [245] =
    {field_currency, 1},
    {field_number_per, 0},
  [247] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 4},
  [250] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [254] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 4},
  [257] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 4},
  [261] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 4},
  [265] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [269] =
    {field_account, 1},
    {field_metadata, 4},
    {field_price_annotation, 2},
  [272] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 4},
  [275] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_price_annotation, 4},
  [279] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 4},
  [283] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
  [287] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_price_annotation, 4},
  [291] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 4},
  [295] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [299] =
    {field_date, 0},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 5},
    {field_tags_and_links, 4},
  [304] =
    {field_date, 0},
    {field_metadata, 4},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 5},
  [309] =
    {field_date, 0},
    {field_metadata, 4},
    {field_narration, 2},
    {field_postings, 5},
    {field_tags_and_links, 3},
  [314] =
    {field_date, 0},
    {field_flag, 1},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 5},
    {field_tags_and_links, 4},
  [320] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 4},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 5},
  [326] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 4},
    {field_narration, 2},
    {field_postings, 5},
    {field_tags_and_links, 3},
  [332] =
    {field_currency, 2},
    {field_number_total, 1},
  [334] =
    {field_compound_amount, 1, .inherited = true},
    {field_date, 1, .inherited = true},
    {field_merge, 1, .inherited = true},
    {field_string, 1, .inherited = true},
  [338] =
    {field_currency, 2},
    {field_number_per, 0},
  [340] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [344] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 5},
  [348] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [353] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [357] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 5},
  [361] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [366] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 5},
  [370] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_price_annotation, 5},
  [375] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 5},
  [380] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [385] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [389] =
    {field_date, 0},
    {field_metadata, 5},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 6},
    {field_tags_and_links, 4},
  [395] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 5},
    {field_narration, 3},
    {field_payee, 2},
    {field_postings, 6},
    {field_tags_and_links, 4},
  [402] =
    {field_currency, 3},
    {field_number_per, 0},
    {field_number_total, 2},
  [405] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [410] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [415] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 6},
  [420] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 5},
  [426] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [431] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 7},
    {field_price_annotation, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [53] = {
    [0] = alias_sym_merge,
  },
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
  [26] = 7,
  [27] = 8,
  [28] = 9,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 10,
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
  [116] = 110,
  [117] = 112,
  [118] = 118,
  [119] = 114,
  [120] = 115,
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
  [155] = 137,
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
  [211] = 209,
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
};

static TSCharacterRange aux_sym__skipped_lines_token1_character_set_1[] = {
  {'!', '!'}, {'#', '#'}, {'%', '&'}, {'*', '*'}, {'?', '?'}, {'C', 'C'}, {'M', 'M'}, {'P', 'P'},
  {'R', 'U'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(159);
      ADVANCE_MAP(
        '\n', 166,
        '"', 7,
        '#', 196,
        '(', 201,
        ')', 202,
        '*', 195,
        '+', 204,
        ',', 194,
        '-', 203,
        '/', 205,
        ':', 168,
        ';', 169,
        '@', 197,
        '^', 155,
        'b', 44,
        'c', 78,
        'd', 94,
        'e', 117,
        'i', 90,
        'n', 95,
        'o', 100,
        'p', 45,
        'q', 114,
        't', 118,
        '{', 189,
        '}', 191,
        '~', 200,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?') ADVANCE(160);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (lookahead > '@' &&
          (lookahead < '[' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 166,
        '"', 7,
        '#', 196,
        '(', 201,
        ')', 202,
        '*', 195,
        '+', 204,
        ',', 194,
        '-', 203,
        '/', 205,
        ';', 169,
        '@', 197,
        '{', 189,
        '}', 191,
        '~', 200,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 166,
        '"', 7,
        '#', 156,
        '(', 201,
        '*', 195,
        '+', 204,
        '-', 203,
        '/', 205,
        'F', 31,
        'T', 32,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      if (lookahead > 0x7f) ADVANCE(41);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 166,
        '"', 7,
        '#', 156,
        '(', 201,
        '+', 204,
        '-', 203,
        ';', 169,
        '@', 197,
        'F', 34,
        'T', 37,
        '^', 155,
        '{', 189,
        '}', 190,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead > '@' &&
          (lookahead < '[' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '+') ADVANCE(204);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '(') ADVANCE(201);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '+') ADVANCE(204);
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(213);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '^') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(160);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead > '@' &&
          (lookahead < '[' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(224);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(228);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'A') ADVANCE(235);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'R') ADVANCE(236);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || 'A' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'E') ADVANCE(208);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'L') ADVANCE(38);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(35);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(242);
      if (lookahead > ',' &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == ';') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43);
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(160);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(161);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead > '@' &&
          (lookahead < '[' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(175);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(173);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(68);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(83);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 117:
      if (lookahead == 'v') ADVANCE(64);
      END_STATE();
    case 118:
      if (lookahead == 'x') ADVANCE(86);
      END_STATE();
    case 119:
      if (lookahead == 'y') ADVANCE(188);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(179);
      END_STATE();
    case 121:
      if (lookahead == '}') ADVANCE(193);
      END_STATE();
    case 122:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(148);
      END_STATE();
    case 123:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(149);
      END_STATE();
    case 124:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(264);
      END_STATE();
    case 125:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(243);
      END_STATE();
    case 126:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      END_STATE();
    case 127:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 128:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 129:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 130:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 131:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      END_STATE();
    case 132:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 133:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 134:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 135:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(251);
      END_STATE();
    case 136:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(256);
      END_STATE();
    case 137:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 138:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(258);
      END_STATE();
    case 139:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 140:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 141:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 142:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 143:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(259);
      END_STATE();
    case 144:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(263);
      END_STATE();
    case 145:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(261);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 154:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 155:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 156:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 157:
      if (lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || 0x7f < lookahead)) ADVANCE(271);
      END_STATE();
    case 158:
      if (eof) ADVANCE(159);
      ADVANCE_MAP(
        '\n', 167,
        ':', 168,
        ';', 169,
        'b', 44,
        'c', 78,
        'd', 94,
        'e', 117,
        'i', 90,
        'n', 95,
        'o', 100,
        'p', 45,
        'q', 114,
        't', 118,
        '}', 121,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (set_contains(aux_sym__skipped_lines_token1_character_set_1, 9, lookahead)) ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token3);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_pushmeta);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_popmeta);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_price);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_txn);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_posting_token1);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_currency);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(225);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(224);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(229);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(231);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(228);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'E') ADVANCE(207);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'L') ADVANCE(239);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(238);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'E') ADVANCE(206);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'S') ADVANCE(232);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      if (lookahead > '`' &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(242);
      if (lookahead > ',' &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(41);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(264);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(251);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(259);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(261);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(270);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 0x7f < lookahead)) ADVANCE(271);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 158},
  [2] = {.lex_state = 158},
  [3] = {.lex_state = 158},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 158},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 158},
  [22] = {.lex_state = 158},
  [23] = {.lex_state = 158},
  [24] = {.lex_state = 158},
  [25] = {.lex_state = 158},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 158},
  [30] = {.lex_state = 158},
  [31] = {.lex_state = 158},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 158},
  [34] = {.lex_state = 158},
  [35] = {.lex_state = 158},
  [36] = {.lex_state = 158},
  [37] = {.lex_state = 158},
  [38] = {.lex_state = 158},
  [39] = {.lex_state = 158},
  [40] = {.lex_state = 158},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 158},
  [43] = {.lex_state = 158},
  [44] = {.lex_state = 158},
  [45] = {.lex_state = 158},
  [46] = {.lex_state = 158},
  [47] = {.lex_state = 158},
  [48] = {.lex_state = 158},
  [49] = {.lex_state = 158},
  [50] = {.lex_state = 158},
  [51] = {.lex_state = 158},
  [52] = {.lex_state = 158},
  [53] = {.lex_state = 158},
  [54] = {.lex_state = 158},
  [55] = {.lex_state = 158},
  [56] = {.lex_state = 158},
  [57] = {.lex_state = 158},
  [58] = {.lex_state = 158},
  [59] = {.lex_state = 158},
  [60] = {.lex_state = 158},
  [61] = {.lex_state = 158},
  [62] = {.lex_state = 158},
  [63] = {.lex_state = 158},
  [64] = {.lex_state = 158},
  [65] = {.lex_state = 158},
  [66] = {.lex_state = 158},
  [67] = {.lex_state = 158},
  [68] = {.lex_state = 158},
  [69] = {.lex_state = 158},
  [70] = {.lex_state = 158},
  [71] = {.lex_state = 158},
  [72] = {.lex_state = 158},
  [73] = {.lex_state = 158},
  [74] = {.lex_state = 158},
  [75] = {.lex_state = 158},
  [76] = {.lex_state = 158},
  [77] = {.lex_state = 158},
  [78] = {.lex_state = 158},
  [79] = {.lex_state = 158},
  [80] = {.lex_state = 158},
  [81] = {.lex_state = 158},
  [82] = {.lex_state = 158},
  [83] = {.lex_state = 158},
  [84] = {.lex_state = 158},
  [85] = {.lex_state = 158},
  [86] = {.lex_state = 158},
  [87] = {.lex_state = 158},
  [88] = {.lex_state = 158},
  [89] = {.lex_state = 158},
  [90] = {.lex_state = 158},
  [91] = {.lex_state = 158},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 43},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 43},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 158},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 163},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 3},
  [326] = {.lex_state = 3},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 1},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__skipped_lines_token1] = ACTIONS(1),
    [aux_sym__skipped_lines_token3] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__skipped_lines_token4] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_plugin] = ACTIONS(1),
    [anon_sym_pushtag] = ACTIONS(1),
    [anon_sym_poptag] = ACTIONS(1),
    [anon_sym_pushmeta] = ACTIONS(1),
    [anon_sym_popmeta] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_document] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_pad] = ACTIONS(1),
    [anon_sym_price] = ACTIONS(1),
    [anon_sym_txn] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [aux_sym_posting_token1] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_account] = ACTIONS(1),
  },
  [1] = {
    [sym_beancount_file] = STATE(309),
    [sym__skipped_lines] = STATE(2),
    [sym__undated_directives] = STATE(2),
    [sym_include] = STATE(2),
    [sym_option] = STATE(2),
    [sym_plugin] = STATE(2),
    [sym_pushtag] = STATE(2),
    [sym_poptag] = STATE(2),
    [sym_pushmeta] = STATE(2),
    [sym_popmeta] = STATE(2),
    [sym__dated_directives] = STATE(2),
    [sym_balance] = STATE(2),
    [sym_close] = STATE(2),
    [sym_commodity] = STATE(2),
    [sym_custom] = STATE(2),
    [sym_document] = STATE(2),
    [sym_event] = STATE(2),
    [sym_note] = STATE(2),
    [sym_open] = STATE(2),
    [sym_pad] = STATE(2),
    [sym_price] = STATE(2),
    [sym_transaction] = STATE(2),
    [sym_query] = STATE(2),
    [aux_sym_beancount_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__skipped_lines_token1] = ACTIONS(5),
    [aux_sym__skipped_lines_token3] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(5),
    [aux_sym__skipped_lines_token4] = ACTIONS(9),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_option] = ACTIONS(13),
    [anon_sym_plugin] = ACTIONS(15),
    [anon_sym_pushtag] = ACTIONS(17),
    [anon_sym_poptag] = ACTIONS(19),
    [anon_sym_pushmeta] = ACTIONS(21),
    [anon_sym_popmeta] = ACTIONS(23),
    [sym_date] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(11), 1,
      anon_sym_include,
    ACTIONS(13), 1,
      anon_sym_option,
    ACTIONS(15), 1,
      anon_sym_plugin,
    ACTIONS(17), 1,
      anon_sym_pushtag,
    ACTIONS(19), 1,
      anon_sym_poptag,
    ACTIONS(21), 1,
      anon_sym_pushmeta,
    ACTIONS(23), 1,
      anon_sym_popmeta,
    ACTIONS(25), 1,
      sym_date,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(5), 2,
      aux_sym__skipped_lines_token1,
      anon_sym_COLON,
    STATE(3), 23,
      sym__skipped_lines,
      sym__undated_directives,
      sym_include,
      sym_option,
      sym_plugin,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym__dated_directives,
      sym_balance,
      sym_close,
      sym_commodity,
      sym_custom,
      sym_document,
      sym_event,
      sym_note,
      sym_open,
      sym_pad,
      sym_price,
      sym_transaction,
      sym_query,
      aux_sym_beancount_file_repeat1,
  [63] = 13,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(39), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(42), 1,
      anon_sym_include,
    ACTIONS(45), 1,
      anon_sym_option,
    ACTIONS(48), 1,
      anon_sym_plugin,
    ACTIONS(51), 1,
      anon_sym_pushtag,
    ACTIONS(54), 1,
      anon_sym_poptag,
    ACTIONS(57), 1,
      anon_sym_pushmeta,
    ACTIONS(60), 1,
      anon_sym_popmeta,
    ACTIONS(63), 1,
      sym_date,
    ACTIONS(33), 2,
      aux_sym__skipped_lines_token1,
      anon_sym_COLON,
    STATE(3), 23,
      sym__skipped_lines,
      sym__undated_directives,
      sym_include,
      sym_option,
      sym_plugin,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym__dated_directives,
      sym_balance,
      sym_close,
      sym_commodity,
      sym_custom,
      sym_document,
      sym_event,
      sym_note,
      sym_open,
      sym_pad,
      sym_price,
      sym_transaction,
      sym_query,
      aux_sym_beancount_file_repeat1,
  [126] = 17,
    ACTIONS(66), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(68), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(78), 1,
      aux_sym_posting_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_currency,
    ACTIONS(87), 1,
      sym_number,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(242), 1,
      sym_metadata,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(92), 2,
      sym_incomplete_amount,
      sym_amount,
    STATE(102), 2,
      sym_cost,
      sym_total_cost,
    STATE(147), 2,
      sym_price_annotation,
      sym_total_price_annotation,
    STATE(94), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [185] = 17,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_currency,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(89), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(91), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(93), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(222), 1,
      sym_metadata,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(41), 2,
      sym_incomplete_amount,
      sym_amount,
    STATE(103), 2,
      sym_cost,
      sym_total_cost,
    STATE(133), 2,
      sym_price_annotation,
      sym_total_price_annotation,
    STATE(94), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [244] = 11,
    ACTIONS(96), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      sym_bool,
    ACTIONS(108), 1,
      sym_number,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(279), 1,
      sym_metadata,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(11), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(106), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(93), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [285] = 3,
    ACTIONS(114), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(112), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(110), 12,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_POUND,
      anon_sym_AT_AT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_currency,
  [310] = 2,
    ACTIONS(112), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(110), 14,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_AT_AT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [333] = 2,
    ACTIONS(118), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(116), 14,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_AT_AT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [356] = 2,
    ACTIONS(122), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(120), 14,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_POUND,
      anon_sym_AT_AT,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_currency,
  [379] = 11,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_number,
    ACTIONS(124), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(126), 1,
      sym_bool,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(315), 1,
      sym_metadata,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(15), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(128), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(93), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [420] = 13,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(132), 1,
      anon_sym_STAR,
    ACTIONS(134), 1,
      anon_sym_POUND,
    ACTIONS(136), 1,
      sym_date,
    ACTIONS(138), 1,
      sym_string,
    ACTIONS(140), 1,
      sym_currency,
    ACTIONS(142), 1,
      sym_number,
    STATE(188), 1,
      sym__cost_comp,
    STATE(217), 1,
      sym_compound_amount,
    STATE(281), 1,
      sym__cost_comp_list,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(107), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [464] = 13,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_STAR,
    ACTIONS(134), 1,
      anon_sym_POUND,
    ACTIONS(136), 1,
      sym_date,
    ACTIONS(138), 1,
      sym_string,
    ACTIONS(140), 1,
      sym_currency,
    ACTIONS(142), 1,
      sym_number,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym__cost_comp,
    STATE(217), 1,
      sym_compound_amount,
    STATE(282), 1,
      sym__cost_comp_list,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(107), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [508] = 9,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(148), 1,
      aux_sym_posting_token1,
    ACTIONS(154), 1,
      sym_number,
    STATE(241), 1,
      sym_amount,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(150), 2,
      sym_bool,
      sym_currency,
    ACTIONS(152), 4,
      sym_date,
      sym_tag,
      sym_string,
      sym_account,
    STATE(121), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [544] = 9,
    ACTIONS(156), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(158), 1,
      aux_sym_posting_token1,
    ACTIONS(160), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      sym_bool,
    ACTIONS(172), 1,
      sym_number,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(15), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(169), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(93), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [579] = 11,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_STAR,
    ACTIONS(134), 1,
      anon_sym_POUND,
    ACTIONS(136), 1,
      sym_date,
    ACTIONS(138), 1,
      sym_string,
    ACTIONS(140), 1,
      sym_currency,
    ACTIONS(142), 1,
      sym_number,
    STATE(212), 1,
      sym__cost_comp,
    STATE(217), 1,
      sym_compound_amount,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(107), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [617] = 2,
    ACTIONS(177), 5,
      anon_sym_LBRACE,
      anon_sym_AT,
      aux_sym_posting_token1,
      sym_bool,
      sym_number,
    ACTIONS(175), 10,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_date,
      sym_string,
      sym_account,
  [637] = 14,
    ACTIONS(179), 1,
      aux_sym__skipped_lines_token1,
    ACTIONS(181), 1,
      anon_sym_balance,
    ACTIONS(183), 1,
      anon_sym_close,
    ACTIONS(185), 1,
      anon_sym_commodity,
    ACTIONS(187), 1,
      anon_sym_custom,
    ACTIONS(189), 1,
      anon_sym_document,
    ACTIONS(191), 1,
      anon_sym_event,
    ACTIONS(193), 1,
      anon_sym_note,
    ACTIONS(195), 1,
      anon_sym_open,
    ACTIONS(197), 1,
      anon_sym_pad,
    ACTIONS(199), 1,
      anon_sym_price,
    ACTIONS(201), 1,
      anon_sym_txn,
    ACTIONS(203), 1,
      anon_sym_query,
    STATE(97), 1,
      sym_flag,
  [680] = 8,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_currency,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(207), 1,
      aux_sym_posting_token1,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(205), 2,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
    STATE(215), 2,
      sym_incomplete_amount,
      sym_amount,
    STATE(94), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [711] = 8,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      sym_currency,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(211), 1,
      aux_sym_posting_token1,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(209), 2,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
    STATE(205), 2,
      sym_incomplete_amount,
      sym_amount,
    STATE(94), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [742] = 1,
    ACTIONS(213), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [758] = 1,
    ACTIONS(215), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [774] = 1,
    ACTIONS(217), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [790] = 1,
    ACTIONS(219), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [806] = 1,
    ACTIONS(221), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [822] = 3,
    ACTIONS(223), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(112), 4,
      aux_sym_posting_token1,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(110), 7,
      aux_sym__skipped_lines_token3,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_date,
      sym_string,
      sym_account,
  [842] = 2,
    ACTIONS(112), 4,
      aux_sym_posting_token1,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(110), 9,
      aux_sym__skipped_lines_token3,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_date,
      sym_string,
      sym_account,
  [860] = 2,
    ACTIONS(118), 4,
      aux_sym_posting_token1,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(116), 9,
      aux_sym__skipped_lines_token3,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_date,
      sym_string,
      sym_account,
  [878] = 1,
    ACTIONS(225), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [894] = 1,
    ACTIONS(227), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [910] = 1,
    ACTIONS(229), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [926] = 2,
    ACTIONS(122), 4,
      aux_sym_posting_token1,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(120), 9,
      aux_sym__skipped_lines_token3,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      sym_date,
      sym_string,
      sym_account,
  [944] = 1,
    ACTIONS(231), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [960] = 1,
    ACTIONS(233), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [976] = 1,
    ACTIONS(235), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [992] = 1,
    ACTIONS(237), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1008] = 1,
    ACTIONS(239), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1024] = 1,
    ACTIONS(241), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1040] = 1,
    ACTIONS(243), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1056] = 1,
    ACTIONS(245), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1072] = 11,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(247), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(249), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(251), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(235), 1,
      sym_metadata,
    STATE(104), 2,
      sym_cost,
      sym_total_cost,
    STATE(153), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [1108] = 1,
    ACTIONS(254), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1124] = 1,
    ACTIONS(256), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1140] = 1,
    ACTIONS(258), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1156] = 1,
    ACTIONS(260), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1172] = 1,
    ACTIONS(262), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1188] = 1,
    ACTIONS(264), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1204] = 1,
    ACTIONS(266), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1220] = 1,
    ACTIONS(268), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1236] = 1,
    ACTIONS(270), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1252] = 1,
    ACTIONS(272), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1268] = 1,
    ACTIONS(274), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1284] = 1,
    ACTIONS(276), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1300] = 1,
    ACTIONS(278), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1316] = 1,
    ACTIONS(280), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1332] = 1,
    ACTIONS(282), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1348] = 1,
    ACTIONS(284), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1364] = 1,
    ACTIONS(286), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1380] = 1,
    ACTIONS(288), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1396] = 1,
    ACTIONS(290), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1412] = 1,
    ACTIONS(292), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1428] = 1,
    ACTIONS(294), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1444] = 1,
    ACTIONS(296), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1460] = 1,
    ACTIONS(298), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1476] = 1,
    ACTIONS(300), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1492] = 1,
    ACTIONS(302), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1508] = 1,
    ACTIONS(304), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1524] = 1,
    ACTIONS(306), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1540] = 1,
    ACTIONS(308), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1556] = 1,
    ACTIONS(310), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1572] = 1,
    ACTIONS(312), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1588] = 1,
    ACTIONS(314), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1604] = 1,
    ACTIONS(316), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1620] = 1,
    ACTIONS(318), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1636] = 1,
    ACTIONS(320), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1652] = 1,
    ACTIONS(322), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1668] = 1,
    ACTIONS(324), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1684] = 1,
    ACTIONS(326), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1700] = 1,
    ACTIONS(328), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1716] = 1,
    ACTIONS(330), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1732] = 1,
    ACTIONS(332), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1748] = 1,
    ACTIONS(334), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1764] = 1,
    ACTIONS(336), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1780] = 1,
    ACTIONS(338), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1796] = 1,
    ACTIONS(340), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1812] = 1,
    ACTIONS(342), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1828] = 1,
    ACTIONS(344), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1844] = 1,
    ACTIONS(346), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1860] = 1,
    ACTIONS(348), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1876] = 1,
    ACTIONS(350), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1892] = 1,
    ACTIONS(352), 13,
      ts_builtin_sym_end,
      aux_sym__skipped_lines_token1,
      aux_sym__skipped_lines_token3,
      anon_sym_COLON,
      aux_sym__skipped_lines_token4,
      anon_sym_include,
      anon_sym_option,
      anon_sym_plugin,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      sym_date,
  [1908] = 11,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(354), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(356), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(358), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(259), 1,
      sym_metadata,
    STATE(105), 2,
      sym_cost,
      sym_total_cost,
    STATE(141), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [1944] = 5,
    ACTIONS(367), 1,
      sym_currency,
    ACTIONS(223), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(365), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(363), 3,
      aux_sym_posting_token1,
      sym_bool,
      sym_number,
    ACTIONS(361), 5,
      aux_sym__skipped_lines_token3,
      anon_sym_LPAREN,
      sym_date,
      sym_string,
      sym_account,
  [1968] = 5,
    ACTIONS(375), 1,
      sym_currency,
    ACTIONS(114), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(371), 3,
      anon_sym_LBRACE,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(369), 4,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [1991] = 9,
    ACTIONS(377), 1,
      aux_sym_posting_token1,
    ACTIONS(381), 1,
      sym_string,
    STATE(127), 1,
      sym_tags_and_links,
    STATE(154), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(194), 1,
      sym_metadata,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(284), 1,
      sym_postings,
    ACTIONS(379), 2,
      sym_tag,
      sym_link,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2021] = 9,
    ACTIONS(377), 1,
      aux_sym_posting_token1,
    ACTIONS(383), 1,
      sym_string,
    STATE(128), 1,
      sym_tags_and_links,
    STATE(154), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(160), 1,
      sym_metadata,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(264), 1,
      sym_postings,
    ACTIONS(379), 2,
      sym_tag,
      sym_link,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2051] = 9,
    ACTIONS(377), 1,
      aux_sym_posting_token1,
    ACTIONS(385), 1,
      sym_string,
    STATE(129), 1,
      sym_tags_and_links,
    STATE(154), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(165), 1,
      sym_metadata,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(262), 1,
      sym_postings,
    ACTIONS(379), 2,
      sym_tag,
      sym_link,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2081] = 9,
    ACTIONS(377), 1,
      aux_sym_posting_token1,
    ACTIONS(387), 1,
      sym_string,
    STATE(126), 1,
      sym_tags_and_links,
    STATE(154), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(198), 1,
      sym_metadata,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(290), 1,
      sym_postings,
    ACTIONS(379), 2,
      sym_tag,
      sym_link,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2111] = 5,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(389), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(167), 2,
      sym_amount,
      sym_amount_with_tolerance,
    STATE(130), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2132] = 8,
    ACTIONS(377), 1,
      aux_sym_posting_token1,
    STATE(131), 1,
      sym_tags_and_links,
    STATE(154), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(190), 1,
      sym_metadata,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(306), 1,
      sym_postings,
    ACTIONS(379), 2,
      sym_tag,
      sym_link,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2159] = 8,
    ACTIONS(377), 1,
      aux_sym_posting_token1,
    STATE(125), 1,
      sym_tags_and_links,
    STATE(154), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(178), 1,
      sym_metadata,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(318), 1,
      sym_postings,
    ACTIONS(379), 2,
      sym_tag,
      sym_link,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2186] = 8,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(391), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(393), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(395), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(256), 1,
      sym_metadata,
    STATE(132), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [2212] = 8,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(398), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(400), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(402), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(231), 1,
      sym_metadata,
    STATE(143), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [2238] = 8,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(405), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(407), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(409), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(243), 1,
      sym_metadata,
    STATE(134), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [2264] = 8,
    ACTIONS(74), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      anon_sym_AT_AT,
    ACTIONS(412), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(414), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(416), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(236), 1,
      sym_metadata,
    STATE(149), 2,
      sym_price_annotation,
      sym_total_price_annotation,
  [2290] = 5,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(419), 1,
      sym_currency,
    ACTIONS(421), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(148), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2310] = 6,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    ACTIONS(427), 1,
      anon_sym_POUND,
    ACTIONS(429), 1,
      sym_currency,
    ACTIONS(114), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(425), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [2332] = 5,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(431), 1,
      sym_currency,
    ACTIONS(433), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(140), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2352] = 5,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(435), 1,
      sym_number,
    STATE(184), 1,
      sym_amount,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(138), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2372] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(437), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(10), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2389] = 7,
    ACTIONS(439), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(441), 1,
      aux_sym_posting_token1,
    STATE(154), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(172), 1,
      sym_tags_and_links,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(322), 1,
      sym_metadata,
    ACTIONS(379), 2,
      sym_tag,
      sym_link,
  [2412] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(7), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2429] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(150), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2446] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(447), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(8), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2463] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(449), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(155), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2480] = 4,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      sym_number,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(32), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2497] = 4,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(453), 1,
      sym_number,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(26), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2514] = 7,
    ACTIONS(455), 1,
      aux_sym__skipped_lines_token1,
    ACTIONS(457), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(459), 1,
      sym_key,
    ACTIONS(463), 1,
      sym_account,
    STATE(223), 1,
      sym_key_value,
    STATE(283), 1,
      sym_flag,
    ACTIONS(461), 2,
      sym_tag,
      sym_link,
  [2537] = 4,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(465), 1,
      sym_number,
    ACTIONS(102), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(27), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2554] = 4,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(467), 1,
      sym_number,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(137), 4,
      sym__num_expr,
      sym_paren_num_expr,
      sym_unary_num_expr,
      sym_binary_num_expr,
  [2571] = 5,
    ACTIONS(375), 1,
      sym_currency,
    ACTIONS(469), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(471), 1,
      aux_sym_posting_token1,
    ACTIONS(114), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2589] = 2,
    ACTIONS(475), 3,
      anon_sym_LBRACE,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(473), 4,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_AT_AT,
  [2601] = 7,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(477), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(479), 1,
      sym_string,
    ACTIONS(481), 1,
      sym_currency,
    STATE(144), 1,
      sym_currency_list,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(280), 1,
      sym_metadata,
  [2623] = 6,
    ACTIONS(455), 1,
      aux_sym__skipped_lines_token1,
    ACTIONS(457), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(459), 1,
      sym_key,
    ACTIONS(463), 1,
      sym_account,
    STATE(223), 1,
      sym_key_value,
    STATE(283), 1,
      sym_flag,
  [2642] = 5,
    ACTIONS(483), 1,
      aux_sym_posting_token1,
    STATE(168), 1,
      sym_metadata,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(277), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2659] = 5,
    ACTIONS(483), 1,
      aux_sym_posting_token1,
    STATE(193), 1,
      sym_metadata,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(302), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2676] = 5,
    ACTIONS(483), 1,
      aux_sym_posting_token1,
    STATE(163), 1,
      sym_metadata,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(288), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2693] = 5,
    ACTIONS(483), 1,
      aux_sym_posting_token1,
    STATE(197), 1,
      sym_metadata,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(323), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2710] = 5,
    ACTIONS(483), 1,
      aux_sym_posting_token1,
    STATE(195), 1,
      sym_metadata,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(299), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2727] = 4,
    ACTIONS(375), 1,
      sym_currency,
    ACTIONS(485), 1,
      anon_sym_TILDE,
    ACTIONS(114), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2742] = 5,
    ACTIONS(483), 1,
      aux_sym_posting_token1,
    STATE(162), 1,
      sym_metadata,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(313), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2759] = 5,
    ACTIONS(487), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(489), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(491), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(232), 1,
      sym_metadata,
  [2775] = 5,
    ACTIONS(494), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(496), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(498), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(237), 1,
      sym_metadata,
  [2791] = 5,
    ACTIONS(501), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(503), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(505), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(226), 1,
      sym_metadata,
  [2807] = 2,
    ACTIONS(510), 2,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(508), 3,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_AT_AT,
  [2817] = 4,
    ACTIONS(512), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(514), 1,
      aux_sym_posting_token1,
    STATE(136), 1,
      aux_sym_tags_and_links_repeat1,
    ACTIONS(517), 2,
      sym_tag,
      sym_link,
  [2831] = 3,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2843] = 3,
    ACTIONS(375), 1,
      sym_currency,
    ACTIONS(114), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2855] = 2,
    ACTIONS(524), 2,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(522), 3,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_AT_AT,
  [2865] = 3,
    ACTIONS(526), 1,
      sym_currency,
    ACTIONS(114), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2877] = 5,
    ACTIONS(528), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(530), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(532), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(238), 1,
      sym_metadata,
  [2893] = 2,
    ACTIONS(537), 2,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(535), 3,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_AT_AT,
  [2903] = 5,
    ACTIONS(539), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(541), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(543), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(247), 1,
      sym_metadata,
  [2919] = 5,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(546), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(548), 1,
      sym_string,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(274), 1,
      sym_metadata,
  [2935] = 2,
    ACTIONS(552), 2,
      anon_sym_AT,
      aux_sym_posting_token1,
    ACTIONS(550), 3,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
      anon_sym_AT_AT,
  [2945] = 4,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      aux_sym_posting_token1,
    STATE(152), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(554), 2,
      aux_sym__skipped_lines_token3,
      sym_string,
  [2959] = 5,
    ACTIONS(560), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(562), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(564), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(257), 1,
      sym_metadata,
  [2975] = 3,
    ACTIONS(567), 1,
      sym_currency,
    ACTIONS(114), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2987] = 5,
    ACTIONS(569), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(571), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(573), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(251), 1,
      sym_metadata,
  [3003] = 3,
    ACTIONS(576), 1,
      sym_currency,
    ACTIONS(114), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3015] = 1,
    ACTIONS(578), 5,
      aux_sym_posting_token1,
      sym_tag,
      sym_link,
      sym_string,
      sym_account,
  [3023] = 4,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      aux_sym_posting_token1,
    STATE(156), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(580), 2,
      aux_sym__skipped_lines_token3,
      sym_string,
  [3037] = 5,
    ACTIONS(584), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(586), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(588), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(221), 1,
      sym_metadata,
  [3053] = 4,
    ACTIONS(591), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(593), 1,
      aux_sym_posting_token1,
    STATE(136), 1,
      aux_sym_tags_and_links_repeat1,
    ACTIONS(596), 2,
      sym_tag,
      sym_link,
  [3067] = 3,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(373), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3079] = 4,
    ACTIONS(602), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      aux_sym_posting_token1,
    STATE(156), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(600), 2,
      aux_sym__skipped_lines_token3,
      sym_string,
  [3093] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(607), 1,
      aux_sym__skipped_lines_token3,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(329), 1,
      sym_metadata,
  [3106] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(609), 1,
      aux_sym__skipped_lines_token3,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(328), 1,
      sym_metadata,
  [3119] = 4,
    ACTIONS(611), 1,
      anon_sym_RBRACE,
    ACTIONS(613), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym__cost_comp_list_repeat1,
  [3132] = 3,
    ACTIONS(617), 1,
      aux_sym_posting_token1,
    STATE(287), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3143] = 3,
    ACTIONS(619), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(621), 1,
      aux_sym_posting_token1,
    STATE(204), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3154] = 3,
    ACTIONS(617), 1,
      aux_sym_posting_token1,
    STATE(296), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3165] = 3,
    ACTIONS(617), 1,
      aux_sym_posting_token1,
    STATE(269), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3176] = 4,
    ACTIONS(623), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(625), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(253), 1,
      sym_metadata,
  [3189] = 3,
    ACTIONS(617), 1,
      aux_sym_posting_token1,
    STATE(304), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3200] = 4,
    ACTIONS(628), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(630), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(255), 1,
      sym_metadata,
  [3213] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(633), 1,
      aux_sym__skipped_lines_token3,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(311), 1,
      sym_metadata,
  [3226] = 3,
    ACTIONS(617), 1,
      aux_sym_posting_token1,
    STATE(292), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3237] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(635), 1,
      aux_sym__skipped_lines_token3,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(286), 1,
      sym_metadata,
  [3250] = 4,
    ACTIONS(637), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(639), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(225), 1,
      sym_metadata,
  [3263] = 4,
    ACTIONS(642), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(644), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(229), 1,
      sym_metadata,
  [3276] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(647), 1,
      aux_sym__skipped_lines_token3,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(289), 1,
      sym_metadata,
  [3289] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(649), 1,
      aux_sym__skipped_lines_token3,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(316), 1,
      sym_metadata,
  [3302] = 3,
    ACTIONS(459), 1,
      sym_key,
    STATE(223), 1,
      sym_key_value,
    ACTIONS(461), 2,
      sym_tag,
      sym_link,
  [3313] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(651), 1,
      aux_sym__skipped_lines_token3,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(337), 1,
      sym_metadata,
  [3326] = 4,
    ACTIONS(653), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(655), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(224), 1,
      sym_metadata,
  [3339] = 4,
    ACTIONS(658), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(660), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(252), 1,
      sym_metadata,
  [3352] = 3,
    ACTIONS(617), 1,
      aux_sym_posting_token1,
    STATE(275), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3363] = 4,
    ACTIONS(663), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(665), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(228), 1,
      sym_metadata,
  [3376] = 4,
    ACTIONS(668), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(670), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(249), 1,
      sym_metadata,
  [3389] = 4,
    ACTIONS(673), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(675), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(240), 1,
      sym_metadata,
  [3402] = 4,
    ACTIONS(678), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(680), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(246), 1,
      sym_metadata,
  [3415] = 4,
    ACTIONS(683), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(685), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(245), 1,
      sym_metadata,
  [3428] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(688), 1,
      aux_sym__skipped_lines_token3,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(327), 1,
      sym_metadata,
  [3441] = 4,
    ACTIONS(690), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(692), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(260), 1,
      sym_metadata,
  [3454] = 2,
    ACTIONS(695), 1,
      aux_sym_posting_token1,
    ACTIONS(512), 3,
      aux_sym__skipped_lines_token3,
      sym_tag,
      sym_link,
  [3463] = 4,
    ACTIONS(697), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(699), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(244), 1,
      sym_metadata,
  [3476] = 4,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(702), 1,
      anon_sym_RBRACE,
    ACTIONS(704), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(159), 1,
      aux_sym__cost_comp_list_repeat1,
  [3489] = 4,
    ACTIONS(706), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(708), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(230), 1,
      sym_metadata,
  [3502] = 3,
    ACTIONS(617), 1,
      aux_sym_posting_token1,
    STATE(272), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3513] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(711), 1,
      aux_sym__skipped_lines_token3,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(278), 1,
      sym_metadata,
  [3526] = 4,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    ACTIONS(715), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(717), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym__cost_comp_list_repeat1,
  [3539] = 3,
    ACTIONS(617), 1,
      aux_sym_posting_token1,
    STATE(263), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3550] = 3,
    ACTIONS(617), 1,
      aux_sym_posting_token1,
    STATE(312), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3561] = 3,
    ACTIONS(617), 1,
      aux_sym_posting_token1,
    STATE(300), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3572] = 4,
    ACTIONS(720), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(722), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(234), 1,
      sym_metadata,
  [3585] = 3,
    ACTIONS(617), 1,
      aux_sym_posting_token1,
    STATE(310), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3596] = 3,
    ACTIONS(617), 1,
      aux_sym_posting_token1,
    STATE(301), 1,
      sym_postings,
    STATE(161), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3607] = 4,
    ACTIONS(725), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(727), 1,
      aux_sym_posting_token1,
    STATE(211), 1,
      aux_sym_metadata_repeat1,
    STATE(239), 1,
      sym_metadata,
  [3620] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(730), 1,
      aux_sym__skipped_lines_token3,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(307), 1,
      sym_metadata,
  [3633] = 4,
    ACTIONS(455), 1,
      aux_sym__skipped_lines_token1,
    ACTIONS(457), 1,
      aux_sym__skipped_lines_token4,
    ACTIONS(463), 1,
      sym_account,
    STATE(283), 1,
      sym_flag,
  [3646] = 2,
    ACTIONS(605), 1,
      aux_sym_posting_token1,
    ACTIONS(600), 3,
      aux_sym__skipped_lines_token3,
      anon_sym_COMMA,
      sym_string,
  [3655] = 4,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(732), 1,
      aux_sym__skipped_lines_token3,
    STATE(209), 1,
      aux_sym_metadata_repeat1,
    STATE(261), 1,
      sym_metadata,
  [3668] = 3,
    ACTIONS(734), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(736), 1,
      aux_sym_posting_token1,
    STATE(204), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3679] = 2,
    ACTIONS(741), 1,
      aux_sym_posting_token1,
    ACTIONS(739), 2,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
  [3687] = 2,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    ACTIONS(745), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3695] = 2,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    ACTIONS(749), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3703] = 3,
    ACTIONS(751), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(753), 1,
      aux_sym_posting_token1,
    STATE(208), 1,
      aux_sym_metadata_repeat1,
  [3713] = 3,
    ACTIONS(98), 1,
      aux_sym_posting_token1,
    ACTIONS(756), 1,
      aux_sym__skipped_lines_token3,
    STATE(208), 1,
      aux_sym_metadata_repeat1,
  [3723] = 2,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    ACTIONS(760), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3731] = 3,
    ACTIONS(756), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(762), 1,
      aux_sym_posting_token1,
    STATE(208), 1,
      aux_sym_metadata_repeat1,
  [3741] = 2,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
    ACTIONS(767), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3749] = 2,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
    ACTIONS(771), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3757] = 2,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
    ACTIONS(775), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3765] = 2,
    ACTIONS(779), 1,
      aux_sym_posting_token1,
    ACTIONS(777), 2,
      aux_sym__skipped_lines_token3,
      aux_sym__skipped_lines_token4,
  [3773] = 2,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
    ACTIONS(783), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3781] = 2,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
    ACTIONS(787), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3789] = 2,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
    ACTIONS(791), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3797] = 2,
    ACTIONS(793), 1,
      anon_sym_RBRACE,
    ACTIONS(795), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3805] = 2,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    ACTIONS(799), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
  [3813] = 2,
    ACTIONS(801), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(803), 1,
      aux_sym_posting_token1,
  [3820] = 2,
    ACTIONS(805), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(807), 1,
      aux_sym_posting_token1,
  [3827] = 2,
    ACTIONS(751), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(809), 1,
      aux_sym_posting_token1,
  [3834] = 2,
    ACTIONS(811), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(813), 1,
      aux_sym_posting_token1,
  [3841] = 2,
    ACTIONS(815), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(817), 1,
      aux_sym_posting_token1,
  [3848] = 2,
    ACTIONS(819), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(821), 1,
      aux_sym_posting_token1,
  [3855] = 2,
    ACTIONS(734), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(823), 1,
      aux_sym_posting_token1,
  [3862] = 2,
    ACTIONS(825), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(827), 1,
      aux_sym_posting_token1,
  [3869] = 2,
    ACTIONS(829), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(831), 1,
      aux_sym_posting_token1,
  [3876] = 2,
    ACTIONS(833), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(835), 1,
      aux_sym_posting_token1,
  [3883] = 2,
    ACTIONS(837), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(839), 1,
      aux_sym_posting_token1,
  [3890] = 2,
    ACTIONS(841), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(843), 1,
      aux_sym_posting_token1,
  [3897] = 1,
    ACTIONS(461), 2,
      sym_tag,
      sym_link,
  [3902] = 2,
    ACTIONS(845), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(847), 1,
      aux_sym_posting_token1,
  [3909] = 2,
    ACTIONS(849), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(851), 1,
      aux_sym_posting_token1,
  [3916] = 2,
    ACTIONS(853), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(855), 1,
      aux_sym_posting_token1,
  [3923] = 2,
    ACTIONS(857), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(859), 1,
      aux_sym_posting_token1,
  [3930] = 2,
    ACTIONS(861), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(863), 1,
      aux_sym_posting_token1,
  [3937] = 2,
    ACTIONS(865), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(867), 1,
      aux_sym_posting_token1,
  [3944] = 2,
    ACTIONS(869), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(871), 1,
      aux_sym_posting_token1,
  [3951] = 2,
    ACTIONS(469), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(471), 1,
      aux_sym_posting_token1,
  [3958] = 2,
    ACTIONS(873), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(875), 1,
      aux_sym_posting_token1,
  [3965] = 2,
    ACTIONS(877), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(879), 1,
      aux_sym_posting_token1,
  [3972] = 2,
    ACTIONS(881), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(883), 1,
      aux_sym_posting_token1,
  [3979] = 2,
    ACTIONS(885), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(887), 1,
      aux_sym_posting_token1,
  [3986] = 2,
    ACTIONS(889), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(891), 1,
      aux_sym_posting_token1,
  [3993] = 2,
    ACTIONS(893), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(895), 1,
      aux_sym_posting_token1,
  [4000] = 2,
    ACTIONS(459), 1,
      sym_key,
    STATE(223), 1,
      sym_key_value,
  [4007] = 2,
    ACTIONS(897), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(899), 1,
      aux_sym_posting_token1,
  [4014] = 2,
    ACTIONS(459), 1,
      sym_key,
    STATE(334), 1,
      sym_key_value,
  [4021] = 2,
    ACTIONS(901), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(903), 1,
      aux_sym_posting_token1,
  [4028] = 2,
    ACTIONS(905), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(907), 1,
      aux_sym_posting_token1,
  [4035] = 2,
    ACTIONS(909), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(911), 1,
      aux_sym_posting_token1,
  [4042] = 2,
    ACTIONS(913), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(915), 1,
      aux_sym_posting_token1,
  [4049] = 2,
    ACTIONS(917), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(919), 1,
      aux_sym_posting_token1,
  [4056] = 2,
    ACTIONS(921), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(923), 1,
      aux_sym_posting_token1,
  [4063] = 2,
    ACTIONS(925), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(927), 1,
      aux_sym_posting_token1,
  [4070] = 2,
    ACTIONS(929), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(931), 1,
      sym_string,
  [4077] = 2,
    ACTIONS(933), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(935), 1,
      aux_sym_posting_token1,
  [4084] = 2,
    ACTIONS(937), 1,
      aux_sym__skipped_lines_token3,
    ACTIONS(939), 1,
      aux_sym_posting_token1,
  [4091] = 1,
    ACTIONS(941), 1,
      aux_sym__skipped_lines_token3,
  [4095] = 1,
    ACTIONS(943), 1,
      aux_sym__skipped_lines_token3,
  [4099] = 1,
    ACTIONS(945), 1,
      aux_sym__skipped_lines_token3,
  [4103] = 1,
    ACTIONS(947), 1,
      aux_sym__skipped_lines_token3,
  [4107] = 1,
    ACTIONS(949), 1,
      sym_account,
  [4111] = 1,
    ACTIONS(951), 1,
      aux_sym__skipped_lines_token3,
  [4115] = 1,
    ACTIONS(953), 1,
      sym_string,
  [4119] = 1,
    ACTIONS(955), 1,
      sym_string,
  [4123] = 1,
    ACTIONS(957), 1,
      aux_sym__skipped_lines_token3,
  [4127] = 1,
    ACTIONS(959), 1,
      sym_string,
  [4131] = 1,
    ACTIONS(961), 1,
      sym_string,
  [4135] = 1,
    ACTIONS(963), 1,
      aux_sym__skipped_lines_token3,
  [4139] = 1,
    ACTIONS(965), 1,
      sym_currency,
  [4143] = 1,
    ACTIONS(967), 1,
      aux_sym__skipped_lines_token3,
  [4147] = 1,
    ACTIONS(969), 1,
      aux_sym__skipped_lines_token3,
  [4151] = 1,
    ACTIONS(971), 1,
      sym_string,
  [4155] = 1,
    ACTIONS(973), 1,
      aux_sym__skipped_lines_token3,
  [4159] = 1,
    ACTIONS(975), 1,
      aux_sym__skipped_lines_token3,
  [4163] = 1,
    ACTIONS(977), 1,
      aux_sym__skipped_lines_token3,
  [4167] = 1,
    ACTIONS(979), 1,
      aux_sym__skipped_lines_token3,
  [4171] = 1,
    ACTIONS(981), 1,
      anon_sym_RBRACE_RBRACE,
  [4175] = 1,
    ACTIONS(983), 1,
      anon_sym_RBRACE,
  [4179] = 1,
    ACTIONS(985), 1,
      sym_account,
  [4183] = 1,
    ACTIONS(987), 1,
      aux_sym__skipped_lines_token3,
  [4187] = 1,
    ACTIONS(989), 1,
      aux_sym__skipped_lines_token3,
  [4191] = 1,
    ACTIONS(991), 1,
      aux_sym__skipped_lines_token3,
  [4195] = 1,
    ACTIONS(993), 1,
      aux_sym__skipped_lines_token3,
  [4199] = 1,
    ACTIONS(995), 1,
      aux_sym__skipped_lines_token3,
  [4203] = 1,
    ACTIONS(997), 1,
      aux_sym__skipped_lines_token3,
  [4207] = 1,
    ACTIONS(999), 1,
      aux_sym__skipped_lines_token3,
  [4211] = 1,
    ACTIONS(1001), 1,
      aux_sym__skipped_lines_token3,
  [4215] = 1,
    ACTIONS(1003), 1,
      aux_sym__skipped_lines_token3,
  [4219] = 1,
    ACTIONS(1005), 1,
      aux_sym__skipped_lines_token3,
  [4223] = 1,
    ACTIONS(1007), 1,
      sym_string,
  [4227] = 1,
    ACTIONS(1009), 1,
      sym_currency,
  [4231] = 1,
    ACTIONS(1011), 1,
      aux_sym__skipped_lines_token3,
  [4235] = 1,
    ACTIONS(1013), 1,
      sym_account,
  [4239] = 1,
    ACTIONS(1015), 1,
      sym_account,
  [4243] = 1,
    ACTIONS(1017), 1,
      aux_sym__skipped_lines_token3,
  [4247] = 1,
    ACTIONS(1019), 1,
      aux_sym__skipped_lines_token3,
  [4251] = 1,
    ACTIONS(1021), 1,
      aux_sym__skipped_lines_token3,
  [4255] = 1,
    ACTIONS(1023), 1,
      aux_sym__skipped_lines_token3,
  [4259] = 1,
    ACTIONS(1025), 1,
      sym_account,
  [4263] = 1,
    ACTIONS(1027), 1,
      aux_sym__skipped_lines_token3,
  [4267] = 1,
    ACTIONS(1029), 1,
      sym_key,
  [4271] = 1,
    ACTIONS(1031), 1,
      aux_sym__skipped_lines_token3,
  [4275] = 1,
    ACTIONS(1033), 1,
      aux_sym__skipped_lines_token3,
  [4279] = 1,
    ACTIONS(1035), 1,
      aux_sym__skipped_lines_token3,
  [4283] = 1,
    ACTIONS(1037), 1,
      ts_builtin_sym_end,
  [4287] = 1,
    ACTIONS(1039), 1,
      aux_sym__skipped_lines_token3,
  [4291] = 1,
    ACTIONS(1041), 1,
      aux_sym__skipped_lines_token3,
  [4295] = 1,
    ACTIONS(1043), 1,
      aux_sym__skipped_lines_token3,
  [4299] = 1,
    ACTIONS(1045), 1,
      aux_sym__skipped_lines_token3,
  [4303] = 1,
    ACTIONS(1047), 1,
      sym_string,
  [4307] = 1,
    ACTIONS(1049), 1,
      aux_sym__skipped_lines_token3,
  [4311] = 1,
    ACTIONS(1051), 1,
      aux_sym__skipped_lines_token3,
  [4315] = 1,
    ACTIONS(1053), 1,
      aux_sym__skipped_lines_token2,
  [4319] = 1,
    ACTIONS(1055), 1,
      aux_sym__skipped_lines_token3,
  [4323] = 1,
    ACTIONS(1057), 1,
      sym_account,
  [4327] = 1,
    ACTIONS(1059), 1,
      sym_string,
  [4331] = 1,
    ACTIONS(1061), 1,
      sym_string,
  [4335] = 1,
    ACTIONS(1063), 1,
      aux_sym__skipped_lines_token3,
  [4339] = 1,
    ACTIONS(1065), 1,
      aux_sym__skipped_lines_token3,
  [4343] = 1,
    ACTIONS(1067), 1,
      sym_string,
  [4347] = 1,
    ACTIONS(1069), 1,
      sym_tag,
  [4351] = 1,
    ACTIONS(1071), 1,
      sym_tag,
  [4355] = 1,
    ACTIONS(1073), 1,
      aux_sym__skipped_lines_token3,
  [4359] = 1,
    ACTIONS(1075), 1,
      aux_sym__skipped_lines_token3,
  [4363] = 1,
    ACTIONS(1077), 1,
      aux_sym__skipped_lines_token3,
  [4367] = 1,
    ACTIONS(1079), 1,
      sym_currency,
  [4371] = 1,
    ACTIONS(1081), 1,
      sym_account,
  [4375] = 1,
    ACTIONS(1083), 1,
      sym_account,
  [4379] = 1,
    ACTIONS(1085), 1,
      aux_sym__skipped_lines_token3,
  [4383] = 1,
    ACTIONS(1087), 1,
      aux_sym__skipped_lines_token3,
  [4387] = 1,
    ACTIONS(1089), 1,
      aux_sym__skipped_lines_token3,
  [4391] = 1,
    ACTIONS(1091), 1,
      aux_sym__skipped_lines_token3,
  [4395] = 1,
    ACTIONS(1093), 1,
      aux_sym__skipped_lines_token3,
  [4399] = 1,
    ACTIONS(1095), 1,
      sym_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 185,
  [SMALL_STATE(6)] = 244,
  [SMALL_STATE(7)] = 285,
  [SMALL_STATE(8)] = 310,
  [SMALL_STATE(9)] = 333,
  [SMALL_STATE(10)] = 356,
  [SMALL_STATE(11)] = 379,
  [SMALL_STATE(12)] = 420,
  [SMALL_STATE(13)] = 464,
  [SMALL_STATE(14)] = 508,
  [SMALL_STATE(15)] = 544,
  [SMALL_STATE(16)] = 579,
  [SMALL_STATE(17)] = 617,
  [SMALL_STATE(18)] = 637,
  [SMALL_STATE(19)] = 680,
  [SMALL_STATE(20)] = 711,
  [SMALL_STATE(21)] = 742,
  [SMALL_STATE(22)] = 758,
  [SMALL_STATE(23)] = 774,
  [SMALL_STATE(24)] = 790,
  [SMALL_STATE(25)] = 806,
  [SMALL_STATE(26)] = 822,
  [SMALL_STATE(27)] = 842,
  [SMALL_STATE(28)] = 860,
  [SMALL_STATE(29)] = 878,
  [SMALL_STATE(30)] = 894,
  [SMALL_STATE(31)] = 910,
  [SMALL_STATE(32)] = 926,
  [SMALL_STATE(33)] = 944,
  [SMALL_STATE(34)] = 960,
  [SMALL_STATE(35)] = 976,
  [SMALL_STATE(36)] = 992,
  [SMALL_STATE(37)] = 1008,
  [SMALL_STATE(38)] = 1024,
  [SMALL_STATE(39)] = 1040,
  [SMALL_STATE(40)] = 1056,
  [SMALL_STATE(41)] = 1072,
  [SMALL_STATE(42)] = 1108,
  [SMALL_STATE(43)] = 1124,
  [SMALL_STATE(44)] = 1140,
  [SMALL_STATE(45)] = 1156,
  [SMALL_STATE(46)] = 1172,
  [SMALL_STATE(47)] = 1188,
  [SMALL_STATE(48)] = 1204,
  [SMALL_STATE(49)] = 1220,
  [SMALL_STATE(50)] = 1236,
  [SMALL_STATE(51)] = 1252,
  [SMALL_STATE(52)] = 1268,
  [SMALL_STATE(53)] = 1284,
  [SMALL_STATE(54)] = 1300,
  [SMALL_STATE(55)] = 1316,
  [SMALL_STATE(56)] = 1332,
  [SMALL_STATE(57)] = 1348,
  [SMALL_STATE(58)] = 1364,
  [SMALL_STATE(59)] = 1380,
  [SMALL_STATE(60)] = 1396,
  [SMALL_STATE(61)] = 1412,
  [SMALL_STATE(62)] = 1428,
  [SMALL_STATE(63)] = 1444,
  [SMALL_STATE(64)] = 1460,
  [SMALL_STATE(65)] = 1476,
  [SMALL_STATE(66)] = 1492,
  [SMALL_STATE(67)] = 1508,
  [SMALL_STATE(68)] = 1524,
  [SMALL_STATE(69)] = 1540,
  [SMALL_STATE(70)] = 1556,
  [SMALL_STATE(71)] = 1572,
  [SMALL_STATE(72)] = 1588,
  [SMALL_STATE(73)] = 1604,
  [SMALL_STATE(74)] = 1620,
  [SMALL_STATE(75)] = 1636,
  [SMALL_STATE(76)] = 1652,
  [SMALL_STATE(77)] = 1668,
  [SMALL_STATE(78)] = 1684,
  [SMALL_STATE(79)] = 1700,
  [SMALL_STATE(80)] = 1716,
  [SMALL_STATE(81)] = 1732,
  [SMALL_STATE(82)] = 1748,
  [SMALL_STATE(83)] = 1764,
  [SMALL_STATE(84)] = 1780,
  [SMALL_STATE(85)] = 1796,
  [SMALL_STATE(86)] = 1812,
  [SMALL_STATE(87)] = 1828,
  [SMALL_STATE(88)] = 1844,
  [SMALL_STATE(89)] = 1860,
  [SMALL_STATE(90)] = 1876,
  [SMALL_STATE(91)] = 1892,
  [SMALL_STATE(92)] = 1908,
  [SMALL_STATE(93)] = 1944,
  [SMALL_STATE(94)] = 1968,
  [SMALL_STATE(95)] = 1991,
  [SMALL_STATE(96)] = 2021,
  [SMALL_STATE(97)] = 2051,
  [SMALL_STATE(98)] = 2081,
  [SMALL_STATE(99)] = 2111,
  [SMALL_STATE(100)] = 2132,
  [SMALL_STATE(101)] = 2159,
  [SMALL_STATE(102)] = 2186,
  [SMALL_STATE(103)] = 2212,
  [SMALL_STATE(104)] = 2238,
  [SMALL_STATE(105)] = 2264,
  [SMALL_STATE(106)] = 2290,
  [SMALL_STATE(107)] = 2310,
  [SMALL_STATE(108)] = 2332,
  [SMALL_STATE(109)] = 2352,
  [SMALL_STATE(110)] = 2372,
  [SMALL_STATE(111)] = 2389,
  [SMALL_STATE(112)] = 2412,
  [SMALL_STATE(113)] = 2429,
  [SMALL_STATE(114)] = 2446,
  [SMALL_STATE(115)] = 2463,
  [SMALL_STATE(116)] = 2480,
  [SMALL_STATE(117)] = 2497,
  [SMALL_STATE(118)] = 2514,
  [SMALL_STATE(119)] = 2537,
  [SMALL_STATE(120)] = 2554,
  [SMALL_STATE(121)] = 2571,
  [SMALL_STATE(122)] = 2589,
  [SMALL_STATE(123)] = 2601,
  [SMALL_STATE(124)] = 2623,
  [SMALL_STATE(125)] = 2642,
  [SMALL_STATE(126)] = 2659,
  [SMALL_STATE(127)] = 2676,
  [SMALL_STATE(128)] = 2693,
  [SMALL_STATE(129)] = 2710,
  [SMALL_STATE(130)] = 2727,
  [SMALL_STATE(131)] = 2742,
  [SMALL_STATE(132)] = 2759,
  [SMALL_STATE(133)] = 2775,
  [SMALL_STATE(134)] = 2791,
  [SMALL_STATE(135)] = 2807,
  [SMALL_STATE(136)] = 2817,
  [SMALL_STATE(137)] = 2831,
  [SMALL_STATE(138)] = 2843,
  [SMALL_STATE(139)] = 2855,
  [SMALL_STATE(140)] = 2865,
  [SMALL_STATE(141)] = 2877,
  [SMALL_STATE(142)] = 2893,
  [SMALL_STATE(143)] = 2903,
  [SMALL_STATE(144)] = 2919,
  [SMALL_STATE(145)] = 2935,
  [SMALL_STATE(146)] = 2945,
  [SMALL_STATE(147)] = 2959,
  [SMALL_STATE(148)] = 2975,
  [SMALL_STATE(149)] = 2987,
  [SMALL_STATE(150)] = 3003,
  [SMALL_STATE(151)] = 3015,
  [SMALL_STATE(152)] = 3023,
  [SMALL_STATE(153)] = 3037,
  [SMALL_STATE(154)] = 3053,
  [SMALL_STATE(155)] = 3067,
  [SMALL_STATE(156)] = 3079,
  [SMALL_STATE(157)] = 3093,
  [SMALL_STATE(158)] = 3106,
  [SMALL_STATE(159)] = 3119,
  [SMALL_STATE(160)] = 3132,
  [SMALL_STATE(161)] = 3143,
  [SMALL_STATE(162)] = 3154,
  [SMALL_STATE(163)] = 3165,
  [SMALL_STATE(164)] = 3176,
  [SMALL_STATE(165)] = 3189,
  [SMALL_STATE(166)] = 3200,
  [SMALL_STATE(167)] = 3213,
  [SMALL_STATE(168)] = 3226,
  [SMALL_STATE(169)] = 3237,
  [SMALL_STATE(170)] = 3250,
  [SMALL_STATE(171)] = 3263,
  [SMALL_STATE(172)] = 3276,
  [SMALL_STATE(173)] = 3289,
  [SMALL_STATE(174)] = 3302,
  [SMALL_STATE(175)] = 3313,
  [SMALL_STATE(176)] = 3326,
  [SMALL_STATE(177)] = 3339,
  [SMALL_STATE(178)] = 3352,
  [SMALL_STATE(179)] = 3363,
  [SMALL_STATE(180)] = 3376,
  [SMALL_STATE(181)] = 3389,
  [SMALL_STATE(182)] = 3402,
  [SMALL_STATE(183)] = 3415,
  [SMALL_STATE(184)] = 3428,
  [SMALL_STATE(185)] = 3441,
  [SMALL_STATE(186)] = 3454,
  [SMALL_STATE(187)] = 3463,
  [SMALL_STATE(188)] = 3476,
  [SMALL_STATE(189)] = 3489,
  [SMALL_STATE(190)] = 3502,
  [SMALL_STATE(191)] = 3513,
  [SMALL_STATE(192)] = 3526,
  [SMALL_STATE(193)] = 3539,
  [SMALL_STATE(194)] = 3550,
  [SMALL_STATE(195)] = 3561,
  [SMALL_STATE(196)] = 3572,
  [SMALL_STATE(197)] = 3585,
  [SMALL_STATE(198)] = 3596,
  [SMALL_STATE(199)] = 3607,
  [SMALL_STATE(200)] = 3620,
  [SMALL_STATE(201)] = 3633,
  [SMALL_STATE(202)] = 3646,
  [SMALL_STATE(203)] = 3655,
  [SMALL_STATE(204)] = 3668,
  [SMALL_STATE(205)] = 3679,
  [SMALL_STATE(206)] = 3687,
  [SMALL_STATE(207)] = 3695,
  [SMALL_STATE(208)] = 3703,
  [SMALL_STATE(209)] = 3713,
  [SMALL_STATE(210)] = 3723,
  [SMALL_STATE(211)] = 3731,
  [SMALL_STATE(212)] = 3741,
  [SMALL_STATE(213)] = 3749,
  [SMALL_STATE(214)] = 3757,
  [SMALL_STATE(215)] = 3765,
  [SMALL_STATE(216)] = 3773,
  [SMALL_STATE(217)] = 3781,
  [SMALL_STATE(218)] = 3789,
  [SMALL_STATE(219)] = 3797,
  [SMALL_STATE(220)] = 3805,
  [SMALL_STATE(221)] = 3813,
  [SMALL_STATE(222)] = 3820,
  [SMALL_STATE(223)] = 3827,
  [SMALL_STATE(224)] = 3834,
  [SMALL_STATE(225)] = 3841,
  [SMALL_STATE(226)] = 3848,
  [SMALL_STATE(227)] = 3855,
  [SMALL_STATE(228)] = 3862,
  [SMALL_STATE(229)] = 3869,
  [SMALL_STATE(230)] = 3876,
  [SMALL_STATE(231)] = 3883,
  [SMALL_STATE(232)] = 3890,
  [SMALL_STATE(233)] = 3897,
  [SMALL_STATE(234)] = 3902,
  [SMALL_STATE(235)] = 3909,
  [SMALL_STATE(236)] = 3916,
  [SMALL_STATE(237)] = 3923,
  [SMALL_STATE(238)] = 3930,
  [SMALL_STATE(239)] = 3937,
  [SMALL_STATE(240)] = 3944,
  [SMALL_STATE(241)] = 3951,
  [SMALL_STATE(242)] = 3958,
  [SMALL_STATE(243)] = 3965,
  [SMALL_STATE(244)] = 3972,
  [SMALL_STATE(245)] = 3979,
  [SMALL_STATE(246)] = 3986,
  [SMALL_STATE(247)] = 3993,
  [SMALL_STATE(248)] = 4000,
  [SMALL_STATE(249)] = 4007,
  [SMALL_STATE(250)] = 4014,
  [SMALL_STATE(251)] = 4021,
  [SMALL_STATE(252)] = 4028,
  [SMALL_STATE(253)] = 4035,
  [SMALL_STATE(254)] = 4042,
  [SMALL_STATE(255)] = 4049,
  [SMALL_STATE(256)] = 4056,
  [SMALL_STATE(257)] = 4063,
  [SMALL_STATE(258)] = 4070,
  [SMALL_STATE(259)] = 4077,
  [SMALL_STATE(260)] = 4084,
  [SMALL_STATE(261)] = 4091,
  [SMALL_STATE(262)] = 4095,
  [SMALL_STATE(263)] = 4099,
  [SMALL_STATE(264)] = 4103,
  [SMALL_STATE(265)] = 4107,
  [SMALL_STATE(266)] = 4111,
  [SMALL_STATE(267)] = 4115,
  [SMALL_STATE(268)] = 4119,
  [SMALL_STATE(269)] = 4123,
  [SMALL_STATE(270)] = 4127,
  [SMALL_STATE(271)] = 4131,
  [SMALL_STATE(272)] = 4135,
  [SMALL_STATE(273)] = 4139,
  [SMALL_STATE(274)] = 4143,
  [SMALL_STATE(275)] = 4147,
  [SMALL_STATE(276)] = 4151,
  [SMALL_STATE(277)] = 4155,
  [SMALL_STATE(278)] = 4159,
  [SMALL_STATE(279)] = 4163,
  [SMALL_STATE(280)] = 4167,
  [SMALL_STATE(281)] = 4171,
  [SMALL_STATE(282)] = 4175,
  [SMALL_STATE(283)] = 4179,
  [SMALL_STATE(284)] = 4183,
  [SMALL_STATE(285)] = 4187,
  [SMALL_STATE(286)] = 4191,
  [SMALL_STATE(287)] = 4195,
  [SMALL_STATE(288)] = 4199,
  [SMALL_STATE(289)] = 4203,
  [SMALL_STATE(290)] = 4207,
  [SMALL_STATE(291)] = 4211,
  [SMALL_STATE(292)] = 4215,
  [SMALL_STATE(293)] = 4219,
  [SMALL_STATE(294)] = 4223,
  [SMALL_STATE(295)] = 4227,
  [SMALL_STATE(296)] = 4231,
  [SMALL_STATE(297)] = 4235,
  [SMALL_STATE(298)] = 4239,
  [SMALL_STATE(299)] = 4243,
  [SMALL_STATE(300)] = 4247,
  [SMALL_STATE(301)] = 4251,
  [SMALL_STATE(302)] = 4255,
  [SMALL_STATE(303)] = 4259,
  [SMALL_STATE(304)] = 4263,
  [SMALL_STATE(305)] = 4267,
  [SMALL_STATE(306)] = 4271,
  [SMALL_STATE(307)] = 4275,
  [SMALL_STATE(308)] = 4279,
  [SMALL_STATE(309)] = 4283,
  [SMALL_STATE(310)] = 4287,
  [SMALL_STATE(311)] = 4291,
  [SMALL_STATE(312)] = 4295,
  [SMALL_STATE(313)] = 4299,
  [SMALL_STATE(314)] = 4303,
  [SMALL_STATE(315)] = 4307,
  [SMALL_STATE(316)] = 4311,
  [SMALL_STATE(317)] = 4315,
  [SMALL_STATE(318)] = 4319,
  [SMALL_STATE(319)] = 4323,
  [SMALL_STATE(320)] = 4327,
  [SMALL_STATE(321)] = 4331,
  [SMALL_STATE(322)] = 4335,
  [SMALL_STATE(323)] = 4339,
  [SMALL_STATE(324)] = 4343,
  [SMALL_STATE(325)] = 4347,
  [SMALL_STATE(326)] = 4351,
  [SMALL_STATE(327)] = 4355,
  [SMALL_STATE(328)] = 4359,
  [SMALL_STATE(329)] = 4363,
  [SMALL_STATE(330)] = 4367,
  [SMALL_STATE(331)] = 4371,
  [SMALL_STATE(332)] = 4375,
  [SMALL_STATE(333)] = 4379,
  [SMALL_STATE(334)] = 4383,
  [SMALL_STATE(335)] = 4387,
  [SMALL_STATE(336)] = 4391,
  [SMALL_STATE(337)] = 4395,
  [SMALL_STATE(338)] = 4399,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beancount_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beancount_file, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(317),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(266),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(271),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(321),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(324),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(325),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(326),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beancount_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 33),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 3, 0, 33), SHIFT(248),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 2, 0, 13),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 2, 0, 13), SHIFT(248),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_num_expr, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_num_expr, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_num_expr, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_num_expr, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_num_expr, 2, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_num_expr, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 1, 0, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 1, 0, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, 0, 9),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, 0, 9),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price_annotation, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_price_annotation, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_total_price_annotation, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 74),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 69),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 5, 0, 26),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 5, 0, 25),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, 0, 17),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, 0, 24),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, 0, 23),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, 0, 22),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 8, 0, 120),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 8, 0, 119),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, 0, 34),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5, 0, 21),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, 0, 104),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, 0, 103),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, 0, 102),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, 0, 101),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 29),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 3, 0, 29), SHIFT(248),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, 0, 100),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, 0, 20),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, 0, 99),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3, 0, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, 0, 12),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3, 0, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3, 0, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, 0, 19),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, 0, 18),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, 0, 17),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 5, 0, 16),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 3, 0, 5),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 3, 0, 6),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, 0, 35),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, 0, 36),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5, 0, 37),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, 0, 38),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, 0, 39),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, 0, 15),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, 0, 40),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, 0, 41),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6, 0, 42),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, 0, 43),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, 0, 44),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, 0, 80),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6, 0, 45),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, 0, 79),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 77),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, 0, 46),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 76),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 75),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, 0, 47),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, 0, 73),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, 0, 48),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 72),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, 0, 7),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 4, 0, 8),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, 0, 14),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, 0, 49),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, 0, 50),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 71),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 6, 0, 51),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 4, 0, 10),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, 0, 70),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 2, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 4, 0, 11),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 4, 0, 10),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 4, 0, 12),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 66),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 66), SHIFT(248),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 1, 0, 32),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 1, 0, 32),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 65),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 65), SHIFT(248),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 28),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 3, 0, 28), SHIFT(248),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 61),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 61), SHIFT(248),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 95),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 95), SHIFT(248),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, 0, 58),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, 0, 58),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 2, 0, 4),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2, 0, 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 1, 0, 27),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 1, 0, 27),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 93),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 93), SHIFT(248),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 30),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 3, 0, 30), SHIFT(248),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 88),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 88), SHIFT(248),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_cost, 2, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_total_cost, 2, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_and_links_repeat1, 2, 0, 0),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tags_and_links_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_and_links_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 3, 0, 82),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost, 3, 0, 82),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 96),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 96), SHIFT(248),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 2, 0, 0),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost, 2, 0, 0),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 59),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 59), SHIFT(248),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_cost, 3, 0, 82),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_total_cost, 3, 0, 82),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 1, 0, 0),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_currency_list, 1, 0, 0),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 67),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 67), SHIFT(248),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 115),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 6, 0, 115), SHIFT(248),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1, 0, 0),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 2, 0, 0),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_currency_list, 2, 0, 0),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 62),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 62), SHIFT(248),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_and_links, 1, 0, 0),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tags_and_links, 1, 0, 0), SHIFT(233),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2, 0, 0),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_currency_list_repeat1, 2, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp_list, 2, 0, 83),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp_list, 2, 0, 83),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postings, 1, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 13),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 3, 0, 13), SHIFT(248),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 115),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 7, 0, 115), SHIFT(248),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 61),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 61), SHIFT(248),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 62),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 62), SHIFT(248),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 33),
  [655] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 33), SHIFT(248),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 96),
  [660] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 6, 0, 96), SHIFT(248),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 30),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 30), SHIFT(248),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 95),
  [670] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 6, 0, 95), SHIFT(248),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 59),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 59), SHIFT(248),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 29),
  [680] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 29), SHIFT(248),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 93),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 6, 0, 93), SHIFT(248),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 28),
  [692] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 4, 0, 28), SHIFT(248),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_and_links_repeat1, 2, 0, 0),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 88),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 6, 0, 88), SHIFT(248),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp_list, 1, 0, 56),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp_list, 1, 0, 56),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 65),
  [708] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 65), SHIFT(248),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2, 0, 83),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2, 0, 83),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2, 0, 83), SHIFT_REPEAT(16),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 66),
  [722] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 66), SHIFT(248),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 67),
  [727] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_posting, 5, 0, 67), SHIFT(248),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postings_repeat1, 2, 0, 0),
  [736] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_postings_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_total_price_annotation, 2, 0, 0),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_total_price_annotation, 2, 0, 0),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, 0, 84),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, 0, 84),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, 0, 81),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, 0, 81),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0),
  [753] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 1, 0, 0),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, 0, 105),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, 0, 105),
  [762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_metadata, 1, 0, 0), SHIFT(248),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2, 0, 106),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2, 0, 106),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, 0, 107),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, 0, 107),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 4, 0, 121),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 4, 0, 121),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 2, 0, 0),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price_annotation, 2, 0, 0),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp, 1, 0, 53),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp, 1, 0, 53),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp, 1, 0, 57),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp, 1, 0, 57),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp, 1, 0, 54),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp, 1, 0, 54),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp, 1, 0, 55),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp, 1, 0, 55),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, 0, 27),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, 0, 27),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 90),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 90),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 31),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, 0, 31),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2, 0, 0),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 92),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 92),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 109),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 109),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 110),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 110),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postings_repeat1, 2, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 91),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 91),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 111),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 111),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 112),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 112),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 60),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 60),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 113),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 113),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 114),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 114),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 63),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 63),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 116),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 116),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 64),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 64),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 117),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 117),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 118),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 118),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 108),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 108),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 68),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 68),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 89),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 89),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 122),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 122),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 123),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 123),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 87),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 87),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 86),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 86),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 124),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 124),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 125),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 125),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 126),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 126),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 52),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 52),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_with_tolerance, 4, 0, 78),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_with_tolerance, 4, 0, 78),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, 0, 127),
  [919] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, 0, 127),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 94),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 94),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 98),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 98),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 97),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 97),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 85),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 85),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1037] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
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

TS_PUBLIC const TSLanguage *tree_sitter_beancount(void) {
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
