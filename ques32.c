//Write a program to check if a number is a palindrome.

#include <stdio.h>
int main(){
    int original_number, reverse_number=0, n;

    printf ("Enter the number= ");
    scanf ("%d", &n);

    original_number= n;

    while (n != 0)
    {
        int digit = n % 10;
        reverse_number= reverse_number * 10 + digit;
        n=n/10;
    }
    if (original_number == reverse_number)
    {
        printf ("%d is a palindrome number.", original_number);
    }else
        printf ("%d is not a palindrome number.", original_number);
return 0;
}

