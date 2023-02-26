/*
We can compile parts (portions, sections, areas) of the source code and exclude others.
We do so by utilizing a few conditional directives.

The portion of the code surrounded by
#if and #endif directives will get compiled
if the condition is true.

*/

#include <stdio.h>

#define MY_FLAG 123

// using #if and #endif
int if_endif()
{
#if MY_FLAG < 123
    printf("This portion of the code (A)\n");
    printf("will not get compiled.\n");
#endif
    printf("This portion of the code (B)\n");
    printf("Will get compiled.\n");
}

// We can also include additional #else and #elseif
int if_else_elseif_end()
{
#if MY_FLAG < 123
    printf("This portion of the code (A)\n");
    printf("will not get compiled.\n");
#elif MY_FLAG == 123
    printf("This portion of the code (B)\n");
    printf("will get compiled.\n");
#else
    printf("This portion of the code (C)\n");
    printf("will also be skipped.\n");
#endif
}

/*
#ifdef directive: checks if a macro name is defined.

#ifdef macro_name
      Our source code
#endif

*/

#define MY_MACRO // podemos definir um macro sem atribuir um valor

int if_def()
{
#ifdef MY_MACRO
    printf("This portion of the code (A)\n");
    printf("will get compiled.\n");
#endif
#ifdef NON_EXISTING_MACRO
    printf("This portion of the code (B)\n");
    printf("will not get compiled.\n");
#endif
}

/*
 #ifndef directive checks if a macro name is not defined
*/

#define ANOTHER_MACRO
int infdef()
{
#ifndef ANOTHER_MACRO
    printf("This portion of the code (A)\n");
    printf("will not get compiled.\n");
#endif
#ifndef NON_EXISTING_MACRO
    printf("This portion of the code (B)\n");
    printf("will get compiled.\n");
#endif
}

// we can use #ifndef to define to test a macro definition, and if false, define it

int infdef()
{
#ifndef _MACRO
#define _MACRO
    printf("Macro definido\n");
#endif
}
