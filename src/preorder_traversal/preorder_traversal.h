#ifndef PREORDER_ORDER_H_
#define PREORDER_ORDER_H_

#include <stack>
#include <vector>

#include "src/tree_node/tree_node.h"

namespace problem {

std::vector<int> PreorderTraversal(TreeNode* root) {
  if (!root) return {};
  std::vector<int> ans;
  std::stack<TreeNode*> st;
  TreeNode* cur = root;
  while (cur || !st.empty()) {
    if (cur) {
      st.push(cur);
      ans.push_back(cur->val);
      cur = cur->left;
    } else {
      auto n = st.top();
      st.pop();
      cur = n->right;
    }
  }
  return ans;
}

}  // namespace problem

#endif