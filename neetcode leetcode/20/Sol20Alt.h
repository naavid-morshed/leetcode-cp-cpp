//
// Created by naavidmorshed on 1/13/25.
//

#ifndef Sol20Alt_H
#define Sol20Alt_H
using namespace std;
#include <iostream>
#include <stack>

class Sol20Alt {
public:
    bool isValid(string s) {
        if (s.length() % 2 != 0 || s[0] == ')' || s[0] == '}' || s[0] == ']') {
            return false;
        }

        stack<char> charStack;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                charStack.push(c);
            } else if (
                 charStack.empty() ||
                 (c == ')' && charStack.top() != '(') ||
                 (c == '}' && charStack.top() != '{') ||
                 (c == ']' && charStack.top() != '[')
            ) {
                return false;
            } else {
                charStack.pop();
            }
        }

        return charStack.empty();
    }
};
#endif // Sol20Alt_H
