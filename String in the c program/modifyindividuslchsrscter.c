#include<stdio.h>
int main () {
    char str[20] = "CollegeWallah\0";
    str[1] = 98; // 98 -> b (ASCII value)
   int i = 0;
   while(str[i] != '\0') {
    // printf("%c ", str[i]); //*(str + i)
    printf("%c ", *(str + i));
    i++;

   }
    return 0;
}