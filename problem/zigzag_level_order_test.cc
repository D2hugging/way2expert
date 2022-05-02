#include "problem/zigzag_level_order.h"

#include "gtest/gtest.h"

namespace problem {

class ZigzagLevelOrderTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if their bodies would
  // be empty.

  ZigzagLevelOrderTest() {
     // You can do set-up work for each test here.
  }

  ~ZigzagLevelOrderTest() override {
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
TEST_F(ZigzagLevelOrderTest, case1) {
   // [3,9,20,null,null,15,7]
  auto node = new TreeNode(3);
  node->left = new TreeNode(9);
  node->right = new TreeNode(20);
  node->right->left = new TreeNode(15);
  node->right->right = new TreeNode(7);
  auto output = zigzagLevelOrder(node);
  EXPECT_EQ(output[0].size(), 1);
  EXPECT_EQ(output[1].size(), 2);
  EXPECT_EQ(output[2].size(), 2);

  EXPECT_EQ(output[0][0], 3);
  EXPECT_EQ(output[1][0], 20);
  EXPECT_EQ(output[1][1], 9);
  EXPECT_EQ(output[2][0], 15);
  EXPECT_EQ(output[2][1], 7);

}

}  // namespace problem
