#include<stdio.h>

void printTable(int *table, int num, int n){

    printf("The multiplication table of %d is : \n", num);
    for(int i = 0; i<n; i++){
        table[i] = num*(i+1);
    }

    for (int i = 0; i<n; i++)
    {
        printf("%d X %d = %d\n", num, i+1, table[i]);
    }
    printf("***************************************\n\n");
}

void main(){
    int table[3][10];

    printTable(table[0], 2, 10);
    printTable(table[1], 7, 10);    
    printTable(table[2], 9, 10);        
}