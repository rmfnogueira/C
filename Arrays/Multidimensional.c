#include <stdio.h>
// Multidimensional Arrays

int main()
{
    // declare and initialize
    int int_arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // print out
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            printf("%d", int_arr[i][j]);
        }
        printf("\n");
    }

    // determine array size in bytes
    int arr[3] = {1, 2, 3};
    size_t arrcount = sizeof(arr); // size of int
    printf("\nThe number of array elements is: %lld\n", arrcount);
}
