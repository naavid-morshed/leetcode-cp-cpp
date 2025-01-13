//
// Created by naavidmorshed on 1/13/25.
//

#ifndef SOL1929ALT_H
#define SOL1929ALT_H
using namespace std;
#include <vector>

class Sol1929Alt {
public:
    vector<int> getConcatenation(const vector<int> &nums, const int concatXtimes) {
        vector<int> ans;

        for (int times = 1; times <= concatXtimes; times++) {
            for (const auto &num: nums) {
                ans.push_back(num);
            }
        }

        return ans;
    }
};
#endif //SOL1929ALT_H
