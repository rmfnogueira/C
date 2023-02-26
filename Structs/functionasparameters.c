#include <stdio.h>

// This example uses a function that accepts the structure as a parameter.
// We have one function parameter called myparameter of type struct MyStruct.
struct MyStruct
{
    char c;
    int x;
    double d;
} TESTE;

struct novo
{
    char c;
    int x;
    double d;
};

void print_struct(struct novo *param)
{
    printf("Member c has a value of %c\n", param->c);
    printf("Member x has a value of %d\n", param->x);
    printf("Member d has a value of %f\n", param->d);
}

typedef struct
{
    char c;
    int x;
    double d;
} Teste2;

Teste2 createStruct(char cparam, int xparam, double dparam)
{
    Teste2 temps;
    temps.c = cparam;
    temps.x = xparam;
    temps.d = dparam;
    return temps;
}

// void myfunction(struct MyStruct myparameter)
// {
//     printf("Member c has a value of %c\n", myparameter.c);
//     printf("Member x has a value of %d\n", myparameter.x);
//     printf("Member d has a value of %f\n", myparameter.d);
// };

// To avoid typing a lengthy struct MyStruct type name, we can use a typedef to create an alias and shorten the declaration:
typedef struct
{
    char v;
    char f;
} vouf;

void palpites(vouf palpite)
{
    printf("O teu palpite é %c", palpite.v);
    printf("Member x has a value of %d\n", palpite.f);
}

void myfunction(struct MyStruct myparameter)
{
    printf("Member c has a value of %c\n", myparameter.c);
    printf("Member x has a value of %d\n", myparameter.x);
    printf("Member d has a value of %f\n", myparameter.d);
}
// Function parameters represent the values for the structure members.
int main(void)
{
    myfunction(TESTE);

    vouf tentativa = {'V', 'F'};
    palpites(tentativa);
}