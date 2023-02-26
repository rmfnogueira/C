/*
Ambito/Scope LOCAL
os valores entre o corpo de uma função {<------->}
pode ser considerado como o ambito local.

São locais á função.
*/

#include <stdio.h>

double d = 2345; // d existe no ambito global

// x existe apenas no ambito da funcao fn()
fn()
{
    int x = 3; // em scope local
    printf("%d", x);
}

// x não é visivel aqui, globalmente

int main(void)
{
    // x não é visivel aqui
    fn();
    printf("%f\n", d); // utiliza variavel definida globalmente
}

/*
SCOPE GLOBAL - quando olhamos para o ficheiro
fonte (.c) como um todo.
*/
