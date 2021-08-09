#include<stdio.h>

void main(){
    int marks[4];
    marks[0] = 21;
    marks[1] = 56;
    marks[2] = 85;
    marks[3] = 32;

    // for(int i = 0; i<=3; i++){
    //     printf("%d\n", marks[i]);
    // }

    //      OR

    int length = sizeof(marks)/sizeof(marks[0]);

    for (int j = 0; j < length; j++)
    {
        printf("%d\n", marks[j]);
    }
    
}