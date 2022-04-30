#include "src/problem/find_first_last_position_sorted.h"

#include "gtest/gtest.h"

namespace problem {

class SearchRangeTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SearchRangeTest() {
    // You can do set-up work for each test here.
  }

  ~SearchRangeTest() override {
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
TEST_F(SearchRangeTest, case1) {
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
  std::vector<int> nums = {5,7,7,8,8,10};
  int target = 8;
  std::vector<int> excepted {3,4};

  auto output = SearchRange(nums, target);
  EXPECT_EQ(output, excepted);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(SearchRangeTest, case2) {
// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
  std::vector<int> nums = {5,7,7,8,8,10};
  int target = 6;
  std::vector<int> excepted {-1,-1};
  auto output = SearchRange(nums, target);
  EXPECT_EQ(output, excepted);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(SearchRangeTest, case3) {
// Input: nums = [], target = 0
// Output: [-1,-1]
  std::vector<int> nums = {};
  int target = 0;
  std::vector<int> excepted {-1,-1};

  auto output = SearchRange(nums, target);
  EXPECT_EQ(output, excepted);
}

}  // namespace problem
