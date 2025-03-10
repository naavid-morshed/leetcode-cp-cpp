//
// Created by naavidmorshed on 3/4/25.
//

#ifndef MERGETWOLISTS_H
#define MERGETWOLISTS_H

#include "../../neetcode/Design Singly Linked List/ListNode.h"

class MergeTwoLists {
public:
    static ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        auto dummyNode = new ListNode(0);  // Dummy node to start the list
        ListNode *current = dummyNode;      // Pointer to the current node in the merged list

        while (list1 && list2) {
            if (list1->number <= list2->number) {
                current->nextNode = list1;  // Attach the smaller node
                list1 = list1->nextNode;
            } else {
                current->nextNode = list2;  // Attach the smaller node
                list2 = list2->nextNode;
            }
            current = current->nextNode;  // Move current pointer forward
        }

        // At this point, at least one of list1 or list2 is null
        if (list1) {
            current->nextNode = list1;
        } else {
            current->nextNode = list2;
        }

        return dummyNode->nextNode;
    }
};
#endif //MERGETWOLISTS_H
