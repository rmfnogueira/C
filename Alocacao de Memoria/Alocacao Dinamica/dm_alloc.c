#include <stdio.h>

int fn_pointer_review()
{
    int x = 123;
    int *p = &x;
}

int array_pointer()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    printf("O primeiro elemento do array é: %d\n", *p);
    char *p = "Ola universo;";
    printf("O valor da string constant: %s", p);
}
