#include "problem/simplify_path.h"

#include "gtest/gtest.h"
#include <string>

namespace problem {

class SimplifyPathTest : public ::testing::Test {
protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SimplifyPathTest() {
    // You can do set-up work for each test here.
  }

  ~SimplifyPathTest() override {
    // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  void SetUp() override {
    // Code here will be called immediately after the constructor (right
    // before each test).
  }

  void TearDown() override {
    // Code here will be called immediately after each test (right
    // before the destructor).
  }

  // Class members declared here can be used by all tests in the test suite
  // for Foo.
};

// Tests that the Foo::Bar() method does Abc.
TEST_F(SimplifyPathTest, case1) {
  std::string path = "/home/";
  auto output = simplifyPath(path);
  ASSERT_EQ(output, "/home");
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(SimplifyPathTest, case2) {
  std::string path = "/a/./b/../../c/";
  auto output = simplifyPath(path);
  ASSERT_EQ(output, "/c");
}

TEST_F(SimplifyPathTest, case3) {
  std::string path = "/../";
  auto output = simplifyPath(path);
  ASSERT_EQ(output, "/");
}

TEST_F(SimplifyPathTest, case4) {
  std::string path = "/home//foo/";
  auto output = simplifyPath(path);
  ASSERT_EQ(output, "/home/foo");
}

TEST_F(SimplifyPathTest, case5) {
  std::string path = "/.../a/../b/c/../d/./";
  auto output = simplifyPath(path);
  ASSERT_EQ(output, "/.../b/d");
}

TEST_F(SimplifyPathTest, case6) {
  std::string path = "/home/user/Documents/../Pictures";
  auto output = simplifyPath(path);
  ASSERT_EQ(output, "/home/user/Pictures");
}

} // namespace problem
