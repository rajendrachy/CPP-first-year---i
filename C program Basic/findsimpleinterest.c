#include<stdio.h>
int main() {
    float p, t, r;
    printf("Enter Principle: ");
    scanf("%f", &p);

    printf("Enter time: ");
    scanf("%f", &t);
    printf("Enter rate: ");
    scanf("%f", &r);


    float si = (p * t * r) / 100;

    printf("Simple interest: = %f\n", si);
    return 0;
}


// Time Complexity: O(1)
// Auxiliary Space: O(1)