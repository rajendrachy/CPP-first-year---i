#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "This is a sample string.";
    char ch = 's';

    char *result = strrchr(str, ch);

    if (result != NULL) {
        printf("'%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("'%c' not found in the string.\n", ch);
    }

    return 0;
}
