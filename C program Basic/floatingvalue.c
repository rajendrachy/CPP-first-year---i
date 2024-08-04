#include<stdio.h>

float multi(float x, float y) {
    float result = x * y;
    return result;

}
int main () {

    float a, b, product;
    printf("Enter two floating value: ");
    scanf("%f %f", &a, &b);

     product = multi(a, b);

    printf("Product of two floating value is: %.2f", product);

    return 0;
}


//Time Complexity: O(1)
//Auxiliary Space: O(1)