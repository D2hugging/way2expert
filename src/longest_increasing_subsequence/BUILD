cc_library(
    name = "longest_increasing_subsequence",
    hdrs = glob([
        "longest_increasing_subsequence.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "longest_increasing_subsequence_test",
    srcs = [
        "longest_increasing_subsequence_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":longest_increasing_subsequence",
        "@com_google_googletest//:gtest_main",
    ],
)
