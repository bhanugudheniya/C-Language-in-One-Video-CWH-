#include<stdio.h>

void main(){
    int i = 34;
    int *ptr = &i;

    printf("The value of ptr is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);
    ptr--;
    printf("The value of ptr is %u\n", ptr);

// in integer if we increment by 1 so it can increase the address by 4 (in my case)
// in char if we increment by 1 so it can increase the address by 1 (in my case)
}