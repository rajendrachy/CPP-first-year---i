#include<stdio.h>
int main () {
    int first=0, second=0; // if first != 0 and second != 0 the print the first largest number
    int n;
   int A[5];
    for(int i=0; i<5; i++) {
        scanf("%d", &A[i]);
    }
    for(int i=0; i<5; i++) {
       if(A[i] > first) {
        second = first;
        first = A[i];
       } else if(A[i] > second) {
            second = A[i];
        }  
   
    }

printf("The second largest element is: %d", second);
return 0;
}