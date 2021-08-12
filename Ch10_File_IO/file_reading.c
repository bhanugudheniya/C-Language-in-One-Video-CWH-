// fscanf : scan from file || input from file.
#include<stdio.h>

void main(){
    FILE *ptr;

    int num;
    int num2;

    ptr = fopen("FileBook.txt", "r");

    fscanf(ptr, "%d", &num);    // read content from file.
    printf("The value of num is %d\n", num);

    fscanf(ptr, "%d", &num2);    // read content from file.
    printf("The value of num is %d\n", num2);

    fclose(ptr);
}