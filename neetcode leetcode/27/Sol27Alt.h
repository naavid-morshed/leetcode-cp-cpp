//
// Created by naavidmorshed on 1/9/25.
//

#ifndef SOL27ALT_H
#define SOL27ALT_H
#include <iostream>
#include <vector>
using namespace std;

class Sol27Alt {
public:
    static int removeElement(vector<int> &nums, const int val) {
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        for (const auto &i : nums) {
            cout << i << " ";
        }
        cout << endl;

        return k;
    }
};
#endif //SOL27ALT_H
