#include<stdio.h>

// Function to copy elements from source array to destination array
void copyArray(int *source, int *destination, int size) {
    // Loop through each element of the array
    for (int i = 0; i < size; i++) {
        // Copy the element from the source array to the destination array
        destination[i] = source[i];
    }
}

// Main function
int main() {
    // Declare and initialize the source array (renamed as 'a')
    int a[] = {1, 2, 3, 4, 5};

    // Declare the destination array (size should be the same as the source array, renamed as 'b')
    int b[5];

    // Calculate the size of the arrays
    int size = sizeof(a) / sizeof(a[0]);

    // Copy elements from the source array to the destination array
    copyArray(&a[0], &b[0], size);

    // Print the contents of the original array
    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    // Print the contents of the copied array
    printf("\nCopied Array:   ");
    for (int i = 0; i < size; i++) {
        printf("%d ", b[i]);
    }

    // Indicates successful completion of the program
    return 0;
}
