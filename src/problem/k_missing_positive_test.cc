#include "src/problem/k_missing_positive.h"

#include "gtest/gtest.h"

namespace problem {

class FindKthPositiveTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  FindKthPositiveTest() {
    // You can do set-up work for each test here.
  }

  ~FindKthPositiveTest() override {
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
TEST_F(FindKthPositiveTest, case1) {
  // Input: arr = [2,3,4,7,11], k = 5
  // Output: 9
  // Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...].
  // The 5th missing positive integer is 9.
  std::vector<int> data{2, 3, 4, 7, 11};
  int k = 5;
  auto output = FindKthPositive(data, k);
  int excepted{9};
  ASSERT_EQ(output, excepted);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(FindKthPositiveTest, case2) {
  // Input: arr = [1,2,3,4], k = 2
  // Output: 6
  // Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing
  // positive integer is 6.
  std::vector<int> data{1, 2, 3, 4};
  int k = 2;
  int excepted{6};

  auto output = FindKthPositive(data, k);
  ASSERT_EQ(output, excepted);
}

}  // namespace problem
