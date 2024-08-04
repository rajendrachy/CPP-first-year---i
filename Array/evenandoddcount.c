#include<stdio.h>
int main() {
    int arr[10];
    int even=0, odd = 0;
    printf("Enter the 10 integer: ");
    for(int i=0; i<10; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<10; i++) {
        if(arr[i] % 2 == 0) 
        even = even + 1; //even++
        else 
        odd++;  //odd=odd+1
    }
    printf("The even no: %d\n", even);
    printf("The odd no: %d\n", odd);
    return 0;

}