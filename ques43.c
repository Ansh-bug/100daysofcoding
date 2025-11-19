//Write a program to check if a number is a strong number.

#include <stdio.h>
int factorial(int n) {

    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

return result;
}

int main(){
    int num, original_num, temp, digit, sum_of_factorial=0;

    printf("Enter a number: ");
    scanf ("%d", &num);

    original_num = num;
    temp = original_num;

    while (temp > 0)
    {
        digit = temp % 10;
        sum_of_factorial += factorial(digit);
        temp /= 10;
    }

    if (sum_of_factorial == original_num)
    {
        printf ("%d is a strong number.", original_num);
    }else
        printf ("%d is not a strong number.", original_num);

return 0;
}

