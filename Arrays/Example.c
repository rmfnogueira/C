#include <stdio.h>

int main(void)
{
    char arr[] = "olá, tudo bem?";
    printf("%s\n", arr);

    int arr_int[5] = {1, 2, 3, 4, 5};
    arr_int[0] = 10;
    arr_int[4] = 20;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr_int[i]);
    }
}
