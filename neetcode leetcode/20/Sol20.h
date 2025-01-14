//
// Created by naavidmorshed on 1/13/25.
//

#ifndef SOL20_H
#define SOL20_H
#include <iostream>
using namespace std;

class Sol20 {
public:
    bool isValid(string s) {
        if (s.length() % 2 != 0) {
            return false;
        }

        vector<char> charStack;

        for (int i = 0; i < s.length(); i++) {
            if (charStack.empty() && (s.at(i) == ')' || s.at(i) == '}' || s.at(i) == ']')) {
                return false;
            }

            if (s.at(i) == '(' || s.at(i) == '{' || s.at(i) == '[') {
                charStack.push_back(s[i]);
            } else if (
                (charStack.back() == '(' && s.at(i) == ')') ||
                (charStack.back() == '{' && s.at(i) == '}') ||
                (charStack.back() == '[' && s.at(i) == ']')
            ) {
                charStack.pop_back();
            } else {
                charStack.push_back(s.at(i));
            }
        }

        return charStack.empty();
    }
};
#endif // SOL20_H
