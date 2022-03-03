cc_library(
    name = "generate_parenthesis",
    hdrs = glob([
        "generate_parenthesis.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "generate_parenthesis_test",
    srcs = [
        "generate_parenthesis_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":generate_parenthesis",
        "@com_google_googletest//:gtest_main",
    ],
)
