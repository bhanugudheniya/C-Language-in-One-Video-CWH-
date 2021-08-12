#include<stdio.h>

void main(){
    FILE *ptr;
    char c;
    ptr = fopen("getc_demo.txt", "r");
    c = fgetc(ptr);
    while (c!=EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);
}

// EOF : End of file