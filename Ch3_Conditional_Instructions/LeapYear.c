#include<stdio.h>

void main()
{
    int year;

    printf("Enter Year : ");
    scanf("%d\n", &year);

    if(year%4==0){
        printf("%d is a leap year\n", year);
    }
    else{
        printf("%d is not a leap year\n", year);
    }
}