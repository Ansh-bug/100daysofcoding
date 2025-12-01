
// Q89: Count frequency of a given character in a string.

#include <stdio.h>
#include <string.h>
int main(){

    char ch[50];
    printf("Enter a string: ");
    fgets(ch,sizeof(ch),stdin);

    printf("Enter character to check frequency: ");
    char c;
    scanf("%c",&c);
    int count = 0;

    for(int i = 0; i< strlen(ch)-1; i++){
        if (c==ch[i])
            count++;
    }
    printf("%d\n",count);

    return 0;
}

