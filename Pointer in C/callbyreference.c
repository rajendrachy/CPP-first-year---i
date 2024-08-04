#include<stdio.h>

void func(int *m) {
    printf("%d", *m);

}
int main() {

    int  a = 6;
    func(&a);
    return 0;
}