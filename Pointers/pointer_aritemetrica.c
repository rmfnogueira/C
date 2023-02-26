#include <stdio.h>

int main(void)
{
    /* expressions like &arr[0] and arr are equivalent.
    The name of the array, arr, is also an address of the first element in an array.
    */
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr; // the same as int* p = &arr[0];
    printf("The pointed-to value is: %d.\n", *p);
    /*
    What does it mean to increment the pointer by one?

    It means that it now points at the next data object in memory.

    Since array elements are positioned sequentially in memory,
    the pointer now points to the next array element

    The pointer is incremented by one times the size of the type of the element it points to
    */
    //
    printf("\nThe pointed-to value is: %d.\n", *p);

    // If we wanted to print out the 4th array element, we would add 2 to the pointer:

    // point to last item in array if we dont know the array size
    size_t lastarray_item = sizeof(arr) / sizeof(arr[0]) - 1;
    p += lastarray_item;

    /*
    print 4th element:

    p += 2;

    Explanation:
    Neste exemplo, first pointer defaults to initial array index.
    We previously incremented, changed the pointer to the second array element
    (++ "increments" pointer to the next position in memory)

    Because where using the same pointer (already changed from 1st position to 2nd)
    a 2 increment will "jump" an object in memory, or increment by 2 from the second position
    */
    printf("\nThe pointed-to value is: %d.\n", *p);
}