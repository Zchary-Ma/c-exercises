#include "sqlist.h"
#include "../typedef.h"
#include "../../Enums/common.h"
#include <stdlib.h>

status ListInit(Sqlist L) {
    status s = success;
    L.length = 0;
    L.list_size = INIT_SIZE;
    L.elem = (elementType *) mallo(sizeof(elementType) * L.list_size);
    if (L->elem == NULL) {
        s = fail;
    }
    return s;
}

status ListRetrieval(Sqlist L, int pos, elementType *elem) {
    status s = error_range; // initial status as range error
    if (L != NULL) {
        if ((pos - 1) > 0 && (pos - 1) < L.length) {
            *elem = L->elem[pos - 1]; // NOTE
            s = sccuess;
        }
    } else {
        s = fail;
    }
    return s;
}

status ListLocate(Sqlist L, elementType elem, int *pos) {
    status s = error_range;
    if (L != NULL) {
        for (int i = 0; i < L.length; ++i) {
            if (L.elem[i] == elem) {
                *pos = i + 1;
                s = success;
                break;
            }
        }
    } else {
        s = fail;
    }
    return s;
}

status ListInsert(Sqlist L, int pos, elementType val) {
    status s = error_range;
    if ((pos - 1) > 0 && (pos - 1) < L.length) {
        // L存在且当前顺序表使用长度小于线性表空间大小
        if (L != NULL && L.length < L.list_size) {
            for (int i = L.length - 1; i >= pos - 1; i--) {
                L.elem[i + 1] = L.elem[i];
            }
            L.elem[pos] = val;
            L.length++;
            s = success;
        }
    } else {
        s = fail;
    }
    return s;
}

status ListDelete(Sqlist L, int pos, elementType elem) {
    status s = error_range;
    if ((pos - 1) > 0 && (pos - 1) < L.length) {
        if (L != NULL && L.length < L.list_size) {
            for (int i = pos; i < L.length; ++i) {
                L.elem[i - 1] = L.elem[i];
            }
            L.length--;
            s = success;
        }
    } else {
        s = fail;
    }
    return s;
}
