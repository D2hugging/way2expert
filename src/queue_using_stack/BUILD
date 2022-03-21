cc_library(
    name = "queue_using_stack",
    hdrs = glob([
        "queue_using_stack.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "queue_using_stack_test",
    srcs = [
        "queue_using_stack_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":queue_using_stack",
        "@com_google_googletest//:gtest_main",
    ],
)
