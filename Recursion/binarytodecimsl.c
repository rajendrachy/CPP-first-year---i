#include <stdio.h>

// Function to convert binary to decimal recursively
int binaryToDecimal(int binary) {
    // Base case: end of the binary representation
    if (binary == 0) {
        return 0;
    } else {
        // Recursive case: calculate the decimal equivalent
        return (binary % 10) + 2 * binaryToDecimal(binary / 10);
    }
}

int main() {
    // Declare variables
    int binary, decimal;

    // Input the binary number from the user
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Check if the input is non-negative
    if (binary < 0) {
        // printf("Please enter a non-negative binary number.\n");
        return 1; // Return an error code
    }

    // Call the binaryToDecimal function to convert binary to decimal
    decimal = binaryToDecimal(binary);

    // Print the decimal representation
    printf("Decimal representation: %d\n", decimal);

    return 0;
}
