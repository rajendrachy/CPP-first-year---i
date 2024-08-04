#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "123456abcd5678";
    char accept[] = "1234567890";

    size_t length = strspn(str, accept);

    printf("Length of the initial segment containing only characters from \"%s\": %zu\n", accept, length);

    return 0;
}
