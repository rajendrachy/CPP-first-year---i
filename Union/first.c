#include <stdio.h>

// Define a union named "Data"
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    // Accessing and assigning values to the union members
    data.i = 10;
    data.f = 220.5;
    strcpy(data.str, "hello my name is rajendra chaudhary\n");

    // Printing the values of union members
    printf("data.i : %d\n", data.i);
    printf("data.f : %f\n", data.f);
    printf("data.str : %s\n", data.str);

    // Size of the union
    printf("Size of union : %lu\n", sizeof(data));

    return 0;
}
