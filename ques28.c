//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main(){
    int n;
    long product=1;

    printf ("Enter the n even number: ");
    scanf ("%d", &n);

    for (int i = 2; i<=n; i+=2)
    {
        product *= i;
    }
    printf("The product of the first %d even numbers is: %ld\n", n, product);
return 0;
}[=]

