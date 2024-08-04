#include<stdio.h>
int main() {
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    *p = 10;
    **q=20;
    printf("a=%d\n", a);
    printf("a=%d\n", *p);//address of the a
    printf("a=%d\n", **q);//address of the *p
    printf("a=%d", ***r);
    return 0;

}