#include "problem/count_square_submatrices_with_all_ones.h"

#include "gtest/gtest.h"

namespace problem {

class SolutionCountSquaresTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SolutionCountSquaresTest() {
    // You can do set-up work for each test here.
  }

  ~SolutionCountSquaresTest() override {
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

TEST_F(SolutionCountSquaresTest, case1) {
  // Input: matrix =
  // [
  //   [0,1,1,1],
  //   [1,1,1,1],
  //   [0,1,1,1]
  // ]
  // Output: 15
  // Explanation:
  // There are 10 squares of side 1.
  // There are 4 squares of side 2.
  // There is  1 square of side 3.
  // Total number of squares = 10 + 4 + 1 = 15.
  std::vector<std::vector<int>> matrix{{0, 1, 1, 1}, {1, 1, 1, 1}, {0, 1, 1, 1}};

  SolutionCountSquares sln;

  auto output = sln.countSquares(matrix);
  ASSERT_EQ(output, 15);
}

TEST_F(SolutionCountSquaresTest, case2) {
  // Input: matrix =
  // [
  //   [1,0,1],
  //   [1,1,0],
  //   [1,1,0]
  // ]
  // Output: 7
  // Explanation:
  // There are 6 squares of side 1.
  // There is 1 square of side 2.
  // Total number of squares = 6 + 1 = 7.
  SolutionCountSquares sln;
  std::vector<std::vector<int>> matrix{{1, 0, 1}, {1, 1, 0}, {1, 1, 0}};
  auto output = sln.countSquares(matrix);
  ASSERT_EQ(output, 7);
}

}  // namespace problem