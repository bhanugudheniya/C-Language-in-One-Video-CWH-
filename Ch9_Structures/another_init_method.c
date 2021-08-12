#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

void main(){
    struct employee bhanu = {100, 34.23, "Bhanu"};
    struct employee rohan = {101, 30.23, "Rohan"};
    struct employee vikas = {102, 31.23, "Vikas"};

    printf("-----------------------------------------\n");
    printf("|Name: %s | Code: %d | Salary: %.2f|\n", bhanu.name, bhanu.code, bhanu.salary);
    printf("|Name: %s | Code: %d | Salary: %.2f|\n", rohan.name, rohan.code, rohan.salary);
    printf("|Name: %s | Code: %d | Salary: %.2f|\n", vikas.name, vikas.code, vikas.salary);
    printf("-----------------------------------------\n");
    printf("Done");
    
}