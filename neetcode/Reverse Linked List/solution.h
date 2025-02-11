#ifndef Solution_H
#define Solution_H

using namespace std;

#include <algorithm>
#include "LNode.h"
#include <vector>
#include <iostream>

class Solution {
public:
    static LNode *reverseList(LNode *head) {
        LNode* prev = nullptr;
        LNode* curr = head;

        while (curr != nullptr) {
            LNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};
#endif
