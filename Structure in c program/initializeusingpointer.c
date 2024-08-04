#include<stdbool.h>
struct student {
    int a;
    char ch;
    struct abc {
        int i;
        int ch;

    }A;
};
int main () {
    struct student st1;
    // st1.a = 10;
    // st1.ch = 'a';

    // st1.A.i = 5;
    // st1.A.ch = 'c';


    struct student *p;
    p = &st1;
    p->a = 10;
    p->ch = 'a';
    struct student *p1;
    p1 = &(p->A);
    p1->a=5;
    p1->ch = 'c';


    printf("The value of the a is: %d\n", *p);
    printf("The value of the ch is: %c\n", p->ch);
    printf("The value of nasted ch is: %d\n", *p1);
    printf("The value of nasted ch is: %c\n", p->A.ch);




    return 0;
}