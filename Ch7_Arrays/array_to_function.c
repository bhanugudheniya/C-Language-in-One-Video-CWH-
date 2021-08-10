#include<stdio.h>

void printArray(int *ptr, int n){   // *ptr -> pointer, who access the elements in  array || n -> size of array
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i+1, *(ptr+i));   // i+1 -> increase the element no. || ptr+1 -> increment in pointer
    }
}

// ----------------  ^  ---------------- same

// void printArray(int ptr[], int n){              // *ptr -> pointer, who access the elements in  array || n -> size of array
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n", i+1, ptr[i]);   // i+1 -> increase the element no. || ptr+1 -> increment in pointer
//     }
//  ptr[2] = 555;  -->> This value will be chages in arr array of main as well bcs we pass reference of the element.
// }

void main(){
    int arr[] = {12,43,22,44,56,78,43};
    printArray(arr, 7);     // passing value; arr -> array || 7 -> size of array
}