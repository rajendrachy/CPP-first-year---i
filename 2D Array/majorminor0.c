#include<stdio.h>


void zero(int matrix[10][10], int n) {
    for (int i = 0; i < n; i++) {
        matrix[i][i] = 0;                      // Set major diagonal to zero
        matrix[i][n - 1 - i] = 0;              // Set minor diagonal to zero
    }
}

void printzero(int matrix[10][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main () {

    int n, row, col;
    scanf("%d", &n);
    printf("Enter the N:");
    printf("Enter the row and column: ");
    scanf("%d %d", &row, &col);
    int matrix[20][20];
    printf("Enter the matrix: ");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal matrix\n");
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }


    //diagonal zero
    zero(matrix, n);
    printf("Diaginal zero: ");


    // print zero matrix

    printzero(matrix, row, col);

    return 0;
}