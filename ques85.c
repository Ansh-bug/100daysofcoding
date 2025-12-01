
// Q85: Reverse a string.

#include <stdio.h>
#include <string.h>
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

    return 0;
}

