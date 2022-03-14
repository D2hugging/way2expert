#include "src/rotate_array/rotate_array.h"

#include "gtest/gtest.h"

namespace foo {

class RotateTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  RotateTest() {
    // You can do set-up work for each test here.
  }

  ~RotateTest() override {
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
TEST_F(RotateTest, case1) {
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
  std::vector<int> data{1,2,3,4,5,6,7};
  int k = 3;
  Rotate(data, k);
  ASSERT_EQ(data[0], 5);
  ASSERT_EQ(data[3], 1);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(RotateTest, case2) {
// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]

  std::vector<int> data{-1,-100,3,99};
  int k = 2;
  Rotate(data, k);
  ASSERT_EQ(data[0], 3);
  ASSERT_EQ(data[2], -1);
}

}  // namespace foo
