#include <stdio.h>

int main() {
    int rows, columns;

    // Input matrix dimensions
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &columns);

    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];

    // Input elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Matrix addition
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
