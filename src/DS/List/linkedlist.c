//
// Created by Zchary on 2021/4/5.
//

#include "linkedlist.h"
#include <stdlib.h>

status LinkedListRetrieval(Sqlist L, int pos, elemType *elem);

status LinkedListInsert(Sqlist L, int pos, elemType elem) {
    status sta;
    Ptr p, s;
    status = LinkedListRetrieval(L, pos - 1, &p);
    if (status = success) {
        s = (LinklistPtr) malloc(sizeof(Node));
        if (s) {
            s->elem = elem;

        }

    } else {
        sta = fail
    }
    return sta;
}