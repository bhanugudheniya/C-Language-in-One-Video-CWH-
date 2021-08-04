#include<stdio.h>

void main(){
    int principal, rate, years;
    float SI;

    printf("Enter Principal :: rate :: years\n");
    scanf("%d %d %d\n", &principal, &rate, &years);

    SI = (principal * rate * years)/100;

    printf("Simple Interest is : %f", SI);
}