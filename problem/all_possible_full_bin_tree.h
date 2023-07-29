#ifndef _ALL_POSSIBLE_FULL_BINARY_TREE_H
#define _ALL_POSSIBLE_FULL_BINARY_TREE_H

#include <unordered_map>
#include <vector>

#include "problem/tree_node.h"

namespace problem {

// Given an integer n, return a list of all possible full binary trees with n
// nodes. Each node of each tree in the answer must have Node.val == 0.

// Each element of the answer is the root node of one possible tree. You may
// return the final list of trees in any order.

// A full binary tree is a binary tree where each node has exactly 0 or 2
// children.

// Constraints:
// 1 <= n <= 20
class AllPossibleFBTs {
  std::unordered_map<int, std::vector<TreeNode*>> um_;

 public:
  std::vector<TreeNode*> allPossibleFBT(int n) {
    if (n % 2 == 0) return {};
    if (n == 1) return {new TreeNode(0)};
    if (um_.find(n) != um_.end()) return um_[n];

    std::vector<TreeNode*> output;
    for (int i = 1; i < n; i += 2) {
      auto left = allPossibleFBT(i);
      auto right = allPossibleFBT(n - i - 1);
      for (auto n1 : left) {
        for (auto n2 : right) {
          output.push_back(new TreeNode(0, n1, n2));
        }
      }
    }
    um_[n] = output;
    return output;
  }
};
}  // namespace problem

#endif