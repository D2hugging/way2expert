cc_library(
    name = "remove_make_strictly_inc",
    hdrs = glob([
        "remove_make_strictly_inc.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "remove_make_strictly_inc_test",
    srcs = [
        "remove_make_strictly_inc_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":remove_make_strictly_inc",
        "@com_google_googletest//:gtest_main",
    ],
)
