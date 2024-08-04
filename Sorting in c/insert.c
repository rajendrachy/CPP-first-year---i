#include<stdio.h>
int main() {
    int n;
    printf("Enter the no of array: ");
    scanf("%d", &n);
    printf("Enter the elament of the array: ");
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\n");


    //logic of the code
    int temp, j;
    for(int i=1; i<n; i++) {
        temp = arr[i];
        j = i - 1;

    while(j>=0 && arr[j] > temp) {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;
}

 printf("Sorted array\n");
    for(int i=0; i<n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;
}