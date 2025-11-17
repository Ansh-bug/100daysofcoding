/*Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/

#include <stdio.h>

int main(){
    int a, b, c;
    printf ("enter the side of the triangle: ");
    scanf ("%d%d%d",&a ,&b, &c);
    if ((a+b>c) && (b+c>a) && (c+a>b)) //Check whether it is a valid triangle
    {
    if ((a==b) && (b==c)) //Condition to check whether the triangle is equilateral
        printf ("It is a equilateral triangle");
        else
    if ((a==b) || (b==c) || (c==a))  //Condition to check whether the triangle is isosceles
        printf ("It is an isosceles");
    else
        printf ("It is a saclene triangle");  //Condition to check whether the triangle is scalene
    }
    else
        printf ("The given sides do not form a triangle");   //Condition for not forming a triangle
    return 0;
}

