cc_library(
    name = "subsets",
    hdrs = glob([
        "subsets.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "subsets_test",
    srcs = [
        "subsets_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":subsets",
        "@com_google_googletest//:gtest_main",
    ],
)
