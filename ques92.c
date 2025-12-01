// Q92: Find the first repeating lowercase alphabet in a string.


#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter a string: ");
    char str[50];
    int freq[26] = {0}; 

    fgets(str,sizeof(str),stdin);

    
    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';  
        

        if (freq[index] == 1) {  
            printf("%c\n", str[i]);
            return 0;
        }
        freq[index]++;
    }

    printf("No repeating character\n");
    return 0;
}
