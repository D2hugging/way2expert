#ifndef REVERSE_INTEGER_H_
#define REVERSE_INTEGER_H_

#include "problem/list_node.h"

namespace problem {

// The digits are stored in reverse order
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    ListNode* prev = nullptr;
    ListNode* head = nullptr;
    ListNode* tmp = nullptr;
    int addOne = 0;
    int sum = 0;

    while (l1 || l2) {
        sum = addOne + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
        addOne = sum >= 10 ? 1 : 0;
        sum %= 10;
        tmp = new ListNode(sum);
        if (!head) {
            head = tmp;
        } else {
            prev->next = tmp;
        }
        prev = tmp;
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;

    }
    if (addOne > 0) {
        prev->next = new ListNode(addOne);
    }
    return head;
}

}  // namespace problem

#endif