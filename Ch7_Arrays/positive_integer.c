#include<stdio.h>

void positiveArray();

void main(){
    positiveArray();
}

void positiveArray(){
    int arr[10], num;

    for(int i = 0; i < 10; i++ ){
        printf("Enter %d element : ", i+1);
        scanf("%d\n", &arr[i]);
    }

    for(int i = 0; i < 10; i++ ){
        if(arr[i] >= 0){
        printf("Positive Value of %d element is %d\n", i+1, arr[i]);
        }
    }
}