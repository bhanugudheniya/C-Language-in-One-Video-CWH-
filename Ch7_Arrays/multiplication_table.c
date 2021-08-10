#include<stdio.h>

void main(){
    int multi[10], num;

    printf("Enter number to print table : ");
    scanf("%d\n", &num);
    for (int i = 0; i < 10; i++)
    {
        multi[i] = num*(i+1);
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("5 X %d = %d\n", i+1, multi[i]);
    }
}