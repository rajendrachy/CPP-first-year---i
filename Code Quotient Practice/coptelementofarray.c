#include<stdio.h>
int main() {
    int a[20],b[20], i, n;
    printf("Enter tht length:  ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n; i++) {
        b[i] = a[i];
    }
    for(int i=0; i<n; i++) {
        printf("b[%d]: %d\n", i, b[i]);
    }

    return 0;
}