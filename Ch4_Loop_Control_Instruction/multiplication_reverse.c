#include<stdio.h>

void main()
{
    int num;

    printf("Enter Number to print table of that.. : ");
    scanf("%d\n", &num);

    for(int i = 10; i>=1; i--){
        printf("%d * %d = %d\n", num, i, num*i);
    }
}