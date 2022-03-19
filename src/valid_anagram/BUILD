cc_library(
    name = "valid_anagram",
    hdrs = glob([
        "valid_anagram.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "valid_anagram_test",
    srcs = [
        "valid_anagram_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":valid_anagram",
        "@com_google_googletest//:gtest_main",
    ],
)
