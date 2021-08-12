#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[30];
} emp;          // emp contains all definition of structure :: "struct employee"
                                                                //    |
void show(emp emp1){     // struct employee -> emp              //    |
    printf("The Code of Employee is : %d\n", emp1.code);        //    |
    printf("The Name of Employee is : %s\n", emp1.name);        //    |
    printf("The Salary of Employee is : %.2f\n", emp1.salary);  //    |
}                                                               //   \/ 
                                                                //    |
void main(){                                                    //    |
    // Declaring e1 and ptr                                     //    |
        // struct employee e1;                                  //    | same
        // struct employee *ptr;                                //    |
        emp e1;                         // <---------<----------------|
        emp *ptr;                       // <---------<----------------|
    // pointing ptr to e1
    ptr = &e1;

    // Set the  memeber values for e1
    ptr->code = 101;
    strcpy(ptr->name, "Bhanu");
    ptr->salary = 35.21;
    show(e1);
}

/*
typedef is used to make alias
*/

