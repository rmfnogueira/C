#include <stdio.h>

int main(void)
{
    char c = 'a';
    int i = 1;
    float f = 1.2;

    char *c2 = &c;
    int *i2 = &i;
    float *f2 = &f;

    printf("The value of a pointed-to char: %c\n", *c2);
    printf("The value of a pointed-to int: %d\n", *i2);
    printf("The value of a pointed-to float: %.3f\n", *f2);

    // pointer reassignment
    int int1 = 5;
    int int2 = 6;
    printf("The value of int1 and int2 before the change: %d, %d\n", int1, int2);
    int *pointer = &int1; // declare a pointer and point to object
    *pointer = 22;        // dereferencing operator, changing the referenced value of int1
    pointer = &int2;      // same pointer, other object
    *pointer = 13;        // dereferencing operator, changing the referenced value of int2
    printf("The value of int1 and int2 after the change: %d, %d\n", int1, int2);
}
