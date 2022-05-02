#include "problem/pascal_triangle.h"

#include "gtest/gtest.h"

namespace problem {

class GeneratePascalTriangleTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  GeneratePascalTriangleTest() {
    // You can do set-up work for each test here.
  }

  ~GeneratePascalTriangleTest() override {
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
TEST_F(GeneratePascalTriangleTest, case1) {
// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
  int num_rows = 5;
  auto output = GeneratePascalTriangle(num_rows);
  ASSERT_EQ(output[0][0], 1);
  ASSERT_EQ(output[1][0], 1);
  ASSERT_EQ(output[1][1], 1);
  ASSERT_EQ(output[2][0], 1);
  ASSERT_EQ(output[2][1], 2);
  ASSERT_EQ(output[2][2], 1);
  ASSERT_EQ(output[3][1], 3);
  ASSERT_EQ(output[4][1], 4);
  ASSERT_EQ(output[4][2], 6);
  ASSERT_EQ(output[4][3], 4);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(GeneratePascalTriangleTest, case2) {
// Input: numRows = 1
// Output: [[1]]
  int num_rows = 1;
  auto output = GeneratePascalTriangle(num_rows);
  ASSERT_EQ(output[0][0], 1);
}

}  // namespace problem
