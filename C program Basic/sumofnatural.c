#include<stdio.h>
int main () {
    int i, s = 0;
    int n = 10;
    printf("Enter the number:");
    scanf("%d", &n);

    for(i=0; i<=n; i++) {
        s = s + i;
    }
    printf("sum = %d", s);
    return 0;
}