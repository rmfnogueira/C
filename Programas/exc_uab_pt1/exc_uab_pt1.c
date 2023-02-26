#include <stdio.h> // o #include instrui o compilador a incluir o ficheiro indicado de seguida

/*ola_mundo_sizeof*/
int ola_mundo_sizeof()
{
    printf("Olá Mundo\n");
    char a = 'a';
    short b = 1;
    int c = 20;
    long long d = 345678987;
    float e = 43.9867;
    long double f = 45325.98679765486;
    printf("sizeof(char): %d \n", sizeof(a));
    printf("sizeof(short): %d\n", sizeof(b));
    printf("sizeof(int): %d\n", sizeof(c));
    printf("sizeof(long long): %d\n", sizeof(d));
    printf("sizeof(float): %Ld\n", sizeof(e));
    printf("sizeof(long double): %Ld\n", sizeof(f));
    double soma_tamanhos = a + b + c + d + e + f;
    printf("%lf\n", sizeof(soma_tamanhos));
}

/* soma dos primeiros N inteiros*/

/*quanto_tempo_passou */
int soma_N_int()
{
    int soma, N;
    printf("Indique N: \n");
    scanf("%d", &N);
    soma = (1 + N) * N / 2;
    printf("A soma dos primeiros N inteiros é: %d", soma);
    return 0;
}

int main()
{
    soma_N_int();
    ola_mundo_sizeof();
}