#include "math.h"

int Max(int m, int n) {
    return m > n ? m : n;
}

long factorial(long n) {
    if (n < 0) {
        return -1;
    } else if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
