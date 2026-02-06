#include "problem/min_subarray_len_distinct_sum.h"

#include "gtest/gtest.h"

namespace problem {

class MinLengthTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MinLengthTest() {
    // You can do set-up work for each test here.
  }

  ~MinLengthTest() override {
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
TEST_F(MinLengthTest, case1) {
  std::vector<int> data{2, 2, 3, 1};
  int k = 4;
  auto output = MinLength(data, k);
  ASSERT_EQ(output, 2);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(MinLengthTest, case2) {
  std::vector<int> data{3, 2, 3, 4};
  int k = 5;
  auto output = MinLength(data, k);
  ASSERT_EQ(output, 2);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(MinLengthTest, case3) {
  std::vector<int> data{5, 5, 4};
  int k = 5;
  auto output = MinLength(data, k);
  ASSERT_EQ(output, 1);
}

}  // namespace problem
