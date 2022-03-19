cc_library(
    name = "middle_of_list",
    hdrs = glob([
        "middle_of_list.h",
    ]),
    deps = [
        "//src/list_node",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "middle_of_list_test",
    srcs = [
        "middle_of_list_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":middle_of_list",
        "@com_google_googletest//:gtest_main",
    ],
)
