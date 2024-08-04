#include<stdio.h>

struct st1 {
    char ch;
    int a;
}s;

union st2 {
    char ch;
    int a;

}b;

int main () {

    s.ch = 'Z';
    b.a = 10;
    int b = s.ch;



    printf("%d\n", b);
    printf("%c\n", s.ch);
    printf("Size of union : %d", sizeof(s));
    return 0;
}