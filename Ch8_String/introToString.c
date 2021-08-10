#include<stdio.h>

void main(){
    // char str[] = {'B', 'H', 'A', 'N', 'U', '\0'};   // \0 is a null character, it is used for terminating the string.
    //                              ^
    char str[] = "Bhanu";   // -----|
}

/*

                           |--> Null Character
     ___ ___ ___ ___ ___ ____                      
    | B | H | A | N | U | \0 |          -> contiguous blocks in memory
     --- --- --- --- --- ----
      10  11  12  13  14  15



*/