//
// Created by Zchary on 2021/4/1.
//

#include "stdio.h"
#include "Algorithms/fibonacci.h"

int main() {
    int num = 10, result = 0;
    result = fibonacci_recursive(1);
    printf("The result is %d", result);
    return 0;
}