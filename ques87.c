
// Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){

    char ch[50];
    printf("Enter a string: ");
    fgets(ch,sizeof(ch),stdin);
    
    int s = 0, d = 0, spe = 0;

    for(int i = 0; i<strlen(ch)-1; i++){
        char a = ch[i];
        if(isdigit(a))
            d++;
        else if(isspace(a))
            s++;
        else if(!isalnum(a))
            spe++;
        else
            continue;
    }

    printf("Space: %d , Digit: %d , Special Characters: %d\n",s,d,spe);

    return 0;
}

