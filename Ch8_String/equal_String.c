#include<stdio.h>
#include<string.h>

void main(){
    char st1[34], st2[34], c;
    int i = 0;

    printf("Enter the value of the first string : ");
    scanf("%s", st1);
    printf("Enter the value of secind string character by character\n");

    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i-1] = '\0';

    printf("The value of st1 is %s\n", st1);
    printf("The value of st2 is %s\n", st2);
    printf("Compare Strings : %d\n", strcmp(st1, st2));
    
}