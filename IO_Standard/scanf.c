#include <stdio.h>
#include <stdlib.h>

/*
--- SCANF ---

Permite aceitar os dados formatdos do standard input e
gravá-los em variáveis.

È declarada em <stdio.h>, com a assinatura:

int scanf(const char * format, ...)

Aceita os seguintes argumentos:  format specifiers, addresses of variables
*/

void testing_scanf_com_char()
{
    printf("Introduz um caracter:");
    char meu_char;
    scanf("%c", &meu_char); // format specifier of char and
    printf("O caracter introduzido é: %c\n", meu_char);
}

void testing_scanf_com_int()
{
    printf("Introduz um numero inteiro: \n");
    int inteiro;
    scanf("%d", &inteiro);
    printf("Valor introduzido: %d\n", inteiro);
}

void testing_aceitar_multiplos_valores()
{
    printf("introduz um inteiro, longo: \n");
    int o;
    float l;
    scanf("%d,%.3f", &o, &l);
    printf("Os valores introduzidos: \n%o\n%.3f", o, l);
}

void main(void)
{
    testing_aceitar_multiplos_valores();
}
