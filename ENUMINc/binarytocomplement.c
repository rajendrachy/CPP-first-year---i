#include<stdio.h>

int twocomplement(int n) {
    // Assuming k is fixed to 0 (least significant bit)
    return n ^ ~1; // Toggle the least significant bit
}

int main () {
    printf("Enter a value to find its two's complement: ");
    int n;
    scanf("%d", &n);

    int result = twocomplement(n);
    printf("Two's complement of %d is: %d\n", n, result);

    return 0;
}
