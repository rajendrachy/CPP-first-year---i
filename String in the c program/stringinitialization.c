#include<stdio.h>
int main () {
    char arr[] = "Hello my name is rajendra chaudhary\0";
    int i= 0;
    while(arr[i] != '\0') { //power of the \0
        printf("%c ", arr[i]);
        i++;
    }
    return 0;
}