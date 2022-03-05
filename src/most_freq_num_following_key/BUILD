cc_library(
    name = "most_freq_num_following_key",
    hdrs = glob([
        "most_freq_num_following_key.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "most_freq_num_following_key_test",
    srcs = [
        "most_freq_num_following_key_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":most_freq_num_following_key",
        "@com_google_googletest//:gtest_main",
    ],
)
