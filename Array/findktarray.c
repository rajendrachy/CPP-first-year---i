#include <stdio.h>

int kth(int *arr1, int *arr2, int *n, int *m, int k) {
    if (arr1 == n) 
        return arr2[k];
    if (arr2 == m) 
        return arr1[k];
    int mid1 = (n - arr1) / 2;
    int mid2 = (m - arr2) / 2;
    if (mid1 + mid2 < k) {
        if (arr1[mid1] > arr2[mid2])
            return kth(arr1, arr2 + mid2 + 1, m, n, k - mid2 - 1);
        else
            return kth(arr1 + mid1 + 1, arr2, n, m, k - mid1 - 1);
    } else {
        if (arr1[mid1] > arr2[mid2]) 
            return kth(arr1, arr2, arr1 + mid1, m, k);
        else
            return kth(arr1, arr2, n, arr2 + mid2, k);
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int n = 5;
    int m = 5;
    int k;

    // Input the value of k
    printf("Enter the position (k): ");
    scanf("%d", &k);

    // Print the k-th element
    printf("The k-th element is: %d\n", kth(arr1, arr2, &arr1[n - 1], &arr2[m - 1], k - 1));

    return 0;
}
