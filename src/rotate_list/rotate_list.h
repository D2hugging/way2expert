#ifndef REVERSE_INTEGER_H_
#define REVERSE_INTEGER_H_

#include "src/list_node/list_node.h"

namespace foo {

// Given the head of a linked list, rotate the list to the right by k places.
// The number of nodes in the list is in the range [0, 500].
// -100 <= Node.val <= 100
// 0 <= k <= 2 * 109
ListNode* RotateRight(ListNode* head, int k) {
  if (!head || !head->next) return head;
  auto cur = head;
  int size = 1;
  while (cur->next) {
    size++;
    cur = cur->next;
  }
  cur->next = head;
  cur = head;

  for (int i = 0; i < size - (k % size) - 1; ++i) {
    cur = cur->next;
  }

  auto new_head = cur->next;
  cur->next = nullptr;
  return new_head;
}

}  // namespace foo

#endif