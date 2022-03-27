#include "src/best_time_buy_stock1/best_time_buy_stock1.h"

#include "gtest/gtest.h"

namespace problem {

class MaxProfit1Test : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MaxProfit1Test() {
    // You can do set-up work for each test here.
  }

  ~MaxProfit1Test() override {
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
TEST_F(MaxProfit1Test, case1) {
  // Input: prices = [7,1,5,3,6,4]
  // Output: 5
  std::vector<int> data{7, 1, 5, 3, 6, 4};
  auto output = MaxProfit1(data);
  ASSERT_EQ(output, 5);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(MaxProfit1Test, case2) {
  // Input: prices = [7,6,4,3,1]
  // Output: 0
  std::vector<int> data{7, 6, 4, 3, 1};
  auto output = MaxProfit1(data);
  ASSERT_EQ(output, 0);
}

}  // namespace problem
