#include<stdio.h>
int main () {

          //magnetic suspensibility = 2*g*h/Hsquare

          float g = 2.9;
          float mg, h, H;

          printf("Enter the rise or fall in the height of the solution:  ");
          scanf("%f", &h);

          printf("enter the H magnetic strength::");
          scanf("%f", &H);
    
    mg = 2*g*h/(H*H);


    printf("The magnetic suspensibility is: %.2f", mg);
          
    return 0;
}