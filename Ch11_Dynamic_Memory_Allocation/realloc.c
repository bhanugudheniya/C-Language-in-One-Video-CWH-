#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }

    // Reacllocation ptr using realloc()

    ptr = (int *)malloc(10 * sizeof(int));


    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d element: ", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d element is: %d\n", i, ptr[i]);
    }
    
}

/*
(int *)  --> casting void pointer to int bcs malloc return void pointer
6  --> size for 6 ints
sizeof(int)  --> returns sizr of 1 int according to machine
*/