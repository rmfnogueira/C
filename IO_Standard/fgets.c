/*
--- FGETS --- <stdio.h>
Ao aceitar/receber valores em formato/tipo string,
é melhor utilizar a funcao fgets em vez de scanf.
fgets não cria ou tem menos possibilidade de criar
buffer overflow.

char *fgets(char *str, int how_many_characters, FILE *stream_name);
*/
#include <stdio.h>

// Exemplo simples sem verificação de erros

void extract_char_arr_buff()
{
    // error checking ommitted
    printf("Introduz uma frase: \n");
    char str[100];
    fgets(str, 100, stdin);
    printf("Introduziste: %s\n", str);
}

// Exemplo completo com verificação de erros

void extract_char_arr_buff_full()
{
    // error checking ommitted
    printf("Introduz uma frase: \n");
    char str[100];
    if (fgets(str, 100, stdin != NULL))
    {
        printf("Introduziste: %s\n", str);
    }
    else
    {
    }
}

int main(void)
{
    extract_char_arr_buff();
}
