cc_library(
    name = "letter_case_permutation",
    hdrs = glob([
        "letter_case_permutation.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "letter_case_permutation_test",
    srcs = [
        "letter_case_permutation_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":letter_case_permutation",
        "@com_google_googletest//:gtest_main",
    ],
)
