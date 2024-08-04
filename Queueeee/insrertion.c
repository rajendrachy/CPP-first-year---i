#include<stdio.h>
#define S 5
int f = -1;
int r = -1;
int Q[S];

void insert(int a) {
    if(r==S-1)
    printf("Que is full");
    if(r == -1) {
        r++;
        f++;
    } else {
        r++;
    }
    Q[r] = a;
}


int del() {
    if(r == -1) {
        printf("Que is empty");
        return 0;
    } else {
        f++;
    }

}
int main () {
    insert(10);
    insert(20);
    insert(5);

    del();
    for(int i=f; i<=r; i++) {
        printf("%d  ", Q[i]);
    }
    return 0;
}