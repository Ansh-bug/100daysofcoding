//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2;
    int smaller;
    int hcf = 1;

    printf("Enter the first positive integer: ");
    scanf("%d", &num1);

    printf("Enter the second positive integer: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        smaller = num1;
    } else {
        smaller = num2;
    }

    for (int i = smaller; i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
            break;
        }
    }

    printf("\n");
    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}

