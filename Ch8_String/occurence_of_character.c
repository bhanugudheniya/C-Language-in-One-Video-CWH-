#include<stdio.h>

int occurence(char st[], char c){
    char *ptr = st;
    int count = 0;

    while (*ptr != '\0'){
        if (*ptr == c){
            count++;
        }
        ptr++;
    }
    return count;
}

void main(){
    char st[] = "Bhanu Gudheniya";
    int count = occurence(st, 'a');
    printf("Occurences = %d", count);
}