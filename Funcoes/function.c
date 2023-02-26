#include <stdio.h>

// function definition
// some_type function_name(optional_parameters_declarations);

/*
some_type function_name(optional_parameters_declarations)
{
      // function body with declarations and statements
      return some_value; // optional return statement
}
*/

/* parameters
// no parameters:
my_function_name(void).

// one parameter
my_function_name(some_type parameter_name).

// fixed number of parameters
my_function_name(some_type param_name1, some_type param_name2).
*/

void myFunction(void)
{
    printf("No parameters function.\n");
}

int mySum(int x, int y)
{
    return x + y;
    // terminates the function, returns result of the expression (x + y) to the caller main()
}

int devolve_X(int x)
{
    return x;
}

int factorial(int in)
{
    for (int i = 1; i < in; i++)
    {
        in *= i;
    }
    printf("\nO valor do factorial é:\n %d", in);
    return in;
}

int main(void)
{
    factorial(5);
    int resultado = mySum(2, 3);
    printf("\nResultado: %d\n", resultado);
    myFunction();
    int inteiro = 25;
    int devolucao = devolve_X(inteiro); // local variable as argument
    printf("\nDevolucao: %d", devolucao);
}

double finction(const int a, const int b)
{
    return a / b;
}
int main(void)
{
    int x = 123;
    double y = 456.789;
    double result = finction(x,y);
    printf("\n%f", result);
}