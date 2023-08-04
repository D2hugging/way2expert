#ifndef _REVERSE_ODD_LEVELS_OF_BINARY_TREE_H
#define _REVERSE_ODD_LEVELS_OF_BINARY_TREE_H

#include <queue>
#include <vector>

#include "problem/tree_node.h"

namespace problem {
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

// Given the root of a perfect binary tree, reverse the node values at each odd
// level of the tree.

// For example, suppose the node values at level 3 are [2,1,3,4,7,11,29,18],
// then it should become [18,29,11,7,4,3,1,2]. Return the root of the reversed
// tree.

// A binary tree is perfect if all parent nodes have two children and all leaves
// are on the same level.

// The level of a node is the number of edges along the path between it and the
// root node.

// Constraints:

// The number of nodes in the tree is in the range [1, 214].
// 0 <= Node.val <= 105
// root is a perfect binary tree.

class SolutionReverseOddLevels {
 public:
  TreeNode* reverseOddLevels(TreeNode* root) {
    std::vector<int> cur;
    int lvl{0};
    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
      int size = q.size();
      std::vector<int> temp;
      for (int i = 0; i < size; ++i) {
        TreeNode* n = q.front();
        q.pop();
        if (lvl % 2) {
          n->val = cur[size - 1 - i];
        }
        if (n->left) {
          q.push(n->left);
          temp.push_back(n->left->val);
        }
        if (n->right) {
          q.push(n->right);
          temp.push_back(n->right->val);
        }
      }
      lvl++;
      cur = temp;
    }
    return root;
  }
};

}  // namespace problem

#endif