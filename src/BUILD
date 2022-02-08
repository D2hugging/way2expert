cc_library(
    name = "way2expert",
    hdrs = glob([
        "src/*.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "median_of_two_sorted_arrays_test",
    srcs = ["median_of_two_sorted_arrays_test.cc"],
    # copts = ABSL_TEST_COPTS,
    visibility = ["//visibility:public"],
    includes = glob([
        "src/*.h",
    ]),
    deps = [
        ":way2expert",
        "@com_google_googletest//:gtest_main",
    ],
)
