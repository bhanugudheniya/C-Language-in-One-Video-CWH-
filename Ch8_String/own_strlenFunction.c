#include<stdio.h>

int strlen(char *st){
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0'){
        len++;
        ptr++;
    }
    return len;
}

void main(){
    char st[] = "Bhanu";
    int l = strlen(st);
    printf("The length of this string is %d", l);
}