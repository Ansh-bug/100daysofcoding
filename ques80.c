
// Q80: Multiply two matrices.

#include <stdio.h>
int main(){

    int row1,colm1;
    printf("Enter no of rows followed by no of columns: ");
    scanf("%d%d",&row1,&colm1);

    int arr1[row1][colm1];

    for(int i = 0;i<row1;i++){

        for(int j = 0;j<colm1;j++){
            printf("Enter %d%d element in array: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }


    int row2,colm2;
    printf("Enter no of rows followed by no of columns: ");
    scanf("%d%d",&row2,&colm2);

    int arr2[row2][colm2];

    for(int i = 0;i<row2;i++){

        for(int j = 0;j<colm2;j++){
            printf("Enter %d%d element in array: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }


    int mul[row2][colm2];

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < colm2; j++) {
            for (int k = 0; k < colm1; k++) {
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for(int i = 0; i< row2; i++){
        for(int j = 0; j<colm2; j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}

