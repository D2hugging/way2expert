#include "problem/valid_sudoku.h"

#include "gtest/gtest.h"

namespace problem {

class IsValidSudokuTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  IsValidSudokuTest() {
    // You can do set-up work for each test here.
  }

  ~IsValidSudokuTest() override {
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
TEST_F(IsValidSudokuTest, case1) {
  // Input: board =
  // {{'5','3','.','.','7','.','.','.','.'}
  // ,{'6','.','.','1','9','5','.','.','.'}
  // ,{'.','9','8','.','.','.','.','6','.'}
  // ,{'8','.','.','.','6','.','.','.','3'}
  // ,{'4','.','.','8','.','3','.','.','1'}
  // ,{'7','.','.','.','2','.','.','.','6'}
  // ,{'.','6','.','.','.','.','2','8','.'}
  // ,{'.','.','.','4','1','9','.','.','5'}
  // ,{'.','.','.','.','8','.','.','7','9'}}
  // Output: true
  std::vector<std::vector<char>> board{
      {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
      {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
      {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
      {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
      {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
      {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
      {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
      {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
      {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
  auto output = IsValidSudoku(board);
  ASSERT_EQ(output, true);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(IsValidSudokuTest, case2) {
  // Input: board =
  // {{'8','3','.','.','7','.','.','.','.'}
  // ,{'6','.','.','1','9','5','.','.','.'}
  // ,{'.','9','8','.','.','.','.','6','.'}
  // ,{'8','.','.','.','6','.','.','.','3'}
  // ,{'4','.','.','8','.','3','.','.','1'}
  // ,{'7','.','.','.','2','.','.','.','6'}
  // ,{'.','6','.','.','.','.','2','8','.'}
  // ,{'.','.','.','4','1','9','.','.','5'}
  // ,{'.','.','.','.','8','.','.','7','9'}}
  // Output: false
  std::vector<std::vector<char>> board{
      {'8', '3', '.', '.', '7', '.', '.', '.', '.'},
      {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
      {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
      {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
      {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
      {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
      {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
      {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
      {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

  auto output = IsValidSudoku(board);
  ASSERT_EQ(output, false);
}

}  // namespace problem
