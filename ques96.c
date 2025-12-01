
// Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char *s, char *e) {
    char temp;
    while (s < e) {
        temp = *s;
        *s = *e;
        *e = temp;
        s++;
        e--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

  
    char *wordStart = NULL;
    for (int i = 0; i <= strlen(str); i++) {
        if (wordStart == NULL && str[i] != ' ' && str[i] != '\0') {
            wordStart = &str[i];  
        } 
        if ((str[i] == ' ' || str[i] == '\0') && wordStart) {
            reverseWord(wordStart, &str[i - 1]);
            wordStart = NULL;
        }
    }

    printf("%s\n",str);
    return 0;
}

