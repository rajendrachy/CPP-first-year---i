#include<stdio.h>
int main () {
    int integeType;
    char charType;
    float floatType;
    double doubleType;

    // Calculate and Print
    // the size of integer type
    printf("Size of int is: %ld", sizeof(integeType));
 
    // Calculate and Print
    // the size of charType
    printf("\nSize of char is: %ld", sizeof(charType));
 
    // Calculate and Print
    // the size of floatType
    printf("\nSize of float is: %ld", sizeof(floatType));
 
    // Calculate and Print
    // the size of doubleType
    printf("\nSize of double is: %ld", sizeof(doubleType));
 
    return 0;
}