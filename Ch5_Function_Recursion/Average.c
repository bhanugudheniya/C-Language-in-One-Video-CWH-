#include<stdio.h>

float average(int num1, int num2, int num3);

void main()
{
    int n1, n2, n3;

    printf("Enter Three Numbers : ");
    scanf("%d %d %d\n", &n1, &n2, &n3);

    printf("The average is %.2f\n", average(n1, n2, n3));
}

float average(int num1, int num2, int num3){
    float avg;
    avg = (float)(num1 + num2 + num3)/3;
    return avg;

}