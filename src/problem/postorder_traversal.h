#ifndef POSTORDER_TRAVERSAL_H_
#define POSTORDER_TRAVERSAL_H_

#include <stack>
#include <vector>

#include "src/problem/tree_node.h"

namespace problem {

std::vector<int> PostorderTraversal(TreeNode* root) {
  std::vector<int> ret;
  if (!root) return ret;
  std::stack<TreeNode*> s;
  TreeNode* curr = root;
  TreeNode* last = nullptr;
  while (curr || !s.empty()) {
    if (curr) {
      s.push(curr);
      curr = curr->left;
    } else {
      auto node = s.top();
      if (node->right && last != node->right) {
        curr = node->right;
      } else {
        ret.push_back(node->val);
        last = node;
        s.pop();
      }
    }
  }
  return ret;
}

}  // namespace problem

#endif