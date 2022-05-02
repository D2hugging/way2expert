load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

load("@com_github_grpc_grpc//bazel:cc_grpc_library.bzl", "cc_grpc_library")
load("@com_github_grpc_grpc//bazel:grpc_build_system.bzl", "grpc_proto_library")

proto_library(
    name = "rec_service_proto",
    srcs = [
        "rec_service.proto"
    ],
)

cc_proto_library(
    name = "rec_service_cc_proto",
    deps = [":rec_service_proto"],
)

cc_grpc_library(
    name = "rec_service_cc_grpc",
    srcs = [":rec_service_proto"],
    grpc_only = True,
    deps = [":rec_service_cc_proto"],
)

package(default_visibility = ["//visibility:public"]) 