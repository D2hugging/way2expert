#include "problem/nearest_exit_in_maze.h"

#include "gtest/gtest.h"

namespace problem {

class NearestExitTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  NearestExitTest() {
    // You can do set-up work for each test here.
  }

  ~NearestExitTest() override {
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
TEST_F(NearestExitTest, case1) {
  //   maze = [['+','+','.','+'],['.','.','.','+'],['+','+','+','.']], entrance
  //   = [1,2]
  std::vector<std::vector<char>> maze = {{'+', '+', '.', '+'}, {'.', '.', '.', '+'}, {'+', '+', '+', '.'}};
  std::vector<int> entrance{1, 2};

  auto output = NearestExit(maze, entrance);
  ASSERT_EQ(output, 1);
}
// Tests that the Foo::Bar() method does Abc.
TEST_F(NearestExitTest, case2) {
  std::vector<std::vector<char>> maze = {{'+', '+', '+'}, {'.', '.', '.'}, {'+', '+', '+'}};

  std::vector<int> entrance{1, 0};

  auto output = NearestExit(maze, entrance);
  ASSERT_EQ(output, 2);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(NearestExitTest, case3) {
  std::vector<std::vector<char>> maze = {{'.', '+'}};

  std::vector<int> entrance{0, 0};

  auto output = NearestExit(maze, entrance);
  ASSERT_EQ(output, -1);
}

}  // namespace problem
