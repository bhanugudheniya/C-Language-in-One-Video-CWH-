#include<stdio.h>

void main(){
    char str[] = "Bhanu";
    char *ptr = str;

    while (*ptr != '\0')    // loop are running till string was reach to null (\0)
    {
        printf("%c", *ptr);
        ptr++;
    }
    
}