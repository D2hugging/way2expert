cc_library(
    name = "next_greater_element1",
    hdrs = glob([
        "next_greater_element1.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "next_greater_element1_test",
    srcs = [
        "next_greater_element1_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":next_greater_element1",
        "@com_google_googletest//:gtest_main",
    ],
)
