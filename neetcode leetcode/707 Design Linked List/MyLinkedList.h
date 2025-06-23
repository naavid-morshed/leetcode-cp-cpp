//
// Created by naavidmorshed on 3/11/25.
//

#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

using namespace std;

class MyLinkedList {
public:
    int *val;
    MyLinkedList *next;

    MyLinkedList() {
        this->val = nullptr;
        this->next = nullptr;
    }

    int get(int index) {
        if (this->val == nullptr) {
            return -1;
        }

        auto currentNode = this;
        int currentIndex = 0;

        while (currentNode != nullptr) {
            if (currentIndex == index) {
                return *currentNode->val;
            }

            currentNode = currentNode->next;
            currentIndex++;
        }

        return -1;
    }

    void addAtHead(int val) {
        if (this->val == nullptr) {
            this->val = new int(val);
        } else {
            auto node = new MyLinkedList();
            node->val = this->val;
            node->next = this->next;

            this->val = new int(val);
            this->next = node;
        }
    }

    void addAtTail(int val) {
        if (this->val == nullptr) {
            addAtHead(val);
            return;
        }

        auto currentNode = this;

        while (currentNode->next != nullptr) {
            currentNode = currentNode->next;
        }

        currentNode->next = new MyLinkedList();
        currentNode->next->val = new int(val);
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
        } else {
            auto currentNode = this;
            int currentIndex = 0;

            while (currentIndex != index - 1) {
                currentNode = currentNode->next;
                currentIndex++;
            }

            if (currentNode->next == nullptr) {
                addAtTail(val);
                return;
            }

            auto newNode = new MyLinkedList();
            newNode->val = new int(val);
            newNode->next = currentNode->next;
            currentNode->next = newNode;
        }
    }

    void deleteAtIndex(int index) {
        if (index == 0) {
            auto currentNode = this;

            while (currentNode->next != nullptr) {
                currentNode->val = currentNode->next->val;
                currentNode = currentNode->next;
            }

            currentNode = this;

            while (currentNode->next->next != nullptr) {
                currentNode = currentNode->next;
            }
            currentNode->next = nullptr;
        } else {
            auto currentNode = this;
            int currentIndex = 0;

            while (currentIndex != index - 1) {
                currentNode = currentNode->next;
                currentIndex++;
            }

            if (currentNode->next->next == nullptr) {
                currentNode->next = nullptr;
            } else {
                currentNode->next = currentNode->next->next;
            }
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

#endif //MYLINKEDLIST_H
