//
// Created by naavidmorshed on 1/8/25.
//

#ifndef SOL26_H
#define SOL26_H
#include <vector>
using namespace std;

class Sol26 {
public:
    static int removeDuplicates(vector<int> &nums) {
        int k = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i]; // this is where magic happens
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
#endif //SOL26_H
