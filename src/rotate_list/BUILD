cc_library(
    name = "rotate_list",
    hdrs = glob([
        "rotate_list.h",
    ]),
    deps = [
        "//src/list_node",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "rotate_list_test",
    srcs = [
        "rotate_list_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":rotate_list",
        "@com_google_googletest//:gtest_main",
    ],
)
