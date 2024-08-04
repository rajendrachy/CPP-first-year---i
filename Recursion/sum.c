#include<stdio.h>

int sum_arr(int arr[], int n) {
    if(n == 0) {
        return 0;
    } else {
        return arr[n-1] + sum_arr(arr, n-1);
    }
    

}
int main() {
    int arr[] = {1, 4, 6, 8, 9, 8, 50};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = sum_arr(arr, n);
    printf("%d", result);

    return 0;
}