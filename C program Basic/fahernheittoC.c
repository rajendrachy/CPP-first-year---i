#include<stdio.h>

float fahintocel(float f) {
    int fah = ((f - 32.0) * 5.0/9.0);
    return fah;

}
int main () {

    float f = 40;
    float result = fahintocel(f);
    printf("Fahernheit into celcius conversion is: %.2f", result);
    return 0;
}


// Time Complexity: O(1)
// Auxiliary Space: O(1)