#include<stdio.h>

void main(){
    char *ptr = "Bhanu Gudheniya";
    // char ptr[] = "Bhanu Gudheniya"; // in this type of initialization we cannot change the value of variable bcs in this we initialize the value in array blocks. ( X )

    ptr = "Rohit Gudheniya";
    printf("%s", ptr);
}