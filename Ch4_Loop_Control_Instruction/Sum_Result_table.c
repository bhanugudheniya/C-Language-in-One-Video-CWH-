#include<stdio.h>

void main()
{
    int num, sum = 0;

    printf("Enter Number to print table of that.. : ");
    scanf("%d\n", &num);

    for(int i = 1; i<=10; i++){
        printf("%d * %d = %d\n", num, i, num*i);

        sum = sum + num*i;
    }
    printf("Sum of table %d is %d\n", num, sum);
}