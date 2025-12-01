
//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main() {
    int counter,num,posi,tofind;
    printf("Enter the number of elements you want in your array : ");
    scanf("%d",&num);
    int arr[num+1];
    for(counter=0;counter<num;++counter){
        printf("Enter the number : ");
        scanf("%d",&arr[counter]);
    }
    printf("\nEnter the number to find : ");
    scanf("%d",&tofind);
    for(counter=0;counter<num;++counter){
        if(arr[counter]==tofind){
            printf("Found at index  : %d \n",counter);
        }
    }
    return 0;
}

