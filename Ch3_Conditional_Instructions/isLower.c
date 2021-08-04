#include<stdio.h>

void main()
{
    char ch;

    printf("Enter Character : ");
    scanf("%c\n", &ch);

    if (ch >= 'a' && ch <= 'z'){
        printf("Lower");
    }
    else
    if (ch >= 'A' && ch <= 'Z' ){
        printf("Uppar");
    }
    else{
        printf("Enter Valid Character\n");
    }

}