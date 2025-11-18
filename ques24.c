/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/

#include <stdio.h>

int main(){
    float unit, electricity_bill;

    printf ("Enter the amount of unit cosumed: ");
    scanf ("%f", &unit);

    if ( unit <= 100)
    {
        electricity_bill = unit * 5;
        printf ("Electricity bill  %.2fRs \n", electricity_bill);
    }else if ( unit <= 200)
    {
        electricity_bill = 100 * 5;
        electricity_bill += (unit - 100) * 7;
        printf ("Electricity bill %.2fRs \n", electricity_bill);
    }else if ( unit <= 300)
    {
        electricity_bill = 100 * 5;
        electricity_bill += 100 * 7;
        electricity_bill += (unit - 200) * 10;
        printf ("Electricity bill %.2fRs \n", electricity_bill);
    }else if ( unit > 300)
    {
        electricity_bill = 100 * 5;
        electricity_bill += 100 * 7;
        electricity_bill += 100 * 10;
        electricity_bill += (unit - 300) * 12;
        printf ("Electricity bill %.2fRs \n", electricity_bill);
    }
return 0;
}

