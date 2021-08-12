#include<stdio.h>

void main(){
    FILE *ptr;

    char name[30];
    int salary;

    printf("Enter name of Employee : ");
    gets(name);

    printf("Enter salary of Employee : ");
    scanf("%d", &salary);

    ptr = fopen("EmployeeFile.txt", "a+");
    fprintf(ptr, "%s, %d\n", name, salary);
    fclose(ptr);
}