#include<stdio.h>

float temperature(int cel);

void main(){
    float celcius;

    printf("Enter Celcius to convert into fahrenheit : ");
    scanf("%f\n", &celcius);

    printf("Celcius to fahrenheit is %.2f\n", temperature(celcius));
}

float temperature(int cel){
    float result;
    result = (float)(cel * 9/5) + 32;
    return result;
}