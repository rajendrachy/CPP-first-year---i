#include<stdio.h>

float changetemp(float celcius) { //passsint the value celcius 
    float far = celcius *(9.0/5.0) + 32; //calculation
     return far; //return the value

}
int main() {
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    float far = changetemp(n);
    printf("%f", far);
    return 0;
}