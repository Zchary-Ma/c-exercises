#ifndef C_SQLIST_H
#define C_SQLIST_H
#define MAX_SIZE 100
#define INIT_SIZE 100
#define LIST_INCREMENT 10

#include "../../Enums/common.h"
#include "../typedef.h"

// 静态顺序表 存储空间长度固定 (以下操作实现均以动态顺序表为准)
typedef struct {
    int length;
    int data[MAX_SIZE];
} SSqList;


// 动态顺序表 分配动态空间
typdef struct {
    elementType *elem;
    int length; // 顺序表长度
    int list_size; // 顺序表空间大小
} Sqlist, *Ptr;

typedef Ptr SqlistPtr;

/**
 * 初始化：创建线性表
 * @param L
 * @return
 */
status ListInit(Sqlist L);

/**
 * 按值查找
 * @param L
 * @param val
 * @return
 * @details 时间复杂度为O(n)
 */
status ListLocate(Sqlist L, elementType elem, int *pos);

/**
 * 按位置查找
 * @param L
 * @param pos
 * @param elem
 * @return
 * @details 时间复杂度为O(1)
 */
status ListRetrieval(Sqlist L, int pos, elementType *elem);

/**
 * 插入第pos个元素
 * @param L
 * @param pos
 * @param elem
 * @return
 * @details 时间复杂度为O(n)
 */
status ListInsert(Sqlist L, int pos, elementType elem);

/**
 * 删除第pos个元素
 * @param L
 * @param pos
 * @return
 */
status ListDelete(Sqlist L, int pos);

status ListDestory(Sqlist L);

status ListPrior();

status ListNext();


#endif //C_SQLIST_H
