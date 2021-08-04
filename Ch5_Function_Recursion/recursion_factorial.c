#include<stdio.h>

int factorial(int x);

void main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d\n", &num);

    printf("The factorial of %d is %d\n", num, factorial(num));
}

int factorial(int x){
    if(x == 1 || x == 0){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}