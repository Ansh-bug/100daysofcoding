/*Write a program to print the following pattern:
*
**
***
****
*****
*/

#include <stdio.h>
int main(){
    int row;
    char element;

    printf ("Enter the element whose pattern is to printed(e.g., *): ");
    scanf ("%c", &element);

    printf ("Enter number of rows: ");
    scanf ("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf ("%c", element);
        }
        printf ("\n");
    }
}

