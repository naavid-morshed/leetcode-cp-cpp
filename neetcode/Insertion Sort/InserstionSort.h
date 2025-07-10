//
// Created by naavidmorshed on 7/10/25.
//

#ifndef INSERSTIONSORT_H
#define INSERSTIONSORT_H

#include <string>
#include <utility>
#include <vector>

using namespace std;

class Pair {
public:
    int key;
    string value;

    Pair(int key, string value) : key(key), value(std::move(value)) {
    }
};

class InserstionSort {
public:
    static vector<vector<Pair> > insertionSort(vector<Pair> &pairs) {
        if (pairs.empty()) {
            return {};
        }

        vector<vector<Pair> > state;
        state.push_back(pairs);

        for (int i = 1; i < pairs.size(); i++) {
            for (int j = i; j > 0; j--) {
                if (pairs[j - 1].key > pairs[j].key) {
                    const auto temp = pairs[j - 1];
                    pairs[j - 1] = pairs[j];
                    pairs[j] = temp;
                }
            }
            state.push_back(pairs);
        }

        return state;
    }
};

#endif //INSERSTIONSORT_H
