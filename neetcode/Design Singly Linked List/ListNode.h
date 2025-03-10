//
// Created by naavidmorshed on 1/29/25.
//

#ifndef LISTNODE_H
#define LISTNODE_H

class ListNode {
public:
    int val;
    ListNode *next;

    explicit ListNode(const int number) : val(number), next(nullptr) {
    }

    explicit ListNode(const int number, ListNode *nextNode) : val(number), next(nextNode) {
    }
};
#endif //LISTNODE_H
