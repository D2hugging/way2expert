#ifndef REMOVE_NTH_NODE_FROM_END_H_
#define REMOVE_NTH_NODE_FROM_END_H_

#include "src/problem/list_node.h"

namespace problem {

// Given the head of a linked list, remove the nth node from the end of the list
// and return its head.

ListNode* RemoveNthFromEnd(ListNode* head, int n) {
  ListNode* fast = head;
  ListNode* slow = head;
  while (n--) {
    fast = fast->next;
  }
  if (!fast) {
    return head->next;
  }
  while (fast->next) {
    slow = slow->next;
    fast = fast->next;
  }
  slow->next = slow->next->next;
  return head;
}

}  // namespace problem

#endif