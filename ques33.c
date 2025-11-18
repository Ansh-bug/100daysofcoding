//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
int main(){
    int number, n, cube=0;

    printf ("Enter a number: ");
    scanf ("%d", &n);

    number=n;

    while ( n > 0)
    {
        int digit = n % 10;
        cube = cube + (digit * digit * digit);
        n = n/10;
    }
    if (cube == number)
    {
        printf ("%d is an armstrong number.", number);
    }else
        printf ("%d is not an armstong number", number);
return 0;
}

