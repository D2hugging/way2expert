cc_library(
    name = "valid_sudoku",
    hdrs = glob([
        "valid_sudoku.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "valid_sudoku_test",
    srcs = [
        "valid_sudoku_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":valid_sudoku",
        "@com_google_googletest//:gtest_main",
    ],
)
