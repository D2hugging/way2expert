#include "problem/next_greater_element2.h"

#include "gtest/gtest.h"

namespace problem {

class NextGreaterElement2Test : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  NextGreaterElement2Test() {
    // You can do set-up work for each test here.
  }

  ~NextGreaterElement2Test() override {
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
TEST_F(NextGreaterElement2Test, case1) {
  // Input: nums = [1,2,1]
  // Output: [2,-1,2]
  std::vector<int> nums{1, 2, 1};
  auto output = NextGreaterElement2(nums);
  ASSERT_EQ(output[0], 2);
  ASSERT_EQ(output[1], -1);
  ASSERT_EQ(output[2], 2);
}
// Tests that the Foo::Bar() method does Abc.
TEST_F(NextGreaterElement2Test, case2) {
  // Input: nums = [1,2,3,4,3]
  // Output: [2,3,4,-1,4]

  std::vector<int> nums{1, 2, 3, 4, 3};
  auto output = NextGreaterElement2(nums);
  ASSERT_EQ(output[0], 2);
  ASSERT_EQ(output[1], 3);
  ASSERT_EQ(output[2], 4);
  ASSERT_EQ(output[3], -1);
  ASSERT_EQ(output[4], 4);
}

}  // namespace problem
