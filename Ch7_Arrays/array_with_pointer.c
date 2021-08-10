#include<stdio.h>

void main(){
    int marks[4];
    int *ptr;
    ptr = &marks[0];    // -------| same as
    // ptr = marks;     // <------|  above

    int length = sizeof(marks)/sizeof(marks[0]);

    for (int i = 0; i < length; i++)
    {
        printf("Enter the marks of student %d : ", i+1);
        scanf("%d\n", ptr);
        ptr++;  // increment in pointer and point to next element
    }

    for (int i = 0; i < length; i++)
    {
        printf("The value of marks for student %d is %d \n", i+1, marks[i]);
    }
    
    
}