//Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main(){
    int num, digit, product=1;

    printf ("Enter a number: ");
    scanf ("%d", &num);

    while (num !=0)
    {
        digit = num % 10;
        if (digit % 2 != 0)
            product *= digit;
        num = num / 10;
    }
    printf ("Product of odd digits of the number: %d", product);
return 0;
}

