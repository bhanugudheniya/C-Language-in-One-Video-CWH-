#include<stdio.h>

void main(){
    FILE *ptr;

    int num;
    int num2;

    ptr = fopen("FileBooks.txt", "r");
    if(ptr == NULL){
        printf("The file is does't exist");
    }
    else{
        fscanf(ptr, "%d", &num);    // read content from file.
        fscanf(ptr, "%d", &num2);    // read content from file.
        fclose(ptr);    // Close the file after use it

        printf("The value of num is %d\n", num);
        printf("The value of num2 is %d\n", num2);
    }
}