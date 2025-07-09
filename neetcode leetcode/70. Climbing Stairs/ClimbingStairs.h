//
// Created by naavidmorshed on 7/8/25.
//

#ifndef CLIMBINGSTAIRS_H
#define CLIMBINGSTAIRS_H

class ClimbingStairs {
public:
    // O(2^n) Solution
    static int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }

        return climbStairs(n - 2) + climbStairs(n - 1);
    }

    // O(n) loop solution
    static int climbStairs2(int n) {
        int t1 = 1, t2 = 1, curr = 1;

        for (int i = 2; i <= n; i++) {
            t1 = t2;
            t2 = curr;
            curr = t1 + t2;
        }

        return curr;
    }

    // O(n) recursive solution
    static int climbStairs3(int n) {
        return helper(n, 1, 1, 2);
    }

    static int helper(int n, int t1, int t2, int i) {
        if (n == 0 || n == 1) return 1;
        if (i > n) return t2;

        return helper(n, t2, t1 + t2, i + 1);
    }
};

#endif //CLIMBINGSTAIRS_H
