#include<stdio.h>

void main()
{
    int num, fact=1;

    printf("Enter a number : ");
    scanf("%d\n", &num);

    for(int i = 1; i<=num; i++){
        fact = fact * i;
    }
    printf("%d\n", fact);
}