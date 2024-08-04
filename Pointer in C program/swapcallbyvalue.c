#include<stdio.h>
void swap(int a, int b);
int main() {
    int a, b;
    printf("Enter the two number :   ");
    scanf("%d %d", &a, &b);
     printf("a = %d \nb = %d\n", a, b);
    swap(a, b); //fundtion call

    return 0;
}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

printf("a = %d\n b = %d\n", a, b);
}