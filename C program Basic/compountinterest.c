#include<stdio.h>
#include<math.h>
int main() {
    double p, r, t;
    printf("Enter the principle: ");
    scanf("%d", &p);
    printf("Enter the rate: ");
    scanf("%d", &r);
    printf("Enter the time: ");
    scanf("%d", &t);

    double A = p * ((pow((1+r /100), t)));

    double Ci = A - p;

    printf("COumpunt interest: %lf", Ci);

    return 0;
}