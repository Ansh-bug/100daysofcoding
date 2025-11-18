// Write a program to reverse a given number.

#include <stdio.h>
int main(){
    int original_number, reversed_number=0;

    printf ("Enter a number: ");
    scanf ("%d", &original_number);

    printf ("Original numer = %d \n", original_number);

    while (original_number != 0)
    {
        int digit = original_number % 10;
        reversed_number = reversed_number *10 + digit;
        original_number = original_number /10;
    }
    printf ("Reverse number = %d", reversed_number);
return 0;
}

