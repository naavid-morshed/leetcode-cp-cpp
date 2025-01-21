//
// Created by naavidmorshed on 1/21/25.
//

#ifndef SOL155_H
#define SOL155_H
using namespace std;
#include <stack>

class Sol155 {
    stack<int> numStack;
    int minVal = 0;

public:
    Sol155() = default;

    void push(const int val) {
        if (numStack.empty() || minVal > val) {
            minVal = val;
        }

        numStack.push(val);
    }

    void pop() {
        if (!numStack.empty()) {
            numStack.pop();
        }
    }

    int top() {
        return numStack.top();
    }

    int getMin() {
        return minVal;
    }

    void printAll() {
        std::stack<int> tempStack = numStack;  // Make a copy of the stack to avoid modifying the original
        while (!tempStack.empty()) {
            std::cout << tempStack.top() << " ";
            tempStack.pop();
        }
        std::cout << std::endl;
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
