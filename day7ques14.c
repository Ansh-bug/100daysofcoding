//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>

int main(){
    char character;

    printf ("Enter the character: ");
    scanf ("%s", &character);

    if (character == 'a'|| character == 'e' || character == 'i' || character == 'o' || character == 'u')
    {
        printf ("%s is a vowel", &character);
    }
    else
        printf ("%s is not vowel", &character);
return 0;
}

