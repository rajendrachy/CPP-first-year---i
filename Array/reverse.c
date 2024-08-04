#include<stdio.h>
int main() 
{
    int a[5];
    printf("Enter the element of array: ");
    for(int i=0; i<5; i++) {
        scanf("%d", &a[i]);
    }

    
   for(int i=0; i<5;i++) {
    printf("\nThe element is: %d \n", a[i]);
   }

for(int i=4; i>=0; i--) {
    printf("\nThe reverse element is: %d\n ", a[i]);
}
    return 0;
}