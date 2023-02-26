/*while*/
#include <stdio.h>

// soma primeiros 4 quadrados
int fn__soma_4_q()
{
    int soma = 0, i = 1; // variável iteradora, para controlar final do ciclo
    while (i < 4)
    {
        soma = i * i;
        i++; // acrescenta 1 ao controlo, contabilizando os ciclos
    }
    printf("Soma dos primeiros 4 quadrados: %d", soma);
}

/*Pretende-se saber o número associado aos caracteres de 'a' a 'z'.*/
void num_de_AaZ()
{
    // minha solução seria manual
    // char arr[3] = {'a', 'b', 'c'};
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("\n%d\n", i);
    // }

    /* enunciado, afinal c sabe o alfabeto :) */
    char c = 'a';
    while (c <= 'z')
    {
        printf("\nLetra %c = %d", c, c);
        c++; // avança um passo
    }
}

/*
Pretendese saber para um determinado número inteiro K,
quantos pares de números inteiros (A,B) existem que verifiquem as seguintes condições:
A+B<=K,
A*B<=K,
A>=1 e B>=1*/
int qtos_pares()
{
    int A, B, k, contagem;
    // O programa necessita iterar em A e em B. Como A e B têm de ser maior ou igual a 1, e
    // nenhum pode ser maior que K, cada ciclo tem de ser feito entre 1 e K.while (k % 2 == 0)
    {
        printf("indique k: ");
        scanf("%d", k);
        contagem = 0;
        A = 1;
        while (A <= k)
        {
            B = 1;
            while (B <= k)
            {
                if (A + B <= k && A * B <= k)
                    contagem++;
                B++;
            }
            A++;
        }
        printf("total: %d", contagem);
    }
}

int main()
{
    fn__soma_4_q();
    num_de_AaZ();
}
