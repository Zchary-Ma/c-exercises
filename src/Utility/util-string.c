#include <string.h>
#include <stdio.h>
#include "util-string.h"

void str_reverse(char *str_input) {
    char temp = '0';
    int str_len = strlen(str_input);
    for (int i = 0; i < str_len / 2; i++) {
        temp = str_input[i];
        str_input[i] = str_input[str_len - 1 - i];
        str_input[str_len - 1 - i] = temp;
    }
}

int ascii_convert(char ch) {
    printf("the ascii code for %c is %d\n", ch, ch);
    return (int) ch;
}