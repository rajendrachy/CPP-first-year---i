#include <stdio.h>

int main() {
    // Example 2D array
    int matrix[3][3] = {
        {1, 9, 3},
        {2, 5, 4},
        {7, 8, 9}
    };

    

    for (int k = 0; k < 3; k++) {
        matrix[k][k] = 0;
    }

     for (int k = 0; k < 3; k++) {
        matrix[k][2 - k] = 0;
    }

   printf("/result: \n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d\t", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
