// Student only pass when total marks of 3 subject was 40% atlest and 33% in single subject

#include<stdio.h>

void main(){

    float maths, ds, py, percentage, total, percMath, percDs, percPy;

    printf("Enter Maths Marks : ");
    scanf("%f\n", &maths);

    printf("Enter Data Structure Marks : ");
    scanf("%f\n", &ds);

    printf("Enter Python Marks : ");
    scanf("%f\n", &py);

    total = maths + ds + py;
    // printf("%2.f\n", total);

    percMath = (maths/100)*100;
    percDs = (ds/100)*100;
    percPy = (py/100)*100;

    percentage = (total/300)*100;
    // printf("%.2f", percentage);

    if(percentage >= 40)
    {
        if(percMath >= 33)
        {
            if(percDs >= 33)
            {
                if(percPy >= 33)
                {
                    printf("You are Pass\n");
                }
                else
                {
                    printf("Python Percentage not satisfied\n");
                    printf("You are fail");
                }
            }
            else
            {
                printf("Data Structure Percentage not satisfied\n");   
                printf("You are fail");
            }
        }
        else
        {
            printf("Maths Percentage not satisfied\n");
            printf("You are fail");
        }
    }
    else{
        printf("Total Percentage not satisfied\n");
        printf("You are fail");
    }

}