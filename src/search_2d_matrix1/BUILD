cc_library(
    name = "search_2d_matrix1",
    hdrs = glob([
        "search_2d_matrix1.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "search_2d_matrix1_test",
    srcs = [
        "search_2d_matrix1_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":search_2d_matrix1",
        "@com_google_googletest//:gtest_main",
    ],
)
