// Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main(){

    int row,colm;
    printf("Enter no of rows followed by no of columns: ");
    scanf("%d%d",&row,&colm);

    int arr[row][colm];
    int sum_arr[row];

    for(int i = 0;i<row;i++){

        for(int j = 0;j<colm;j++){
            printf("Enter %d%d element in array: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i = 0; i<row; i++){
        int sum = 0;
        for(int j = 0; j<colm; j++){
            sum += arr[i][j];
        }
        sum_arr[i]=sum;
    }

    for(int i = 0;i<row ;i++){
        printf("%d ",sum_arr[i]);
    }
    printf("\n");
    return 0;
}
