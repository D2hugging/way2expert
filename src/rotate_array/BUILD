cc_library(
    name = "rotate_array",
    hdrs = glob([
        "rotate_array.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "rotate_array_test",
    srcs = [
        "rotate_array_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":rotate_array",
        "@com_google_googletest//:gtest_main",
    ],
)
