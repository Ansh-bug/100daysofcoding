
// Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){

    char str1[50];
    char str2[50];
    printf("Enter 1st strings: ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter 2nd string: ");
    fgets(str2,sizeof(str2),stdin);

    if(strlen(str1)!= strlen(str2)){
        printf("Not a anagram\n");
        return 0;
    }
    else{
        for(int i = 0; i<strlen(str1); i++){
            int count = 0;
            char a = str1[i];
            for(int j = 0; j<strlen(str2); j++){
                if(a==str2[j])
                    count++;
            }

            if(count ==0){
                printf("Not anagram\n");
                return 0;
            }
            else{
                continue;
            }
        }
        printf("Anagram\n");
    }


    return 0;
}

