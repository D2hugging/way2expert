cc_library(
    name = "triangle",
    hdrs = glob([
        "triangle.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "triangle_test",
    srcs = [
        "triangle_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":triangle",
        "@com_google_googletest//:gtest_main",
    ],
)
