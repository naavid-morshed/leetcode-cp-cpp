//
// Created by naavidmorshed on 6/29/25.
//

#ifndef MYSTACK_H
#define MYSTACK_H
using namespace std;

class MyStack {
    queue<int> *intStack;

public:
    MyStack() {
        intStack = new queue<int>;
    }

    void push(int x) {
        intStack->push(x);
    }

    int pop() {
        const auto temp = new queue<int>;

        while (intStack->size() != 1) {
            temp->push(intStack->front());
            intStack->pop();
        }

        int poppedVal = intStack->front();
        intStack = temp;

        return poppedVal;
    }

    int top() {
        auto temp = new queue<int>;

        while (intStack->size() > 1) {
            temp->push(intStack->front());
            intStack->pop();
        }
        int topVal = intStack->front();
        temp->push(intStack->front());
        intStack = temp;

        return topVal;
    }

    bool empty() {
        return intStack->empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
#endif //MYSTACK_H
