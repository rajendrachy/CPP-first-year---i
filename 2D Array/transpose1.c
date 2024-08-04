#include<stdio.h>
int main() {
    #define maxrow 10
    #define maxcol 10
    int matrix[maxrow][maxcol];
    int transpose[maxrow][maxcol];

    //input no of row and columns

    int row, col;
    printf("Enter the no of row and columns:  ");
    scanf("%d %d", &row, &col);

    printf("Enter the element for the matrix:  \n");
    for(int i=0; i<row; ++i) {
        for(int j=0; j<col; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    //transpose of the matrix
    for(int i=0; i<row; ++i) 
        for(int j=0; j<col; ++j) 
            transpose[j][i] = matrix[i][j];

    //original matrix
    printf("Original number \n");
    for(int i=0; i<row; ++i) {
        for(int j=0; j<col; ++j) 
            printf("%d\t", matrix[i][j]);
            printf("\n");
        
    }

    // Display the transposed matrix
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < col; ++i) {
        for (int j = 0; j < row; ++j)
            printf("%d\t", transpose[i][j]);
        printf("\n");
    }
    
    return  0;

}