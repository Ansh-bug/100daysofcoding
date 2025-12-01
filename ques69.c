// Q69: Find the second largest element in an array.

#include <stdio.h>

int main(){

    int l;
    printf("Enter no of elemet in array: ");
    scanf("%d",&l);

    int a[l];
    printf("Enter %d element in arra: ",l);
    for(int i = 0;i<l;i++){
        scanf("%d",&a[i]);
    }

    //Arranging the element of array in increasing order

    for(int i = 0;i<l-1;i++){

        for(int j = i ; j<l-1;j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int i = 0;i<l;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("Second largest element is: %d\n",a[(l-2)]);

    return 0;
}
