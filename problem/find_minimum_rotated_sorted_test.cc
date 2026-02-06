#include "problem/find_minimum_rotated_sorted.h"

#include "gtest/gtest.h"

namespace problem {

class FindMinTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  FindMinTest() {
    // You can do set-up work for each test here.
  }

  ~FindMinTest() override {
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
TEST_F(FindMinTest, case1) {
  // Input: nums = [3,4,5,1,2]
  // Output: 1
  // Explanation: The original array was [1,2,3,4,5] rotated 3 times.
  std::vector<int> nums = {3, 4, 5, 1, 2};
  auto output = FindMin(nums);
  int excepted = 1;
  EXPECT_EQ(output, excepted);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(FindMinTest, case2) {
  // Input: nums = [4,5,6,7,0,1,2]
  // Output: 0
  // Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.
  std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
  int excepted = 0;
  auto output = FindMin(nums);
  EXPECT_EQ(output, excepted);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(FindMinTest, case3) {
  // Input: nums = [11,13,15,17]
  // Output: 11
  // Explanation: The original array was [11,13,15,17] and it was rotated 4 times.
  std::vector<int> nums = {11, 13, 15, 17};
  int excepted = 11;
  auto output = FindMin(nums);
  EXPECT_EQ(output, excepted);
}

}  // namespace problem
