cc_library(
    name = "rotting_oranges",
    hdrs = glob([
        "rotting_oranges.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "rotting_oranges_test",
    srcs = [
        "rotting_oranges_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":rotting_oranges",
        "@com_google_googletest//:gtest_main",
    ],
)
