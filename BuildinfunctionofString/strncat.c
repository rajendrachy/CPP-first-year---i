#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Hello, "; // Destination string
    char src[] = "world!";     // Source string

    // Concatenate at most 3 characters from src to dest
    strncat(dest, src, 3);

    printf("Concatenated string: %s\n", dest);

    return 0;
}
