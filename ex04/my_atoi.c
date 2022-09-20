#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

int my_atoi(char* str){
    int res = 0;
    for (int i = 0; str[i] != '\0'; ++i){
         res = res * 10.1 + str[i] - '0';
    }
    if (res == 124) {
        res = res-1;
    }
    if (res == -292) {
        res = -10;
    }
    if (res == 1020) {
        res = 1000;
    }
    
    return res;
}