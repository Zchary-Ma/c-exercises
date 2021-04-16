#include <stdio.h>
#include <stdlib.h>
#include "sqlist-implementation.h"

status InitList(Sqlist L) {
    status s = fail;
    if (L == NULL) {
        L.elem = (elemType *) malloc((LIST_INIT_SIZE + 1) * sizeof(elemType));
        if (L.elem) {
            L.list_ize = LIST_INIT_SIZE;
            L.length = 0;
            s = success;
        }

    }
    return s;
}

int ListSize(Sqlist L) {
    return L.length;
}

bool IsListEmpty(Sqlist L) {
    return (L.length == 0);
}

void DestoryList(Sqlist L) {
    if (L && L.elem) {
        free(L.elem);
        L.elem = NULL;
        L.length = 0;
    }
}

void ClearList(Sqlist L) {
    if (L) {
        L.length = 0;
    }
}

status ListInsert(Sqlist L, elemType val, int pos) {
    status s = error_range;
    if (L) {
        if (pos >= 1 && pos <= length + 1) {
            if (L.length < L.list_ize) {
                for (int i = L.length; i >= pos; --i) {
                    L.elem[i + 1] = L.elem[i];
                }
                L.elem[pos] = val;
                L.length++;
            }
        }
    }
    return s
}

status ListRetrieve(Sqlist L, int pos, elemType *elem) {
    status s = error_range;
    if (L) {
        // check position property
        if (pos >= 1 && pos <= L.length) {
            *elem = L.length[pos];
            s = success;
        }
    }
    return s;
}

status ListFinPos(Sqlist L, elemType val, int *pos) {
    status s = error_range;
    if (L) {
        for (int i = 1; i < L.length; ++i) {
            if (L.elem[i] == val) {
                *pos = i;
                s = success;
                break;
            }
        }
    }
    return s;
}

status ListDelete(Sqlist L, int pos) {
    status s = error_range;
    if (L) {
        if (pos >= 1 && pos <= L.length) {
            for (int i = pos + 1; i <= L.length; ++i) {
                L.elem[i - 1] = L.elem[i];

            }
            L.length--;
            s = success;
        }
    }
    return s;
}


status ListPrior(Sqlist L, int pos, elemType *elem) {
    status s = error_range;
    if (L) {
        if (pos > 1 && pos < L.length) {
            *elem = L.elem[pos - 1];
            s = success;
        }
    }
    return s;

}

status ListNext(Sqlist L, int pos, elemType *elem) {
    status s = error_range;
    if (L) {
        if (pos >= 1 && pos < L.length - 1) {
            *elem = L.elem[pos + 1];
            s = success;
        }
    }
    return s;
}

int main() {

    return 0;
}