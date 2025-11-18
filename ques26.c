//Write a program to print numbers from 1 to n.

#include <stdio.h>
int main(){
    int n, i;

    printf ("Enter the number till you want the number series: ");
    scanf ("%d", &n);

    for (i=1; i <= n; i++)
    {
        printf ("%d ", i);
    }
return 0;
}

