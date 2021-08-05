#include<stdio.h>

int natural(int x);

void main(){
    int num;
    printf("Enter no : ");
    scanf("%d\n", &num);

    printf("Sum of natural number is %d\n", natural(num));
}

int natural(int x){  
    if(x==1){
        return 1;
    }
    else{
        int sum;
        sum = x + natural(x-1);
        return sum;
    }
}