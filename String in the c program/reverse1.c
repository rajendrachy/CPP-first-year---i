#include<stdio.h>
int main () {
    char str[40];
   printf("Eneter the string : ");
   scanf("%[^\n]s", str);
   
   int size = 0;
   int k = 0;
   while(str[k] != '\0') {
    size++;
    k++;
   }
   printf("%d", size);

   int i,j;
   char temp;

   for(i=0, j=size-1; i<=j; i++, j--) {
       
       temp = str[i];
       str[i] = str[j];
       str[j] = temp;
   }
   printf("The reverse string is : %s", str);
    return 0;
}