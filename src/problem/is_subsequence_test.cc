#include "src/problem/is_subsequence.h"

#include "gtest/gtest.h"

namespace problem {

class IsSubsequenceTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  IsSubsequenceTest() {
    // You can do set-up work for each test here.
  }

  ~IsSubsequenceTest() override {
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
TEST_F(IsSubsequenceTest, case1) {
// Input: s = "abc", t = "ahbgdc"
// Output: true
  auto s = "abc";
  auto t = "ahbgdc";
  auto expected{true};
  auto output = IsSubsequence(s, t);
  ASSERT_EQ(output, expected);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(IsSubsequenceTest, case2) {
// Input: s = "axc", t = "ahbgdc"
// Output: false
  auto s = "axc";
  auto t = "ahbgdc";

  auto expected{false};
  auto output = IsSubsequence(s, t);
  ASSERT_EQ(output, expected);
}

}  // namespace problem
