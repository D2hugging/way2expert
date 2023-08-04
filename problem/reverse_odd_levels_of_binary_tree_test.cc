#include "problem/reverse_odd_levels_of_binary_tree.h"

#include "gtest/gtest.h"

namespace problem {

class SolutionReverseOddLevelsTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SolutionReverseOddLevelsTest() {
    // You can do set-up work for each test here.
  }

  ~SolutionReverseOddLevelsTest() override {
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
TEST_F(SolutionReverseOddLevelsTest, casePositive) {
  // Input: root = [2,3,5,8,13,21,34]
  // Output: [2,5,3,8,13,21,34]
  // Explanation:
  // The tree has only one odd level.
  // The nodes at level 1 are 3, 5 respectively, which are reversed and become
  // 5, 3
  auto root = new TreeNode(2);
  root->left = new TreeNode(3);
  root->right = new TreeNode(5);

  root->left->left = new TreeNode(8);
  root->left->right = new TreeNode(13);

  root->right->left = new TreeNode(21);
  root->right->right = new TreeNode(34);

  SolutionReverseOddLevels sln;
  auto output = sln.reverseOddLevels(root);

  ASSERT_EQ(output->left->val, 5);
  ASSERT_EQ(output->right->val, 3);
}

TEST_F(SolutionReverseOddLevelsTest, caseNeg) {
  // Input: root = [7,13,11]
  // Output: [7,11,13]
  // Explanation:
  // The nodes at level 1 are 13, 11, which are reversed and become 11, 13.
  auto root = new TreeNode(7);
  root->left = new TreeNode(13);
  root->right = new TreeNode(11);

  SolutionReverseOddLevels sln;
  auto output = sln.reverseOddLevels(root);
  ASSERT_EQ(output->left->val, 11);
  ASSERT_EQ(output->right->val, 13);
}

TEST_F(SolutionReverseOddLevelsTest, caseZero) {
  // Input: root = [0,1,2,0,0,0,0,1,1,1,1,2,2,2,2]
  // Output: [0,2,1,0,0,0,0,2,2,2,2,1,1,1,1]
  // Explanation:
  // The odd levels have non-zero values.
  // The nodes at level 1 were 1, 2, and are 2, 1 after the reversal.
  // The nodes at level 3 were 1, 1, 1, 1, 2, 2, 2, 2, and are 2, 2, 2, 2, 1, 1,
  // 1, 1 after the reversal.

  //   auto output = reverseOddLevels(val);
  //   ASSERT_EQ(output, answer);
}

}  // namespace problem