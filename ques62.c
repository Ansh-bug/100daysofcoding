//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>

int main() {
    int counter,num;
    printf("Enter the number of elements you want in your array : ");
    scanf("%d",&num);
    int arr[num+1];
    for(counter=0;counter<num;++counter){
        printf("Enter the number : ");
        scanf("%d",&arr[counter]);
    }
    printf("\nReversed array : ");
    for(counter=num-1;counter>=0;--counter){
        printf("%d ",arr[counter]);
    }
    return 0;
}
