#include<stdio.h>
 void main()
 {
    int num;

    printf("Enter Number\n");
    scanf("%d\n", &num);

    if(num%79==0)
    {
       printf("Divisible");
    }
    else{
       printf("Not Divisible");
    }

 }