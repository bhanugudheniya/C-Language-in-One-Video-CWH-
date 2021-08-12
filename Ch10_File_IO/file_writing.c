#include<stdio.h>

void main(){
    FILE *ptr;

    int num = 45;
    ptr = fopen("generated.txt", "w");

    fprintf(ptr, "The number is %d\n", num);      // write to file.
    fprintf(ptr, "Hello India!");
    fclose(ptr);
}

// fprintf is used to write in file.