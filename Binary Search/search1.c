#include<stdio.h>

int binarysearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;
         
        if(target == arr[mid]) {
             return mid;
        } else if(target > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; //element is not found
}
int main() {

    int arr[] = {1, 6, 9, 19, 25, 30, 40, 60, 70, 90, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
   int target = 70;
   int result = binarysearch(arr, n, target);
  
  if(result != -1) {
    printf("Element found in  %d the index %d\n", target, result);
  } else {
    printf("Element is not found %d", target);
  }
    return 0;
}