#include "src/inorder_traversal/inorder_traversal.h"

#include "gtest/gtest.h"

namespace problem {

class InorderTraversalTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  InorderTraversalTest() {
    // You can do set-up work for each test here.
  }

  ~InorderTraversalTest() override {
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
TEST_F(InorderTraversalTest, case1) {
  // Input: root = [1,null,2,3]
  // Output: [1,3,2]
  auto node = new TreeNode(1);
  node->right = new TreeNode(2);
  node->right->left = new TreeNode(3);
  auto output = InorderTraversal(node);
  EXPECT_EQ(output.size(), 3);
  EXPECT_EQ(output[0], 1);
  EXPECT_EQ(output[1], 3);
  EXPECT_EQ(output[2], 2);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(InorderTraversalTest, case2) {
  // Input: root = []
  // Output: []
  auto node = nullptr;
  auto output = InorderTraversal(node);
  EXPECT_EQ(output.size(), 0);
}

// Tests that the Foo::Bar() method does Abc.
TEST_F(InorderTraversalTest, case3) {
  // Input: root = [1]
  // Output: [1]
  auto node = new TreeNode(1);
  auto output = InorderTraversal(node);
  EXPECT_EQ(output.size(), 1);
  EXPECT_EQ(output[0], 1);
}

}  // namespace problem
