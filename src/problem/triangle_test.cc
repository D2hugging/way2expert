#include "src/problem/triangle.h"

#include "gtest/gtest.h"

namespace problem {

class MinimumTotalTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MinimumTotalTest() {
    // You can do set-up work for each test here.
  }

  ~MinimumTotalTest() override {
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
TEST_F(MinimumTotalTest, case1) {
// Input: triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]
// Output: 11
// Explanation: The triangle looks like:
//    2
//   3 4
//  6 5 7
// 4 1 8 3
// The minimum path sum from top to bottom is 2 + 3 + 5 + 1 = 11 (underlined above).

  std::vector<std::vector<int>> nums {{2},{3,4},{6,5,7},{4,1,8,3}};
  auto expected {11};
  auto output = MinimumTotal(nums);
  ASSERT_EQ(output, expected);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(MinimumTotalTest, case2) {
// Input: triangle = [[-10]]
// Output: -10
  std::vector<std::vector<int>> nums {{-10}};

  auto expected {-10};
  auto output = MinimumTotal(nums);
  ASSERT_EQ(output, expected);
}

}  // namespace problem
