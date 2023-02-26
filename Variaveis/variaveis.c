/*
Uma variável num programa é uma entidade que tem um valor a cada instante, podendo esse valor
ao longo do programa ser utilizado e/ou alterado.
É nas variáveis que se guarda a informação necessária para realizar a função pretendida pelo
programa.
Podem existir quantas variáveis forem necessárias, mas cada uma utiliza memória do
computador.
*/

#include <stdio.h>

int troca_valor_de_a_com_b()
{
    /*declaraca ode 3 variaveis inteiras*/
    int x = 1;
    int y = 2;
    int aux;

    /*trocar o valor de a com b*/
    aux = x;
    x = y;
    y = aux;

    /*mostrar os valores em a e em c*/
    printf("x: %d, y: %d\n", x, y);
}
int troca_valor_de_a_com_b_sem_aux()
{
    /* declaração de duas variáveis inteiras */
    int x = 3, y = 7;
    /* trocar o valor de x com y */
    x = x + y;
    y = x - y;
    x = x - y;
    /* mostrar os valores em x e em y */
    printf("x: %d, y: %d\n", x, y);
}

/*
tipos elementares da linguagem C são os seguintes:

• char - um carácter, ou um inteiro muito pequeno (guarda apenas 256 valores (8 bits) distintos)
• short - inteiro pequeno (pouco utilizado)
• int - tipo standard para inteiros
• long - inteiro longo
• float - número real (pode ter casas decimais)
• double - número real com precisão dupla (igual ao float mas com mais precisão)
*/

// sizeof(int) retorna o número de bytes que uma variável do tipo inteiro ocupa na memória.
void usa_sizeof()
{
    printf("Tamanho de int: %d\n", sizeof(int));
}

void char_pequeno_pode_ser_int()
{
    char a = 'a'; // caracteres são delimitados entre plicas
    float f = 12345.634;
    double d = 12343466.45;
    printf("c: %c (%d), x: %f, y: %g", a, a, d, f);
}

void testar_scanf()
{
    /*scanf é a função inversa ao printf.
    serve para introduzir valores em variáveis,
    valores introduzidos pelo utilizador */
    char c;
    int x;
    double d;
    printf("Introduza um caracter: ");
    scanf("%c", &c);
    printf("Introduza um inteiro: ");
    scanf("%d", &x);
    printf("Introduza um real: ");
    scanf("%lf", &d); // deve utilizar para os números reais o tipo double.
    printf("Valores introduzidos: %c %d %f", c, x, d);
}

int main()
{
    testar_scanf();
    troca_valor_de_a_com_b();
    troca_valor_de_a_com_b_sem_aux();
    usa_sizeof();
    char_pequeno_pode_ser_int();
}
