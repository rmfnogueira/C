/*
 A structure is a type that has members.
 These members can be variables of other types.

struct some_name
{
    type_name member_name_1;
    type_name member_name_2;
}
*/

#include <stdio.h>

// We can declare a variable m of this 'struct MyStruct' type either by placing the variable name after the structure's closing brace:
struct Struct1 // nome da estrutura também é chamado de tag.
{
    char c;
    int x;
    double c;
} a; // a is a variable of this type, meu_struct

// or by writing 'struct MyStruct s'
struct Struct2
{
    char c;
    int x;
    double c;
}; // will resolve to b variable

/* We can eliminate struct MyStruct wording when defining a structure type
by utilizing the typedef declaration:
*/
typedef struct Struct3 Struct3; // creates an alias for a struct MyStruct type
struct Struct3
{
    char c;
    int x;
    double d;
}; // will resolve to t variable

// Another way to create an alias for a structure type is to use the following code:
typedef struct
{
    char c;
    int x;
    double d;
} Struct4;

int main(void)
{
    printf("Structure type struct Struct1 declared.\n");
    printf("Variable s of type struct Struct1 declared.\n");
    struct Struct2 b;
    struct Struct3 c;
    Struct4 d;
    printf("Declared a structure of type: struct meu_struct: \n");
};
typedef struct structure
{
    int c;
};
