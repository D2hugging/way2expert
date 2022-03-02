cc_library(
    name = "max_area",
    hdrs = glob([
        "max_area.h",
    ]),
    visibility = ["//visibility:public"],
)


cc_test(
    name = "max_area_test",
    srcs = [
        "max_area_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":max_area",
        "@com_google_googletest//:gtest_main",
    ],
)