#include <stdio.h>

// return devolve_expressao_ou_valor;
int devolve10()
{
    return 10;
    printf("declaracoes apos return nao sao executadas\n return termina a execucao da funcao e devolve controlo do correr do programa");
}

int multiplo_return(int r)
{
    if (r > 5)
    {
        return 1;
    }
    if (r < 5)
    {
        return -1;
    }
    return 0;
}

void printMessage()
{
    printf("printMessage!");
}

// declaracao
void print_message();

int paramValor(int p1)
{
    return p1++;
}

void paramPointer(int *z)
{
    (*z)++;
}

int multipleParams(int g, int h)
{
    return g + h;
}

int main(void)
{
    int i;
    i = devolve10();
    printf("Valor de devolve10():\n%d\n", i);

    int o;
    o = multiplo_return(20);
    printf("O valor:\n%d\n", o);

    printMessage();
    print_message();

    int n4 = 4;
    printf("Parametro antes da chamada de funcao:\n%d\n", n4);
    paramValor(n4);
    printf("Parametro depois da chamada de funcao:\n%d\n", n4);

    int z1 = 77;
    paramPointer(&z1);
    printf("Valor da chamada a paramPointer com referencia a objeto em memoria\n%d\n", z1);

    int c = multipleParams(4, 555);
    printf("Resultado multipleParam(): \n%d\n", c);
}

// definicao
void print_message()
{
    printf("\nprint_message!\n");
}