#include "problem/all_paths_from_source_to_target.h"

#include "gtest/gtest.h"

namespace problem {

class SolutionAllPathsSourceTargetTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SolutionAllPathsSourceTargetTest() {
    // You can do set-up work for each test here.
  }

  ~SolutionAllPathsSourceTargetTest() override {
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
TEST_F(SolutionAllPathsSourceTargetTest, case1) {
  // Input: graph = [[1,2],[3],[3],[]]
  // Output: [[0,1,3],[0,2,3]]
  // Explanation: There are two paths: 0 -> 1 -> 3 and 0 -> 2 -> 3.

  std::vector<std::vector<int>> graph{{1, 2}, {3}, {3}, {}};

  SolutionAllPathsSourceTarget sln;
  auto output = sln.allPathsSourceTarget(graph);
  ASSERT_EQ(output[0][0], 0);
  ASSERT_EQ(output[0][1], 1);
  ASSERT_EQ(output[0][2], 3);

  ASSERT_EQ(output[1][0], 0);
  ASSERT_EQ(output[1][1], 2);
  ASSERT_EQ(output[1][2], 3);
}

TEST_F(SolutionAllPathsSourceTargetTest, case2) {
  // Input: graph = [[4,3,1],[3,2,4],[3],[4],[]]
  // Output: [[0,4],[0,3,4],[0,1,3,4],[0,1,2,3,4],[0,1,4]]
  std::vector<std::vector<int>> graph{{4, 3, 1}, {3, 2, 4}, {3}, {4}, {}};

  SolutionAllPathsSourceTarget sln;
  auto output = sln.allPathsSourceTarget(graph);
  ASSERT_EQ(output[0][0], 0);
  ASSERT_EQ(output[0][1], 4);

  ASSERT_EQ(output[1][0], 0);
  ASSERT_EQ(output[1][1], 3);
  ASSERT_EQ(output[1][2], 4);

  ASSERT_EQ(output[2][0], 0);
  ASSERT_EQ(output[2][1], 1);
  ASSERT_EQ(output[2][2], 3);
  ASSERT_EQ(output[2][3], 4);

  ASSERT_EQ(output[3][0], 0);
  ASSERT_EQ(output[3][1], 1);
  ASSERT_EQ(output[3][2], 2);
  ASSERT_EQ(output[3][3], 3);
  ASSERT_EQ(output[3][4], 4);

  ASSERT_EQ(output[4][0], 0);
  ASSERT_EQ(output[4][1], 1);
  ASSERT_EQ(output[4][2], 4);
}

}  // namespace problem