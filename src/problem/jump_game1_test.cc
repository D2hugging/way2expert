#include "src/problem/jump_game1.h"

#include "gtest/gtest.h"

namespace problem {

class CanJumpTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  CanJumpTest() {
    // You can do set-up work for each test here.
  }

  ~CanJumpTest() override {
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
TEST_F(CanJumpTest, case1) {
  // Input: nums = [2,3,1,1,4]
  // Output: true
  // Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
  std::vector<int> nums{2, 3, 1, 1, 4};
  auto expected{true};
  auto output = CanJump(nums);
  ASSERT_EQ(output, expected);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(CanJumpTest, case2) {
  // Input: nums = [3,2,1,0,4]
  // Output: false
  // Explanation: You will always arrive at index 3 no matter what.
  // Its maximum jump length is 0, which makes it impossible to reach the last
  // index.
  std::vector<int> nums{3, 2, 1, 0, 4};
  auto expected{false};
  auto output = CanJump(nums);
  ASSERT_EQ(output, expected);
}

}  // namespace problem
