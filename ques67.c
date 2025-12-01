// Q67: Insert an element in an array at a given position.

#include <stdio.h>

int main(){

    int l;
    printf("Enter no of element in an array: ");
    scanf("%d",&l);

    int arr[20];
    printf("Enter %d element in array: ",l);
    for(int i = 0; i<l; i++){
        scanf("%d",&arr[i]);
    }

    int pos,element;
    printf("Enter position and element: ");
    scanf("%d%d",&pos,&element);

    for(int i = l; i> pos; i--){
        arr[i] = arr[i-1];
    }

    arr[pos] = element;
    l++;

    for(int i = 0; i<l ;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
