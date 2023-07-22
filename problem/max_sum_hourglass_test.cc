#include "problem/max_sum_hourglass.h"

#include "gtest/gtest.h"

namespace problem {
class MaxSumOfHourglassTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MaxSumOfHourglassTest() {
    // You can do set-up work for each test here.
  }

  ~MaxSumOfHourglassTest() override {
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
TEST_F(MaxSumOfHourglassTest, case1) {
  // Input: grid = [[6,2,1,3],[4,2,1,5],[9,2,8,7],[4,1,2,9]]
  // Output: 30
  // Explanation: The cells shown above represent the hourglass with the maximum
  // sum: 6 + 2 + 1 + 2 + 9 + 2 + 8 = 30.

  std::vector<std::vector<int>> grid{
      {6, 2, 1, 3}, {4, 2, 1, 5}, {9, 2, 8, 7}, {4, 1, 2, 9}};

  auto output = MaxSumOfHourglass(grid);
  int excepted = 30;
  ASSERT_EQ(output, excepted);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(MaxSumOfHourglassTest, case2) {
  //   Input: grid = [[1,2,3],[4,5,6],[7,8,9]]
  // Output: 35
  // Explanation: There is only one hourglass in the matrix, with the sum: 1 + 2
  // + 3 + 5 + 7 + 8 + 9 = 35. maximum product.
  std::vector<std::vector<int>> grid{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int excepted = 35;

  auto output = MaxSumOfHourglass(grid);
  ASSERT_EQ(output, excepted);
}

}  // namespace problem