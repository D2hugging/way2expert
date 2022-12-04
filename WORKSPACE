workspace(name = "way2expert")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# rules_cc defines rules for generating C++ code from Protocol Buffers.
http_archive(
    name = "rules_cc",
    sha256 = "35f2fb4ea0b3e61ad64a369de284e4fbbdcdba71836a5555abb5e194cf119509",
    strip_prefix = "rules_cc-624b5d59dfb45672d4239422fa1e3de1822ee110",
    urls = [
        # "https://mirror.bazel.build/github.com/bazelbuild/rules_cc/archive/624b5d59dfb45672d4239422fa1e3de1822ee110.tar.gz",
        "https://github.com/bazelbuild/rules_cc/archive/624b5d59dfb45672d4239422fa1e3de1822ee110.tar.gz",
    ],
)

load("@rules_cc//cc:repositories.bzl", "rules_cc_dependencies")
rules_cc_dependencies()

# GoogleTest/GoogleMock framework. Used by most unit-tests.
http_archive(
    name = "com_google_googletest",  # 2022-01-28T15:27:11Z
    sha256 = "eb70a6d4520f940956a6b3e37d205d92736bb104c6a1b2b9f82bfc41bd7a2b34",
    strip_prefix = "googletest-28e1da21d8d677bc98f12ccc7fc159ff19e8e817",
    urls = ["https://github.com/google/googletest/archive/28e1da21d8d677bc98f12ccc7fc159ff19e8e817.zip"],
)

# http_archive(
#     name = "bazel_skylib",
#     urls = [
#         "https://mirror.bazel.build/github.com/bazelbuild/bazel-skylib/releases/download/1.2.1/bazel-skylib-1.2.1.tar.gz",
#         "https://github.com/bazelbuild/bazel-skylib/releases/download/1.2.1/bazel-skylib-1.2.1.tar.gz",
#     ],
#     sha256 = "f7be3474d42aae265405a592bb7da8e171919d74c16f082a5457840f06054728",
# )
# load("@bazel_skylib//:workspace.bzl", "bazel_skylib_workspace")
# bazel_skylib_workspace()

# yaml
# http_archive(
#     name = "yaml_cpp",
#     sha256 = "4ae3d55effd82de17b85827c253318ad055d1380da82728eec9093aebb1336be",
#     strip_prefix = "yaml-cpp-master",
#     urls = ["https://github.com/jbeder/yaml-cpp/archive/refs/heads/master.zip"],
# )

# # rules_proto defines abstract rules for building Protocol Buffers.
# http_archive(
#     name = "rules_proto",
#     sha256 = "2490dca4f249b8a9a3ab07bd1ba6eca085aaf8e45a734af92aad0c42d9dc7aaf",
#     strip_prefix = "rules_proto-218ffa7dfa5408492dc86c01ee637614f8695c45",
#     urls = [
#         "https://github.com/bazelbuild/rules_proto/archive/218ffa7dfa5408492dc86c01ee637614f8695c45.tar.gz",
#     ],
# )

# load("@rules_proto//proto:repositories.bzl", "rules_proto_dependencies", "rules_proto_toolchains")
# rules_proto_dependencies()
# rules_proto_toolchains()

##### gRPC Rules for Bazel
##### See https://github.com/grpc/grpc/blob/master/src/cpp/README.md#make
# http_archive(
#     name = "com_github_grpc_grpc",
#     sha256 = "4f0ad3557539a3d6edfad1693a92bd21acd3a6c3d610faa4714d64ad1d0a8072",
#     strip_prefix = "grpc-1.30.0",
#     urls = [
#         "https://github.com/grpc/grpc/archive/refs/tags/v1.30.0.zip",
#     ],
# )
# load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")
# grpc_deps()
# load("@com_github_grpc_grpc//bazel:grpc_extra_deps.bzl", "grpc_extra_deps")
# grpc_extra_deps()

# gflags
# http_archive(
#     name = "com_github_gflags_gflags",
#     sha256 = "34af2f15cf7367513b352bdcd2493ab14ce43692d2dcd9dfc499492966c64dcf",
#     strip_prefix = "gflags-2.2.2",
#     urls = ["https://github.com/gflags/gflags/archive/v2.2.2.tar.gz"],
# )

# glog
# http_archive(
#     name = "com_github_google_glog",
#     sha256 = "21bc744fb7f2fa701ee8db339ded7dce4f975d0d55837a97be7d46e8382dea5a",
#     strip_prefix = "glog-0.5.0",
#     urls = ["https://github.com/google/glog/archive/v0.5.0.zip"],
# )