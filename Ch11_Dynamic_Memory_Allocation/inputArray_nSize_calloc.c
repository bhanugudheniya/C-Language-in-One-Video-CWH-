#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr, n;
    ptr = (int *)calloc(n, sizeof(int));

    printf("Enter Number : ");
    scanf("%d\n", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }
}