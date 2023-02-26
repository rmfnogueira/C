/*
Once we allocate space using malloc or calloc,
we can grow or shrink that memory space using realloc.

void *realloc(void *pointer_para_alocacao_previa, size_t novo_valor_em_bytes)

*/

// exemplo imcompleto
#include <stdio.h>
#include <stdlib.h>

void fn()
{
    double *p = malloc(sizeof *p);
    if (p)
    {
        *p = 4455.6;
        printf("%zu bytes alocados.\n", *p);
        printf("A realocar espaço...\n");
        double *novo_p = realloc(p, 10 * sizeof *novo_p);
        printf("O novo valor do bloco de memória é: %zu bytes.", 10 * sizeof(double));
    }
}

// outro exemplo com verificação de erros
void fn2()
{
    int *pt = malloc(sizeof *pt);
    if (pt)
    {
        *pt = 6;
    }
    int *pt_n = realloc(pt, sizeof *pt_n);
    if (pt_n)
    {
        printf("\nO valor do inteiro escrito no espaco alocado originalmente é: %d\n", *pt);
        printf("Foi multiplicado por 10, e o novo valor é: %d\n", *pt_n);
        printf("O valor que foi ocupado em memória por pt_n foi: %zu\n", *pt_n);
        free(pt_n);
    }
    else
    {
        // se a realocacao falhar liberta o pointer original.
        free(pt);
    }
}

int main(void)
{
    fn();
    fn2();
}