cc_library(
    name = "search_insert_position",
    hdrs = glob([
        "search_insert_position.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "search_insert_position_test",
    srcs = [
        "search_insert_position_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":search_insert_position",
        "@com_google_googletest//:gtest_main",
    ],
)
