cc_binary(
    name = "rec_server",
    srcs = [
        "rec_server.cc",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "//recsys/protos:rec_service_cc_grpc",
        "@com_github_grpc_grpc//:grpc++",
        "@com_github_grpc_grpc//:grpc++_reflection",
    ],
)
