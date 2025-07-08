//
// Created by naavidmorshed on 7/8/25.
//

#ifndef CLIMBINGSTAIRS_H
#define CLIMBINGSTAIRS_H

class ClimbingStairs {
public:
    static int climbStairs(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }

        return climbStairs(n - 2) + climbStairs(n - 1);
    }

    static int climbStairs2(int n) {
        int t1 = 1, t2 = 1, curr = 1;

        for (int i = 2; i <= n; i++) {
            t1 = t2;
            t2 = curr;
            curr = t1 + t2;
        }

        return curr;
    }
};

#endif //CLIMBINGSTAIRS_H
