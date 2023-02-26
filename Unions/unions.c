#include <stdio.h>

/*
A union is a user-defined type whose members overlap in memory
union some_name
{
    type_name member_name_1;
    type_name member_name_2;
    // ...
};
*/

union MyUnion
{
    char c;
    int x;
    double d;
};

int main(void)
{
    union MyUnion u; 
    u.c = 'A';
    printf("The union's char member value: %c\n", u.c);
    u.x = 123;
    printf("The union's int member value: %d\n", u.x);
    u.d = 456.789;
    printf("The union's double member value: %f\n", u.d);
}
