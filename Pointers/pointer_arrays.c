#include <stdio.h>

int main(void)
{
    int arr[3] = {1, 2, 3};
    int *p = arr; // p now points at the first array element
    printf("\nThe first array element is: %d\n", *p);

    for (int i = 0; i < 3; i++)
    // Each time, we increment the pointer value by i to point at the next array element.
    {
        printf("\n%d\n", p[i]); // p[i] expression is equivalent to a *(p + i) expression
    }

    // access individual array elements using a pointer.
    int *p2 = arr; // declare and get the address of the first array element
    *p2 = 11;      // change its value, first address
    p2 = &arr[2];  // get the address of the last array element
    *p2 = 55;      // change its value

    printf("\nAfter the changes:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d", arr[i]);
    }
}