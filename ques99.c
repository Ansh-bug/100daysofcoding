
// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main()
{
    char date[20], d[3], m[3], y[5];
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

   
    strncpy(d, date, 2);
    d[2] = '\0';

    strncpy(m, date + 3, 2);
    m[2] = '\0';

    strncpy(y, date + 6, 4);
    y[4] = '\0';

    char z = m[1];
    int i = z-1;

    printf("%s-%s-%s\n", d, months[i - 1], y);

    return 0;
}

