#include<stdio.h>
struct student {
char ch;
int a;
};
int main() {
    struct student st;
    st.ch = 'c';
    st.a = 10;
    struct student *p;
    p = &st;
    printf("%c\n%d", p->ch, p->a);
    return 0;
}