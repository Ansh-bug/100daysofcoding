
// Q88: Replace spaces with hyphens in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){

    char ch[50];
    printf("Enetr a string: ");
    fgets(ch,sizeof(ch),stdin);
    char h_ch[strlen(ch)];
   
    for(int i = 0; i<strlen(ch)-1; i++){
        
        char a = ch[i];
        printf("%c\n",a);
        if(!isspace(a))
            h_ch[i]=a;
        else    
            h_ch[i]='-';
    }

    puts(h_ch);

    return 0;
}

