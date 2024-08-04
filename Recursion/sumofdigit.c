#include<stdio.h>

// Function to calculate the sum of digits recursively
int sum_of_digits(int num) {
    // Base case: if the number is a single digit
    if (num < 10) {
        return num;
    } else {
        // Recursive case: sum the last digit with the sum of the rest of the digits
        return num % 10 + sum_of_digits(num / 10);
    }
}

int main() {
    int number;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the sum_of_digits function to find the sum of the digits
    int result = sum_of_digits(number);

    // Print the result
    printf("Sum of the digits: %d\n", result);

    return 0;
}
