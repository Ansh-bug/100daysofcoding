
// Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>
int main(){

    int count=0;
    char ch[50];
    printf("Enter a word: ");
    fgets(ch,sizeof(ch),stdin);           

    while(ch[count]!= '\0' && ch[count] != '\n'){
        count++;
    }

    printf("%d\n",count);

    return 0;
}

