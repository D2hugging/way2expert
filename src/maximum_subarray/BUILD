cc_library(
    name = "maximum_subarray",
    hdrs = glob([
        "maximum_subarray.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "maximum_subarray_test",
    srcs = [
        "maximum_subarray_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":maximum_subarray",
        "@com_google_googletest//:gtest_main",
    ],
)
