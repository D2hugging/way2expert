#ifndef MIDDLE_OF_LIST_H_
#define MIDDLE_OF_LIST_H_

#include "src/list_node/list_node.h"

namespace foo {

// Given the head of a singly linked list, return the middle node of the linked
// list.

// If there are two middle nodes, return the second middle node.

ListNode* MiddleNode(ListNode* head) {
  ListNode* slow = head;
  ListNode* fast = head->next;
  while (slow && fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
  }
  return fast ? slow->next : slow;
}

}  // namespace foo

#endif