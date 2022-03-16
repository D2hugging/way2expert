cc_library(
    name = "reverse_words_in_string3",
    hdrs = glob([
        "reverse_words_in_string3.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "reverse_words_in_string3_test",
    srcs = [
        "reverse_words_in_string3_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":reverse_words_in_string3",
        "@com_google_googletest//:gtest_main",
    ],
)
