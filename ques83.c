// Q83: Count vowels and consonants in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int  main(){

    int c_vowel = 0, c_conso = 0;
    char ch[50];
    printf("Enter a string: ");
    fgets(ch, sizeof(ch),stdin);

    int i =0;
    while(ch[i]!= '\0'){
        ch[i]=tolower(ch[i]);
        i++;
    }


    for(int i = 0 ;i <strlen(ch)-1 ; i++){
        if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' ||  ch[i] == 'o' || ch[i] == 'u')
            c_vowel++;
        else
            c_conso++;
    }

    printf("Vowels: %d,Consonants: %d\n",c_vowel,c_conso);

    return 0;
}
