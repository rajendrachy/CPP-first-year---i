#include <stdio.h>

int main() {
    // Declare an array to be sorted
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(a) / sizeof(a[0]); // Calculate the number of elements in the array

    printf("Unsorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]); // Print each element of the unsorted array
    }
    printf("\n");

    // Perform insertion sort on the array
    int temp, j;
    for (int i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = temp;
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]); // Print each element of the sorted array
    }
    printf("\n");

    return 0;
}
