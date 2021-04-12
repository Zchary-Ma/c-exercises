// 输入分数，学号 计算最高分及学生学号
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

void *cal(int *scores, int *nums, int count, int *pMaxScore, int *pMaxScoreNum);

int main() {
    int nums[MAX_SIZE]; // 学号数组
    int scores[MAX_SIZE]; // 分数数组
    int count = 0;
    int maxScore, maxScoreNum;
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
        cal(scores, nums, count, &maxScore, &maxScoreNum);
        printf("the max score is : %d\n", maxScore);
        printf("the student num is : %d\n", maxScoreNum);
    }
    return 0;
}

void *cal(int *scores, int *nums, int count, int *pMaxScore, int *pMaxScoreNum) {
    *pMaxScore = scores[0];
    *pMaxScoreNum = nums[0];
    for (int i = 0; i < count; ++i) {
        if (*pMaxScore < scores[i]) {
            *pMaxScore = scores[i];
            *pMaxScoreNum = nums[i];
        }
    }
}