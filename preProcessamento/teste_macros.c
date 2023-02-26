#include <stdio.h>
void test_macro()
{
    printf("The current source code line is: %d\n", __LINE__);
    printf("This source code file is called: %s\n", __FILE__);
    printf("This function's name is: %s\n", __func__);
    printf("This function's name is: %d\n", __STDC_VERSION__);
}
// define a macro
#define RUI 999
int fn_macro()
{
    int x = RUI;
    printf("x: %d", RUI);
#undef RUI
}
// Compilação condicional
#define O_MEU_MACRO_CONDICIONAL 7

int fn_macro_cond()
{
#ifdef O_MEU_MACRO_CONDICIONAL
    printf("Codigo vai compilar\n");
#endif

#ifdef MACRO_INEXISTENTE
    printf("Codigo não vai compilar");
#endif
}
// built in macros
void builtin_macros()
{
    printf("The name of the function called is: %s\n", __func__);
    printf("This statement is on line: %d\n", __LINE__);
    printf("The name of the source file is: %s\n", __FILE__);
    printf("The file was created on: %s\n", __DATE__);
    myfunction();
    printf("The C standard used is: %ld\n", __STDC_VERSION__);
}
// function macros

#define MY_MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MY_MAX(a, b) (((a) > (b)) ? (a) : (b))
int evita_funcoes_tipo_macros()
{
    int x = 123;
    int y = 456;
    printf("The MY_MIN macro expands to: %d.\n", MY_MIN(x, y));
    printf("The MY_MAX macro expands to: %d.\n", MY_MAX(x, y));
};

int main(void)
{
    test_macro();
    builtin_macros();
    fn_macro_cond();
    fn_macro();
}
