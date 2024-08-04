#include<stdio.h> 
struct student {
    char ch;
    int a;
};
int main () {
    struct student st[10];
    printf("Enter cha and integer: ");
    int i;
    for( i=0; i<10; i++) {
        scanf("%c %d", &st[i].ch, &st[i].a); //input  string in c program
    }

     for( i=0; i<5; i++) {
    printf("%c %d", st[i].ch, st[i].a);
     }
    return 0;
}