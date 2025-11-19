/*Write a program to print the following pattern:
1
12
123
1234
12345
*/

#include <stdio.h>
int main(){
    int row;

    printf ("Enter number of rows: ");
    scanf ("%d", &row);

     for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            printf ("%d", j);
        }
        printf ("\n");
}
return 0;
}

