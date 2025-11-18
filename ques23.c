/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled*/

#include <stdio.h>

int main(){
    int late_days, fine;
    fine=0;

    printf ("Enter the number of days the book is late: ");
    scanf ("%d", &late_days);

    if (late_days == 0)
    {
        printf ("Fine ₹0 \n");
    }else if (late_days <= 5)
    {
        fine= late_days*2;
        printf ("Fine %dRs \n", fine);
    }else if (late_days <= 10)
    {
        fine = 5*2;
        fine += (late_days - 5) *4;
        printf ("Fine %dRs \n", fine);
    }else if (late_days <= 30)
    {
        fine = 5 * 2;
        fine += 5 * 4;
        fine += (late_days - 10) * 6;
        printf ("Fine %dRs \n", fine);
    }else
        printf ("Membership cancelled. \n");
return 0;
}

