cc_library(
    name = "merge_intervals",
    hdrs = glob([
        "merge_intervals.h",
    ]),
    deps = [
        "//src/tree_node:tree_node",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "merge_intervals_test",
    srcs = [
        "merge_intervals_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":merge_intervals",
        "@com_google_googletest//:gtest_main",
    ],
)
