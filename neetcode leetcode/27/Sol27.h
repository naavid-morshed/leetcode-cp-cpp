//
// Created by naavidmorshed on 1/8/25.
//

#ifndef SOL27_H
#define SOL27_H
#include <iostream>
#include <vector>
using namespace std;

class Sol27 {
public:
    static int removeElement(vector<int> &nums, const int val) {
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
                i--;
            } else {
                k++;
            }
        }

        for (const auto num: nums) {
            cout << num << " ";
        }
        cout << endl;

        return k;
    }
};
#endif //SOL27_H
