//Write a program to check if a number is prime.

#include <stdio.h>

int main(){
    int number, n;
    int f=1;

    printf ("Enter a number: ");
    scanf ("%d", &number);

    n=number;

    for (int i = 2; i <= (number-1); i++)
    {
        if (number % i == 0)
        {
            f=0;
             break;
             }}
    if (f == 1)
    {
        printf ("%d is a prime number", n);
    }else
        printf ("%d is not a prime number", n);
return 0;
}

