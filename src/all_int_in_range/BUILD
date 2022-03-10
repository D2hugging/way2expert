cc_library(
    name = "all_int_in_range",
    hdrs = glob([
        "all_int_in_range.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "all_int_in_range_test",
    srcs = [
        "all_int_in_range_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":all_int_in_range",
        "@com_google_googletest//:gtest_main",
    ],
)
