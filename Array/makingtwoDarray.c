#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}}; // Original 2D array
    int (*p)[3] = arr; // Pointer to an array of 3 integers

    // Creating a 2D array from the pointer
    int newArr[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            newArr[i][j] = *(*(p + i) + j);
        }
    }


    // Printing the new 2D array
    printf("New 2D array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", newArr[i][j]);
        }
        printf("\n");
    }


    return 0;
}
