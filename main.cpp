#include <iostream>

#include "neetcode leetcode/26/Sol26.h"
#include "neetcode leetcode/27/Sol27.h"
#include "neetcode leetcode/1929/Sol1929.h"
#include "leetcode/2914/Sol2914.h"
#include "neetcode/designing dynamic array/DynamicArray.h"
using namespace std;
#include <vector>

int main() {
    // // 26
    // vector a = {0,1,2,2,3,0,4,2};
    // cout << Sol26::removeDuplicates(a) << endl;

    // 27
    // vector b = {0, 1, 2, 2, 3, 0, 4, 2};
    // cout << Sol27Alt::removeElement(b, 2) << endl;

    // // Dynamic Array
    // DynamicArray d = DynamicArray(1);
    // d.pushback(5);
    // cout << d.getCapacity() << endl;
    // d.printValues();
    // d.pushback(9);
    // cout << d.getCapacity() << endl;
    // d.printValues();

    vector v = {1,2,1};
    auto s = Sol1929();
    v = s.getConcatenation(v);

    for (auto i : v) {
        cout << i;
    }
    cout << endl;
}
