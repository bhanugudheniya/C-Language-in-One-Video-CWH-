#include<stdio.h>
#include<string.h>

void main(){
    char st[45] = "Bhanu";
    char *st2 = "Gudheniya";
    strcat(st, st2);
    printf("Now the st is %s", st);
}