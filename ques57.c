//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>

int main() {
    int counter,num,sum=0;
    printf("Enter the number of elements you want in your array : ");
    scanf("%d",&num);
    int arr[num+1];
    for(counter=0;counter<num;++counter){
        printf("Enter the number : ");
        scanf("%d",&arr[counter]);
    }
    printf("The sum of the array is : ");
    for(counter=0;counter<num;++counter){
        sum+=arr[counter];
        
    }
    printf("%d ",sum);
    return 0;
}
