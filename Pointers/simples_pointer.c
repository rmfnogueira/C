#include <stdio.h>

// declaration and initialization
// some_type* pointer_name;
// star symbol after type name signals this is a pointer type
// ex.: int *p, char *, bool *p, float *p, etc
/* & (ampersand) meaning:
        unary address-of operator -> evaluates to the memory address of the operand.
*/
int main(void)
{

    int num = 123;
    printf("Original value: %d", num);
    // declare the pointer
    int *p = &num;
    // dereference the pointer by atributing a new value
    *p = 456;
    printf("\nChanged by \"*POINTER\": %d", *p);
}
