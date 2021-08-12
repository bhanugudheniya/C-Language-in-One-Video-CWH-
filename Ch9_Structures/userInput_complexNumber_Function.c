#include<stdio.h>

typedef struct complex{
    int real;
    int complex;
} comp;

void display(comp c){
    printf("The value of real part is %d\n", c.real);
    printf("The value of imaginary part is %d\n", c.complex);
}

void main(){
    comp complexnum[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d num : ", i+1);
        scanf("%d\n", &complexnum[i].real);

        printf("Enter the complex value for %d num : ", i+1);
        scanf("%d\n", &complexnum[i].complex);
    }

    for (int i = 0; i < 5; i++)
    {
        display(complexnum[i]);
    }
    
    
}