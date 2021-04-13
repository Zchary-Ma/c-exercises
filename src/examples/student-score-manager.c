// 输入分数，学号 计算最高分及学生学号
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

#include "../Enums/common.h"
#include "../Utility/common.h"

status cal(int *scores, int *nums, int count, int *pMaxScore, int *pMaxScoreNum);

status PrintScore(int score[], int n);

status ReadScore(int score[], int *pCount);

status SortingScore(int score[], int n, int isAscending);


int main() {
    int nums[MAX_SIZE]; // 学号数组
    int scores[MAX_SIZE]; // 分数数组
    int count = 0;
    int maxScore, maxScoreNum;
    printf("----Welcome------\n");
    ReadScore(scores, &count);
    printf("the original data items are:\n");
    PrintScore(scores, count);
    SortingScore(scores, count, 1);
    printf("sorted items are:\n");
    PrintScore(scores, count);
    return 0;
}

status cal(int *scores, int *nums, int count, int *pMaxScore, int *pMaxScoreNum) {
    status s = success;
    *pMaxScore = scores[0];
    *pMaxScoreNum = nums[0];
    for (int i = 0; i < count; ++i) {
        if (*pMaxScore < scores[i]) {
            *pMaxScore = scores[i];
            *pMaxScoreNum = nums[i];
        }
    }
    return s;
}

status PrintScore(int score[], int n) {
    status s = fail;
    if (score && n > 0) {
        s = success;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", score[i]);
    }
    printf("\n");
    return s;
}

status ReadScore(int score[], int *pCount) {
    status s = success;
    int i = 0;
    printf("Input Score:");
    while (scanf(" %d", &score[i]) == 1) {
        printf("Input Score:");
        i++;
    }
    // NOTE put EOF to end while loop
    *pCount = i;
    if (i > 10000) {
        s = fail;
    }
    return s;
}


status SortingScore(int score[], int n, int isAscending) {
    status s = fail;
    // bubble sort
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n - i - 1; ++j) {
            // ascending
            if (isAscending > 0) {
                if (score[j] < score[j + 1]) {
                    Swap(&score[j], &score[j + 1]);
                }
            } else {
                if (score[j] > score[j + 1]) {
                    Swap(&score[j], &score[j + 1]);
                }
            }
            // descending
        }
    }
    return s;
}

