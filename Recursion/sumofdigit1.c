#include<stdio.h> 
int sumofdigit(int num) {
    if(num < 10) 
    return num;
    else 
    return  (num % 10 + sumofdigit(num / 10)); 
}
int main () {
    int n;
    printf("Enter the number: ");
    scanf( "%d", &n);

    int result = sumofdigit(n);
    printf("%d\n", result);
    return 0;
}