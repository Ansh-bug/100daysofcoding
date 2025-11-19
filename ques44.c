//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf ("%d", &n);

    if (n >= 1) {
        sum += 1.0;
        printf("Term 1: 1.000000\n");
    }

    for (int i = 2; i <= n; i++)
    {
        double numerator = (double)(2 * i - 1);
        double denominator = (double)(2 * i);
        double term = numerator / denominator;
        sum += term;

        printf("Term %d: %.6f (%d/%d)\n", i, term, (int)numerator, (int)denominator);
    }
    printf("\nTotal sum of the series up to %d terms: %.6f\n", n, sum);

return 0;
}

