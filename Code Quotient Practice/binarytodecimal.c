#include <stdio.h>
int main()
{
    int binary;
    printf("Enter the binary no: ");
    scanf("%d", &binary);
    int decimal = 0;
    int weight = 1;
    while(binary != 0) {
        int rem = binary % 10;
        decimal = decimal + rem*weight;
        binary = binary / 10;
        weight = weight * 2;

    }
    printf("%d", decimal);

    return 0;
}