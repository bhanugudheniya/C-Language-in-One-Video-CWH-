#include<stdio.h>

struct arrow
{
    int code;
    float temp;
};


void main(){
    struct arrow a1;
    struct arrow *ptr;

    ptr->code = 10;
    ptr->temp = 25.2;

    printf("Code : %d\n", ptr->code);
    printf("Temperature : %.2f\n", ptr->temp);

}