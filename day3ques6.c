// Write a program to swap two numbers using a third variable.

#include <stdio.h>
 int main(){
    int a, b, temp;
    printf ("enter the first number: \n", a);
    scanf ("%d", &a);
    printf ("enter the second number: \n", b);
    scanf ("%d", &b);

    temp=a;
    a=b;
    b=temp;

    printf ("after swaping \n");
    printf ("first number: %d \n", a);
    printf ("second number: %d \n", b);

    return 0;
 }

