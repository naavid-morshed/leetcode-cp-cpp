//
// Created by naavidmorshed on 1/22/25.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "ListNode.h"
using namespace std;
#include <vector>

class LinkedList {
    ListNode *head;

public:
    LinkedList() {
        head = nullptr;
    }

    int get(const int index) const {
        if (index == 0) return head->number;

        int currentIndex = 0;
        const auto *currentNode = head;

        while (currentNode != nullptr) {
            currentNode = currentNode->nextNode;
            currentIndex++;

            if (index == currentIndex) {
                return currentNode->number;
            }
        }
        return -1;
    }

    void insertHead(const int val) {
        if (head == nullptr) {
            head = new ListNode(val);
        } else {
            auto *newHead = new ListNode(val);
            newHead->nextNode = head;

            head = newHead;
        }
    }

    void insertTail(const int val) {
        if (head == nullptr) {
            head = new ListNode(val);
        } else {
            auto *newTail = new ListNode(val);
            auto *currentNode = head;

            while (currentNode->nextNode != nullptr) {
                currentNode = currentNode->nextNode;
            }

            currentNode->nextNode = newTail;
        }
    }

    bool remove(int index) const {
        auto *currentNode = head;
        int currentIndex = 0;
        index--;

        while (currentIndex != index) {
            currentNode = currentNode->nextNode;
            currentIndex++;
        }

        currentNode->nextNode = currentNode->nextNode->nextNode;
        return true;
    }

    vector<int> getValues() const {
        vector<int> vals;

        const ListNode *currentNode = head;

        while (currentNode != nullptr) {
            vals.push_back(currentNode->number);
            currentNode = currentNode->nextNode;
        }

        return vals;
    }
};
#endif //LINKEDLIST_H
