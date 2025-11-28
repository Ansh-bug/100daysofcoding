//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>

int main() {
    int counter,num,sum=0,odd=0,even=0;
    printf("Enter the number of elements you want in your array : ");
    scanf("%d",&num);
    int arr[num+1];
    for(counter=0;counter<num;++counter){
        printf("Enter the number : ");
        scanf("%d",&arr[counter]);
    }
    puts("");
    for(counter=0;counter<num;++counter){
        if(arr[counter]%2==0){
            ++even;
        }
        else{
            ++odd;
        }
    }
    printf("The number of even digits are %d and the odd are %d ",even,odd);
    return 0;
}
