#include <iostream>

#include "neetcode leetcode/27/Sol27.h"
#include "problems/2914/Sol2914.h"
using namespace std;
#include <vector>

int main() {
    // // 26
    vector a = {0,1,2,2,3,0,4,2};
    // cout << Sol26::removeDuplicates(a) << endl;

    cout << Sol27::removeElement(a, 2) << endl;
}
