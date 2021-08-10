#include<stdio.h>
#include<string.h>

void main(){
    char st[45] = "Bhanu";
    char *st2 = "Gudheniya";
    int val = strcmp(st, st2);
    printf("Now the val is %d", val);

    /*
    return 0 : string are equal
    return negative : first string mismatching character's ASCII value is not greater than second string corresponding mismatching character.
    return positive otherwise
    */
}