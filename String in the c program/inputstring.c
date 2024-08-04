#include<stdio.h>
int main () {
    char str[40];
    printf("Enter the string: ");
    // scanf("%s", str); // with the help of the scanf only the firsyt word will be consider in the string not sentence
    // gets(str); //we can input entire sentence


   // OR, 


   scanf("%[^\n]s", str); // to input a sentence and word
   
        printf("YOUR OUTPUT IS: %s", str);

   
    return 0;
}