/*
O lançamento de um dado é basicamente o mesmo que escolher um número aleatório entre 1 e 6 (ou 12, 20 ou quantas faces o dado tiver). Deves encontrar uma maneira de escolher aleatoriamente um número nesse intervalo dado no input. O teu programa deve gerar resultados o mais aleatórios possível. Se o correres e para os mesmo dados der sempre o mesmo output isso não seria muito aleatório, pois não? Tenta garantir que isso não acontece.

Não multipliques um lançamento pelo número de dados, por favor. Isso estaria incorreto pois estarias a eliminar vários valores possíveis. Por exemplo, não é possível obter o resultado 14 a partir do input 3d6 se apenas lançares um dado uma vez e o multiplicares por 3. Todos os lançamentos devem ser independentes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_DADOS 100
#define MIN_DADOS 1
#define MIN_FACES 2
#define MAX_FACES 100

/* lancador_de_dados */

// Gerar o resultado aleatório para cada dado.
int valor_random_por_face(int num_faces, int num_dados)
{
    srand(time(0));
    for (int i = 0; i < num_dados; i++)
    {
        i = (rand() % (1 - num_faces + 1)) + 1;
        printf("%d", i);
    }
}

int main()
{
    // How many dices
    int qtd_dados;
    int qtd_faces;
    int qtd_lancamentos;
    do
    {
        // Get user info
        printf("Introduza o numero de dados?\n");
        qtd_dados;
        scanf("%d", &qtd_dados);
        printf("Com quantas faces?\n");
        qtd_faces;
        scanf("%d", &qtd_faces);
        printf("Quantos lancamentos pretende efetuar?\n");
        qtd_lancamentos;
        scanf("%d", &qtd_lancamentos);
    } while (
        (qtd_dados < MIN_DADOS || qtd_dados > MAX_DADOS) &&
        (qtd_faces < MIN_FACES || qtd_faces > MAX_FACES));

    valor_random_por_face(qtd_faces, qtd_dados);
}