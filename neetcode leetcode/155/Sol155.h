//
// Created by naavidmorshed on 1/21/25.
//

#ifndef SOL155_H
#define SOL155_H
using namespace std;
#include <stack>

class Sol155 {
    stack<int> numStack;
    stack<int> minStack;

public:
    Sol155() = default;

    void push(const int val) {
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }

        numStack.push(val);
    }

    void pop() {
        if (!numStack.empty()) {
            const int poppedVal = numStack.top();
            numStack.pop();

            if (poppedVal == minStack.top()) {
                minStack.pop();
            }
        }
    }

    int top() {
        return numStack.top();
    }

    int getMin() {
        return minStack.top();
    }

    void printAll() {
        stack<int> tempStack = numStack;

        while (!tempStack.empty()) {
            cout << tempStack.top() << " ";
            tempStack.pop();
        }
        cout << endl;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
#endif //SOL155_H
