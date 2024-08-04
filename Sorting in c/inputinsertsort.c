#include<stdio.h>
int main() {
     printf("Enter the size of array:  ");
    int n;
    scanf("%d", &n);
    int a[n];
    printf("Enter the array:  ");
    for(int i=0; i<n; i++) {
        scanf("%d ", &a[i]);
    }
    printf("\n");

     
     int temp, j;
    for(int i=1; i<n; i++) {
        temp = a[i];
        j = i - 1;

        while(j>=0 && a[j]>temp) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
        
    }

    printf("Sorted array:   ");
    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}