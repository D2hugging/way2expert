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

cc_library(
    name = "double_buffer",
    hdrs = glob([
        "double_buffer.h",
    ]),
    visibility = ["//visibility:public"],
    deps = [
        "@yaml_cpp//:yaml-cpp",
    ],
    copts = [
        '-pthread',
    ],
)