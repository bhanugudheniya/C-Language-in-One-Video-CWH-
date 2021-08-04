#include<stdio.h>
#include<math.h>

void main()
{
    int side;

    printf("Enter side value : ");
    scanf("%d\n", &side);

    printf("Area of Square is %.2f\n", pow(side,2));
}