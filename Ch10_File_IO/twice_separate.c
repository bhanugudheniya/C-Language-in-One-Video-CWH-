#include<stdio.h>

void main(){
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("twice.txt", "r");
    ptr2 = fopen("twice2.txt", "w");
  
    char c = fgetc(ptr1);
    while (c != EOF){
        fputc(c, ptr2);
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    
    fclose(ptr1);
    fclose(ptr2);
}