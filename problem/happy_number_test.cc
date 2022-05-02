#include "problem/happy_number.h"

#include "gtest/gtest.h"

namespace problem {

class IsHappyTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  IsHappyTest() {
    // You can do set-up work for each test here.
  }

  ~IsHappyTest() override {
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
TEST_F(IsHappyTest, case1) {
  // Input: n = 19
  // Output: true
  // Explanation:
  // 12 + 92 = 82
  // 82 + 22 = 68
  // 62 + 82 = 100
  // 12 + 02 + 02 = 1
  int nums{19};
  auto expected{true};
  auto output = IsHappy(nums);
  ASSERT_EQ(output, expected);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(IsHappyTest, case2) {
  // Input: n = 2
  // Output: false
  int nums{2};

  auto expected{false};
  auto output = IsHappy(nums);
  ASSERT_EQ(output, expected);
}

}  // namespace problem
