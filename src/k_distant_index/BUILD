cc_library(
    name = "k_distant_index",
    hdrs = glob([
        "k_distant_index.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "k_distant_index_test",
    srcs = [
        "k_distant_index_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":k_distant_index",
        "@com_google_googletest//:gtest_main",
    ],
)
