#include<stdio.h>
int main() {
    printf("Enter the num of arrar:  ");
    int n;
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:  ");
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(a[j]>a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(int i=0; i<n; i++) {
        printf("%d  ", a[i]);
    }
    // printf("\n");2
    
    return 0;
}