//Write a program to calculate the factorial of a number.

#include <stdio.h>

int main(){
    int n;
    long long factorial=1;

    printf ("Enter a whose factorial is to be checked: ");
    scanf ("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial =  factorial * i ;
    }
    printf ("Factorial of %d = %lld", n, factorial);
return 0;
}

