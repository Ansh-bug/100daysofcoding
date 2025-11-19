/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/

#include <stdio.h>
int main(){
    int row;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = i; j <= row -1 ; j++)
        {
            printf(" ");
        }

        int starting = row + 1 - i;

        for (int k = starting; k <= row; k++)
        {
            printf ("%d", k);
        }
        printf ("\n");
    }
return 0;
}

