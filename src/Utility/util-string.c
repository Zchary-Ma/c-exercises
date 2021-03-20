#include <string.h>
#include <stdio.h>

void str_reverse(char *);

void str_reverse(char *str_input){
    char temp = '0';
    int str_len = strlen(str_input);
    for(int i= 0; i < str_len/2; i++){
        temp = str_input[i] ;
        str_input[i] = str_input[str_len - 1 - i];
        str_input[str_len - 1 - i] = temp;
    }
}

int main(){
    char str[]="Mudane life";
    str_reverse(str);
    printf("%s\n",str);
    return 0;
}
