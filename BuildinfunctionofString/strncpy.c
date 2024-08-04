#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello,world!"; // Source string
    char dest[20]; // Destination string, make sure it's large enough to hold the copied string
    
    // Copy at most 10 characters from src to dest
    strncpy(dest, src, 10); 
    
    // Ensure the destination string is null-terminated
    dest[10] = '\0'; 
    
    printf("Source string: %s\n", src);
    printf("Copied string: %s\n", dest);
    
    return 0;
}
