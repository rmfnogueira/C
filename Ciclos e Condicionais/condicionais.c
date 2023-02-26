#include <stdio.h>
/*
• A e B são expressões lógicas:
    o A||B » A ou B
    o A&&B » A e B
    o ! A » não A
• A e B expressões numéricas:
    o A==B » A igual a B
    o A!= B » A diferente de B
    o A>B » A maior que B
    o A>=B » A maior ou igual a B
    o A<B » A menor que B
    o A<=B » A menor ou igual a B
• Nas expressões numéricas:
    o A+B » A mais B
    o A-B » A menos B
    o A*B » A vezes B
    o A/B » A a dividir por B
    o A%B » resto da divisão de A por B
*/

void fn_tcond()
{
    int numero;
    printf("Indique um numero: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) // se o resto da divisao for zero, impar resta.
        printf("par");
    else
        printf("impar");
}
int main()
{
    fn_tcond();
}