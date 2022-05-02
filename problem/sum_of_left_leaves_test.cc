#include "problem/sum_of_left_leaves.h"

#include "gtest/gtest.h"

namespace problem {

class SumOfLeftLeavesTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  SumOfLeftLeavesTest() {
    // You can do set-up work for each test here.
  }

  ~SumOfLeftLeavesTest() override {
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
TEST_F(SumOfLeftLeavesTest, case1) {
  // Input: root = [3,9,20,null,null,15,7]
  // Output: 24
  // Explanation: There are two left leaves in the binary tree, with values 9
  // and 15 respectively.
  auto node = new TreeNode(3);
  node->left = new TreeNode(9);
  node->right = new TreeNode(20);
  node->right->left = new TreeNode(15);
  node->right->right = new TreeNode(7);

  auto output = SumOfLeftLeaves(node);
  EXPECT_EQ(output, 24);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(SumOfLeftLeavesTest, case2) {
  // Input: root = [1]
  // Output: 0
  auto node = new TreeNode(1);
  auto output = SumOfLeftLeaves(node);
  EXPECT_EQ(output, 0);
}

}  // namespace problem
