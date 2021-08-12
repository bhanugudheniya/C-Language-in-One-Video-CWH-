#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

// void show(struct emp);

// function in structure

void show(struct employee emp){
    printf("The Code of Employee is : %d\n", emp.code);
    printf("The Name of Employee is : %s\n", emp.name);
    printf("The Salary of Employee is : %.2f\n", emp.salary);
}

void main(){
    struct employee e1;
    struct employee *ptr;
    
    ptr = &e1;

    ptr->code = 101;
    strcpy(ptr->name, "Bhanu");
    ptr->salary = 35.21;

    show(e1);    
}