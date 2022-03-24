cc_library(
    name = "house_robber",
    hdrs = glob([
        "house_robber.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "house_robber_test",
    srcs = [
        "house_robber_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":house_robber",
        "@com_google_googletest//:gtest_main",
    ],
)
