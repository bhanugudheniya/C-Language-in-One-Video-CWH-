#include<stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg);

void main(){
    int x, y, sum;
    float avg;
    printf("Enter value of x, y : ");
    scanf("%d %d\n", &x, &y);
    sumAndAvg(x, y, &sum, &avg);
    printf("The value of sum is %d\n", sum);
    printf("The value of avg is %.2f\n", avg);

}

void sumAndAvg(int a, int b, int *sum, float *avg){
    *sum = a+b;
    *avg = (float)*sum /2;
}