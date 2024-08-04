#include <stdio.h>

#define N 3 // Assuming a square matrix of size N x N

int main() {
    // Input matrix
    
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");

    // Displaying the original matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Transpose the matrix
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            // Swap elements across the diagonal
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Reverse each row to get the 90-degree rotated matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N / 2; j++) {
            // Swap elements from the beginning and end of the row
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][N - 1 - j];
            matrix[i][N - 1 - j] = temp;
        }
    }

    printf("\nRotated Matrix (90 degrees clockwise):\n");

    // Displaying the rotated matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
