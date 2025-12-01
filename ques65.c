// Q65: Search in a sorted array using binary search.

#include <stdio.h>

int main(){

    int l;
    printf("Enter length of array: ");
    scanf("%d",&l);

    // Input in array
    int arr[l];
    printf("Enter %d element in array: ",l);
    for(int i = 0;i<l;i++){
        scanf("%d",&arr[i]);
    }

    //Sorting of array for binary search
    for(int i = 0;i<l-1;i++){
        for(int j = 0;j<l-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // Printing the sorted array
    for(int i = 0;i<l;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    // Performing the binary search
    int le = 0;
    int r = l-1;
    int search,index = 0;
    printf("Enter number to be searched: ");
    scanf("%d",&search);

    while(le <= r){
        int mid = (le+(r-le))/2;

        if(arr[mid] == search){
            index = mid;
            break;

        }
        else if(arr[mid] < search){
            le = mid+1;

        }
        else
        {
            r = mid-1;
        }
    }

    if(index != 0)
        printf("Found at index: %d\n",index);
    else
        printf("%d\n",-1);



    return 0;
}
