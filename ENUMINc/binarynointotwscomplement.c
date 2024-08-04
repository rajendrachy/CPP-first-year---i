#include<stdio.h>

int twocomplement(int n, int k) {
    return n ^ ~(1 << k);
}
int main () {
    printf("Enter the test cases: ");
    int t;
    scanf("%d", &t);
    while(t--) {
        printf("Enter the n and k : ");
        

        int n, k;
        scanf("%d %d", &n, &k);
        int result = twocomplement(n, k);
        printf("%d ", result);
    }
    return 0;
}