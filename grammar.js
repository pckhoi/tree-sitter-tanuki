module.exports = grammar({
  name: "tanuki",

  rules: {
    expr: ($) =>
      choice(
        prec(1, field("expr", $._expr)),
        prec(2, seq("(", field("expr", $._expr), ")"))
      ),

    _expr: ($) => prec.left(choice($._scalar, $._non_scalar)),

    _non_scalar: ($) =>
      choice($.table, $.column, $.selection, $._braced_arithmetic),

    _braced_arithmetic: ($) =>
      choice(
        prec.left(field("arithmetic", $.arithmetic)),
        prec.left(seq("(", field("arithmetic", $.arithmetic), ")"))
      ),

    arithmetic: ($) =>
      choice($.exp, $.mul, $.div, $.floordiv, $.mod, $.add, $.sub),

    exp: ($) =>
      prec.left(3, seq(field("left", $.expr), "**", field("right", $.expr))),
    mul: ($) =>
      prec.left(2, seq(field("left", $.expr), "*", field("right", $.expr))),
    div: ($) =>
      prec.left(2, seq(field("left", $.expr), "/", field("right", $.expr))),
    floordiv: ($) =>
      prec.left(2, seq(field("left", $.expr), "//", field("right", $.expr))),
    mod: ($) =>
      prec.left(2, seq(field("left", $.expr), "%", field("right", $.expr))),
    add: ($) =>
      prec.left(1, seq(field("left", $.expr), "+", field("right", $.expr))),
    sub: ($) =>
      prec.left(1, seq(field("left", $.expr), "-", field("right", $.expr))),

    selection: ($) =>
      choice(
        seq(field("table", $.table), field("select", $._select)),
        seq(field("column", $.column), field("row_select", $._row_select)),
        seq("(", field("expr", $.expr), ")", field("select", $._select))
      ),

    _select: ($) => choice($.df_loc, $.row_loc, $.df_iloc, $.row_iloc),

    _row_select: ($) => choice($.row_loc, $.row_iloc),

    df_loc: ($) =>
      seq(
        "[",
        field("row_loc", $._row_loc),
        ",",
        field("col_loc", $._col_loc),
        "]"
      ),

    row_loc: ($) => seq("[", field("row_loc", $._row_loc), "]"),

    multiindex: ($) =>
      seq(
        "(",
        field("scalar", $._scalar),
        field("other_scalars", repeat(seq(",", field("scalar", $._scalar)))),
        ")"
      ),

    df_iloc: ($) =>
      seq(
        "{",
        field("row_iloc", $._iloc),
        ",",
        field("col_iloc", $._iloc),
        "}"
      ),

    row_iloc: ($) => seq("{", field("iloc", $._iloc), "}"),

    _row_loc: ($) =>
      choice(
        $._boolean_index,
        $.multiindex_slice,
        $.multiindex_each_slice,
        $.multiindex_list,
        $.scalar_slice,
        $.scalar_list,
        $._row_label
      ),

    _row_label: ($) => choice($._scalar, $.multiindex),

    _boolean_index: ($) => choice($._bool_ind, $.not, $.and, $.or, $.xor),

    and: ($) =>
      seq(field("left", $._braced_bool), "&", field("right", $._braced_bool)),
    xor: ($) =>
      seq(field("left", $._braced_bool), "^", field("right", $._braced_bool)),
    or: ($) =>
      seq(field("left", $._braced_bool), "|", field("right", $._braced_bool)),

    _braced_bool: ($) => choice($.braced_bool, $.not),

    braced_bool: ($) => seq("(", field("boolean_index", $._boolean_index), ")"),
    not: ($) => seq("~", "(", field("boolean_index", $._boolean_index), ")"),

    multiindex_slice: ($) =>
      choice(
        seq(field("begin", $.multiindex), ":", field("end", $.multiindex)),
        seq(field("begin", $.multiindex), ":"),
        seq(":", field("end", $.multiindex))
      ),

    multiindex_each_slice: ($) =>
      seq(
        "(",
        field("sl_part", $._multiindex_sl_part),
        field(
          "other_sl_parts",
          repeat(seq(",", field("sl_part", $._multiindex_sl_part)))
        ),
        ")"
      ),

    multiindex_list: ($) =>
      seq(
        "[",
        field("item", $.multiindex),
        field("other_items", repeat(seq(",", field("item", $.multiindex)))),
        "]"
      ),

    _multiindex_sl_part: ($) => choice($.scalar_slice, $.scalar_list),

    scalar_slice: ($) =>
      seq(
        field("begin", optional($._scalar)),
        ":",
        field("end", optional($._scalar))
      ),

    scalar_list: ($) =>
      seq(
        "[",
        field("scalar", $._scalar),
        field("other_scalars", repeat(seq(",", field("scalar", $._scalar)))),
        "]"
      ),

    column_slice: ($) =>
      seq(
        field("begin", optional($.identifier)),
        ":",
        field("end", optional($.identifier))
      ),

    column_list: ($) =>
      seq(
        "[",
        field("column", $.identifier),
        field("other_columns", repeat(seq(",", field("column", $.identifier)))),
        "]"
      ),

    _bool_ind: ($) => choice($._comparison, $._bool_func),

    _comparison: ($) => choice($.eq, $.ne, $.gt, $.lt, $.gte, $.lte),

    eq: ($) =>
      seq(
        field("left", $._comp_operand),
        "==",
        field("right", $._comp_operand)
      ),
    ne: ($) =>
      seq(
        field("left", $._comp_operand),
        "!=",
        field("right", $._comp_operand)
      ),
    gt: ($) =>
      seq(field("left", $._comp_operand), ">", field("right", $._comp_operand)),
    lt: ($) =>
      seq(field("left", $._comp_operand), "<", field("right", $._comp_operand)),
    gte: ($) =>
      seq(
        field("left", $._comp_operand),
        ">=",
        field("right", $._comp_operand)
      ),
    lte: ($) =>
      seq(
        field("left", $._comp_operand),
        "<=",
        field("right", $._comp_operand)
      ),

    _comp_operand: ($) => choice($.expr, $.column_shorthand),

    _bool_func: ($) =>
      choice(
        $.func_match,
        $.func_match_ignorecase,
        $.func_contains,
        $.func_contains_ignorecase,
        $.func_contains,
        $.func_contains_ignorecase,
        $.func_isna,
        $.func_notna,
        $.func_duplicated,
        $.func_duplicated_first,
        $.func_duplicated_last,
        $.func_duplicated_all
      ),

    func_match: ($) =>
      seq(field("left", $._func_operand), "match", field("right", $.regex)),
    func_match_ignorecase: ($) =>
      seq(
        field("left", $._func_operand),
        "match_ignorecase",
        field("right", $.regex)
      ),
    func_contains: ($) =>
      seq(
        field("left", $._func_operand),
        "contains",
        field("right", choice($.regex, $.string))
      ),
    func_contains_ignorecase: ($) =>
      seq(
        field("left", $._func_operand),
        "contains_ignorecase",
        field("right", choice($.regex, $.string))
      ),
    func_isna: ($) => seq(field("left", $._func_operand), "isna"),
    func_notna: ($) => seq(field("left", $._func_operand), "notna"),
    func_duplicated: ($) => seq(field("left", $._func_operand), "duplicated"),
    func_duplicated_first: ($) =>
      seq(field("left", $._func_operand), "duplicated_first"),
    func_duplicated_last: ($) =>
      seq(field("left", $._func_operand), "duplicated_last"),
    func_duplicated_all: ($) =>
      seq(field("left", $._func_operand), "duplicated_all"),

    _func_operand: ($) => choice($.column, $.column_shorthand),

    _col_loc: ($) => choice($.column_slice, $.column_list, $.identifier),

    _iloc: ($) => choice($.int_slice, $.int_list, $.int),

    int_slice: ($) =>
      seq(field("begin", optional($.int)), ":", field("end", optional($.int))),

    int_list: ($) =>
      seq(
        "[",
        field("int", $.int),
        field("other_ints", repeat(seq(",", field("int", $.int)))),
        "]"
      ),

    _scalar: ($) => choice($.float, $.int, $.string, $.datetime),

    _number: ($) => choice($.int, $.float),

    column: ($) =>
      seq(field("table", $.identifier), ".", field("column", $.identifier)),

    column_shorthand: ($) => seq(".", field("column", $.identifier)),

    table: ($) => $.identifier,

    datetime: ($) => seq("dt", $.string),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    float: ($) => /-?(?:0|[1-9]\d*)\.\d+/,
    int: ($) => /-?(?:0|[1-9]\d*)/,
    string: ($) => /"(?:\\["\\]|[^\n"\\])*"/,
    regex: ($) => /\/(?:\\\/|[^\n/])*\//,
  },
});
