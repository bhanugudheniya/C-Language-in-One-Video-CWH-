#include<stdio.h>

void decrypt(char *c){
    char *ptr = c;
    while(*ptr != '\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}

void main(){
    char c[] = "Cibov";
    decrypt(c);
    printf("Decrypted string is : %s", c);
}