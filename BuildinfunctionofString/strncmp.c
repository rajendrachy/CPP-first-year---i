#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";
    char str2[] = "hello world";
    int n = 5; // Number of characters to compare

    int result = strncmp(str1, str2, n);

    if (result == 0) {
        printf("First %d characters of the strings are equal.\n", n);
    } else if (result < 0) {
        printf("First %d characters of string 1 are less than string 2.\n", n);
    } else {
        printf("First %d characters of string 1 are greater than string 2.\n", n);
    }

    return 0;
}
