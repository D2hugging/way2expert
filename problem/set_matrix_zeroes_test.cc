#include "problem/set_matrix_zeroes.h"

#include "gtest/gtest.h"

namespace problem {

class SetMatrixZerosTest : public ::testing::Test {
protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SetMatrixZerosTest() {
    // You can do set-up work for each test here.
  }

  ~SetMatrixZerosTest() override {
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
TEST_F(SetMatrixZerosTest, case1) {
  // Input: mat = [[1,1,1],[1,0,1],[1,1,1]]
  // Output: [[1,0,1],[0,0,0],[1,0,1]]

  std::vector<std::vector<int>> data{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
  setZeroes(data);
  ASSERT_EQ(data[0][0], 1);
  ASSERT_EQ(data[0][1], 0);
  ASSERT_EQ(data[0][2], 1);
  ASSERT_EQ(data[1][0], 0);
  ASSERT_EQ(data[1][1], 0);
  ASSERT_EQ(data[1][2], 0);
  ASSERT_EQ(data[2][0], 1);
  ASSERT_EQ(data[2][1], 0);
  ASSERT_EQ(data[2][2], 1);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(SetMatrixZerosTest, case2) {
  // Input: mat = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
  // Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

  std::vector<std::vector<int>> data{{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
  setZeroes(data);
  ASSERT_EQ(data[0][0], 0);
  ASSERT_EQ(data[0][1], 0);
  ASSERT_EQ(data[0][2], 0);
  ASSERT_EQ(data[0][3], 0);
  ASSERT_EQ(data[1][0], 0);
  ASSERT_EQ(data[1][1], 4);
  ASSERT_EQ(data[1][2], 5);
  ASSERT_EQ(data[1][3], 0);
  ASSERT_EQ(data[2][0], 0);
  ASSERT_EQ(data[2][1], 3);
  ASSERT_EQ(data[2][2], 1);
  ASSERT_EQ(data[2][3], 0);
}

} // namespace problem
