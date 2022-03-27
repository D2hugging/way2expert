#ifndef LEVEL_ORDER_H_
#define LEVEL_ORDER_H_

#include <vector>
#include <queue>
#include "src/problem/tree_node.h"

namespace problem {

std::vector<std::vector<int>> levelOrder(TreeNode* root) {
  std::vector<std::vector<int>> ans;
  if (!root) return ans;
  std::queue<TreeNode*> q;
  q.push(root);
  while (!q.empty()) {
    size_t size = q.size();
    std::vector<int> tmp;
    while (size--) {
      TreeNode* n = q.front();
      q.pop();
      tmp.push_back(n->val);
      if (n->left) q.push(n->left);
      if (n->right) q.push(n->right);
    }
    ans.push_back(tmp);
  }
  return ans;
}

}  // namespace problem

#endif