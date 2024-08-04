#include <stdio.h>

int main() {
    int i = 0, j = 0, d = 2; // Initialize variables for loop control and rotation count
    int temp = 0, n = 10; // Temporary variable and array size
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Initialize array

    // Loop for rotating the array left by d positions
    for(int i = 0; i < d; i++) {
        temp = arr[0]; // Store the first element in temp
        // Shift each element to the left
        for(int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp; // Move the stored element to the end
    }

    // Print the rotated array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
