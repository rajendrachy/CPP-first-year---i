#include<string.h>
int main () {
    int count = 0, i;
    char name[10];
    printf("enter the name: ");
    scanf("%[^\n]s", &name);


    while(name[i] != '\0') {
        count++;
        i++;
    }
    printf("%d", count);
    return 0;
}