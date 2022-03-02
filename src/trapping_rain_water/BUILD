cc_library(
    name = "trap_water",
    hdrs = glob([
        "trap_water.h",
    ]),
    visibility = ["//visibility:public"],
)


cc_test(
    name = "trap_water_test",
    srcs = [
        "trap_water_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":trap_water",
        "@com_google_googletest//:gtest_main",
    ],
)