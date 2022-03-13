#include "src/maximum_subarray/maximum_subarray.h"

#include "gtest/gtest.h"

namespace foo {

class MaxSubArrayTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MaxSubArrayTest() {
    // You can do set-up work for each test here.
  }

  ~MaxSubArrayTest() override {
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
TEST_F(MaxSubArrayTest, case1) {
  // Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
  // Output: 6
  std::vector<int> data{-2, 1, -3, 4, -1, 2, 1, -5, 4};
  auto output = MaxSubArray(data);
  ASSERT_EQ(output, 6);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(MaxSubArrayTest, case2) {
  //   Input: nums = [1]
  // Output: 1
  std::vector<int> data{1};
  auto output = MaxSubArray(data);
  ASSERT_EQ(output, 1);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(MaxSubArrayTest, case3) {
  //   Input: nums = [5,4,-1,7,8]
  // Output: 23
  std::vector<int> data{5, 4, -1, 7, 8};
  auto output = MaxSubArray(data);
  ASSERT_EQ(output, 23);
}

}  // namespace foo
