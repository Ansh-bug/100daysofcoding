/*Write a program to print the following pattern:
5
45
345
2345
12345
*/

#include <stdio.h>
int main() {
    int ROWS;

    printf("Enter the number of rows: ");
    scanf ("%d", &ROWS);


    for (int i = 1; i <= ROWS; i++) {
        int start_num = ROWS + 1 - i;
        for (int j = start_num; j <= ROWS; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

