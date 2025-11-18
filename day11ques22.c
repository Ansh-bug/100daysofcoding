//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main(){
    double selling_price, cost_price, profit_percentage, loss_percentage;

    printf ("Enter the cost price: ");
    scanf ("%lf", &cost_price);

    printf ("Enter the selling price: ");
    scanf ("%lf", &selling_price);

    if (selling_price > cost_price)
    {
        profit_percentage=((selling_price - cost_price)/cost_price)*100;
        printf ("There was a profit of %.2lf%%", profit_percentage);
    }else if (cost_price > selling_price)
    {
        loss_percentage=((cost_price - selling_price)/cost_price)*100;
        printf ("There was a loss of %.2lf%%", loss_percentage);
    }else if (selling_price == cost_price)
    {
        printf ("There was no loss as well as no profit.");
    }
return 0;
}

