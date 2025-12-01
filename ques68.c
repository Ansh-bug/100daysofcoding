// Q68: Delete an element from an array.

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

    int pos,z=0;
    int ch[l];
    printf("Enter position at which element is to be deleted: ");
    scanf("%d",&pos);

    for(int i = 0; i<l; i++){
        if(pos == i){
            
            continue;
        }
        else
        {
            ch[z++] = arr[i];
        }
    }

    for(int i = 0; i<l-1; i++){
        printf("%d ",ch[i]);
    }
    printf("\n");

    return 0;
}
