cc_library(
    name = "add_two_numbers",
    hdrs = glob([
        "add_two_numbers.h",
    ]),
    deps = [
        "//src/list_node:list_node",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "add_two_numbers_test",
    srcs = [
        "add_two_numbers_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":add_two_numbers",
        "@com_google_googletest//:gtest_main",
    ],
)
