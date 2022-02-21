cc_library(
    name = "longest_consecutive_sequence",
    hdrs = glob([
        "longest_consecutive_sequence.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "longest_consecutive_sequence_test",
    srcs = [
        "longest_consecutive_sequence_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":longest_consecutive_sequence",
        "@com_google_googletest//:gtest_main",
    ],
)
