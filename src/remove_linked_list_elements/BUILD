cc_library(
    name = "remove_linked_list_elements",
    hdrs = glob([
        "remove_linked_list_elements.h",
    ]),
    deps = [
        "//src/list_node",
    ],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "remove_linked_list_elements_test",
    srcs = [
        "remove_linked_list_elements_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":remove_linked_list_elements",
        "@com_google_googletest//:gtest_main",
    ],
)
