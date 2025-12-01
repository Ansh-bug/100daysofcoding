
// Q86: Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){

    char ch[50];
    printf("Enter a string: ");
    fgets(ch,sizeof(ch),stdin);
    int l = strlen(ch);
    char rev[l];

    for(int i = 0; i< strlen(ch)-1; i++){
        char a = ch[i];
        rev[l-1]=a;
        l--;

    }

    puts(rev);

    bool flag = true;

    for(int i = 0; i<strlen(ch)-1; i++){
        printf("%c%c\n",ch[i],rev[i]);
        if(ch[i] != rev[i])
            flag = false;
    }

    if(flag == true)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}

