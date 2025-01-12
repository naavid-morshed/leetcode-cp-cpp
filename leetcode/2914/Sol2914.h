#ifndef SOL_H
#define SOL_H

#include <iostream>
using namespace std;

class Sol2914 {
public:
    static int minChanges(const string &s) {
        int minChanges = 0;

        for (int i = 0; i < s.length(); i += 2) {
            if (s[i] != s[i + 1]) {
                minChanges++;
            }
        }
        return minChanges;
    }
};
#endif
