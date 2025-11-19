/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>
int main() {
    int ROWS;

    printf("Enter the number of rows for the star pattern: ");
    scanf ("%d", &ROWS);

    for (int i = 1; i <= ROWS; i++) {
        for (int space = 1; space < i; space++) {
            printf(" ");
        }
        for (int j = i; j <= ROWS; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

