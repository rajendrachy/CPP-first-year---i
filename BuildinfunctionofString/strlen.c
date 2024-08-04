#include <stdio.h>
#include <string.h> // Include the string.h header for the strlen function

int main() {
    char str[] = "Hello, world!"; // Sample string
    int length = strlen(str); // Using the built-in strlen function
    printf("Length of the string \"%s\" is: %zu\n", str, length);
    return 0;
}
