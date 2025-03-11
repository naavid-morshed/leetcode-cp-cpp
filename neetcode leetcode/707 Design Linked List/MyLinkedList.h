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
    MyLinkedList *prev;

    MyLinkedList(const int val, MyLinkedList *next, MyLinkedList *prev) : val(new int(val)), next(next), prev(prev) {
    }

    explicit MyLinkedList(const int val) : val(new int(val)), next(nullptr), prev(nullptr) {
    }

    explicit MyLinkedList() : val(nullptr), next(nullptr), prev(nullptr) {
    }

    int get(const int index) {
        if (this->val == nullptr) return -1;

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

    void addAtHead(const int val) {
        if (this->val == nullptr) {
            this->val = new int(val);

            return;
        }

        if (this->next == nullptr) {
            this->next = new MyLinkedList(*this->val, nullptr, this);
            this->val = new int(val);

            return;
        }

        const auto newSecondNode = new MyLinkedList(*this->val, this->next, this->next->prev);

        this->next->prev = newSecondNode;
        this->next = newSecondNode;
        this->val = new int(val);
    }

    void addAtTail(const int val) {
        if (this->val == nullptr) {
            this->val = new int(val);

            return;
        }

        if (this->next == nullptr) {
            this->next = new MyLinkedList(val, nullptr, this);

            return;
        }

        auto currentNode = this;

        while (currentNode->next != nullptr) {
            currentNode = currentNode->next;
        }

        currentNode->next = new MyLinkedList(val, nullptr, currentNode);
    }

    void addAtIndex(int index, const int val) {
        if (index == 0) {
            this->addAtHead(val);

            return;
        }

        int listLength = 0;
        auto currentNode = this;

        while (currentNode != nullptr) {
            currentNode = currentNode->next;
            listLength++;
        }

        if (listLength < index) {
            return;
        }
        if (listLength == index) {
            this->addAtTail(val);

            return;
        }


        int currentIndex = 0;
        index--;

        currentNode = this;

        while (currentIndex != index) {
            currentNode = currentNode->next;
            currentIndex++;
        }

        const auto newNode = new MyLinkedList(val, currentNode->next, currentNode);

        currentNode->next->prev = newNode;
        currentNode->next = newNode;
    }

    void deleteAtIndex(const int index) {
        auto currentNode = this;

        if (index == 0) {
            if (this->next == nullptr) {
                this->val = nullptr;

                return;
            }
            while (currentNode->next != nullptr) {
                currentNode->val = currentNode->next->val;
                currentNode = currentNode->next;
            }
            currentNode->prev->next = nullptr;
        } else {
            int currentIndex = 0;

            while (currentNode->next != nullptr) {
                currentNode = currentNode->next;
                currentIndex++;

                if (currentIndex == index) {
                    if (currentNode->next == nullptr) {
                        currentNode->prev->next = nullptr;

                        break;
                    }
                    currentNode->prev->next = currentNode->next;
                }
            }
        }
    }
};
#endif //MYLINKEDLIST_H
