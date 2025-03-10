//
// Created by naavidmorshed on 3/4/25.
//

#ifndef MERGETWOLISTS_H
#define MERGETWOLISTS_H

#include "../../neetcode/Design Singly Linked List/ListNode.h"

class MergeTwoLists {
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        const auto dummyNode = new ListNode(0);
        ListNode *current = dummyNode;

        while (list1 && list2) {
            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }

        if (list1) {
            current->next = list1;
        } else {
            current->next = list2;
        }

        return dummyNode->next;
    }
};
#endif //MERGETWOLISTS_H
