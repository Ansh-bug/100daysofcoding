/*Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>

int prime(int n);

int main() {
    int num,counter;

    printf("Enter the Number: ");
    scanf("%d",&num);

    for(counter=num;counter>=2;--counter){
        if(prime(counter)){
            printf("%d ",counter);
        }
    }
    return 0;
}

int prime(int n) {
    if (n < 2) return 0;
    for (int j = 2; j <= n/2; ++j) {
        if (n % j == 0)
            return 0;
    }
    return 1;
}
