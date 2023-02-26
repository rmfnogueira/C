/*
o espaço em memoria reservado por malloc() não é inicializado
CALLOC é utilizada para inicializar o espaço com zeros

void* calloc(size_t number_of_objects, size_t size_of_objeto)

*/

#include <stdio.h>
#include <stdlib.h>

/*
    Allocate space for single integer
*/

void fn1()
{
    int *p = calloc(1, sizeof(int));
    if (p)
    {
        printf("O valor inicial é: %d\n", *p);
    }
    free(p);
}

/*

allocate space for a single integer,
fill the memory with zeros,
and then change the v<akue of the pointed-to data object in memory;

*/
void fn2()
{
    int *pt = calloc(1, sizeof *pt); // ou (1, sizeof *p)
    if (pt)
    {
        printf("O valor inicial é: %d\n", *pt);
        *pt = 779;
        printf("O novo valor é: %d\n", *pt);
    }
    free(pt);
}

/*
    allocate space for an array of five initially zeroed-out integers
*/
void fn3()
{
    int *point = calloc(5, sizeof *point);
    if (point)
    {
        printf("Valores iniciais: %d\n", *point);
        for (int i = 0; i < 5; i++)
        {
            printf("%d", point[i]);
        }
        // aplica lguns valores e envia-os para a consola
    }
}

int main(void)
{
    fn1();
    fn2();
    fn3();
