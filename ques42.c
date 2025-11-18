//Write a program to check if a number is a perfect number.

#include <stdio.h>
int main(){
    long long num, sum=0;

    printf ("Enter a number: ");
    scanf ("%lld", &num);

    long long temp = num;

    for ( int i = 1; i < num ; i++)
    {
        if ( num % i == 0)
        {
            sum += i;
        }
    }
    if (temp == sum)
    {
        printf ("%lld is a perfect number.", temp);
    }else
        printf ("%lld is not a perfect number", temp);

return 0;
}

