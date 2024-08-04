#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "12345abcdefgh";
    char reject[] = "abcdef";

    size_t length = strcspn(str, reject);

    printf("Length of the initial segment containing characters not from \"%s\": %zu\n", reject, length);

    return 0;
}
