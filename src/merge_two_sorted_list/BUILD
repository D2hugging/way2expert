cc_library(
    name = "merge_two_sorted_list",
    hdrs = glob([
        "merge_two_sorted_list.h",
    ]),
    deps = [
        "//src/list_node",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "merge_two_sorted_list_test",
    srcs = [
        "merge_two_sorted_list_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":merge_two_sorted_list",
        "@com_google_googletest//:gtest_main",
    ],
)
