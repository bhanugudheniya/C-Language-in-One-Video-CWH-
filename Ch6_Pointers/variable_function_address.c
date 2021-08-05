#include<stdio.h>

void address(int a);

void main(){
    int x = 6;
    printf("Value of x is %u\n", x);
    address(x);
    printf("Address of x is %u\n", &x);
}

void address(int a){
    printf("The address of variable a is %u\n", &a);
}