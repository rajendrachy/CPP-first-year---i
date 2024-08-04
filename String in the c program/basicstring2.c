#include<stdio.h>
int main () {
    char arr[] = {'H', 'e', 'l', 'l', 'o'};

    int i = 0;
    while(arr[i] != '\0') {
        printf("%c", arr[i]);
        i++;
    }
    printf("%c", arr[i]);
    return 0;
}

//\0 -> ascii value is 0