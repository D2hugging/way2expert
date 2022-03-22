cc_library(
    name = "postorder_traversal",
    hdrs = glob([
        "postorder_traversal.h",
    ]),
    deps = [
        "//src/tree_node:tree_node",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "postorder_traversal_test",
    srcs = [
        "postorder_traversal_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":postorder_traversal",
        "@com_google_googletest//:gtest_main",
    ],
)
