#include<stdio.h>

// Function to calculate the GCD of two numbers recursively
int gcd(int a, int b) {
    // Base case: if the second number is 0, the GCD is the first number
    if (b == 0) {
        return a;
    } else if (a == 0) {
        // If the first number is 0, the GCD is the second number
        return b;
    } else {
        // Recursive case: call the function with the second number and the remainder of the division
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;

    // Input the two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the gcd function to find the GCD of the two numbers
    int result = gcd(num1, num2);

    // Print the result
    printf("GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}