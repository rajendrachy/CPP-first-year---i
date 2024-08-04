#include<stdio.h>
#include<string.h>

int main () {
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s", str);

    int size = strlen(str);

    // Reversing each word individually
    int start = 0;
    for (int i = 0; i <= size; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            for (int j = start, k = i - 1; j < k; j++, k--) {
                char temp = str[j];
                str[j] = str[k];
                str[k] = temp;
            }
            start = i + 1;
        }
    }

    printf("The reversed string is: %s\n", str);

    return 0;
}
