#include <stdio.h>

// Function to find the k-th smallest element in two sorted arrays A and B within specified ranges Ah and Bh
int kth(int A[], int B[], int *Ah, int *Bh, int k) {
    // Check if Ah and Bh point to the same location
    if (Ah[0] > Ah[1]) return B[Bh[0] + k - 1];
    if (Bh[0] > Bh[1]) return A[Ah[0] + k - 1];

    // Calculate midpoints
    int midA = (Ah[0] + Ah[1]) / 2;
    int midB = (Bh[0] + Bh[1]) / 2;

    // Check if sum of midpoints is less than k
    if ((midA - Ah[0] + 1) + (midB - Bh[0] + 1) < k) {
        if (A[midA] > B[midB])
            return kth(A, B, Ah, Bh + (midB - Bh[0] + 1), k - (midB - Bh[0] + 1));
        else
            return kth(A, B, Ah + (midA - Ah[0] + 1), Bh, k - (midA - Ah[0] + 1));
    } else {
        if (A[midA] > B[midB])
            return kth(A, B, Ah, Bh, k);
        else
            return kth(A, B, Ah, Bh + 1, k);
    }
}

int main() {
    int A[] = {1, 3, 5, 7, 9};
    int B[] = {2, 4, 6, 8, 10};
    int k_val; // Position of the element to find
    int Ah[2] = {0, 4}; // Range of array A
    int Bh[2] = {0, 4}; // Range of array B

    // Prompt the user to enter the position of the element to find
    printf("Enter the position of the element to find: ");
    scanf("%d", &k_val);

    // Find the k-th smallest element using the kth function
    int kthElement = kth(A, B, Ah, Bh, k_val);

    // Print the value of the k-th smallest element
    printf("The element at position %d is: %d\n", k_val, kthElement);

    return 0;
}
