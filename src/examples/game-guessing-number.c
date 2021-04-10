#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int get_int_input(void);

int get_random_int(void);

int main() {
    int input, answer;
    answer = get_random_int();
    for (;;) {
        printf("Guess a number between 0 - 10: \n");
        input = get_int_input();
        if (input == answer) {
            printf("you win\n");
            break;
        } else {
            printf("You lose\n");
        }
    }
    return 0;
}

int get_int_input() {
    int input;
    scanf(" %d", &input);
    return input;
}

int get_random_int(void) {
    srand(time(NULL));
    int r = rand() % 10;
    return r;
}
