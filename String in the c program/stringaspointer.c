// #include<stdio.h>
// #include<string.h>
// int main () {

//     char str[] = "college wallah";
//     char *ptr = str; // ptr now point to str[0]

//     printf("%p\n", &str[0]);
//     printf("%p\n", str);
//     return 0;
// }


#include<stdio.h>
#include<string.h>
int main () {
    char str[] = "college wallah\0";
    char *ptr = str;
    int i=0;
    while(*ptr != '\0') {
        printf("%c", *ptr);
        ptr++; //ptr stand for address
        //*ptr -> value or address fatch
        i++;
    }
    return 0;

}

//outpit C aana chaya par sab kaisya print ho raha hya