cc_library(
    name = "append_k_integers",
    hdrs = glob([
        "append_k_integers.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "append_k_integers_test",
    srcs = [
        "append_k_integers_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":append_k_integers",
        "@com_google_googletest//:gtest_main",
    ],
)
