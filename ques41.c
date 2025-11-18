//Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    long long num;
    long long swapped_num;

    printf("Enter a number: ");
    scanf ("%lld", &num);

    if (num < 10) {
        swapped_num = num;
    } else {
        long long temp = num;
        long long power_of_10 = 1;

         while (temp >= 10) {
            temp /= 10;
            power_of_10 *= 10;
        }

        long long first_digit = temp;
        long long last_digit = num % 10;

        long long middle_part = (num % power_of_10) / 10;

        swapped_num = (last_digit * power_of_10) + (middle_part * 10) + first_digit;
    }
    printf("Swapped number: %lld\n", swapped_num);
return 0;
}

