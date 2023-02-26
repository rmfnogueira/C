/*
Outputs/writes a character to the standard output.

int putchat(int ch);
*/
#include <stdio.h>
#include <stdlib.h>

// print single char
void single_char()
{
    char c = 'A';
    putchar(c);
}

// print character array, um de cada vez, sem verificacao de erro
void putchar_array()
{
    char arr[] = "Hello!";
    for (size_t i = 0; i < 7; i++)
    {
        putchar(arr[i]);
    }
}

void output_one_character_at_a_time()
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}

int copy_program_again()
{
    /* copy input to output; 2nd version  */
    int c;
    while (c = getchar())
        ;
    putchar(c);
}
/*
c = getchar() != EOF
is equivalent to
c = (getchar() != EOF)
*/

int test_getchar()

{
    char zero_ou_1 = getchar() != EOF;
    printf("%d", zero_ou_1);
}

/* count characters in input; 1st version */
int count_char()
{
    long nc = 0;
    while (getchar() != EOF)
    {
        ++nc;
        printf("%ld\n", nc);
    }
}
/* count characters in input; 2nd version */
int count_char_2()
{
    double nc;
    for (nc = 0; nc < getchar() != EOF; ++nc)
        ; // corpo vazio representadod por ;
    printf("%0.f", nc);
}

/*count lines in input */
int contagem_nova_linha()
{
    int caracter, linha = 0;
    while ((caracter = getchar()) != EOF)
    {
        if (caracter == '\n')
            ++linha;

        printf("%d", linha);
    }
}

/*contar sequencias de escape sequences \n \t \b*/
int line_count()
{
    /*
    . definir sequencias a escapar
    . para cada ocorrencia do caracter, contar
    */
    char nl = '\n';
    char tab = '\t';
    char branco = ' ';
    int counter = 0;
    while ((getchar()) != EOF)
    {
        if (nl || tab || branco)
            printf("%d", counter);
    }
}

/*
copia input para output.
substitui cada string de um ou mais espaço
*/
int fn_conta()
{
    char *frase[] = malloc();for (int i = 0; i <= ((getchar()) != EOF); i++)for (int i = 0; i <= ((getchar()) != EOF); i++)
    for (int i = 0; i <= ((getchar()) != EOF); i++)
    {
        // substituir caracteres blank
        if (i = '\0')
            i = ' ';
        printf("%s", i);
    }
}

// copiar input para output
int main()
{
    fn_conta();
}