#include<stdio.h>
#include<string.h>

void main(){
    char *st = "Harry";
    int a = strlen(st);
    printf("The length of string st is %d", a);

    // strlen() is used to count the number of character in the string excluding the null('\0') character.
}