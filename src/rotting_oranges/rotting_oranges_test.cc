#include "src/rotting_oranges/rotting_oranges.h"

#include "gtest/gtest.h"

namespace foo {

class OrangesRottingTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  OrangesRottingTest() {
    // You can do set-up work for each test here.
  }

  ~OrangesRottingTest() override {
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
TEST_F(OrangesRottingTest, case1) {
  // Input: grid = [[2,1,1],[1,1,0],[0,1,1]]
  // Output: 4
  std::vector<std::vector<int>> data{{2, 1, 1}, {1, 1, 0}, {0, 1, 1}};
  auto output = OrangesRotting(data);
  ASSERT_EQ(output, 4);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(OrangesRottingTest, case2) {
  // Input: grid = [[2,1,1],[0,1,1],[1,0,1]]
  // Output: -1
  // Explanation: The orange in the bottom left corner (row 2, column 0) is
  // never rotten, because rotting only happens 4-directionally.

  std::vector<std::vector<int>> data{{2, 1, 1}, {0, 1, 1}, {1, 0, 1}};
  auto output = OrangesRotting(data);
  ASSERT_EQ(output, -1);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(OrangesRottingTest, case3) {
  // Input: grid = [[0,2]]
  // Output: 0
  // Explanation: Since there are already no fresh oranges at minute 0, the
  // answer is just 0.
  std::vector<std::vector<int>> data{{0, 2}};
  auto output = OrangesRotting(data);
  ASSERT_EQ(output, 0);
}

}  // namespace foo
