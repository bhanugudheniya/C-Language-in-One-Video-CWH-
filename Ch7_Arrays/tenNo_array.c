/*
10 no. array, use pointer arithmetic that (ptr+2) point to the 3rd element
where ptr is a pointer pointing to the first element of the array
*/
#include<stdio.h>

void main(){
    int arr[10];
    int *ptr = &arr[0];
    ptr = ptr+2;
    if(ptr == &arr[2]){
        printf("Point to the same location in memory");
    }
    else{
        printf("Do not Point to the same location in memory");
    }
}