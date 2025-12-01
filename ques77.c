
// Q77: Check if the elements on the diagonal of a matrix are distinct.

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

    
    int distinct = 1; 

    for (int i = 0; i < rows && i < cols; i++) {
        for (int j = i + 1; j < rows && j < cols; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}

