cc_library(
    name = "topmost_after_k_moves",
    hdrs = glob([
        "topmost_after_k_moves.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "topmost_after_k_moves_test",
    srcs = [
        "topmost_after_k_moves_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":topmost_after_k_moves",
        "@com_google_googletest//:gtest_main",
    ],
)
