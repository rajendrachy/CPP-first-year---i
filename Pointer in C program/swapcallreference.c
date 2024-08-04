#include<stdio.h>
void swap(int *a, int *b); //declare the swap
int main () {

    int a, b;
    printf("Enter the two variable:   ");
    scanf("%d %d", &a, &b);
    printf("Before swapping:  \n");
    printf("a=%d b = %d\n", a, b);
    swap(&a, &b); // function call

    return 0;

}

void swap (int *a, int *b)  {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swapping:  \n");

    printf("a = %d b = %d", *a, *b);
}
