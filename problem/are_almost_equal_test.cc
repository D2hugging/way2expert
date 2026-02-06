#include "problem/are_almost_equal.h"

#include "gtest/gtest.h"

namespace problem {

class AreAlmostEqualTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  AreAlmostEqualTest() {
    // You can do set-up work for each test here.
  }

  ~AreAlmostEqualTest() override {
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
TEST_F(AreAlmostEqualTest, case1) {
  // Input: s1 = "bank", s2 = "kanb"
  // Output: true
  // Explanation: For example, swap the first character with the last character of s2 to make "bank".
  auto s1 = "bank", s2 = "kanb";
  auto expected{true};
  auto output = AreAlmostEqual(s1, s2);
  ASSERT_EQ(output, expected);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(AreAlmostEqualTest, case2) {
  // Input: s1 = "attack", s2 = "defend"
  // Output: false
  // Explanation: It is impossible to make them equal with one string swap.
  auto s1 = "attack", s2 = "defend";
  auto expected{false};
  auto output = AreAlmostEqual(s1, s2);
  ASSERT_EQ(output, expected);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(AreAlmostEqualTest, case3) {
  // Input: s1 = "kelb", s2 = "kelb"
  // Output: true
  // Explanation: The two strings are already equal, so no string swap operation is required.
  auto s1 = "kelb", s2 = "kelb";
  auto expected{true};
  auto output = AreAlmostEqual(s1, s2);
  ASSERT_EQ(output, expected);
}

}  // namespace problem
