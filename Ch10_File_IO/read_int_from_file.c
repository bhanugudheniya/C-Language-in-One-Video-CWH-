#include<stdio.h>

void main(){
    int a, b, c;
    FILE *ptr;
    ptr = fopen("integer.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The values of a, b and c is %d, %d and %d", a, b, c);
}