#include<stdio.h>
int main() {

    int x, y;
    printf("Enter the X: ");;
    scanf("%d", &x);
    printf("Enter the Y: ");
    scanf("%d", &y);

    int temp = x;
    x = y;
    y = temp;

    printf("\nAfter swapint : x = %d\n,  and  y = %d      \n", x, y);

    return 0;
}


// Time Complexity: O(1)
// Auxiliary Space: O(1)