cc_library(
    name = "permutations",
    hdrs = glob([
        "permutations.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "permutations_test",
    srcs = [
        "permutations_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":permutations",
        "@com_google_googletest//:gtest_main",
    ],
)
