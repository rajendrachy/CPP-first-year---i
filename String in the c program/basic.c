#include<stdio.h>
int main () {
    char arr[] = "Hell0 my name is rajendra chaudhary i read in class jdfhf i am studying in the chitkara university\0";
    int i=0;
    while(arr[i] != '\0') {
        printf("%c ", arr[i]);
        i++;
    }

    return 0;
}

//string is a character array
//\0 -> ascii value is 0 (zero)