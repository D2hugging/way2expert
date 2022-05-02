#ifndef SUM_OF_LEFT_LEAVES_H_
#define SUM_OF_LEFT_LEAVES_H_

#include "problem/tree_node.h"

namespace problem {

// Given the root of a binary tree, return the sum of all left leaves.

// A leaf is a node with no children. A left leaf is a leaf that is the left
// child of another node.
int SumOfLeftLeaves(TreeNode* root) {
  if (!root) return 0;
  if (root->left && !root->left->left && !root->left->right) {
    return root->left->val + SumOfLeftLeaves(root->right);
  }
  return SumOfLeftLeaves(root->left) + SumOfLeftLeaves(root->right);
}

}  // namespace problem

#endif