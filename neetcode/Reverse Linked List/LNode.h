//
// Created by naavidmorshed on 2/10/25.
//

#ifndef LNODE_H
#define LNODE_H

struct LNode {
    int val;
    LNode *next;

    LNode() : val(0), next(nullptr) {
    }

    explicit LNode(const int x) : val(x), next(nullptr) {
    }

    LNode(const int x, LNode *next) : val(x), next(next) {
    }
};
#endif //LNODE_H
