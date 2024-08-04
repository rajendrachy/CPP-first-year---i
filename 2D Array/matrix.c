#include<stdio.h>
int main() {
    int A[3][3] = {1, 2, 3, 0, 5, 6, 7, 8, 9};
    
    int B[3][3] = {-1, -1, -1, -1, -1, -1, -1, -1, -1};
    int i,j;

    for( i=0; i<3; i++) {
        for( j=0; j<3; j++) {

        
            int r=0, c=0;
            
            if(A[i][j] == 0) {
             while(r<3) {
                B[r][j] = 0;
                r++;

             }
             while(c<3) {
                B[c][i] = 0;
                c++;
             }
             if(A[i][j] != 0) {
                B[i][j] = A[i][j];
             }
            }
        }
        
    }
     printf("%d\t", B[i][j]);
    return 0;
}