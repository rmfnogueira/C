#include <stdio.h>
/*
The typedef declaration creates a synonym for the existing type.

typedef some_type our_new_name;

*/
typedef int inteiro;

int usainteiro(inteiro i)
{
    i++;
    printf("O valor e: %c\n", i);
};
// create an alias for a pointer type:
typedef char *carac;

char usacarac(carac c)
{
    c = 'C';
    printf("O valor e: %c\n", c);
};
// create an alias for a structure type
typedef struct estru estru;

struct estru
{
    char c;
    int x;
    double d;
};

int usaestru(estru s)
{
    s.c = 'A';
    s.d = 7;
    s.x = 7;
}
/*
or the equivalent, more widely used
typedef struct {} MyStruct ;
*/
