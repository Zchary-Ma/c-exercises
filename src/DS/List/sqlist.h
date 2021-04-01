#ifndef C_SQLIST_H
#define C_SQLIST_H
#define MAX_SIZE 100
#define INIT_SIZE 100

// 静态顺序表
typedef struct {
    int length;
    int data[MAX_SIZE];
} SqList;

int ListInsert();


#endif //C_SQLIST_H
