#include <stdio.h>

// function definitions
void print(const char *f1)
{
    printf("\n%s", f1);
}

double divisao(int f2, double f3)
{
    return f2 / f3;
}

int main(void)
{
    // define the function pointer
    void (*function_pointer1)(const char *); // create the pointer, with matching types to pointee
    double (*function_pointer2)(int, double);

    function_pointer1 = print; // point to function by name, not function call().
    function_pointer2 = divisao;

    function_pointer1("This is a function call trough a pointer.\n");
    double segunda_funcao = function_pointer2(3, 555444.6);
    printf("Valor chamado através de um pointer a uma função.%lf\n", segunda_funcao);
}