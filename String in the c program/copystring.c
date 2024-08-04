#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Hello, world!";
    char destination[20]; // Make sure destination has enough space to hold the copied string

    // Copying source to destination
    strcpy(destination, source);

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}
