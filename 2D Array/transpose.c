#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main() {
    int matrix[MAX_ROWS][MAX_COLS], transpose[MAX_ROWS][MAX_COLS];
    int rows, cols;

    // Input for the matrix
    printf("Enter dimensions for the matrix (rows columns): ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            scanf("%d", &matrix[i][j]);

    // Transpose the matrix
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            transpose[j][i] = matrix[i][j];

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            printf("%d\t", matrix[i][j]);
        printf("\n");
    }

    // Display the transposed matrix
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j)
            printf("%d\t", transpose[i][j]);
        printf("\n");
    }

    return 0;
}
