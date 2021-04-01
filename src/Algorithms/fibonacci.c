
/**
 *
 * @param num
 * @return
 */
int fibonacci_common(int num) {
    if (num >= 1) {
        int result = 0, a = 0, b = 1;
        for (int i = 0; i < num; i++) {
            result = a + b;
            a = b;
            b = result;
        }
    } else {
        return 0;
    }
}

/**
 *
 * @param num the position of fibonacci;
 * @return result
 */
int fibonacci_recursive(int num) {
    if (num <= 0) { return 0; }
    else if (num == 1) { return 1; }
    else {
        return fibonacci_recursive(num - 1) + fibonacci_recursive(num - 2);
    }
}