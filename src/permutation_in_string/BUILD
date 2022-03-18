cc_library(
    name = "permutation_in_string",
    hdrs = glob([
        "permutation_in_string.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "permutation_in_string_test",
    srcs = [
        "permutation_in_string_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":permutation_in_string",
        "@com_google_googletest//:gtest_main",
    ],
)
