cc_library(
    name = "01_matrix",
    hdrs = glob([
        "01_matrix.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "01_matrix_test",
    srcs = [
        "01_matrix_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":01_matrix",
        "@com_google_googletest//:gtest_main",
    ],
)
