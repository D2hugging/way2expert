cc_library(
    name = "best_time_buy_stock1",
    hdrs = glob([
        "best_time_buy_stock1.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "best_time_buy_stock1_test",
    srcs = [
        "best_time_buy_stock1_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":best_time_buy_stock1",
        "@com_google_googletest//:gtest_main",
    ],
)
