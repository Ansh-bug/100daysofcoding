//Write a program to find the LCM of two numbers.

#include <stdio.h>
int main(){
    int num1, num2;
    int temp1, temp2, remainder, hcf=1, lcm, smaller;

    printf("Enter the first positive integer: ");
    scanf("%d", &num1);

    printf("Enter the second positive integer: ");
    scanf("%d", &num2);

    temp1 = num1;
    temp2 = num2;

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

    lcm = (num1 * num2) / hcf;

    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

return 0;
}

