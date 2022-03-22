cc_library(
    name = "preorder_traversal",
    hdrs = glob([
        "preorder_traversal.h",
    ]),
    deps = [
        "//src/tree_node:tree_node",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "preorder_traversal_test",
    srcs = [
        "preorder_traversal_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":preorder_traversal",
        "@com_google_googletest//:gtest_main",
    ],
)
