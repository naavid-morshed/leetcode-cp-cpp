#include <iostream>

#include "neetcode leetcode/26/Sol26.h"
#include "problems/2914/Sol2914.h"
using namespace std;
#include <vector>

int main() {
    // 26
    vector a = {1, 1, 1, 2, 3, 3, 3, 4, 4, 5, 5};
    // vector a = {1, 1, 2, 3, 4};
    cout << Sol26::removeDuplicates(a) << endl;
}
