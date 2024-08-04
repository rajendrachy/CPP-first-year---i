
#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    int l = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[l++] = arr[i];
        }
    }

   
    for (int i = 0; i < l; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
