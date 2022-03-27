#include "src/problem/sort_colors.h"

#include "gtest/gtest.h"

namespace problem {

class SortColorsTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SortColorsTest() {
     // You can do set-up work for each test here.
  }

  ~SortColorsTest() override {
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
TEST_F(SortColorsTest, case1) {
  std::vector<int> arr{2,0,2,1,1,0};
  problem::sortColors(arr);
  EXPECT_EQ(arr[0], 0);
  EXPECT_EQ(arr[1], 0);
  EXPECT_EQ(arr[2], 1);
  EXPECT_EQ(arr[3], 1);
  EXPECT_EQ(arr[4], 2);
  EXPECT_EQ(arr[5], 2);
}

// Tests that Foo does Xyz.
TEST_F(SortColorsTest, case2) {
  // Exercises the Xyz feature of Foo.
  std::vector<int> arr{2, 0, 1};
  problem::sortColors(arr);
  EXPECT_EQ(arr[0], 0);
  EXPECT_EQ(arr[1], 1);
  EXPECT_EQ(arr[2], 2);
}

}  // namespace problem
