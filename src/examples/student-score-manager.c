// 输入分数，学号 计算最高分及学生学号
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

void *cal(int *scores, int *nums, int count, int *result);

int main() {
    int nums[MAX_SIZE]; // 学号数组
    int scores[MAX_SIZE]; // 分数数组
    int count = 0;
    printf("----Welcome------\n");
    printf("how many student?:(less than 11) \n");
    scanf("%d", &count);
    if (count <= 0 || count > MAX_SIZE) {
        printf("input error\n");
    } else {
        for (int i = 0; i < count; ++i) {
            printf("please input score ' ' num\n");
            scanf("%d %d", &scores[i], &nums[i]);
        }
        int result[2] = {0, 0};
        cal(scores, nums, count, result);
        printf("the max score is : %d\n", result[0]);
        printf("the student num is : %d\n", result[1]);
    }
    return 0;
}

void *cal(int *scores, int *nums, int count, int *result) {
    for (int i = 0; i < count; ++i) {
        if (result[0] < scores[i]) {
            result[0] = scores[i];
            result[1] = nums[i];
        }
    }
}