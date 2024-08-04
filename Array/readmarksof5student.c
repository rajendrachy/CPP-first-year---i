#include<stdio.h>
void main () {

int marks[5];
float sum = 0;
float avg;
printf("Enter the marks of 5 sub: ");
for(int i=0; i<5; i++) {
    scanf("%d ", &marks[i]);
}
for(int i=0; i<5; i++) {
    sum = sum + marks[i];
}

avg = sum / 5;
printf("sum = %f", sum);
printf("avg = %f", avg);
}