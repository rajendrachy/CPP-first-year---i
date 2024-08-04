#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char ch = 'o';

    char *result = strchr(str, ch);

    if (result != NULL) {
        printf("'%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("'%c' not found in the string.\n", ch);
    }

    return 0;
}
