#include <stdio.h>
// We can initialize a pointer with a string constant such as "Hello World!".
int main(void)
{
    char *p = "Hello World!";
    printf("%s", p);
    //%s format specifier to print out the entire string pointed by p
    //%c format specifier prints out only one (the first) character in a string when using a dereferenced string pointer *p
    printf("\n%c", *p); // print first element
}
