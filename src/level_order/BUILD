cc_library(
    name = "level_order",
    hdrs = glob([
        "level_order.h",
    ]),
    deps = [
        "//src/tree_node:tree_node",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "level_order_test",
    srcs = [
        "level_order_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":level_order",
        "@com_google_googletest//:gtest_main",
    ],
)
