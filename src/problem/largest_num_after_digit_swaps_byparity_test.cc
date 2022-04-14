#include "src/problem/largest_num_after_digit_swaps_byparity.h"

#include "gtest/gtest.h"

namespace problem {

class LargestIntegerTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  LargestIntegerTest() {
    // You can do set-up work for each test here.
  }

  ~LargestIntegerTest() override {
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
TEST_F(LargestIntegerTest, case1) {
  // Input: num = 1234
  // Output: 3412
  // Explanation: Swap the digit 3 with the digit 1, this results in the number
  // 3214. Swap the digit 2 with the digit 4, this results in the number 3412.
  // Note that there may be other sequences of swaps but it can be shown that
  // 3412 is the largest possible number. Also note that we may not swap the
  // digit 4 with the digit 1 since they are of different parities.
  int data{1234};
  auto output = LargestInteger(data);
  int excepted{3412};
  ASSERT_EQ(output, excepted);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(LargestIntegerTest, case2) {
  // Input: num = 65875
  // Output: 87655
  // Explanation: Swap the digit 8 with the digit 6, this results in the number
  // 85675. Swap the first digit 5 with the digit 7, this results in the number
  // 87655. Note that there may be other sequences of swaps but it can be shown
  // that 87655 is the largest possible number.
  auto data{65875};
  int excepted{87655};

  auto output = LargestInteger(data);
  ASSERT_EQ(output, excepted);
}

}  // namespace problem
