#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE !TRUE
#define N 8

void print_matrix(int *m)
{
    int i;

    for (i = 0; i < N; i++)
    {
        if (i < N - 1)
            printf("%d, ", *(m + i));
        else
            printf("%d", *(m + i));
    }
}
int qcheck(int matrix[N])
{
    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if ((matrix[i] == matrix[j]) && (i != j))
                return FALSE;

            if ((abs(matrix[i] - matrix[j]) == abs(i - j)) && (i != j))
                return FALSE;
        }
    }

    return TRUE;
}
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int *qfix(int matrix[N])
{
    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            swap(&matrix[i], &matrix[j]);
            if (qcheck(matrix))
                return matrix;
            swap(&matrix[j], &matrix[i]);
        }
    }
    return matrix;
}

int main(void)
{
    int table1[8] = {4, 2, 7, 3, 6, 8, 5, 1};
    int table2[8] = {2, 5, 7, 4, 1, 8, 6, 3};
    int table3[8] = {5, 3, 1, 4, 2, 8, 6, 3};
    int table4[8] = {5, 8, 2, 4, 7, 1, 3, 6};
    int table5[8] = {4, 3, 1, 8, 1, 3, 5, 2};

    int table6[8] = {8, 6, 4, 2, 7, 1, 3, 5};
    int table7[8] = {8, 5, 1, 3, 6, 2, 7, 4};
    int table8[8] = {4, 6, 8, 3, 1, 2, 5, 7};
    int table9[8] = {7, 1, 3, 6, 8, 5, 2, 4};
    printf("qcheck({4, 2, 7, 3, 6, 8, 5, 1}) => %s\n", qcheck(table1) ? "true" : "false");
    printf("qcheck({2, 5, 7, 4, 1, 8, 6, 3}) => %s\n", qcheck(table2) ? "true" : "false");
    printf("qcheck({5, 3, 1, 4, 2, 8, 6, 3}) => %s\n", qcheck(table3) ? "true" : "false");
    printf("qcheck({5, 8, 2, 4, 7, 1, 3, 6}) => %s\n", qcheck(table4) ? "true" : "false");
    printf("qcheck({4, 3, 1, 8, 1, 3, 5, 2}) => %s\n", qcheck(table5) ? "true" : "false");

    printf("qfix({8, 6, 4, 2, 7, 1, 3, 5}) => {");
    print_matrix(qfix(table6));
    printf("}\n");

    printf("qfix({8, 5, 1, 3, 6, 2, 7, 4}) => {");
    print_matrix(qfix(table7));
    printf("}\n");

    printf("qfix({4, 6, 8, 3, 1, 2, 5, 7}) => {");
    print_matrix(qfix(table8));
    printf("}\n");

    printf("qfix({7, 1, 3, 6, 8, 5, 2, 4}) => {");
    print_matrix(qfix(table9));
    printf("}\n");

    return 0;
}
