#include<stdio.h>

void print3largest(int arr[], int size)
 {
    int i, first, second, third;

    if(size < 3) {
        printf("Invalid");
        return;
    }

      first = arr[0];
      second = arr[1];
     third = arr[2];


    for(int i=0; i<size; i++) {
        if(arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }

        else if(arr[i] > second) {
            third = second;
            second = arr[i];
        }

        else if(arr[i] > third) 
            third = arr[i];
        
    }

    printf("Three largest element are %d %d %d\n", first, second, third);
}
int main() {

    // int arr[] = {12, 13, 1, 10, 34, 1};
    // int n = sizeof(arr)/sizeof(arr[0]);

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    print3largest(arr, n);
    return 0;
}


//................... time complexicity.............

// Time Complexity: O(n)
// Auxiliary Space: O(1)