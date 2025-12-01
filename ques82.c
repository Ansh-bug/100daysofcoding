
// Q82: Print each character of a string on a new line.

#include <stdio.h>
#include <string.h>
int main(){

    char ch[50];
    printf("Enter a word: ");
    fgets(ch,sizeof(ch),stdin);

    for(int i = 0; i< strlen(ch)-1;i++){
        printf("%c\n",ch[i]);
    }


    return 0;
}

