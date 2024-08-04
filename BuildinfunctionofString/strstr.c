#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This is a sample string.";
    char substr[] = "sample";

    char *result = strstr(str, substr);

    if (result != NULL) {
        printf("Substring \"%s\" found at position: %ld\n", substr, result - str);
    } else {
        printf("Substring \"%s\" not found in the string.\n", substr);
    }

    return 0;
}
