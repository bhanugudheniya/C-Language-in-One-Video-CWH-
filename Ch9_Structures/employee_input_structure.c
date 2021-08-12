#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

void main(){
    struct employee emp1, emp2, emp3;  // emp1, emp2, emp3 are the variable of employee type.
    {
        // Get input from user
        printf("Enter the Code of Employee 1 : ");
        scanf("%d\n", &emp1.code);
        printf("Enter the Salary of Employee 1 : ");
        scanf("%.2f\n", &emp1.salary);
        printf("Enter the Name of Employee 1 : ");
        gets(emp1.name);    // gets use bcs of name contains spaces between first_name and last_name. ||  2nd method -> scanf("%s\n", )
        
        printf("Enter the Code of Employee 2 : ");
        scanf("%d\n", &emp2.code);
        printf("Enter the Salary of Employee 2 : ");
        scanf("%.2f\n", &emp2.salary);
        printf("Enter the Name of Employee 2 : ");
        gets(emp2.name);

        printf("Enter the Code of Employee 3 : ");
        scanf("%d\n", &emp3.code);
        printf("Enter the Salary of Employee 3 : ");
        scanf("%.2f\n", &emp3.salary);
        printf("Enter the Name of Employee 3 : ");
        gets(emp3.name);

        // print output 
    };
    
}