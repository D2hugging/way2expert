cc_library(
    name = "longest_substring_without_repeating_char",
    hdrs = glob([
        "longest_substring_without_repeating_char.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "longest_substring_without_repeating_char_test",
    srcs = [
        "longest_substring_without_repeating_char_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":longest_substring_without_repeating_char",
        "@com_google_googletest//:gtest_main",
    ],
)
