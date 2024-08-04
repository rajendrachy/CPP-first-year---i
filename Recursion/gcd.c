#include<stdio.h>
int gcd(int a, int b) {
    if(b == 0) {
        return b;
    } else if(a == 0) {
        return b;
    } else {
        return gcd(b, a % b);
    }
}
int main() {
    int n1, n2;
    printf("Enter the two number: ");
    scanf("%d %d", &n1, &n2);

    int result = gcd(n1, n2);

     printf("GCD of %d and %d is: %d\n", n1, n2, result);
     return 0;
}