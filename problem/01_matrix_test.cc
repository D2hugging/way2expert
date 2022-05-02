#include "problem/01_matrix.h"

#include "gtest/gtest.h"

namespace problem {

class UpdateMatrixTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  UpdateMatrixTest() {
    // You can do set-up work for each test here.
  }

  ~UpdateMatrixTest() override {
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
TEST_F(UpdateMatrixTest, case1) {
  // Input: mat = [[0,0,0],[0,1,0],[0,0,0]]
  // Output: [[0,0,0],[0,1,0],[0,0,0]]
  std::vector<std::vector<int>> data{{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
  auto output = UpdateMatrix(data);
  ASSERT_EQ(output[0][0], 0);
  ASSERT_EQ(output[0][1], 0);
  ASSERT_EQ(output[0][2], 0);
  ASSERT_EQ(output[1][0], 0);
  ASSERT_EQ(output[1][1], 1);
  ASSERT_EQ(output[1][2], 0);
  ASSERT_EQ(output[2][0], 0);
  ASSERT_EQ(output[2][1], 0);
  ASSERT_EQ(output[2][2], 0);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(UpdateMatrixTest, case2) {
  // Input: mat = [[0,0,0],[0,1,0],[1,1,1]]
  // Output: [[0,0,0],[0,1,0],[1,2,1]]

  std::vector<std::vector<int>> data{{0, 0, 0}, {0, 1, 0}, {1, 1, 1}};
  auto output = UpdateMatrix(data);
  ASSERT_EQ(output[0][0], 0);
  ASSERT_EQ(output[0][1], 0);
  ASSERT_EQ(output[0][2], 0);
  ASSERT_EQ(output[1][0], 0);
  ASSERT_EQ(output[1][1], 1);
  ASSERT_EQ(output[1][2], 0);
  ASSERT_EQ(output[2][0], 1);
  ASSERT_EQ(output[2][1], 2);
  ASSERT_EQ(output[2][2], 1);
}

}  // namespace problem
