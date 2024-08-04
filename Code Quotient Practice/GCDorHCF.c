#include<stdio.h>

int gcd (int i, int j) {
    while(j>0) {
        int temp = j;
        j = i % j;
        i = temp;
    }
    printf("The GCD of th einput value is:   %d", i); // print the value of the i;

}
int main() {
    int i, j;
    printf("Enter the two number: ");
    scanf("%d %d", &i, &j);
    gcd(i, j); //function calling
return 0;
}