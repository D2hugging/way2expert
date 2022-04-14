#include "src/problem/count_negative.h"

#include "gtest/gtest.h"

namespace problem {

class CountNegativesTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  CountNegativesTest() {
    // You can do set-up work for each test here.
  }

  ~CountNegativesTest() override {
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
TEST_F(CountNegativesTest, case1) {
// Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
// Output: 8
// Explanation: There are 8 negatives number in the matrix.
  std::vector<std::vector<int>> data{{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
  auto output = CountNegatives(data);
  int excepted{8};
  ASSERT_EQ(output, excepted);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(CountNegativesTest, case2) {
//   Input: grid = [[3,2],[1,0]]
// Output: 0
  std::vector<std::vector<int>> data{{3,2},{1,0}};
  int excepted{0};

  auto output = CountNegatives(data);
  ASSERT_EQ(output, excepted);
}

}  // namespace problem
