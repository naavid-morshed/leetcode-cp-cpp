#include <iostream>

#include "neetcode leetcode/26/Sol26.h"
#include "neetcode leetcode/27/Sol27.h"
#include "neetcode leetcode/27/Sol27Alt.h"
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

    // Dynamic Array
    DynamicArray d = DynamicArray(5);
    cout << d.getCapacity() << endl;
    cout << d.getSize() << endl;

    for (int i = 0; i < 10; i++) {
        d.set(i, i + 1);
    }

    d.printValues();
    cout << d.popback() << endl;
    d.printValues();
    cout << d.getSize() << endl;
}
