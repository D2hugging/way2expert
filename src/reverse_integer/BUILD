cc_library(
    name = "reverse_integer",
    hdrs = glob([
        "reverse_integer.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "reverse_integer_test",
    srcs = [
        "reverse_integer_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":reverse_integer",
        "@com_google_googletest//:gtest_main",
    ],
)
