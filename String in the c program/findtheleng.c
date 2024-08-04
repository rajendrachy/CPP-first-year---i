#include <stdio.h>

// Function to calculate the length of a string
int stringLength(char str[]) {
    int length = 0;

    // Iterate over the characters until the null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];
    int i = 0;
    char c;

    printf("Enter a string: ");

    // Read characters until newline or end of input
    while ((c = getchar()) != '\n' && c != EOF) {
        str[i++] = c;
    }

    str[i] = '\0'; // Add null terminator to mark the end of the string

    // Calculate and print the length of the string
    printf("Length of the string: %d\n", stringLength(str));

    return 0;
}
