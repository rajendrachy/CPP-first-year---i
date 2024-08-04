#include <stdio.h>

int counttriangle(int arr[], int n) {
    int count = 0;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++) 

                // conditon

                if(arr[i] + arr[j] > arr[k] && arr[i] + arr[k] > arr[j] && arr[k] + arr[j] > arr[i]) 
                    count++;
                
            
        }
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
  int result =  counttriangle(arr, n);
  printf("The no of the triangle are: %d", result);

    

    return 0;
}