//
// Created by naavidmorshed on 6/24/25.
//

#ifndef BROWSERHISTORYALT_H
#define BROWSERHISTORYALT_H

using namespace std;
#include <string>

#include <string>
#include <algorithm>

class BrowserHistoryAlt {
    std::string arr[5000];
    int pres, right;

public:
    explicit BrowserHistoryAlt(const std::string& homepage) {
        pres = 0;
        right = 0;
        arr[pres] = homepage;
    }

    void visit(const std::string& url) {
        arr[++pres] = url;
        right = pres;
    }

    string back(int steps) {
        pres = std::max(pres - steps, 0);
        return arr[pres];
    }

    string forward(int steps) {
        pres = std::min(pres + steps, right);
        return arr[pres];
    }
};

#endif //BROWSERHISTORYALT_H
