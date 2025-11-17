//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number >= 0) {
        if (number == 0) {
            printf("The number is zero.\n");
        }
        else {
            printf("The number is a positive number.\n");
        }
    }
    else {
        printf("The number is a negative number.\n");
    }

return 0;
}

