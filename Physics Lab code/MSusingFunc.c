#include <stdio.h>

double calcMS(double h, double H) {
    const double g = 9.81;
    return 2 * g * h / (H * H);
}

int main() {
    double h, H, MS;
    
    printf("Enter height (m): ");
    scanf("%lf", &h);
    
    printf("Enter magnetic field strength (T): ");
    scanf("%lf", &H);
    
    MS = calcMS(h, H);
    
    printf("Magnetic Susceptibility: %.4lf\n", MS);

    return 0;
}
