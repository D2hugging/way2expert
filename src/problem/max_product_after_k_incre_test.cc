#include "src/problem/max_product_after_k_incre.h"

#include "gtest/gtest.h"

namespace problem {

class MaximumProductTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  MaximumProductTest() {
    // You can do set-up work for each test here.
  }

  ~MaximumProductTest() override {
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
TEST_F(MaximumProductTest, case1) {
  // Input: nums = [0,4], k = 5
  // Output: 20
  // Explanation: Increment the first number 5 times.
  // Now nums = [5, 4], with a product of 5 * 4 = 20.
  // It can be shown that 20 is maximum product possible, so we return 20.
  // Note that there may be other ways to increment nums to have the maximum
  // product.
  std::vector<int> data{0, 4};
  int k{5};
  auto output = MaximumProduct(data, k);
  int excepted = 20;
  ASSERT_EQ(output, excepted);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(MaximumProductTest, case2) {
  // Input: nums = [6,3,3,2], k = 2
  // Output: 216
  // Explanation: Increment the second number 1 time and increment the fourth
  // number 1 time. Now nums = [6, 4, 3, 3], with a product of 6 * 4 * 3 * 3 =
  // 216. It can be shown that 216 is maximum product possible, so we return
  // 216. Note that there may be other ways to increment nums to have the
  // maximum product.
  std::vector<int> data{6, 3, 3, 2};
  int k{2};

  int excepted = 216;

  auto output = MaximumProduct(data, k);
  ASSERT_EQ(output, excepted);
}

}  // namespace problem
