cc_library(
    name = "sort_colors",
    hdrs = glob([
        "sort_colors.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "sort_colors_test",
    srcs = [
        "sort_colors_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":sort_colors",
        "@com_google_googletest//:gtest_main",
    ],
)
