#include<stdio.h>
int main () {

    int arr[] = {10, 0, 9, 2, 1, 5, 7, 24, 4, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted arr:   ");

    for(int i=0; i<n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");


    //code
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    //sorted array
    printf("Sorted array:   ");
    for(int i=0; i<n; i++) {
        printf("%d  ", arr[i]);
    }
    return 0;
}