cc_library(
    name = "combinations",
    hdrs = glob([
        "combinations.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "combinations_test",
    srcs = [
        "combinations_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":combinations",
        "@com_google_googletest//:gtest_main",
    ],
)
