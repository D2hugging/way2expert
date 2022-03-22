cc_library(
    name = "inorder_traversal",
    hdrs = glob([
        "inorder_traversal.h",
    ]),
    deps = [
        "//src/tree_node:tree_node",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "inorder_traversal_test",
    srcs = [
        "inorder_traversal_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":inorder_traversal",
        "@com_google_googletest//:gtest_main",
    ],
)
