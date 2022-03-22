cc_library(
    name = "count_collisions_on_road",
    hdrs = glob([
        "count_collisions_on_road.h",
    ]),
    visibility = ["//visibility:public"],
)

cc_test(
    name = "count_collisions_on_road_test",
    srcs = [
        "count_collisions_on_road_test.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        ":count_collisions_on_road",
        "@com_google_googletest//:gtest_main",
    ],
)
