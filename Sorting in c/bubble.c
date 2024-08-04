#include <stdio.h>

int main() {
    // Declare an array to be sorted
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    printf("Unsorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print each element of the unsorted array
    }
    printf("\n");

    // Perform bubble sort on the array
    for (int i = 0; i < n - 1; i++) { // Outer loop for each pass
        for (int j = 0; j < n - i - 1; j++) { // Inner loop for comparisons and swaps
            // Compare adjacent elements and swap them if they are in the wrong order
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print each element of the sorted array
    }
    printf("\n");

    return 0;
}
