#include <stdio.h>

int findMissingElement(int arr[], int size) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] != mid) {
            // Missing element is on the left side
            right = mid - 1;
        } else {
            // Missing element is on the right side
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 7, 8, 9}; // Example sorted array
    int size = sizeof(arr) / sizeof(arr[0]);

    int missingElement = findMissingElement(arr, size);
    printf("The minimum missing element is: %d\n", missingElement);

    return 0;
}
