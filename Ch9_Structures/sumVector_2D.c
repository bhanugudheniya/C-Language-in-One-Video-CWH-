#include<stdio.h>

struct vector
{
    int x;
    int y;
};

struct vector sumVector(struct vector v1, struct vector v2){
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
}

void main(){
    struct vector v1, v2, sum;   // v1 and v2 are variable of vector type.
    v1.x = 4;
    v1.y = 9;
    printf("X dimension is %d and Y dimension is %d\n", v1.x, v1.y);

    v2.x = 5;
    v2.y = 4;
    printf("X dimension is %d and Y dimension is %d\n", v2.x, v2.y);

    sum = sumVector(v1, v2);

    printf("X dimesnion of result is %d and Y dimension is %d\n", sum.x, sum.y) ;

}