// do not chage the main() variable value using any function.
// in call ny value, chaning in value in any function cannot affect on actual value of variable which is define in main()

#include<stdio.h>

int sum(int a, int b);

int main(){

    int a = 4, b = 7;
    printf("The value of a and b is %d and %d\n", a, b);
    printf("The value of 4+7 is %d\n", sum(a,b));
    printf("The value of a and b after function call is %d and %d\n", a, b);

    return 0;
}

int sum(int a, int b){
    int c;

    c = a + b;
    b = 3421;   // not change actual value of b
    a = 25645;  // not change actual value of a
    return c;
}