#ifndef REVERSE_INTEGER_H_
#define REVERSE_INTEGER_H_

#include "src/list_node/list_node.h"

namespace problem {

// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing
// together the nodes of the first two lists.

// Return the head of the merged linked list.

ListNode* MergeTwoLists(ListNode* list1, ListNode* list2) {
  if (!list1) return list2;
  if (!list2) return list1;

  ListNode* head = list1;
  if (list1->val > list2->val) {
    head = list2;
    list2 = list2->next;
  } else {
    list1 = list1->next;
  }

  ListNode* cur = head;
  while (list1 && list2) {
    if (list1->val < list2->val) {
      cur->next = list1;
      list1 = list1->next;
    } else {
      cur->next = list2;
      list2 = list2->next;
    }
    cur = cur->next;
  }
  if (list1) {
    cur->next = list1;
  }
  if (list2) {
    cur->next = list2;
  }
  return head;
}

}  // namespace problem

#endif