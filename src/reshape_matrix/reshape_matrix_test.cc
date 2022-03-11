#include "src/reshape_matrix/reshape_matrix.h"

#include "gtest/gtest.h"

namespace foo {

class MatrixReshapeTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MatrixReshapeTest() {
    // You can do set-up work for each test here.
  }

  ~MatrixReshapeTest() override {
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
TEST_F(MatrixReshapeTest, case1) {
  // Input: mat = [[1,2],[3,4]], r = 1, c = 4
  // Output: [[1,2,3,4]]
  std::vector<std::vector<int>> nums{{1, 2}, {3, 4}};
  int r = 1;
  int c = 4;
  auto output = MatrixReshape(nums, r, c);
  ASSERT_EQ(output[0][0], 1);
  ASSERT_EQ(output[0][1], 2);
  ASSERT_EQ(output[0][2], 3);
  ASSERT_EQ(output[0][3], 4);
}
// Tests that the Foo::Bar() method does Abc.
TEST_F(MatrixReshapeTest, case2) {
  // Input: mat = [[1,2],[3,4]], r = 2, c = 4
  // Output: [[1,2],[3,4]]
  int r = 2;
  int c = 4;
  std::vector<std::vector<int>> nums{{1, 2}, {3, 4}};

  auto output = MatrixReshape(nums, r, c);
  ASSERT_EQ(output[0][0], 1);
  ASSERT_EQ(output[1][1], 4);
}

}  // namespace foo
