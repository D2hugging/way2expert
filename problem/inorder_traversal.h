#ifndef INORDER_ORDER_H_
#define INORDER_ORDER_H_

#include <stack>
#include <vector>

#include "problem/tree_node.h"

namespace problem {

std::vector<int> InorderTraversal(TreeNode* root) {
  if (!root) return {};
  std::vector<int> ans;
  std::stack<TreeNode*> st;
  TreeNode* cur = root;
  while (cur || !st.empty()) {
    if (cur) {
      st.push(cur);
      cur = cur->left;
    } else {
      auto n = st.top();
      st.pop();
      ans.push_back(n->val);
      cur = n->right;
    }
  }
  return ans;
}

}  // namespace problem

#endif