#include <stdio.h>
int main()
{
  int decimal;
  printf("Enter the dcimal no in c r:");
  scanf("%d", &decimal);

  int bin = 0, weight = 1;
  while(decimal != 0) {
      int rem = decimal % 2;
      decimal = decimal / 2;
      bin = bin + rem * weight;
      weight = weight * 10;

  }
  printf("%d", bin);
    return 0;
}