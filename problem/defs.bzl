"""Macros for defining LeetCode problem targets."""

def leetcode_problem(name, deps = []):
    """Defines a cc_library and cc_test for a LeetCode problem.

    Args:
        name: The problem name (used for .h and _test.cc files)
        deps: Additional dependencies for the library
    """
    native.cc_library(
        name = name,
        hdrs = [name + ".h"],
        deps = deps,
        visibility = ["//visibility:public"],
    )

    native.cc_test(
        name = name + "_test",
        srcs = [name + "_test.cc"],
        deps = [":" + name, "@googletest//:gtest_main"],
    )
