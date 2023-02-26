#include <stdio.h>
#include <stdlib.h>

/*
malloc

The malloc function allocates n bytes of
memory from a system and returns a pointer
to the newly allocated memory.

void* malloc(size_t size_in_bytes);
*/

int main(void)
{
    // exemplo
    int *poin = malloc(sizeof *poin); // ou sizeof(int)
    if (poin)
    {
        *poin = 6;
        printf("O valor é: %d\n", *poin);
    }
    free(poin);

    // reservar memoria para um inteiro
    // a expressao sizeof(int) pode ser reescrita como sizeof*p para não termos que repetir o tipo.
    // o tipo size_t representa um inteiro não assinado, e é normalmente utilizada para indexação num loop
    // size_t é o tipo/type retornado por sizeof

    int *p = malloc(sizeof(int));
    *p = 3;
    printf("O valor do inteiro e: %d\n", *p);
    // É boa prática verificar o valor de retorno da funcao malloc();
    // caso a reserva.
    if (p)
    {
        *p = 123;
        printf("Valor verificado condicionalmente do inteiro é: %d\n", *p);
        // Para verificarmos se o valor da alocacao de memoria é nulo (NULL)
        if (p == NULL)
        {
            printf("Erro a alocar a memroria. A sair.\n");
        }
    }
    /*
    uma vez alcado valor utilizando malloc(), é necessário utilizar free() para libertar
    o espaço alocado.
    O esquecimento na utilização de free() é o que normalmente causa os temidos leaks de memória,
    dado que a memória nunca é liberta, e não pode ser reutilizada, ou seja,
    estamos a deixar escapar memória do total disponivel.
    Alocar/reservar espaço para tipo chaR
    */

    int *t = malloc(5 * sizeof(int));
    if (t)
    {
        t[0] = 10;
        t[1] = 10;
        t[2] = 10;
        t[3] = 10;
        t[4] = 10;
        printf("Foi alocado o espaço para os 5 inteirros.\n");
        // enviar valores para consola
        for (size_t i = 0; i < 5; i++)
        {
            printf("%d", t[i]);
        }
    }
    free(t);

    /*
        Alocar/reservar espaço para tipo char
    */
    char *pn = malloc(sizeof(char));

    if (pn)
    {
        *pn = 'T';
        printf("%c\n", *pn);
    }
    free(pn);

    /*
        Alocar/reservar espaço para um struct
    */

    typedef struct malluc
    {
        char ch;
        int i;
        double d;
    } malluc;

    malluc *ptr = malloc(sizeof(malluc));
    if (ptr)
    {
        ptr->ch = 'A';
        ptr->i = 4;
        ptr->d = 13465;
        printf("valor de  : %c", ptr->ch);
        printf("valor de  : %d", ptr->i);
        printf("valor de  : %lf", ptr->d);
    }
    free(ptr);
}
