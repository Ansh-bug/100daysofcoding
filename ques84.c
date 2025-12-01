
// Q84: Convert a lowercase string to uppercase without using built-in functions.

#include<stdio.h>
#include<ctype.h>
int main(){

    char ch[50];
    printf("Enter a string: ");
    fgets(ch,sizeof(ch),stdin);

    int i = 0;
    while(ch[i]!= '\0'){
        ch[i] = tolower(ch[i]);
        i++;
    }

    puts(ch);

    return 0;
}

