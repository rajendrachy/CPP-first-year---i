#include <stdbool.h>
#include<stdio.h>

int isprime(int n) {
    if(n==1 || n == 0) 
    return false;

     // Run a loop from 2 to n/2
     for(int i=2; i<=n/2; i++) {
        if(n%i==0)
        return false;

     }
     return true;
}
int main() {

    int n = 50;
    for(int i=0; i<n; i++) {
        if(isprime(i)){
        printf("%d ", i);
        }
    }
    return 0;
}