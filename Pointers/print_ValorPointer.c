#include <stdio.h>
/*
To print out the value of a pointer, we need to cast/convert the pointer to type void* using
(void *)some_pointer_name
This example prints the value of the pointer itself, not the value of the pointed-to object.
 */

int main(void)
{
    char c = 'a';
    int x = 123;
    float f = 456.789f;
    char *mycharp = &c;
    int *myintp = &x;
    float *myfloatp = &f;
    printf("The value of a char pointer: %p\n", (void *)mycharp); //%p
    printf("The value of an int pointer: %p\n", (void *)myintp);
    printf("The value of a float pointer: %p\n", (void *)myfloatp);
}
