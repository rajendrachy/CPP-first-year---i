#include <stdio.h>

int main() {
    // Constants
    const double g = 9.81;  // Acceleration due to gravity (m/s^2)

    // Variables
    double height, magneticFieldStrength, magneticSusceptibility;

    // Input the height and magnetic field strength from the user
    printf("Enter the height (in meters): ");
    scanf("%lf", &height);

    printf("Enter the magnetic field strength (in Tesla): ");
    scanf("%lf", &magneticFieldStrength);

    // Calculate magnetic susceptibility
    magneticSusceptibility = 2 * g * height / (magneticFieldStrength * magneticFieldStrength);

    // Display the result
    printf("Magnetic Susceptibility: %.4lf\n", magneticSusceptibility);

    return 0;
}
