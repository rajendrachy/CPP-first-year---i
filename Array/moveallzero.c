#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    int count = 0; // Count of non-zero elements

    // Traverse the array. If element encountered is non-zero,
    // then replace the element at index 'count' with this element
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    // Now all non-zero elements have been shifted to
    // front and 'count' is set as index of first 0.
    // Make all elements from 'count' to 'n' as 0
    while (count < n) {
        arr[count] = 0;
        count++;
    }
}

int main() {
    int arr[] = {0, 2, 0, 4, 5, 6, 0, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    moveZerosToEnd(arr, n);

    printf("\nArray after moving zeros to the end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
