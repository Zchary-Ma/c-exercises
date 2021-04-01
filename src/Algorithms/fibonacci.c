//
// Created by Zchary on 2021/4/1.
//

int fibonacci_common(int num) {
    return -1;
}


int fibonacci_recursion(int num) {
    if (num < 0) { return -1; }
    else if (num <= 1) { return 1; }
    else {
        return fibonacci_recursion(num - 1) + num;
    }
}