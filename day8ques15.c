//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main(){
    char character;

    printf ("Enter the character: ");
    scanf ("%s", &character);

    if ( character >= 'A' && character <= 'Z')
    {
        printf ("%s is a uppercase alphabet.", &character);
    }else if ( character >= 'a' && character <= 'z')
    {
        printf ("%s is a lowercase alphabet.", &character);
    }else if ( character >= '0' && character <= '9')
    {
        printf ("%s is a digit.", &character);
    }else
        printf ("%s is a special character.", &character);

return 0;
}

