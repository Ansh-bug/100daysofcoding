//Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>

int main(){
    int n;

    printf ("Enter the number corresponding to the day of the week: ");
    scanf ("%d", &n);

    switch (n)
    {
    case 1:
        printf ("Day %d is: Monday \n", n);
        break;
    case 2:
        printf ("Day %d is: Tuesday \n", n);
        break;
    case 3:
        printf ("Day %d is: Wednesday \n", n);
        break;
    case 4:
        printf ("Day %d is: Thusday \n", n);
        break;
    case 5:
        printf ("Day %d is: Friday \n", n);
        break;
    case 6:
        printf ("Day %d is: Saturday \n", n);
        break;
    case 7:
        printf("Day %d is: Sunday \n", n);
        break;
    default:
        printf ("Invalid number. Please enter the correct number between 1 to 7. \n");
        break;
    }
return 0;
}

