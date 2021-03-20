#include <stdio.h>

void log_size_of(void);
void log_arr_size(int *);
void log_weird(void);

int main(){
    int arr1[] = {0};
    log_arr_size(arr1);
    log_size_of();
    log_weird();
}

void log_size_of(void){
    printf("%u \n",sizeof(short)); // 2
    printf("%u \n",sizeof(int));  // 4
    printf("%u \n",sizeof(long)); // 8
    printf("%u \n",sizeof(char)); // 1
    printf("%u \n",sizeof(long long)); // 8
    printf("%u \n",sizeof(size_t)); // 8
};

void log_arr_size(int *arr){
    size_t arr_size = sizeof(arr) / sizeof(arr[0]);
    printf("size of this array is %u \n",arr_size);
}

void log_weird(){
    int cha = 'A';
    int arr2[1] = {1};
    printf("%d \n",cha); // print as a ASCII code: 65
    printf("%d \n", arr2[0]); // 1
    printf("%d \n", arr2[1]); // 65 
    printf("%d \n", arr2[2]); // -330787248
    printf("%d \n", 2==3); // 0
    printf("%d \n", isActive);
}