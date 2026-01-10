#include "problem/word_search.h"

#include "gtest/gtest.h"

namespace problem {

class WordSearchTest : public ::testing::Test {
protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  WordSearchTest() {
    // You can do set-up work for each test here.
  }

  ~WordSearchTest() override {
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
TEST_F(WordSearchTest, case1) {
  // Input: mat = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word
  // = "ABCCED" Output: true

  std::vector<std::vector<char>> data{
      {'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
  std::string word = "ABCCED";
  auto output = exist(data, word);
  ASSERT_EQ(output, true);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(WordSearchTest, case2) {
  // Input: mat = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word
  // = "SEE" Output: true

  std::vector<std::vector<char>> data{
      {'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
  std::string word = "SEE";
  auto output = exist(data, word);
  ASSERT_EQ(output, true);
}

TEST_F(WordSearchTest, case3) {
  // Input: mat = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word
  // = "ABCB" Output: false

  std::vector<std::vector<char>> data{
      {'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
  std::string word = "ABCB";
  auto output = exist(data, word);
  ASSERT_EQ(output, false);
}

} // namespace problem
