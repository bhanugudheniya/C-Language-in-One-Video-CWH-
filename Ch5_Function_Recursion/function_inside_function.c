#include<stdio.h>

// Function Prototype declaration
void morning();
void evening();
void night();

void main()
{
    morning();  // Function Call
}


// Function Definition 
void morning(){
    printf("Good Morning\n");
    evening();
}

void evening(){
    printf("Good Evening\n");
    night();
}

void night(){
    printf("Good Night\n");
}