#include<stdio.h>
int main() {

    //angular divergence = θ = D2(square) = D1(square) / L * 180 / pi   degree

    float pi = 3.14;
    float D1, D2, L;

    printf("Enter the diameter D1: ");
    scanf("%f", &D1);
    printf("Enter the diameter D2: ");
    scanf("%f", &D2);

    printf("enter the diatance between D1 and D2:  ");
    scanf("%f", &L);

    float result = ((D2*D2) - (D1*D1)) / L * (180/pi);

    printf("The value of the  thita = %.2f", result);

    return 0;
}