#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

void main(){
    struct employee emp[100];  // emp1, emp2, emp3 are the variable of employee type.
    {
        int num; 

        printf("Enter how many employee data are you want to record : ");
        scanf("%d\n", &num);
        for (int i = 0; i < num; i++)
        {
            // Get input from user
            printf("Enter the Code of Employee %d : ", i+1);
            scanf("%d\n", &emp[i].code);
            printf("Enter the Salary of Employee %d : ", i+1);
            scanf("%.2f\n", &emp[i].salary);
            printf("Enter the Name of Employee %d : ", i+1);
            gets(emp[i].name);    // gets use bcs of name contains spaces between first_name and last_name. ||  2nd method -> scanf("%s\n", )
        }
        
        

        // print output 

        for (int i = 0; i < num; i++)
        {
            printf("Employee %d :: Code: %d\n", i+1, emp[i].code);
            printf("Employee %.2f :: Code: %d\n", i+1, emp[i].salary);
            printf("Employee %s :: Code: %d\n", i+1, emp[i].name);
        }
        
    };
    
}