//
// Created by naavidmorshed on 1/12/25.
//

#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

class DynamicArray {
    int *numArr;
    int numArrSize;

public:
    DynamicArray(int capacity) {
        numArr = new int[capacity];
        numArrSize = capacity;
    }

    int get(int i) {
        return numArr[i];
    }

    void set(int i, int n) {
        numArr[i] = n;
    }

    void pushback(int n) {
        if (numArr[getCapacity() - 1] != 0) {
            resize();
        }

        for (int i = 0; i < getCapacity(); i++) {
            if (numArr[i] == 0) {
                numArr[i] = n;
                break;
            }
        }
    }

    int popback() {
        const int poppedVal = numArr[getSize() - 1];
        numArr[getSize() - 1] = 0;

        return poppedVal;
    }

    void resize() {
        int* temp = new int[getCapacity() * 2];

        for (int i = 0; i < getCapacity(); i++) {
            temp[i] = numArr[i];
        }

        numArr = temp;
        numArrSize *= 2;
    }

    int getSize() {
        int size = 0;

        for (int i = 0; i < getCapacity(); i++) {
            if (numArr[i] == 0) {
                break;
            }

            size++;
        }

        return size;
    }

    int getCapacity() {
        return numArrSize;
    }

    void printValues() {
        for (int i = 0; i < getCapacity(); i++) {
            cout << numArr[i] << " ";
        }
        cout << endl;
    }
};
#endif //DYNAMIC_ARRAY_H
