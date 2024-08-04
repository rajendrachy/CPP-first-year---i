#include <stdio.h>

int main() {
    // Example 2D array
    int matrix[3][3] = {
        {9, 2, 2},
        {2, 9, 6},
        {7, 8, 5}
    };

   
    int i = 1;
    int j = 1;

    
    for (int row = 0; row < 3; row++) {
        matrix[row][j] = 0;
    }

    for (int col = 0; col < 3; col++) {
        matrix[i][col] = 0;
    }


   printf("The result is: \n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d\t", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
