#include "problem/max_sum_after_partition.h"

#include "gtest/gtest.h"

namespace problem {

class MaxSumAfterPartitioningTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MaxSumAfterPartitioningTest() {
    // You can do set-up work for each test here.
  }

  ~MaxSumAfterPartitioningTest() override {
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
TEST_F(MaxSumAfterPartitioningTest, case1) {
  // Input: arr = [1,15,7,9,2,5,10], k = 3
  // Output: 84
  // Explanation: arr becomes [15,15,15,9,10,10,10]
  std::vector<int> data{1, 15, 7, 9, 2, 5, 10};
  int k{3};
  SolutionMaxSumAfterPartitioning sln;
  auto output = sln.MaxSumAfterPartitioning(data, k);
  int excepted = 84;
  ASSERT_EQ(output, excepted);
}

TEST_F(MaxSumAfterPartitioningTest, case2) {
  //   Input: arr = [1,4,1,5,7,3,6,1,9,9,3], k = 4
  //   Output: 83
  std::vector<int> data{1, 4, 1, 5, 7, 3, 6, 1, 9, 9, 3};
  int k{4};
  SolutionMaxSumAfterPartitioning sln;
  auto output = sln.MaxSumAfterPartitioning(data, k);
  int excepted = 83;
  ASSERT_EQ(output, excepted);
}

TEST_F(MaxSumAfterPartitioningTest, case3) {
  // Input: arr = [1], k = 1
  // Output: 1
  std::vector<int> data{1};
  int k{1};
  SolutionMaxSumAfterPartitioning sln;
  auto output = sln.MaxSumAfterPartitioning(data, k);
  int excepted = 1;
  ASSERT_EQ(output, excepted);
}

}  // namespace problem