//
// Created by naavidmorshed on 7/10/25.
//

#ifndef MERGESORT_H
#define MERGESORT_H

#include <utility>
#include <vector>
#include <string>

using namespace std;

class Pair {
public:
    int key;
    string value;

    Pair(int key, string value) : key(key), value(std::move(value)) {
    }
};

class Solution {
public:
    void divide() {

    }

    vector<Pair> mergeSort(vector<Pair> &pairs) {
        if (pairs.size() == 1) {

        } else {
            divide()
        }
    }
};

#endif //MERGESORT_H
