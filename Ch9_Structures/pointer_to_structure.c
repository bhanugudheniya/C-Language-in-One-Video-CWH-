#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

void main(){
    struct employee e1;
    struct employee *ptr;
    
    ptr = &e1;
    // (*ptr).code = 101;   //---   or we can also write: ptr->code = 101;
    ptr->code = 101;    // like this
    printf("%d\n", e1.code);
}