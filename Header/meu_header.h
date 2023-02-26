/*
Ter .h e .c é o mesmo, dado que na compilação o são combinados numa unica unidadde de tradução (translation unit)

stdlib headers -> <stdio.h>
user headers   -> "meu_header.h"

*/
#ifndef MEU_HEADER_H // guarda de código
#define MEU_HEADER_H // Este macro, com o nome do ficheiro header, nega a inclusão do conteúdo do .h mais que uma vez.

#include <stdio.h>

void minha_funcao();

#endif