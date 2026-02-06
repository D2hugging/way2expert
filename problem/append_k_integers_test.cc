#include "problem/append_k_integers.h"

#include "gtest/gtest.h"

namespace problem {

class MinimalKSumTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MinimalKSumTest() {
    // You can do set-up work for each test here.
  }

  ~MinimalKSumTest() override {
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
TEST_F(MinimalKSumTest, case1) {
  //   Input: nums = [1,4,25,10,25], k = 2
  // Output: 5
  std::vector<int> data{1, 4, 25, 10, 25};
  int k = 2;
  auto output = MinimalKSum(data, k);
  ASSERT_EQ(output, 5);
}
// Tests that the Foo::Bar() method does Abc.
TEST_F(MinimalKSumTest, case2) {
  //   Input: nums = [5,6], k = 6
  // Output: 25
  std::vector<int> data{5, 6};
  int k = 6;
  auto output = MinimalKSum(data, k);
  ASSERT_EQ(output, 25);
}

}  // namespace problem
