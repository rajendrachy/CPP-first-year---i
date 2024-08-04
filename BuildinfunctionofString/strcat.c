#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Hello, "; // Destination string
    char src[] = "world!";     // Source string

    // Concatenate src to dest
    strcat(dest, src);

    printf("Concatenated string: %s\n", dest);

    return 0;
}
