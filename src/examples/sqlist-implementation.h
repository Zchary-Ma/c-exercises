#pragma once
#define bool int
#define LIST_INIT_SIZE 50
enum status {
    success,
    fail,
    error_range
};

typedef char elemType;

typedef struct Sqlist {
    elemType *elem;
    int length;
    int list_ize;
} Sqlist, *SqlistPtr, *Ptr

status InitList(Sqlist L);

int ListSize(Sqlist L);

bool IsListEmpty(Sqlist L);

void DestoryList(Sqlist L);

void ClearList(Sqlist L);

status ListInsert(Sqlist L, elemType val, int pos);

status ListDelete(Sqlist L, int pos);

status ListRetrieve(Sqlist L, int pos, elemType *elem);

status ListFinPos(Sqlist L, elemType val, int *pos);

status ListPrior(Sqlist L, int pos, elemType *elem);

status ListNext(Sqlist L, int pos, elemType *elem);

