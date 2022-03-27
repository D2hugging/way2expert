#include "src/problem/combinations.h"

#include "gtest/gtest.h"

namespace problem {

class CombineTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  CombineTest() {
    // You can do set-up work for each test here.
  }

  ~CombineTest() override {
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
TEST_F(CombineTest, case1) {
  // Input: n = 4, k = 2
  // Output:
  // [
  // [1,2],[1,3],[1,4],[2,3],[2,4],[3,4]
  // ]
  int n = 4, k = 2;
  auto output = Combine(n, k);
  std::vector<std::vector<int>> expected{{1, 2}, {1, 3}, {1, 4},
                                         {2, 3}, {2, 4}, {3, 4}};
  ASSERT_EQ(output.size(), 6);
  ASSERT_EQ(output[0], expected[0]);
  ASSERT_EQ(output[1], expected[1]);
  ASSERT_EQ(output[2], expected[2]);
  ASSERT_EQ(output[3], expected[3]);
  ASSERT_EQ(output[4], expected[4]);
  ASSERT_EQ(output[5], expected[5]);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(CombineTest, case2) {
  // Input: n = 1, k = 1
  // Output: [[1]]
  int n = 1, k = 1;
  std::vector<std::vector<int>> expected{{1}};
  auto output = Combine(n, k);
  ASSERT_EQ(output.size(), 1);
  ASSERT_EQ(output[0], expected[0]);
}

}  // namespace problem
