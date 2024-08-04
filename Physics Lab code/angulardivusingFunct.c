#include <stdio.h>
#include <math.h>

// Function to calculate angular divergence
double calculateAngularDivergence(float d1, float d2, float l) {
    float pi = 3.14;
    return ((d2 * d2) - (d1 * d1)) / l * (180 / pi);
}

int main() {
    // Input values
    float d1, d2, l;

    // Get input from user or set values programmatically
    printf("Enter the value of D1 (beam diameter at point 1): ");
    scanf("%f", &d1);

    printf("Enter the value of D2 (beam diameter at point 2): ");
    scanf("%f", &d2);

    printf("Enter the value of L (distance between points 1 and 2): ");
    scanf("%f", &l);

    // Calculate angular divergence using the function
    float theta = calculateAngularDivergence(d1, d2, l);

    // Display the result
    printf("Angular Divergence (theta) = %.2f degrees\n", theta);

    return 0;
}
