// standard-library header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ficheiro header definido pelo utilizador
#include "primeiro_ficheiro_header.h"

// #define cria um macro
//#define directive replaces an identifier with the replacement_text in our source code.
// The preprocessor replaces all occurrences of some_identifier_name with the some_replacement_text in our source code when the compilation begins
#define MAX 100
#define ARRAY_ELEMENTS 3

// exemplo definicao de macro com caracter
#define NOVA_LINHA '\n'
#define ESPACO ' '

/*
#undef
quando o macro (#define) deixa de ser necessario,
ou quando o pretendemos definir
*/

#define OUTRO_MAX 123

int main(void)
{
    printf("A utilizar alguns ficheiros header da biblioteca standard e o criado por mim no diretorio do codigo fonte.\n");

    // exemplo com tipo array
    int x = MAX;
    int arr[ARRAY_ELEMENTS];
    for (int i = 0; i < ARRAY_ELEMENTS; i++)
    {
        printf("\nValor de elemento é: %d\n", i);
    }
    printf("\nValor do identificador definido MAX: %d\n", x);
    printf("Este exemplo utiliza%cuses %cmacros.", ESPACO, NOVA_LINHA);

    // exemplo #undef
    int i_ = 4;
    printf("\nO valor é: %d\n", i_);
#undef OUTRO_MAX
    printf("Macro não definido. o valor de OUTRO_MAX não existe.\n");
#define OUTRO_MAX 456
    printf("Macro OUTRO_MAX redefinido e a existir novamente.\n");
    x = OUTRO_MAX;
    printf("Valor de OUTRO_MAX é: %d\n", x);
}