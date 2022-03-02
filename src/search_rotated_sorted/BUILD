cc_library(
    name = "search_rotated_sorted",
    hdrs = glob([
        "search_rotated_sorted.h",
    ]),
    visibility = ["//visibility:public"],
)


cc_test(
    name = "search_rotated_sorted_test",
    srcs = [
        "search_rotated_sorted_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":search_rotated_sorted",
        "@com_google_googletest//:gtest_main",
    ],
)