#include <stdio.h>

void star(int x);

void main()
{
    int num;
    printf("Enter no : ");
    scanf("%d\n", &num);

    star(num);
}

void star(int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}