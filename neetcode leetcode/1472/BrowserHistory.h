//
// Created by naavidmorshed on 6/24/25.
//

#ifndef BROWSERHISTORY_H
#define BROWSERHISTORY_H

using namespace std;
#include <stack>
#include <string>

class BrowserHistory {
public:
    stack<string> history;
    stack<string> future;

    explicit BrowserHistory(const string &homepage) {
        visit(homepage);
    }

    void visit(const string &url) {
        history.push(url);
        future = stack<string>();
    }

    string back(int steps) {
        while (steps > 0 && history.size() > 1) {
            future.push(history.top());
            history.pop();

            steps--;
        }

        return history.top();
    }

    string forward(int steps) {
        while (steps > 0 && !history.empty()) {
            future.push(history.top());
            history.pop();

            steps--;
        }

        return history.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */

#endif //BROWSERHISTORY_H
