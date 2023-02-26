#include <stdio.h>  // prinf
#include <stdlib.h> // getenv,atoi

int main(void)
{
    char *repeticoes_texto = getenv("reps");
    int reps = repeticoes_texto ? atoi(repeticoes_texto) : 10;

    char *msg = getenv("msg");
    if (!msg)
        msg = "Uhh!";

    for (int i = 0; i < reps; i++)
    {
        printf("%s", msg);
    }
}