//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>

int main() {
    int counter,num,sum=0,max,min;
    printf("Enter the number of elements you want in your array : ");
    scanf("%d",&num);
    int arr[num+1];
    for(counter=0;counter<num;++counter){
        printf("Enter the number : ");
        scanf("%d",&arr[counter]);
    }
    puts("");
    max=arr[0];
    min=arr[0];
    for(counter=0;counter<num;++counter){
        if(max<=arr[counter]){
            max=arr[counter];
        }
        if(min>=arr[counter]){
            min=arr[counter];
        }
    }
    printf("The max is %d and the min is %d ",max,min);
    return 0;
}
