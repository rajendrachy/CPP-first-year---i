#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world! This is a sample string.";
    const char delim[] = " ,.!"; // Delimiters: space, comma, period, exclamation mark

    // Tokenize the string using strtok
    char *token = strtok(str, delim);

    // Print tokens one by one
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delim);
    }

    return 0;
}
