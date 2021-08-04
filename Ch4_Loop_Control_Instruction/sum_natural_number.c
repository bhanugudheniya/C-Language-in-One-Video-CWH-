#include<stdio.h>

void main()
{
    int i = 1, num=0;

// Using For loop

    for(i=1; i<=10; i++){
        num = num + i;
    }
    printf("%d\n", num);


// Using do-while loop

//     do{
//         num = num + i;
//         i++;
//     } while(i<=10);
//     printf("%d\n", num);

}