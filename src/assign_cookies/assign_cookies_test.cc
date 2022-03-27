#include "src/assign_cookies/assign_cookies.h"

#include "gtest/gtest.h"

namespace problem {

class FindContentChildrenTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  FindContentChildrenTest() {
    // You can do set-up work for each test here.
  }

  ~FindContentChildrenTest() override {
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
TEST_F(FindContentChildrenTest, case1) {
  //   Input: g = [1,2,3], s = [1,1]
  // Output: 1
  std::vector<int> g{1, 2, 3};
  std::vector<int> s{1, 1};

  auto output = FindContentChildren(g, s);
  ASSERT_EQ(output, 1);
}
// Tests that the Foo::Bar() method does Abc.
TEST_F(FindContentChildrenTest, case2) {
  //   Input: g = [1,2], s = [1,2,3]
  // Output: 2
  std::vector<int> g{1, 2};
  std::vector<int> s{1, 2, 3};
  auto output = FindContentChildren(g, s);
  ASSERT_EQ(output, 2);
}

}  // namespace problem
