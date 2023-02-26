/*
Um ano é bisexto se for multiplo de 4;

• Múltiplo de 4:
    o ano%4==0 » resto da divisão com 4 é nula, portanto o ano é múltiplo de 4
• Excepto de 100 em 100 anos:
    o ano%4==0 && ano%100!=0 » retorna verdadeiro para múltiplos de 4, mas se for
    múltiplo de 100 já não
• Excepto de 400 em 400 anos:
    o (ano%4==0 && ano%100!=0) || ano%400==0 » como a excepção é positiva,
    coloca-se uma disjunção e não uma conjunção como no caso anterior
*/
#include <stdio.h>

int ano_bissexto()
{
    int ano;
    printf("Indique ano: ");
    scanf("%d", &ano);
    /* teste de ano bissexto */
    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) // Notar que não foram colocados parênteses para a conjunção. Não é necessário dado que tem sempre prioridade relativamente à disjunção.
        printf("Bissexto");
    else
        printf("Normal");
}

int soma_primos_N()
{
    int N, soma, num;
    while (soma < N)
    {
    }
}

int main()
{
    ano_bissexto();
}