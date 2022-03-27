#include "src/problem/permutations.h"

#include "gtest/gtest.h"

namespace problem {

class PermuteTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  PermuteTest() {
    // You can do set-up work for each test here.
  }

  ~PermuteTest() override {
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
TEST_F(PermuteTest, case1) {
  // Input: nums = [1,2,3]
  // Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

  std::vector<int> nums{1, 2, 3};
  auto output = Permute(nums);
  std::vector<std::vector<int>> expected{{1, 2, 3}, {1, 3, 2}, {2, 1, 3},
                                         {2, 3, 1}, {3, 2, 1}, {3, 1, 2}};
  ASSERT_EQ(output.size(), 6);
  ASSERT_EQ(output[0], expected[0]);
  ASSERT_EQ(output[1], expected[1]);
  ASSERT_EQ(output[2], expected[2]);
  ASSERT_EQ(output[3], expected[3]);
  ASSERT_EQ(output[4], expected[4]);
  ASSERT_EQ(output[5], expected[5]);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(PermuteTest, case2) {
  // Input: nums = [0,1]
  // Output: [[0,1],[1,0]]
  std::vector<int> nums{0, 1};

  std::vector<std::vector<int>> expected{{0, 1}, {1, 0}};
  auto output = Permute(nums);
  ASSERT_EQ(output.size(), 2);
  ASSERT_EQ(output[0], expected[0]);
  ASSERT_EQ(output[1], expected[1]);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(PermuteTest, case3) {
  // Input: nums = [1]
  // Output: [[1]]
  std::vector<int> nums{1};

  std::vector<std::vector<int>> expected{{1}};
  auto output = Permute(nums);
  ASSERT_EQ(output.size(), 1);
  ASSERT_EQ(output[0], expected[0]);
}

}  // namespace problem
