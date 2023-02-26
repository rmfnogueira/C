#include <stdio.h>
/*
determinar o número de dias do mês,
dado o número do ano e mês.
*/
int qts_dias_tem_o_mes()
{
    int ano, mes, dias;
    printf("Indique ano: ");
    scanf("%d", &ano);
    printf("Indique mes: ");
    scanf("%d", &mes);
    if (mes == 2)
    {
        /* teste de ano bissexto */
        if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0) // testa se o mês é 2 (Fevereiro). Neste caso tem que se testar se o ano é ou não bissexto de forma a retornar 29 ou 28
            printf("29");
        else
            printf("28");
    }
    else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        printf("31");
    }
    else
    {
        printf("30");
    }
}

int main()
{
    qts_dias_tem_o_mes();
}