cc_library(
    name = "sort_jumbled_numbers",
    hdrs = glob([
        "sort_jumbled_numbers.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "sort_jumbled_numbers_test",
    srcs = [
        "sort_jumbled_numbers_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":sort_jumbled_numbers",
        "@com_google_googletest//:gtest_main",
    ],
)
