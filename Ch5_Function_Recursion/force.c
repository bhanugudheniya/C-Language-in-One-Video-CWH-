#include<stdio.h>

float force(float mass);

void main(){
    float m;
    printf("Enter the value of mass i kgs : ");
    scanf("%f", &m);

    printf("The value of force in Newton is %.2f\n", force(m));
}

float force(float mass){
    float result = mass * 9.8;
    return result;
}