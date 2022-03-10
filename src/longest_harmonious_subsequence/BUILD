cc_library(
    name = "longest_harmonious_subsequence",
    hdrs = glob([
        "longest_harmonious_subsequence.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "longest_harmonious_subsequence_test",
    srcs = [
        "longest_harmonious_subsequence_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":longest_harmonious_subsequence",
        "@com_google_googletest//:gtest_main",
    ],
)
