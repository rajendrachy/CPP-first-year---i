#include<stdio.h>
int main() {
    int a, b;
    printf("Enter the two no: ");

    scanf("%d %d", &a, &b);


    printf("Before swapping a = %d  and b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping A = %d and B = %d", a, b);
    return 0;
}


// Time Complexity: O(1)
// Auxiliary Space: O(1)