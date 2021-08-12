#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};


void main(){
/*
--- Wrong Method ---
    ------------

int a = 32;
float b = 23.52;
char c = 'f';

employee e1;
e1.salary = 23.52;  - - - - - -> won't work without employee structure 

*/

struct employee e1;     // create e1 variable of employee type || it is important to write full (struct employee <varaible_name>;)
e1.code = 100;
e1.salary = 32.23;
// e1.name= "Bhanu"; - - - - - > won't work, bcs it is string
strcpy(e1.name, "Bhanu");

printf("%d\n", e1.code);
printf("%.2f\n", e1.salary);
printf("%s\n", e1.name);
}