// free() : use for free dynamic memory.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr1, *ptr2, n;
    ptr1 = (int *)malloc(sizeof(int));

    printf("Enter Number : ");
    scanf("%d\n", &n);

    for (int i = 0; i < 6000; i++)
    {
        ptr2 = (int *)malloc(600000, sizeof(int));
        printf("Enter the value of %d element: ", i);
        scanf("%d", &ptr1[i]);
        free(ptr2);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element is: %d\n", i, ptr1[i]);
    }

    printf("Dynamic memory is free\n");
}