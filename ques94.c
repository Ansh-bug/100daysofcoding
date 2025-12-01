
// Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[50];
    char l[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);


    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        }
        else {
            word[j] = '\0';
            len = strlen(word);
            if (len > maxLen) {
                maxLen = len;
                strcpy(l, word);
            }
            j = 0;
            if (str[i] == '\0')
                break;
        }
        i++;
    }

    printf("%s\n", l);

    return 0;
}

