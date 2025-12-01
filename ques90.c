// Q90: Toggle case of each character in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){

    char ch[50];
    printf("Enter a string: ");
    fgets(ch,sizeof(ch),stdin);

    for(int i = 0; i<strlen(ch)-1; i++){
        if(islower(ch[i]))
            ch[i]=toupper(ch[i]);
        else
            ch[i]=tolower(ch[i]);
    }

    puts(ch);

    return 0;
}
