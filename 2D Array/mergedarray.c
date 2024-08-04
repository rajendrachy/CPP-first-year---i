#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int A1[size];
    int A2[size];
    int A3[size * 2];

   printf("Enter the element of the A1: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &A1[i]);
    }

    printf("Enter elements of array A2:");
    for (int j = 0; j < size; j++) {
        scanf("%d", &A2[j]);
    }

    int i = 0, j = 0, k = 0;

   
    while (i < size && j < size) {
        if (A1[i] < A2[j]) {
            A3[k++] = A1[i++];
        } else {
            A3[k++] = A2[j++];
        }
    }

    while (i < size) {
        A3[k++] = A1[i++];
    }

   
    while (j < size) {
        A3[k++] = A2[j++];
    }

    
    for (k = 0; k < size * 2; k++) {
        printf("%d ", A3[k]);
    }

    return 0;
}
