#include <stdio.h>

void printFibonacciReverse(int n, int a, int b) {
    if (n > 0) {
        printFibonacciReverse(n - 1, b, a + b);
        printf("%d\n", b);
    }
}

int main() {
    int n;
    
    // Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Output
    printf("Fibonacci sequence in reverse order:\n");
    printFibonacciReverse(n, 1, 0);

    return 0;
}
