
// Q79: Perform diagonal traversal of a matrix.


#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d%d", &rows, &cols);
    
    int matrix[rows][cols];
    
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (int k = 0; k < rows; k++) {
        int i = k, j = 0;
        while (i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }


    for (int k = 1; k < cols; k++) {
        int i = rows - 1, j = k;
        while (i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
    }

    return 0;
}

