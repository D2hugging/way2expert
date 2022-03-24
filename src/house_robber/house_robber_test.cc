#include "src/house_robber/house_robber.h"

#include "gtest/gtest.h"

namespace foo {

class HouseRobTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  HouseRobTest() {
    // You can do set-up work for each test here.
  }

  ~HouseRobTest() override {
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
TEST_F(HouseRobTest, case1) {
// Input: nums = [1,2,3,1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
// Total amount you can rob = 1 + 3 = 4.

  std::vector<int> nums{1,2,3,1};
  auto expected {4};
  auto output = HouseRob(nums);
  ASSERT_EQ(output, expected);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(HouseRobTest, case2) {
// Input: nums = [2,7,9,3,1]
// Output: 12
// Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
// Total amount you can rob = 2 + 9 + 1 = 12.
  std::vector<int> nums{2,7,9,3,1};

  auto expected {12};
  auto output = HouseRob(nums);
  ASSERT_EQ(output, expected);
}

}  // namespace foo
