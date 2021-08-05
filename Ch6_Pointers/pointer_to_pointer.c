#include<stdio.h>

void main(){
    int i = 21;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;
    ptr_ptr = &ptr;

    printf("The value of i is %d\n", **ptr_ptr);
}