cc_library(
    name = "pascal_triangle",
    hdrs = glob([
        "pascal_triangle.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "pascal_triangle_test",
    srcs = [
        "pascal_triangle_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":pascal_triangle",
        "@com_google_googletest//:gtest_main",
    ],
)
