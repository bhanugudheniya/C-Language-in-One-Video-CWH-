#include<stdio.h>

void main(){
    int marks[4];

// set size of array in a variable
    int length = sizeof(marks)/sizeof(marks[0]);

// take input from user
    for (int i = 0; i < length ; i++)
    {
        printf("Enter the marks for student %d : ", i+1);
        scanf("%d\n", &marks[i]);
    }

    printf("\nYou Entered marks are : \n\n");

// output 
    for (int i = 0; i < length; i++)
    {
        printf("Marks of student %d is %d\n", i+1, marks[i]);
    }
    
    
}