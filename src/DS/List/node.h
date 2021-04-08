//
// Created by Zchary on 2021/4/5.
//

#ifndef C_NODE_H
#define C_NODE_H

#include "../typedef.h"

typedef struct Node {
    elemType elem;
    struct Node *next;
} Node, *NodePtr;

typedef NodePtr LinklistPtr // 二重指针
#endif //C_NODE_H
