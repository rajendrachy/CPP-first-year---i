#include <stdio.h>
#include <string.h>

int main() {
    char dest[20]; // Destination buffer
    const char src[] = "Hello, world!"; // Source string

    // Copy src to dest using strncpy_s
    if (strncpy_s(dest, sizeof(dest), src, sizeof(dest) - 1) == 0) {
        printf("The string was copied successfully: %s\n", dest);
    } else {
        printf("Error: Copy operation failed.\n");
    }

    return 0;
}
