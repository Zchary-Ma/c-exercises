#include "common.h"

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int IsLeapYear(int n) {
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
        return 1;
    }
    return 0;
}