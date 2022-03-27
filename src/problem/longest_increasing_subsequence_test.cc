#include "src/problem/longest_increasing_subsequence.h"

#include "gtest/gtest.h"

namespace problem {

class LongestIncreasingSubsequence : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  LongestIncreasingSubsequence() {
     // You can do set-up work for each test here.
  }

  ~LongestIncreasingSubsequence() override {
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
TEST_F(LongestIncreasingSubsequence, NonDupValue) {
  const std::vector<int> arr{10,9,2,5,3,7,101,18};
  
  EXPECT_EQ(problem::lengthOfLIS(arr), 4);
}

// Tests that Foo does Xyz.
TEST_F(LongestIncreasingSubsequence, DupValue) {
  // Exercises the Xyz feature of Foo.
  const std::vector<int> arr{0,1,0,3,2,3};
  
  EXPECT_EQ(problem::lengthOfLIS(arr), 4);
}

TEST_F(LongestIncreasingSubsequence, SameValue) {
  // Exercises the Xyz feature of Foo.
  const std::vector<int> arr{7,7,7,7,7,7,7};  
  EXPECT_EQ(problem::lengthOfLIS(arr), 1);
}

}  // namespace problem
