#include <stdio.h>

// Function to partition the array and return the pivot index
int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int start = low + 1;
    int end = high;

    while (start <= end) {
        while (arr[start] <= pivot && start <= high)
            start++;

        while (arr[end] > pivot)
            end--;

        if (start < end) {
            // Swap elements at start and end
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }

    // Swap pivot element with element at end
    int temp = arr[low];
    arr[low] = arr[end];
    arr[end] = temp;

    return end;
}

// Quicksort function
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}

int main() {
    
    int arr[] = {4, 2, 7, 1, 9, 5};
     int size = sizeof(arr) / sizeof(arr[0]);

    // Display original array
    printf("Original array: ");
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);

    // Sort the array using quicksort
    quicksort(arr, 0, size - 1);

    // Display sorted array
    printf("\nSorted array: ");
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);

    return 0;
}
