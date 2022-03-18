cc_library(
    name = "remove_nth_node_from_end",
    hdrs = glob([
        "remove_nth_node_from_end.h",
    ]),
    deps = [
        "//src/list_node",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "remove_nth_node_from_end_test",
    srcs = [
        "remove_nth_node_from_end_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":remove_nth_node_from_end",
        "@com_google_googletest//:gtest_main",
    ],
)
