#include<stdio.h>
#define max_col 10
#define max_row 10

int main() {
    int matrix[max_row][max_col];

    int row, col;
    printf("Enter the row and column:  ");
    scanf("%d %d", &row, &col);

    // Insert matrix
    printf("Enter the matrix:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d\t", &matrix[i][j]);
        }
    }

    // Fill the matrix with values from 1 to 5 in a row-wise manner
    int count = 1;
    int i, j;

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(count <= 5) {
                matrix[i][j] = count;
                count++;
            }
            if(count > 5) 
                break;
        }
        if(count > 5) 
            break;
    }

    // Print the updated matrix
    printf("Updated matrix:\n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
