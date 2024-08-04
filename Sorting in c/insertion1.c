#include<stdio.h>
int main() {

    int arr[] = {4, 5, 8, 2, 1, 3, 9, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Unsorted array:   ");
    for(int i=0; i<n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");

    //code logic
    int temp, j;
    for(int i=1; i<n; i++) {
        temp = arr[i];
        j = i - 1;
        while(j>=0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]= temp;


    }


    printf("Sorted Array:     ");
    for(int i=0; i<n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    return 0;
}