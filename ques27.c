//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main(){
    int sum=0, n;

    printf ("Enter the n odd number: ");
    scanf ("%d", &n);

    for (int i = 1; i<=n; i++)
    {
        int current_odd = 2 * i - 1;
        sum += current_odd;
    }
    printf("The sum of the first %d odd numbers is: %d\n", n, sum);
return 0;
}

