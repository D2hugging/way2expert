#include "problem/unique_paths_2.h"

#include "gtest/gtest.h"

namespace problem {

class UniquePathsWithObstacleTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  UniquePathsWithObstacleTest() {
    // You can do set-up work for each test here.
  }

  ~UniquePathsWithObstacleTest() override {
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
TEST_F(UniquePathsWithObstacleTest, case1) {
  std::vector<std::vector<int>> input{{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
  auto output = uniquePathsWithObstacles(input);
  int expected{2};
  ASSERT_EQ(output, expected);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(UniquePathsWithObstacleTest, case2) {
  std::vector<std::vector<int>> input{{0, 1}, {0, 0}};
  auto output = uniquePathsWithObstacles(input);
  int expected{1};
  ASSERT_EQ(output, expected);
}

}  // namespace problem
