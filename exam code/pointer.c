#include <stdio.h>

int main() {
    int N;

    // Input: Number of elements
    printf("Enter the number of elements in the list: ");
    scanf("%d", &N);

    // Input: List of integers
    int arr[N];
    printf("Enter %d space-separated integers: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate shifts using Insertion Sort
    int shifts = 0;
    for (int i = 1; i < N; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
            shifts++;
        }
        arr[j + 1] = key;
    }

    // Output
    printf("Total number of shifts: %d\n", shifts);

    return 0;
}
