#include<stdio.h>

// sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); // function prototype declaration

int main()
{
    int c;
    c = sum(5, 6);
    printf("The value of c is %d\n", c);
    return 0;
}

int sum(int a, int b){      // actual arguments bcs this is same as a and b at line 16
    int result;
    result = a + b;
    return result;
}