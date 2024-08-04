#include<stdio.h>

void primefactor(int n) {
    int i;
    for( i=2; n>1; i++) {
        while(n%i==0) {
            printf("The prime factor are:  %d\n", i);
            n = n / i;
        }
    }
}
int main() {
    int num;
    printf("Enter the number:  ");
    scanf("%d", &num);
    primefactor(num);
    return 0;
}