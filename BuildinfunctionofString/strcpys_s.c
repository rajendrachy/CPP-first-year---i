#include <stdio.h>
#include <string.h>

int main() {
    char dest[20]; // Destination buffer
    const char src[] = "Hello, world!"; // Source string

    // Copy src to dest using strcpy_s
    if (strcpy_s(dest, sizeof(dest), src) == 0) {
        printf("The string was copied successfully: %s\n", dest);
    } else {
        printf("Error copying the string.\n");
    }

    return 0;
}
