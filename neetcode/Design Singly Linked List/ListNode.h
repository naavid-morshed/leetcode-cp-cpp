//
// Created by naavidmorshed on 1/29/25.
//

#ifndef LISTNODE_H
#define LISTNODE_H

class ListNode {
public:
    int number;
    ListNode *nextNode;

    explicit ListNode(const int number) : number(number), nextNode(nullptr) {
    }

    explicit ListNode(const int number, ListNode *nextNode) : number(number), nextNode(nextNode) {
    }
};
#endif //LISTNODE_H
