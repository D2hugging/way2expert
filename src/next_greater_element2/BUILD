cc_library(
    name = "next_greater_element2",
    hdrs = glob([
        "next_greater_element2.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "next_greater_element2_test",
    srcs = [
        "next_greater_element2_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":next_greater_element2",
        "@com_google_googletest//:gtest_main",
    ],
)
