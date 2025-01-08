//
// Created by naavidmorshed on 1/8/25.
//

#ifndef SOL26_H
#define SOL26_H
#include <vector>
using namespace std;
#include <bits/stdc++.h>

class Sol26 {
public:
    static int removeDuplicates(vector<int> &nums) {
        const vector<int> temp = nums;
        nums.clear();

        int k = 1;

        nums.push_back(temp[0]);
        for (int i = 1; i < temp.size(); i++) {
            if (temp[i] != temp[i - 1]) {
                nums.push_back(temp[i]);
                k++;
            }
        }

        for (const int i: nums) {
            cout << i << " ";
        }
        cout << endl;

        return k;
    }
};
#endif //SOL26_H
