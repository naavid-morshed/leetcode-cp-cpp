//
// Created by naavidmorshed on 1/29/25.
//

#ifndef LINKED_LIST_ALT_H
#define LINKED_LIST_ALT_H
#include <vector>
using namespace std;

class LinkedListAlt {
    int *number;
    LinkedListAlt *next_node;

public:
    LinkedListAlt() {
        number = nullptr;
        next_node = nullptr;
    }

    int get(const int index) const {
        if (index == 0 && this->number == nullptr) {
            return -1;
        }
        if (index == 0) {
            return *this->number;
        }
        if (index >= this->getValues().size()) {
            return -1;
        }

        const auto *currentNode = this;
        int currentNodeIndex = 0;

        while (currentNode != nullptr) {
            currentNodeIndex++;
            currentNode = currentNode->next_node;

            if (currentNodeIndex == index) {
                return *currentNode->number;
            }
        }

        return -1;
    }

    void insertHead(const int val) {
        if (this->number == nullptr) {
            this->number = new int(val);
        } else {
            auto *newHead = new LinkedListAlt();
            newHead->number = this->number;
            newHead->next_node = this->next_node;

            this->number = new int(val);
            this->next_node = newHead;
        }
    }

    void insertTail(const int val) {
        if (this->number == nullptr) {
            this->number = new int(val);
        } else {
            auto currentNode = this;

            while (currentNode->next_node != nullptr) {
                currentNode = currentNode->next_node;
            }

            const auto newTail = new LinkedListAlt();
            newTail->number = new int(val);

            currentNode->next_node = newTail;
        }
    }

    bool remove(const int index) {
        if (index == 0) {
            return this->removeHead();
        }
        if (this->getValues().size() - 1 == index) {
            return this->removeTail();
        }
        if (index >= this->getValues().size()) {
            return false;
        }

        int currentIndex = 0;
        auto currentNode = this;

        while (currentIndex != index - 1) {
            currentNode = currentNode->next_node;
            currentIndex++;
        }

        currentNode->next_node = currentNode->next_node->next_node;
        return true;
    }

    vector<int> getValues() const {
        auto currentNode = this;
        vector<int> nums;

        if (this->number == nullptr) return nums;

        while (currentNode != nullptr) {
            nums.push_back(*currentNode->number);
            currentNode = currentNode->next_node;
        }

        return nums;
    }

    bool removeHead() {
        if (this->number == nullptr) {
            return false;
        }
        if (this->next_node == nullptr) {
            this->number = nullptr;
        } else {
            this->number = this->next_node->number;
            this->next_node = this->next_node->next_node;
        }
        return true;
    }

    bool removeTail() {
        if (this->next_node == nullptr) {
            return false;
        }

        auto currentNode = this;

        while (currentNode->next_node->next_node != nullptr) {
            currentNode = currentNode->next_node;
        }

        currentNode->next_node = nullptr;

        return true;
    }
};
#endif //LINKED_LIST_ALT_H
