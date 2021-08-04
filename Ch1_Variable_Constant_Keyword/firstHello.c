#include<stdio.h>

int main()
{
    int a = 3;
    char name[] = "Bhanu";
    char charct = 'Q';
    // charct = getchar();
    double doub = 2.2;
    float flo = 1.0;
    char input[50];

    printf("\nHello");
    printf("\n%d", a);
    printf("\n%c", charct);
    printf("\n%s", name);
    printf("\n%f", flo);
    printf("\n%lf", doub);


    printf("\n\nEnter by user\n");
    scanf("%s", &input);
    printf("%s\n", input);
    return 0;
}

/*
1. First character must be an alphabet or undewrscore.
2. No commas, blank allowed.

Constant : an entity value doesn't change is called as a constant.
*/

// ****************

/*
# Types of constant
1. Primary -> -1, 6, 7
2. Real -> -33.2, 2.5
3. Character -> 'a', '@'  [single character must be enclosed within single inverted commas]
*/


/*
# Keyword : Reserved keyword, whose meaning is already define in compiler.
There are 32 keywords in c.
*/

// ****************

/*
Comments:
Single Line : //
Multi Line : /* ... /*
*/

// ****************

/*
Library function

%d for integer
%f for real values like: float and decimal
%c for character
%s for string
*/