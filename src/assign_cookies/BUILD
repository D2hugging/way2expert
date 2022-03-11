cc_library(
    name = "assign_cookies",
    hdrs = glob([
        "assign_cookies.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "assign_cookies_test",
    srcs = [
        "assign_cookies_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":assign_cookies",
        "@com_google_googletest//:gtest_main",
    ],
)
