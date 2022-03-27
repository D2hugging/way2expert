cc_library(
    name = "data_holder",
    hdrs = glob([
        "data_holder.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "data_holder_test",
    srcs = [
        "data_holder_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":data_holder",
        "@com_google_googletest//:gtest_main",
    ],
)
