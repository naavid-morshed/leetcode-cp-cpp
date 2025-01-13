//
// Created by naavidmorshed on 1/13/25.
//

#ifndef SOL1929_H
#define SOL1929_H
using namespace std;
#include <vector>

class Sol1929 {
public:
    vector<int> getConcatenation(const vector<int> &nums) {
        vector<int> ans = nums;

        for (const auto &num: nums) {
            ans.push_back(num);
        }
        return ans;
    }
};
#endif //SOL1929_H
