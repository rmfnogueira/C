#include <stdio.h>
/*
A structure is a type that has members. These members can be variables of other types.
A structure can be initialized by providing an initializer list with comma-separated values,
as in {value_1, value_2, value_n}:
*/
typedef struct
{
    char c;
    int x;
    double d;
} MyStruct;

// Members are initialized in the order in which they are declared

/*
    The following variant where we declare a structure
    and initialize a variable in the same statement is also valid:
*/
struct tes
{
    char c;
    int x;
    double d;
} tes = {'c', 123, 456.789}; // variable declaration and array initialization on same line

typedef struct
{
    char f;
    int c;
    double z;
} hm;

int main(void)
{
    // pass this variable as an argument to our myfunction function

    // initialize a variable of type struct

    MyStruct s = {'a', 123, 456.789}; // struct initialization, "instanciation"
    printf("\nVariable s of type MyStruct initialized.\n");
    printf("\nMember c has a value of %c\n", s.c);
    printf("\nMember x has a value of %d\n", s.x);
    printf("\nMember d has a value of %f\n", s.d);

    /*
    We can also initialize a structure using the so-called designated initializers
    We specify the member name and the value for that particular member using:

    {.member_name_1 = value_1, .member_name_2 = value_2, .member_name_n = value_n}
    */
    printf("\nVariable s of type MyStruct initialized.\n");
    // print out the values of individual members using the member access operator (.)
    printf("\nMember c has a value of %c\n", s.c); // s.member 'c'
    printf("\nMember x has a value of %d\n", s.x); // s.member 'x'
    printf("\nMember d has a value of %f\n", s.d); // s.member 'd'

    printf("\nStructure initialized.\n");
    printf("\nMember c has a value of %c\n", tes.c);
    printf("\nMember x has a value of %d\n", tes.x);
    printf("\nMember d has a value of %f\n", tes.d);

    printf("\nVariable mh of type hm initialized.\n");
    printf("\nChanging member values...\n");

    printf("\nMember c has a value of %c\n", s.c);
    printf("\nMember x has a value of %d\n", s.x);
    printf("\nMember d has a value of %f\n", s.d);

    hm s1 = {'a', 123, 456.789};
    hm s2;
    s2 = s1; /* copies member values */
    printf("\nValues from s1 copied to s2.\n");
    printf("\nMember s2.c has a value of %c\n", s2.c);
    printf("\nMember s2.x has a value of %d\n", s2.f);
    printf("\nMember s2.d has a value of %f\n", s2.z);

    // MyStruct s = {'a', 123, 456.789};
    MyStruct *ps = &s;

    printf("\nMember c has a value of %c\n", ps->c);
    printf("\nMember x has a value of %d\n", ps->x);
    printf("\nMember d has a value of %f\n", ps->d);
}
