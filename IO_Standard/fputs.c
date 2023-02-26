#include <stdio.h>

/*
Writes the null-terminated string to the chosen outpu stream.

int fputs(const char *message, FILE *stream_name);

*/

int main(void)
{
    fputs("Esta mensagem vem da funcao fputs()\n", stdout);
}
