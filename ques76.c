
// Q76: Check if a matrix is symmetric.

#include <stdio.h>
#include <stdbool.h>
int main(){

    int row,colm;
    printf("Enter no of rows followed by no of columns: ");
    scanf("%d%d",&row,&colm);

    int arr[row][colm];
    int n_row = colm,n_colm = row;
    int t_arr[n_row][n_colm];

    for(int i = 0;i<row;i++){

        for(int j = 0;j<colm;j++){
            printf("Enter %d%d element in array: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for (int i = 0; i<row; i++){

        for(int j = 0; j<colm; j++){
            int a = arr[i][j];
            t_arr[j][i] = a;
        }
    }

    bool flag = true;

    for(int i = 0; i< row ; i++){

        for(int j = 0; j< colm ;j++){
            if(arr[i][j] != t_arr[i][j]){
                flag = false;
            }
        }
    }

    if( flag == true)
        printf("Symmetric\n");
    else
        printf("Not Symmetric\n");

    return 0;
}

