#ifndef LIST_NODE_H_
#define LIST_NODE_H_

namespace problem {

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

}  // namespace problem

#endif