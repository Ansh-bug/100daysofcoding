//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    char ch;
    int isValid = 1;

    printf("Enter a binary number: ");

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch == '1') {
            putchar('0');
        } else if (ch == '0') {
            putchar('1');
        } else {
            printf("\nError: Invalid character '%c' found in input.\n", ch);
            isValid = 0;
            break;
        }
    }

    if (isValid) {
        printf("\n");
    }

    return 0;
}

