#include <stdio.h>

/*
--- SSCANF ---
The sscanf function reads from a character array buffer instead of a standard input.
Salva os dados lidos numa lista separada por virgulas de variaveis
baseada nos especificadores de formato.

assinatura:

int sscanf ( const char * buffer, const char * format, …);

*/

int extract_char_array_buffer_separate_variables()
{
    char buff[50] = "A 5 4789.789"; // se a string conter virgulas (A,5,4.789), estas tem que ser incluidas na especificacao em scanf
    char c;
    int x;
    double d;
    sscanf(buff, "%c %x %d", &c, &x, &d); // se tivesse virgulas acima ("%c,%x,%d")
    printf("os valores sao: %c, %d, %lf\n ", c, x, d);
}

int main(void)
{
    extract_char_array_buffer_separate_variables();
}