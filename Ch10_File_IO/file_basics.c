/*
File Opening Modes:
1. "r"  - open for reading              // If the file does't exist, fopen returns NULL
2. "rb" - open for reading in binary    // If the file does't exist, fopen returns NULL
3. "w"  - open for writing              // If the file exist, the content will be overwrite
4. "wb" - open for writing in binary    // If the file exist, the content will be overwrite
5. "a"  - open for append               // If the file does not exist, it will be created
6. "r+" - open for both read and write
7. "a+" - open for both read and append
*/


/*
Types of file:
1. Text Files (.txt, .c)
2. Binary Files (.jpg, .dat)
*/
#include<stdio.h>

void main(){
    FILE *ptr;

    // ptr = fopen("sample.txt", "r");
    ptr - fopen("Sample.txt", "w");     // If file doen't exist, file will be generated.
}

