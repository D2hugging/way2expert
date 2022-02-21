cc_library(
    name = "zigzag_level_order",
    hdrs = glob([
        "zigzag_level_order.h",
    ]),
    deps = [
        "//src/tree_node:tree_node",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "zigzag_level_order_test",
    srcs = [
        "zigzag_level_order_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":zigzag_level_order",
        "@com_google_googletest//:gtest_main",
    ],
)
