#include <stdio.h>

// Since a pointer type is just another type, we can have arrays of pointers.
// some_type* pointer_name[number_of_elements];
// One use case is an array of char* type
int main(void)
{
    /*
    declares an array of three pointers of type char* and initializes them with string constants.
    compiler inserts the number 3 as a length of our array
    */
    char *p[] = {
        "First Setence.",
        "Second Setence",
        "Third Setence",
    };
    for (int i = 0; i < 3; i++)
    {
        printf("\n%s\n", p[i]);
        // The subscript operator [] acts as a dereference operator as the p[i] expression is equivalent to *(p + i).
    }
}
