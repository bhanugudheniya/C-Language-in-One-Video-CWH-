#include<stdio.h>

void main()
{
    int student = 3;
    int subject = 5;

    int marks[3][5];

    for (int i = 0; i < student; i++){
        for (int j = 0; j < subject; j++){
            printf("Enter the marks of student %d in subject %d : ", i+1, j+1);
            scanf("%d\n", &marks[i][j]);
        }
    }

    for (int i = 0; i < student; i++){
        printf("\n");

        for (int j = 0; j < subject; j++){
            printf("Marks of student %d in subject %d is : %d\n", i+1, j+1, marks[i][j]);
        }
    }
    
    
}