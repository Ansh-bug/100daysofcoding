//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main(){
double a, b , c;
double discriminant;
double root1, root2;
double imaginary_root, real_part;

printf ("Enter the coefficient a, b, c: ");
scanf ("%lf %lf %lf", &a, &b, &c);

discriminant = b*b-4*a*c;

if (discriminant > 0){
    root1= (-b + sqrt(discriminant)) / (2 * a);
    root2= (-b - sqrt(discriminant)) / (2 * a);
    printf ("The roots of the equation are real and distinct. \n");
    printf ("Root 1 = %.2lf \n", root1);
    printf ("Root 2 = %.2lf \n", root2);
}else if (discriminant == 0)
{
    root1 = root2 = -b / (2 * a);
    printf ("The roots of the equation are real and equal. \n");
    printf ("Root 1 = Root 2 = %.2lf", root1);
}else if (discriminant < 0)
{
    real_part = -b /(2 * a);
    imaginary_root = sqrt(-discriminant) / (2 * a);
    printf (" The roots of the equation are complex and distinct. \n");
    printf ("Root 1 = %.2lf + %.2lfi \n", real_part, imaginary_root);
    printf ("Root 2 = %2lf - %.2lfi \n", real_part, imaginary_root);
}
return 0;
}

