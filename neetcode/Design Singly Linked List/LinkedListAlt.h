//
// Created by naavidmorshed on 1/29/25.
//

#ifndef LINKEDLISTALT_H
#define LINKEDLISTALT_H
#include <vector>
using namespace std;

class LinkedListAlt {
    int number{};
    LinkedListAlt *nextNode;

public:
    LinkedListAlt() {
        nextNode = nullptr;
    }

    int get(const int index) const {
        if (index == 0) {
            return this->number;
        }

        const auto *currentNode = nextNode;
        int currentNodeIndex = 0;

        while (currentNode != nullptr) {
            currentNodeIndex++;
            currentNode = currentNode->nextNode;

            if (currentNodeIndex == index) {
                return currentNode->number;
            }
        }

        return -1;
    }

    void insertHead(const int val) const {
        LinkedListAlt newHead;
        newHead.number = val;
        newHead.nextNode = nextNode;
    }

    void insertTail(const int val) const {
        auto *currentNode = nextNode;

        while (currentNode->nextNode != nullptr) {
            currentNode = currentNode->nextNode;
        }

        auto *newTail = new LinkedListAlt();
        newTail->number = val;

        currentNode->nextNode = newTail;
    }

    bool remove(int index) {
        int currentIndex = 0;
        index--;
        auto currentNode = nextNode;

        while (currentIndex != index) {
            currentNode = currentNode->nextNode;
            currentIndex++;
        }

        if (currentNode->nextNode->nextNode != nullptr) {
            currentNode->nextNode = currentNode->nextNode->nextNode;
        }

        currentNode->nextNode = nullptr;
        return true;
    }

    vector<int> getValues() {
    }
};
#endif //LINKEDLISTALT_H
