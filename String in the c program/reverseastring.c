#include<stdio.h>
#include<string.h>
int main () {
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]s", str);

    //calculating size of the string
    int size = 0;
    int k=0;

    while(str[k] != '\0') {
        size++;
        k++;
    }
// printf("%d", size)

for(int i=0, j=size-1; i<=j; i++, j--) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}
printf("The reverse string is: %s", str);


    return 0;
}