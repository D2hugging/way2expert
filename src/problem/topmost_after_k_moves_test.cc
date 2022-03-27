#include "src/problem/topmost_after_k_moves.h"

#include "gtest/gtest.h"

namespace problem {

class MaximumTopTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MaximumTopTest() {
    // You can do set-up work for each test here.
  }

  ~MaximumTopTest() override {
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
TEST_F(MaximumTopTest, case1) {
  //   Input: nums = [5,2,2,4,0,6], k = 4
  // Output: 5
  std::vector<int> data{5, 2, 2, 4, 0, 6};
  int k = 4;
  auto output = MaximumTop(data, k);
  ASSERT_EQ(output, 5);
}
// Tests that the Foo::Bar() method does Abc.
TEST_F(MaximumTopTest, case2) {
  //   Input: nums = [2], k = 1
  // Output: -1
  std::vector<int> data{2};
  int k = 1;
  auto output = MaximumTop(data, k);
  ASSERT_EQ(output, -1);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(MaximumTopTest, case3) {
  //   Input: nums = [2], k = 4
  // Output: -1
  std::vector<int> data{2};
  int k = 4;
  auto output = MaximumTop(data, k);
  ASSERT_EQ(output, data[0]);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(MaximumTopTest, case4) {
  //   Input: nums = [5,2,2,4,0,6], k = 8
  // Output: 6
  std::vector<int> data{5, 2, 2, 4, 0, 6};
  int k = 8;
  auto output = MaximumTop(data, k);
  ASSERT_EQ(output, 6);
}

}  // namespace problem
