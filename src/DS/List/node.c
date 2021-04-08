//
// Created by Zchary on 2021/4/5.
//

#include "node.h"

/**
 * 定义一个两个结点的链表
 */
void initSample() {
    struct Node n1, n2; // 定义两个结点变量
    NodePtr p = &n1; // 声明指针p 将结点n1的地址赋值给p
    n1->next = &n2; // n1的指针域的存放n2的地址
    NodePtr L = p; // 定义一个链表L
    n2.next = NULL;
}