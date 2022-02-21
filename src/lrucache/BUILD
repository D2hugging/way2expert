cc_library(
    name = "lrucache",
    hdrs = glob([
        "lru_cache.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "lru_cache_test",
    srcs = [
        "lru_cache_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":lrucache",
        "@com_google_googletest//:gtest_main",
    ],
)
