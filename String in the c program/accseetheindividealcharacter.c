#include<stdio.h>
int main () {
    char str[] = "P\0hysics Wallah\0";
    int i = 0;
    while(str[i] != '\0') {
        printf("%d", str[0]);
        i++;
    }
    return 0;

}