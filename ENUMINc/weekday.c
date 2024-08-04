#include<stdio.h>

enum weekday { 
    monday=5, 
    tuesday, 
    wednesday, 
    thursday, 
    friday, 
    saturday, 
    sunday};
int main () {
    int i;
    for(i = monday; i<=sunday; i++) 
        printf("%d   ", i);
    
    return 0;
}