#ifndef ZIGZAG_LEVEL_ORDER_H_
#define ZIGZAG_LEVEL_ORDER_H_

#include <queue>
#include <vector>

#include "problem/tree_node.h"

namespace problem {

std::vector<std::vector<int>> zigzagLevelOrder(TreeNode* root) {
  std::vector<std::vector<int>> ret;
  if (!root) return ret;
  std::queue<TreeNode*> q;
  q.push(root);
  bool flag = true;
  while (!q.empty()) {
    size_t size = q.size();
    std::vector<int> level(size);
    for (size_t i = 0; i < size; ++i) {
      auto n = q.front();
      q.pop();

      size_t idx = flag ? i : size - 1 - i;
      level[idx] = n->val;
      if (n->left) q.push(n->left);
      if (n->right) q.push(n->right);
    }
    flag = !flag;
    ret.push_back(level);
  }
  return ret;
}

}  // namespace problem

#endif