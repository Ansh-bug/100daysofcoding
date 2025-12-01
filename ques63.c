//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int counter,num1,num2,j;
    printf("Enter the number of elements you want in your array 1 : ");
    scanf("%d",&num1);
    int arr1[num1+1];
    for(counter=0;counter<num1;++counter){
        printf("Enter the number : ");
        scanf("%d",&arr1[counter]);
    }
    printf("Enter the number of elements you want in your array 2 : ");
    scanf("%d",&num2);
    int arr2[num2+1];
    for(counter=0;counter<num2;++counter){
        printf("Enter the number : ");
        scanf("%d",&arr2[counter]);
    }
    j=num1+num2;
    int arr3[j+1];
    for(counter=0;counter<num1;++counter){
        arr3[counter]=arr1[counter];
    }
    for(counter=num1;counter<j;++counter){
        arr3[counter]=arr2[counter-num1];
    }
    printf("\nThe new array 3 is : ");
    for(counter=0;counter<j;++counter){
        printf("%d ",arr3[counter]);
    }
    return 0;
}
