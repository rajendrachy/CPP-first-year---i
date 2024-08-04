#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int m;
        scanf("%d", &m);
        int arr[m][m];
        
        // Input the matrix
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < m; j++) {
                scanf("%d", &arr[i][j]);
            }
        }
        
        // Rotate the matrix 90 degrees anticlockwise
        for(int i = m - 1; i >= 0; i--) {
            for(int j = 0; j < m; j++) {
                printf("%d", arr[j][i]);
                if(j != m - 1) printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
