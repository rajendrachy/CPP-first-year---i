#include<stdio.h>

int main() {
    //angular divergence = θ = D2(square) = D1(square) / L * 180 / pi degree
    float pi = 3.14;
    float D1, D2, L;

    // Number of test cases
    int numTestCases = 5;

    for (int i = 1; i <= numTestCases; i++) {
        printf("Test Case %d:\n", i);
        
        // Input values for each test case
        printf("Enter the diameter D1: ");
        scanf("%f", &D1);
        printf("Enter the diameter D2: ");
        scanf("%f", &D2);
        printf("Enter the distance between D1 and D2: ");
        scanf("%f", &L);
        
        // Calculate and print the result for each test case
        float result = ((D2*D2) - (D1*D1)) / L * (180/pi);
        printf("The value of theta (θ) = %.2f degrees\n\n", result);
    }

    return 0;
}
