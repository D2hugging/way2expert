cc_library(
    name = "reshape_matrix",
    hdrs = glob([
        "reshape_matrix.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "reshape_matrix_test",
    srcs = [
        "reshape_matrix_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":reshape_matrix",
        "@com_google_googletest//:gtest_main",
    ],
)
