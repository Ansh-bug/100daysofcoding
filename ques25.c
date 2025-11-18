//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main(){
    double num1, num2, result;
    char op;

    printf ("Enter the calculation in the formate [Number1 Number2 Operator]: \n");
    scanf ("%lf %lf %c", &num1, &num2, &op);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf ("%.2lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf ("%.2lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf ("%.2lf", result);
        break;
    case '/':
        result= num1 / num2;
        printf ("%.2lf", result);
        break;
    case '%':
        result = (int)num1 % (int)num2;
        printf ("%.2lf", result);
        break;
    default:
        break;
    }
return 0;
}

