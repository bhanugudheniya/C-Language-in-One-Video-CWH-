#include<stdio.h>

void main()
{
    float cel, fahr;

    printf("Enter Fahrenheit\n");
    scanf("%f", &fahr);

    cel = (fahr - 32)*5/9;

    printf("Celsius is %f\n", cel);

}