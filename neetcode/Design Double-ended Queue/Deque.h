//
// Created by naavidmorshed on 6/25/25.
//

#ifndef DEQUE_H
#define DEQUE_H
#include "DoublyLinkedList.h"

class Deque {
public:
    DoublyLinkedList* head;

    Deque() {
        head = new DoublyLinkedList();
    }

    bool isEmpty() {
        return head->val == nullptr;
    }

    void append(int value) {
        head->addAtTail(value);
    }

    void appendleft(int value) {
        head->addAtHead(value);
    }

    int pop() {
        auto currentNode = head;
        int poppedVal;

        if (currentNode->val == nullptr) {
            return -1;
        }

        while (currentNode->next != nullptr) {
            currentNode = currentNode->next;
        }

        poppedVal = *currentNode->val;
        currentNode->prev->next = nullptr;

        return poppedVal;
    }

    int popleft() {

    }
};

#endif //DEQUE_H
