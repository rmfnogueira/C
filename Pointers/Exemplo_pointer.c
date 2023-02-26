#include <stdio.h>

int main(void)
{
    double var = 2345;
    double *aponta = &var;
    printf("The value before aponta\n%f", var);
    *aponta = 34.701;
    printf("\nO valor da variável é: \n%f ", *aponta);

    int array_int[5];
    for (int i = 0; i < 5; i++)
    {
        array_int[i] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\narray_int values: %d\n", array_int[i]);
    }

    char char_array[] = "Olha ela.";
    char *apontador = char_array;
    printf("\n%s", apontador);

    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;

    p += 2; // p now points at the third array element
    printf("\nThe third array element is: %d\n", *p);
    p += 1; // p now points at the fourth array element
    printf("\nThe fourth array element is: %d\n", *p);

    char *pter[] = {"This is the first sentence.",
                    "This is the second sentence.",
                    "This is the third sentence.",
                    "This is the last sentence."};
    for (int i = 0; i < 4; i++)
    {
        printf("\n%s\n", pter[i]);
    }
}