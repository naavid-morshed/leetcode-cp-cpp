//
// Created by naavidmorshed on 6/25/25.
//

#ifndef DEQUE_H
#define DEQUE_H
#include "DoublyLinkedList.h"

class Deque {
public:
    DoublyLinkedList *head;

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

        if (currentNode->val == nullptr) {
            return -1;
        }

        if (head->next == nullptr) {
            int val = *head->val;
            head = new DoublyLinkedList();

            return val;
        }

        while (currentNode->next != nullptr) {
            currentNode = currentNode->next;
        }

        const int poppedVal = *currentNode->val;
        currentNode->prev->next = nullptr;

        return poppedVal;
    }

    int popleft() {
        if (head->val == nullptr) {
            return -1;
        }

        if (head->next == nullptr) {
            int poppedVal = *head->val;
            head = new DoublyLinkedList();

            return poppedVal;
        }

        const int poppedVal = *head->val;

        head->next->prev = nullptr;
        head = head->next;

        return poppedVal;
    }
};

#endif //DEQUE_H
