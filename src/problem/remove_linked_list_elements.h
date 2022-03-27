#ifndef REMOVE_LINKED_LIST_ELEMENTS_H_
#define REMOVE_LINKED_LIST_ELEMENTS_H_

#include "src/problem/list_node.h"

namespace problem {

// Given the head of a linked list and an integer val, remove all the nodes of
// the linked list that has Node.val == val, and return the new head.

ListNode* RemoveElementsRecursion(ListNode* head, int val) {
  if (!head) return nullptr;

  if (head->val == val) {
    return RemoveElementsRecursion(head->next, val);
  } else {
    head->next = RemoveElementsRecursion(head->next, val);
    return head;
  }
}

ListNode* RemoveElementsIteration(ListNode* head, int val) {
  if (!head) return nullptr;

  while (head && head->val == val) {
    head = head->next;
  }

  ListNode* cur = head;
  ListNode* prev = nullptr;
  while (cur) {
    if (cur->val == val) {
      prev->next = cur->next;
      cur = cur->next;
    } else {
      prev = cur;
      cur = cur->next;
    }
  }
  return head;
}

}  // namespace problem

#endif