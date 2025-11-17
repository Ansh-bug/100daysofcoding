//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main(){
    int a, b;
    printf ("enter the first number: \n", a);
    scanf ("%d", &a);
    printf ("enter the second number: \n", b);
    scanf("%d", &b);

    a+=b;
    b=a-b;
    a-=b;

    printf ("after swaping \n");
    printf ("New first number: %d \n", a);
    printf ("New second number: %d", b);
return 0;
}

