/*
STACK memory
AUTOMATIC STORAGE DURATION
The default storage duration is automatic storage duration.
This storage is allocated when the control flow enters the block in which the data object is declared.
It is automatically deallocated when the control flow exits the block marked with }
*/
#include <stdio.h>
#include <stdlib.h>

void fn()
{
    int r = 9; // r declarado, espaco no STACK alocado para o tamanho de '9'
    printf("A variavel r tem memoria automatica e o seu valore: %d\n", r);
} // x goes out of scope here

/*
STATIC STORAGE DURATION
Quando aplicamos uma designacao de STATIC a declaracao da variavel,
o objeto fica com duracao estatica em memoria, "permanente" ou persistente,
ate ao final da execucao ou flow do programa.

Objetos declarados no SCOPE GLOBAL tambem tem memoria de duracao estatica.
*/

void fn2()
{
    static int in = 0;
    in++;
    printf("Valor da variavel ESTATICA: %d \n", in);
}

/*
Allocated Storage Duration
Objects that are dynamically allocated
have a so-called allocated storage duration
Significa que o espaço em memoria alocado para estes objetos
é modificado dinamicamente durante a execução.
*/

/*
Objects with allocated storage duration
do not automatically deallocate the memory once they go out of scope.
We need to deallocate the memory manually.
Exemplo:
*/

void fn3()
{
    /*
    Objects allocated with malloc, calloc, and realloc,
    have an allocated storage duration
    */

    printf("A alocar memória para um objeto...\n");
    int *p = malloc(sizeof *p);
    if (p)
    {
        *p = 456;
        printf("Espaco alocado em bytes: %zu.\nValor da variavel: %d\n", p, *p);
        printf("A libertar espaço ocupado...\n");
        free(p);
    }
}

// Mais exemplos
void fn4()
{
    double *p = malloc(sizeof(double));
    if (p)
    {
        *p = 22;
    }
    free(p);
    int *pt = malloc(sizeof(int));
    if (*pt)
    {
        *pt = 123;
    }
    free(pt);
}
// Com array
void fnarr()
{
    // alocar espaço para 5 doubles
    //  enganeime aqui, tenho que pensar no espaço que estou a reservar em memoria
    // para 5 doubles, este é o pointer, que reserva o espaço para o tipo double,
    // 5
    double *pa = malloc(5 * sizeof *pa);
    if (pa)
    {
        for (int i = 0; i < 5; i++)
        {
            pa[i] = i;                 // O pointer aponta para cada valor criado/definido aqui.
            printf("\n%.2f\n", pa[i]); // O for loop define e imprime cada elemento.
        }
    }
    free(pa);
}
// redifinir espaço

void fnarr2()
{
    /*
    ATENCAO AO QUE É PEDIDO.
    NESTE CASO APENAS PEDE A RESERVA DO ESPAÇO, NÃO DECLARAÇÃO
    DO ARRAY EM SI.
    Write a program that dynamically allocates memory for an array of
    five integers and then resizes the allocated block so that it can
    now hold an array of ten integers.
    Free the memory afterward:
    */

    int *p = malloc(5 * sizeof(int));
    if (p)
    {
        printf("Allocated %zu bytes.\n", 5 * sizeof(int));
    }
    int *pnew = realloc(p, 10 * sizeof(int));
    if (pnew)
    {
        printf("Resizing allocated memory...\n");
        printf("The memory block is now %zu bytes long", 10 * sizeof(int));
        // resizing successful, free the realloc pointer
        free(pnew);
    }
    else
    {
        // resizing fails, free the original pointer
        free(p);
    }
}

void fnS()
{
    long *X = malloc(sizeof(long)); //variavel com memoria alocada dinamicamente
    printf("The variable with an allocated storage duration: %p\n", (void *)X);
    int inteiro = 4; // varialvel com memoria automaticamente gerada
    printf("The variable with an automatic storage duration: %d\n", inteiro);
    free(X); // X é liberto manualmente aqui.
} // ch is automatically freed here

int main(void)
{
    fn();
    fn2();
    fn3();
    fn4();
    fnarr();
    fnarr2();
    fnS();
}
