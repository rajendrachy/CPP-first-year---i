#include<stdio.h>
int main () {
    char arr[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char ch = '\0'; //this is consider as a single character
    //or a NULL Character  ascii value of the \0 -> 0 (zero):
    int x = 0;
    char a = (char)x; //a -> '\0;

    printf("%d", ch);
    printf("%c", a);
    return 0;
}