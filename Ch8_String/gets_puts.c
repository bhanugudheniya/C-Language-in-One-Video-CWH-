#include<stdio.h>

void main(){
    char s[34];
    
    printf("Enter your name : ");
    gets(s);
    puts(s);
    printf("Your name is %s", s);
}