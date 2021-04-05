#include <stdio.h>

void printIntArray(int *arr, size_t size) {
    for (int i = 0; i < size; i++) {
        printf("arr[%d] is: %d\n", i, arr[i]);
    }
}