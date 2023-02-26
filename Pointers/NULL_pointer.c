#include <stdio.h>
int main(void)
{
    // When a pointer has a value of NULL, it does not point to any other object, NULL pointer

    char *mycharp = NULL;
    int *myintp = NULL;
    float *myfloatp = NULL;
    printf("The value of a char pointer: %p\n", (void *)mycharp);
    printf("The value of an int pointer: %p\n", (void *)myintp);
    printf("The value of a float pointer: %p\n", (void *)myfloatp);

    /* points to nothing
    The value of a char pointer: 0000000000000000
    The value of an int pointer: 0000000000000000
    The value of a float pointer: 0000000000000000
    */
}
