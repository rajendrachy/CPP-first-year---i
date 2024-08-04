#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Element Count\n");
    for (int i = 0; i <= max; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == i) {
                count++;
            }
        }
        if (count > 0) {
            printf("The count is : %d -> %d\n", i, count);
        }
    }

    return 0;
}
