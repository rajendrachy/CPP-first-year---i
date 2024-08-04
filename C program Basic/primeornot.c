#include<stdio.h>

void checkprime(int N) {
    //initailly , flage is set to true or 1
    int flag = 1;
    for(int i=2; i<=N/2; i++) {
        if(N%i == 0) {
            flag = 0;  //flag is false or zero;
            break;
        }
    }

    if (flag) {
        printf("prime Number ", N);
    } else {
        printf("Not a prime Number: ", N);
    }
}
int main() {
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    checkprime(N);


    return 0;
}

//time complexicity O(n)
//space complexicity O(1)