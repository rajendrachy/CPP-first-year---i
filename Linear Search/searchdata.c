#include<stdio.h>
int main() {
    int found = 0;
    int arr[] = {2, 8, 9, 4, 5, 8, 6, 2, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

     int data = 6;
    for(int i=0; i<n; i++) {
        if(arr[i] == data) {
            printf("Element at index %d\n", i); // i print the index
            found = 1; //while found the element
            break; //not searching other element if element is found
        }
    }

    if(found == 0) {
        printf("Element is not found\n");
    }
    return 0;


//or 
//if(i==n) {
 //   printf("Element is not found: ");
//}//
}