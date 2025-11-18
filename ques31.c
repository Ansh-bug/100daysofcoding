//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main(){
    int n, remainder, binary=0;
    int power_of_10=1;

    printf ("Enter a number: ");
    scanf ("%d", &n);

    while ( n != 0)
    {
        remainder = n % 2;
        n = n / 2;
        binary= binary + remainder * power_of_10;
        power_of_10 = power_of_10 *10;
    }
    printf ("Binary number= %d", binary);
return 0;
}

