//
// Created by Zchary on 2021/4/5.
//

#ifndef C_LINKEDLIST_H
#define C_LINKEDLIST_H

#include "node.h"
#include "../../Enums/common.h"
#include "../typedef.h"
#include "./sqlist.h"

status LinkedListRetrieval(Sqlist L, int pos, elemType *elem);

/**
 * 插入单个结点操作
 * @param L
 * @param pos
 * @param elem
 * @return
 */
status LinkedListInsert(Sqlist L, int pos, elemType elem);

status LinkedListInsert();

status LinkedListInsert();

status LinkedListInsert();


#endif //C_LINKEDLIST_H
