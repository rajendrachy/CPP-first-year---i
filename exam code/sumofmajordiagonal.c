#include <stdio.h>

int main() {
    int rows, cols;

    // Input: Number of rows and columns
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Input: Matrix elements
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and print the sum of the major diagonal elements
    int sum = 0;
    for (int i = 0; i < rows && i < cols; i++) {
        sum += matrix[i][i];
    }

    // Output
    printf("Sum of elements of the major diagonal of the matrix: %d\n", sum);

    return 0;
}
