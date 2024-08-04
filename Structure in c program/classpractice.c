// #include<stdio.h>
// int main () {
//     // printf("Ram", "shyam");

//     // printf(5+"Welcome");
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main () {
//     char ch[] = "Shyam";
//     printf("%s", (ch+strlen(ch)));
//     return 0;
// }

#include<stdio.h>
int main () {
    char str1[] = "Ram";
    char str2[] = "Shyam";
    strcat(str1, str2);
    // strncat(str1, str2);
    return 0;
}