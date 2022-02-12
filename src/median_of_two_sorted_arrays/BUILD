cc_library(
    name = "median_of_two_sorted_arrays",
    hdrs = glob([
        "median_of_two_sorted_arrays.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "median_of_two_sorted_arrays_test",
    srcs = [
        "median_of_two_sorted_arrays_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":median_of_two_sorted_arrays",
        "@com_google_googletest//:gtest_main",
    ],
)
