
// Q91: Remove all vowels from a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){

    char ch[50];
    printf("Enter a string: ");
    fgets(ch,sizeof(ch),stdin);
    char z[50];
    int count = 0;

    for(int i = 0; i<strlen(ch)-1; i++){
        ch[i]=tolower(ch[i]);

    }

    for(int i = 0; i<strlen(ch)-1; i++){
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
            continue;
        else
            z[count]=ch[i];
            count++;        
    }

    puts(z);

    return 0;
}

