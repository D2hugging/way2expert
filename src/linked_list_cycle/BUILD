cc_library(
    name = "linked_list_cycle",
    hdrs = glob([
        "linked_list_cycle.h",
    ]),
    deps = [
        "//src/list_node",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "linked_list_cycle_test",
    srcs = [
        "linked_list_cycle_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":linked_list_cycle",
        "@com_google_googletest//:gtest_main",
    ],
)
