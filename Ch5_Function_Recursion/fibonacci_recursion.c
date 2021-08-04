/*
hint:

fib(n) = fib(n-1) + fib(n-2)
fib(1) = 0
fib(2) = 1

*/

#include<stdio.h>

int fib(int x);

void main(){
    int num;

    printf("Enter a number : ");
    scanf("%d\n", &num);

    printf("The Fibonacci Series is %d\n", fib(num));
}

int fib(int x){
    // if(x == 1){
    //     return 0;
    // }
    // else
    // if(x == 2){
    //     return 1;
    // }
    if(x <= 1){
        return x;
    }
    else{
        int result;
        result = fib(x-1) + fib(x-2);
        return result;
    }
}