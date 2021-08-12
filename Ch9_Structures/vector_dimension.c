#include<stdio.h>

struct vector
{
    int x;
    int y;
};


void main(){
    struct vector v1, v2;   // v1 and v2 are variable of vector type.
    v1.x = 34;
    v1.y = 54;
    printf("X dimension is %d and Y dimension is %d\n", v1.x, v1.y);
}