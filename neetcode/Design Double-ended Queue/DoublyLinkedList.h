//
// Created by naavidmorshed on 6/25/25.
//

#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

class DoublyLinkedList {
public:
    int *val = nullptr;
    DoublyLinkedList *next = nullptr;
    DoublyLinkedList *prev = nullptr;

    DoublyLinkedList() = default;

    DoublyLinkedList(const int val, DoublyLinkedList *prev) {
        this->val = new int(val);
        this->prev = prev;
    }

    DoublyLinkedList(const int val, DoublyLinkedList *prev, DoublyLinkedList *next) {
        this->val = new int(val);
        this->prev = prev;
        this->next = next;
    }

    void addAtHead(const int val) {
        if (this->val == nullptr) {
            this->val = new int(val);
        } else {
            const auto shiftingHead = new DoublyLinkedList(*this->val, this, this->next);

            if (this->next != nullptr) {
                this->next->prev = shiftingHead;
            }

            this->val = new int(val);
            this->next = shiftingHead;
        }
    }

    void addAtTail(const int val) {
        if (this->val == nullptr) {
            addAtHead(val);
        } else {
            auto tail = this;

            while (tail->next != nullptr) {
                tail = tail->next;
            }

            tail->next = new DoublyLinkedList(val, tail);
        }
    }
};

#endif //DOUBLYLINKEDLIST_H
