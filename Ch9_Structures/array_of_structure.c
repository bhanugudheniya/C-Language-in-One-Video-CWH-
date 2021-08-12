#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

void main(){
    struct employee facebook[100];

        facebook[0].code = 100;
        facebook[0].salary = 100.5;
        strcpy(facebook[0].name, "Bhanu");

        facebook[1].code = 101;
        facebook[1].salary = 120.5;
        strcpy(facebook[1].name, "Rohit");

        facebook[2].code = 102;
        facebook[2].salary = 90.5;
        strcpy(facebook[2].name, "Rohan");

        facebook[3].code = 103;
        facebook[3].salary = 80.5;
        strcpy(facebook[3].name, "Saili");
    printf("Done");
    
}