//Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>

int main(){
    int n;

    printf ("Enter the number corresponding to the month of the year: ");
    scanf ("%d", &n);

    switch (n)
    {
    case 1:
        printf ("Month name: January \n");
        printf ("Number of days: 31 \n");
        break;
    case 2:
        printf ("Month name: February \n");
        printf ("Number of days: 28 or 29 (in a leap year) \n");
        break;
    case 3:
        printf ("Month name: March \n");
        printf ("Number of days: 31 \n");
        break;
    case 4:
        printf ("Month name: April \n");
        printf ("Number of days: 30 \n");
        break;
    case 5:
        printf ("Month name: May \n");
        printf ("Number of days: 31 \n");
        break;
    case 6:
        printf ("Month name: June \n");
        printf ("Number of days: 30 \n");
        break;
    case 7:
        printf ("Month name: July \n");
        printf ("Number of days: 31 \n");
        break;
    case 8:
        printf ("Month name: August \n");
        printf ("Number of days: 31 \n");
        break;
    case 9:
        printf ("Month name: September \n");
        printf ("Number of days: 30 \n");
        break;
    case 10:
        printf ("Month name: October \n");
        printf ("Number of days: 31 \n");
        break;
    case 11:
        printf ("Month name: November \n");
        printf ("Number of days: 30 \n");
        break;
    case 12:
        printf ("Month name: December \n");
        printf ("Number of days: 31 \n");
        break;
    default:
        printf ("Invalid number. Please enter the correct number between 1 to 12.\n");
        break;
    }
return 0;
}

