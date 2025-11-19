//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms

#include <stdio.h>
int main(){
    int n;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf ("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        double numerator = (double)(2 * i);
        double denominator = (double)(4 * i - 1);
        double term = numerator / denominator;
        sum += term;

        printf("Term %d: %.6f (%d/%d)\n", i, term, (int)numerator, (int)denominator);
    }
    printf("\nTotal sum of the series up to %d terms: %.6f\n", n, sum);
return 0;
}

