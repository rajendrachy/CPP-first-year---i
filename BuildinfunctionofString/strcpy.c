#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, world!"; // Source string
    char dest[20]; // Destination string, make sure it's large enough to hold the copied string
    
    strcpy(dest, src); // Copying src to dest
    
    printf("Source string: %s\n", src);
    printf("Copied string: %s\n", dest);
    
    return 0;
}
