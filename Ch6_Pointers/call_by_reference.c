#include<stdio.h>

void wrongSwap(int a, int b);
void swap(int *a, int *b);

void main(){
    int x = 3, y = 4;
    printf("The value of x and y before swap is %d and %d\n", x, y);
    // wrongSwap(x, y);     // will not wotk due to call by value 
    swap(&x, &y);           // will work due to call by reference
    printf("The value of x and y before swap is %d and %d\n", x, y);
}

void wrongSwap(int a, int b){   //      \  
    int temp;                   //       |
    temp = a;                   //       |  call by value -- not swap two values
    a = b;                      //       |
    b = temp;                   //      /
}


void swap(int *a, int *b){      //      \  
    int temp;                   //       |
    temp = *a;                  //       |  call by reference -- swap two values
    *a = *b;                    //       |
    *b = temp;                  //      /
}