#include <stdio.h>

int countWords(char str[]) {
    int count = 0;
    int isWord = 0; // Flag to track if a word is being counted
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            isWord = 0; // Reset flag when space, newline, or tab is encountered
        } else if (isWord == 0) {
            isWord = 1;
            count++; // Increment count only when a new word starts
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s",&str);

    int totalWords = countWords(str);
    printf("Total number of words in the string: %d\n", totalWords);

    return 0;
}