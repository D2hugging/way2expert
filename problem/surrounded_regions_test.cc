#include "problem/surrounded_regions.h"

#include "gtest/gtest.h"

namespace problem {

class SurroundedRegionsTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SurroundedRegionsTest() {
    // You can do set-up work for each test here.
  }

  ~SurroundedRegionsTest() override {
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
TEST_F(SurroundedRegionsTest, case1) {
  // Input: board = [["X","X","X","X"],["X","O","O","X"],["X","X","O","X"],["X","O","X","X"]]
  // Output: [["X","X","X","X"],["X","X","X","X"],["X","X","X","X"],["X","O","X","X"]]
  std::vector<std::vector<char>> board = {
      {'X', 'X', 'X', 'X'}, {'X', 'O', 'O', 'X'}, {'X', 'X', 'O', 'X'}, {'X', 'O', 'X', 'X'}};
  SurroundedRegions(board);
  std::vector<std::vector<char>> expected = {
      {'X', 'X', 'X', 'X'}, {'X', 'X', 'X', 'X'}, {'X', 'X', 'X', 'X'}, {'X', 'O', 'X', 'X'}};
  ASSERT_EQ(board, expected);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(SurroundedRegionsTest, case2) {
  // Input: board = [["X"]]
  // Output: [["X"]]
  std::vector<std::vector<char>> board = {{'X'}};
  SurroundedRegions(board);
  std::vector<std::vector<char>> expected = {{'X'}};
  ASSERT_EQ(board, expected);
}

}  // namespace problem
