#include "problem/sort_matrix_by_diagonals.h"

#include "gtest/gtest.h"

namespace problem {

class SortMatrixTest : public ::testing::Test {
protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SortMatrixTest() {
    // You can do set-up work for each test here.
  }

  ~SortMatrixTest() override {
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
TEST_F(SortMatrixTest, case1) {
  std::vector<std::vector<int>> data{{1, 7, 3}, {9, 8, 2}, {4, 5, 6}};
  auto output = SortMatrix(data);
  std::vector<std::vector<int>> expected{{8, 2, 3}, {9, 6, 7}, {4, 5, 1}};
  ASSERT_EQ(output, expected);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(SortMatrixTest, case2) {
  std::vector<std::vector<int>> data{{0, 1}, {1, 2}};
  auto output = SortMatrix(data);
  std::vector<std::vector<int>> expected{{2, 1}, {1, 0}};
  ASSERT_EQ(output, expected);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(SortMatrixTest, case3) {
  std::vector<std::vector<int>> data{{1}};
  auto output = SortMatrix(data);
  std::vector<std::vector<int>> expected{{1}};
  ASSERT_EQ(output, expected);
}

} // namespace problem
