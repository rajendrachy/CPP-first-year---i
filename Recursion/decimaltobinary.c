#include <stdio.h>

// Function to convert decimal to binary recursively
void decimalToBinary(int decimal) {
    if (decimal > 0) {
        decimalToBinary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

int main() {
    int decimal;

    // Input the decimal number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Check if the input is non-negative
    if (decimal < 0) {
        printf("Please enter a non-negative decimal number.\n");
        return 1; // Return an error code
    }

    // Print the binary representation
    printf("Binary representation: ");
    if (decimal == 0) {
        printf("0");
    } else {
        decimalToBinary(decimal);
    }

    return 0;
}
